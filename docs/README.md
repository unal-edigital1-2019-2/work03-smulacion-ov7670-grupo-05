## GRUPO DE TRABAJO 05

## INTEGRANTES DEL GRUPO
#### Jhohan David Contreras Aragón		1007687796
#### Andrés Felipe Medina Medina 		1015464557
#### Mitchell Elizabeth Rodríguez Barreto	1032503089

## Simulación funcionamiento de la cámara

En el presente documento se mostrará la simulación y algunos cambios realizados al módulo de captura de datos con el fin de observar su funcionamiento, sin tener la incertidumbre si lo que se tiene incorrecto es la captura o la configuración de la cámara con Arduino.

Para esto primero se realiza la simulación sin modificar el fichero ***cam_read.v***, como se observa, la simulación muestra dos pantallas, ambas con un cuadro de líneas azules y rosadas, tal como se ve en una pantalla VGA cuando no se conecta una cámara. La imagen se debe a que es el valor inicial configurado en la memoria RAM (***buffer_ram_dp***).

![Fig.1](./figs/simulacion_inicial.png)

Luego se procede a diseñar el módulo ***cam_read.v*** que corresponde a la captura de datos y almacenamiento en la RAM, en este caso se modifica el archivo ***captura_de_datos_downsampler.v*** presentado en [work02-captura-datos-0v7670-grupo-05](https://github.com/unal-edigital1-2019-2/work02-captura-datos-0v7670-grupo-05/blob/master/hdl/src/captura_de_datos_downsampler.v), debido  que presenta algunas fallas en su funcionamiento. 

Primero se declara el módulo y se asignan los valores de entrada y salida (éstas se dieron en la plantilla WP03). Además, se crea una variable interna de tipo registro para que haga la función de contador.

![Fig.2](./figs/codigo1.jpg)

#### Entradas:
* *pclk:* Señal PCLK dada por la cámara.
* *rst:* Reset.
* *vsync:* Señal VSYNC dada por la cámara.
* *href:* Señal HREF dada por la cámra.
* *px_data:* Señal de 8 bits dada por la cámara la cual contiene la información de los colores (**D[7:0]**).

#### Salidas:
* *mem_px_addr:* Variable de 15 bits que almacena la dirección en donde se guardaran los datos del color.
* *mem_px_data* Variable de 8 bits que almacena la información del color, en éste caso formato RGB332.
* *px_wr:* Variable que controla la escritura de los datos en la RAM.

**Nota:** Todas las salidas son registros debido a que almacenan datos.

El diagrama estructural es el siguiente:

***Diagrama estructural***

Luego se guarda la información de color en *mem_px_data*, los primeros seis bits más significativos corresponden al rojo y al verde y son capturados del primer byte de un pixel (formato RGB565) en el cual la varible *cont* es igual a cero, los dos últimos son capturados en el último byte del pixel, con *cont* igual a 1. También, se debe tener cuenta que sólo se recopilan los datos cuando PCLK y HREF están en flanco de subida y VSYNC en flanco de bajada.

El registro de escritura se mantiene en cero cuando se capturan los primeros seis bits y cuando HREF están en flanco de bajada, cambia a 1 cuando ya se han capturado los últimos dos bits y está listo para escribir en la RAM.

![Fig.3](./figs/codigo2.jpg)

La dirección de entrada * mem_px_addr * se modifica cada que el contador es igual a 1, y su valor va incrementado en uno.

![Fig.3](./figs/codigo3.jpg)

A continuación se muestra el diagrama funcional para poder visualizar de forma más clara la operación del módulo de captura de datos

***Diagrama funcional***
