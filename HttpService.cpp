function sub_104688c10 {
    arg_10 = r24;
    arg_18 = r23;
    arg_20 = r22;
    arg_28 = r21;
    arg_30 = r20;
    arg_38 = r19;
    arg_40 = r29;
    arg_48 = r30;
    r31 = r31 + 0xffffffffffffffb0 - 0x2a0;
    r19 = r2;
    r20 = r1;
    r21 = r0;
    r8 = sign_extend_64(r1[0x17]);
    if ((r8 & 0xffffffff80000000) != 0x0) goto loc_104688c4c;
    goto loc_104688c40;

loc_104688c4c:
    r9 = r20[0x1];
    if (r9 == 0x0) goto .l1;
    goto loc_104688c54;

loc_104688c40:
    if (r8 == 0x0) goto loc_104688c90;
    goto loc_104688c44;

.l1:
    r0 = sub_100004130(&decomp_var_f0, "Empty URL", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(decomp_var_d9) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

loc_104688c54:
    if (r9 < sign_extend_64(*(int32_t *)dword_106c4e018)) goto loc_104688cbc;
    goto loc_104688c64;

loc_104688c90:
    r0 = sub_100004130(&decomp_var_f0, "Empty URL", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(decomp_var_d9) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

loc_104688c44:
    r9 = r8;
    if (r9 < sign_extend_64(*(int32_t *)dword_106c4e018)) goto .l364;
    goto .l363;

loc_104688cbc:
    r9 = *r20;
    r10 = r20[0x1];
    bool_3558 = r8 < 0x0;
    goto .l3;

loc_104688c64:
    r0 = sub_100004130(&arg_1d8, "URL too long", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_1ef) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l364:
    r9 = *r20;
    r10 = r20[0x1];
    bool_3995 = r8 < 0x0;
    if (r8 < 0x0) goto .l3;
    goto .l2;

.l363:
    r0 = sub_100004130(&arg_1d8, "URL too long", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_1ef) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l3:
    goto .l60;

.l2:
    if (bool_3995) goto .l60;
    goto .l59;

.l60:
    sub_10298e1c8();
    r0 = sub_10298efd4(&decomp_var_c0);
    r22 = r0;
    if ((sign_extend_64(decomp_var_49) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if ((sign_extend_64(decomp_var_61) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if ((sign_extend_64(decomp_var_79) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if ((sign_extend_64(decomp_var_91) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if ((sign_extend_64(decomp_var_a9) & 0xffffffff80000000) != 0x0) goto loc_104688e04;
    goto loc_104688d28;

.l59:
    sub_10298e1c8();
    r0 = sub_10298efd4(&decomp_var_c0);
    r22 = r0;
    if ((sign_extend_64(decomp_var_49) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if ((sign_extend_64(decomp_var_61) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if ((sign_extend_64(decomp_var_79) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if ((sign_extend_64(decomp_var_91) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if ((sign_extend_64(decomp_var_a9) & 0xffffffff80000000) != 0x0) goto .l726;
    goto .l365;

loc_104688e04:
    loc_1029f6b00();
    if ((r22 & 0x1) != 0x0) goto loc_104688d2c;
    goto .l4;

loc_104688d28:
    if ((r22 & 0x1) == 0x0) goto loc_104688e10;
    goto loc_104688d2c;

.l726:
    loc_1029f6b00();
    if ((r22 & 0x1) != 0x0) goto loc_104688d2c;
    goto .l727;

.l365:
    if ((r22 & 0x1) == 0x0) goto .l725;
    goto .l366;

loc_104688d2c:
    if (*(int8_t *)byte_106c4dee0 != 0x1) goto loc_104688e3c;
    goto loc_104688d3c;

.l4:
    r0 = sub_100004130(&arg_1c0, "URL must be http", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_1d7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

loc_104688e10:
    r0 = sub_100004130(&arg_1c0, "URL must be http", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_1d7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l727:
    r0 = sub_100004130(&arg_1c0, "URL must be http", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_1d7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l725:
    r0 = sub_100004130(&arg_1c0, "URL must be http", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_1d7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l366:
    if (*(int8_t *)byte_106c4dee0 != 0x1) goto .l369;
    goto .l367;

loc_104688e3c:
    if (sub_10487bea4(r21) == 0x0 || (sub_10487a944(r21) & 0x1) != 0x0) goto loc_104688e54;
    goto loc_104688ff8;

loc_104688d3c:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3559 = r9 < 0x0;
    goto .l6;

.l369:
    if (sub_10487bea4(r21) == 0x0 || (sub_10487a944(r21) & 0x1) != 0x0) goto .l371;
    goto .l370;

.l367:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4004 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l6;
    goto .l5;

loc_104688e54:
    if ((r21[0xa1] & 0x1) == 0x0) goto loc_104688eb0;
    goto loc_104688e5c;

loc_104688ff8:
    r0 = sub_100004130(&arg_190, "Http requests can only be executed by game server", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_1a7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l6:
    goto .l63;

.l371:
    if ((r21[0xa1] & 0x1) == 0x0) goto .l722;
    goto .l372;

.l370:
    r0 = sub_100004130(&arg_190, "Http requests can only be executed by game server", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_1a7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l5:
    if (bool_4004) goto .l63;
    goto .l62;

loc_104688eb0:
    if ((r21[0x108] & 0x1) != 0x0) goto loc_104688fcc;
    goto loc_104688eb8;

loc_104688e5c:
    r8 = r21[0xc];
    if (r8 == 0x0) goto loc_104688e84;
    goto loc_104688e64;

.l63:
    sub_10298e1c8();
    r8 = &decomp_var_c0 + 0x18;
    r9 = decomp_var_91;
    r11 = decomp_var_a8;
    r12 = decomp_var_a0;
    bool_3577 = sign_extend_64(r9) < 0x0;
    goto .l114;

.l722:
    if ((r21[0x108] & 0x1) != 0x0) goto loc_104688fcc;
    goto .l723;

.l372:
    r8 = r21[0xc];
    if (r8 == 0x0) goto .l721;
    goto .l373;

.l62:
    sub_10298e1c8();
    r8 = &decomp_var_c0 + 0x18;
    r9 = decomp_var_91;
    r11 = decomp_var_a8;
    r12 = decomp_var_a0;
    bool_4006 = sign_extend_64(r9) < 0x0;
    if (sign_extend_64(r9) < 0x0) goto .l114;
    goto .l113;

loc_104688fcc:
    r0 = sub_100004130(&arg_128, "HTTP requests are not enabled. Enable via Experience Settings", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_13f) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

loc_104688eb8:
    r21[0x108] = 0x1;
    sub_1009590dc();
    sub_100004130(&decomp_var_d8, "Go to Experience Settings and turn on Allow HTTP requests.", r2);
    arg_180 = 0x0;
    arg_188 = 0x0;
    sub_100004130(&arg_168, "", r2);
    sub_100004130(&arg_150, "", r2);
    arg_140 = 0x0;
    arg_0 = &arg_140;
    r2 = &decomp_var_c0;
    r0 = sub_1027aca78(0x1, &decomp_var_d8, r2, 0x4, 0x0, &arg_180, &arg_168, &arg_150, arg_0);
    if (0x0 != 0x0) {
            r20 = 0x0;
            r8 = 0x8;
            asm { ldaddal    x9, x8, [x8] };
            if (r8 == 0x0) {
                    (*(*r20 + 0x10))(r20);
                    std::__1::__shared_weak_count::__release_weak();
            }
    }
    goto loc_104688f5c;

loc_104688e84:
    r0 = sub_100004130(&arg_110, "Unrecognized HttpService", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_127) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

loc_104688e64:
    r22 = r8[0x3];
    r0 = sub_10486b40c();
    r8 = r22[0xe0];
    r9 = r0[0xe0];
    if (r8 - r9 < r0[0xe1]) goto loc_104689044;
    goto loc_104688e84;

.l114:
    goto .l122;

.l723:
    r21[0x108] = 0x1;
    sub_1009590dc();
    sub_100004130(&decomp_var_d8, "Go to Experience Settings and turn on Allow HTTP requests.", r2);
    arg_180 = 0x0;
    arg_188 = 0x0;
    sub_100004130(&arg_168, "", r2);
    sub_100004130(&arg_150, "", r2);
    arg_140 = 0x0;
    arg_0 = &arg_140;
    r2 = &decomp_var_c0;
    r0 = sub_1027aca78(0x1, &decomp_var_d8, r2, 0x4, 0x0, &arg_180, &arg_168, &arg_150, arg_0);
    if (0x0 == 0x0) goto loc_104688f5c;
    goto loc_104688f34;

.l721:
    r0 = sub_100004130(&arg_110, "Unrecognized HttpService", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_127) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l373:
    r22 = r8[0x3];
    r0 = sub_10486b40c();
    r8 = r22[0xe0];
    r9 = r0[0xe0];
    if (r8 - r9 < r0[0xe1]) goto .l374;
    goto .l721;

.l113:
    if (bool_4006) goto .l122;
    goto .l121;

loc_104688f5c:
    if ((sign_extend_64(arg_167) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if ((sign_extend_64(arg_17f) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    r20 = arg_188;
    if (r20 != 0x0) {
            r8 = r20 + 0x8;
            asm { ldaddal    x9, x8, [x8] };
            if (r8 == 0x0) {
                    (*(*r20 + 0x10))(r20);
                    std::__1::__shared_weak_count::__release_weak();
            }
    }
    if ((sign_extend_64(decomp_var_c1) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if ((sign_extend_64(decomp_var_a9) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    goto loc_104688fcc;

loc_104689044:
    r0 = sub_10007aaa4();
    if (r0 != 0x0) {
            r22 = sub_100b00e2c(r0 + 0xa8);
    }
    else {
            r22 = 0x1;
    }
    goto loc_104689064;

.l122:
    r22 = sub_10233fc3c();
    if ((sign_extend_64(decomp_var_49) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if ((sign_extend_64(decomp_var_61) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if ((sign_extend_64(decomp_var_79) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if ((sign_extend_64(decomp_var_91) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if ((sign_extend_64(decomp_var_a9) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if (r22 == 0x0) goto loc_104688e3c;
    goto loc_104688dd8;

loc_104688f34:
    r20 = 0x0;
    r8 = 0x8;
    asm { ldaddal    x9, x8, [x8] };
    if (r8 != 0x0) goto loc_104688f5c;
    goto loc_104688f44;

.l374:
    r0 = sub_10007aaa4();
    if (r0 == 0x0) goto loc_104689060;
    goto loc_104689050;

.l121:
    r22 = sub_10233fc3c();
    if ((sign_extend_64(decomp_var_49) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if ((sign_extend_64(decomp_var_61) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if ((sign_extend_64(decomp_var_79) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if ((sign_extend_64(decomp_var_91) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if ((sign_extend_64(decomp_var_a9) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if (r22 == 0x0) goto .l369;
    goto .l368;

loc_104689064:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3560 = r9 < 0x0;
    goto .l9;

loc_104688dd8:
    r0 = sub_100004130(&arg_1a8, "Request to private/reserved IP addresses is not allowed", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_1bf) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

loc_104688f44:
    (*(*r20 + 0x10))(r20);
    std::__1::__shared_weak_count::__release_weak();
    if ((sign_extend_64(arg_167) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if ((sign_extend_64(arg_17f) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    r20 = arg_188;
    if (r20 != 0x0) {
            r8 = r20 + 0x8;
            asm { ldaddal    x9, x8, [x8] };
            if (r8 == 0x0) {
                    (*(*r20 + 0x10))(r20);
                    std::__1::__shared_weak_count::__release_weak();
            }
    }
    if ((sign_extend_64(decomp_var_c1) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if ((sign_extend_64(decomp_var_a9) & 0xffffffff80000000) == 0x0) goto .l724;
    goto loc_104688fc4;

loc_104689060:
    r22 = 0x1;
    goto loc_104689064;

loc_104689050:
    r22 = sub_100b00e2c(r0 + 0xa8);
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4022 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l9;
    goto .l8;

.l368:
    r0 = sub_100004130(&arg_1a8, "Request to private/reserved IP addresses is not allowed", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_1bf) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l9:
    goto .l66;

.l724:
    r0 = sub_100004130(&arg_128, "HTTP requests are not enabled. Enable via Experience Settings", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_13f) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

loc_104688fc4:
    loc_1029f6b00();
    goto loc_104688fcc;

.l8:
    if (bool_4022) goto .l66;
    goto .l65;

.l66:
    r23 = &decomp_var_c0;
    sub_10298e1c8();
    r9 = decomp_var_a9;
    r8 = sign_extend_64(r9);
    r10 = decomp_var_b8;
    if (r8 < 0x0) {
            r9 = r10;
    }
    goto .l117;

.l65:
    r23 = &decomp_var_c0;
    sub_10298e1c8();
    r9 = decomp_var_a9;
    r8 = sign_extend_64(r9);
    r10 = decomp_var_b8;
    if (r8 < 0x0) goto .l115;
    goto .l116;

.l117:
    if (r9 != 0x5) goto loc_1046890d0;
    goto loc_1046890a4;

.l115:
    r9 = r10;
    goto .l117;

.l116:
    if (r9 != 0x5) goto .l720;
    goto .l375;

loc_1046890d0:
    r23 = 0x0;
    goto loc_1046890d4;

loc_1046890a4:
    r9 = decomp_var_c0;
    if (r8 >= 0x0) {
            r8 = r23;
    }
    else {
            r8 = r9;
    }
    goto .l12;

.l720:
    r23 = 0x0;
    goto loc_1046890d4;

.l375:
    r9 = decomp_var_c0;
    if (r8 < 0x0) goto .l10;
    goto .l11;

loc_1046890d4:
    if ((sign_extend_64(decomp_var_49) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if ((sign_extend_64(decomp_var_61) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if ((sign_extend_64(decomp_var_79) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if ((sign_extend_64(decomp_var_91) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if ((sign_extend_64(decomp_var_a9) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if (r23 == 0x0) goto loc_10468915c;
    goto loc_104689128;

.l12:
    r9 = 0x73;
    asm { ccmp       w8, w9, #0x0, eq };
    if (asm { ccmp       w8, w9, #0x0, eq }) goto loc_104689320;
    goto loc_1046890d0;

.l10:
    r8 = r9;
    goto .l12;

.l11:
    r8 = r23;
    r9 = 0x73;
    asm { ccmp       w8, w9, #0x0, eq };
    if (asm { ccmp       w8, w9, #0x0, eq }) goto .l376;
    goto .l720;

loc_10468915c:
    if (*(int8_t *)byte_106c4deb0 != 0x1) goto loc_1046891fc;
    goto loc_10468916c;

loc_104689128:
    sub_10468994c(r21);
    decomp_var_c0 = *(sub_10487af0c(r21) + 0x370);
    if (r21[0x88] == 0x0) goto loc_10468915c;
    goto loc_104689148;

loc_104689320:
    sub_10296528c();
    r9 = decomp_var_91;
    r8 = sign_extend_64(r9);
    r10 = decomp_var_a0;
    if (r8 >= 0x0) {
            r2 = r9;
    }
    else {
            r2 = r10;
    }
    goto .l54;

.l376:
    sub_10296528c();
    r9 = decomp_var_91;
    r8 = sign_extend_64(r9);
    r10 = decomp_var_a0;
    if (r8 < 0x0) goto .l52;
    goto .l53;

loc_1046891fc:
    if ((sub_100267738(r21 + 0xa8, r22) & 0x1) != 0x0) goto loc_10468926c;
    goto loc_10468920c;

loc_10468916c:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto loc_10468925c;
    goto loc_104689178;

loc_104689148:
    r2 = 0x0;
    r0 = sub_1038a1c10(r21 + 0x220, &decomp_var_c0, 0x0);
    if ((r0 & 0x1) == 0x0) goto .l159;
    goto loc_10468915c;

.l54:
    r9 = decomp_var_c1;
    r24 = sign_extend_64(r9);
    r10 = decomp_var_d0;
    if (r24 < 0x0) {
            r9 = r10;
    }
    goto .l108;

.l52:
    r2 = r10;
    goto .l54;

.l53:
    r2 = r9;
    r9 = decomp_var_c1;
    r24 = sign_extend_64(r9);
    r10 = decomp_var_d0;
    if (r24 < 0x0) goto .l106;
    goto .l107;

loc_10468926c:
    *(sub_10487afa4(r21) + 0x370);
    if (sub_10468a028() == 0x0) goto .l227;
    goto .l304;

loc_10468920c:
    r9 = *(int8_t *)byte_107358217;
    bool_3808 = sign_extend_64(r9) < 0x0;
    sub_104689f40();
    r0 = sub_100004130(&arg_c8, "Number of requests exceeded limit", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_df) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

loc_10468925c:
    if ((sub_100267738(r21 + 0xa8, r22) & 0x1) == 0x0) goto loc_1046893d8;
    goto .l159;

loc_104689178:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3585 = sign_extend_64(r8) < 0x0;
    goto .l15;

.l159:
    *(sub_10487afa4(r21) + 0x370);
    if (sub_10468a028() == 0x0) goto loc_1046892c8;
    goto loc_104689280;

.l108:
    if (r2 != r9) goto loc_1046895a8;
    goto loc_104689358;

.l106:
    r9 = r10;
    goto .l108;

.l107:
    if (r2 != r9) goto .l719;
    goto .l377;

.l227:
    if (sub_10468a748(r21, r20) == 0x0) goto .l290;
    goto .l226;

.l304:
    sub_10468a268(r21, r20, "HttpServiceReportUniverse-blacklist", *(int32_t *)dword_106c4df28);
    r0 = sub_100004130(&arg_b0, "Request denied", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_c7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

loc_1046893d8:
    r9 = *(int8_t *)byte_107358217;
    bool_3582 = sign_extend_64(r9) < 0x0;
    sub_104689f40();
    r0 = sub_100004130(&arg_e0, "Number of requests exceeded limit", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_f7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l15:
    if (!bool_3585) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l69;

loc_1046892c8:
    if (sub_10468a748(r21, r20) == 0x0) goto loc_10468938c;
    goto loc_1046892d8;

loc_104689280:
    sub_10468a268(r21, r20, "HttpServiceReportUniverse-blacklist", *(int32_t *)dword_106c4df28);
    r0 = sub_100004130(&arg_b0, "Request denied", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_c7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

loc_1046895a8:
    r23 = 0x0;
    goto loc_1046895ac;

loc_104689358:
    r9 = &decomp_var_c0 + 0x18;
    r10 = decomp_var_a8;
    if (r8 >= 0x0) {
            r0 = r9;
    }
    else {
            r0 = r10;
    }
    goto .l57;

.l719:
    r23 = 0x0;
    goto loc_1046895ac;

.l377:
    r9 = &decomp_var_c0 + 0x18;
    r10 = decomp_var_a8;
    if (r8 < 0x0) goto .l55;
    goto .l56;

.l290:
    if (*(int8_t *)byte_106c4e1b0 != 0x1 || (sub_1022f2f50(r20) & 0x1) != 0x0) goto .l300;
    goto .l291;

.l226:
    sub_10468a268(r21, r20, "HttpServiceReportUrl-blacklist", *(int32_t *)dword_106c4df10);
    r0 = sub_100004130(&arg_98, "Request denied", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_af) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l69:
    if (sub_104689c38(r21) == 0x0) goto .l17;
    goto loc_10468919c;

loc_10468938c:
    if (*(int8_t *)byte_106c4e1b0 != 0x1 || (sub_1022f2f50(r20) & 0x1) != 0x0) goto loc_104689428;
    goto loc_1046893a8;

loc_1046892d8:
    sub_10468a268(r21, r20, "HttpServiceReportUrl-blacklist", *(int32_t *)dword_106c4df10);
    r0 = sub_100004130(&arg_98, "Request denied", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_af) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

loc_1046895ac:
    if ((r24 & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    goto loc_1046890d4;

.l57:
    r8 = decomp_var_d8;
    r9 = &decomp_var_d8;
    if (r24 >= 0x0) {
            r1 = r9;
    }
    else {
            r1 = r8;
    }
    goto .l111;

.l55:
    r0 = r10;
    goto .l57;

.l56:
    r0 = r9;
    r8 = decomp_var_d8;
    r9 = &decomp_var_d8;
    if (r24 < 0x0) goto .l109;
    goto .l110;

.l300:
    r8 = 0x106c4def8;
    goto .l288;

.l291:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3892 = sign_extend_64(r8) < 0x0;
    goto .l287;

.l17:
    if ((sub_100267738(r21 + 0xa8, r22) & 0x1) == 0x0) goto .l18;
    goto .l16;

loc_10468919c:
    if ((sub_100267738(r21 + 0xd8, r22) & 0x1) != 0x0) goto .l158;
    goto loc_1046891ac;

loc_104689428:
    r8 = 0x106c4def8;
    goto loc_104689430;

loc_1046893a8:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3562 = r9 < 0x0;
    goto .l21;

.l111:
    if (memcmp(r0, r1, r2) == 0x0) {
            r23 = 0x1;
    }
    goto loc_1046895ac;

.l109:
    r1 = r8;
    goto .l111;

.l110:
    r1 = r9;
    if (memcmp(r0, r1, r2) == 0x0) goto .l118;
    goto .l119;

.l288:
    sub_10468a268(r21, r20, "HttpServiceReportUrl-ok", *(int32_t *)r8);
    decomp_var_c0 = *(sub_10487afa4(r21) + 0x378);
    r22 = &decomp_var_c0;
    r0 = sub_10468a9a0(&decomp_var_c0);
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3891 = sign_extend_64(r8) < 0x0;
    goto .l286;

.l287:
    goto .l299;

.l18:
    r9 = *(int8_t *)byte_107358217;
    bool_3592 = sign_extend_64(r9) < 0x0;
    sub_104689f40();
    r0 = sub_100004130(&arg_e0, "Number of requests exceeded limit", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_f7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l16:
    *(sub_10487afa4(r21) + 0x370);
    if (sub_10468a028() == 0x0) goto .l13;
    goto .l225;

.l158:
    *(sub_10487afa4(r21) + 0x370);
    if (sub_10468a028() == 0x0) goto .l47;
    goto .l61;

loc_1046891ac:
    r9 = *(int8_t *)byte_10735822f;
    bool_3622 = sign_extend_64(r9) < 0x0;
    sub_104689f40();
    r0 = sub_100004130(&arg_f8, "Number of Open Cloud requests exceeded limit", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_10f) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

loc_104689430:
    sub_10468a268(r21, r20, "HttpServiceReportUrl-ok", *(int32_t *)r8);
    decomp_var_c0 = *(sub_10487afa4(r21) + 0x378);
    r22 = &decomp_var_c0;
    r0 = sub_10468a9a0(&decomp_var_c0);
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3563 = sign_extend_64(r8) < 0x0;
    goto .l24;

.l21:
    goto .l75;

.l118:
    r23 = 0x1;
    goto loc_1046895ac;

.l119:
    if ((r24 & 0xffffffff80000000) == 0x0) goto loc_1046890d4;
    goto loc_1046895b0;

.l286:
    goto .l296;

.l299:
    if ((sub_104689c38(r21) & 0x1) != 0x0) {
            r8 = 0x106c4e248;
    }
    else {
            r8 = 0x106c4def8;
    }
    goto .l288;

.l13:
    if (sub_10468a748(r21, r20) == 0x0) goto .l199;
    goto .l7;

.l225:
    sub_10468a268(r21, r20, "HttpServiceReportUniverse-blacklist", *(int32_t *)dword_106c4df28);
    r0 = sub_100004130(&arg_b0, "Request denied", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_c7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l47:
    if (sub_10468a748(r21, r20) == 0x0) goto .l73;
    goto .l46;

.l61:
    sub_10468a268(r21, r20, "HttpServiceReportUniverse-blacklist", *(int32_t *)dword_106c4df28);
    r0 = sub_100004130(&arg_b0, "Request denied", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_c7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l24:
    goto .l78;

.l75:
    if ((sub_104689c38(r21) & 0x1) != 0x0) {
            r8 = 0x106c4e248;
    }
    else {
            r8 = 0x106c4def8;
    }
    goto loc_104689430;

loc_1046895b0:
    loc_1029f6b00();
    if ((sign_extend_64(decomp_var_49) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if ((sign_extend_64(decomp_var_61) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if ((sign_extend_64(decomp_var_79) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if ((sign_extend_64(decomp_var_91) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if ((sign_extend_64(decomp_var_a9) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if (r23 == 0x0) goto .l444;
    goto .l378;

.l296:
    sub_10298e1c8();
    r22 = sub_10301047c(r22 + 0x30, "..", 0x0);
    sub_10000ecb0(&decomp_var_c0);
    r24 = *(int8_t *)byte_106c4e198;
    r0 = sub_1022f2f50(r20);
    if (r24 != 0x1) goto .l283;
    goto .l292;

.l199:
    if (*(int8_t *)byte_106c4e1b0 != 0x1 || (sub_1022f2f50(r20) & 0x1) != 0x0) goto .l148;
    goto .l200;

.l7:
    sub_10468a268(r21, r20, "HttpServiceReportUrl-blacklist", *(int32_t *)dword_106c4df10);
    r0 = sub_100004130(&arg_98, "Request denied", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_af) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l73:
    if (*(int8_t *)byte_106c4e1b0 != 0x1 || (sub_1022f2f50(r20) & 0x1) != 0x0) goto .l22;
    goto .l76;

.l46:
    sub_10468a268(r21, r20, "HttpServiceReportUrl-blacklist", *(int32_t *)dword_106c4df10);
    r0 = sub_100004130(&arg_98, "Request denied", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_af) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l78:
    sub_10298e1c8();
    r22 = sub_10301047c(r22 + 0x30, "..", 0x0);
    sub_10000ecb0(&decomp_var_c0);
    r24 = *(int8_t *)byte_106c4e198;
    r0 = sub_1022f2f50(r20);
    if (r24 != 0x1) goto .l362;
    goto loc_1046894c0;

.l444:
    if (*(int8_t *)byte_106c4deb0 != 0x1) goto .l629;
    goto .l445;

.l378:
    sub_10468994c(r21);
    decomp_var_c0 = *(sub_10487af0c(r21) + 0x370);
    if (r21[0x88] == 0x0) goto .l444;
    goto .l379;

.l283:
    if (*(int8_t *)byte_106c4e1b0 == 0x0) goto .l276;
    goto .l282;

.l292:
    if (*(int8_t *)byte_106c4e1b0 == 0x0) goto .l264;
    goto .l289;

.l148:
    r8 = 0x106c4def8;
    goto .l197;

.l200:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3759 = sign_extend_64(r8) < 0x0;
    goto .l196;

.l22:
    r8 = 0x106c4def8;
    goto .l71;

.l76:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3619 = sign_extend_64(r8) < 0x0;
    goto .l49;

.l362:
    if (*(int8_t *)byte_106c4e1b0 == 0x0) goto .l355;
    goto .l361;

loc_1046894c0:
    if (*(int8_t *)byte_106c4e1b0 == 0x0) goto .l341;
    goto loc_1046894c4;

.l629:
    if ((sub_100267738(r21 + 0xa8, r22) & 0x1) != 0x0) goto .l631;
    goto .l630;

.l445:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l627;
    goto .l446;

.l379:
    r2 = 0x0;
    r0 = sub_1038a1c10(r21 + 0x220, &decomp_var_c0, 0x0);
    if ((r0 & 0x1) == 0x0) goto .l380;
    goto .l444;

.l276:
    if ((r0 & 0x1) != 0x0) {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    else {
            r0 = sub_100004130(&arg_8, "HttpService is not allowed to access ROBLOX resources", 0x0);
            sub_1000080fc(r19);
            if ((sign_extend_64(arg_1f) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
    }
    return;

.l282:
    if ((r0 & 0x1) != 0x0) goto .l281;
    goto .l273;

.l264:
    if ((r0 & 0x1) != 0x0) goto .l260;
    goto .l263;

.l289:
    if ((r0 & 0x1) != 0x0) goto .l293;
    goto .l249;

.l197:
    sub_10468a268(r21, r20, "HttpServiceReportUrl-ok", *(int32_t *)r8);
    decomp_var_c0 = *(sub_10487afa4(r21) + 0x378);
    r22 = &decomp_var_c0;
    r0 = sub_10468a9a0(&decomp_var_c0);
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3758 = sign_extend_64(r8) < 0x0;
    goto .l195;

.l196:
    goto .l147;

.l71:
    sub_10468a268(r21, r20, "HttpServiceReportUrl-ok", *(int32_t *)r8);
    decomp_var_c0 = *(sub_10487afa4(r21) + 0x378);
    r22 = &decomp_var_c0;
    r0 = sub_10468a9a0(&decomp_var_c0);
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3618 = sign_extend_64(r8) < 0x0;
    goto .l48;

.l49:
    goto .l19;

.l355:
    if ((r0 & 0x1) != 0x0) {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    else {
            r0 = sub_100004130(&arg_8, "HttpService is not allowed to access ROBLOX resources", 0x0);
            sub_1000080fc(r19);
            if ((sign_extend_64(arg_1f) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
    }
    return;

.l361:
    if ((r0 & 0x1) != 0x0) goto .l360;
    goto .l354;

.l341:
    if ((r0 & 0x1) != 0x0) goto .l337;
    goto .l340;

loc_1046894c4:
    if ((r0 & 0x1) != 0x0) goto .l160;
    goto .l326;

.l631:
    *(sub_10487afa4(r21) + 0x370);
    if (sub_10468a028() == 0x0) goto .l633;
    goto .l632;

.l630:
    r9 = *(int8_t *)byte_107358217;
    bool_4373 = sign_extend_64(r9) < 0x0;
    if (sign_extend_64(r9) >= 0x0) {
            if (!bool_4373) {
                    sub_104689f40();
                    r0 = sub_100004130(&arg_c8, "Number of requests exceeded limit", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_df) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    sub_104689f40();
                    r0 = sub_100004130(&arg_c8, "Number of requests exceeded limit", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_df) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
    }
    else {
            sub_104689f40();
            r0 = sub_100004130(&arg_c8, "Number of requests exceeded limit", r2);
            sub_1000080fc(r19);
            if ((sign_extend_64(arg_df) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
    }
    return;

.l627:
    if ((sub_100267738(r21 + 0xa8, r22) & 0x1) == 0x0) goto .l628;
    goto .l159;

.l446:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4149 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l15;
    goto .l14;

.l380:
    *(sub_10487afa4(r21) + 0x370);
    if (sub_10468a028() == 0x0) goto .l382;
    goto .l381;

.l281:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l285;
    goto .l280;

.l273:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3862 = sign_extend_64(r8) < 0x0;
    goto .l267;

.l260:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l263:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3856 = sign_extend_64(r8) < 0x0;
    goto .l262;

.l293:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l230;
    goto .l303;

.l249:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3841 = r9 < 0x0;
    goto .l251;

.l195:
    goto .l144;

.l147:
    if ((sub_104689c38(r21) & 0x1) != 0x0) {
            r8 = 0x106c4e248;
    }
    else {
            r8 = 0x106c4def8;
    }
    goto .l197;

.l48:
    goto .l102;

.l19:
    if ((sub_104689c38(r21) & 0x1) != 0x0) {
            r8 = 0x106c4e248;
    }
    else {
            r8 = 0x106c4def8;
    }
    goto .l71;

.l360:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l343;
    goto .l359;

.l354:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3971 = sign_extend_64(r8) < 0x0;
    goto .l348;

.l337:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l340:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3957 = sign_extend_64(r8) < 0x0;
    goto .l339;

.l160:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l307;
    goto loc_104689520;

.l326:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3942 = r9 < 0x0;
    goto .l328;

.l633:
    if (sub_10468a748(r21, r20) == 0x0) goto .l635;
    goto .l634;

.l632:
    sub_10468a268(r21, r20, "HttpServiceReportUniverse-blacklist", *(int32_t *)dword_106c4df28);
    r0 = sub_100004130(&arg_b0, "Request denied", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_c7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l628:
    r9 = *(int8_t *)byte_107358217;
    bool_4369 = sign_extend_64(r9) < 0x0;
    if (sign_extend_64(r9) >= 0x0) {
            if (!bool_4369) {
                    sub_104689f40();
                    r0 = sub_100004130(&arg_e0, "Number of requests exceeded limit", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_f7) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    sub_104689f40();
                    r0 = sub_100004130(&arg_e0, "Number of requests exceeded limit", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_f7) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
    }
    else {
            sub_104689f40();
            r0 = sub_100004130(&arg_e0, "Number of requests exceeded limit", r2);
            sub_1000080fc(r19);
            if ((sign_extend_64(arg_f7) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
    }
    return;

.l14:
    if (bool_4149) goto .l67;
    goto .l68;

.l382:
    if (sub_10468a748(r21, r20) == 0x0) goto .l384;
    goto .l383;

.l381:
    sub_10468a268(r21, r20, "HttpServiceReportUniverse-blacklist", *(int32_t *)dword_106c4df28);
    r0 = sub_100004130(&arg_b0, "Request denied", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_c7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l285:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l280:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l284;
    goto .l279;

.l267:
    if (!bool_3862) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l268;

.l262:
    if (!bool_3856) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l261;

.l230:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l303:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l229;
    goto .l302;

.l251:
    goto .l255;

.l144:
    sub_10298e1c8();
    r22 = sub_10301047c(r22 + 0x30, "..", 0x0);
    sub_10000ecb0(&decomp_var_c0);
    r24 = *(int8_t *)byte_106c4e198;
    r0 = sub_1022f2f50(r20);
    if (r24 != 0x1) goto .l220;
    goto .l201;

.l102:
    sub_10298e1c8();
    r22 = sub_10301047c(r22 + 0x30, "..", 0x0);
    sub_10000ecb0(&decomp_var_c0);
    r24 = *(int8_t *)byte_106c4e198;
    r0 = sub_1022f2f50(r20);
    if (r24 != 0x1) goto loc_1046895bc;
    goto .l79;

.l343:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l359:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l342;
    goto .l358;

.l348:
    if (!bool_3971) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l349;

.l339:
    if (!bool_3957) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l338;

.l307:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

loc_104689520:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l306;
    goto loc_10468952c;

.l328:
    goto .l332;

.l635:
    if (*(int8_t *)byte_106c4e1b0 != 0x1 || (sub_1022f2f50(r20) & 0x1) != 0x0) goto .l300;
    goto .l636;

.l634:
    sub_10468a268(r21, r20, "HttpServiceReportUrl-blacklist", *(int32_t *)dword_106c4df10);
    r0 = sub_100004130(&arg_98, "Request denied", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_af) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l67:
    r2 = r11;
    goto .l69;

.l68:
    r2 = r8;
    if (sub_104689c38(r21) == 0x0) goto .l537;
    goto .l447;

.l384:
    if (*(int8_t *)byte_106c4e1b0 != 0x1 || (sub_1022f2f50(r20) & 0x1) != 0x0) goto loc_104689428;
    goto .l385;

.l383:
    sub_10468a268(r21, r20, "HttpServiceReportUrl-blacklist", *(int32_t *)dword_106c4df10);
    r0 = sub_100004130(&arg_98, "Request denied", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_af) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l284:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l279:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3878 = sign_extend_64(r8) < 0x0;
    goto .l277;

.l268:
    if ((sub_104689c38(r21) & 0x1) == 0x0) goto .l265;
    goto .l272;

.l261:
    if ((sub_10468aa48(r21) & 0x1) == 0x0) {
            r0 = sub_100004130(&arg_50, "HttpService is not allowed to access that Roblox resource", r2);
            sub_1000080fc(r19);
            if ((sign_extend_64(arg_67) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l229:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l302:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3902 = sign_extend_64(r8) < 0x0;
    goto .l297;

.l255:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l250;
    goto .l244;

.l220:
    if (*(int8_t *)byte_106c4e1b0 == 0x0) goto .l204;
    goto .l219;

.l201:
    if (*(int8_t *)byte_106c4e1b0 == 0x0) goto .l212;
    goto .l198;

loc_1046895bc:
    if (*(int8_t *)byte_106c4e1b0 == 0x0) goto loc_1046896b0;
    goto loc_1046895c0;

.l79:
    if (*(int8_t *)byte_106c4e1b0 == 0x0) goto loc_10468965c;
    goto .l72;

.l342:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l358:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3983 = sign_extend_64(r8) < 0x0;
    goto .l356;

.l349:
    if ((sub_104689c38(r21) & 0x1) == 0x0) goto .l346;
    goto .l353;

.l338:
    if ((sub_10468aa48(r21) & 0x1) == 0x0) {
            r0 = sub_100004130(&arg_50, "HttpService is not allowed to access that Roblox resource", r2);
            sub_1000080fc(r19);
            if ((sign_extend_64(arg_67) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l306:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

loc_10468952c:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3564 = r9 < 0x0;
    goto .l33;

.l332:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l327;
    goto .l321;

.l636:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4382 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l287;
    goto .l637;

.l537:
    if ((sub_100267738(r21 + 0xa8, r22) & 0x1) == 0x0) goto .l626;
    goto .l538;

.l447:
    if ((sub_100267738(r21 + 0xd8, r22) & 0x1) != 0x0) goto .l449;
    goto .l448;

.l385:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4049 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l21;
    goto .l20;

.l277:
    if (!bool_3878) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l278;

.l265:
    r0 = sub_100004130(&arg_38, "HttpService is not allowed to access that Roblox resource", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_4f) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l272:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l275;
    goto .l271;

.l297:
    goto .l294;

.l250:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l233;
    goto .l259;

.l244:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3827 = sign_extend_64(r8) < 0x0;
    goto .l238;

.l204:
    if ((r0 & 0x1) != 0x0) {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    else {
            r0 = sub_100004130(&arg_8, "HttpService is not allowed to access ROBLOX resources", 0x0);
            sub_1000080fc(r19);
            if ((sign_extend_64(arg_1f) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
    }
    return;

.l219:
    if ((r0 & 0x1) != 0x0) goto .l218;
    goto .l194;

.l212:
    if ((r0 & 0x1) != 0x0) goto .l213;
    goto .l211;

.l198:
    if ((r0 & 0x1) != 0x0) goto .l141;
    goto .l174;

loc_1046896b0:
    if ((r0 & 0x1) != 0x0) {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    else {
            r0 = sub_100004130(&arg_8, "HttpService is not allowed to access ROBLOX resources", 0x0);
            sub_1000080fc(r19);
            if ((sign_extend_64(arg_1f) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
    }
    return;

loc_1046895c0:
    if ((r0 & 0x1) != 0x0) goto .l132;
    goto loc_1046895c4;

loc_10468965c:
    if ((r0 & 0x1) != 0x0) goto .l163;
    goto loc_104689660;

.l72:
    if ((r0 & 0x1) != 0x0) goto .l85;
    goto loc_1046894c8;

.l356:
    if (!bool_3983) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l357;

.l346:
    r0 = sub_100004130(&arg_38, "HttpService is not allowed to access that Roblox resource", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_4f) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l353:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l345;
    goto .l352;

.l33:
    goto .l87;

.l327:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l310;
    goto .l336;

.l321:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3928 = sign_extend_64(r8) < 0x0;
    goto .l315;

.l637:
    if (bool_4382) goto .l299;
    goto .l638;

.l626:
    r9 = *(int8_t *)byte_107358217;
    bool_4365 = sign_extend_64(r9) < 0x0;
    if (sign_extend_64(r9) >= 0x0) {
            if (!bool_4365) {
                    sub_104689f40();
                    r0 = sub_100004130(&arg_e0, "Number of requests exceeded limit", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_f7) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    sub_104689f40();
                    r0 = sub_100004130(&arg_e0, "Number of requests exceeded limit", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_f7) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
    }
    else {
            sub_104689f40();
            r0 = sub_100004130(&arg_e0, "Number of requests exceeded limit", r2);
            sub_1000080fc(r19);
            if ((sign_extend_64(arg_f7) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
    }
    return;

.l538:
    *(sub_10487afa4(r21) + 0x370);
    if (sub_10468a028() == 0x0) goto .l540;
    goto .l539;

.l449:
    *(sub_10487afa4(r21) + 0x370);
    if (sub_10468a028() == 0x0) goto .l451;
    goto .l450;

.l448:
    r9 = *(int8_t *)byte_10735822f;
    bool_4153 = sign_extend_64(r9) < 0x0;
    if (sign_extend_64(r9) >= 0x0) {
            if (!bool_4153) {
                    sub_104689f40();
                    r0 = sub_100004130(&arg_f8, "Number of Open Cloud requests exceeded limit", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_10f) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    sub_104689f40();
                    r0 = sub_100004130(&arg_f8, "Number of Open Cloud requests exceeded limit", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_10f) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
    }
    else {
            sub_104689f40();
            r0 = sub_100004130(&arg_f8, "Number of Open Cloud requests exceeded limit", r2);
            sub_1000080fc(r19);
            if ((sign_extend_64(arg_10f) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
    }
    return;

.l20:
    if (bool_4049) goto .l75;
    goto .l74;

.l278:
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_20, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_37) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l275:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l271:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l274;
    goto .l270;

.l294:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l228;
    goto .l301;

.l233:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l259:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l232;
    goto .l258;

.l238:
    if (!bool_3827) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l239;

.l218:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l186;
    goto .l217;

.l194:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3749 = sign_extend_64(r8) < 0x0;
    goto .l188;

.l213:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l211:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3780 = sign_extend_64(r8) < 0x0;
    goto .l210;

.l141:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l224;
    goto .l151;

.l174:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3715 = sign_extend_64(r8) < 0x0;
    goto .l153;

.l132:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l164;
    goto .l131;

loc_1046895c4:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3652 = sign_extend_64(r8) < 0x0;
    goto .l42;

.l163:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

loc_104689660:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3658 = sign_extend_64(r8) < 0x0;
    goto .l39;

.l85:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l136;
    goto .l31;

loc_1046894c8:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3635 = r9 < 0x0;
    goto .l27;

.l357:
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_20, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_37) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l345:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l352:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l344;
    goto .l351;

.l87:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l305;
    goto loc_104689550;

.l310:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l336:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l309;
    goto .l335;

.l315:
    if (!bool_3928) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l316;

.l638:
    if ((sub_104689c38(r21) & 0x1) == 0x0) goto .l718;
    goto .l639;

.l540:
    if (sub_10468a748(r21, r20) == 0x0) goto .l542;
    goto .l541;

.l539:
    sub_10468a268(r21, r20, "HttpServiceReportUniverse-blacklist", *(int32_t *)dword_106c4df28);
    r0 = sub_100004130(&arg_b0, "Request denied", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_c7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l451:
    if (sub_10468a748(r21, r20) == 0x0) goto .l453;
    goto .l452;

.l450:
    sub_10468a268(r21, r20, "HttpServiceReportUniverse-blacklist", *(int32_t *)dword_106c4df28);
    r0 = sub_100004130(&arg_b0, "Request denied", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_c7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l74:
    if ((sub_104689c38(r21) & 0x1) == 0x0) goto .l443;
    goto loc_1046893cc;

.l274:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l270:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3861 = sign_extend_64(r8) < 0x0;
    goto .l266;

.l228:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l301:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3903 = sign_extend_64(r8) < 0x0;
    goto .l298;

.l232:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l258:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3844 = sign_extend_64(r8) < 0x0;
    goto .l254;

.l239:
    if ((sub_104689c38(r21) & 0x1) == 0x0) goto .l237;
    goto .l248;

.l186:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l217:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l205;
    goto .l216;

.l188:
    if (!bool_3749) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l189;

.l210:
    if (!bool_3780) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l209;

.l224:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l151:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l223;
    goto .l150;

.l153:
    goto .l157;

.l164:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l131:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l165;
    goto .l130;

.l42:
    if (!bool_3652) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l96;

.l39:
    if (!bool_3658) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l93;

.l136:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l31:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l135;
    goto .l28;

.l27:
    goto .l81;

.l344:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l351:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3970 = sign_extend_64(r8) < 0x0;
    goto .l347;

.l305:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

loc_104689550:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3565 = r9 < 0x0;
    goto .l36;

.l309:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l335:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3945 = sign_extend_64(r8) < 0x0;
    goto .l331;

.l316:
    if ((sub_104689c38(r21) & 0x1) == 0x0) goto .l314;
    goto .l325;

.l718:
    r8 = 0x106c4def8;
    goto .l288;

.l639:
    sub_10468a268(r21, r20, "HttpServiceReportUrl-ok", *(int32_t *)0x106c4e248);
    decomp_var_c0 = *(sub_10487afa4(r21) + 0x378);
    r22 = &decomp_var_c0;
    r0 = sub_10468a9a0(&decomp_var_c0);
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4385 = sign_extend_64(r8) < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l286;
    goto .l640;

.l542:
    if (*(int8_t *)byte_106c4e1b0 != 0x1 || (sub_1022f2f50(r20) & 0x1) != 0x0) goto .l148;
    goto .l543;

.l541:
    sub_10468a268(r21, r20, "HttpServiceReportUrl-blacklist", *(int32_t *)dword_106c4df10);
    r0 = sub_100004130(&arg_98, "Request denied", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_af) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l453:
    if (*(int8_t *)byte_106c4e1b0 != 0x1 || (sub_1022f2f50(r20) & 0x1) != 0x0) goto .l22;
    goto .l454;

.l452:
    sub_10468a268(r21, r20, "HttpServiceReportUrl-blacklist", *(int32_t *)dword_106c4df10);
    r0 = sub_100004130(&arg_98, "Request denied", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_af) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l443:
    r8 = 0x106c4def8;
    goto loc_104689430;

loc_1046893cc:
    sub_10468a268(r21, r20, "HttpServiceReportUrl-ok", *(int32_t *)0x106c4e248);
    decomp_var_c0 = *(sub_10487afa4(r21) + 0x378);
    r22 = &decomp_var_c0;
    r0 = sub_10468a9a0(&decomp_var_c0);
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4052 = sign_extend_64(r8) < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l24;
    goto .l23;

.l266:
    if (!bool_3861) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l269;

.l298:
    if (!bool_3903) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l295;

.l254:
    goto .l252;

.l237:
    r0 = sub_100004130(&arg_80, "HttpService is not allowed to access that Roblox resource", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_97) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l248:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l236;
    goto .l247;

.l205:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l216:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3786 = sign_extend_64(r8) < 0x0;
    goto .l214;

.l189:
    if ((sub_104689c38(r21) & 0x1) == 0x0) goto .l203;
    goto .l193;

.l209:
    if ((sub_10468aa48(r21) & 0x1) == 0x0) {
            r0 = sub_100004130(&arg_50, "HttpService is not allowed to access that Roblox resource", r2);
            sub_1000080fc(r19);
            if ((sign_extend_64(arg_67) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l223:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l150:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3706 = sign_extend_64(r8) < 0x0;
    goto .l145;

.l157:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l152;
    goto .l181;

.l165:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l130:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3664 = sign_extend_64(r8) < 0x0;
    goto .l105;

.l96:
    if ((sub_104689c38(r21) & 0x1) == 0x0) goto loc_104689700;
    goto loc_1046895e8;

.l93:
    if ((sub_10468aa48(r21) & 0x1) == 0x0) {
            r0 = sub_100004130(&arg_50, "HttpService is not allowed to access that Roblox resource", r2);
            sub_1000080fc(r19);
            if ((sign_extend_64(arg_67) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l135:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l28:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3646 = r9 < 0x0;
    goto .l103;

.l81:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l64;
    goto loc_1046894ec;

.l347:
    if (!bool_3970) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l350;

.l36:
    if (!bool_3565) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l90;

.l331:
    goto .l329;

.l314:
    r0 = sub_100004130(&arg_80, "HttpService is not allowed to access that Roblox resource", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_97) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l325:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l313;
    goto .l324;

.l640:
    if (bool_4385) goto .l296;
    goto .l641;

.l543:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4267 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l196;
    goto .l544;

.l454:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4162 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l49;
    goto .l455;

.l23:
    if (bool_4052) goto .l78;
    goto .l77;

.l269:
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_20, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_37) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l295:
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_68, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_7f) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l252:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l231;
    goto .l257;

.l236:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l247:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l235;
    goto .l246;

.l214:
    if (!bool_3786) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l215;

.l203:
    r0 = sub_100004130(&arg_38, "HttpService is not allowed to access that Roblox resource", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_4f) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l193:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l202;
    goto .l192;

.l145:
    goto .l142;

.l152:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l208;
    goto .l169;

.l181:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3733 = sign_extend_64(r8) < 0x0;
    goto .l175;

.l105:
    if (!bool_3664) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l99;

loc_104689700:
    r0 = sub_100004130(&arg_38, "HttpService is not allowed to access that Roblox resource", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_4f) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

loc_1046895e8:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l129;
    goto loc_1046895f8;

.l103:
    goto .l100;

.l64:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l120;
    goto .l139;

loc_1046894ec:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3670 = r9 < 0x0;
    goto .l30;

.l350:
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_20, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_37) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l90:
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_68, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_7f) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l329:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l308;
    goto .l334;

.l313:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l324:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l312;
    goto .l323;

.l641:
    sub_10298e1c8();
    r22 = sub_10301047c(r22 + 0x30, "..", 0x0);
    sub_10000ecb0(&decomp_var_c0);
    r24 = *(int8_t *)byte_106c4e198;
    r0 = sub_1022f2f50(r20);
    if (r24 != 0x1) goto .l694;
    goto .l642;

.l544:
    if (bool_4267) goto .l147;
    goto .l545;

.l455:
    if (bool_4162) goto .l19;
    goto .l456;

.l77:
    sub_10298e1c8();
    r22 = sub_10301047c(r22 + 0x30, "..", 0x0);
    sub_10000ecb0(&decomp_var_c0);
    r24 = *(int8_t *)byte_106c4e198;
    r0 = sub_1022f2f50(r20);
    if (r24 != 0x1) goto .l425;
    goto .l386;

.l231:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l257:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3846 = sign_extend_64(r8) < 0x0;
    goto .l256;

.l235:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l246:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3831 = sign_extend_64(r8) < 0x0;
    goto .l242;

.l215:
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_20, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_37) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l202:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l192:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l221;
    goto .l191;

.l142:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l222;
    goto .l149;

.l208:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l169:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l207;
    goto .l167;

.l175:
    if (!bool_3733) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l176;

.l99:
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_20, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_37) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l129:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

loc_1046895f8:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l128;
    goto loc_104689604;

.l100:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l134;
    goto .l25;

.l120:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l139:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l112;
    goto .l138;

.l30:
    if (!bool_3670) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l84;

.l308:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l334:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3947 = sign_extend_64(r8) < 0x0;
    goto .l333;

.l312:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l323:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3932 = sign_extend_64(r8) < 0x0;
    goto .l319;

.l694:
    if (*(int8_t *)byte_106c4e1b0 == 0x0) goto .l717;
    goto .l695;

.l642:
    if (*(int8_t *)byte_106c4e1b0 == 0x0) goto .l688;
    goto .l643;

.l545:
    if ((sub_104689c38(r21) & 0x1) == 0x0) goto .l625;
    goto .l546;

.l456:
    if ((sub_104689c38(r21) & 0x1) == 0x0) goto .l536;
    goto .l457;

.l425:
    if (*(int8_t *)byte_106c4e1b0 == 0x0) goto .l442;
    goto .l426;

.l386:
    if (*(int8_t *)byte_106c4e1b0 == 0x0) goto .l422;
    goto .l387;

.l256:
    if (!bool_3846) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l253;

.l242:
    goto .l240;

.l221:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l191:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3748 = sign_extend_64(r8) < 0x0;
    goto .l187;

.l222:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l149:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3707 = sign_extend_64(r8) < 0x0;
    goto .l146;

.l207:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l167:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3718 = sign_extend_64(r8) < 0x0;
    goto .l156;

.l176:
    if ((sub_104689c38(r21) & 0x1) == 0x0) goto .l173;
    goto .l185;

.l128:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

loc_104689604:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3651 = sign_extend_64(r8) < 0x0;
    goto .l45;

.l134:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l25:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3655 = r9 < 0x0;
    goto .l104;

.l112:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l138:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3624 = sign_extend_64(r8) < 0x0;
    goto .l51;

.l84:
    if ((sub_104689c38(r21) & 0x1) == 0x0) goto loc_10468972c;
    goto loc_104689510;

.l333:
    if (!bool_3947) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l330;

.l319:
    goto .l317;

.l717:
    if ((r0 & 0x1) != 0x0) {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    else {
            r0 = sub_100004130(&arg_8, "HttpService is not allowed to access ROBLOX resources", 0x0);
            sub_1000080fc(r19);
            if ((sign_extend_64(arg_1f) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
    }
    return;

.l695:
    if ((r0 & 0x1) != 0x0) goto .l709;
    goto .l696;

.l688:
    if ((r0 & 0x1) != 0x0) goto .l693;
    goto .l689;

.l643:
    if ((r0 & 0x1) != 0x0) goto .l676;
    goto .l644;

.l625:
    r8 = 0x106c4def8;
    goto .l197;

.l546:
    sub_10468a268(r21, r20, "HttpServiceReportUrl-ok", *(int32_t *)0x106c4e248);
    decomp_var_c0 = *(sub_10487afa4(r21) + 0x378);
    r22 = &decomp_var_c0;
    r0 = sub_10468a9a0(&decomp_var_c0);
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4270 = sign_extend_64(r8) < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l195;
    goto .l547;

.l536:
    r8 = 0x106c4def8;
    goto .l71;

.l457:
    sub_10468a268(r21, r20, "HttpServiceReportUrl-ok", *(int32_t *)0x106c4e248);
    decomp_var_c0 = *(sub_10487afa4(r21) + 0x378);
    r22 = &decomp_var_c0;
    r0 = sub_10468a9a0(&decomp_var_c0);
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4165 = sign_extend_64(r8) < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l48;
    goto .l458;

.l442:
    if ((r0 & 0x1) != 0x0) {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    else {
            r0 = sub_100004130(&arg_8, "HttpService is not allowed to access ROBLOX resources", 0x0);
            sub_1000080fc(r19);
            if ((sign_extend_64(arg_1f) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
    }
    return;

.l426:
    if ((r0 & 0x1) != 0x0) goto .l434;
    goto .l427;

.l422:
    if ((r0 & 0x1) != 0x0) goto .l424;
    goto .l423;

.l387:
    if ((r0 & 0x1) != 0x0) goto .l410;
    goto .l388;

.l253:
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_68, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_7f) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l240:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l234;
    goto .l245;

.l187:
    if (!bool_3748) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l190;

.l146:
    if (!bool_3707) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l143;

.l156:
    goto .l154;

.l173:
    r0 = sub_100004130(&arg_80, "HttpService is not allowed to access that Roblox resource", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_97) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l185:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l172;
    goto .l184;

.l45:
    if (!bool_3651) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l133;

.l104:
    if (!bool_3655) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l101;

.l51:
    goto .l70;

loc_10468972c:
    r0 = sub_100004130(&arg_80, "HttpService is not allowed to access that Roblox resource", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_97) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

loc_104689510:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l43;
    goto .l40;

.l330:
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_68, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_7f) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l317:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l311;
    goto .l322;

.l709:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l716;
    goto .l710;

.l696:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4451 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l267;
    goto .l697;

.l693:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l689:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4443 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l262;
    goto .l690;

.l676:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l687;
    goto .l677;

.l644:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4390 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l251;
    goto .l645;

.l547:
    if (bool_4270) goto .l144;
    goto .l548;

.l458:
    if (bool_4165) goto .l102;
    goto .l459;

.l434:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l441;
    goto .l435;

.l427:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4118 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l348;
    goto .l41;

.l424:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l423:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4110 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l339;
    goto .l38;

.l410:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l421;
    goto .l411;

.l388:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4057 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l328;
    goto .l26;

.l234:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l245:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3832 = sign_extend_64(r8) < 0x0;
    goto .l243;

.l190:
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_20, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_37) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l143:
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_68, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_7f) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l154:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l206;
    goto .l166;

.l172:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l184:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l171;
    goto .l183;

.l133:
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_20, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_37) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l101:
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_68, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_7f) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l70:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l140;
    goto .l137;

.l43:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l40:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l161;
    goto .l37;

.l311:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l322:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3933 = sign_extend_64(r8) < 0x0;
    goto .l320;

.l716:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l710:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l715;
    goto .l711;

.l697:
    if (bool_4451) goto .l708;
    goto .l698;

.l690:
    if (bool_4443) goto .l692;
    goto .l691;

.l687:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l677:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l686;
    goto .l678;

.l645:
    if (bool_4390) goto .l255;
    goto .l646;

.l548:
    sub_10298e1c8();
    r22 = sub_10301047c(r22 + 0x30, "..", 0x0);
    sub_10000ecb0(&decomp_var_c0);
    r24 = *(int8_t *)byte_106c4e198;
    r0 = sub_1022f2f50(r20);
    if (r24 != 0x1) goto .l601;
    goto .l549;

.l459:
    sub_10298e1c8();
    r22 = sub_10301047c(r22 + 0x30, "..", 0x0);
    sub_10000ecb0(&decomp_var_c0);
    r24 = *(int8_t *)byte_106c4e198;
    r0 = sub_1022f2f50(r20);
    if (r24 != 0x1) goto .l512;
    goto .l460;

.l441:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l435:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l440;
    goto .l436;

.l41:
    if (bool_4118) goto .l94;
    goto .l95;

.l38:
    if (bool_4110) goto .l91;
    goto .l92;

.l421:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l411:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l420;
    goto .l412;

.l26:
    if (bool_4057) goto .l332;
    goto .l80;

.l243:
    if (!bool_3832) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l241;

.l206:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l166:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3720 = sign_extend_64(r8) < 0x0;
    goto .l162;

.l171:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l183:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3737 = sign_extend_64(r8) < 0x0;
    goto .l179;

.l140:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l137:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3626 = sign_extend_64(r8) < 0x0;
    goto .l58;

.l161:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l37:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3674 = r9 < 0x0;
    goto .l126;

.l320:
    if (!bool_3933) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l318;

.l715:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l711:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4468 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l277;
    goto .l712;

.l708:
    r2 = r11;
    goto .l268;

.l698:
    r2 = r8;
    if ((sub_104689c38(r21) & 0x1) == 0x0) goto .l707;
    goto .l699;

.l692:
    r2 = r11;
    goto .l261;

.l691:
    r2 = r8;
    if ((sub_10468aa48(r21) & 0x1) == 0x0) {
            r0 = sub_100004130(&arg_50, "HttpService is not allowed to access that Roblox resource", r2);
            sub_1000080fc(r19);
            if ((sign_extend_64(arg_67) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l686:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l678:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4429 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l297;
    goto .l679;

.l646:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l664;
    goto .l647;

.l601:
    if (*(int8_t *)byte_106c4e1b0 == 0x0) goto .l624;
    goto .l602;

.l549:
    if (*(int8_t *)byte_106c4e1b0 == 0x0) goto .l595;
    goto .l550;

.l512:
    if (*(int8_t *)byte_106c4e1b0 == 0x0) goto .l535;
    goto .l513;

.l460:
    if (*(int8_t *)byte_106c4e1b0 == 0x0) goto .l506;
    goto .l461;

.l440:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l436:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4135 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l356;
    goto .l437;

.l94:
    r2 = r11;
    goto .l349;

.l95:
    r2 = r8;
    if ((sub_104689c38(r21) & 0x1) == 0x0) goto .l433;
    goto .l428;

.l91:
    r2 = r11;
    goto .l338;

.l92:
    r2 = r8;
    if ((sub_10468aa48(r21) & 0x1) == 0x0) {
            r0 = sub_100004130(&arg_50, "HttpService is not allowed to access that Roblox resource", r2);
            sub_1000080fc(r19);
            if ((sign_extend_64(arg_67) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l420:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l412:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4096 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l33;
    goto .l413;

.l80:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l398;
    goto .l389;

.l241:
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_68, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_7f) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l162:
    if (!bool_3720) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l155;

.l179:
    goto .l177;

.l58:
    if (!bool_3626) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l50;

.l126:
    goto .l124;

.l318:
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_68, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_7f) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l712:
    if (bool_4468) goto .l714;
    goto .l713;

.l707:
    r0 = sub_100004130(&arg_38, "HttpService is not allowed to access that Roblox resource", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_4f) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l699:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l706;
    goto .l700;

.l679:
    if (bool_4429) goto .l294;
    goto .l680;

.l664:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l675;
    goto .l665;

.l647:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4393 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l238;
    goto .l648;

.l624:
    if ((r0 & 0x1) != 0x0) {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    else {
            r0 = sub_100004130(&arg_8, "HttpService is not allowed to access ROBLOX resources", 0x0);
            sub_1000080fc(r19);
            if ((sign_extend_64(arg_1f) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
    }
    return;

.l602:
    if ((r0 & 0x1) != 0x0) goto .l616;
    goto .l603;

.l595:
    if ((r0 & 0x1) != 0x0) goto .l600;
    goto .l596;

.l550:
    if ((r0 & 0x1) != 0x0) goto .l583;
    goto .l551;

.l535:
    if ((r0 & 0x1) != 0x0) {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    else {
            r0 = sub_100004130(&arg_8, "HttpService is not allowed to access ROBLOX resources", 0x0);
            sub_1000080fc(r19);
            if ((sign_extend_64(arg_1f) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
    }
    return;

.l513:
    if ((r0 & 0x1) != 0x0) goto .l527;
    goto .l514;

.l506:
    if ((r0 & 0x1) != 0x0) goto .l511;
    goto .l507;

.l461:
    if ((r0 & 0x1) != 0x0) goto .l494;
    goto .l462;

.l437:
    if (bool_4135) goto .l439;
    goto .l438;

.l433:
    r0 = sub_100004130(&arg_38, "HttpService is not allowed to access that Roblox resource", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_4f) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l428:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l432;
    goto .l429;

.l413:
    if (bool_4096) goto .l87;
    goto .l414;

.l398:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l409;
    goto .l399;

.l389:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4060 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l315;
    goto .l29;

.l155:
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_68, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_7f) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l177:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l170;
    goto .l182;

.l50:
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_68, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_7f) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l124:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l168;
    goto .l34;

.l714:
    r2 = r11;
    goto .l278;

.l713:
    r2 = r8;
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_20, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_37) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l706:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l700:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l705;
    goto .l701;

.l680:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l685;
    goto .l681;

.l675:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l665:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l674;
    goto .l666;

.l648:
    if (bool_4393) goto .l663;
    goto .l649;

.l616:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l623;
    goto .l617;

.l603:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4336 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l188;
    goto .l604;

.l600:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l596:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4328 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l210;
    goto .l597;

.l583:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l594;
    goto .l584;

.l551:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4275 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l153;
    goto .l552;

.l527:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l534;
    goto .l528;

.l514:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4231 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l42;
    goto .l515;

.l511:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l507:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4223 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l39;
    goto .l508;

.l494:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l505;
    goto .l495;

.l462:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4170 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l27;
    goto .l463;

.l439:
    r2 = r11;
    goto .l357;

.l438:
    r2 = r8;
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_20, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_37) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l432:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l429:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l431;
    goto .l430;

.l414:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l419;
    goto .l415;

.l409:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l399:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l408;
    goto .l400;

.l29:
    if (bool_4060) goto .l82;
    goto .l83;

.l170:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l182:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3738 = sign_extend_64(r8) < 0x0;
    goto .l180;

.l168:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l34:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_3675 = r9 < 0x0;
    goto .l127;

.l705:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l701:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4456 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l266;
    goto .l702;

.l685:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l681:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4432 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l298;
    goto .l682;

.l674:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l666:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4414 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l254;
    goto .l667;

.l663:
    r2 = r11;
    goto .l239;

.l649:
    r2 = r8;
    if ((sub_104689c38(r21) & 0x1) == 0x0) goto .l662;
    goto .l650;

.l623:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l617:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l622;
    goto .l618;

.l604:
    if (bool_4336) goto .l615;
    goto .l605;

.l597:
    if (bool_4328) goto .l599;
    goto .l598;

.l594:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l584:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l593;
    goto .l585;

.l552:
    if (bool_4275) goto .l157;
    goto .l553;

.l534:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l528:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l533;
    goto .l529;

.l515:
    if (bool_4231) goto .l526;
    goto .l516;

.l508:
    if (bool_4223) goto .l510;
    goto .l509;

.l505:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l495:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l504;
    goto .l496;

.l463:
    if (bool_4170) goto .l81;
    goto .l464;

.l431:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l430:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4123 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l347;
    goto .l44;

.l419:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l415:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4099 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l36;
    goto .l416;

.l408:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l400:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4081 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l331;
    goto .l401;

.l82:
    r2 = r11;
    goto .l316;

.l83:
    r2 = r8;
    if ((sub_104689c38(r21) & 0x1) == 0x0) goto .l397;
    goto .l390;

.l180:
    if (!bool_3738) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l178;

.l127:
    if (!bool_3675) {
            r2 = r8;
    }
    else {
            r2 = r11;
    }
    goto .l125;

.l702:
    if (bool_4456) goto .l704;
    goto .l703;

.l682:
    if (bool_4432) goto .l684;
    goto .l683;

.l667:
    if (bool_4414) goto .l252;
    goto .l668;

.l662:
    r0 = sub_100004130(&arg_80, "HttpService is not allowed to access that Roblox resource", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_97) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l650:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l661;
    goto .l651;

.l622:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l618:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4353 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l214;
    goto .l619;

.l615:
    r2 = r11;
    goto .l189;

.l605:
    r2 = r8;
    if ((sub_104689c38(r21) & 0x1) == 0x0) goto .l614;
    goto .l606;

.l599:
    r2 = r11;
    goto .l209;

.l598:
    r2 = r8;
    if ((sub_10468aa48(r21) & 0x1) == 0x0) {
            r0 = sub_100004130(&arg_50, "HttpService is not allowed to access that Roblox resource", r2);
            sub_1000080fc(r19);
            if ((sign_extend_64(arg_67) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l593:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l585:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4314 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l145;
    goto .l586;

.l553:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l571;
    goto .l554;

.l533:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l529:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4248 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l105;
    goto .l530;

.l526:
    r2 = r11;
    goto .l96;

.l516:
    r2 = r8;
    if ((sub_104689c38(r21) & 0x1) == 0x0) goto .l525;
    goto .l517;

.l510:
    r2 = r11;
    goto .l93;

.l509:
    r2 = r8;
    if ((sub_10468aa48(r21) & 0x1) == 0x0) {
            r0 = sub_100004130(&arg_50, "HttpService is not allowed to access that Roblox resource", r2);
            sub_1000080fc(r19);
            if ((sign_extend_64(arg_67) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l504:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l496:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4209 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l103;
    goto .l497;

.l464:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l482;
    goto .l465;

.l44:
    if (bool_4123) goto .l97;
    goto .l98;

.l416:
    if (bool_4099) goto .l418;
    goto .l417;

.l401:
    if (bool_4081) goto .l329;
    goto .l402;

.l397:
    r0 = sub_100004130(&arg_80, "HttpService is not allowed to access that Roblox resource", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_97) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l390:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l396;
    goto .l391;

.l178:
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_68, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_7f) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l125:
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_68, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_7f) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l704:
    r2 = r11;
    goto .l269;

.l703:
    r2 = r8;
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_20, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_37) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l684:
    r2 = r11;
    goto .l295;

.l683:
    r2 = r8;
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_68, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_7f) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l668:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l673;
    goto .l669;

.l661:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l651:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l660;
    goto .l652;

.l619:
    if (bool_4353) goto .l621;
    goto .l620;

.l614:
    r0 = sub_100004130(&arg_38, "HttpService is not allowed to access that Roblox resource", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_4f) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l606:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l613;
    goto .l607;

.l586:
    if (bool_4314) goto .l142;
    goto .l587;

.l571:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l582;
    goto .l572;

.l554:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4278 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l175;
    goto .l555;

.l530:
    if (bool_4248) goto .l532;
    goto .l531;

.l525:
    r0 = sub_100004130(&arg_38, "HttpService is not allowed to access that Roblox resource", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_4f) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l517:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l524;
    goto .l518;

.l497:
    if (bool_4209) goto .l100;
    goto .l498;

.l482:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l493;
    goto .l483;

.l465:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4173 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l30;
    goto .l466;

.l97:
    r2 = r11;
    goto .l350;

.l98:
    r2 = r8;
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_20, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_37) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l418:
    r2 = r11;
    goto .l90;

.l417:
    r2 = r8;
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_68, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_7f) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l402:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l407;
    goto .l403;

.l396:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l391:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l395;
    goto .l392;

.l673:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l669:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4417 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l256;
    goto .l670;

.l660:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l652:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4398 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l242;
    goto .l653;

.l621:
    r2 = r11;
    goto .l215;

.l620:
    r2 = r8;
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_20, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_37) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l613:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l607:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l612;
    goto .l608;

.l587:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l592;
    goto .l588;

.l582:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l572:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l581;
    goto .l573;

.l555:
    if (bool_4278) goto .l570;
    goto .l556;

.l532:
    r2 = r11;
    goto .l99;

.l531:
    r2 = r8;
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_20, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_37) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l524:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l518:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l523;
    goto .l519;

.l498:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l503;
    goto .l499;

.l493:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l483:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l492;
    goto .l484;

.l466:
    if (bool_4173) goto .l481;
    goto .l467;

.l407:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l403:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4084 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l333;
    goto .l404;

.l395:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l392:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4065 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l319;
    goto .l32;

.l670:
    if (bool_4417) goto .l672;
    goto .l671;

.l653:
    if (bool_4398) goto .l240;
    goto .l654;

.l612:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l608:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4341 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l187;
    goto .l609;

.l592:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l588:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4317 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l146;
    goto .l589;

.l581:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l573:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4299 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l156;
    goto .l574;

.l570:
    r2 = r11;
    goto .l176;

.l556:
    r2 = r8;
    if ((sub_104689c38(r21) & 0x1) == 0x0) goto .l569;
    goto .l557;

.l523:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l519:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4236 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l45;
    goto .l520;

.l503:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l499:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4212 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l104;
    goto .l500;

.l492:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l484:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4194 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l51;
    goto .l485;

.l481:
    r2 = r11;
    goto .l84;

.l467:
    r2 = r8;
    if ((sub_104689c38(r21) & 0x1) == 0x0) goto .l480;
    goto .l468;

.l404:
    if (bool_4084) goto .l406;
    goto .l405;

.l32:
    if (bool_4065) goto .l317;
    goto .l86;

.l672:
    r2 = r11;
    goto .l253;

.l671:
    r2 = r8;
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_68, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_7f) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l654:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l659;
    goto .l655;

.l609:
    if (bool_4341) goto .l611;
    goto .l610;

.l589:
    if (bool_4317) goto .l591;
    goto .l590;

.l574:
    if (bool_4299) goto .l154;
    goto .l575;

.l569:
    r0 = sub_100004130(&arg_80, "HttpService is not allowed to access that Roblox resource", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_97) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l557:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l568;
    goto .l558;

.l520:
    if (bool_4236) goto .l522;
    goto .l521;

.l500:
    if (bool_4212) goto .l502;
    goto .l501;

.l485:
    if (bool_4194) goto .l70;
    goto .l486;

.l480:
    r0 = sub_100004130(&arg_80, "HttpService is not allowed to access that Roblox resource", r2);
    sub_1000080fc(r19);
    if ((sign_extend_64(arg_97) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    return;

.l468:
    if (*(int8_t *)byte_106c4e278 != 0x1) goto .l479;
    goto .l469;

.l406:
    r2 = r11;
    goto .l330;

.l405:
    r2 = r8;
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_68, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_7f) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l86:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l394;
    goto .l393;

.l659:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l655:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4401 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l243;
    goto .l656;

.l611:
    r2 = r11;
    goto .l190;

.l610:
    r2 = r8;
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_20, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_37) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l591:
    r2 = r11;
    goto .l143;

.l590:
    r2 = r8;
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_68, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_7f) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l575:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l580;
    goto .l576;

.l568:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l558:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l567;
    goto .l559;

.l522:
    r2 = r11;
    goto .l133;

.l521:
    r2 = r8;
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_20, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_37) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l502:
    r2 = r11;
    goto .l101;

.l501:
    r2 = r8;
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_68, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_7f) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l486:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l491;
    goto .l487;

.l479:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l469:
    if ((sub_1022f2f50(r20) & 0x1) != 0x0) goto .l478;
    goto .l470;

.l394:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l393:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4068 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l320;
    goto .l35;

.l656:
    if (bool_4401) goto .l658;
    goto .l657;

.l580:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l576:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4302 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l162;
    goto .l577;

.l567:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l559:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4283 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l179;
    goto .l560;

.l491:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l487:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4197 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l58;
    goto .l488;

.l478:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l470:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4178 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l126;
    goto .l471;

.l35:
    if (bool_4068) goto .l88;
    goto .l89;

.l658:
    r2 = r11;
    goto .l241;

.l657:
    r2 = r8;
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_68, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_7f) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l577:
    if (bool_4302) goto .l579;
    goto .l578;

.l560:
    if (bool_4283) goto .l177;
    goto .l561;

.l488:
    if (bool_4197) goto .l490;
    goto .l489;

.l471:
    if (bool_4178) goto .l124;
    goto .l472;

.l88:
    r2 = r11;
    goto .l318;

.l89:
    r2 = r8;
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_68, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_7f) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l579:
    r2 = r11;
    goto .l155;

.l578:
    r2 = r8;
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_68, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_7f) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l561:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l566;
    goto .l562;

.l490:
    r2 = r11;
    goto .l50;

.l489:
    r2 = r8;
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_68, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_7f) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l472:
    if ((sub_10468aa48(r21) & 0x1) != 0x0) goto .l477;
    goto .l473;

.l566:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l562:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4286 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l180;
    goto .l563;

.l477:
    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
            sub_10468ad18();
    }
    return;

.l473:
    r8 = r20[0x17];
    r10 = *r20;
    r11 = r20[0x1];
    bool_4181 = r9 < 0x0;
    if (sign_extend_64(r8) < 0x0) goto .l127;
    goto .l474;

.l563:
    if (bool_4286) goto .l565;
    goto .l564;

.l474:
    if (bool_4181) goto .l476;
    goto .l475;

.l565:
    r2 = r11;
    goto .l178;

.l564:
    r2 = r8;
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_68, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_7f) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;

.l476:
    r2 = r11;
    goto .l125;

.l475:
    r2 = r8;
    if (sub_104689c38(r21) != 0x0) {
            if (r22 != -0x1) {
                    r0 = sub_100004130(&arg_68, "The \"..\" string is not allowed in the URL path for Roblox resources!", r2);
                    sub_1000080fc(r19);
                    if ((sign_extend_64(arg_7f) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                            sub_10468ad18();
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c4e0f0 == 0x1) {
                    sub_10468ad18();
            }
    }
    return;
}
