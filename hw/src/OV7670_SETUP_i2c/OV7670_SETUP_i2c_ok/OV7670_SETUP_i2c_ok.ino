#include <Wire.h>

#define OV7670_I2C_ADDRESS 0x21


void setup() {
  Wire.begin();
  Serial.begin(9600);  
  write_config_reg();
  delay(100);
  read_key_registers();
  set_color_matrix();
}

void loop(){
  
 }


void read_key_registers(){
  Serial.println(read_register_value(0x12), HEX); //COM7
  Serial.println(read_register_value(0x40), HEX); //COM15
  Serial.println(read_register_value(0x0C), HEX); //COM3
  Serial.println(read_register_value(0x3E), HEX); //COM14
}


void write_config_reg(){
  
  //Reset using COM7
  Serial.println(OV7670_write_register(0x12, 0x80));
  
  //Set QCIF and RGB Using COM7 and Color Bar Using COM7
  Serial.println(OV7670_write_register(0x12, 0x0C+0x02));
  
  //Set RGB 565 Using COM15
  Serial.println(OV7670_write_register(0x40,0xD0));
 
  //Enable Scaler Using COM3 
  Serial.println(OV7670_write_register(0x0C, 0x08));


  //Enable Scaling for Predefined Formats using COM14
  Serial.println(OV7670_write_register(0x3E, 0x08));
 

  //Set internal clock to use external clock using CLKRC
  Serial.println(OV7670_write_register(0x11, 0xC0));


}



byte read_register_value(int register_address){
  byte data = 0;
  Wire.beginTransmission(OV7670_I2C_ADDRESS);
  Wire.write(register_address);
  Wire.endTransmission();
  Wire.requestFrom(OV7670_I2C_ADDRESS,1);
  while(Wire.available()<1);
  data = Wire.read();
  return data;
}

String OV7670_write(int start, const byte *pData, int size){
    int n,error;
    Wire.beginTransmission(OV7670_I2C_ADDRESS);
    n = Wire.write(start);
    if(n != 1){
      return "I2C ERROR WRITING START ADDRESS";   
    }
    n = Wire.write(pData, size);
    if(n != size){
      return "I2C ERROR WRITING DATA";
    }
    error = Wire.endTransmission(true);
    if(error != 0){
      return String(error);
    }
    return "no errors :)";
 }

String OV7670_write_register(int reg_address, byte data){
  return OV7670_write(reg_address, &data, 1);
 }

void set_color_matrix(){
    OV7670_write_register(0x4f, 0x80);
    OV7670_write_register(0x50, 0x80);
    OV7670_write_register(0x51, 0x00);
    OV7670_write_register(0x52, 0x22);
    OV7670_write_register(0x53, 0x5e);
    OV7670_write_register(0x54, 0x80);
    OV7670_write_register(0x56, 0x40);
    OV7670_write_register(0x58, 0x9e);
    OV7670_write_register(0x59, 0x88);
    OV7670_write_register(0x5a, 0x88);
    OV7670_write_register(0x5b, 0x44);
    OV7670_write_register(0x5c, 0x67);
    OV7670_write_register(0x5d, 0x49);
    OV7670_write_register(0x5e, 0x0e);
    OV7670_write_register(0x69, 0x00);
    OV7670_write_register(0x6a, 0x40);
    OV7670_write_register(0x6b, 0x0a);
    OV7670_write_register(0x6c, 0x0a);
    OV7670_write_register(0x6d, 0x55);
    OV7670_write_register(0x6e, 0x11);
    OV7670_write_register(0x6f, 0x9f);
    OV7670_write_register(0xb0, 0x84);
}
