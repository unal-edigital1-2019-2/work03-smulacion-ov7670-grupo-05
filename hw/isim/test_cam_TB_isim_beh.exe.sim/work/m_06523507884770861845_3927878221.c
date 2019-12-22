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
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {7, 0};
static int ng4[] = {2, 0};



static void Always_37_0(char *t0)
{
    char t6[8];
    char t24[8];
    char t40[8];
    char t82[8];
    char t104[8];
    char t105[8];
    char t115[8];
    char t126[8];
    char t127[8];
    char t128[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t116;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    char *t134;
    unsigned int t135;
    int t136;
    char *t137;
    unsigned int t138;
    int t139;
    int t140;
    char *t141;
    unsigned int t142;
    int t143;
    int t144;
    unsigned int t145;
    int t146;
    unsigned int t147;
    unsigned int t148;
    int t149;
    int t150;
    unsigned int t151;

LAB0:    t1 = (t0 + 3616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3936);
    *((int *)t2) = 1;
    t3 = (t0 + 3648);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1664U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t0 + 1504U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng2)));
    memset(t24, 0, 8);
    t25 = (t23 + 4);
    t26 = (t22 + 4);
    t27 = *((unsigned int *)t23);
    t28 = *((unsigned int *)t22);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t25);
    t31 = *((unsigned int *)t26);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t26);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB13;

LAB10:    if (t36 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t24) = 1;

LAB13:    t41 = *((unsigned int *)t6);
    t42 = *((unsigned int *)t24);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t44 = (t6 + 4);
    t45 = (t24 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB14;

LAB15:
LAB16:    t72 = (t40 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t40);
    t76 = (t75 & t74);
    t77 = (t76 != 0);
    if (t77 > 0)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB43;

LAB40:    if (t18 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t6) = 1;

LAB43:    t8 = (t0 + 1504U);
    t21 = *((char **)t8);
    t8 = ((char*)((ng2)));
    memset(t24, 0, 8);
    t22 = (t21 + 4);
    t23 = (t8 + 4);
    t27 = *((unsigned int *)t21);
    t28 = *((unsigned int *)t8);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t22);
    t31 = *((unsigned int *)t23);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t22);
    t35 = *((unsigned int *)t23);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB47;

LAB44:    if (t36 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t24) = 1;

LAB47:    t41 = *((unsigned int *)t6);
    t42 = *((unsigned int *)t24);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t26 = (t6 + 4);
    t39 = (t24 + 4);
    t44 = (t40 + 4);
    t47 = *((unsigned int *)t26);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    *((unsigned int *)t44) = t49;
    t50 = *((unsigned int *)t44);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB48;

LAB49:
LAB50:    t54 = (t40 + 4);
    t73 = *((unsigned int *)t54);
    t74 = (~(t73));
    t75 = *((unsigned int *)t40);
    t76 = (t75 & t74);
    t77 = (t76 != 0);
    if (t77 > 0)
        goto LAB51;

LAB52:
LAB53:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB58;

LAB55:    if (t18 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t6) = 1;

LAB58:    t8 = (t0 + 1504U);
    t21 = *((char **)t8);
    t8 = ((char*)((ng2)));
    memset(t24, 0, 8);
    t22 = (t21 + 4);
    t23 = (t8 + 4);
    t27 = *((unsigned int *)t21);
    t28 = *((unsigned int *)t8);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t22);
    t31 = *((unsigned int *)t23);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t22);
    t35 = *((unsigned int *)t23);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB62;

LAB59:    if (t36 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t24) = 1;

LAB62:    t41 = *((unsigned int *)t6);
    t42 = *((unsigned int *)t24);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t26 = (t6 + 4);
    t39 = (t24 + 4);
    t44 = (t40 + 4);
    t47 = *((unsigned int *)t26);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    *((unsigned int *)t44) = t49;
    t50 = *((unsigned int *)t44);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB63;

LAB64:
LAB65:    t54 = (t0 + 2704);
    t55 = (t54 + 56U);
    t72 = *((char **)t55);
    t78 = ((char*)((ng1)));
    memset(t82, 0, 8);
    t79 = (t72 + 4);
    t80 = (t78 + 4);
    t73 = *((unsigned int *)t72);
    t74 = *((unsigned int *)t78);
    t75 = (t73 ^ t74);
    t76 = *((unsigned int *)t79);
    t77 = *((unsigned int *)t80);
    t85 = (t76 ^ t77);
    t86 = (t75 | t85);
    t87 = *((unsigned int *)t79);
    t88 = *((unsigned int *)t80);
    t89 = (t87 | t88);
    t90 = (~(t89));
    t91 = (t86 & t90);
    if (t91 != 0)
        goto LAB69;

LAB66:    if (t89 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t82) = 1;

LAB69:    t92 = *((unsigned int *)t40);
    t93 = *((unsigned int *)t82);
    t94 = (t92 & t93);
    *((unsigned int *)t104) = t94;
    t83 = (t40 + 4);
    t84 = (t82 + 4);
    t97 = (t104 + 4);
    t95 = *((unsigned int *)t83);
    t96 = *((unsigned int *)t84);
    t99 = (t95 | t96);
    *((unsigned int *)t97) = t99;
    t100 = *((unsigned int *)t97);
    t101 = (t100 != 0);
    if (t101 == 1)
        goto LAB70;

LAB71:
LAB72:    t107 = (t104 + 4);
    t142 = *((unsigned int *)t107);
    t145 = (~(t142));
    t147 = *((unsigned int *)t104);
    t148 = (t147 & t145);
    t151 = (t148 != 0);
    if (t151 > 0)
        goto LAB73;

LAB74:
LAB75:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB12:    t39 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB13;

LAB14:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t6 + 4);
    t55 = (t24 + 4);
    t56 = *((unsigned int *)t6);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t24);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB16;

LAB17:    xsi_set_current_line(40, ng0);

LAB20:    xsi_set_current_line(41, ng0);
    t78 = (t0 + 2704);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    t81 = ((char*)((ng2)));
    memset(t82, 0, 8);
    t83 = (t80 + 4);
    t84 = (t81 + 4);
    t85 = *((unsigned int *)t80);
    t86 = *((unsigned int *)t81);
    t87 = (t85 ^ t86);
    t88 = *((unsigned int *)t83);
    t89 = *((unsigned int *)t84);
    t90 = (t88 ^ t89);
    t91 = (t87 | t90);
    t92 = *((unsigned int *)t83);
    t93 = *((unsigned int *)t84);
    t94 = (t92 | t93);
    t95 = (~(t94));
    t96 = (t91 & t95);
    if (t96 != 0)
        goto LAB24;

LAB21:    if (t94 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t82) = 1;

LAB24:    t98 = (t82 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (~(t99));
    t101 = *((unsigned int *)t82);
    t102 = (t101 & t100);
    t103 = (t102 != 0);
    if (t103 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(47, ng0);

LAB31:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t24, 0, 8);
    t2 = (t24 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 3);
    *((unsigned int *)t24) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 3);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t13 & 3U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 3U);
    xsi_vlogtype_concat(t6, 2, 2, 1U, t24, 2);
    t5 = (t0 + 2384);
    t7 = (t0 + 2384);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng1)));
    t23 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t40, t82, t104, ((int*)(t21)), 2, t22, 32, 1, t23, 32, 1);
    t25 = (t40 + 4);
    t15 = *((unsigned int *)t25);
    t64 = (!(t15));
    t26 = (t82 + 4);
    t16 = *((unsigned int *)t26);
    t65 = (!(t16));
    t136 = (t64 && t65);
    t39 = (t104 + 4);
    t17 = *((unsigned int *)t39);
    t139 = (!(t17));
    t140 = (t136 && t139);
    if (t140 == 1)
        goto LAB32;

LAB33:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB27:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB37;

LAB35:    if (*((unsigned int *)t5) == 0)
        goto LAB34;

LAB36:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;

LAB37:    t8 = (t6 + 4);
    t21 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (~(t14));
    *((unsigned int *)t6) = t15;
    *((unsigned int *)t8) = 0;
    if (*((unsigned int *)t21) != 0)
        goto LAB39;

LAB38:    t20 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t20 & 1U);
    t27 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t27 & 1U);
    t22 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t22, t6, 0, 0, 1, 0LL);
    goto LAB19;

LAB23:    t97 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(42, ng0);

LAB28:    xsi_set_current_line(43, ng0);
    t106 = (t0 + 1824U);
    t107 = *((char **)t106);
    memset(t105, 0, 8);
    t106 = (t105 + 4);
    t108 = (t107 + 4);
    t109 = *((unsigned int *)t107);
    t110 = (t109 >> 0);
    *((unsigned int *)t105) = t110;
    t111 = *((unsigned int *)t108);
    t112 = (t111 >> 0);
    *((unsigned int *)t106) = t112;
    t113 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t113 & 7U);
    t114 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t114 & 7U);
    t116 = (t0 + 1824U);
    t117 = *((char **)t116);
    memset(t115, 0, 8);
    t116 = (t115 + 4);
    t118 = (t117 + 4);
    t119 = *((unsigned int *)t117);
    t120 = (t119 >> 5);
    *((unsigned int *)t115) = t120;
    t121 = *((unsigned int *)t118);
    t122 = (t121 >> 5);
    *((unsigned int *)t116) = t122;
    t123 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t123 & 7U);
    t124 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t124 & 7U);
    xsi_vlogtype_concat(t104, 6, 6, 2U, t115, 3, t105, 3);
    t125 = (t0 + 2384);
    t129 = (t0 + 2384);
    t130 = (t129 + 72U);
    t131 = *((char **)t130);
    t132 = ((char*)((ng3)));
    t133 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t126, t127, t128, ((int*)(t131)), 2, t132, 32, 1, t133, 32, 1);
    t134 = (t126 + 4);
    t135 = *((unsigned int *)t134);
    t136 = (!(t135));
    t137 = (t127 + 4);
    t138 = *((unsigned int *)t137);
    t139 = (!(t138));
    t140 = (t136 && t139);
    t141 = (t128 + 4);
    t142 = *((unsigned int *)t141);
    t143 = (!(t142));
    t144 = (t140 && t143);
    if (t144 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB27;

LAB29:    t145 = *((unsigned int *)t128);
    t146 = (t145 + 0);
    t147 = *((unsigned int *)t126);
    t148 = *((unsigned int *)t127);
    t149 = (t147 - t148);
    t150 = (t149 + 1);
    xsi_vlogvar_wait_assign_value(t125, t104, t146, *((unsigned int *)t127), t150, 0LL);
    goto LAB30;

LAB32:    t18 = *((unsigned int *)t104);
    t143 = (t18 + 0);
    t19 = *((unsigned int *)t40);
    t20 = *((unsigned int *)t82);
    t144 = (t19 - t20);
    t146 = (t144 + 1);
    xsi_vlogvar_wait_assign_value(t5, t6, t143, *((unsigned int *)t82), t146, 0LL);
    goto LAB33;

LAB34:    *((unsigned int *)t6) = 1;
    goto LAB37;

LAB39:    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t21);
    *((unsigned int *)t6) = (t16 | t17);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t21);
    *((unsigned int *)t8) = (t18 | t19);
    goto LAB38;

LAB42:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB43;

LAB46:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB47;

LAB48:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t44);
    *((unsigned int *)t40) = (t52 | t53);
    t45 = (t6 + 4);
    t46 = (t24 + 4);
    t56 = *((unsigned int *)t6);
    t57 = (~(t56));
    t58 = *((unsigned int *)t45);
    t59 = (~(t58));
    t60 = *((unsigned int *)t24);
    t61 = (~(t60));
    t62 = *((unsigned int *)t46);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t68 & t66);
    t69 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB50;

LAB51:    xsi_set_current_line(54, ng0);

LAB54:    xsi_set_current_line(55, ng0);
    t55 = ((char*)((ng2)));
    t72 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t72, t55, 0, 0, 1, 0LL);
    goto LAB53;

LAB57:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB58;

LAB61:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB62;

LAB63:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t44);
    *((unsigned int *)t40) = (t52 | t53);
    t45 = (t6 + 4);
    t46 = (t24 + 4);
    t56 = *((unsigned int *)t6);
    t57 = (~(t56));
    t58 = *((unsigned int *)t45);
    t59 = (~(t58));
    t60 = *((unsigned int *)t24);
    t61 = (~(t60));
    t62 = *((unsigned int *)t46);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t68 & t66);
    t69 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB65;

LAB68:    t81 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB69;

LAB70:    t102 = *((unsigned int *)t104);
    t103 = *((unsigned int *)t97);
    *((unsigned int *)t104) = (t102 | t103);
    t98 = (t40 + 4);
    t106 = (t82 + 4);
    t109 = *((unsigned int *)t40);
    t110 = (~(t109));
    t111 = *((unsigned int *)t98);
    t112 = (~(t111));
    t113 = *((unsigned int *)t82);
    t114 = (~(t113));
    t119 = *((unsigned int *)t106);
    t120 = (~(t119));
    t136 = (t110 & t112);
    t139 = (t114 & t120);
    t121 = (~(t136));
    t122 = (~(t139));
    t123 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t123 & t121);
    t124 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t124 & t122);
    t135 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t135 & t121);
    t138 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t138 & t122);
    goto LAB72;

LAB73:    xsi_set_current_line(62, ng0);

LAB76:    xsi_set_current_line(63, ng0);
    t108 = (t0 + 2224);
    t116 = (t108 + 56U);
    t117 = *((char **)t116);
    t118 = ((char*)((ng1)));
    memset(t105, 0, 8);
    xsi_vlog_unsigned_add(t105, 32, t117, 15, t118, 32);
    t125 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t125, t105, 0, 0, 15, 0LL);
    goto LAB75;

}


extern void work_m_06523507884770861845_3927878221_init()
{
	static char *pe[] = {(void *)Always_37_0};
	xsi_register_didat("work_m_06523507884770861845_3927878221", "isim/test_cam_TB_isim_beh.exe.sim/work/m_06523507884770861845_3927878221.didat");
	xsi_register_executes(pe);
}
