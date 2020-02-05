/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/elizabeth/work03-smulacion-ov7670-grupo-05/hw/src/cam_read.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};
static int ng6[] = {7, 0};
static int ng7[] = {4, 0};



static void Always_45_0(char *t0)
{
    char t14[8];
    char t19[8];
    char t28[8];
    char t36[8];
    char t79[8];
    char t81[8];
    char t87[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t80;
    int t82;
    int t83;
    int t84;
    int t85;
    int t86;
    char *t88;
    char *t89;
    char *t90;
    int t91;

LAB0:    t1 = (t0 + 4896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 5216);
    *((int *)t2) = 1;
    t3 = (t0 + 4928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB10:    t5 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 32);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t13 == 1)
        goto LAB17;

LAB18:
LAB19:
LAB8:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 1504U);
    t5 = *((char **)t2);
    t2 = (t0 + 3184);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 1);
    goto LAB2;

LAB6:    xsi_set_current_line(47, ng0);

LAB9:    xsi_set_current_line(48, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2384);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 15);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB8;

LAB11:    xsi_set_current_line(61, ng0);

LAB20:    xsi_set_current_line(62, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 3504);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 16);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3184);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t11) != 0)
        goto LAB23;

LAB24:    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = *((unsigned int *)t15);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB25;

LAB26:    memcpy(t36, t14, 8);

LAB27:    t67 = (t36 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t36);
    t71 = (t70 & t69);
    t72 = (t71 != 0);
    if (t72 > 0)
        goto LAB39;

LAB40:
LAB41:    goto LAB19;

LAB13:    xsi_set_current_line(66, ng0);

LAB42:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 3664);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    memset(t14, 0, 8);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 & 65535U);
    if (t10 != 0)
        goto LAB46;

LAB44:    if (*((unsigned int *)t12) == 0)
        goto LAB43;

LAB45:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;

LAB46:    memset(t19, 0, 8);
    t20 = (t14 + 4);
    t16 = *((unsigned int *)t20);
    t17 = (~(t16));
    t18 = *((unsigned int *)t14);
    t22 = (t18 & t17);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t20) != 0)
        goto LAB49;

LAB50:    t27 = (t19 + 4);
    t24 = *((unsigned int *)t19);
    t25 = *((unsigned int *)t27);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB51;

LAB52:    memcpy(t36, t19, 8);

LAB53:    t73 = (t36 + 4);
    t68 = *((unsigned int *)t73);
    t69 = (~(t68));
    t70 = *((unsigned int *)t36);
    t71 = (t70 & t69);
    t72 = (t71 != 0);
    if (t72 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB73;

LAB74:
LAB75:
LAB63:    goto LAB19;

LAB15:    xsi_set_current_line(82, ng0);

LAB76:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 1664U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB79:    goto LAB19;

LAB17:    xsi_set_current_line(110, ng0);

LAB100:    xsi_set_current_line(111, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2704);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 1984U);
    t3 = *((char **)t2);

LAB101:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t13 == 1)
        goto LAB102;

LAB103:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t13 == 1)
        goto LAB104;

LAB105:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t13 == 1)
        goto LAB106;

LAB107:
LAB108:    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3024);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);
    goto LAB19;

LAB21:    *((unsigned int *)t14) = 1;
    goto LAB24;

LAB23:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB24;

LAB25:    t20 = (t0 + 1504U);
    t21 = *((char **)t20);
    memset(t19, 0, 8);
    t20 = (t21 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t21);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB31;

LAB29:    if (*((unsigned int *)t20) == 0)
        goto LAB28;

LAB30:    t27 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t27) = 1;

LAB31:    memset(t28, 0, 8);
    t29 = (t19 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t19);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t29) != 0)
        goto LAB34;

LAB35:    t37 = *((unsigned int *)t14);
    t38 = *((unsigned int *)t28);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t40 = (t14 + 4);
    t41 = (t28 + 4);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t40);
    t44 = *((unsigned int *)t41);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB36;

LAB37:
LAB38:    goto LAB27;

LAB28:    *((unsigned int *)t19) = 1;
    goto LAB31;

LAB32:    *((unsigned int *)t28) = 1;
    goto LAB35;

LAB34:    t35 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB35;

LAB36:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t36) = (t48 | t49);
    t50 = (t14 + 4);
    t51 = (t28 + 4);
    t52 = *((unsigned int *)t14);
    t53 = (~(t52));
    t54 = *((unsigned int *)t50);
    t55 = (~(t54));
    t56 = *((unsigned int *)t28);
    t57 = (~(t56));
    t58 = *((unsigned int *)t51);
    t59 = (~(t58));
    t13 = (t53 & t55);
    t60 = (t57 & t59);
    t61 = (~(t13));
    t62 = (~(t60));
    t63 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t63 & t61);
    t64 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t64 & t62);
    t65 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t65 & t61);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    goto LAB38;

LAB39:    xsi_set_current_line(63, ng0);
    t73 = ((char*)((ng4)));
    t74 = (t0 + 3024);
    xsi_vlogvar_assign_value(t74, t73, 0, 0, 3);
    goto LAB41;

LAB43:    *((unsigned int *)t14) = 1;
    goto LAB46;

LAB47:    *((unsigned int *)t19) = 1;
    goto LAB50;

LAB49:    t21 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB50;

LAB51:    t29 = (t0 + 1664U);
    t35 = *((char **)t29);
    memset(t28, 0, 8);
    t29 = (t35 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t35);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t29) != 0)
        goto LAB56;

LAB57:    t37 = *((unsigned int *)t19);
    t38 = *((unsigned int *)t28);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t41 = (t19 + 4);
    t42 = (t28 + 4);
    t50 = (t36 + 4);
    t43 = *((unsigned int *)t41);
    t44 = *((unsigned int *)t42);
    t45 = (t43 | t44);
    *((unsigned int *)t50) = t45;
    t46 = *((unsigned int *)t50);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB58;

LAB59:
LAB60:    goto LAB53;

LAB54:    *((unsigned int *)t28) = 1;
    goto LAB57;

LAB56:    t40 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB57;

LAB58:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t50);
    *((unsigned int *)t36) = (t48 | t49);
    t51 = (t19 + 4);
    t67 = (t28 + 4);
    t52 = *((unsigned int *)t19);
    t53 = (~(t52));
    t54 = *((unsigned int *)t51);
    t55 = (~(t54));
    t56 = *((unsigned int *)t28);
    t57 = (~(t56));
    t58 = *((unsigned int *)t67);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t75 = (t57 & t59);
    t61 = (~(t60));
    t62 = (~(t75));
    t63 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t63 & t61);
    t64 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t64 & t62);
    t65 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t65 & t61);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    goto LAB60;

LAB61:    xsi_set_current_line(67, ng0);

LAB64:    xsi_set_current_line(68, ng0);
    t74 = (t0 + 3504);
    t76 = (t74 + 56U);
    t77 = *((char **)t76);
    t78 = ((char*)((ng3)));
    memset(t79, 0, 8);
    xsi_vlog_unsigned_add(t79, 32, t77, 16, t78, 32);
    t80 = (t0 + 3504);
    xsi_vlogvar_assign_value(t80, t79, 0, 0, 16);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3824);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t19, 0, 8);
    t2 = (t19 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t19) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t10 & 7U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 7U);
    t11 = (t0 + 1824U);
    t12 = *((char **)t11);
    memset(t28, 0, 8);
    t11 = (t28 + 4);
    t15 = (t12 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (t17 >> 5);
    *((unsigned int *)t28) = t18;
    t22 = *((unsigned int *)t15);
    t23 = (t22 >> 5);
    *((unsigned int *)t11) = t23;
    t24 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t24 & 7U);
    t25 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t25 & 7U);
    xsi_vlogtype_concat(t14, 6, 6, 2U, t28, 3, t19, 3);
    t20 = (t0 + 2544);
    t21 = (t0 + 2544);
    t27 = (t21 + 72U);
    t29 = *((char **)t27);
    t35 = ((char*)((ng6)));
    t40 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t36, t79, t81, ((int*)(t29)), 2, t35, 32, 1, t40, 32, 1);
    t41 = (t36 + 4);
    t26 = *((unsigned int *)t41);
    t13 = (!(t26));
    t42 = (t79 + 4);
    t30 = *((unsigned int *)t42);
    t60 = (!(t30));
    t75 = (t13 && t60);
    t50 = (t81 + 4);
    t31 = *((unsigned int *)t50);
    t82 = (!(t31));
    t83 = (t75 && t82);
    if (t83 == 1)
        goto LAB65;

LAB66:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB70;

LAB68:    if (*((unsigned int *)t11) == 0)
        goto LAB67;

LAB69:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;

LAB70:    t15 = (t14 + 4);
    t20 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    *((unsigned int *)t14) = t17;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t20) != 0)
        goto LAB72;

LAB71:    t25 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t25 & 1U);
    t26 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t26 & 1U);
    t21 = (t0 + 3344);
    xsi_vlogvar_assign_value(t21, t14, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t5, 16, t11, 32);
    t12 = (t0 + 3984);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 16);
    goto LAB63;

LAB65:    t32 = *((unsigned int *)t81);
    t84 = (t32 + 0);
    t33 = *((unsigned int *)t36);
    t34 = *((unsigned int *)t79);
    t85 = (t33 - t34);
    t86 = (t85 + 1);
    xsi_vlogvar_assign_value(t20, t14, t84, *((unsigned int *)t79), t86);
    goto LAB66;

LAB67:    *((unsigned int *)t14) = 1;
    goto LAB70;

LAB72:    t18 = *((unsigned int *)t14);
    t22 = *((unsigned int *)t20);
    *((unsigned int *)t14) = (t18 | t22);
    t23 = *((unsigned int *)t15);
    t24 = *((unsigned int *)t20);
    *((unsigned int *)t15) = (t23 | t24);
    goto LAB71;

LAB73:    xsi_set_current_line(78, ng0);
    t5 = ((char*)((ng7)));
    t11 = (t0 + 3024);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 3);
    goto LAB75;

LAB77:    xsi_set_current_line(83, ng0);

LAB80:    xsi_set_current_line(85, ng0);
    t11 = (t0 + 3344);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    t20 = ((char*)((ng1)));
    memset(t14, 0, 8);
    t21 = (t15 + 4);
    t27 = (t20 + 4);
    t16 = *((unsigned int *)t15);
    t17 = *((unsigned int *)t20);
    t18 = (t16 ^ t17);
    t22 = *((unsigned int *)t21);
    t23 = *((unsigned int *)t27);
    t24 = (t22 ^ t23);
    t25 = (t18 | t24);
    t26 = *((unsigned int *)t21);
    t30 = *((unsigned int *)t27);
    t31 = (t26 | t30);
    t32 = (~(t31));
    t33 = (t25 & t32);
    if (t33 != 0)
        goto LAB84;

LAB81:    if (t31 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t14) = 1;

LAB84:    t35 = (t14 + 4);
    t34 = *((unsigned int *)t35);
    t37 = (~(t34));
    t38 = *((unsigned int *)t14);
    t39 = (t38 & t37);
    t43 = (t39 != 0);
    if (t43 > 0)
        goto LAB85;

LAB86:    xsi_set_current_line(92, ng0);

LAB91:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t19, 0, 8);
    t2 = (t19 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 3);
    *((unsigned int *)t19) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 3);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t10 & 3U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 3U);
    xsi_vlogtype_concat(t14, 2, 2, 1U, t19, 2);
    t11 = (t0 + 2544);
    t12 = (t0 + 2544);
    t15 = (t12 + 72U);
    t20 = *((char **)t15);
    t21 = ((char*)((ng3)));
    t27 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t28, t36, t79, ((int*)(t20)), 2, t21, 32, 1, t27, 32, 1);
    t29 = (t28 + 4);
    t17 = *((unsigned int *)t29);
    t13 = (!(t17));
    t35 = (t36 + 4);
    t18 = *((unsigned int *)t35);
    t60 = (!(t18));
    t75 = (t13 && t60);
    t40 = (t79 + 4);
    t22 = *((unsigned int *)t40);
    t82 = (!(t22));
    t83 = (t75 && t82);
    if (t83 == 1)
        goto LAB92;

LAB93:    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t5, 15, t11, 32);
    t12 = (t0 + 2384);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 15);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3824);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t5, 16, t11, 32);
    t12 = (t0 + 3824);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 16);

LAB87:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB97;

LAB95:    if (*((unsigned int *)t11) == 0)
        goto LAB94;

LAB96:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;

LAB97:    t15 = (t14 + 4);
    t20 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    *((unsigned int *)t14) = t17;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t20) != 0)
        goto LAB99;

LAB98:    t25 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t25 & 1U);
    t26 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t26 & 1U);
    t21 = (t0 + 3344);
    xsi_vlogvar_assign_value(t21, t14, 0, 0, 1);
    goto LAB79;

LAB83:    t29 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB84;

LAB85:    xsi_set_current_line(86, ng0);

LAB88:    xsi_set_current_line(87, ng0);
    t40 = (t0 + 1824U);
    t41 = *((char **)t40);
    memset(t28, 0, 8);
    t40 = (t28 + 4);
    t42 = (t41 + 4);
    t44 = *((unsigned int *)t41);
    t45 = (t44 >> 0);
    *((unsigned int *)t28) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 >> 0);
    *((unsigned int *)t40) = t47;
    t48 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t48 & 7U);
    t49 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t49 & 7U);
    t50 = (t0 + 1824U);
    t51 = *((char **)t50);
    memset(t36, 0, 8);
    t50 = (t36 + 4);
    t67 = (t51 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (t52 >> 5);
    *((unsigned int *)t36) = t53;
    t54 = *((unsigned int *)t67);
    t55 = (t54 >> 5);
    *((unsigned int *)t50) = t55;
    t56 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t56 & 7U);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t57 & 7U);
    xsi_vlogtype_concat(t19, 6, 6, 2U, t36, 3, t28, 3);
    t73 = (t0 + 2544);
    t74 = (t0 + 2544);
    t76 = (t74 + 72U);
    t77 = *((char **)t76);
    t78 = ((char*)((ng6)));
    t80 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t79, t81, t87, ((int*)(t77)), 2, t78, 32, 1, t80, 32, 1);
    t88 = (t79 + 4);
    t58 = *((unsigned int *)t88);
    t60 = (!(t58));
    t89 = (t81 + 4);
    t59 = *((unsigned int *)t89);
    t75 = (!(t59));
    t82 = (t60 && t75);
    t90 = (t87 + 4);
    t61 = *((unsigned int *)t90);
    t83 = (!(t61));
    t84 = (t82 && t83);
    if (t84 == 1)
        goto LAB89;

LAB90:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t5, 16, t11, 32);
    t12 = (t0 + 3984);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 16);
    goto LAB87;

LAB89:    t62 = *((unsigned int *)t87);
    t85 = (t62 + 0);
    t63 = *((unsigned int *)t79);
    t64 = *((unsigned int *)t81);
    t86 = (t63 - t64);
    t91 = (t86 + 1);
    xsi_vlogvar_assign_value(t73, t19, t85, *((unsigned int *)t81), t91);
    goto LAB90;

LAB92:    t23 = *((unsigned int *)t79);
    t84 = (t23 + 0);
    t24 = *((unsigned int *)t28);
    t25 = *((unsigned int *)t36);
    t85 = (t24 - t25);
    t86 = (t85 + 1);
    xsi_vlogvar_assign_value(t11, t14, t84, *((unsigned int *)t36), t86);
    goto LAB93;

LAB94:    *((unsigned int *)t14) = 1;
    goto LAB97;

LAB99:    t18 = *((unsigned int *)t14);
    t22 = *((unsigned int *)t20);
    *((unsigned int *)t14) = (t18 | t22);
    t23 = *((unsigned int *)t15);
    t24 = *((unsigned int *)t20);
    *((unsigned int *)t15) = (t23 | t24);
    goto LAB98;

LAB102:    xsi_set_current_line(115, ng0);
    t5 = (t0 + 3504);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t15 = (t0 + 2864);
    xsi_vlogvar_assign_value(t15, t12, 0, 0, 16);
    goto LAB108;

LAB104:    xsi_set_current_line(118, ng0);
    t5 = (t0 + 3824);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t15 = (t0 + 2864);
    xsi_vlogvar_assign_value(t15, t12, 0, 0, 16);
    goto LAB108;

LAB106:    xsi_set_current_line(121, ng0);
    t5 = (t0 + 3984);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t15 = (t0 + 2864);
    xsi_vlogvar_assign_value(t15, t12, 0, 0, 16);
    goto LAB108;

}


extern void work_m_15215406084645749473_3927878221_init()
{
	static char *pe[] = {(void *)Always_45_0};
	xsi_register_didat("work_m_15215406084645749473_3927878221", "isim/test_cam_TB_isim_beh.exe.sim/work/m_15215406084645749473_3927878221.didat");
	xsi_register_executes(pe);
}
