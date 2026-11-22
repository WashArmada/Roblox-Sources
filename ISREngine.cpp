function sub_104d70968 {
    decomp_var_60 = r28;
    decomp_var_58 = r27;
    decomp_var_50 = r26;
    decomp_var_48 = r25;
    decomp_var_40 = r24;
    decomp_var_38 = r23;
    decomp_var_30 = r22;
    decomp_var_28 = r21;
    decomp_var_20 = r20;
    decomp_var_18 = r19;
    decomp_var_10 = r29;
    decomp_var_8 = r30;
    r31 = r31 + 0xffffffffffffffa0 - 0x350;
    r26 = r4;
    decomp_var_308 = r3;
    r20 = r2;
    r24 = r1;
    r19 = r0;
    decomp_var_68 = **___stack_chk_guard;
    decomp_var_2f8 = r4[0x110];
    decomp_var_310 = r0 + 0x38;
    decomp_var_e0 = r0[0xe];
    r0 = sub_104d75384(r24, &decomp_var_e0);
    r0 = sub_104d6dfc8();
    r23 = r0;
    decomp_var_198 = r0;
    r0 = sub_1015ffaa8(r24);
    asm { ccmp       x8, x9, #0x0, ne };
    if (asm { ccmp       x8, x9, #0x0, ne }) {
            sub_1029fe0a0("Could not find Instance Type during ISR Deserialize");
    }
    decomp_var_1a0 = sub_104d6dfc8(r23);
    sub_1028a288c();
    decomp_var_160 = 0xffffffff;
    decomp_var_158 = &decomp_var_160 + 0x18;
    decomp_var_150 = 2.122e-313;
    r23 = decomp_var_2f8;
    if (decomp_var_1b0 != 0x0) {
            r22 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x8);
    }
    else {
            r22 = 0x0;
    }
    r25 = &decomp_var_240;
    decomp_var_320 = r26 + 0x5e0;
    r8 = 0xe0;
    asm { umaddl     x8, w27, w8, x21 };
    decomp_var_2e0 = r8;
    decomp_var_160 = decomp_var_1a0;
    decomp_var_2f0 = r24;
    decomp_var_350 = r22;
    if ((*(int8_t *)byte_106bdbca8 & 0x1) != 0x0) goto loc_104d70da0;
    goto loc_104d70ad0;

loc_104d70da0:
    r21 = r24[0xe];
    sub_101601e38(&decomp_var_e0);
    r0 = sub_101602068(r24, &decomp_var_e0);
    r8 = r24[0xe];
    q0 = r25[0x2a];
    q1 = r25[0x2c];
    r25[0xc] = q0;
    r25[0xe] = q1;
    decomp_var_2fc = r8 - r21;
    r26 = sub_1015ffaa8(r24);
    r21 = r24[0xe];
    r0 = r19[0x8];
    r0 = sub_104d6e574(r0, decomp_var_2e0[0x1]);
    decomp_var_340 = r21 + r26;
    decomp_var_1f8 = 0x0;
    decomp_var_1f0 = 0x0;
    r26 = decomp_var_1c0;
    if (r26 == 0x0) goto loc_104d71508;
    goto .l2;

loc_104d70ad0:
    r9 = *decomp_var_308;
    if ((r9 & 0x8) != 0x0) goto loc_104d70da0;
    goto loc_104d70adc;

loc_104d71508:
    decomp_var_328 = 0x0;
    decomp_var_344 = 0x0;
    decomp_var_2e8 = 0x0;
    r24 = decomp_var_1f8;
    r21 = decomp_var_1f0;
    if (r24 != r21) {
            while (true) {
                    if (*(int8_t *)byte_106c67660 != 0x1) {
                            r25 = sub_104e06ec8(0xc8);
                            sub_104e07174();
                            decomp_var_e0 = r25;
                            r25[0x4] = decomp_var_1a0;
                            r0 = sub_100005858(r25 + 0x30, &decomp_var_1b0);
                            r23 = decomp_var_e0;
                            r23[0x5] = r20[0x3];
                            if ((sign_extend_64(r23[0x67]) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00();
                            }
                            q0 = *(int128_t *)r24;
                            r23[0xc] = r24[0x2];
                            r23[0x5] = q0;
                            r24[0x17] = 0x0;
                            *(int8_t *)r24 = 0x0;
                            sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_e0);
                            r23 = decomp_var_2f8;
                            if (decomp_var_e0 != 0x0) {
                                    sub_104d7e9dc();
                                    sub_104e07020();
                            }
                            r24 = r24 + 0x18;
                            if (r24 != r21) {
                                    continue;
                            }
                            break;
                    }
                    r8 = sign_extend_64(r24[0x17]);
                    if ((r8 & 0xffffffff80000000) == 0x0) {
                            if (r8 == 0x0) {
                                    r24 = r24 + 0x18;
                                    if (r24 != r21) {
                                            continue;
                                    }
                                    break;
                            }
                            else {
                                    r0 = sub_104d73b30(r19, &decomp_var_198, r24);
                                    if (r0 == 0xffff) {
                                            r25 = sub_104e06ec8(0xc8);
                                            sub_104e07174();
                                            decomp_var_e0 = r25;
                                            r25[0x4] = decomp_var_1a0;
                                            r0 = sub_100005858(r25 + 0x30, &decomp_var_1b0);
                                            r23 = decomp_var_e0;
                                            r23[0x5] = r20[0x3];
                                            if ((sign_extend_64(r23[0x67]) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                            q0 = *(int128_t *)r24;
                                            r23[0xc] = r24[0x2];
                                            r23[0x5] = q0;
                                            r24[0x17] = 0x0;
                                            *(int8_t *)r24 = 0x0;
                                            sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_e0);
                                            r23 = decomp_var_2f8;
                                            if (decomp_var_e0 != 0x0) {
                                                    sub_104d7e9dc();
                                                    sub_104e07020();
                                            }
                                            r24 = r24 + 0x18;
                                            if (r24 != r21) {
                                                    continue;
                                            }
                                            break;
                                    }
                                    else {
                                            r24 = r24 + 0x18;
                                            if (r24 != r21) {
                                                    continue;
                                            }
                                            break;
                                    }
                            }
                    }
                    else {
                            if (r24[0x1] != 0x0) {
                                    r0 = sub_104d73b30(r19, &decomp_var_198, r24);
                                    if (r0 == 0xffff) {
                                            r25 = sub_104e06ec8(0xc8);
                                            sub_104e07174();
                                            decomp_var_e0 = r25;
                                            r25[0x4] = decomp_var_1a0;
                                            r0 = sub_100005858(r25 + 0x30, &decomp_var_1b0);
                                            r23 = decomp_var_e0;
                                            r23[0x5] = r20[0x3];
                                            if ((sign_extend_64(r23[0x67]) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                            q0 = *(int128_t *)r24;
                                            r23[0xc] = r24[0x2];
                                            r23[0x5] = q0;
                                            r24[0x17] = 0x0;
                                            *(int8_t *)r24 = 0x0;
                                            sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_e0);
                                            r23 = decomp_var_2f8;
                                            if (decomp_var_e0 != 0x0) {
                                                    sub_104d7e9dc();
                                                    sub_104e07020();
                                            }
                                            r24 = r24 + 0x18;
                                            if (r24 != r21) {
                                                    continue;
                                            }
                                            break;
                                    }
                                    else {
                                            r24 = r24 + 0x18;
                                            if (r24 != r21) {
                                                    continue;
                                            }
                                            break;
                                    }
                            }
                            else {
                                    r24 = r24 + 0x18;
                                    if (r24 != r21) {
                                            continue;
                                    }
                                    break;
                            }
                    }
            }
    }
    r1 = decomp_var_340;
    asm { ccmp       w1, #0x0, #0x4, eq };
    r0 = decomp_var_2f0;
    r21 = decomp_var_344;
    if (!asm { ccmp       w1, #0x0, #0x4, eq }) {
            r8 = r0[0xe];
            if (r8 != r1) {
                    if (*(int8_t *)byte_106c67630 != 0x1) {
                            sub_1029fe0a0("ISR property data size mismatch: read %u bytes, expected end at %zu");
                    }
                    sub_1015fe774(r0, r1);
                    decomp_var_e0 = &decomp_var_1f8;
                    r0 = sub_100015abc(&decomp_var_e0);
                    r8 = decomp_var_328;
                    r22 = r8;
                    if (r23 != 0x0) {
                            r24 = *(int8_t *)byte_106c48450;
                            sub_104d164e8(r23, r24, *(int16_t *)decomp_var_2e0, 0x1, decomp_var_2fc);
                            r8 = decomp_var_2e0;
                            sub_104d164e8(r23, r24, *(int16_t *)r8, 0x2, r22);
                    }
                    if (decomp_var_350 == 0x0) {
                            r8 = 0x1;
                    }
                    if (((r21 | r8) & 0x1) != 0x0) {
                            if ((r21 & 0x1) == 0x0) {
                                    r20 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x10);
                                    loc_102c3ec38();
                                    r0 = sub_104d7e5d4(r20 + 0x8, &decomp_var_198);
                                    r20 = r0;
                                    r0[0x1] = decomp_var_1a0;
                                    r1 = decomp_var_150;
                                    if (r1 >= r0[0x6]) {
                                            sub_104d7e308(r20 + 0x10);
                                            r1 = decomp_var_150;
                                    }
                                    if (r1 != 0x0) {
                                            r21 = 0x0;
                                            r22 = 0x0;
                                            do {
                                                    r9 = decomp_var_158;
                                                    r8 = *(r9 + r22 * 0x8);
                                                    if (r8 == 0x0) {
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    r10 = r20[0x2];
                                                    r11 = *(r10 + r21);
                                                    if (r11 == 0x0) {
                                                            *(r9 + r22 * 0x8) = 0x0;
                                                            sub_104d74328(r10 + r21, r8);
                                                            r1 = decomp_var_150;
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    if (r11[0xa] >= r8[0xa]) {
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    *(r9 + r22 * 0x8) = 0x0;
                                                    sub_104d74328(r10 + r21, r8);
                                                    r1 = decomp_var_150;
                                                    r22 = r22 + 0x1;
                                                    r21 = r21 + 0x8;
                                            } while (r22 < r1);
                                    }
                                    sub_102c3ebc0(&decomp_var_e0, r1);
                            }
                    }
                    else {
                            sub_104d73bfc();
                    }
                    if (*(int8_t *)byte_106c67600 == 0x1 && *(int8_t *)byte_106c67510 == 0x1) {
                            asm { ldaddal    x9, x8, [x8] };
                            asm { ldaddal    x9, x8, [x8] };
                    }
                    r19 = decomp_var_198;
                    sub_104d754c0(&decomp_var_160 + 0x8);
                    r20 = decomp_var_1a8;
                    if (r20 != 0x0) {
                            r8 = r20 + 0x8;
                            asm { ldaddal    x9, x8, [x8] };
                            if (r8 == 0x0) {
                                    (*(*r20 + 0x10))(r20);
                                    std::__1::__shared_weak_count::__release_weak();
                            }
                    }
                    if (**___stack_chk_guard != decomp_var_68) {
                            __stack_chk_fail();
                    }
            }
            else {
                    decomp_var_e0 = &decomp_var_1f8;
                    r0 = sub_100015abc(&decomp_var_e0);
                    r8 = decomp_var_328;
                    r22 = r8;
                    if (r23 != 0x0) {
                            r24 = *(int8_t *)byte_106c48450;
                            sub_104d164e8(r23, r24, *(int16_t *)decomp_var_2e0, 0x1, decomp_var_2fc);
                            r8 = decomp_var_2e0;
                            sub_104d164e8(r23, r24, *(int16_t *)r8, 0x2, r22);
                    }
                    if (decomp_var_350 == 0x0) {
                            r8 = 0x1;
                    }
                    if (((r21 | r8) & 0x1) != 0x0) {
                            if ((r21 & 0x1) == 0x0) {
                                    r20 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x10);
                                    loc_102c3ec38();
                                    r0 = sub_104d7e5d4(r20 + 0x8, &decomp_var_198);
                                    r20 = r0;
                                    r0[0x1] = decomp_var_1a0;
                                    r1 = decomp_var_150;
                                    if (r1 >= r0[0x6]) {
                                            sub_104d7e308(r20 + 0x10);
                                            r1 = decomp_var_150;
                                    }
                                    if (r1 != 0x0) {
                                            r21 = 0x0;
                                            r22 = 0x0;
                                            do {
                                                    r9 = decomp_var_158;
                                                    r8 = *(r9 + r22 * 0x8);
                                                    if (r8 == 0x0) {
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    r10 = r20[0x2];
                                                    r11 = *(r10 + r21);
                                                    if (r11 == 0x0) {
                                                            *(r9 + r22 * 0x8) = 0x0;
                                                            sub_104d74328(r10 + r21, r8);
                                                            r1 = decomp_var_150;
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    if (r11[0xa] >= r8[0xa]) {
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    *(r9 + r22 * 0x8) = 0x0;
                                                    sub_104d74328(r10 + r21, r8);
                                                    r1 = decomp_var_150;
                                                    r22 = r22 + 0x1;
                                                    r21 = r21 + 0x8;
                                            } while (r22 < r1);
                                    }
                                    sub_102c3ebc0(&decomp_var_e0, r1);
                            }
                    }
                    else {
                            sub_104d73bfc();
                    }
                    if (*(int8_t *)byte_106c67600 == 0x1 && *(int8_t *)byte_106c67510 == 0x1) {
                            asm { ldaddal    x9, x8, [x8] };
                            asm { ldaddal    x9, x8, [x8] };
                    }
                    r19 = decomp_var_198;
                    sub_104d754c0(&decomp_var_160 + 0x8);
                    r20 = decomp_var_1a8;
                    if (r20 != 0x0) {
                            r8 = r20 + 0x8;
                            asm { ldaddal    x9, x8, [x8] };
                            if (r8 == 0x0) {
                                    (*(*r20 + 0x10))(r20);
                                    std::__1::__shared_weak_count::__release_weak();
                            }
                    }
                    if (**___stack_chk_guard != decomp_var_68) {
                            __stack_chk_fail();
                    }
            }
    }
    else {
            decomp_var_e0 = &decomp_var_1f8;
            r0 = sub_100015abc(&decomp_var_e0);
            r8 = decomp_var_328;
            r22 = r8;
            if (r23 != 0x0) {
                    r24 = *(int8_t *)byte_106c48450;
                    sub_104d164e8(r23, r24, *(int16_t *)decomp_var_2e0, 0x1, decomp_var_2fc);
                    r8 = decomp_var_2e0;
                    sub_104d164e8(r23, r24, *(int16_t *)r8, 0x2, r22);
            }
            if (decomp_var_350 == 0x0) {
                    r8 = 0x1;
            }
            if (((r21 | r8) & 0x1) != 0x0) {
                    if ((r21 & 0x1) == 0x0) {
                            r20 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x10);
                            loc_102c3ec38();
                            r0 = sub_104d7e5d4(r20 + 0x8, &decomp_var_198);
                            r20 = r0;
                            r0[0x1] = decomp_var_1a0;
                            r1 = decomp_var_150;
                            if (r1 >= r0[0x6]) {
                                    sub_104d7e308(r20 + 0x10);
                                    r1 = decomp_var_150;
                            }
                            if (r1 != 0x0) {
                                    r21 = 0x0;
                                    r22 = 0x0;
                                    do {
                                            r9 = decomp_var_158;
                                            r8 = *(r9 + r22 * 0x8);
                                            if (r8 == 0x0) {
                                                    r22 = r22 + 0x1;
                                                    r21 = r21 + 0x8;
                                                    if (r22 < r1) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                            r10 = r20[0x2];
                                            r11 = *(r10 + r21);
                                            if (r11 == 0x0) {
                                                    *(r9 + r22 * 0x8) = 0x0;
                                                    sub_104d74328(r10 + r21, r8);
                                                    r1 = decomp_var_150;
                                                    r22 = r22 + 0x1;
                                                    r21 = r21 + 0x8;
                                                    if (r22 < r1) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                            if (r11[0xa] >= r8[0xa]) {
                                                    r22 = r22 + 0x1;
                                                    r21 = r21 + 0x8;
                                                    if (r22 < r1) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                            *(r9 + r22 * 0x8) = 0x0;
                                            sub_104d74328(r10 + r21, r8);
                                            r1 = decomp_var_150;
                                            r22 = r22 + 0x1;
                                            r21 = r21 + 0x8;
                                    } while (r22 < r1);
                            }
                            sub_102c3ebc0(&decomp_var_e0, r1);
                    }
            }
            else {
                    sub_104d73bfc();
            }
            if (*(int8_t *)byte_106c67600 == 0x1 && *(int8_t *)byte_106c67510 == 0x1) {
                    asm { ldaddal    x9, x8, [x8] };
                    asm { ldaddal    x9, x8, [x8] };
            }
            r19 = decomp_var_198;
            sub_104d754c0(&decomp_var_160 + 0x8);
            r20 = decomp_var_1a8;
            if (r20 != 0x0) {
                    r8 = r20 + 0x8;
                    asm { ldaddal    x9, x8, [x8] };
                    if (r8 == 0x0) {
                            (*(*r20 + 0x10))(r20);
                            std::__1::__shared_weak_count::__release_weak();
                    }
            }
            if (**___stack_chk_guard != decomp_var_68) {
                    __stack_chk_fail();
            }
    }
    return;

.l2:
    decomp_var_2e8 = 0x0;
    decomp_var_344 = 0x0;
    decomp_var_338 = 0x0;
    decomp_var_328 = 0x0;
    r24 = 0x0;
    decomp_var_318 = r0;
    decomp_var_370 = 0x106b27872;
    decomp_var_330 = 0x106b2785a;
    decomp_var_358 = 0x107180408;
    decomp_var_360 = 0x10717fab0;
    decomp_var_368 = 0x10717fb78;
    r21 = &decomp_var_1e0;
    r8 = "Invalid ISR attribute id";
    goto loc_104d70e8c;

loc_104d70adc:
    r10 = decomp_var_2e0[0x11];
    r8 = r10[0x12];
    if ((*(int8_t *)byte_106bdbcc0 & 0x1) != 0x0 || (r9 & 0x1) != 0x0) goto loc_104d70af8;
    goto .l3;

loc_104d70e8c:
    if (r24 <= 0xff) {
            if (r26 >= zero_extend_64(r24)) {
                    r8 = *(r21 + (r24 >> 0x3 & 0x1ffffffffffffff8));
                    r8 = r8 >> r24;
                    if ((r8 & 0x1) != 0x0) {
                            r1 = r19[0x8];
                            r8 = decomp_var_2e0[0x1];
                            if (r24 < decomp_var_318) {
                                    r0 = sub_104d6e4e0(r1, r8, r24 & 0xffff);
                                    r27 = r0;
                                    if (r0 == 0x0) {
                                            sub_1029fe0a0("Failed deserializing during ISR Receive, cannot continue");
                                    }
                                    r28 = sub_104e06ec8(0xc8);
                                    sub_104e07174();
                                    decomp_var_240 = r28;
                                    r28[0x4] = decomp_var_1a0;
                                    r0 = sub_100005858(r28 + 0x30, &decomp_var_1b0);
                                    r21 = 0x0;
                                    decomp_var_240[0x5] = r20[0x3];
                                    decomp_var_240[0x24] = *(int16_t *)r27;
                                    r8 = r27[0x5];
                                    decomp_var_240[0x8] = r8;
                                    decomp_var_e0 = r27 + 0x8;
                                    if (*(int8_t *)byte_106c669c8 == 0x1 && r23 != 0x0) {
                                            if (r8 != 0x0) {
                                                    r6 = r8[0x1];
                                            }
                                            r21 = &decomp_var_190;
                                            r0 = sub_104d16830(&decomp_var_190, r23, decomp_var_2f0, 0x1, &decomp_var_1a0, 0x1);
                                    }
                                    decomp_var_218 = r21;
                                    r0 = sub_1000ce7bc(&decomp_var_2b8, &decomp_var_218);
                                    sub_10002aa44(&decomp_var_218);
                                    r1 = r27[0x1];
                                    r8 = r27[0x5];
                                    if ((r1 & 0xff00) == 0x3900) {
                                            r9 = decomp_var_320;
                                    }
                                    else {
                                            if (r8 != decomp_var_358 && r8 != decomp_var_360 && r8 != decomp_var_368) {
                                                    r9 = 0x0;
                                            }
                                            else {
                                                    r9 = decomp_var_320;
                                            }
                                    }
                                    r21 = &decomp_var_1e0;
                                    r25 = r25 & 0xffffffff00000000 | *(int16_t *)r27 | 0x10000;
                                    r27 = sub_104d71b14(decomp_var_2f0);
                                    sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_240);
                                    r0 = sub_1010d4a60(&decomp_var_2b8);
                                    r0 = decomp_var_240;
                                    decomp_var_240 = 0x0;
                                    if (r0 != 0x0) {
                                            sub_104d7e9dc();
                                            sub_104e07020();
                                    }
                                    decomp_var_2e8 = decomp_var_2e8 + 0x1;
                                    r8 = r27 + decomp_var_2fc;
                                    decomp_var_2fc = r8;
                                    r24 = r24 + 0x1;
                                    if (r24 < r26) {
                                            continue;
                                    }
                                    temp_0 = 0x0;
                                    break;
                            }
                            else {
                                    r27 = sub_104d6e774(r24 & 0xffff);
                                    r8 = *(int8_t *)byte_106c67660;
                                    if (*(int8_t *)byte_106c67660 == 0x1) {
                                            if (r27 < 0x40) {
                                                    if ((decomp_var_338 & 0x1) == 0x0) {
                                                            r0 = sub_104d6f350(r19, &decomp_var_198, r20[0x6]);
                                                            if (r0 == 0x0) {
                                                                    decomp_var_338 = 0x1;
                                                                    if (sub_104d6e650(r24 & 0xffff, r19[0x8], decomp_var_2e0[0x1]) != 0x0) {
                                                                            if (*(int8_t *)byte_106c67660 == 0x1) {
                                                                                    decomp_var_e0 = *(int32_t *)r20;
                                                                                    r0 = sub_104d6f2fc(r19 + 0x58, &decomp_var_e0);
                                                                                    r8 = r19[0xb];
                                                                                    r8 = r8 + r19[0x1a] * 0x20;
                                                                                    if (r8 != r0) {
                                                                                            r8 = r0[0x18];
                                                                                            if (r8 == 0x1) {
                                                                                                    asm { ccmp       w8, #0x5, #0x0, hs };
                                                                                                    if (!asm { ccmp       w8, #0x5, #0x0, hs }) {
                                                                                                            r0 = *qword_106c488c0;
                                                                                                            r1 = *qword_106c488c8;
                                                                                                            decomp_var_e0 = *(int32_t *)r20;
                                                                                                            r0 = sub_1029fea60(r0, r1, 0x5, "[DFLog::ISRIncomingOutgoingAttributes] {} - InstanceStateSerializationManager::deserializeAttributeSchema: {}, - {} - ts: {}", 0x7c, 0x1112, &decomp_var_e0, 0x1);
                                                                                                    }
                                                                                                    r0 = sub_104d72b94(r19, decomp_var_2f0, decomp_var_198, r27, &decomp_var_1f8);
                                                                                                    r8 = r0 + decomp_var_328;
                                                                                                    decomp_var_328 = r8;
                                                                                                    r24 = r24 + 0x1;
                                                                                                    if (r24 < r26) {
                                                                                                            continue;
                                                                                                    }
                                                                                                    temp_0 = 0x0;
                                                                                                    break;
                                                                                            }
                                                                                            else {
                                                                                                    temp_0 = 0x4;
                                                                                                    break;
                                                                                            }
                                                                                    }
                                                                                    else {
                                                                                            temp_0 = 0x4;
                                                                                            break;
                                                                                    }
                                                                            }
                                                                            else {
                                                                                    asm { ccmp       w8, #0x5, #0x0, hs };
                                                                                    if (!asm { ccmp       w8, #0x5, #0x0, hs }) {
                                                                                            r0 = *qword_106c488c0;
                                                                                            r1 = *qword_106c488c8;
                                                                                            decomp_var_e0 = *(int32_t *)r20;
                                                                                            r0 = sub_1029fea60(r0, r1, 0x5, "[DFLog::ISRIncomingOutgoingAttributes] {} - InstanceStateSerializationManager::deserializeAttributeSchema: {}, - {} - ts: {}", 0x7c, 0x1112, &decomp_var_e0, 0x1);
                                                                                    }
                                                                                    r0 = sub_104d72b94(r19, decomp_var_2f0, decomp_var_198, r27, &decomp_var_1f8);
                                                                                    r8 = r0 + decomp_var_328;
                                                                                    decomp_var_328 = r8;
                                                                                    r24 = r24 + 0x1;
                                                                                    if (r24 < r26) {
                                                                                            continue;
                                                                                    }
                                                                                    temp_0 = 0x0;
                                                                                    break;
                                                                            }
                                                                    }
                                                                    else {
                                                                            if (*(int8_t *)byte_106c67618 == 0x1) {
                                                                                    r2 = r27;
                                                                                    r0 = sub_104d73804(r19, &decomp_var_198, r2, r20[0x6]);
                                                                            }
                                                                            else {
                                                                                    r2 = r27;
                                                                                    r0 = sub_104d7396c(r19, &decomp_var_198, r2);
                                                                            }
                                                                            r1 = decomp_var_340;
                                                                            r21 = decomp_var_168;
                                                                            if (r1 == 0x0) {
                                                                                    r22 = 0x1;
                                                                            }
                                                                            else {
                                                                                    r22 = r21;
                                                                            }
                                                                            if ((r22 & 0x1) != 0x0) {
                                                                                    if (r21 != 0x0) {
                                                                                            decomp_var_240 = decomp_var_190;
                                                                                            decomp_var_230 = decomp_var_180;
                                                                                            decomp_var_180 = 0x0;
                                                                                            decomp_var_190 = 0x0;
                                                                                            decomp_var_228 = decomp_var_178;
                                                                                    }
                                                                                    else {
                                                                                            r0 = sub_100004130(&decomp_var_240, "", r2);
                                                                                            decomp_var_228 = 0xffff0001;
                                                                                            decomp_var_220 = 0x0;
                                                                                    }
                                                                                    if ((*qword_106c488c0 & 0xff) >= 0x6 && (*qword_106c488c0 >> 0x8 & 0xff) >= 0x5) {
                                                                                            r8 = qword_106c488c0;
                                                                                            if (decomp_var_350 != 0x0) {
                                                                                                    r8 = 0x1;
                                                                                            }
                                                                                            r9 = *(int32_t *)r20;
                                                                                            r10 = decomp_var_19c;
                                                                                            r12 = decomp_var_240;
                                                                                            r11 = &decomp_var_240;
                                                                                            if (sign_extend_64(decomp_var_229) < 0x0) {
                                                                                                    r11 = r12;
                                                                                            }
                                                                                            r0 = *qword_106c488c0;
                                                                                            decomp_var_e0 = r9;
                                                                                            r0 = sub_1029fea60(r0, *qword_106c488c8, 0x5, "[DFLog::ISRIncomingOutgoingAttributes] {} - InstanceStateSerializationManager::deserializeAttributeValue: {}, - {} {} - type: {} - ts: {} - into changes container: {}", 0xa6, 0x711c112, &decomp_var_e0, 0x1);
                                                                                    }
                                                                                    r28 = 0x0;
                                                                                    if (*(int8_t *)byte_106c669c8 == 0x1 && r23 != 0x0) {
                                                                                            r9 = decomp_var_240;
                                                                                            r8 = &decomp_var_240;
                                                                                            r28 = &decomp_var_e0;
                                                                                            r0 = sub_104d16830(&decomp_var_e0, r23, decomp_var_2f0, 0x1, &decomp_var_1a0, 0x2);
                                                                                    }
                                                                                    decomp_var_280 = r28;
                                                                                    r0 = sub_1000ce7bc(&decomp_var_260, &decomp_var_280);
                                                                                    sub_10002aa44(&decomp_var_280);
                                                                                    r28 = sub_104e06ec8(0xc8);
                                                                                    sub_104e07174();
                                                                                    decomp_var_288 = r28;
                                                                                    r28[0x4] = decomp_var_1a0;
                                                                                    r0 = sub_100005858(r28 + 0x30, &decomp_var_1b0);
                                                                                    r28 = decomp_var_288;
                                                                                    r28[0x5] = r20[0x3];
                                                                                    r28[0x25] = r27;
                                                                                    r27 = r28;
                                                                                    if ((sign_extend_64(r28[0x67]) & 0xffffffff80000000) != 0x0) {
                                                                                            loc_1029f6b00();
                                                                                            r27 = decomp_var_288;
                                                                                    }
                                                                                    r28[0x5] = decomp_var_240;
                                                                                    r28[0xc] = decomp_var_230;
                                                                                    decomp_var_229 = 0x0;
                                                                                    decomp_var_240 = 0x0;
                                                                                    if ((decomp_var_228 & 0x1) == 0x0) {
                                                                                            sub_104d73a6c(&decomp_var_240 + 0x18, r27 + 0x68, decomp_var_1b0, 0xffff);
                                                                                            r9 = decomp_var_378 & 0xffffffff00000000;
                                                                                            decomp_var_378 = r9;
                                                                                            r0 = sub_104d71b14(decomp_var_2f0, decomp_var_228, decomp_var_220, &decomp_var_2b8, decomp_var_310, r19[0x9], r20, decomp_var_308, r23, *(int16_t *)decomp_var_2e0, r9, 0x0, 0x0);
                                                                                            r27 = r0;
                                                                                            sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_288);
                                                                                            decomp_var_2e8 = decomp_var_2e8 + 0x1;
                                                                                            decomp_var_328 = r27 + decomp_var_328;
                                                                                            r27 = decomp_var_288;
                                                                                    }
                                                                                    if (r27 != 0x0) {
                                                                                            sub_104d7e9dc(r27);
                                                                                            sub_104e07020();
                                                                                    }
                                                                                    r0 = sub_1010d4a60(&decomp_var_260);
                                                                                    r8 = sign_extend_64(decomp_var_229);
                                                                                    if ((r8 & 0xffffffff80000000) != 0x0) {
                                                                                            loc_1029f6b00();
                                                                                    }
                                                                            }
                                                                            else {
                                                                                    sub_1015fe774(decomp_var_2f0, r1);
                                                                                    r8 = 0x1;
                                                                                    decomp_var_344 = 0x1;
                                                                            }
                                                                            if (r21 != 0x0) {
                                                                                    r8 = sign_extend_64(decomp_var_179);
                                                                                    if ((r8 & 0xffffffff80000000) != 0x0) {
                                                                                            loc_1029f6b00();
                                                                                    }
                                                                            }
                                                                            r21 = &decomp_var_1e0;
                                                                            if ((r22 & 0x1) != 0x0) {
                                                                                    r24 = r24 + 0x1;
                                                                                    if (r24 < r26) {
                                                                                            continue;
                                                                                    }
                                                                                    temp_0 = 0x0;
                                                                                    break;
                                                                            }
                                                                            else {
                                                                                    temp_0 = 0x0;
                                                                                    break;
                                                                            }
                                                                    }
                                                            }
                                                            else {
                                                                    r1 = decomp_var_340;
                                                                    if (r1 != 0x0) {
                                                                            sub_1015fe774(decomp_var_2f0, r1);
                                                                            r8 = 0x1;
                                                                            decomp_var_344 = 0x1;
                                                                            temp_0 = 0x1;
                                                                    }
                                                                    else {
                                                                            r8 = "Cannot skip stale ISR attributes without a payload boundary";
                                                                            temp_0 = 0x5;
                                                                    }
                                                                    break;
                                                            }
                                                    }
                                                    else {
                                                            decomp_var_338 = 0x1;
                                                            if (sub_104d6e650(r24 & 0xffff, r19[0x8], decomp_var_2e0[0x1]) != 0x0) {
                                                                    if (*(int8_t *)byte_106c67660 == 0x1) {
                                                                            decomp_var_e0 = *(int32_t *)r20;
                                                                            r0 = sub_104d6f2fc(r19 + 0x58, &decomp_var_e0);
                                                                            r8 = r19[0xb];
                                                                            r8 = r8 + r19[0x1a] * 0x20;
                                                                            if (r8 != r0) {
                                                                                    r8 = r0[0x18];
                                                                                    if (r8 == 0x1) {
                                                                                            asm { ccmp       w8, #0x5, #0x0, hs };
                                                                                            if (!asm { ccmp       w8, #0x5, #0x0, hs }) {
                                                                                                    r0 = *qword_106c488c0;
                                                                                                    r1 = *qword_106c488c8;
                                                                                                    decomp_var_e0 = *(int32_t *)r20;
                                                                                                    r0 = sub_1029fea60(r0, r1, 0x5, "[DFLog::ISRIncomingOutgoingAttributes] {} - InstanceStateSerializationManager::deserializeAttributeSchema: {}, - {} - ts: {}", 0x7c, 0x1112, &decomp_var_e0, 0x1);
                                                                                            }
                                                                                            r0 = sub_104d72b94(r19, decomp_var_2f0, decomp_var_198, r27, &decomp_var_1f8);
                                                                                            r8 = r0 + decomp_var_328;
                                                                                            decomp_var_328 = r8;
                                                                                            r24 = r24 + 0x1;
                                                                                            if (r24 < r26) {
                                                                                                    continue;
                                                                                            }
                                                                                            temp_0 = 0x0;
                                                                                            break;
                                                                                    }
                                                                                    else {
                                                                                            temp_0 = 0x4;
                                                                                            break;
                                                                                    }
                                                                            }
                                                                            else {
                                                                                    temp_0 = 0x4;
                                                                                    break;
                                                                            }
                                                                    }
                                                                    else {
                                                                            asm { ccmp       w8, #0x5, #0x0, hs };
                                                                            if (!asm { ccmp       w8, #0x5, #0x0, hs }) {
                                                                                    r0 = *qword_106c488c0;
                                                                                    r1 = *qword_106c488c8;
                                                                                    decomp_var_e0 = *(int32_t *)r20;
                                                                                    r0 = sub_1029fea60(r0, r1, 0x5, "[DFLog::ISRIncomingOutgoingAttributes] {} - InstanceStateSerializationManager::deserializeAttributeSchema: {}, - {} - ts: {}", 0x7c, 0x1112, &decomp_var_e0, 0x1);
                                                                            }
                                                                            r0 = sub_104d72b94(r19, decomp_var_2f0, decomp_var_198, r27, &decomp_var_1f8);
                                                                            r8 = r0 + decomp_var_328;
                                                                            decomp_var_328 = r8;
                                                                            r24 = r24 + 0x1;
                                                                            if (r24 < r26) {
                                                                                    continue;
                                                                            }
                                                                            temp_0 = 0x0;
                                                                            break;
                                                                    }
                                                            }
                                                            else {
                                                                    if (*(int8_t *)byte_106c67618 == 0x1) {
                                                                            r2 = r27;
                                                                            r0 = sub_104d73804(r19, &decomp_var_198, r2, r20[0x6]);
                                                                    }
                                                                    else {
                                                                            r2 = r27;
                                                                            r0 = sub_104d7396c(r19, &decomp_var_198, r2);
                                                                    }
                                                                    r1 = decomp_var_340;
                                                                    r21 = decomp_var_168;
                                                                    if (r1 == 0x0) {
                                                                            r22 = 0x1;
                                                                    }
                                                                    else {
                                                                            r22 = r21;
                                                                    }
                                                                    if ((r22 & 0x1) != 0x0) {
                                                                            if (r21 != 0x0) {
                                                                                    decomp_var_240 = decomp_var_190;
                                                                                    decomp_var_230 = decomp_var_180;
                                                                                    decomp_var_180 = 0x0;
                                                                                    decomp_var_190 = 0x0;
                                                                                    decomp_var_228 = decomp_var_178;
                                                                            }
                                                                            else {
                                                                                    r0 = sub_100004130(&decomp_var_240, "", r2);
                                                                                    decomp_var_228 = 0xffff0001;
                                                                                    decomp_var_220 = 0x0;
                                                                            }
                                                                            if ((*qword_106c488c0 & 0xff) >= 0x6 && (*qword_106c488c0 >> 0x8 & 0xff) >= 0x5) {
                                                                                    r8 = qword_106c488c0;
                                                                                    if (decomp_var_350 != 0x0) {
                                                                                            r8 = 0x1;
                                                                                    }
                                                                                    r9 = *(int32_t *)r20;
                                                                                    r10 = decomp_var_19c;
                                                                                    r12 = decomp_var_240;
                                                                                    r11 = &decomp_var_240;
                                                                                    if (sign_extend_64(decomp_var_229) < 0x0) {
                                                                                            r11 = r12;
                                                                                    }
                                                                                    r1 = *qword_106c488c8;
                                                                                    r0 = *qword_106c488c0;
                                                                                    decomp_var_e0 = r9;
                                                                                    r0 = sub_1029fea60(r0, r1, 0x5, "[DFLog::ISRIncomingOutgoingAttributes] {} - InstanceStateSerializationManager::deserializeAttributeValue: {}, - {} {} - type: {} - ts: {} - into changes container: {}", 0xa6, 0x711c112, &decomp_var_e0, 0x1);
                                                                            }
                                                                            r28 = 0x0;
                                                                            if (*(int8_t *)byte_106c669c8 == 0x1 && r23 != 0x0) {
                                                                                    r9 = decomp_var_240;
                                                                                    r8 = &decomp_var_240;
                                                                                    r28 = &decomp_var_e0;
                                                                                    r0 = sub_104d16830(&decomp_var_e0, r23, decomp_var_2f0, 0x1, &decomp_var_1a0, 0x2);
                                                                            }
                                                                            decomp_var_280 = r28;
                                                                            r0 = sub_1000ce7bc(&decomp_var_260, &decomp_var_280);
                                                                            sub_10002aa44(&decomp_var_280);
                                                                            r28 = sub_104e06ec8(0xc8);
                                                                            sub_104e07174();
                                                                            decomp_var_288 = r28;
                                                                            r28[0x4] = decomp_var_1a0;
                                                                            r0 = sub_100005858(r28 + 0x30, &decomp_var_1b0);
                                                                            r28 = decomp_var_288;
                                                                            r28[0x5] = r20[0x3];
                                                                            r28[0x25] = r27;
                                                                            r27 = r28;
                                                                            if ((sign_extend_64(r28[0x67]) & 0xffffffff80000000) != 0x0) {
                                                                                    loc_1029f6b00();
                                                                                    r27 = decomp_var_288;
                                                                            }
                                                                            r28[0x5] = decomp_var_240;
                                                                            r28[0xc] = decomp_var_230;
                                                                            decomp_var_229 = 0x0;
                                                                            decomp_var_240 = 0x0;
                                                                            if ((decomp_var_228 & 0x1) == 0x0) {
                                                                                    sub_104d73a6c(&decomp_var_240 + 0x18, r27 + 0x68, decomp_var_1b0, 0xffff);
                                                                                    r9 = decomp_var_378 & 0xffffffff00000000;
                                                                                    decomp_var_378 = r9;
                                                                                    r0 = sub_104d71b14(decomp_var_2f0, decomp_var_228, decomp_var_220, &decomp_var_2b8, decomp_var_310, r19[0x9], r20, decomp_var_308, r23, *(int16_t *)decomp_var_2e0, r9, 0x0, 0x0);
                                                                                    r27 = r0;
                                                                                    sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_288);
                                                                                    decomp_var_2e8 = decomp_var_2e8 + 0x1;
                                                                                    decomp_var_328 = r27 + decomp_var_328;
                                                                                    r27 = decomp_var_288;
                                                                            }
                                                                            if (r27 != 0x0) {
                                                                                    sub_104d7e9dc(r27);
                                                                                    sub_104e07020();
                                                                            }
                                                                            r0 = sub_1010d4a60(&decomp_var_260);
                                                                            r8 = sign_extend_64(decomp_var_229);
                                                                            if ((r8 & 0xffffffff80000000) != 0x0) {
                                                                                    loc_1029f6b00();
                                                                            }
                                                                    }
                                                                    else {
                                                                            sub_1015fe774(decomp_var_2f0, r1);
                                                                            r8 = 0x1;
                                                                            decomp_var_344 = 0x1;
                                                                    }
                                                                    if (r21 != 0x0) {
                                                                            r8 = sign_extend_64(decomp_var_179);
                                                                            if ((r8 & 0xffffffff80000000) != 0x0) {
                                                                                    loc_1029f6b00();
                                                                            }
                                                                    }
                                                                    r21 = &decomp_var_1e0;
                                                                    if ((r22 & 0x1) != 0x0) {
                                                                            r24 = r24 + 0x1;
                                                                            if (r24 < r26) {
                                                                                    continue;
                                                                            }
                                                                            temp_0 = 0x0;
                                                                            break;
                                                                    }
                                                                    else {
                                                                            temp_0 = 0x0;
                                                                            break;
                                                                    }
                                                            }
                                                    }
                                            }
                                            else {
                                                    temp_0 = 0x6;
                                                    break;
                                            }
                                    }
                                    else {
                                            if (sub_104d6e650(r24 & 0xffff, r19[0x8], decomp_var_2e0[0x1]) != 0x0) {
                                                    if (*(int8_t *)byte_106c67660 == 0x1) {
                                                            decomp_var_e0 = *(int32_t *)r20;
                                                            r0 = sub_104d6f2fc(r19 + 0x58, &decomp_var_e0);
                                                            r8 = r19[0xb];
                                                            r8 = r8 + r19[0x1a] * 0x20;
                                                            if (r8 != r0) {
                                                                    r8 = r0[0x18];
                                                                    if (r8 == 0x1) {
                                                                            asm { ccmp       w8, #0x5, #0x0, hs };
                                                                            if (!asm { ccmp       w8, #0x5, #0x0, hs }) {
                                                                                    r0 = *qword_106c488c0;
                                                                                    r1 = *qword_106c488c8;
                                                                                    decomp_var_e0 = *(int32_t *)r20;
                                                                                    r0 = sub_1029fea60(r0, r1, 0x5, "[DFLog::ISRIncomingOutgoingAttributes] {} - InstanceStateSerializationManager::deserializeAttributeSchema: {}, - {} - ts: {}", 0x7c, 0x1112, &decomp_var_e0, 0x1);
                                                                            }
                                                                            r0 = sub_104d72b94(r19, decomp_var_2f0, decomp_var_198, r27, &decomp_var_1f8);
                                                                            r8 = r0 + decomp_var_328;
                                                                            decomp_var_328 = r8;
                                                                            r24 = r24 + 0x1;
                                                                            if (r24 < r26) {
                                                                                    continue;
                                                                            }
                                                                            temp_0 = 0x0;
                                                                            break;
                                                                    }
                                                                    else {
                                                                            temp_0 = 0x4;
                                                                            break;
                                                                    }
                                                            }
                                                            else {
                                                                    temp_0 = 0x4;
                                                                    break;
                                                            }
                                                    }
                                                    else {
                                                            asm { ccmp       w8, #0x5, #0x0, hs };
                                                            if (!asm { ccmp       w8, #0x5, #0x0, hs }) {
                                                                    r0 = *qword_106c488c0;
                                                                    r1 = *qword_106c488c8;
                                                                    decomp_var_e0 = *(int32_t *)r20;
                                                                    r0 = sub_1029fea60(r0, r1, 0x5, "[DFLog::ISRIncomingOutgoingAttributes] {} - InstanceStateSerializationManager::deserializeAttributeSchema: {}, - {} - ts: {}", 0x7c, 0x1112, &decomp_var_e0, 0x1);
                                                            }
                                                            r0 = sub_104d72b94(r19, decomp_var_2f0, decomp_var_198, r27, &decomp_var_1f8);
                                                            r8 = r0 + decomp_var_328;
                                                            decomp_var_328 = r8;
                                                            r24 = r24 + 0x1;
                                                            if (r24 < r26) {
                                                                    continue;
                                                            }
                                                            temp_0 = 0x0;
                                                            break;
                                                    }
                                            }
                                            else {
                                                    if (*(int8_t *)byte_106c67618 == 0x1) {
                                                            r2 = r27;
                                                            r0 = sub_104d73804(r19, &decomp_var_198, r2, r20[0x6]);
                                                    }
                                                    else {
                                                            r2 = r27;
                                                            r0 = sub_104d7396c(r19, &decomp_var_198, r2);
                                                    }
                                                    r1 = decomp_var_340;
                                                    r21 = decomp_var_168;
                                                    if (r1 == 0x0) {
                                                            r22 = 0x1;
                                                    }
                                                    else {
                                                            r22 = r21;
                                                    }
                                                    if ((r22 & 0x1) != 0x0) {
                                                            if (r21 != 0x0) {
                                                                    decomp_var_240 = decomp_var_190;
                                                                    decomp_var_230 = decomp_var_180;
                                                                    decomp_var_180 = 0x0;
                                                                    decomp_var_190 = 0x0;
                                                                    decomp_var_228 = decomp_var_178;
                                                            }
                                                            else {
                                                                    r0 = sub_100004130(&decomp_var_240, "", r2);
                                                                    decomp_var_228 = 0xffff0001;
                                                                    decomp_var_220 = 0x0;
                                                            }
                                                            if ((*qword_106c488c0 & 0xff) >= 0x6 && (*qword_106c488c0 >> 0x8 & 0xff) >= 0x5) {
                                                                    r8 = qword_106c488c0;
                                                                    if (decomp_var_350 != 0x0) {
                                                                            r8 = 0x1;
                                                                    }
                                                                    r9 = *(int32_t *)r20;
                                                                    r10 = decomp_var_19c;
                                                                    r12 = decomp_var_240;
                                                                    r11 = &decomp_var_240;
                                                                    if (sign_extend_64(decomp_var_229) < 0x0) {
                                                                            r11 = r12;
                                                                    }
                                                                    r0 = *qword_106c488c0;
                                                                    decomp_var_e0 = r9;
                                                                    r0 = sub_1029fea60(r0, *qword_106c488c8, 0x5, "[DFLog::ISRIncomingOutgoingAttributes] {} - InstanceStateSerializationManager::deserializeAttributeValue: {}, - {} {} - type: {} - ts: {} - into changes container: {}", 0xa6, 0x711c112, &decomp_var_e0, 0x1);
                                                            }
                                                            r28 = 0x0;
                                                            if (*(int8_t *)byte_106c669c8 == 0x1 && r23 != 0x0) {
                                                                    r9 = decomp_var_240;
                                                                    r8 = &decomp_var_240;
                                                                    r28 = &decomp_var_e0;
                                                                    r0 = sub_104d16830(&decomp_var_e0, r23, decomp_var_2f0, 0x1, &decomp_var_1a0, 0x2);
                                                            }
                                                            decomp_var_280 = r28;
                                                            r0 = sub_1000ce7bc(&decomp_var_260, &decomp_var_280);
                                                            sub_10002aa44(&decomp_var_280);
                                                            r28 = sub_104e06ec8(0xc8);
                                                            sub_104e07174();
                                                            decomp_var_288 = r28;
                                                            r28[0x4] = decomp_var_1a0;
                                                            r0 = sub_100005858(r28 + 0x30, &decomp_var_1b0);
                                                            r28 = decomp_var_288;
                                                            r28[0x5] = r20[0x3];
                                                            r28[0x25] = r27;
                                                            r27 = r28;
                                                            if ((sign_extend_64(r28[0x67]) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                                    r27 = decomp_var_288;
                                                            }
                                                            r28[0x5] = decomp_var_240;
                                                            r28[0xc] = decomp_var_230;
                                                            decomp_var_229 = 0x0;
                                                            decomp_var_240 = 0x0;
                                                            if ((decomp_var_228 & 0x1) == 0x0) {
                                                                    sub_104d73a6c(&decomp_var_240 + 0x18, r27 + 0x68, decomp_var_1b0, 0xffff);
                                                                    r9 = decomp_var_378 & 0xffffffff00000000;
                                                                    decomp_var_378 = r9;
                                                                    r0 = sub_104d71b14(decomp_var_2f0, decomp_var_228, decomp_var_220, &decomp_var_2b8, decomp_var_310, r19[0x9], r20, decomp_var_308, r23, *(int16_t *)decomp_var_2e0, r9, 0x0, 0x0);
                                                                    r27 = r0;
                                                                    sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_288);
                                                                    decomp_var_2e8 = decomp_var_2e8 + 0x1;
                                                                    decomp_var_328 = r27 + decomp_var_328;
                                                                    r27 = decomp_var_288;
                                                            }
                                                            if (r27 != 0x0) {
                                                                    sub_104d7e9dc(r27);
                                                                    sub_104e07020();
                                                            }
                                                            r0 = sub_1010d4a60(&decomp_var_260);
                                                            r8 = sign_extend_64(decomp_var_229);
                                                            if ((r8 & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                                    else {
                                                            sub_1015fe774(decomp_var_2f0, r1);
                                                            r8 = 0x1;
                                                            decomp_var_344 = 0x1;
                                                    }
                                                    if (r21 != 0x0) {
                                                            r8 = sign_extend_64(decomp_var_179);
                                                            if ((r8 & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                                    r21 = &decomp_var_1e0;
                                                    if ((r22 & 0x1) != 0x0) {
                                                            r24 = r24 + 0x1;
                                                            if (r24 < r26) {
                                                                    continue;
                                                            }
                                                            temp_0 = 0x0;
                                                            break;
                                                    }
                                                    else {
                                                            temp_0 = 0x0;
                                                            break;
                                                    }
                                            }
                                    }
                            }
                    }
                    else {
                            r24 = r24 + 0x1;
                            if (r24 < r26) {
                                    continue;
                            }
                            temp_0 = 0x0;
                            break;
                    }
            }
            else {
                    temp_0 = 0x3;
                    break;
            }
    }
    else {
            temp_0 = 0x3;
            break;
    }
    goto .l8;

loc_104d70af8:
    if ((*(int8_t *)byte_106bdbd50 & 0x1) != 0x0) goto .l27;
    goto loc_104d70b08;

.l3:
    if ((r9 & 0x2) != 0x0) goto .l4;
    goto .l5;

.l8:
    if (temp_0 != 0x0) {
            if (temp_0 != 0x1) {
                    if (temp_0 != 0x2) {
                            if (temp_0 == 0x3) {
                                    sub_1029fe0a0("PropertyDirtySet::test - Index out of bounds");
                            }
                            if (temp_0 != 0x4) {
                                    if (temp_0 != 0x5) {
                                            sub_1029fe0a0(decomp_var_380);
                                    }
                            }
                            else {
                                    r8 = "Received unauthorized ISR attribute schema";
                            }
                            sub_1029fe0a0(decomp_var_380);
                    }
            }
            else {
                    r24 = decomp_var_1f8;
                    r21 = decomp_var_1f0;
                    if (r24 != r21) {
                            while (true) {
                                    if (*(int8_t *)byte_106c67660 != 0x1) {
                                            r25 = sub_104e06ec8(0xc8);
                                            sub_104e07174();
                                            decomp_var_e0 = r25;
                                            r25[0x4] = decomp_var_1a0;
                                            r0 = sub_100005858(r25 + 0x30, &decomp_var_1b0);
                                            r23 = decomp_var_e0;
                                            r23[0x5] = r20[0x3];
                                            if ((sign_extend_64(r23[0x67]) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                            q0 = *(int128_t *)r24;
                                            r23[0xc] = r24[0x2];
                                            r23[0x5] = q0;
                                            r24[0x17] = 0x0;
                                            *(int8_t *)r24 = 0x0;
                                            sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_e0);
                                            r23 = decomp_var_2f8;
                                            if (decomp_var_e0 != 0x0) {
                                                    sub_104d7e9dc();
                                                    sub_104e07020();
                                            }
                                            r24 = r24 + 0x18;
                                            if (r24 != r21) {
                                                    continue;
                                            }
                                            break;
                                    }
                                    r8 = sign_extend_64(r24[0x17]);
                                    if ((r8 & 0xffffffff80000000) == 0x0) {
                                            if (r8 == 0x0) {
                                                    r24 = r24 + 0x18;
                                                    if (r24 != r21) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                            else {
                                                    r0 = sub_104d73b30(r19, &decomp_var_198, r24);
                                                    if (r0 == 0xffff) {
                                                            r25 = sub_104e06ec8(0xc8);
                                                            sub_104e07174();
                                                            decomp_var_e0 = r25;
                                                            r25[0x4] = decomp_var_1a0;
                                                            r0 = sub_100005858(r25 + 0x30, &decomp_var_1b0);
                                                            r23 = decomp_var_e0;
                                                            r23[0x5] = r20[0x3];
                                                            if ((sign_extend_64(r23[0x67]) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                            q0 = *(int128_t *)r24;
                                                            r23[0xc] = r24[0x2];
                                                            r23[0x5] = q0;
                                                            r24[0x17] = 0x0;
                                                            *(int8_t *)r24 = 0x0;
                                                            sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_e0);
                                                            r23 = decomp_var_2f8;
                                                            if (decomp_var_e0 != 0x0) {
                                                                    sub_104d7e9dc();
                                                                    sub_104e07020();
                                                            }
                                                            r24 = r24 + 0x18;
                                                            if (r24 != r21) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    else {
                                                            r24 = r24 + 0x18;
                                                            if (r24 != r21) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                            }
                                    }
                                    else {
                                            if (r24[0x1] != 0x0) {
                                                    r0 = sub_104d73b30(r19, &decomp_var_198, r24);
                                                    if (r0 == 0xffff) {
                                                            r25 = sub_104e06ec8(0xc8);
                                                            sub_104e07174();
                                                            decomp_var_e0 = r25;
                                                            r25[0x4] = decomp_var_1a0;
                                                            r0 = sub_100005858(r25 + 0x30, &decomp_var_1b0);
                                                            r23 = decomp_var_e0;
                                                            r23[0x5] = r20[0x3];
                                                            if ((sign_extend_64(r23[0x67]) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                            q0 = *(int128_t *)r24;
                                                            r23[0xc] = r24[0x2];
                                                            r23[0x5] = q0;
                                                            r24[0x17] = 0x0;
                                                            *(int8_t *)r24 = 0x0;
                                                            sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_e0);
                                                            r23 = decomp_var_2f8;
                                                            if (decomp_var_e0 != 0x0) {
                                                                    sub_104d7e9dc();
                                                                    sub_104e07020();
                                                            }
                                                            r24 = r24 + 0x18;
                                                            if (r24 != r21) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    else {
                                                            r24 = r24 + 0x18;
                                                            if (r24 != r21) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                            }
                                            else {
                                                    r24 = r24 + 0x18;
                                                    if (r24 != r21) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                    }
                            }
                    }
                    r1 = decomp_var_340;
                    asm { ccmp       w1, #0x0, #0x4, eq };
                    r0 = decomp_var_2f0;
                    r21 = decomp_var_344;
                    if (!asm { ccmp       w1, #0x0, #0x4, eq }) {
                            r8 = r0[0xe];
                            if (r8 != r1) {
                                    if (*(int8_t *)byte_106c67630 != 0x1) {
                                            sub_1029fe0a0("ISR property data size mismatch: read %u bytes, expected end at %zu");
                                    }
                                    sub_1015fe774(r0, r1);
                                    decomp_var_e0 = &decomp_var_1f8;
                                    r0 = sub_100015abc(&decomp_var_e0);
                                    r8 = decomp_var_328;
                                    r22 = r8;
                                    if (r23 != 0x0) {
                                            r24 = *(int8_t *)byte_106c48450;
                                            sub_104d164e8(r23, r24, *(int16_t *)decomp_var_2e0, 0x1, decomp_var_2fc);
                                            r8 = decomp_var_2e0;
                                            sub_104d164e8(r23, r24, *(int16_t *)r8, 0x2, r22);
                                    }
                                    if (decomp_var_350 == 0x0) {
                                            r8 = 0x1;
                                    }
                                    if (((r21 | r8) & 0x1) != 0x0) {
                                            if ((r21 & 0x1) == 0x0) {
                                                    r20 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x10);
                                                    loc_102c3ec38();
                                                    r0 = sub_104d7e5d4(r20 + 0x8, &decomp_var_198);
                                                    r20 = r0;
                                                    r0[0x1] = decomp_var_1a0;
                                                    r1 = decomp_var_150;
                                                    if (r1 >= r0[0x6]) {
                                                            sub_104d7e308(r20 + 0x10);
                                                            r1 = decomp_var_150;
                                                    }
                                                    if (r1 != 0x0) {
                                                            r21 = 0x0;
                                                            r22 = 0x0;
                                                            do {
                                                                    r9 = decomp_var_158;
                                                                    r8 = *(r9 + r22 * 0x8);
                                                                    if (r8 == 0x0) {
                                                                            r22 = r22 + 0x1;
                                                                            r21 = r21 + 0x8;
                                                                            if (r22 < r1) {
                                                                                    continue;
                                                                            }
                                                                            break;
                                                                    }
                                                                    r10 = r20[0x2];
                                                                    r11 = *(r10 + r21);
                                                                    if (r11 == 0x0) {
                                                                            *(r9 + r22 * 0x8) = 0x0;
                                                                            sub_104d74328(r10 + r21, r8);
                                                                            r1 = decomp_var_150;
                                                                            r22 = r22 + 0x1;
                                                                            r21 = r21 + 0x8;
                                                                            if (r22 < r1) {
                                                                                    continue;
                                                                            }
                                                                            break;
                                                                    }
                                                                    if (r11[0xa] >= r8[0xa]) {
                                                                            r22 = r22 + 0x1;
                                                                            r21 = r21 + 0x8;
                                                                            if (r22 < r1) {
                                                                                    continue;
                                                                            }
                                                                            break;
                                                                    }
                                                                    *(r9 + r22 * 0x8) = 0x0;
                                                                    sub_104d74328(r10 + r21, r8);
                                                                    r1 = decomp_var_150;
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                            } while (r22 < r1);
                                                    }
                                                    sub_102c3ebc0(&decomp_var_e0, r1);
                                            }
                                    }
                                    else {
                                            sub_104d73bfc();
                                    }
                                    if (*(int8_t *)byte_106c67600 == 0x1 && *(int8_t *)byte_106c67510 == 0x1) {
                                            asm { ldaddal    x9, x8, [x8] };
                                            asm { ldaddal    x9, x8, [x8] };
                                    }
                                    r19 = decomp_var_198;
                                    sub_104d754c0(&decomp_var_160 + 0x8);
                                    r20 = decomp_var_1a8;
                                    if (r20 != 0x0) {
                                            r8 = r20 + 0x8;
                                            asm { ldaddal    x9, x8, [x8] };
                                            if (r8 == 0x0) {
                                                    (*(*r20 + 0x10))(r20);
                                                    std::__1::__shared_weak_count::__release_weak();
                                            }
                                    }
                                    if (**___stack_chk_guard != decomp_var_68) {
                                            __stack_chk_fail();
                                    }
                            }
                            else {
                                    decomp_var_e0 = &decomp_var_1f8;
                                    r0 = sub_100015abc(&decomp_var_e0);
                                    r8 = decomp_var_328;
                                    r22 = r8;
                                    if (r23 != 0x0) {
                                            r24 = *(int8_t *)byte_106c48450;
                                            sub_104d164e8(r23, r24, *(int16_t *)decomp_var_2e0, 0x1, decomp_var_2fc);
                                            r8 = decomp_var_2e0;
                                            sub_104d164e8(r23, r24, *(int16_t *)r8, 0x2, r22);
                                    }
                                    if (decomp_var_350 == 0x0) {
                                            r8 = 0x1;
                                    }
                                    if (((r21 | r8) & 0x1) != 0x0) {
                                            if ((r21 & 0x1) == 0x0) {
                                                    r20 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x10);
                                                    loc_102c3ec38();
                                                    r0 = sub_104d7e5d4(r20 + 0x8, &decomp_var_198);
                                                    r20 = r0;
                                                    r0[0x1] = decomp_var_1a0;
                                                    r1 = decomp_var_150;
                                                    if (r1 >= r0[0x6]) {
                                                            sub_104d7e308(r20 + 0x10);
                                                            r1 = decomp_var_150;
                                                    }
                                                    if (r1 != 0x0) {
                                                            r21 = 0x0;
                                                            r22 = 0x0;
                                                            do {
                                                                    r9 = decomp_var_158;
                                                                    r8 = *(r9 + r22 * 0x8);
                                                                    if (r8 == 0x0) {
                                                                            r22 = r22 + 0x1;
                                                                            r21 = r21 + 0x8;
                                                                            if (r22 < r1) {
                                                                                    continue;
                                                                            }
                                                                            break;
                                                                    }
                                                                    r10 = r20[0x2];
                                                                    r11 = *(r10 + r21);
                                                                    if (r11 == 0x0) {
                                                                            *(r9 + r22 * 0x8) = 0x0;
                                                                            sub_104d74328(r10 + r21, r8);
                                                                            r1 = decomp_var_150;
                                                                            r22 = r22 + 0x1;
                                                                            r21 = r21 + 0x8;
                                                                            if (r22 < r1) {
                                                                                    continue;
                                                                            }
                                                                            break;
                                                                    }
                                                                    if (r11[0xa] >= r8[0xa]) {
                                                                            r22 = r22 + 0x1;
                                                                            r21 = r21 + 0x8;
                                                                            if (r22 < r1) {
                                                                                    continue;
                                                                            }
                                                                            break;
                                                                    }
                                                                    *(r9 + r22 * 0x8) = 0x0;
                                                                    sub_104d74328(r10 + r21, r8);
                                                                    r1 = decomp_var_150;
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                            } while (r22 < r1);
                                                    }
                                                    sub_102c3ebc0(&decomp_var_e0, r1);
                                            }
                                    }
                                    else {
                                            sub_104d73bfc();
                                    }
                                    if (*(int8_t *)byte_106c67600 == 0x1 && *(int8_t *)byte_106c67510 == 0x1) {
                                            asm { ldaddal    x9, x8, [x8] };
                                            asm { ldaddal    x9, x8, [x8] };
                                    }
                                    r19 = decomp_var_198;
                                    sub_104d754c0(&decomp_var_160 + 0x8);
                                    r20 = decomp_var_1a8;
                                    if (r20 != 0x0) {
                                            r8 = r20 + 0x8;
                                            asm { ldaddal    x9, x8, [x8] };
                                            if (r8 == 0x0) {
                                                    (*(*r20 + 0x10))(r20);
                                                    std::__1::__shared_weak_count::__release_weak();
                                            }
                                    }
                                    if (**___stack_chk_guard != decomp_var_68) {
                                            __stack_chk_fail();
                                    }
                            }
                    }
                    else {
                            decomp_var_e0 = &decomp_var_1f8;
                            r0 = sub_100015abc(&decomp_var_e0);
                            r8 = decomp_var_328;
                            r22 = r8;
                            if (r23 != 0x0) {
                                    r24 = *(int8_t *)byte_106c48450;
                                    sub_104d164e8(r23, r24, *(int16_t *)decomp_var_2e0, 0x1, decomp_var_2fc);
                                    r8 = decomp_var_2e0;
                                    sub_104d164e8(r23, r24, *(int16_t *)r8, 0x2, r22);
                            }
                            if (decomp_var_350 == 0x0) {
                                    r8 = 0x1;
                            }
                            if (((r21 | r8) & 0x1) != 0x0) {
                                    if ((r21 & 0x1) == 0x0) {
                                            r20 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x10);
                                            loc_102c3ec38();
                                            r0 = sub_104d7e5d4(r20 + 0x8, &decomp_var_198);
                                            r20 = r0;
                                            r0[0x1] = decomp_var_1a0;
                                            r1 = decomp_var_150;
                                            if (r1 >= r0[0x6]) {
                                                    sub_104d7e308(r20 + 0x10);
                                                    r1 = decomp_var_150;
                                            }
                                            if (r1 != 0x0) {
                                                    r21 = 0x0;
                                                    r22 = 0x0;
                                                    do {
                                                            r9 = decomp_var_158;
                                                            r8 = *(r9 + r22 * 0x8);
                                                            if (r8 == 0x0) {
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                                    if (r22 < r1) {
                                                                            continue;
                                                                    }
                                                                    break;
                                                            }
                                                            r10 = r20[0x2];
                                                            r11 = *(r10 + r21);
                                                            if (r11 == 0x0) {
                                                                    *(r9 + r22 * 0x8) = 0x0;
                                                                    sub_104d74328(r10 + r21, r8);
                                                                    r1 = decomp_var_150;
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                                    if (r22 < r1) {
                                                                            continue;
                                                                    }
                                                                    break;
                                                            }
                                                            if (r11[0xa] >= r8[0xa]) {
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                                    if (r22 < r1) {
                                                                            continue;
                                                                    }
                                                                    break;
                                                            }
                                                            *(r9 + r22 * 0x8) = 0x0;
                                                            sub_104d74328(r10 + r21, r8);
                                                            r1 = decomp_var_150;
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                    } while (r22 < r1);
                                            }
                                            sub_102c3ebc0(&decomp_var_e0, r1);
                                    }
                            }
                            else {
                                    sub_104d73bfc();
                            }
                            if (*(int8_t *)byte_106c67600 == 0x1 && *(int8_t *)byte_106c67510 == 0x1) {
                                    asm { ldaddal    x9, x8, [x8] };
                                    asm { ldaddal    x9, x8, [x8] };
                            }
                            r19 = decomp_var_198;
                            sub_104d754c0(&decomp_var_160 + 0x8);
                            r20 = decomp_var_1a8;
                            if (r20 != 0x0) {
                                    r8 = r20 + 0x8;
                                    asm { ldaddal    x9, x8, [x8] };
                                    if (r8 == 0x0) {
                                            (*(*r20 + 0x10))(r20);
                                            std::__1::__shared_weak_count::__release_weak();
                                    }
                            }
                            if (**___stack_chk_guard != decomp_var_68) {
                                    __stack_chk_fail();
                            }
                    }
            }
    }
    else {
            r24 = decomp_var_1f8;
            r21 = decomp_var_1f0;
            if (r24 != r21) {
                    while (true) {
                            if (*(int8_t *)byte_106c67660 != 0x1) {
                                    r25 = sub_104e06ec8(0xc8);
                                    sub_104e07174();
                                    decomp_var_e0 = r25;
                                    r25[0x4] = decomp_var_1a0;
                                    r0 = sub_100005858(r25 + 0x30, &decomp_var_1b0);
                                    r23 = decomp_var_e0;
                                    r23[0x5] = r20[0x3];
                                    if ((sign_extend_64(r23[0x67]) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00();
                                    }
                                    q0 = *(int128_t *)r24;
                                    r23[0xc] = r24[0x2];
                                    r23[0x5] = q0;
                                    r24[0x17] = 0x0;
                                    *(int8_t *)r24 = 0x0;
                                    sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_e0);
                                    r23 = decomp_var_2f8;
                                    if (decomp_var_e0 != 0x0) {
                                            sub_104d7e9dc();
                                            sub_104e07020();
                                    }
                                    r24 = r24 + 0x18;
                                    if (r24 != r21) {
                                            continue;
                                    }
                                    break;
                            }
                            r8 = sign_extend_64(r24[0x17]);
                            if ((r8 & 0xffffffff80000000) == 0x0) {
                                    if (r8 == 0x0) {
                                            r24 = r24 + 0x18;
                                            if (r24 != r21) {
                                                    continue;
                                            }
                                            break;
                                    }
                                    else {
                                            r0 = sub_104d73b30(r19, &decomp_var_198, r24);
                                            if (r0 == 0xffff) {
                                                    r25 = sub_104e06ec8(0xc8);
                                                    sub_104e07174();
                                                    decomp_var_e0 = r25;
                                                    r25[0x4] = decomp_var_1a0;
                                                    r0 = sub_100005858(r25 + 0x30, &decomp_var_1b0);
                                                    r23 = decomp_var_e0;
                                                    r23[0x5] = r20[0x3];
                                                    if ((sign_extend_64(r23[0x67]) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                                    q0 = *(int128_t *)r24;
                                                    r23[0xc] = r24[0x2];
                                                    r23[0x5] = q0;
                                                    r24[0x17] = 0x0;
                                                    *(int8_t *)r24 = 0x0;
                                                    sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_e0);
                                                    r23 = decomp_var_2f8;
                                                    if (decomp_var_e0 != 0x0) {
                                                            sub_104d7e9dc();
                                                            sub_104e07020();
                                                    }
                                                    r24 = r24 + 0x18;
                                                    if (r24 != r21) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                            else {
                                                    r24 = r24 + 0x18;
                                                    if (r24 != r21) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                    }
                            }
                            else {
                                    if (r24[0x1] != 0x0) {
                                            r0 = sub_104d73b30(r19, &decomp_var_198, r24);
                                            if (r0 == 0xffff) {
                                                    r25 = sub_104e06ec8(0xc8);
                                                    sub_104e07174();
                                                    decomp_var_e0 = r25;
                                                    r25[0x4] = decomp_var_1a0;
                                                    r0 = sub_100005858(r25 + 0x30, &decomp_var_1b0);
                                                    r23 = decomp_var_e0;
                                                    r23[0x5] = r20[0x3];
                                                    if ((sign_extend_64(r23[0x67]) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                                    q0 = *(int128_t *)r24;
                                                    r23[0xc] = r24[0x2];
                                                    r23[0x5] = q0;
                                                    r24[0x17] = 0x0;
                                                    *(int8_t *)r24 = 0x0;
                                                    sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_e0);
                                                    r23 = decomp_var_2f8;
                                                    if (decomp_var_e0 != 0x0) {
                                                            sub_104d7e9dc();
                                                            sub_104e07020();
                                                    }
                                                    r24 = r24 + 0x18;
                                                    if (r24 != r21) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                            else {
                                                    r24 = r24 + 0x18;
                                                    if (r24 != r21) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                    }
                                    else {
                                            r24 = r24 + 0x18;
                                            if (r24 != r21) {
                                                    continue;
                                            }
                                            break;
                                    }
                            }
                    }
            }
            r1 = decomp_var_340;
            asm { ccmp       w1, #0x0, #0x4, eq };
            r0 = decomp_var_2f0;
            r21 = decomp_var_344;
            if (!asm { ccmp       w1, #0x0, #0x4, eq }) {
                    r8 = r0[0xe];
                    if (r8 != r1) {
                            if (*(int8_t *)byte_106c67630 != 0x1) {
                                    sub_1029fe0a0("ISR property data size mismatch: read %u bytes, expected end at %zu");
                            }
                            sub_1015fe774(r0, r1);
                            decomp_var_e0 = &decomp_var_1f8;
                            r0 = sub_100015abc(&decomp_var_e0);
                            r8 = decomp_var_328;
                            r22 = r8;
                            if (r23 != 0x0) {
                                    r24 = *(int8_t *)byte_106c48450;
                                    sub_104d164e8(r23, r24, *(int16_t *)decomp_var_2e0, 0x1, decomp_var_2fc);
                                    r8 = decomp_var_2e0;
                                    sub_104d164e8(r23, r24, *(int16_t *)r8, 0x2, r22);
                            }
                            if (decomp_var_350 == 0x0) {
                                    r8 = 0x1;
                            }
                            if (((r21 | r8) & 0x1) != 0x0) {
                                    if ((r21 & 0x1) == 0x0) {
                                            r20 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x10);
                                            loc_102c3ec38();
                                            r0 = sub_104d7e5d4(r20 + 0x8, &decomp_var_198);
                                            r20 = r0;
                                            r0[0x1] = decomp_var_1a0;
                                            r1 = decomp_var_150;
                                            if (r1 >= r0[0x6]) {
                                                    sub_104d7e308(r20 + 0x10);
                                                    r1 = decomp_var_150;
                                            }
                                            if (r1 != 0x0) {
                                                    r21 = 0x0;
                                                    r22 = 0x0;
                                                    do {
                                                            r9 = decomp_var_158;
                                                            r8 = *(r9 + r22 * 0x8);
                                                            if (r8 == 0x0) {
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                                    if (r22 < r1) {
                                                                            continue;
                                                                    }
                                                                    break;
                                                            }
                                                            r10 = r20[0x2];
                                                            r11 = *(r10 + r21);
                                                            if (r11 == 0x0) {
                                                                    *(r9 + r22 * 0x8) = 0x0;
                                                                    sub_104d74328(r10 + r21, r8);
                                                                    r1 = decomp_var_150;
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                                    if (r22 < r1) {
                                                                            continue;
                                                                    }
                                                                    break;
                                                            }
                                                            if (r11[0xa] >= r8[0xa]) {
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                                    if (r22 < r1) {
                                                                            continue;
                                                                    }
                                                                    break;
                                                            }
                                                            *(r9 + r22 * 0x8) = 0x0;
                                                            sub_104d74328(r10 + r21, r8);
                                                            r1 = decomp_var_150;
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                    } while (r22 < r1);
                                            }
                                            sub_102c3ebc0(&decomp_var_e0, r1);
                                    }
                            }
                            else {
                                    sub_104d73bfc();
                            }
                            if (*(int8_t *)byte_106c67600 == 0x1 && *(int8_t *)byte_106c67510 == 0x1) {
                                    asm { ldaddal    x9, x8, [x8] };
                                    asm { ldaddal    x9, x8, [x8] };
                            }
                            r19 = decomp_var_198;
                            sub_104d754c0(&decomp_var_160 + 0x8);
                            r20 = decomp_var_1a8;
                            if (r20 != 0x0) {
                                    r8 = r20 + 0x8;
                                    asm { ldaddal    x9, x8, [x8] };
                                    if (r8 == 0x0) {
                                            (*(*r20 + 0x10))(r20);
                                            std::__1::__shared_weak_count::__release_weak();
                                    }
                            }
                            if (**___stack_chk_guard != decomp_var_68) {
                                    __stack_chk_fail();
                            }
                    }
                    else {
                            decomp_var_e0 = &decomp_var_1f8;
                            r0 = sub_100015abc(&decomp_var_e0);
                            r8 = decomp_var_328;
                            r22 = r8;
                            if (r23 != 0x0) {
                                    r24 = *(int8_t *)byte_106c48450;
                                    sub_104d164e8(r23, r24, *(int16_t *)decomp_var_2e0, 0x1, decomp_var_2fc);
                                    r8 = decomp_var_2e0;
                                    sub_104d164e8(r23, r24, *(int16_t *)r8, 0x2, r22);
                            }
                            if (decomp_var_350 == 0x0) {
                                    r8 = 0x1;
                            }
                            if (((r21 | r8) & 0x1) != 0x0) {
                                    if ((r21 & 0x1) == 0x0) {
                                            r20 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x10);
                                            loc_102c3ec38();
                                            r0 = sub_104d7e5d4(r20 + 0x8, &decomp_var_198);
                                            r20 = r0;
                                            r0[0x1] = decomp_var_1a0;
                                            r1 = decomp_var_150;
                                            if (r1 >= r0[0x6]) {
                                                    sub_104d7e308(r20 + 0x10);
                                                    r1 = decomp_var_150;
                                            }
                                            if (r1 != 0x0) {
                                                    r21 = 0x0;
                                                    r22 = 0x0;
                                                    do {
                                                            r9 = decomp_var_158;
                                                            r8 = *(r9 + r22 * 0x8);
                                                            if (r8 == 0x0) {
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                                    if (r22 < r1) {
                                                                            continue;
                                                                    }
                                                                    break;
                                                            }
                                                            r10 = r20[0x2];
                                                            r11 = *(r10 + r21);
                                                            if (r11 == 0x0) {
                                                                    *(r9 + r22 * 0x8) = 0x0;
                                                                    sub_104d74328(r10 + r21, r8);
                                                                    r1 = decomp_var_150;
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                                    if (r22 < r1) {
                                                                            continue;
                                                                    }
                                                                    break;
                                                            }
                                                            if (r11[0xa] >= r8[0xa]) {
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                                    if (r22 < r1) {
                                                                            continue;
                                                                    }
                                                                    break;
                                                            }
                                                            *(r9 + r22 * 0x8) = 0x0;
                                                            sub_104d74328(r10 + r21, r8);
                                                            r1 = decomp_var_150;
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                    } while (r22 < r1);
                                            }
                                            sub_102c3ebc0(&decomp_var_e0, r1);
                                    }
                            }
                            else {
                                    sub_104d73bfc();
                            }
                            if (*(int8_t *)byte_106c67600 == 0x1 && *(int8_t *)byte_106c67510 == 0x1) {
                                    asm { ldaddal    x9, x8, [x8] };
                                    asm { ldaddal    x9, x8, [x8] };
                            }
                            r19 = decomp_var_198;
                            sub_104d754c0(&decomp_var_160 + 0x8);
                            r20 = decomp_var_1a8;
                            if (r20 != 0x0) {
                                    r8 = r20 + 0x8;
                                    asm { ldaddal    x9, x8, [x8] };
                                    if (r8 == 0x0) {
                                            (*(*r20 + 0x10))(r20);
                                            std::__1::__shared_weak_count::__release_weak();
                                    }
                            }
                            if (**___stack_chk_guard != decomp_var_68) {
                                    __stack_chk_fail();
                            }
                    }
            }
            else {
                    decomp_var_e0 = &decomp_var_1f8;
                    r0 = sub_100015abc(&decomp_var_e0);
                    r8 = decomp_var_328;
                    r22 = r8;
                    if (r23 != 0x0) {
                            r24 = *(int8_t *)byte_106c48450;
                            sub_104d164e8(r23, r24, *(int16_t *)decomp_var_2e0, 0x1, decomp_var_2fc);
                            r8 = decomp_var_2e0;
                            sub_104d164e8(r23, r24, *(int16_t *)r8, 0x2, r22);
                    }
                    if (decomp_var_350 == 0x0) {
                            r8 = 0x1;
                    }
                    if (((r21 | r8) & 0x1) != 0x0) {
                            if ((r21 & 0x1) == 0x0) {
                                    r20 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x10);
                                    loc_102c3ec38();
                                    r0 = sub_104d7e5d4(r20 + 0x8, &decomp_var_198);
                                    r20 = r0;
                                    r0[0x1] = decomp_var_1a0;
                                    r1 = decomp_var_150;
                                    if (r1 >= r0[0x6]) {
                                            sub_104d7e308(r20 + 0x10);
                                            r1 = decomp_var_150;
                                    }
                                    if (r1 != 0x0) {
                                            r21 = 0x0;
                                            r22 = 0x0;
                                            do {
                                                    r9 = decomp_var_158;
                                                    r8 = *(r9 + r22 * 0x8);
                                                    if (r8 == 0x0) {
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    r10 = r20[0x2];
                                                    r11 = *(r10 + r21);
                                                    if (r11 == 0x0) {
                                                            *(r9 + r22 * 0x8) = 0x0;
                                                            sub_104d74328(r10 + r21, r8);
                                                            r1 = decomp_var_150;
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    if (r11[0xa] >= r8[0xa]) {
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    *(r9 + r22 * 0x8) = 0x0;
                                                    sub_104d74328(r10 + r21, r8);
                                                    r1 = decomp_var_150;
                                                    r22 = r22 + 0x1;
                                                    r21 = r21 + 0x8;
                                            } while (r22 < r1);
                                    }
                                    sub_102c3ebc0(&decomp_var_e0, r1);
                            }
                    }
                    else {
                            sub_104d73bfc();
                    }
                    if (*(int8_t *)byte_106c67600 == 0x1 && *(int8_t *)byte_106c67510 == 0x1) {
                            asm { ldaddal    x9, x8, [x8] };
                            asm { ldaddal    x9, x8, [x8] };
                    }
                    r19 = decomp_var_198;
                    sub_104d754c0(&decomp_var_160 + 0x8);
                    r20 = decomp_var_1a8;
                    if (r20 != 0x0) {
                            r8 = r20 + 0x8;
                            asm { ldaddal    x9, x8, [x8] };
                            if (r8 == 0x0) {
                                    (*(*r20 + 0x10))(r20);
                                    std::__1::__shared_weak_count::__release_weak();
                            }
                    }
                    if (**___stack_chk_guard != decomp_var_68) {
                            __stack_chk_fail();
                    }
            }
    }
    return;

.l27:
    r21 = r24[0xe];
    sub_101601e38(&decomp_var_e0);
    r0 = sub_101602068(r24, &decomp_var_e0);
    r8 = r24[0xe];
    q0 = r25[0x2a];
    q1 = r25[0x2c];
    r25[0xc] = q0;
    r25[0xe] = q1;
    decomp_var_2fc = r8 - r21;
    r26 = sub_1015ffaa8(r24);
    r21 = r24[0xe];
    r0 = r19[0x8];
    r0 = sub_104d6e574(r0, decomp_var_2e0[0x1]);
    decomp_var_340 = r21 + r26;
    decomp_var_1f8 = 0x0;
    decomp_var_1f0 = 0x0;
    r26 = decomp_var_1c0;
    if (r26 == 0x0) goto .l1;
    goto loc_104d70e10;

loc_104d70b08:
    if ((r9 & 0x2) != 0x0) goto loc_104d70da0;
    goto loc_104d70b0c;

.l4:
    r21 = r24[0xe];
    sub_101601e38(&decomp_var_e0);
    r0 = sub_101602068(r24, &decomp_var_e0);
    r8 = r24[0xe];
    q0 = r25[0x2a];
    q1 = r25[0x2c];
    r25[0xc] = q0;
    r25[0xe] = q1;
    decomp_var_2fc = r8 - r21;
    r26 = sub_1015ffaa8(r24);
    r21 = r24[0xe];
    r0 = r19[0x8];
    r0 = sub_104d6e574(r0, decomp_var_2e0[0x1]);
    decomp_var_340 = r21 + r26;
    decomp_var_1f8 = 0x0;
    decomp_var_1f0 = 0x0;
    r26 = decomp_var_1c0;
    if (r26 == 0x0) goto .l7;
    goto .l6;

.l5:
    sub_104d7e308(&decomp_var_160 + 0x8, SAR(r8 - r10, 0x3));
    r21 = r24[0xe];
    sub_101601e38(&decomp_var_1e0);
    sub_101602068(r24, &decomp_var_1e0);
    r22 = r24[0xe];
    q0 = r25[0xc];
    q1 = r25[0xe];
    r25[0x2a] = q0;
    r25[0x2c] = q1;
    sub_1015ffaa8(r24);
    r8 = r22 - r21;
    decomp_var_2fc = r8;
    asm { ldurh      w21, [fp, #-0xc0] };
    if (r21 != 0x0) {
            r22 = 0x0;
            decomp_var_2e8 = 0x0;
            r24 = 0x0;
            decomp_var_318 = 0x106b2787a;
            decomp_var_328 = 0x107180408;
            decomp_var_330 = 0x10717fab0;
            decomp_var_338 = 0x10717fb78;
            r8 = 0x100;
            if (r21 >= 0x100) {
                    r8 = 0x100;
                    r28 = 0x100;
            }
            else {
                    r28 = r21;
            }
            while (true) {
                    if (r28 == r24) {
                            sub_1029fe0a0("PropertyDirtySet::test - Index out of bounds");
                    }
                    r8 = *(&decomp_var_e0 + (r24 >> 0x3 & 0x1ffffffffffffff8));
                    r8 = r8 >> r24;
                    if ((r8 & 0x1) == 0x0) {
                            r24 = r24 + 0x1;
                            r22 = r22 + 0x8;
                            if (r21 != r24) {
                                    continue;
                            }
                            temp_1 = 0x2;
                            break;
                    }
                    r0 = r19[0x8];
                    r8 = decomp_var_2e0;
                    r0 = sub_104d6e4e0(r0, r8[0x1], r24 & 0xffff);
                    r27 = r0;
                    if (r0 == 0x0) {
                            sub_1029fe0a0("Failed deserializing during ISR, cannot continue");
                    }
                    r26 = sub_104e06ec8(0xc8);
                    sub_104e07174();
                    r26[0x4] = decomp_var_1a0;
                    r0 = sub_100005858(r26 + 0x30, &decomp_var_1b0);
                    r26[0x5] = r20[0x3];
                    r26[0x24] = *(int16_t *)r27;
                    r8 = r27[0x5];
                    r26[0x8] = r8;
                    decomp_var_1e0 = r27 + 0x8;
                    asm { ccmp       x23, #0x0, #0x4, eq };
                    if (!asm { ccmp       x23, #0x0, #0x4, eq }) {
                            r23 = 0x0;
                    }
                    else {
                            if (r8 != 0x0) {
                                    r6 = r8[0x1];
                            }
                            r23 = &decomp_var_190;
                            r0 = sub_104d16830(&decomp_var_190, decomp_var_2f8, decomp_var_2f0, 0x1, &decomp_var_1a0, 0x1);
                    }
                    decomp_var_2d8 = r23;
                    r0 = sub_1000ce7bc(&decomp_var_2b8, &decomp_var_2d8);
                    sub_10002aa44(&decomp_var_2d8);
                    r1 = r27[0x1];
                    r8 = r27[0x5];
                    if ((r1 & 0xff00) == 0x3900) {
                            r9 = decomp_var_320;
                    }
                    else {
                            if (r8 != decomp_var_328) {
                                    if (r8 != decomp_var_330) {
                                            if (r8 != decomp_var_338) {
                                                    r9 = 0x0;
                                            }
                                            else {
                                                    r9 = decomp_var_320;
                                            }
                                    }
                                    else {
                                            r9 = decomp_var_320;
                                    }
                            }
                            else {
                                    r9 = decomp_var_320;
                            }
                    }
                    r23 = decomp_var_2f8;
                    r25 = r25 & 0xffffffff00000000 | *(int16_t *)r27 | 0x10000;
                    r0 = sub_104d71b14(decomp_var_2f0);
                    r8 = decomp_var_158;
                    decomp_var_2e8 = decomp_var_2e8 + 0x1;
                    decomp_var_2fc = r0 + decomp_var_2fc;
                    sub_104d74328(r8 + r22, r26);
                    r0 = sub_1010d4a60(&decomp_var_2b8);
                    r24 = r24 + 0x1;
                    r22 = r22 + 0x8;
                    if (r21 != r24) {
                            continue;
                    }
                    temp_1 = 0x2;
                    break;
            }
            if (temp_1 != 0x0 && temp_1 != 0x1) {
                    if (r23 != 0x0) {
                            r24 = *(int8_t *)byte_106c48450;
                            sub_104d164e8(r23, r24, *(int16_t *)decomp_var_2e0, 0x1, decomp_var_2fc);
                            r8 = decomp_var_2e0;
                            sub_104d164e8(r23, r24, *(int16_t *)r8, 0x2, 0x0);
                    }
                    if (decomp_var_350 == 0x0) {
                            r8 = 0x1;
                    }
                    if (((0x0 | r8) & 0x1) != 0x0) {
                            if ((0x0 & 0x1) == 0x0) {
                                    r20 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x10);
                                    loc_102c3ec38();
                                    r0 = sub_104d7e5d4(r20 + 0x8, &decomp_var_198);
                                    r20 = r0;
                                    r0[0x1] = decomp_var_1a0;
                                    r1 = decomp_var_150;
                                    if (r1 >= r0[0x6]) {
                                            sub_104d7e308(r20 + 0x10);
                                            r1 = decomp_var_150;
                                    }
                                    if (r1 != 0x0) {
                                            r21 = 0x0;
                                            r22 = 0x0;
                                            do {
                                                    r9 = decomp_var_158;
                                                    r8 = *(r9 + r22 * 0x8);
                                                    if (r8 == 0x0) {
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    r10 = r20[0x2];
                                                    r11 = *(r10 + r21);
                                                    if (r11 == 0x0) {
                                                            *(r9 + r22 * 0x8) = 0x0;
                                                            sub_104d74328(r10 + r21, r8);
                                                            r1 = decomp_var_150;
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    if (r11[0xa] >= r8[0xa]) {
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    *(r9 + r22 * 0x8) = 0x0;
                                                    sub_104d74328(r10 + r21, r8);
                                                    r1 = decomp_var_150;
                                                    r22 = r22 + 0x1;
                                                    r21 = r21 + 0x8;
                                            } while (r22 < r1);
                                    }
                                    sub_102c3ebc0(&decomp_var_e0, r1);
                            }
                    }
                    else {
                            sub_104d73bfc();
                    }
                    if (*(int8_t *)byte_106c67600 == 0x1 && *(int8_t *)byte_106c67510 == 0x1) {
                            asm { ldaddal    x9, x8, [x8] };
                            asm { ldaddal    x9, x8, [x8] };
                    }
                    r19 = decomp_var_198;
                    sub_104d754c0(&decomp_var_160 + 0x8);
                    r20 = decomp_var_1a8;
                    if (r20 != 0x0) {
                            r8 = r20 + 0x8;
                            asm { ldaddal    x9, x8, [x8] };
                            if (r8 == 0x0) {
                                    (*(*r20 + 0x10))(r20);
                                    std::__1::__shared_weak_count::__release_weak();
                            }
                    }
                    if (**___stack_chk_guard != decomp_var_68) {
                            __stack_chk_fail();
                    }
            }
    }
    else {
            decomp_var_2e8 = 0x0;
            if (r23 != 0x0) {
                    r24 = *(int8_t *)byte_106c48450;
                    sub_104d164e8(r23, r24, *(int16_t *)decomp_var_2e0, 0x1, decomp_var_2fc);
                    r8 = decomp_var_2e0;
                    sub_104d164e8(r23, r24, *(int16_t *)r8, 0x2, 0x0);
            }
            if (decomp_var_350 == 0x0) {
                    r8 = 0x1;
            }
            if (((0x0 | r8) & 0x1) != 0x0) {
                    if ((0x0 & 0x1) == 0x0) {
                            r20 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x10);
                            loc_102c3ec38();
                            r0 = sub_104d7e5d4(r20 + 0x8, &decomp_var_198);
                            r20 = r0;
                            r0[0x1] = decomp_var_1a0;
                            r1 = decomp_var_150;
                            if (r1 >= r0[0x6]) {
                                    sub_104d7e308(r20 + 0x10);
                                    r1 = decomp_var_150;
                            }
                            if (r1 != 0x0) {
                                    r21 = 0x0;
                                    r22 = 0x0;
                                    do {
                                            r9 = decomp_var_158;
                                            r8 = *(r9 + r22 * 0x8);
                                            if (r8 == 0x0) {
                                                    r22 = r22 + 0x1;
                                                    r21 = r21 + 0x8;
                                                    if (r22 < r1) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                            r10 = r20[0x2];
                                            r11 = *(r10 + r21);
                                            if (r11 == 0x0) {
                                                    *(r9 + r22 * 0x8) = 0x0;
                                                    sub_104d74328(r10 + r21, r8);
                                                    r1 = decomp_var_150;
                                                    r22 = r22 + 0x1;
                                                    r21 = r21 + 0x8;
                                                    if (r22 < r1) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                            if (r11[0xa] >= r8[0xa]) {
                                                    r22 = r22 + 0x1;
                                                    r21 = r21 + 0x8;
                                                    if (r22 < r1) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                            *(r9 + r22 * 0x8) = 0x0;
                                            sub_104d74328(r10 + r21, r8);
                                            r1 = decomp_var_150;
                                            r22 = r22 + 0x1;
                                            r21 = r21 + 0x8;
                                    } while (r22 < r1);
                            }
                            sub_102c3ebc0(&decomp_var_e0, r1);
                    }
            }
            else {
                    sub_104d73bfc();
            }
            if (*(int8_t *)byte_106c67600 == 0x1 && *(int8_t *)byte_106c67510 == 0x1) {
                    asm { ldaddal    x9, x8, [x8] };
                    asm { ldaddal    x9, x8, [x8] };
            }
            r19 = decomp_var_198;
            sub_104d754c0(&decomp_var_160 + 0x8);
            r20 = decomp_var_1a8;
            if (r20 != 0x0) {
                    r8 = r20 + 0x8;
                    asm { ldaddal    x9, x8, [x8] };
                    if (r8 == 0x0) {
                            (*(*r20 + 0x10))(r20);
                            std::__1::__shared_weak_count::__release_weak();
                    }
            }
            if (**___stack_chk_guard != decomp_var_68) {
                    __stack_chk_fail();
            }
    }
    return;

.l1:
    decomp_var_328 = 0x0;
    decomp_var_344 = 0x0;
    decomp_var_2e8 = 0x0;
    r24 = decomp_var_1f8;
    r21 = decomp_var_1f0;
    if (r24 != r21) {
            while (true) {
                    if (*(int8_t *)byte_106c67660 != 0x1) {
                            r25 = sub_104e06ec8(0xc8);
                            sub_104e07174();
                            decomp_var_e0 = r25;
                            r25[0x4] = decomp_var_1a0;
                            r0 = sub_100005858(r25 + 0x30, &decomp_var_1b0);
                            r23 = decomp_var_e0;
                            r23[0x5] = r20[0x3];
                            if ((sign_extend_64(r23[0x67]) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00();
                            }
                            q0 = *(int128_t *)r24;
                            r23[0xc] = r24[0x2];
                            r23[0x5] = q0;
                            r24[0x17] = 0x0;
                            *(int8_t *)r24 = 0x0;
                            sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_e0);
                            r23 = decomp_var_2f8;
                            if (decomp_var_e0 != 0x0) {
                                    sub_104d7e9dc();
                                    sub_104e07020();
                            }
                            r24 = r24 + 0x18;
                            if (r24 != r21) {
                                    continue;
                            }
                            break;
                    }
                    r8 = sign_extend_64(r24[0x17]);
                    if ((r8 & 0xffffffff80000000) == 0x0) {
                            if (r8 == 0x0) {
                                    r24 = r24 + 0x18;
                                    if (r24 != r21) {
                                            continue;
                                    }
                                    break;
                            }
                            else {
                                    r0 = sub_104d73b30(r19, &decomp_var_198, r24);
                                    if (r0 == 0xffff) {
                                            r25 = sub_104e06ec8(0xc8);
                                            sub_104e07174();
                                            decomp_var_e0 = r25;
                                            r25[0x4] = decomp_var_1a0;
                                            r0 = sub_100005858(r25 + 0x30, &decomp_var_1b0);
                                            r23 = decomp_var_e0;
                                            r23[0x5] = r20[0x3];
                                            if ((sign_extend_64(r23[0x67]) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                            q0 = *(int128_t *)r24;
                                            r23[0xc] = r24[0x2];
                                            r23[0x5] = q0;
                                            r24[0x17] = 0x0;
                                            *(int8_t *)r24 = 0x0;
                                            sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_e0);
                                            r23 = decomp_var_2f8;
                                            if (decomp_var_e0 != 0x0) {
                                                    sub_104d7e9dc();
                                                    sub_104e07020();
                                            }
                                            r24 = r24 + 0x18;
                                            if (r24 != r21) {
                                                    continue;
                                            }
                                            break;
                                    }
                                    else {
                                            r24 = r24 + 0x18;
                                            if (r24 != r21) {
                                                    continue;
                                            }
                                            break;
                                    }
                            }
                    }
                    else {
                            if (r24[0x1] != 0x0) {
                                    r0 = sub_104d73b30(r19, &decomp_var_198, r24);
                                    if (r0 == 0xffff) {
                                            r25 = sub_104e06ec8(0xc8);
                                            sub_104e07174();
                                            decomp_var_e0 = r25;
                                            r25[0x4] = decomp_var_1a0;
                                            r0 = sub_100005858(r25 + 0x30, &decomp_var_1b0);
                                            r23 = decomp_var_e0;
                                            r23[0x5] = r20[0x3];
                                            if ((sign_extend_64(r23[0x67]) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                            q0 = *(int128_t *)r24;
                                            r23[0xc] = r24[0x2];
                                            r23[0x5] = q0;
                                            r24[0x17] = 0x0;
                                            *(int8_t *)r24 = 0x0;
                                            sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_e0);
                                            r23 = decomp_var_2f8;
                                            if (decomp_var_e0 != 0x0) {
                                                    sub_104d7e9dc();
                                                    sub_104e07020();
                                            }
                                            r24 = r24 + 0x18;
                                            if (r24 != r21) {
                                                    continue;
                                            }
                                            break;
                                    }
                                    else {
                                            r24 = r24 + 0x18;
                                            if (r24 != r21) {
                                                    continue;
                                            }
                                            break;
                                    }
                            }
                            else {
                                    r24 = r24 + 0x18;
                                    if (r24 != r21) {
                                            continue;
                                    }
                                    break;
                            }
                    }
            }
    }
    r1 = decomp_var_340;
    asm { ccmp       w1, #0x0, #0x4, eq };
    r0 = decomp_var_2f0;
    r21 = decomp_var_344;
    if (!asm { ccmp       w1, #0x0, #0x4, eq }) {
            r8 = r0[0xe];
            if (r8 != r1) {
                    if (*(int8_t *)byte_106c67630 != 0x1) {
                            sub_1029fe0a0("ISR property data size mismatch: read %u bytes, expected end at %zu");
                    }
                    sub_1015fe774(r0, r1);
                    decomp_var_e0 = &decomp_var_1f8;
                    r0 = sub_100015abc(&decomp_var_e0);
                    r8 = decomp_var_328;
                    r22 = r8;
                    if (r23 != 0x0) {
                            r24 = *(int8_t *)byte_106c48450;
                            sub_104d164e8(r23, r24, *(int16_t *)decomp_var_2e0, 0x1, decomp_var_2fc);
                            r8 = decomp_var_2e0;
                            sub_104d164e8(r23, r24, *(int16_t *)r8, 0x2, r22);
                    }
                    if (decomp_var_350 == 0x0) {
                            r8 = 0x1;
                    }
                    if (((r21 | r8) & 0x1) != 0x0) {
                            if ((r21 & 0x1) == 0x0) {
                                    r20 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x10);
                                    loc_102c3ec38();
                                    r0 = sub_104d7e5d4(r20 + 0x8, &decomp_var_198);
                                    r20 = r0;
                                    r0[0x1] = decomp_var_1a0;
                                    r1 = decomp_var_150;
                                    if (r1 >= r0[0x6]) {
                                            sub_104d7e308(r20 + 0x10);
                                            r1 = decomp_var_150;
                                    }
                                    if (r1 != 0x0) {
                                            r21 = 0x0;
                                            r22 = 0x0;
                                            do {
                                                    r9 = decomp_var_158;
                                                    r8 = *(r9 + r22 * 0x8);
                                                    if (r8 == 0x0) {
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    r10 = r20[0x2];
                                                    r11 = *(r10 + r21);
                                                    if (r11 == 0x0) {
                                                            *(r9 + r22 * 0x8) = 0x0;
                                                            sub_104d74328(r10 + r21, r8);
                                                            r1 = decomp_var_150;
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    if (r11[0xa] >= r8[0xa]) {
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    *(r9 + r22 * 0x8) = 0x0;
                                                    sub_104d74328(r10 + r21, r8);
                                                    r1 = decomp_var_150;
                                                    r22 = r22 + 0x1;
                                                    r21 = r21 + 0x8;
                                            } while (r22 < r1);
                                    }
                                    sub_102c3ebc0(&decomp_var_e0, r1);
                            }
                    }
                    else {
                            sub_104d73bfc();
                    }
                    if (*(int8_t *)byte_106c67600 == 0x1 && *(int8_t *)byte_106c67510 == 0x1) {
                            asm { ldaddal    x9, x8, [x8] };
                            asm { ldaddal    x9, x8, [x8] };
                    }
                    r19 = decomp_var_198;
                    sub_104d754c0(&decomp_var_160 + 0x8);
                    r20 = decomp_var_1a8;
                    if (r20 != 0x0) {
                            r8 = r20 + 0x8;
                            asm { ldaddal    x9, x8, [x8] };
                            if (r8 == 0x0) {
                                    (*(*r20 + 0x10))(r20);
                                    std::__1::__shared_weak_count::__release_weak();
                            }
                    }
                    if (**___stack_chk_guard != decomp_var_68) {
                            __stack_chk_fail();
                    }
            }
            else {
                    decomp_var_e0 = &decomp_var_1f8;
                    r0 = sub_100015abc(&decomp_var_e0);
                    r8 = decomp_var_328;
                    r22 = r8;
                    if (r23 != 0x0) {
                            r24 = *(int8_t *)byte_106c48450;
                            sub_104d164e8(r23, r24, *(int16_t *)decomp_var_2e0, 0x1, decomp_var_2fc);
                            r8 = decomp_var_2e0;
                            sub_104d164e8(r23, r24, *(int16_t *)r8, 0x2, r22);
                    }
                    if (decomp_var_350 == 0x0) {
                            r8 = 0x1;
                    }
                    if (((r21 | r8) & 0x1) != 0x0) {
                            if ((r21 & 0x1) == 0x0) {
                                    r20 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x10);
                                    loc_102c3ec38();
                                    r0 = sub_104d7e5d4(r20 + 0x8, &decomp_var_198);
                                    r20 = r0;
                                    r0[0x1] = decomp_var_1a0;
                                    r1 = decomp_var_150;
                                    if (r1 >= r0[0x6]) {
                                            sub_104d7e308(r20 + 0x10);
                                            r1 = decomp_var_150;
                                    }
                                    if (r1 != 0x0) {
                                            r21 = 0x0;
                                            r22 = 0x0;
                                            do {
                                                    r9 = decomp_var_158;
                                                    r8 = *(r9 + r22 * 0x8);
                                                    if (r8 == 0x0) {
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    r10 = r20[0x2];
                                                    r11 = *(r10 + r21);
                                                    if (r11 == 0x0) {
                                                            *(r9 + r22 * 0x8) = 0x0;
                                                            sub_104d74328(r10 + r21, r8);
                                                            r1 = decomp_var_150;
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    if (r11[0xa] >= r8[0xa]) {
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    *(r9 + r22 * 0x8) = 0x0;
                                                    sub_104d74328(r10 + r21, r8);
                                                    r1 = decomp_var_150;
                                                    r22 = r22 + 0x1;
                                                    r21 = r21 + 0x8;
                                            } while (r22 < r1);
                                    }
                                    sub_102c3ebc0(&decomp_var_e0, r1);
                            }
                    }
                    else {
                            sub_104d73bfc();
                    }
                    if (*(int8_t *)byte_106c67600 == 0x1 && *(int8_t *)byte_106c67510 == 0x1) {
                            asm { ldaddal    x9, x8, [x8] };
                            asm { ldaddal    x9, x8, [x8] };
                    }
                    r19 = decomp_var_198;
                    sub_104d754c0(&decomp_var_160 + 0x8);
                    r20 = decomp_var_1a8;
                    if (r20 != 0x0) {
                            r8 = r20 + 0x8;
                            asm { ldaddal    x9, x8, [x8] };
                            if (r8 == 0x0) {
                                    (*(*r20 + 0x10))(r20);
                                    std::__1::__shared_weak_count::__release_weak();
                            }
                    }
                    if (**___stack_chk_guard != decomp_var_68) {
                            __stack_chk_fail();
                    }
            }
    }
    else {
            decomp_var_e0 = &decomp_var_1f8;
            r0 = sub_100015abc(&decomp_var_e0);
            r8 = decomp_var_328;
            r22 = r8;
            if (r23 != 0x0) {
                    r24 = *(int8_t *)byte_106c48450;
                    sub_104d164e8(r23, r24, *(int16_t *)decomp_var_2e0, 0x1, decomp_var_2fc);
                    r8 = decomp_var_2e0;
                    sub_104d164e8(r23, r24, *(int16_t *)r8, 0x2, r22);
            }
            if (decomp_var_350 == 0x0) {
                    r8 = 0x1;
            }
            if (((r21 | r8) & 0x1) != 0x0) {
                    if ((r21 & 0x1) == 0x0) {
                            r20 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x10);
                            loc_102c3ec38();
                            r0 = sub_104d7e5d4(r20 + 0x8, &decomp_var_198);
                            r20 = r0;
                            r0[0x1] = decomp_var_1a0;
                            r1 = decomp_var_150;
                            if (r1 >= r0[0x6]) {
                                    sub_104d7e308(r20 + 0x10);
                                    r1 = decomp_var_150;
                            }
                            if (r1 != 0x0) {
                                    r21 = 0x0;
                                    r22 = 0x0;
                                    do {
                                            r9 = decomp_var_158;
                                            r8 = *(r9 + r22 * 0x8);
                                            if (r8 == 0x0) {
                                                    r22 = r22 + 0x1;
                                                    r21 = r21 + 0x8;
                                                    if (r22 < r1) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                            r10 = r20[0x2];
                                            r11 = *(r10 + r21);
                                            if (r11 == 0x0) {
                                                    *(r9 + r22 * 0x8) = 0x0;
                                                    sub_104d74328(r10 + r21, r8);
                                                    r1 = decomp_var_150;
                                                    r22 = r22 + 0x1;
                                                    r21 = r21 + 0x8;
                                                    if (r22 < r1) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                            if (r11[0xa] >= r8[0xa]) {
                                                    r22 = r22 + 0x1;
                                                    r21 = r21 + 0x8;
                                                    if (r22 < r1) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                            *(r9 + r22 * 0x8) = 0x0;
                                            sub_104d74328(r10 + r21, r8);
                                            r1 = decomp_var_150;
                                            r22 = r22 + 0x1;
                                            r21 = r21 + 0x8;
                                    } while (r22 < r1);
                            }
                            sub_102c3ebc0(&decomp_var_e0, r1);
                    }
            }
            else {
                    sub_104d73bfc();
            }
            if (*(int8_t *)byte_106c67600 == 0x1 && *(int8_t *)byte_106c67510 == 0x1) {
                    asm { ldaddal    x9, x8, [x8] };
                    asm { ldaddal    x9, x8, [x8] };
            }
            r19 = decomp_var_198;
            sub_104d754c0(&decomp_var_160 + 0x8);
            r20 = decomp_var_1a8;
            if (r20 != 0x0) {
                    r8 = r20 + 0x8;
                    asm { ldaddal    x9, x8, [x8] };
                    if (r8 == 0x0) {
                            (*(*r20 + 0x10))(r20);
                            std::__1::__shared_weak_count::__release_weak();
                    }
            }
            if (**___stack_chk_guard != decomp_var_68) {
                    __stack_chk_fail();
            }
    }
    return;

loc_104d70e10:
    decomp_var_2e8 = 0x0;
    decomp_var_344 = 0x0;
    decomp_var_338 = 0x0;
    decomp_var_328 = 0x0;
    r24 = 0x0;
    decomp_var_318 = r0;
    decomp_var_370 = 0x106b27872;
    decomp_var_330 = 0x106b2785a;
    decomp_var_358 = 0x107180408;
    decomp_var_360 = 0x10717fab0;
    decomp_var_368 = 0x10717fb78;
    r21 = &decomp_var_1e0;
    r8 = "Invalid ISR attribute id";
    goto .l9;

loc_104d70b0c:
    sub_104d7e308(&decomp_var_160 + 0x8, SAR(r8 - r10, 0x3));
    r21 = r24[0xe];
    sub_101601e38(&decomp_var_1e0);
    sub_101602068(r24, &decomp_var_1e0);
    r22 = r24[0xe];
    q0 = r25[0xc];
    q1 = r25[0xe];
    r25[0x2a] = q0;
    r25[0x2c] = q1;
    sub_1015ffaa8(r24);
    r8 = r22 - r21;
    decomp_var_2fc = r8;
    asm { ldurh      w21, [fp, #-0xc0] };
    if (r21 != 0x0) {
            r22 = 0x0;
            decomp_var_2e8 = 0x0;
            r24 = 0x0;
            decomp_var_318 = 0x106b2787a;
            decomp_var_328 = 0x107180408;
            decomp_var_330 = 0x10717fab0;
            decomp_var_338 = 0x10717fb78;
            r8 = 0x100;
            if (r21 >= 0x100) {
                    r8 = 0x100;
                    r28 = 0x100;
            }
            else {
                    r28 = r21;
            }
            while (true) {
                    if (r28 == r24) {
                            sub_1029fe0a0("PropertyDirtySet::test - Index out of bounds");
                    }
                    r8 = *(&decomp_var_e0 + (r24 >> 0x3 & 0x1ffffffffffffff8));
                    r8 = r8 >> r24;
                    if ((r8 & 0x1) == 0x0) {
                            r24 = r24 + 0x1;
                            r22 = r22 + 0x8;
                            if (r21 != r24) {
                                    continue;
                            }
                            temp_1 = 0x2;
                            break;
                    }
                    r0 = r19[0x8];
                    r8 = decomp_var_2e0;
                    r0 = sub_104d6e4e0(r0, r8[0x1], r24 & 0xffff);
                    r27 = r0;
                    if (r0 == 0x0) {
                            sub_1029fe0a0("Failed deserializing during ISR, cannot continue");
                    }
                    r26 = sub_104e06ec8(0xc8);
                    sub_104e07174();
                    r26[0x4] = decomp_var_1a0;
                    r0 = sub_100005858(r26 + 0x30, &decomp_var_1b0);
                    r26[0x5] = r20[0x3];
                    r26[0x24] = *(int16_t *)r27;
                    r8 = r27[0x5];
                    r26[0x8] = r8;
                    decomp_var_1e0 = r27 + 0x8;
                    asm { ccmp       x23, #0x0, #0x4, eq };
                    if (!asm { ccmp       x23, #0x0, #0x4, eq }) {
                            r23 = 0x0;
                    }
                    else {
                            if (r8 != 0x0) {
                                    r6 = r8[0x1];
                            }
                            r23 = &decomp_var_190;
                            r0 = sub_104d16830(&decomp_var_190, decomp_var_2f8, decomp_var_2f0, 0x1, &decomp_var_1a0, 0x1);
                    }
                    decomp_var_2d8 = r23;
                    r0 = sub_1000ce7bc(&decomp_var_2b8, &decomp_var_2d8);
                    sub_10002aa44(&decomp_var_2d8);
                    r1 = r27[0x1];
                    r8 = r27[0x5];
                    if ((r1 & 0xff00) == 0x3900) {
                            r9 = decomp_var_320;
                    }
                    else {
                            if (r8 != decomp_var_328) {
                                    if (r8 != decomp_var_330) {
                                            if (r8 != decomp_var_338) {
                                                    r9 = 0x0;
                                            }
                                            else {
                                                    r9 = decomp_var_320;
                                            }
                                    }
                                    else {
                                            r9 = decomp_var_320;
                                    }
                            }
                            else {
                                    r9 = decomp_var_320;
                            }
                    }
                    r23 = decomp_var_2f8;
                    r25 = r25 & 0xffffffff00000000 | *(int16_t *)r27 | 0x10000;
                    r0 = sub_104d71b14(decomp_var_2f0);
                    r8 = decomp_var_158;
                    decomp_var_2e8 = decomp_var_2e8 + 0x1;
                    decomp_var_2fc = r0 + decomp_var_2fc;
                    sub_104d74328(r8 + r22, r26);
                    r0 = sub_1010d4a60(&decomp_var_2b8);
                    r24 = r24 + 0x1;
                    r22 = r22 + 0x8;
                    if (r21 != r24) {
                            continue;
                    }
                    temp_1 = 0x2;
                    break;
            }
            if (temp_1 != 0x0 && temp_1 != 0x1) {
                    if (r23 != 0x0) {
                            r24 = *(int8_t *)byte_106c48450;
                            sub_104d164e8(r23, r24, *(int16_t *)decomp_var_2e0, 0x1, decomp_var_2fc);
                            r8 = decomp_var_2e0;
                            sub_104d164e8(r23, r24, *(int16_t *)r8, 0x2, 0x0);
                    }
                    if (decomp_var_350 == 0x0) {
                            r8 = 0x1;
                    }
                    if (((0x0 | r8) & 0x1) != 0x0) {
                            if ((0x0 & 0x1) == 0x0) {
                                    r20 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x10);
                                    loc_102c3ec38();
                                    r0 = sub_104d7e5d4(r20 + 0x8, &decomp_var_198);
                                    r20 = r0;
                                    r0[0x1] = decomp_var_1a0;
                                    r1 = decomp_var_150;
                                    if (r1 >= r0[0x6]) {
                                            sub_104d7e308(r20 + 0x10);
                                            r1 = decomp_var_150;
                                    }
                                    if (r1 != 0x0) {
                                            r21 = 0x0;
                                            r22 = 0x0;
                                            do {
                                                    r9 = decomp_var_158;
                                                    r8 = *(r9 + r22 * 0x8);
                                                    if (r8 == 0x0) {
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    r10 = r20[0x2];
                                                    r11 = *(r10 + r21);
                                                    if (r11 == 0x0) {
                                                            *(r9 + r22 * 0x8) = 0x0;
                                                            sub_104d74328(r10 + r21, r8);
                                                            r1 = decomp_var_150;
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    if (r11[0xa] >= r8[0xa]) {
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    *(r9 + r22 * 0x8) = 0x0;
                                                    sub_104d74328(r10 + r21, r8);
                                                    r1 = decomp_var_150;
                                                    r22 = r22 + 0x1;
                                                    r21 = r21 + 0x8;
                                            } while (r22 < r1);
                                    }
                                    sub_102c3ebc0(&decomp_var_e0, r1);
                            }
                    }
                    else {
                            sub_104d73bfc();
                    }
                    if (*(int8_t *)byte_106c67600 == 0x1 && *(int8_t *)byte_106c67510 == 0x1) {
                            asm { ldaddal    x9, x8, [x8] };
                            asm { ldaddal    x9, x8, [x8] };
                    }
                    r19 = decomp_var_198;
                    sub_104d754c0(&decomp_var_160 + 0x8);
                    r20 = decomp_var_1a8;
                    if (r20 != 0x0) {
                            r8 = r20 + 0x8;
                            asm { ldaddal    x9, x8, [x8] };
                            if (r8 == 0x0) {
                                    (*(*r20 + 0x10))(r20);
                                    std::__1::__shared_weak_count::__release_weak();
                            }
                    }
                    if (**___stack_chk_guard != decomp_var_68) {
                            __stack_chk_fail();
                    }
            }
    }
    else {
            decomp_var_2e8 = 0x0;
            if (r23 != 0x0) {
                    r24 = *(int8_t *)byte_106c48450;
                    sub_104d164e8(r23, r24, *(int16_t *)decomp_var_2e0, 0x1, decomp_var_2fc);
                    r8 = decomp_var_2e0;
                    sub_104d164e8(r23, r24, *(int16_t *)r8, 0x2, 0x0);
            }
            if (decomp_var_350 == 0x0) {
                    r8 = 0x1;
            }
            if (((0x0 | r8) & 0x1) != 0x0) {
                    if ((0x0 & 0x1) == 0x0) {
                            r20 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x10);
                            loc_102c3ec38();
                            r0 = sub_104d7e5d4(r20 + 0x8, &decomp_var_198);
                            r20 = r0;
                            r0[0x1] = decomp_var_1a0;
                            r1 = decomp_var_150;
                            if (r1 >= r0[0x6]) {
                                    sub_104d7e308(r20 + 0x10);
                                    r1 = decomp_var_150;
                            }
                            if (r1 != 0x0) {
                                    r21 = 0x0;
                                    r22 = 0x0;
                                    do {
                                            r9 = decomp_var_158;
                                            r8 = *(r9 + r22 * 0x8);
                                            if (r8 == 0x0) {
                                                    r22 = r22 + 0x1;
                                                    r21 = r21 + 0x8;
                                                    if (r22 < r1) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                            r10 = r20[0x2];
                                            r11 = *(r10 + r21);
                                            if (r11 == 0x0) {
                                                    *(r9 + r22 * 0x8) = 0x0;
                                                    sub_104d74328(r10 + r21, r8);
                                                    r1 = decomp_var_150;
                                                    r22 = r22 + 0x1;
                                                    r21 = r21 + 0x8;
                                                    if (r22 < r1) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                            if (r11[0xa] >= r8[0xa]) {
                                                    r22 = r22 + 0x1;
                                                    r21 = r21 + 0x8;
                                                    if (r22 < r1) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                            *(r9 + r22 * 0x8) = 0x0;
                                            sub_104d74328(r10 + r21, r8);
                                            r1 = decomp_var_150;
                                            r22 = r22 + 0x1;
                                            r21 = r21 + 0x8;
                                    } while (r22 < r1);
                            }
                            sub_102c3ebc0(&decomp_var_e0, r1);
                    }
            }
            else {
                    sub_104d73bfc();
            }
            if (*(int8_t *)byte_106c67600 == 0x1 && *(int8_t *)byte_106c67510 == 0x1) {
                    asm { ldaddal    x9, x8, [x8] };
                    asm { ldaddal    x9, x8, [x8] };
            }
            r19 = decomp_var_198;
            sub_104d754c0(&decomp_var_160 + 0x8);
            r20 = decomp_var_1a8;
            if (r20 != 0x0) {
                    r8 = r20 + 0x8;
                    asm { ldaddal    x9, x8, [x8] };
                    if (r8 == 0x0) {
                            (*(*r20 + 0x10))(r20);
                            std::__1::__shared_weak_count::__release_weak();
                    }
            }
            if (**___stack_chk_guard != decomp_var_68) {
                    __stack_chk_fail();
            }
    }
    return;

.l7:
    decomp_var_328 = 0x0;
    decomp_var_344 = 0x0;
    decomp_var_2e8 = 0x0;
    r24 = decomp_var_1f8;
    r21 = decomp_var_1f0;
    if (r24 != r21) {
            while (true) {
                    if (*(int8_t *)byte_106c67660 != 0x1) {
                            r25 = sub_104e06ec8(0xc8);
                            sub_104e07174();
                            decomp_var_e0 = r25;
                            r25[0x4] = decomp_var_1a0;
                            r0 = sub_100005858(r25 + 0x30, &decomp_var_1b0);
                            r23 = decomp_var_e0;
                            r23[0x5] = r20[0x3];
                            if ((sign_extend_64(r23[0x67]) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00();
                            }
                            q0 = *(int128_t *)r24;
                            r23[0xc] = r24[0x2];
                            r23[0x5] = q0;
                            r24[0x17] = 0x0;
                            *(int8_t *)r24 = 0x0;
                            sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_e0);
                            r23 = decomp_var_2f8;
                            if (decomp_var_e0 != 0x0) {
                                    sub_104d7e9dc();
                                    sub_104e07020();
                            }
                            r24 = r24 + 0x18;
                            if (r24 != r21) {
                                    continue;
                            }
                            break;
                    }
                    r8 = sign_extend_64(r24[0x17]);
                    if ((r8 & 0xffffffff80000000) == 0x0) {
                            if (r8 == 0x0) {
                                    r24 = r24 + 0x18;
                                    if (r24 != r21) {
                                            continue;
                                    }
                                    break;
                            }
                            else {
                                    r0 = sub_104d73b30(r19, &decomp_var_198, r24);
                                    if (r0 == 0xffff) {
                                            r25 = sub_104e06ec8(0xc8);
                                            sub_104e07174();
                                            decomp_var_e0 = r25;
                                            r25[0x4] = decomp_var_1a0;
                                            r0 = sub_100005858(r25 + 0x30, &decomp_var_1b0);
                                            r23 = decomp_var_e0;
                                            r23[0x5] = r20[0x3];
                                            if ((sign_extend_64(r23[0x67]) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                            q0 = *(int128_t *)r24;
                                            r23[0xc] = r24[0x2];
                                            r23[0x5] = q0;
                                            r24[0x17] = 0x0;
                                            *(int8_t *)r24 = 0x0;
                                            sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_e0);
                                            r23 = decomp_var_2f8;
                                            if (decomp_var_e0 != 0x0) {
                                                    sub_104d7e9dc();
                                                    sub_104e07020();
                                            }
                                            r24 = r24 + 0x18;
                                            if (r24 != r21) {
                                                    continue;
                                            }
                                            break;
                                    }
                                    else {
                                            r24 = r24 + 0x18;
                                            if (r24 != r21) {
                                                    continue;
                                            }
                                            break;
                                    }
                            }
                    }
                    else {
                            if (r24[0x1] != 0x0) {
                                    r0 = sub_104d73b30(r19, &decomp_var_198, r24);
                                    if (r0 == 0xffff) {
                                            r25 = sub_104e06ec8(0xc8);
                                            sub_104e07174();
                                            decomp_var_e0 = r25;
                                            r25[0x4] = decomp_var_1a0;
                                            r0 = sub_100005858(r25 + 0x30, &decomp_var_1b0);
                                            r23 = decomp_var_e0;
                                            r23[0x5] = r20[0x3];
                                            if ((sign_extend_64(r23[0x67]) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                            q0 = *(int128_t *)r24;
                                            r23[0xc] = r24[0x2];
                                            r23[0x5] = q0;
                                            r24[0x17] = 0x0;
                                            *(int8_t *)r24 = 0x0;
                                            sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_e0);
                                            r23 = decomp_var_2f8;
                                            if (decomp_var_e0 != 0x0) {
                                                    sub_104d7e9dc();
                                                    sub_104e07020();
                                            }
                                            r24 = r24 + 0x18;
                                            if (r24 != r21) {
                                                    continue;
                                            }
                                            break;
                                    }
                                    else {
                                            r24 = r24 + 0x18;
                                            if (r24 != r21) {
                                                    continue;
                                            }
                                            break;
                                    }
                            }
                            else {
                                    r24 = r24 + 0x18;
                                    if (r24 != r21) {
                                            continue;
                                    }
                                    break;
                            }
                    }
            }
    }
    r1 = decomp_var_340;
    asm { ccmp       w1, #0x0, #0x4, eq };
    r0 = decomp_var_2f0;
    r21 = decomp_var_344;
    if (!asm { ccmp       w1, #0x0, #0x4, eq }) {
            r8 = r0[0xe];
            if (r8 != r1) {
                    if (*(int8_t *)byte_106c67630 != 0x1) {
                            sub_1029fe0a0("ISR property data size mismatch: read %u bytes, expected end at %zu");
                    }
                    sub_1015fe774(r0, r1);
                    decomp_var_e0 = &decomp_var_1f8;
                    r0 = sub_100015abc(&decomp_var_e0);
                    r8 = decomp_var_328;
                    r22 = r8;
                    if (r23 != 0x0) {
                            r24 = *(int8_t *)byte_106c48450;
                            sub_104d164e8(r23, r24, *(int16_t *)decomp_var_2e0, 0x1, decomp_var_2fc);
                            r8 = decomp_var_2e0;
                            sub_104d164e8(r23, r24, *(int16_t *)r8, 0x2, r22);
                    }
                    if (decomp_var_350 == 0x0) {
                            r8 = 0x1;
                    }
                    if (((r21 | r8) & 0x1) != 0x0) {
                            if ((r21 & 0x1) == 0x0) {
                                    r20 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x10);
                                    loc_102c3ec38();
                                    r0 = sub_104d7e5d4(r20 + 0x8, &decomp_var_198);
                                    r20 = r0;
                                    r0[0x1] = decomp_var_1a0;
                                    r1 = decomp_var_150;
                                    if (r1 >= r0[0x6]) {
                                            sub_104d7e308(r20 + 0x10);
                                            r1 = decomp_var_150;
                                    }
                                    if (r1 != 0x0) {
                                            r21 = 0x0;
                                            r22 = 0x0;
                                            do {
                                                    r9 = decomp_var_158;
                                                    r8 = *(r9 + r22 * 0x8);
                                                    if (r8 == 0x0) {
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    r10 = r20[0x2];
                                                    r11 = *(r10 + r21);
                                                    if (r11 == 0x0) {
                                                            *(r9 + r22 * 0x8) = 0x0;
                                                            sub_104d74328(r10 + r21, r8);
                                                            r1 = decomp_var_150;
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    if (r11[0xa] >= r8[0xa]) {
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    *(r9 + r22 * 0x8) = 0x0;
                                                    sub_104d74328(r10 + r21, r8);
                                                    r1 = decomp_var_150;
                                                    r22 = r22 + 0x1;
                                                    r21 = r21 + 0x8;
                                            } while (r22 < r1);
                                    }
                                    sub_102c3ebc0(&decomp_var_e0, r1);
                            }
                    }
                    else {
                            sub_104d73bfc();
                    }
                    if (*(int8_t *)byte_106c67600 == 0x1 && *(int8_t *)byte_106c67510 == 0x1) {
                            asm { ldaddal    x9, x8, [x8] };
                            asm { ldaddal    x9, x8, [x8] };
                    }
                    r19 = decomp_var_198;
                    sub_104d754c0(&decomp_var_160 + 0x8);
                    r20 = decomp_var_1a8;
                    if (r20 != 0x0) {
                            r8 = r20 + 0x8;
                            asm { ldaddal    x9, x8, [x8] };
                            if (r8 == 0x0) {
                                    (*(*r20 + 0x10))(r20);
                                    std::__1::__shared_weak_count::__release_weak();
                            }
                    }
                    if (**___stack_chk_guard != decomp_var_68) {
                            __stack_chk_fail();
                    }
            }
            else {
                    decomp_var_e0 = &decomp_var_1f8;
                    r0 = sub_100015abc(&decomp_var_e0);
                    r8 = decomp_var_328;
                    r22 = r8;
                    if (r23 != 0x0) {
                            r24 = *(int8_t *)byte_106c48450;
                            sub_104d164e8(r23, r24, *(int16_t *)decomp_var_2e0, 0x1, decomp_var_2fc);
                            r8 = decomp_var_2e0;
                            sub_104d164e8(r23, r24, *(int16_t *)r8, 0x2, r22);
                    }
                    if (decomp_var_350 == 0x0) {
                            r8 = 0x1;
                    }
                    if (((r21 | r8) & 0x1) != 0x0) {
                            if ((r21 & 0x1) == 0x0) {
                                    r20 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x10);
                                    loc_102c3ec38();
                                    r0 = sub_104d7e5d4(r20 + 0x8, &decomp_var_198);
                                    r20 = r0;
                                    r0[0x1] = decomp_var_1a0;
                                    r1 = decomp_var_150;
                                    if (r1 >= r0[0x6]) {
                                            sub_104d7e308(r20 + 0x10);
                                            r1 = decomp_var_150;
                                    }
                                    if (r1 != 0x0) {
                                            r21 = 0x0;
                                            r22 = 0x0;
                                            do {
                                                    r9 = decomp_var_158;
                                                    r8 = *(r9 + r22 * 0x8);
                                                    if (r8 == 0x0) {
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    r10 = r20[0x2];
                                                    r11 = *(r10 + r21);
                                                    if (r11 == 0x0) {
                                                            *(r9 + r22 * 0x8) = 0x0;
                                                            sub_104d74328(r10 + r21, r8);
                                                            r1 = decomp_var_150;
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    if (r11[0xa] >= r8[0xa]) {
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    *(r9 + r22 * 0x8) = 0x0;
                                                    sub_104d74328(r10 + r21, r8);
                                                    r1 = decomp_var_150;
                                                    r22 = r22 + 0x1;
                                                    r21 = r21 + 0x8;
                                            } while (r22 < r1);
                                    }
                                    sub_102c3ebc0(&decomp_var_e0, r1);
                            }
                    }
                    else {
                            sub_104d73bfc();
                    }
                    if (*(int8_t *)byte_106c67600 == 0x1 && *(int8_t *)byte_106c67510 == 0x1) {
                            asm { ldaddal    x9, x8, [x8] };
                            asm { ldaddal    x9, x8, [x8] };
                    }
                    r19 = decomp_var_198;
                    sub_104d754c0(&decomp_var_160 + 0x8);
                    r20 = decomp_var_1a8;
                    if (r20 != 0x0) {
                            r8 = r20 + 0x8;
                            asm { ldaddal    x9, x8, [x8] };
                            if (r8 == 0x0) {
                                    (*(*r20 + 0x10))(r20);
                                    std::__1::__shared_weak_count::__release_weak();
                            }
                    }
                    if (**___stack_chk_guard != decomp_var_68) {
                            __stack_chk_fail();
                    }
            }
    }
    else {
            decomp_var_e0 = &decomp_var_1f8;
            r0 = sub_100015abc(&decomp_var_e0);
            r8 = decomp_var_328;
            r22 = r8;
            if (r23 != 0x0) {
                    r24 = *(int8_t *)byte_106c48450;
                    sub_104d164e8(r23, r24, *(int16_t *)decomp_var_2e0, 0x1, decomp_var_2fc);
                    r8 = decomp_var_2e0;
                    sub_104d164e8(r23, r24, *(int16_t *)r8, 0x2, r22);
            }
            if (decomp_var_350 == 0x0) {
                    r8 = 0x1;
            }
            if (((r21 | r8) & 0x1) != 0x0) {
                    if ((r21 & 0x1) == 0x0) {
                            r20 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x10);
                            loc_102c3ec38();
                            r0 = sub_104d7e5d4(r20 + 0x8, &decomp_var_198);
                            r20 = r0;
                            r0[0x1] = decomp_var_1a0;
                            r1 = decomp_var_150;
                            if (r1 >= r0[0x6]) {
                                    sub_104d7e308(r20 + 0x10);
                                    r1 = decomp_var_150;
                            }
                            if (r1 != 0x0) {
                                    r21 = 0x0;
                                    r22 = 0x0;
                                    do {
                                            r9 = decomp_var_158;
                                            r8 = *(r9 + r22 * 0x8);
                                            if (r8 == 0x0) {
                                                    r22 = r22 + 0x1;
                                                    r21 = r21 + 0x8;
                                                    if (r22 < r1) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                            r10 = r20[0x2];
                                            r11 = *(r10 + r21);
                                            if (r11 == 0x0) {
                                                    *(r9 + r22 * 0x8) = 0x0;
                                                    sub_104d74328(r10 + r21, r8);
                                                    r1 = decomp_var_150;
                                                    r22 = r22 + 0x1;
                                                    r21 = r21 + 0x8;
                                                    if (r22 < r1) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                            if (r11[0xa] >= r8[0xa]) {
                                                    r22 = r22 + 0x1;
                                                    r21 = r21 + 0x8;
                                                    if (r22 < r1) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                            *(r9 + r22 * 0x8) = 0x0;
                                            sub_104d74328(r10 + r21, r8);
                                            r1 = decomp_var_150;
                                            r22 = r22 + 0x1;
                                            r21 = r21 + 0x8;
                                    } while (r22 < r1);
                            }
                            sub_102c3ebc0(&decomp_var_e0, r1);
                    }
            }
            else {
                    sub_104d73bfc();
            }
            if (*(int8_t *)byte_106c67600 == 0x1 && *(int8_t *)byte_106c67510 == 0x1) {
                    asm { ldaddal    x9, x8, [x8] };
                    asm { ldaddal    x9, x8, [x8] };
            }
            r19 = decomp_var_198;
            sub_104d754c0(&decomp_var_160 + 0x8);
            r20 = decomp_var_1a8;
            if (r20 != 0x0) {
                    r8 = r20 + 0x8;
                    asm { ldaddal    x9, x8, [x8] };
                    if (r8 == 0x0) {
                            (*(*r20 + 0x10))(r20);
                            std::__1::__shared_weak_count::__release_weak();
                    }
            }
            if (**___stack_chk_guard != decomp_var_68) {
                    __stack_chk_fail();
            }
    }
    return;

.l6:
    decomp_var_2e8 = 0x0;
    decomp_var_344 = 0x0;
    decomp_var_338 = 0x0;
    decomp_var_328 = 0x0;
    r24 = 0x0;
    decomp_var_318 = r0;
    decomp_var_370 = 0x106b27872;
    decomp_var_330 = 0x106b2785a;
    decomp_var_358 = 0x107180408;
    decomp_var_360 = 0x10717fab0;
    decomp_var_368 = 0x10717fb78;
    r21 = &decomp_var_1e0;
    r8 = "Invalid ISR attribute id";
    goto .l12;

.l9:
    if (r24 <= 0xff) {
            if (r26 >= zero_extend_64(r24)) {
                    r8 = *(r21 + (r24 >> 0x3 & 0x1ffffffffffffff8));
                    r8 = r8 >> r24;
                    if ((r8 & 0x1) != 0x0) {
                            r1 = r19[0x8];
                            r8 = decomp_var_2e0[0x1];
                            if (r24 < decomp_var_318) {
                                    r0 = sub_104d6e4e0(r1, r8, r24 & 0xffff);
                                    r27 = r0;
                                    if (r0 == 0x0) {
                                            sub_1029fe0a0("Failed deserializing during ISR Receive, cannot continue");
                                    }
                                    r28 = sub_104e06ec8(0xc8);
                                    sub_104e07174();
                                    decomp_var_240 = r28;
                                    r28[0x4] = decomp_var_1a0;
                                    r0 = sub_100005858(r28 + 0x30, &decomp_var_1b0);
                                    r21 = 0x0;
                                    decomp_var_240[0x5] = r20[0x3];
                                    decomp_var_240[0x24] = *(int16_t *)r27;
                                    r8 = r27[0x5];
                                    decomp_var_240[0x8] = r8;
                                    decomp_var_e0 = r27 + 0x8;
                                    if (*(int8_t *)byte_106c669c8 == 0x1 && r23 != 0x0) {
                                            if (r8 != 0x0) {
                                                    r6 = r8[0x1];
                                            }
                                            r21 = &decomp_var_190;
                                            r0 = sub_104d16830(&decomp_var_190, r23, decomp_var_2f0, 0x1, &decomp_var_1a0, 0x1);
                                    }
                                    decomp_var_218 = r21;
                                    r0 = sub_1000ce7bc(&decomp_var_2b8, &decomp_var_218);
                                    sub_10002aa44(&decomp_var_218);
                                    r1 = r27[0x1];
                                    r8 = r27[0x5];
                                    if ((r1 & 0xff00) == 0x3900) {
                                            r9 = decomp_var_320;
                                    }
                                    else {
                                            if (r8 != decomp_var_358 && r8 != decomp_var_360) {
                                                    if (r8 != decomp_var_368) {
                                                            r9 = 0x0;
                                                    }
                                                    else {
                                                            r9 = decomp_var_320;
                                                    }
                                            }
                                            else {
                                                    r9 = decomp_var_320;
                                            }
                                    }
                                    r21 = &decomp_var_1e0;
                                    r25 = r25 & 0xffffffff00000000 | *(int16_t *)r27 | 0x10000;
                                    r27 = sub_104d71b14(decomp_var_2f0);
                                    sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_240);
                                    r0 = sub_1010d4a60(&decomp_var_2b8);
                                    r0 = decomp_var_240;
                                    decomp_var_240 = 0x0;
                                    if (r0 != 0x0) {
                                            sub_104d7e9dc();
                                            sub_104e07020();
                                    }
                                    decomp_var_2e8 = decomp_var_2e8 + 0x1;
                                    r8 = r27 + decomp_var_2fc;
                                    decomp_var_2fc = r8;
                                    r24 = r24 + 0x1;
                                    if (r24 < r26) {
                                            continue;
                                    }
                                    temp_0 = 0x0;
                                    break;
                            }
                            else {
                                    r27 = sub_104d6e774(r24 & 0xffff);
                                    r8 = *(int8_t *)byte_106c67660;
                                    if (*(int8_t *)byte_106c67660 == 0x1) {
                                            if (r27 < 0x40) {
                                                    if ((decomp_var_338 & 0x1) == 0x0) {
                                                            r0 = sub_104d6f350(r19, &decomp_var_198, r20[0x6]);
                                                            if (r0 == 0x0) {
                                                                    decomp_var_338 = 0x1;
                                                                    if (sub_104d6e650(r24 & 0xffff, r19[0x8], decomp_var_2e0[0x1]) != 0x0) {
                                                                            if (*(int8_t *)byte_106c67660 == 0x1) {
                                                                                    decomp_var_e0 = *(int32_t *)r20;
                                                                                    r0 = sub_104d6f2fc(r19 + 0x58, &decomp_var_e0);
                                                                                    r8 = r19[0xb];
                                                                                    r8 = r8 + r19[0x1a] * 0x20;
                                                                                    if (r8 != r0) {
                                                                                            r8 = r0[0x18];
                                                                                            if (r8 == 0x1) {
                                                                                                    asm { ccmp       w8, #0x5, #0x0, hs };
                                                                                                    if (!asm { ccmp       w8, #0x5, #0x0, hs }) {
                                                                                                            r0 = *qword_106c488c0;
                                                                                                            r1 = *qword_106c488c8;
                                                                                                            decomp_var_e0 = *(int32_t *)r20;
                                                                                                            r0 = sub_1029fea60(r0, r1, 0x5, "[DFLog::ISRIncomingOutgoingAttributes] {} - InstanceStateSerializationManager::deserializeAttributeSchema: {}, - {} - ts: {}", 0x7c, 0x1112, &decomp_var_e0, 0x1);
                                                                                                    }
                                                                                                    r0 = sub_104d72b94(r19, decomp_var_2f0, decomp_var_198, r27, &decomp_var_1f8);
                                                                                                    r8 = r0 + decomp_var_328;
                                                                                                    decomp_var_328 = r8;
                                                                                                    r24 = r24 + 0x1;
                                                                                                    if (r24 < r26) {
                                                                                                            continue;
                                                                                                    }
                                                                                                    temp_0 = 0x0;
                                                                                                    break;
                                                                                            }
                                                                                            else {
                                                                                                    temp_0 = 0x4;
                                                                                                    break;
                                                                                            }
                                                                                    }
                                                                                    else {
                                                                                            temp_0 = 0x4;
                                                                                            break;
                                                                                    }
                                                                            }
                                                                            else {
                                                                                    asm { ccmp       w8, #0x5, #0x0, hs };
                                                                                    if (!asm { ccmp       w8, #0x5, #0x0, hs }) {
                                                                                            r0 = *qword_106c488c0;
                                                                                            r1 = *qword_106c488c8;
                                                                                            decomp_var_e0 = *(int32_t *)r20;
                                                                                            r0 = sub_1029fea60(r0, r1, 0x5, "[DFLog::ISRIncomingOutgoingAttributes] {} - InstanceStateSerializationManager::deserializeAttributeSchema: {}, - {} - ts: {}", 0x7c, 0x1112, &decomp_var_e0, 0x1);
                                                                                    }
                                                                                    r0 = sub_104d72b94(r19, decomp_var_2f0, decomp_var_198, r27, &decomp_var_1f8);
                                                                                    r8 = r0 + decomp_var_328;
                                                                                    decomp_var_328 = r8;
                                                                                    r24 = r24 + 0x1;
                                                                                    if (r24 < r26) {
                                                                                            continue;
                                                                                    }
                                                                                    temp_0 = 0x0;
                                                                                    break;
                                                                            }
                                                                    }
                                                                    else {
                                                                            if (*(int8_t *)byte_106c67618 == 0x1) {
                                                                                    r2 = r27;
                                                                                    r0 = sub_104d73804(r19, &decomp_var_198, r2, r20[0x6]);
                                                                            }
                                                                            else {
                                                                                    r2 = r27;
                                                                                    r0 = sub_104d7396c(r19, &decomp_var_198, r2);
                                                                            }
                                                                            r1 = decomp_var_340;
                                                                            r21 = decomp_var_168;
                                                                            if (r1 == 0x0) {
                                                                                    r22 = 0x1;
                                                                            }
                                                                            else {
                                                                                    r22 = r21;
                                                                            }
                                                                            if ((r22 & 0x1) != 0x0) {
                                                                                    if (r21 != 0x0) {
                                                                                            decomp_var_240 = decomp_var_190;
                                                                                            decomp_var_230 = decomp_var_180;
                                                                                            decomp_var_180 = 0x0;
                                                                                            decomp_var_190 = 0x0;
                                                                                            decomp_var_228 = decomp_var_178;
                                                                                    }
                                                                                    else {
                                                                                            r0 = sub_100004130(&decomp_var_240, "", r2);
                                                                                            decomp_var_228 = 0xffff0001;
                                                                                            decomp_var_220 = 0x0;
                                                                                    }
                                                                                    if ((*qword_106c488c0 & 0xff) >= 0x6 && (*qword_106c488c0 >> 0x8 & 0xff) >= 0x5) {
                                                                                            r8 = qword_106c488c0;
                                                                                            if (decomp_var_350 != 0x0) {
                                                                                                    r8 = 0x1;
                                                                                            }
                                                                                            r9 = *(int32_t *)r20;
                                                                                            r10 = decomp_var_19c;
                                                                                            r12 = decomp_var_240;
                                                                                            r11 = &decomp_var_240;
                                                                                            if (sign_extend_64(decomp_var_229) < 0x0) {
                                                                                                    r11 = r12;
                                                                                            }
                                                                                            r0 = *qword_106c488c0;
                                                                                            decomp_var_e0 = r9;
                                                                                            r0 = sub_1029fea60(r0, *qword_106c488c8, 0x5, "[DFLog::ISRIncomingOutgoingAttributes] {} - InstanceStateSerializationManager::deserializeAttributeValue: {}, - {} {} - type: {} - ts: {} - into changes container: {}", 0xa6, 0x711c112, &decomp_var_e0, 0x1);
                                                                                    }
                                                                                    r28 = 0x0;
                                                                                    if (*(int8_t *)byte_106c669c8 == 0x1 && r23 != 0x0) {
                                                                                            r9 = decomp_var_240;
                                                                                            r8 = &decomp_var_240;
                                                                                            r28 = &decomp_var_e0;
                                                                                            r0 = sub_104d16830(&decomp_var_e0, r23, decomp_var_2f0, 0x1, &decomp_var_1a0, 0x2);
                                                                                    }
                                                                                    decomp_var_280 = r28;
                                                                                    r0 = sub_1000ce7bc(&decomp_var_260, &decomp_var_280);
                                                                                    sub_10002aa44(&decomp_var_280);
                                                                                    r28 = sub_104e06ec8(0xc8);
                                                                                    sub_104e07174();
                                                                                    decomp_var_288 = r28;
                                                                                    r28[0x4] = decomp_var_1a0;
                                                                                    r0 = sub_100005858(r28 + 0x30, &decomp_var_1b0);
                                                                                    r28 = decomp_var_288;
                                                                                    r28[0x5] = r20[0x3];
                                                                                    r28[0x25] = r27;
                                                                                    r27 = r28;
                                                                                    if ((sign_extend_64(r28[0x67]) & 0xffffffff80000000) != 0x0) {
                                                                                            loc_1029f6b00();
                                                                                            r27 = decomp_var_288;
                                                                                    }
                                                                                    r28[0x5] = decomp_var_240;
                                                                                    r28[0xc] = decomp_var_230;
                                                                                    decomp_var_229 = 0x0;
                                                                                    decomp_var_240 = 0x0;
                                                                                    if ((decomp_var_228 & 0x1) == 0x0) {
                                                                                            sub_104d73a6c(&decomp_var_240 + 0x18, r27 + 0x68, decomp_var_1b0, 0xffff);
                                                                                            r9 = decomp_var_378 & 0xffffffff00000000;
                                                                                            decomp_var_378 = r9;
                                                                                            r0 = sub_104d71b14(decomp_var_2f0, decomp_var_228, decomp_var_220, &decomp_var_2b8, decomp_var_310, r19[0x9], r20, decomp_var_308, r23, *(int16_t *)decomp_var_2e0, r9, 0x0, 0x0);
                                                                                            r27 = r0;
                                                                                            sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_288);
                                                                                            decomp_var_2e8 = decomp_var_2e8 + 0x1;
                                                                                            decomp_var_328 = r27 + decomp_var_328;
                                                                                            r27 = decomp_var_288;
                                                                                    }
                                                                                    if (r27 != 0x0) {
                                                                                            sub_104d7e9dc(r27);
                                                                                            sub_104e07020();
                                                                                    }
                                                                                    r0 = sub_1010d4a60(&decomp_var_260);
                                                                                    r8 = sign_extend_64(decomp_var_229);
                                                                                    if ((r8 & 0xffffffff80000000) != 0x0) {
                                                                                            loc_1029f6b00();
                                                                                    }
                                                                            }
                                                                            else {
                                                                                    sub_1015fe774(decomp_var_2f0, r1);
                                                                                    r8 = 0x1;
                                                                                    decomp_var_344 = 0x1;
                                                                            }
                                                                            if (r21 != 0x0) {
                                                                                    r8 = sign_extend_64(decomp_var_179);
                                                                                    if ((r8 & 0xffffffff80000000) != 0x0) {
                                                                                            loc_1029f6b00();
                                                                                    }
                                                                            }
                                                                            r21 = &decomp_var_1e0;
                                                                            if ((r22 & 0x1) != 0x0) {
                                                                                    r24 = r24 + 0x1;
                                                                                    if (r24 < r26) {
                                                                                            continue;
                                                                                    }
                                                                                    temp_0 = 0x0;
                                                                                    break;
                                                                            }
                                                                            else {
                                                                                    temp_0 = 0x0;
                                                                                    break;
                                                                            }
                                                                    }
                                                            }
                                                            else {
                                                                    r1 = decomp_var_340;
                                                                    if (r1 != 0x0) {
                                                                            sub_1015fe774(decomp_var_2f0, r1);
                                                                            r8 = 0x1;
                                                                            decomp_var_344 = 0x1;
                                                                            temp_0 = 0x1;
                                                                    }
                                                                    else {
                                                                            r8 = "Cannot skip stale ISR attributes without a payload boundary";
                                                                            temp_0 = 0x5;
                                                                    }
                                                                    break;
                                                            }
                                                    }
                                                    else {
                                                            decomp_var_338 = 0x1;
                                                            if (sub_104d6e650(r24 & 0xffff, r19[0x8], decomp_var_2e0[0x1]) != 0x0) {
                                                                    if (*(int8_t *)byte_106c67660 == 0x1) {
                                                                            decomp_var_e0 = *(int32_t *)r20;
                                                                            r0 = sub_104d6f2fc(r19 + 0x58, &decomp_var_e0);
                                                                            r8 = r19[0xb];
                                                                            r8 = r8 + r19[0x1a] * 0x20;
                                                                            if (r8 != r0) {
                                                                                    r8 = r0[0x18];
                                                                                    if (r8 == 0x1) {
                                                                                            asm { ccmp       w8, #0x5, #0x0, hs };
                                                                                            if (!asm { ccmp       w8, #0x5, #0x0, hs }) {
                                                                                                    r0 = *qword_106c488c0;
                                                                                                    r1 = *qword_106c488c8;
                                                                                                    decomp_var_e0 = *(int32_t *)r20;
                                                                                                    r0 = sub_1029fea60(r0, r1, 0x5, "[DFLog::ISRIncomingOutgoingAttributes] {} - InstanceStateSerializationManager::deserializeAttributeSchema: {}, - {} - ts: {}", 0x7c, 0x1112, &decomp_var_e0, 0x1);
                                                                                            }
                                                                                            r0 = sub_104d72b94(r19, decomp_var_2f0, decomp_var_198, r27, &decomp_var_1f8);
                                                                                            r8 = r0 + decomp_var_328;
                                                                                            decomp_var_328 = r8;
                                                                                            r24 = r24 + 0x1;
                                                                                            if (r24 < r26) {
                                                                                                    continue;
                                                                                            }
                                                                                            temp_0 = 0x0;
                                                                                            break;
                                                                                    }
                                                                                    else {
                                                                                            temp_0 = 0x4;
                                                                                            break;
                                                                                    }
                                                                            }
                                                                            else {
                                                                                    temp_0 = 0x4;
                                                                                    break;
                                                                            }
                                                                    }
                                                                    else {
                                                                            asm { ccmp       w8, #0x5, #0x0, hs };
                                                                            if (!asm { ccmp       w8, #0x5, #0x0, hs }) {
                                                                                    r0 = *qword_106c488c0;
                                                                                    r1 = *qword_106c488c8;
                                                                                    decomp_var_e0 = *(int32_t *)r20;
                                                                                    r0 = sub_1029fea60(r0, r1, 0x5, "[DFLog::ISRIncomingOutgoingAttributes] {} - InstanceStateSerializationManager::deserializeAttributeSchema: {}, - {} - ts: {}", 0x7c, 0x1112, &decomp_var_e0, 0x1);
                                                                            }
                                                                            r0 = sub_104d72b94(r19, decomp_var_2f0, decomp_var_198, r27, &decomp_var_1f8);
                                                                            r8 = r0 + decomp_var_328;
                                                                            decomp_var_328 = r8;
                                                                            r24 = r24 + 0x1;
                                                                            if (r24 < r26) {
                                                                                    continue;
                                                                            }
                                                                            temp_0 = 0x0;
                                                                            break;
                                                                    }
                                                            }
                                                            else {
                                                                    if (*(int8_t *)byte_106c67618 == 0x1) {
                                                                            r2 = r27;
                                                                            r0 = sub_104d73804(r19, &decomp_var_198, r2, r20[0x6]);
                                                                    }
                                                                    else {
                                                                            r2 = r27;
                                                                            r0 = sub_104d7396c(r19, &decomp_var_198, r2);
                                                                    }
                                                                    r1 = decomp_var_340;
                                                                    r21 = decomp_var_168;
                                                                    if (r1 == 0x0) {
                                                                            r22 = 0x1;
                                                                    }
                                                                    else {
                                                                            r22 = r21;
                                                                    }
                                                                    if ((r22 & 0x1) != 0x0) {
                                                                            if (r21 != 0x0) {
                                                                                    decomp_var_240 = decomp_var_190;
                                                                                    decomp_var_230 = decomp_var_180;
                                                                                    decomp_var_180 = 0x0;
                                                                                    decomp_var_190 = 0x0;
                                                                                    decomp_var_228 = decomp_var_178;
                                                                            }
                                                                            else {
                                                                                    r0 = sub_100004130(&decomp_var_240, "", r2);
                                                                                    decomp_var_228 = 0xffff0001;
                                                                                    decomp_var_220 = 0x0;
                                                                            }
                                                                            if ((*qword_106c488c0 & 0xff) >= 0x6 && (*qword_106c488c0 >> 0x8 & 0xff) >= 0x5) {
                                                                                    r8 = qword_106c488c0;
                                                                                    if (decomp_var_350 != 0x0) {
                                                                                            r8 = 0x1;
                                                                                    }
                                                                                    r9 = *(int32_t *)r20;
                                                                                    r10 = decomp_var_19c;
                                                                                    r12 = decomp_var_240;
                                                                                    r11 = &decomp_var_240;
                                                                                    if (sign_extend_64(decomp_var_229) < 0x0) {
                                                                                            r11 = r12;
                                                                                    }
                                                                                    r1 = *qword_106c488c8;
                                                                                    r0 = *qword_106c488c0;
                                                                                    decomp_var_e0 = r9;
                                                                                    r0 = sub_1029fea60(r0, r1, 0x5, "[DFLog::ISRIncomingOutgoingAttributes] {} - InstanceStateSerializationManager::deserializeAttributeValue: {}, - {} {} - type: {} - ts: {} - into changes container: {}", 0xa6, 0x711c112, &decomp_var_e0, 0x1);
                                                                            }
                                                                            r28 = 0x0;
                                                                            if (*(int8_t *)byte_106c669c8 == 0x1 && r23 != 0x0) {
                                                                                    r9 = decomp_var_240;
                                                                                    r8 = &decomp_var_240;
                                                                                    r28 = &decomp_var_e0;
                                                                                    r0 = sub_104d16830(&decomp_var_e0, r23, decomp_var_2f0, 0x1, &decomp_var_1a0, 0x2);
                                                                            }
                                                                            decomp_var_280 = r28;
                                                                            r0 = sub_1000ce7bc(&decomp_var_260, &decomp_var_280);
                                                                            sub_10002aa44(&decomp_var_280);
                                                                            r28 = sub_104e06ec8(0xc8);
                                                                            sub_104e07174();
                                                                            decomp_var_288 = r28;
                                                                            r28[0x4] = decomp_var_1a0;
                                                                            r0 = sub_100005858(r28 + 0x30, &decomp_var_1b0);
                                                                            r28 = decomp_var_288;
                                                                            r28[0x5] = r20[0x3];
                                                                            r28[0x25] = r27;
                                                                            r27 = r28;
                                                                            if ((sign_extend_64(r28[0x67]) & 0xffffffff80000000) != 0x0) {
                                                                                    loc_1029f6b00();
                                                                                    r27 = decomp_var_288;
                                                                            }
                                                                            r28[0x5] = decomp_var_240;
                                                                            r28[0xc] = decomp_var_230;
                                                                            decomp_var_229 = 0x0;
                                                                            decomp_var_240 = 0x0;
                                                                            if ((decomp_var_228 & 0x1) == 0x0) {
                                                                                    sub_104d73a6c(&decomp_var_240 + 0x18, r27 + 0x68, decomp_var_1b0, 0xffff);
                                                                                    r9 = decomp_var_378 & 0xffffffff00000000;
                                                                                    decomp_var_378 = r9;
                                                                                    r0 = sub_104d71b14(decomp_var_2f0, decomp_var_228, decomp_var_220, &decomp_var_2b8, decomp_var_310, r19[0x9], r20, decomp_var_308, r23, *(int16_t *)decomp_var_2e0, r9, 0x0, 0x0);
                                                                                    r27 = r0;
                                                                                    sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_288);
                                                                                    decomp_var_2e8 = decomp_var_2e8 + 0x1;
                                                                                    decomp_var_328 = r27 + decomp_var_328;
                                                                                    r27 = decomp_var_288;
                                                                            }
                                                                            if (r27 != 0x0) {
                                                                                    sub_104d7e9dc(r27);
                                                                                    sub_104e07020();
                                                                            }
                                                                            r0 = sub_1010d4a60(&decomp_var_260);
                                                                            r8 = sign_extend_64(decomp_var_229);
                                                                            if ((r8 & 0xffffffff80000000) != 0x0) {
                                                                                    loc_1029f6b00();
                                                                            }
                                                                    }
                                                                    else {
                                                                            sub_1015fe774(decomp_var_2f0, r1);
                                                                            r8 = 0x1;
                                                                            decomp_var_344 = 0x1;
                                                                    }
                                                                    if (r21 != 0x0) {
                                                                            r8 = sign_extend_64(decomp_var_179);
                                                                            if ((r8 & 0xffffffff80000000) != 0x0) {
                                                                                    loc_1029f6b00();
                                                                            }
                                                                    }
                                                                    r21 = &decomp_var_1e0;
                                                                    if ((r22 & 0x1) != 0x0) {
                                                                            r24 = r24 + 0x1;
                                                                            if (r24 < r26) {
                                                                                    continue;
                                                                            }
                                                                            temp_0 = 0x0;
                                                                            break;
                                                                    }
                                                                    else {
                                                                            temp_0 = 0x0;
                                                                            break;
                                                                    }
                                                            }
                                                    }
                                            }
                                            else {
                                                    temp_0 = 0x6;
                                                    break;
                                            }
                                    }
                                    else {
                                            if (sub_104d6e650(r24 & 0xffff, r19[0x8], decomp_var_2e0[0x1]) != 0x0) {
                                                    if (*(int8_t *)byte_106c67660 == 0x1) {
                                                            decomp_var_e0 = *(int32_t *)r20;
                                                            r0 = sub_104d6f2fc(r19 + 0x58, &decomp_var_e0);
                                                            r8 = r19[0xb];
                                                            r8 = r8 + r19[0x1a] * 0x20;
                                                            if (r8 != r0) {
                                                                    r8 = r0[0x18];
                                                                    if (r8 == 0x1) {
                                                                            asm { ccmp       w8, #0x5, #0x0, hs };
                                                                            if (!asm { ccmp       w8, #0x5, #0x0, hs }) {
                                                                                    r0 = *qword_106c488c0;
                                                                                    r1 = *qword_106c488c8;
                                                                                    decomp_var_e0 = *(int32_t *)r20;
                                                                                    r0 = sub_1029fea60(r0, r1, 0x5, "[DFLog::ISRIncomingOutgoingAttributes] {} - InstanceStateSerializationManager::deserializeAttributeSchema: {}, - {} - ts: {}", 0x7c, 0x1112, &decomp_var_e0, 0x1);
                                                                            }
                                                                            r0 = sub_104d72b94(r19, decomp_var_2f0, decomp_var_198, r27, &decomp_var_1f8);
                                                                            r8 = r0 + decomp_var_328;
                                                                            decomp_var_328 = r8;
                                                                            r24 = r24 + 0x1;
                                                                            if (r24 < r26) {
                                                                                    continue;
                                                                            }
                                                                            temp_0 = 0x0;
                                                                            break;
                                                                    }
                                                                    else {
                                                                            temp_0 = 0x4;
                                                                            break;
                                                                    }
                                                            }
                                                            else {
                                                                    temp_0 = 0x4;
                                                                    break;
                                                            }
                                                    }
                                                    else {
                                                            asm { ccmp       w8, #0x5, #0x0, hs };
                                                            if (!asm { ccmp       w8, #0x5, #0x0, hs }) {
                                                                    r0 = *qword_106c488c0;
                                                                    r1 = *qword_106c488c8;
                                                                    decomp_var_e0 = *(int32_t *)r20;
                                                                    r0 = sub_1029fea60(r0, r1, 0x5, "[DFLog::ISRIncomingOutgoingAttributes] {} - InstanceStateSerializationManager::deserializeAttributeSchema: {}, - {} - ts: {}", 0x7c, 0x1112, &decomp_var_e0, 0x1);
                                                            }
                                                            r0 = sub_104d72b94(r19, decomp_var_2f0, decomp_var_198, r27, &decomp_var_1f8);
                                                            r8 = r0 + decomp_var_328;
                                                            decomp_var_328 = r8;
                                                            r24 = r24 + 0x1;
                                                            if (r24 < r26) {
                                                                    continue;
                                                            }
                                                            temp_0 = 0x0;
                                                            break;
                                                    }
                                            }
                                            else {
                                                    if (*(int8_t *)byte_106c67618 == 0x1) {
                                                            r2 = r27;
                                                            r0 = sub_104d73804(r19, &decomp_var_198, r2, r20[0x6]);
                                                    }
                                                    else {
                                                            r2 = r27;
                                                            r0 = sub_104d7396c(r19, &decomp_var_198, r2);
                                                    }
                                                    r1 = decomp_var_340;
                                                    r21 = decomp_var_168;
                                                    if (r1 == 0x0) {
                                                            r22 = 0x1;
                                                    }
                                                    else {
                                                            r22 = r21;
                                                    }
                                                    if ((r22 & 0x1) != 0x0) {
                                                            if (r21 != 0x0) {
                                                                    decomp_var_240 = decomp_var_190;
                                                                    decomp_var_230 = decomp_var_180;
                                                                    decomp_var_180 = 0x0;
                                                                    decomp_var_190 = 0x0;
                                                                    decomp_var_228 = decomp_var_178;
                                                            }
                                                            else {
                                                                    r0 = sub_100004130(&decomp_var_240, "", r2);
                                                                    decomp_var_228 = 0xffff0001;
                                                                    decomp_var_220 = 0x0;
                                                            }
                                                            if ((*qword_106c488c0 & 0xff) >= 0x6 && (*qword_106c488c0 >> 0x8 & 0xff) >= 0x5) {
                                                                    r8 = qword_106c488c0;
                                                                    if (decomp_var_350 != 0x0) {
                                                                            r8 = 0x1;
                                                                    }
                                                                    r9 = *(int32_t *)r20;
                                                                    r10 = decomp_var_19c;
                                                                    r12 = decomp_var_240;
                                                                    r11 = &decomp_var_240;
                                                                    if (sign_extend_64(decomp_var_229) < 0x0) {
                                                                            r11 = r12;
                                                                    }
                                                                    r0 = *qword_106c488c0;
                                                                    decomp_var_e0 = r9;
                                                                    r0 = sub_1029fea60(r0, *qword_106c488c8, 0x5, "[DFLog::ISRIncomingOutgoingAttributes] {} - InstanceStateSerializationManager::deserializeAttributeValue: {}, - {} {} - type: {} - ts: {} - into changes container: {}", 0xa6, 0x711c112, &decomp_var_e0, 0x1);
                                                            }
                                                            r28 = 0x0;
                                                            if (*(int8_t *)byte_106c669c8 == 0x1 && r23 != 0x0) {
                                                                    r9 = decomp_var_240;
                                                                    r8 = &decomp_var_240;
                                                                    r28 = &decomp_var_e0;
                                                                    r0 = sub_104d16830(&decomp_var_e0, r23, decomp_var_2f0, 0x1, &decomp_var_1a0, 0x2);
                                                            }
                                                            decomp_var_280 = r28;
                                                            r0 = sub_1000ce7bc(&decomp_var_260, &decomp_var_280);
                                                            sub_10002aa44(&decomp_var_280);
                                                            r28 = sub_104e06ec8(0xc8);
                                                            sub_104e07174();
                                                            decomp_var_288 = r28;
                                                            r28[0x4] = decomp_var_1a0;
                                                            r0 = sub_100005858(r28 + 0x30, &decomp_var_1b0);
                                                            r28 = decomp_var_288;
                                                            r28[0x5] = r20[0x3];
                                                            r28[0x25] = r27;
                                                            r27 = r28;
                                                            if ((sign_extend_64(r28[0x67]) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                                    r27 = decomp_var_288;
                                                            }
                                                            r28[0x5] = decomp_var_240;
                                                            r28[0xc] = decomp_var_230;
                                                            decomp_var_229 = 0x0;
                                                            decomp_var_240 = 0x0;
                                                            if ((decomp_var_228 & 0x1) == 0x0) {
                                                                    sub_104d73a6c(&decomp_var_240 + 0x18, r27 + 0x68, decomp_var_1b0, 0xffff);
                                                                    r9 = decomp_var_378 & 0xffffffff00000000;
                                                                    decomp_var_378 = r9;
                                                                    r0 = sub_104d71b14(decomp_var_2f0, decomp_var_228, decomp_var_220, &decomp_var_2b8, decomp_var_310, r19[0x9], r20, decomp_var_308, r23, *(int16_t *)decomp_var_2e0, r9, 0x0, 0x0);
                                                                    r27 = r0;
                                                                    sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_288);
                                                                    decomp_var_2e8 = decomp_var_2e8 + 0x1;
                                                                    decomp_var_328 = r27 + decomp_var_328;
                                                                    r27 = decomp_var_288;
                                                            }
                                                            if (r27 != 0x0) {
                                                                    sub_104d7e9dc(r27);
                                                                    sub_104e07020();
                                                            }
                                                            r0 = sub_1010d4a60(&decomp_var_260);
                                                            r8 = sign_extend_64(decomp_var_229);
                                                            if ((r8 & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                                    else {
                                                            sub_1015fe774(decomp_var_2f0, r1);
                                                            r8 = 0x1;
                                                            decomp_var_344 = 0x1;
                                                    }
                                                    if (r21 != 0x0) {
                                                            r8 = sign_extend_64(decomp_var_179);
                                                            if ((r8 & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                                    r21 = &decomp_var_1e0;
                                                    if ((r22 & 0x1) != 0x0) {
                                                            r24 = r24 + 0x1;
                                                            if (r24 < r26) {
                                                                    continue;
                                                            }
                                                            temp_0 = 0x0;
                                                            break;
                                                    }
                                                    else {
                                                            temp_0 = 0x0;
                                                            break;
                                                    }
                                            }
                                    }
                            }
                    }
                    else {
                            r24 = r24 + 0x1;
                            if (r24 < r26) {
                                    continue;
                            }
                            temp_0 = 0x0;
                            break;
                    }
            }
            else {
                    temp_0 = 0x3;
                    break;
            }
    }
    else {
            temp_0 = 0x3;
            break;
    }
    goto .l10;

.l12:
    if (r24 <= 0xff) {
            if (r26 >= zero_extend_64(r24)) {
                    r8 = *(r21 + (r24 >> 0x3 & 0x1ffffffffffffff8));
                    r8 = r8 >> r24;
                    if ((r8 & 0x1) != 0x0) {
                            r1 = r19[0x8];
                            r8 = decomp_var_2e0[0x1];
                            if (r24 < decomp_var_318) {
                                    r0 = sub_104d6e4e0(r1, r8, r24 & 0xffff);
                                    r27 = r0;
                                    if (r0 == 0x0) {
                                            sub_1029fe0a0("Failed deserializing during ISR Receive, cannot continue");
                                    }
                                    r28 = sub_104e06ec8(0xc8);
                                    sub_104e07174();
                                    decomp_var_240 = r28;
                                    r28[0x4] = decomp_var_1a0;
                                    r0 = sub_100005858(r28 + 0x30, &decomp_var_1b0);
                                    r21 = 0x0;
                                    decomp_var_240[0x5] = r20[0x3];
                                    decomp_var_240[0x24] = *(int16_t *)r27;
                                    r8 = r27[0x5];
                                    decomp_var_240[0x8] = r8;
                                    decomp_var_e0 = r27 + 0x8;
                                    if (*(int8_t *)byte_106c669c8 == 0x1 && r23 != 0x0) {
                                            if (r8 != 0x0) {
                                                    r6 = r8[0x1];
                                            }
                                            r21 = &decomp_var_190;
                                            r0 = sub_104d16830(&decomp_var_190, r23, decomp_var_2f0, 0x1, &decomp_var_1a0, 0x1);
                                    }
                                    decomp_var_218 = r21;
                                    r0 = sub_1000ce7bc(&decomp_var_2b8, &decomp_var_218);
                                    sub_10002aa44(&decomp_var_218);
                                    r1 = r27[0x1];
                                    r8 = r27[0x5];
                                    if ((r1 & 0xff00) == 0x3900) {
                                            r9 = decomp_var_320;
                                    }
                                    else {
                                            if (r8 != decomp_var_358 && r8 != decomp_var_360) {
                                                    if (r8 != decomp_var_368) {
                                                            r9 = 0x0;
                                                    }
                                                    else {
                                                            r9 = decomp_var_320;
                                                    }
                                            }
                                            else {
                                                    r9 = decomp_var_320;
                                            }
                                    }
                                    r21 = &decomp_var_1e0;
                                    r25 = r25 & 0xffffffff00000000 | *(int16_t *)r27 | 0x10000;
                                    r27 = sub_104d71b14(decomp_var_2f0);
                                    sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_240);
                                    r0 = sub_1010d4a60(&decomp_var_2b8);
                                    r0 = decomp_var_240;
                                    decomp_var_240 = 0x0;
                                    if (r0 != 0x0) {
                                            sub_104d7e9dc();
                                            sub_104e07020();
                                    }
                                    decomp_var_2e8 = decomp_var_2e8 + 0x1;
                                    r8 = r27 + decomp_var_2fc;
                                    decomp_var_2fc = r8;
                                    r24 = r24 + 0x1;
                                    if (r24 < r26) {
                                            continue;
                                    }
                                    temp_0 = 0x0;
                                    break;
                            }
                            else {
                                    r27 = sub_104d6e774(r24 & 0xffff);
                                    r8 = *(int8_t *)byte_106c67660;
                                    if (*(int8_t *)byte_106c67660 == 0x1) {
                                            if (r27 < 0x40) {
                                                    if ((decomp_var_338 & 0x1) == 0x0) {
                                                            r0 = sub_104d6f350(r19, &decomp_var_198, r20[0x6]);
                                                            if (r0 == 0x0) {
                                                                    decomp_var_338 = 0x1;
                                                                    if (sub_104d6e650(r24 & 0xffff, r19[0x8], decomp_var_2e0[0x1]) != 0x0) {
                                                                            if (*(int8_t *)byte_106c67660 == 0x1) {
                                                                                    decomp_var_e0 = *(int32_t *)r20;
                                                                                    r0 = sub_104d6f2fc(r19 + 0x58, &decomp_var_e0);
                                                                                    r8 = r19[0xb];
                                                                                    r8 = r8 + r19[0x1a] * 0x20;
                                                                                    if (r8 != r0) {
                                                                                            r8 = r0[0x18];
                                                                                            if (r8 == 0x1) {
                                                                                                    asm { ccmp       w8, #0x5, #0x0, hs };
                                                                                                    if (!asm { ccmp       w8, #0x5, #0x0, hs }) {
                                                                                                            r0 = *qword_106c488c0;
                                                                                                            r1 = *qword_106c488c8;
                                                                                                            decomp_var_e0 = *(int32_t *)r20;
                                                                                                            r0 = sub_1029fea60(r0, r1, 0x5, "[DFLog::ISRIncomingOutgoingAttributes] {} - InstanceStateSerializationManager::deserializeAttributeSchema: {}, - {} - ts: {}", 0x7c, 0x1112, &decomp_var_e0, 0x1);
                                                                                                    }
                                                                                                    r0 = sub_104d72b94(r19, decomp_var_2f0, decomp_var_198, r27, &decomp_var_1f8);
                                                                                                    r8 = r0 + decomp_var_328;
                                                                                                    decomp_var_328 = r8;
                                                                                                    r24 = r24 + 0x1;
                                                                                                    if (r24 < r26) {
                                                                                                            continue;
                                                                                                    }
                                                                                                    temp_0 = 0x0;
                                                                                                    break;
                                                                                            }
                                                                                            else {
                                                                                                    temp_0 = 0x4;
                                                                                                    break;
                                                                                            }
                                                                                    }
                                                                                    else {
                                                                                            temp_0 = 0x4;
                                                                                            break;
                                                                                    }
                                                                            }
                                                                            else {
                                                                                    asm { ccmp       w8, #0x5, #0x0, hs };
                                                                                    if (!asm { ccmp       w8, #0x5, #0x0, hs }) {
                                                                                            r0 = *qword_106c488c0;
                                                                                            r1 = *qword_106c488c8;
                                                                                            decomp_var_e0 = *(int32_t *)r20;
                                                                                            r0 = sub_1029fea60(r0, r1, 0x5, "[DFLog::ISRIncomingOutgoingAttributes] {} - InstanceStateSerializationManager::deserializeAttributeSchema: {}, - {} - ts: {}", 0x7c, 0x1112, &decomp_var_e0, 0x1);
                                                                                    }
                                                                                    r0 = sub_104d72b94(r19, decomp_var_2f0, decomp_var_198, r27, &decomp_var_1f8);
                                                                                    r8 = r0 + decomp_var_328;
                                                                                    decomp_var_328 = r8;
                                                                                    r24 = r24 + 0x1;
                                                                                    if (r24 < r26) {
                                                                                            continue;
                                                                                    }
                                                                                    temp_0 = 0x0;
                                                                                    break;
                                                                            }
                                                                    }
                                                                    else {
                                                                            if (*(int8_t *)byte_106c67618 == 0x1) {
                                                                                    r2 = r27;
                                                                                    r0 = sub_104d73804(r19, &decomp_var_198, r2, r20[0x6]);
                                                                            }
                                                                            else {
                                                                                    r2 = r27;
                                                                                    r0 = sub_104d7396c(r19, &decomp_var_198, r2);
                                                                            }
                                                                            r1 = decomp_var_340;
                                                                            r21 = decomp_var_168;
                                                                            if (r1 == 0x0) {
                                                                                    r22 = 0x1;
                                                                            }
                                                                            else {
                                                                                    r22 = r21;
                                                                            }
                                                                            if ((r22 & 0x1) != 0x0) {
                                                                                    if (r21 != 0x0) {
                                                                                            decomp_var_240 = decomp_var_190;
                                                                                            decomp_var_230 = decomp_var_180;
                                                                                            decomp_var_180 = 0x0;
                                                                                            decomp_var_190 = 0x0;
                                                                                            decomp_var_228 = decomp_var_178;
                                                                                    }
                                                                                    else {
                                                                                            r0 = sub_100004130(&decomp_var_240, "", r2);
                                                                                            decomp_var_228 = 0xffff0001;
                                                                                            decomp_var_220 = 0x0;
                                                                                    }
                                                                                    if ((*qword_106c488c0 & 0xff) >= 0x6 && (*qword_106c488c0 >> 0x8 & 0xff) >= 0x5) {
                                                                                            r8 = qword_106c488c0;
                                                                                            if (decomp_var_350 != 0x0) {
                                                                                                    r8 = 0x1;
                                                                                            }
                                                                                            r9 = *(int32_t *)r20;
                                                                                            r10 = decomp_var_19c;
                                                                                            r12 = decomp_var_240;
                                                                                            r11 = &decomp_var_240;
                                                                                            if (sign_extend_64(decomp_var_229) < 0x0) {
                                                                                                    r11 = r12;
                                                                                            }
                                                                                            r1 = *qword_106c488c8;
                                                                                            r0 = *qword_106c488c0;
                                                                                            decomp_var_e0 = r9;
                                                                                            r0 = sub_1029fea60(r0, r1, 0x5, "[DFLog::ISRIncomingOutgoingAttributes] {} - InstanceStateSerializationManager::deserializeAttributeValue: {}, - {} {} - type: {} - ts: {} - into changes container: {}", 0xa6, 0x711c112, &decomp_var_e0, 0x1);
                                                                                    }
                                                                                    r28 = 0x0;
                                                                                    if (*(int8_t *)byte_106c669c8 == 0x1 && r23 != 0x0) {
                                                                                            r9 = decomp_var_240;
                                                                                            r8 = &decomp_var_240;
                                                                                            r28 = &decomp_var_e0;
                                                                                            r0 = sub_104d16830(&decomp_var_e0, r23, decomp_var_2f0, 0x1, &decomp_var_1a0, 0x2);
                                                                                    }
                                                                                    decomp_var_280 = r28;
                                                                                    r0 = sub_1000ce7bc(&decomp_var_260, &decomp_var_280);
                                                                                    sub_10002aa44(&decomp_var_280);
                                                                                    r28 = sub_104e06ec8(0xc8);
                                                                                    sub_104e07174();
                                                                                    decomp_var_288 = r28;
                                                                                    r28[0x4] = decomp_var_1a0;
                                                                                    r0 = sub_100005858(r28 + 0x30, &decomp_var_1b0);
                                                                                    r28 = decomp_var_288;
                                                                                    r28[0x5] = r20[0x3];
                                                                                    r28[0x25] = r27;
                                                                                    r27 = r28;
                                                                                    if ((sign_extend_64(r28[0x67]) & 0xffffffff80000000) != 0x0) {
                                                                                            loc_1029f6b00();
                                                                                            r27 = decomp_var_288;
                                                                                    }
                                                                                    r28[0x5] = decomp_var_240;
                                                                                    r28[0xc] = decomp_var_230;
                                                                                    decomp_var_229 = 0x0;
                                                                                    decomp_var_240 = 0x0;
                                                                                    if ((decomp_var_228 & 0x1) == 0x0) {
                                                                                            sub_104d73a6c(&decomp_var_240 + 0x18, r27 + 0x68, decomp_var_1b0, 0xffff);
                                                                                            r9 = decomp_var_378 & 0xffffffff00000000;
                                                                                            decomp_var_378 = r9;
                                                                                            r0 = sub_104d71b14(decomp_var_2f0, decomp_var_228, decomp_var_220, &decomp_var_2b8, decomp_var_310, r19[0x9], r20, decomp_var_308, r23, *(int16_t *)decomp_var_2e0, r9, 0x0, 0x0);
                                                                                            r27 = r0;
                                                                                            sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_288);
                                                                                            decomp_var_2e8 = decomp_var_2e8 + 0x1;
                                                                                            decomp_var_328 = r27 + decomp_var_328;
                                                                                            r27 = decomp_var_288;
                                                                                    }
                                                                                    if (r27 != 0x0) {
                                                                                            sub_104d7e9dc(r27);
                                                                                            sub_104e07020();
                                                                                    }
                                                                                    r0 = sub_1010d4a60(&decomp_var_260);
                                                                                    r8 = sign_extend_64(decomp_var_229);
                                                                                    if ((r8 & 0xffffffff80000000) != 0x0) {
                                                                                            loc_1029f6b00();
                                                                                    }
                                                                            }
                                                                            else {
                                                                                    sub_1015fe774(decomp_var_2f0, r1);
                                                                                    r8 = 0x1;
                                                                                    decomp_var_344 = 0x1;
                                                                            }
                                                                            if (r21 != 0x0) {
                                                                                    r8 = sign_extend_64(decomp_var_179);
                                                                                    if ((r8 & 0xffffffff80000000) != 0x0) {
                                                                                            loc_1029f6b00();
                                                                                    }
                                                                            }
                                                                            r21 = &decomp_var_1e0;
                                                                            if ((r22 & 0x1) != 0x0) {
                                                                                    r24 = r24 + 0x1;
                                                                                    if (r24 < r26) {
                                                                                            continue;
                                                                                    }
                                                                                    temp_0 = 0x0;
                                                                                    break;
                                                                            }
                                                                            else {
                                                                                    temp_0 = 0x0;
                                                                                    break;
                                                                            }
                                                                    }
                                                            }
                                                            else {
                                                                    r1 = decomp_var_340;
                                                                    if (r1 != 0x0) {
                                                                            sub_1015fe774(decomp_var_2f0, r1);
                                                                            r8 = 0x1;
                                                                            decomp_var_344 = 0x1;
                                                                            temp_0 = 0x1;
                                                                    }
                                                                    else {
                                                                            r8 = "Cannot skip stale ISR attributes without a payload boundary";
                                                                            temp_0 = 0x5;
                                                                    }
                                                                    break;
                                                            }
                                                    }
                                                    else {
                                                            decomp_var_338 = 0x1;
                                                            if (sub_104d6e650(r24 & 0xffff, r19[0x8], decomp_var_2e0[0x1]) != 0x0) {
                                                                    if (*(int8_t *)byte_106c67660 == 0x1) {
                                                                            decomp_var_e0 = *(int32_t *)r20;
                                                                            r0 = sub_104d6f2fc(r19 + 0x58, &decomp_var_e0);
                                                                            r8 = r19[0xb];
                                                                            r8 = r8 + r19[0x1a] * 0x20;
                                                                            if (r8 != r0) {
                                                                                    r8 = r0[0x18];
                                                                                    if (r8 == 0x1) {
                                                                                            asm { ccmp       w8, #0x5, #0x0, hs };
                                                                                            if (!asm { ccmp       w8, #0x5, #0x0, hs }) {
                                                                                                    r0 = *qword_106c488c0;
                                                                                                    r1 = *qword_106c488c8;
                                                                                                    decomp_var_e0 = *(int32_t *)r20;
                                                                                                    r0 = sub_1029fea60(r0, r1, 0x5, "[DFLog::ISRIncomingOutgoingAttributes] {} - InstanceStateSerializationManager::deserializeAttributeSchema: {}, - {} - ts: {}", 0x7c, 0x1112, &decomp_var_e0, 0x1);
                                                                                            }
                                                                                            r0 = sub_104d72b94(r19, decomp_var_2f0, decomp_var_198, r27, &decomp_var_1f8);
                                                                                            r8 = r0 + decomp_var_328;
                                                                                            decomp_var_328 = r8;
                                                                                            r24 = r24 + 0x1;
                                                                                            if (r24 < r26) {
                                                                                                    continue;
                                                                                            }
                                                                                            temp_0 = 0x0;
                                                                                            break;
                                                                                    }
                                                                                    else {
                                                                                            temp_0 = 0x4;
                                                                                            break;
                                                                                    }
                                                                            }
                                                                            else {
                                                                                    temp_0 = 0x4;
                                                                                    break;
                                                                            }
                                                                    }
                                                                    else {
                                                                            asm { ccmp       w8, #0x5, #0x0, hs };
                                                                            if (!asm { ccmp       w8, #0x5, #0x0, hs }) {
                                                                                    r0 = *qword_106c488c0;
                                                                                    r1 = *qword_106c488c8;
                                                                                    decomp_var_e0 = *(int32_t *)r20;
                                                                                    r0 = sub_1029fea60(r0, r1, 0x5, "[DFLog::ISRIncomingOutgoingAttributes] {} - InstanceStateSerializationManager::deserializeAttributeSchema: {}, - {} - ts: {}", 0x7c, 0x1112, &decomp_var_e0, 0x1);
                                                                            }
                                                                            r0 = sub_104d72b94(r19, decomp_var_2f0, decomp_var_198, r27, &decomp_var_1f8);
                                                                            r8 = r0 + decomp_var_328;
                                                                            decomp_var_328 = r8;
                                                                            r24 = r24 + 0x1;
                                                                            if (r24 < r26) {
                                                                                    continue;
                                                                            }
                                                                            temp_0 = 0x0;
                                                                            break;
                                                                    }
                                                            }
                                                            else {
                                                                    if (*(int8_t *)byte_106c67618 == 0x1) {
                                                                            r2 = r27;
                                                                            r0 = sub_104d73804(r19, &decomp_var_198, r2, r20[0x6]);
                                                                    }
                                                                    else {
                                                                            r2 = r27;
                                                                            r0 = sub_104d7396c(r19, &decomp_var_198, r2);
                                                                    }
                                                                    r1 = decomp_var_340;
                                                                    r21 = decomp_var_168;
                                                                    if (r1 == 0x0) {
                                                                            r22 = 0x1;
                                                                    }
                                                                    else {
                                                                            r22 = r21;
                                                                    }
                                                                    if ((r22 & 0x1) != 0x0) {
                                                                            if (r21 != 0x0) {
                                                                                    decomp_var_240 = decomp_var_190;
                                                                                    decomp_var_230 = decomp_var_180;
                                                                                    decomp_var_180 = 0x0;
                                                                                    decomp_var_190 = 0x0;
                                                                                    decomp_var_228 = decomp_var_178;
                                                                            }
                                                                            else {
                                                                                    r0 = sub_100004130(&decomp_var_240, "", r2);
                                                                                    decomp_var_228 = 0xffff0001;
                                                                                    decomp_var_220 = 0x0;
                                                                            }
                                                                            if ((*qword_106c488c0 & 0xff) >= 0x6 && (*qword_106c488c0 >> 0x8 & 0xff) >= 0x5) {
                                                                                    r8 = qword_106c488c0;
                                                                                    if (decomp_var_350 != 0x0) {
                                                                                            r8 = 0x1;
                                                                                    }
                                                                                    r9 = *(int32_t *)r20;
                                                                                    r10 = decomp_var_19c;
                                                                                    r12 = decomp_var_240;
                                                                                    r11 = &decomp_var_240;
                                                                                    if (sign_extend_64(decomp_var_229) < 0x0) {
                                                                                            r11 = r12;
                                                                                    }
                                                                                    r0 = *qword_106c488c0;
                                                                                    decomp_var_e0 = r9;
                                                                                    r0 = sub_1029fea60(r0, *qword_106c488c8, 0x5, "[DFLog::ISRIncomingOutgoingAttributes] {} - InstanceStateSerializationManager::deserializeAttributeValue: {}, - {} {} - type: {} - ts: {} - into changes container: {}", 0xa6, 0x711c112, &decomp_var_e0, 0x1);
                                                                            }
                                                                            r28 = 0x0;
                                                                            if (*(int8_t *)byte_106c669c8 == 0x1 && r23 != 0x0) {
                                                                                    r9 = decomp_var_240;
                                                                                    r8 = &decomp_var_240;
                                                                                    r28 = &decomp_var_e0;
                                                                                    r0 = sub_104d16830(&decomp_var_e0, r23, decomp_var_2f0, 0x1, &decomp_var_1a0, 0x2);
                                                                            }
                                                                            decomp_var_280 = r28;
                                                                            r0 = sub_1000ce7bc(&decomp_var_260, &decomp_var_280);
                                                                            sub_10002aa44(&decomp_var_280);
                                                                            r28 = sub_104e06ec8(0xc8);
                                                                            sub_104e07174();
                                                                            decomp_var_288 = r28;
                                                                            r28[0x4] = decomp_var_1a0;
                                                                            r0 = sub_100005858(r28 + 0x30, &decomp_var_1b0);
                                                                            r28 = decomp_var_288;
                                                                            r28[0x5] = r20[0x3];
                                                                            r28[0x25] = r27;
                                                                            r27 = r28;
                                                                            if ((sign_extend_64(r28[0x67]) & 0xffffffff80000000) != 0x0) {
                                                                                    loc_1029f6b00();
                                                                                    r27 = decomp_var_288;
                                                                            }
                                                                            r28[0x5] = decomp_var_240;
                                                                            r28[0xc] = decomp_var_230;
                                                                            decomp_var_229 = 0x0;
                                                                            decomp_var_240 = 0x0;
                                                                            if ((decomp_var_228 & 0x1) == 0x0) {
                                                                                    sub_104d73a6c(&decomp_var_240 + 0x18, r27 + 0x68, decomp_var_1b0, 0xffff);
                                                                                    r9 = decomp_var_378 & 0xffffffff00000000;
                                                                                    decomp_var_378 = r9;
                                                                                    r0 = sub_104d71b14(decomp_var_2f0, decomp_var_228, decomp_var_220, &decomp_var_2b8, decomp_var_310, r19[0x9], r20, decomp_var_308, r23, *(int16_t *)decomp_var_2e0, r9, 0x0, 0x0);
                                                                                    r27 = r0;
                                                                                    sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_288);
                                                                                    decomp_var_2e8 = decomp_var_2e8 + 0x1;
                                                                                    decomp_var_328 = r27 + decomp_var_328;
                                                                                    r27 = decomp_var_288;
                                                                            }
                                                                            if (r27 != 0x0) {
                                                                                    sub_104d7e9dc(r27);
                                                                                    sub_104e07020();
                                                                            }
                                                                            r0 = sub_1010d4a60(&decomp_var_260);
                                                                            r8 = sign_extend_64(decomp_var_229);
                                                                            if ((r8 & 0xffffffff80000000) != 0x0) {
                                                                                    loc_1029f6b00();
                                                                            }
                                                                    }
                                                                    else {
                                                                            sub_1015fe774(decomp_var_2f0, r1);
                                                                            r8 = 0x1;
                                                                            decomp_var_344 = 0x1;
                                                                    }
                                                                    if (r21 != 0x0) {
                                                                            r8 = sign_extend_64(decomp_var_179);
                                                                            if ((r8 & 0xffffffff80000000) != 0x0) {
                                                                                    loc_1029f6b00();
                                                                            }
                                                                    }
                                                                    r21 = &decomp_var_1e0;
                                                                    if ((r22 & 0x1) != 0x0) {
                                                                            r24 = r24 + 0x1;
                                                                            if (r24 < r26) {
                                                                                    continue;
                                                                            }
                                                                            temp_0 = 0x0;
                                                                            break;
                                                                    }
                                                                    else {
                                                                            temp_0 = 0x0;
                                                                            break;
                                                                    }
                                                            }
                                                    }
                                            }
                                            else {
                                                    temp_0 = 0x6;
                                                    break;
                                            }
                                    }
                                    else {
                                            if (sub_104d6e650(r24 & 0xffff, r19[0x8], decomp_var_2e0[0x1]) != 0x0) {
                                                    if (*(int8_t *)byte_106c67660 == 0x1) {
                                                            decomp_var_e0 = *(int32_t *)r20;
                                                            r0 = sub_104d6f2fc(r19 + 0x58, &decomp_var_e0);
                                                            r8 = r19[0xb];
                                                            r8 = r8 + r19[0x1a] * 0x20;
                                                            if (r8 != r0) {
                                                                    r8 = r0[0x18];
                                                                    if (r8 == 0x1) {
                                                                            asm { ccmp       w8, #0x5, #0x0, hs };
                                                                            if (!asm { ccmp       w8, #0x5, #0x0, hs }) {
                                                                                    r0 = *qword_106c488c0;
                                                                                    r1 = *qword_106c488c8;
                                                                                    decomp_var_e0 = *(int32_t *)r20;
                                                                                    r0 = sub_1029fea60(r0, r1, 0x5, "[DFLog::ISRIncomingOutgoingAttributes] {} - InstanceStateSerializationManager::deserializeAttributeSchema: {}, - {} - ts: {}", 0x7c, 0x1112, &decomp_var_e0, 0x1);
                                                                            }
                                                                            r0 = sub_104d72b94(r19, decomp_var_2f0, decomp_var_198, r27, &decomp_var_1f8);
                                                                            r8 = r0 + decomp_var_328;
                                                                            decomp_var_328 = r8;
                                                                            r24 = r24 + 0x1;
                                                                            if (r24 < r26) {
                                                                                    continue;
                                                                            }
                                                                            temp_0 = 0x0;
                                                                            break;
                                                                    }
                                                                    else {
                                                                            temp_0 = 0x4;
                                                                            break;
                                                                    }
                                                            }
                                                            else {
                                                                    temp_0 = 0x4;
                                                                    break;
                                                            }
                                                    }
                                                    else {
                                                            asm { ccmp       w8, #0x5, #0x0, hs };
                                                            if (!asm { ccmp       w8, #0x5, #0x0, hs }) {
                                                                    r0 = *qword_106c488c0;
                                                                    r1 = *qword_106c488c8;
                                                                    decomp_var_e0 = *(int32_t *)r20;
                                                                    r0 = sub_1029fea60(r0, r1, 0x5, "[DFLog::ISRIncomingOutgoingAttributes] {} - InstanceStateSerializationManager::deserializeAttributeSchema: {}, - {} - ts: {}", 0x7c, 0x1112, &decomp_var_e0, 0x1);
                                                            }
                                                            r0 = sub_104d72b94(r19, decomp_var_2f0, decomp_var_198, r27, &decomp_var_1f8);
                                                            r8 = r0 + decomp_var_328;
                                                            decomp_var_328 = r8;
                                                            r24 = r24 + 0x1;
                                                            if (r24 < r26) {
                                                                    continue;
                                                            }
                                                            temp_0 = 0x0;
                                                            break;
                                                    }
                                            }
                                            else {
                                                    if (*(int8_t *)byte_106c67618 == 0x1) {
                                                            r2 = r27;
                                                            r0 = sub_104d73804(r19, &decomp_var_198, r2, r20[0x6]);
                                                    }
                                                    else {
                                                            r2 = r27;
                                                            r0 = sub_104d7396c(r19, &decomp_var_198, r2);
                                                    }
                                                    r1 = decomp_var_340;
                                                    r21 = decomp_var_168;
                                                    if (r1 == 0x0) {
                                                            r22 = 0x1;
                                                    }
                                                    else {
                                                            r22 = r21;
                                                    }
                                                    if ((r22 & 0x1) != 0x0) {
                                                            if (r21 != 0x0) {
                                                                    decomp_var_240 = decomp_var_190;
                                                                    decomp_var_230 = decomp_var_180;
                                                                    decomp_var_180 = 0x0;
                                                                    decomp_var_190 = 0x0;
                                                                    decomp_var_228 = decomp_var_178;
                                                            }
                                                            else {
                                                                    r0 = sub_100004130(&decomp_var_240, "", r2);
                                                                    decomp_var_228 = 0xffff0001;
                                                                    decomp_var_220 = 0x0;
                                                            }
                                                            if ((*qword_106c488c0 & 0xff) >= 0x6 && (*qword_106c488c0 >> 0x8 & 0xff) >= 0x5) {
                                                                    r8 = qword_106c488c0;
                                                                    if (decomp_var_350 != 0x0) {
                                                                            r8 = 0x1;
                                                                    }
                                                                    r9 = *(int32_t *)r20;
                                                                    r10 = decomp_var_19c;
                                                                    r12 = decomp_var_240;
                                                                    r11 = &decomp_var_240;
                                                                    if (sign_extend_64(decomp_var_229) < 0x0) {
                                                                            r11 = r12;
                                                                    }
                                                                    r1 = *qword_106c488c8;
                                                                    r0 = *qword_106c488c0;
                                                                    decomp_var_e0 = r9;
                                                                    r0 = sub_1029fea60(r0, r1, 0x5, "[DFLog::ISRIncomingOutgoingAttributes] {} - InstanceStateSerializationManager::deserializeAttributeValue: {}, - {} {} - type: {} - ts: {} - into changes container: {}", 0xa6, 0x711c112, &decomp_var_e0, 0x1);
                                                            }
                                                            r28 = 0x0;
                                                            if (*(int8_t *)byte_106c669c8 == 0x1 && r23 != 0x0) {
                                                                    r9 = decomp_var_240;
                                                                    r8 = &decomp_var_240;
                                                                    r28 = &decomp_var_e0;
                                                                    r0 = sub_104d16830(&decomp_var_e0, r23, decomp_var_2f0, 0x1, &decomp_var_1a0, 0x2);
                                                            }
                                                            decomp_var_280 = r28;
                                                            r0 = sub_1000ce7bc(&decomp_var_260, &decomp_var_280);
                                                            sub_10002aa44(&decomp_var_280);
                                                            r28 = sub_104e06ec8(0xc8);
                                                            sub_104e07174();
                                                            decomp_var_288 = r28;
                                                            r28[0x4] = decomp_var_1a0;
                                                            r0 = sub_100005858(r28 + 0x30, &decomp_var_1b0);
                                                            r28 = decomp_var_288;
                                                            r28[0x5] = r20[0x3];
                                                            r28[0x25] = r27;
                                                            r27 = r28;
                                                            if ((sign_extend_64(r28[0x67]) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                                    r27 = decomp_var_288;
                                                            }
                                                            r28[0x5] = decomp_var_240;
                                                            r28[0xc] = decomp_var_230;
                                                            decomp_var_229 = 0x0;
                                                            decomp_var_240 = 0x0;
                                                            if ((decomp_var_228 & 0x1) == 0x0) {
                                                                    sub_104d73a6c(&decomp_var_240 + 0x18, r27 + 0x68, decomp_var_1b0, 0xffff);
                                                                    r9 = decomp_var_378 & 0xffffffff00000000;
                                                                    decomp_var_378 = r9;
                                                                    r0 = sub_104d71b14(decomp_var_2f0, decomp_var_228, decomp_var_220, &decomp_var_2b8, decomp_var_310, r19[0x9], r20, decomp_var_308, r23, *(int16_t *)decomp_var_2e0, r9, 0x0, 0x0);
                                                                    r27 = r0;
                                                                    sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_288);
                                                                    decomp_var_2e8 = decomp_var_2e8 + 0x1;
                                                                    decomp_var_328 = r27 + decomp_var_328;
                                                                    r27 = decomp_var_288;
                                                            }
                                                            if (r27 != 0x0) {
                                                                    sub_104d7e9dc(r27);
                                                                    sub_104e07020();
                                                            }
                                                            r0 = sub_1010d4a60(&decomp_var_260);
                                                            r8 = sign_extend_64(decomp_var_229);
                                                            if ((r8 & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                                    else {
                                                            sub_1015fe774(decomp_var_2f0, r1);
                                                            r8 = 0x1;
                                                            decomp_var_344 = 0x1;
                                                    }
                                                    if (r21 != 0x0) {
                                                            r8 = sign_extend_64(decomp_var_179);
                                                            if ((r8 & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                                    r21 = &decomp_var_1e0;
                                                    if ((r22 & 0x1) != 0x0) {
                                                            r24 = r24 + 0x1;
                                                            if (r24 < r26) {
                                                                    continue;
                                                            }
                                                            temp_0 = 0x0;
                                                            break;
                                                    }
                                                    else {
                                                            temp_0 = 0x0;
                                                            break;
                                                    }
                                            }
                                    }
                            }
                    }
                    else {
                            r24 = r24 + 0x1;
                            if (r24 < r26) {
                                    continue;
                            }
                            temp_0 = 0x0;
                            break;
                    }
            }
            else {
                    temp_0 = 0x3;
                    break;
            }
    }
    else {
            temp_0 = 0x3;
            break;
    }
    goto .l11;

.l10:
    if (temp_0 != 0x0) {
            if (temp_0 != 0x1) {
                    if (temp_0 != 0x2) {
                            if (temp_0 == 0x3) {
                                    sub_1029fe0a0("PropertyDirtySet::test - Index out of bounds");
                            }
                            if (temp_0 != 0x4) {
                                    if (temp_0 != 0x5) {
                                            sub_1029fe0a0(decomp_var_380);
                                    }
                            }
                            else {
                                    r8 = "Received unauthorized ISR attribute schema";
                            }
                            sub_1029fe0a0(decomp_var_380);
                    }
            }
            else {
                    r24 = decomp_var_1f8;
                    r21 = decomp_var_1f0;
                    if (r24 != r21) {
                            while (true) {
                                    if (*(int8_t *)byte_106c67660 != 0x1) {
                                            r25 = sub_104e06ec8(0xc8);
                                            sub_104e07174();
                                            decomp_var_e0 = r25;
                                            r25[0x4] = decomp_var_1a0;
                                            r0 = sub_100005858(r25 + 0x30, &decomp_var_1b0);
                                            r23 = decomp_var_e0;
                                            r23[0x5] = r20[0x3];
                                            if ((sign_extend_64(r23[0x67]) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                            q0 = *(int128_t *)r24;
                                            r23[0xc] = r24[0x2];
                                            r23[0x5] = q0;
                                            r24[0x17] = 0x0;
                                            *(int8_t *)r24 = 0x0;
                                            sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_e0);
                                            r23 = decomp_var_2f8;
                                            if (decomp_var_e0 != 0x0) {
                                                    sub_104d7e9dc();
                                                    sub_104e07020();
                                            }
                                            r24 = r24 + 0x18;
                                            if (r24 != r21) {
                                                    continue;
                                            }
                                            break;
                                    }
                                    r8 = sign_extend_64(r24[0x17]);
                                    if ((r8 & 0xffffffff80000000) == 0x0) {
                                            if (r8 == 0x0) {
                                                    r24 = r24 + 0x18;
                                                    if (r24 != r21) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                            else {
                                                    r0 = sub_104d73b30(r19, &decomp_var_198, r24);
                                                    if (r0 == 0xffff) {
                                                            r25 = sub_104e06ec8(0xc8);
                                                            sub_104e07174();
                                                            decomp_var_e0 = r25;
                                                            r25[0x4] = decomp_var_1a0;
                                                            r0 = sub_100005858(r25 + 0x30, &decomp_var_1b0);
                                                            r23 = decomp_var_e0;
                                                            r23[0x5] = r20[0x3];
                                                            if ((sign_extend_64(r23[0x67]) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                            q0 = *(int128_t *)r24;
                                                            r23[0xc] = r24[0x2];
                                                            r23[0x5] = q0;
                                                            r24[0x17] = 0x0;
                                                            *(int8_t *)r24 = 0x0;
                                                            sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_e0);
                                                            r23 = decomp_var_2f8;
                                                            if (decomp_var_e0 != 0x0) {
                                                                    sub_104d7e9dc();
                                                                    sub_104e07020();
                                                            }
                                                            r24 = r24 + 0x18;
                                                            if (r24 != r21) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    else {
                                                            r24 = r24 + 0x18;
                                                            if (r24 != r21) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                            }
                                    }
                                    else {
                                            if (r24[0x1] != 0x0) {
                                                    r0 = sub_104d73b30(r19, &decomp_var_198, r24);
                                                    if (r0 == 0xffff) {
                                                            r25 = sub_104e06ec8(0xc8);
                                                            sub_104e07174();
                                                            decomp_var_e0 = r25;
                                                            r25[0x4] = decomp_var_1a0;
                                                            r0 = sub_100005858(r25 + 0x30, &decomp_var_1b0);
                                                            r23 = decomp_var_e0;
                                                            r23[0x5] = r20[0x3];
                                                            if ((sign_extend_64(r23[0x67]) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                            q0 = *(int128_t *)r24;
                                                            r23[0xc] = r24[0x2];
                                                            r23[0x5] = q0;
                                                            r24[0x17] = 0x0;
                                                            *(int8_t *)r24 = 0x0;
                                                            sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_e0);
                                                            r23 = decomp_var_2f8;
                                                            if (decomp_var_e0 != 0x0) {
                                                                    sub_104d7e9dc();
                                                                    sub_104e07020();
                                                            }
                                                            r24 = r24 + 0x18;
                                                            if (r24 != r21) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    else {
                                                            r24 = r24 + 0x18;
                                                            if (r24 != r21) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                            }
                                            else {
                                                    r24 = r24 + 0x18;
                                                    if (r24 != r21) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                    }
                            }
                    }
                    r1 = decomp_var_340;
                    asm { ccmp       w1, #0x0, #0x4, eq };
                    r0 = decomp_var_2f0;
                    r21 = decomp_var_344;
                    if (!asm { ccmp       w1, #0x0, #0x4, eq }) {
                            r8 = r0[0xe];
                            if (r8 != r1) {
                                    if (*(int8_t *)byte_106c67630 != 0x1) {
                                            sub_1029fe0a0("ISR property data size mismatch: read %u bytes, expected end at %zu");
                                    }
                                    sub_1015fe774(r0, r1);
                                    decomp_var_e0 = &decomp_var_1f8;
                                    r0 = sub_100015abc(&decomp_var_e0);
                                    r8 = decomp_var_328;
                                    r22 = r8;
                                    if (r23 != 0x0) {
                                            r24 = *(int8_t *)byte_106c48450;
                                            sub_104d164e8(r23, r24, *(int16_t *)decomp_var_2e0, 0x1, decomp_var_2fc);
                                            r8 = decomp_var_2e0;
                                            sub_104d164e8(r23, r24, *(int16_t *)r8, 0x2, r22);
                                    }
                                    if (decomp_var_350 == 0x0) {
                                            r8 = 0x1;
                                    }
                                    if (((r21 | r8) & 0x1) != 0x0) {
                                            if ((r21 & 0x1) == 0x0) {
                                                    r20 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x10);
                                                    loc_102c3ec38();
                                                    r0 = sub_104d7e5d4(r20 + 0x8, &decomp_var_198);
                                                    r20 = r0;
                                                    r0[0x1] = decomp_var_1a0;
                                                    r1 = decomp_var_150;
                                                    if (r1 >= r0[0x6]) {
                                                            sub_104d7e308(r20 + 0x10);
                                                            r1 = decomp_var_150;
                                                    }
                                                    if (r1 != 0x0) {
                                                            r21 = 0x0;
                                                            r22 = 0x0;
                                                            do {
                                                                    r9 = decomp_var_158;
                                                                    r8 = *(r9 + r22 * 0x8);
                                                                    if (r8 == 0x0) {
                                                                            r22 = r22 + 0x1;
                                                                            r21 = r21 + 0x8;
                                                                            if (r22 < r1) {
                                                                                    continue;
                                                                            }
                                                                            break;
                                                                    }
                                                                    r10 = r20[0x2];
                                                                    r11 = *(r10 + r21);
                                                                    if (r11 == 0x0) {
                                                                            *(r9 + r22 * 0x8) = 0x0;
                                                                            sub_104d74328(r10 + r21, r8);
                                                                            r1 = decomp_var_150;
                                                                            r22 = r22 + 0x1;
                                                                            r21 = r21 + 0x8;
                                                                            if (r22 < r1) {
                                                                                    continue;
                                                                            }
                                                                            break;
                                                                    }
                                                                    if (r11[0xa] >= r8[0xa]) {
                                                                            r22 = r22 + 0x1;
                                                                            r21 = r21 + 0x8;
                                                                            if (r22 < r1) {
                                                                                    continue;
                                                                            }
                                                                            break;
                                                                    }
                                                                    *(r9 + r22 * 0x8) = 0x0;
                                                                    sub_104d74328(r10 + r21, r8);
                                                                    r1 = decomp_var_150;
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                            } while (r22 < r1);
                                                    }
                                                    sub_102c3ebc0(&decomp_var_e0, r1);
                                            }
                                    }
                                    else {
                                            sub_104d73bfc();
                                    }
                                    if (*(int8_t *)byte_106c67600 == 0x1 && *(int8_t *)byte_106c67510 == 0x1) {
                                            asm { ldaddal    x9, x8, [x8] };
                                            asm { ldaddal    x9, x8, [x8] };
                                    }
                                    r19 = decomp_var_198;
                                    sub_104d754c0(&decomp_var_160 + 0x8);
                                    r20 = decomp_var_1a8;
                                    if (r20 != 0x0) {
                                            r8 = r20 + 0x8;
                                            asm { ldaddal    x9, x8, [x8] };
                                            if (r8 == 0x0) {
                                                    (*(*r20 + 0x10))(r20);
                                                    std::__1::__shared_weak_count::__release_weak();
                                            }
                                    }
                                    if (**___stack_chk_guard != decomp_var_68) {
                                            __stack_chk_fail();
                                    }
                            }
                            else {
                                    decomp_var_e0 = &decomp_var_1f8;
                                    r0 = sub_100015abc(&decomp_var_e0);
                                    r8 = decomp_var_328;
                                    r22 = r8;
                                    if (r23 != 0x0) {
                                            r24 = *(int8_t *)byte_106c48450;
                                            sub_104d164e8(r23, r24, *(int16_t *)decomp_var_2e0, 0x1, decomp_var_2fc);
                                            r8 = decomp_var_2e0;
                                            sub_104d164e8(r23, r24, *(int16_t *)r8, 0x2, r22);
                                    }
                                    if (decomp_var_350 == 0x0) {
                                            r8 = 0x1;
                                    }
                                    if (((r21 | r8) & 0x1) != 0x0) {
                                            if ((r21 & 0x1) == 0x0) {
                                                    r20 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x10);
                                                    loc_102c3ec38();
                                                    r0 = sub_104d7e5d4(r20 + 0x8, &decomp_var_198);
                                                    r20 = r0;
                                                    r0[0x1] = decomp_var_1a0;
                                                    r1 = decomp_var_150;
                                                    if (r1 >= r0[0x6]) {
                                                            sub_104d7e308(r20 + 0x10);
                                                            r1 = decomp_var_150;
                                                    }
                                                    if (r1 != 0x0) {
                                                            r21 = 0x0;
                                                            r22 = 0x0;
                                                            do {
                                                                    r9 = decomp_var_158;
                                                                    r8 = *(r9 + r22 * 0x8);
                                                                    if (r8 == 0x0) {
                                                                            r22 = r22 + 0x1;
                                                                            r21 = r21 + 0x8;
                                                                            if (r22 < r1) {
                                                                                    continue;
                                                                            }
                                                                            break;
                                                                    }
                                                                    r10 = r20[0x2];
                                                                    r11 = *(r10 + r21);
                                                                    if (r11 == 0x0) {
                                                                            *(r9 + r22 * 0x8) = 0x0;
                                                                            sub_104d74328(r10 + r21, r8);
                                                                            r1 = decomp_var_150;
                                                                            r22 = r22 + 0x1;
                                                                            r21 = r21 + 0x8;
                                                                            if (r22 < r1) {
                                                                                    continue;
                                                                            }
                                                                            break;
                                                                    }
                                                                    if (r11[0xa] >= r8[0xa]) {
                                                                            r22 = r22 + 0x1;
                                                                            r21 = r21 + 0x8;
                                                                            if (r22 < r1) {
                                                                                    continue;
                                                                            }
                                                                            break;
                                                                    }
                                                                    *(r9 + r22 * 0x8) = 0x0;
                                                                    sub_104d74328(r10 + r21, r8);
                                                                    r1 = decomp_var_150;
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                            } while (r22 < r1);
                                                    }
                                                    sub_102c3ebc0(&decomp_var_e0, r1);
                                            }
                                    }
                                    else {
                                            sub_104d73bfc();
                                    }
                                    if (*(int8_t *)byte_106c67600 == 0x1 && *(int8_t *)byte_106c67510 == 0x1) {
                                            asm { ldaddal    x9, x8, [x8] };
                                            asm { ldaddal    x9, x8, [x8] };
                                    }
                                    r19 = decomp_var_198;
                                    sub_104d754c0(&decomp_var_160 + 0x8);
                                    r20 = decomp_var_1a8;
                                    if (r20 != 0x0) {
                                            r8 = r20 + 0x8;
                                            asm { ldaddal    x9, x8, [x8] };
                                            if (r8 == 0x0) {
                                                    (*(*r20 + 0x10))(r20);
                                                    std::__1::__shared_weak_count::__release_weak();
                                            }
                                    }
                                    if (**___stack_chk_guard != decomp_var_68) {
                                            __stack_chk_fail();
                                    }
                            }
                    }
                    else {
                            decomp_var_e0 = &decomp_var_1f8;
                            r0 = sub_100015abc(&decomp_var_e0);
                            r8 = decomp_var_328;
                            r22 = r8;
                            if (r23 != 0x0) {
                                    r24 = *(int8_t *)byte_106c48450;
                                    sub_104d164e8(r23, r24, *(int16_t *)decomp_var_2e0, 0x1, decomp_var_2fc);
                                    r8 = decomp_var_2e0;
                                    sub_104d164e8(r23, r24, *(int16_t *)r8, 0x2, r22);
                            }
                            if (decomp_var_350 == 0x0) {
                                    r8 = 0x1;
                            }
                            if (((r21 | r8) & 0x1) != 0x0) {
                                    if ((r21 & 0x1) == 0x0) {
                                            r20 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x10);
                                            loc_102c3ec38();
                                            r0 = sub_104d7e5d4(r20 + 0x8, &decomp_var_198);
                                            r20 = r0;
                                            r0[0x1] = decomp_var_1a0;
                                            r1 = decomp_var_150;
                                            if (r1 >= r0[0x6]) {
                                                    sub_104d7e308(r20 + 0x10);
                                                    r1 = decomp_var_150;
                                            }
                                            if (r1 != 0x0) {
                                                    r21 = 0x0;
                                                    r22 = 0x0;
                                                    do {
                                                            r9 = decomp_var_158;
                                                            r8 = *(r9 + r22 * 0x8);
                                                            if (r8 == 0x0) {
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                                    if (r22 < r1) {
                                                                            continue;
                                                                    }
                                                                    break;
                                                            }
                                                            r10 = r20[0x2];
                                                            r11 = *(r10 + r21);
                                                            if (r11 == 0x0) {
                                                                    *(r9 + r22 * 0x8) = 0x0;
                                                                    sub_104d74328(r10 + r21, r8);
                                                                    r1 = decomp_var_150;
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                                    if (r22 < r1) {
                                                                            continue;
                                                                    }
                                                                    break;
                                                            }
                                                            if (r11[0xa] >= r8[0xa]) {
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                                    if (r22 < r1) {
                                                                            continue;
                                                                    }
                                                                    break;
                                                            }
                                                            *(r9 + r22 * 0x8) = 0x0;
                                                            sub_104d74328(r10 + r21, r8);
                                                            r1 = decomp_var_150;
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                    } while (r22 < r1);
                                            }
                                            sub_102c3ebc0(&decomp_var_e0, r1);
                                    }
                            }
                            else {
                                    sub_104d73bfc();
                            }
                            if (*(int8_t *)byte_106c67600 == 0x1 && *(int8_t *)byte_106c67510 == 0x1) {
                                    asm { ldaddal    x9, x8, [x8] };
                                    asm { ldaddal    x9, x8, [x8] };
                            }
                            r19 = decomp_var_198;
                            sub_104d754c0(&decomp_var_160 + 0x8);
                            r20 = decomp_var_1a8;
                            if (r20 != 0x0) {
                                    r8 = r20 + 0x8;
                                    asm { ldaddal    x9, x8, [x8] };
                                    if (r8 == 0x0) {
                                            (*(*r20 + 0x10))(r20);
                                            std::__1::__shared_weak_count::__release_weak();
                                    }
                            }
                            if (**___stack_chk_guard != decomp_var_68) {
                                    __stack_chk_fail();
                            }
                    }
            }
    }
    else {
            r24 = decomp_var_1f8;
            r21 = decomp_var_1f0;
            if (r24 != r21) {
                    while (true) {
                            if (*(int8_t *)byte_106c67660 != 0x1) {
                                    r25 = sub_104e06ec8(0xc8);
                                    sub_104e07174();
                                    decomp_var_e0 = r25;
                                    r25[0x4] = decomp_var_1a0;
                                    r0 = sub_100005858(r25 + 0x30, &decomp_var_1b0);
                                    r23 = decomp_var_e0;
                                    r23[0x5] = r20[0x3];
                                    if ((sign_extend_64(r23[0x67]) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00();
                                    }
                                    q0 = *(int128_t *)r24;
                                    r23[0xc] = r24[0x2];
                                    r23[0x5] = q0;
                                    r24[0x17] = 0x0;
                                    *(int8_t *)r24 = 0x0;
                                    sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_e0);
                                    r23 = decomp_var_2f8;
                                    if (decomp_var_e0 != 0x0) {
                                            sub_104d7e9dc();
                                            sub_104e07020();
                                    }
                                    r24 = r24 + 0x18;
                                    if (r24 != r21) {
                                            continue;
                                    }
                                    break;
                            }
                            r8 = sign_extend_64(r24[0x17]);
                            if ((r8 & 0xffffffff80000000) == 0x0) {
                                    if (r8 == 0x0) {
                                            r24 = r24 + 0x18;
                                            if (r24 != r21) {
                                                    continue;
                                            }
                                            break;
                                    }
                                    else {
                                            r0 = sub_104d73b30(r19, &decomp_var_198, r24);
                                            if (r0 == 0xffff) {
                                                    r25 = sub_104e06ec8(0xc8);
                                                    sub_104e07174();
                                                    decomp_var_e0 = r25;
                                                    r25[0x4] = decomp_var_1a0;
                                                    r0 = sub_100005858(r25 + 0x30, &decomp_var_1b0);
                                                    r23 = decomp_var_e0;
                                                    r23[0x5] = r20[0x3];
                                                    if ((sign_extend_64(r23[0x67]) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                                    q0 = *(int128_t *)r24;
                                                    r23[0xc] = r24[0x2];
                                                    r23[0x5] = q0;
                                                    r24[0x17] = 0x0;
                                                    *(int8_t *)r24 = 0x0;
                                                    sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_e0);
                                                    r23 = decomp_var_2f8;
                                                    if (decomp_var_e0 != 0x0) {
                                                            sub_104d7e9dc();
                                                            sub_104e07020();
                                                    }
                                                    r24 = r24 + 0x18;
                                                    if (r24 != r21) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                            else {
                                                    r24 = r24 + 0x18;
                                                    if (r24 != r21) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                    }
                            }
                            else {
                                    if (r24[0x1] != 0x0) {
                                            r0 = sub_104d73b30(r19, &decomp_var_198, r24);
                                            if (r0 == 0xffff) {
                                                    r25 = sub_104e06ec8(0xc8);
                                                    sub_104e07174();
                                                    decomp_var_e0 = r25;
                                                    r25[0x4] = decomp_var_1a0;
                                                    r0 = sub_100005858(r25 + 0x30, &decomp_var_1b0);
                                                    r23 = decomp_var_e0;
                                                    r23[0x5] = r20[0x3];
                                                    if ((sign_extend_64(r23[0x67]) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                                    q0 = *(int128_t *)r24;
                                                    r23[0xc] = r24[0x2];
                                                    r23[0x5] = q0;
                                                    r24[0x17] = 0x0;
                                                    *(int8_t *)r24 = 0x0;
                                                    sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_e0);
                                                    r23 = decomp_var_2f8;
                                                    if (decomp_var_e0 != 0x0) {
                                                            sub_104d7e9dc();
                                                            sub_104e07020();
                                                    }
                                                    r24 = r24 + 0x18;
                                                    if (r24 != r21) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                            else {
                                                    r24 = r24 + 0x18;
                                                    if (r24 != r21) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                    }
                                    else {
                                            r24 = r24 + 0x18;
                                            if (r24 != r21) {
                                                    continue;
                                            }
                                            break;
                                    }
                            }
                    }
            }
            r1 = decomp_var_340;
            asm { ccmp       w1, #0x0, #0x4, eq };
            r0 = decomp_var_2f0;
            r21 = decomp_var_344;
            if (!asm { ccmp       w1, #0x0, #0x4, eq }) {
                    r8 = r0[0xe];
                    if (r8 != r1) {
                            if (*(int8_t *)byte_106c67630 != 0x1) {
                                    sub_1029fe0a0("ISR property data size mismatch: read %u bytes, expected end at %zu");
                            }
                            sub_1015fe774(r0, r1);
                            decomp_var_e0 = &decomp_var_1f8;
                            r0 = sub_100015abc(&decomp_var_e0);
                            r8 = decomp_var_328;
                            r22 = r8;
                            if (r23 != 0x0) {
                                    r24 = *(int8_t *)byte_106c48450;
                                    sub_104d164e8(r23, r24, *(int16_t *)decomp_var_2e0, 0x1, decomp_var_2fc);
                                    r8 = decomp_var_2e0;
                                    sub_104d164e8(r23, r24, *(int16_t *)r8, 0x2, r22);
                            }
                            if (decomp_var_350 == 0x0) {
                                    r8 = 0x1;
                            }
                            if (((r21 | r8) & 0x1) != 0x0) {
                                    if ((r21 & 0x1) == 0x0) {
                                            r20 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x10);
                                            loc_102c3ec38();
                                            r0 = sub_104d7e5d4(r20 + 0x8, &decomp_var_198);
                                            r20 = r0;
                                            r0[0x1] = decomp_var_1a0;
                                            r1 = decomp_var_150;
                                            if (r1 >= r0[0x6]) {
                                                    sub_104d7e308(r20 + 0x10);
                                                    r1 = decomp_var_150;
                                            }
                                            if (r1 != 0x0) {
                                                    r21 = 0x0;
                                                    r22 = 0x0;
                                                    do {
                                                            r9 = decomp_var_158;
                                                            r8 = *(r9 + r22 * 0x8);
                                                            if (r8 == 0x0) {
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                                    if (r22 < r1) {
                                                                            continue;
                                                                    }
                                                                    break;
                                                            }
                                                            r10 = r20[0x2];
                                                            r11 = *(r10 + r21);
                                                            if (r11 == 0x0) {
                                                                    *(r9 + r22 * 0x8) = 0x0;
                                                                    sub_104d74328(r10 + r21, r8);
                                                                    r1 = decomp_var_150;
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                                    if (r22 < r1) {
                                                                            continue;
                                                                    }
                                                                    break;
                                                            }
                                                            if (r11[0xa] >= r8[0xa]) {
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                                    if (r22 < r1) {
                                                                            continue;
                                                                    }
                                                                    break;
                                                            }
                                                            *(r9 + r22 * 0x8) = 0x0;
                                                            sub_104d74328(r10 + r21, r8);
                                                            r1 = decomp_var_150;
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                    } while (r22 < r1);
                                            }
                                            sub_102c3ebc0(&decomp_var_e0, r1);
                                    }
                            }
                            else {
                                    sub_104d73bfc();
                            }
                            if (*(int8_t *)byte_106c67600 == 0x1 && *(int8_t *)byte_106c67510 == 0x1) {
                                    asm { ldaddal    x9, x8, [x8] };
                                    asm { ldaddal    x9, x8, [x8] };
                            }
                            r19 = decomp_var_198;
                            sub_104d754c0(&decomp_var_160 + 0x8);
                            r20 = decomp_var_1a8;
                            if (r20 != 0x0) {
                                    r8 = r20 + 0x8;
                                    asm { ldaddal    x9, x8, [x8] };
                                    if (r8 == 0x0) {
                                            (*(*r20 + 0x10))(r20);
                                            std::__1::__shared_weak_count::__release_weak();
                                    }
                            }
                            if (**___stack_chk_guard != decomp_var_68) {
                                    __stack_chk_fail();
                            }
                    }
                    else {
                            decomp_var_e0 = &decomp_var_1f8;
                            r0 = sub_100015abc(&decomp_var_e0);
                            r8 = decomp_var_328;
                            r22 = r8;
                            if (r23 != 0x0) {
                                    r24 = *(int8_t *)byte_106c48450;
                                    sub_104d164e8(r23, r24, *(int16_t *)decomp_var_2e0, 0x1, decomp_var_2fc);
                                    r8 = decomp_var_2e0;
                                    sub_104d164e8(r23, r24, *(int16_t *)r8, 0x2, r22);
                            }
                            if (decomp_var_350 == 0x0) {
                                    r8 = 0x1;
                            }
                            if (((r21 | r8) & 0x1) != 0x0) {
                                    if ((r21 & 0x1) == 0x0) {
                                            r20 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x10);
                                            loc_102c3ec38();
                                            r0 = sub_104d7e5d4(r20 + 0x8, &decomp_var_198);
                                            r20 = r0;
                                            r0[0x1] = decomp_var_1a0;
                                            r1 = decomp_var_150;
                                            if (r1 >= r0[0x6]) {
                                                    sub_104d7e308(r20 + 0x10);
                                                    r1 = decomp_var_150;
                                            }
                                            if (r1 != 0x0) {
                                                    r21 = 0x0;
                                                    r22 = 0x0;
                                                    do {
                                                            r9 = decomp_var_158;
                                                            r8 = *(r9 + r22 * 0x8);
                                                            if (r8 == 0x0) {
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                                    if (r22 < r1) {
                                                                            continue;
                                                                    }
                                                                    break;
                                                            }
                                                            r10 = r20[0x2];
                                                            r11 = *(r10 + r21);
                                                            if (r11 == 0x0) {
                                                                    *(r9 + r22 * 0x8) = 0x0;
                                                                    sub_104d74328(r10 + r21, r8);
                                                                    r1 = decomp_var_150;
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                                    if (r22 < r1) {
                                                                            continue;
                                                                    }
                                                                    break;
                                                            }
                                                            if (r11[0xa] >= r8[0xa]) {
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                                    if (r22 < r1) {
                                                                            continue;
                                                                    }
                                                                    break;
                                                            }
                                                            *(r9 + r22 * 0x8) = 0x0;
                                                            sub_104d74328(r10 + r21, r8);
                                                            r1 = decomp_var_150;
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                    } while (r22 < r1);
                                            }
                                            sub_102c3ebc0(&decomp_var_e0, r1);
                                    }
                            }
                            else {
                                    sub_104d73bfc();
                            }
                            if (*(int8_t *)byte_106c67600 == 0x1 && *(int8_t *)byte_106c67510 == 0x1) {
                                    asm { ldaddal    x9, x8, [x8] };
                                    asm { ldaddal    x9, x8, [x8] };
                            }
                            r19 = decomp_var_198;
                            sub_104d754c0(&decomp_var_160 + 0x8);
                            r20 = decomp_var_1a8;
                            if (r20 != 0x0) {
                                    r8 = r20 + 0x8;
                                    asm { ldaddal    x9, x8, [x8] };
                                    if (r8 == 0x0) {
                                            (*(*r20 + 0x10))(r20);
                                            std::__1::__shared_weak_count::__release_weak();
                                    }
                            }
                            if (**___stack_chk_guard != decomp_var_68) {
                                    __stack_chk_fail();
                            }
                    }
            }
            else {
                    decomp_var_e0 = &decomp_var_1f8;
                    r0 = sub_100015abc(&decomp_var_e0);
                    r8 = decomp_var_328;
                    r22 = r8;
                    if (r23 != 0x0) {
                            r24 = *(int8_t *)byte_106c48450;
                            sub_104d164e8(r23, r24, *(int16_t *)decomp_var_2e0, 0x1, decomp_var_2fc);
                            r8 = decomp_var_2e0;
                            sub_104d164e8(r23, r24, *(int16_t *)r8, 0x2, r22);
                    }
                    if (decomp_var_350 == 0x0) {
                            r8 = 0x1;
                    }
                    if (((r21 | r8) & 0x1) != 0x0) {
                            if ((r21 & 0x1) == 0x0) {
                                    r20 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x10);
                                    loc_102c3ec38();
                                    r0 = sub_104d7e5d4(r20 + 0x8, &decomp_var_198);
                                    r20 = r0;
                                    r0[0x1] = decomp_var_1a0;
                                    r1 = decomp_var_150;
                                    if (r1 >= r0[0x6]) {
                                            sub_104d7e308(r20 + 0x10);
                                            r1 = decomp_var_150;
                                    }
                                    if (r1 != 0x0) {
                                            r21 = 0x0;
                                            r22 = 0x0;
                                            do {
                                                    r9 = decomp_var_158;
                                                    r8 = *(r9 + r22 * 0x8);
                                                    if (r8 == 0x0) {
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    r10 = r20[0x2];
                                                    r11 = *(r10 + r21);
                                                    if (r11 == 0x0) {
                                                            *(r9 + r22 * 0x8) = 0x0;
                                                            sub_104d74328(r10 + r21, r8);
                                                            r1 = decomp_var_150;
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    if (r11[0xa] >= r8[0xa]) {
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    *(r9 + r22 * 0x8) = 0x0;
                                                    sub_104d74328(r10 + r21, r8);
                                                    r1 = decomp_var_150;
                                                    r22 = r22 + 0x1;
                                                    r21 = r21 + 0x8;
                                            } while (r22 < r1);
                                    }
                                    sub_102c3ebc0(&decomp_var_e0, r1);
                            }
                    }
                    else {
                            sub_104d73bfc();
                    }
                    if (*(int8_t *)byte_106c67600 == 0x1 && *(int8_t *)byte_106c67510 == 0x1) {
                            asm { ldaddal    x9, x8, [x8] };
                            asm { ldaddal    x9, x8, [x8] };
                    }
                    r19 = decomp_var_198;
                    sub_104d754c0(&decomp_var_160 + 0x8);
                    r20 = decomp_var_1a8;
                    if (r20 != 0x0) {
                            r8 = r20 + 0x8;
                            asm { ldaddal    x9, x8, [x8] };
                            if (r8 == 0x0) {
                                    (*(*r20 + 0x10))(r20);
                                    std::__1::__shared_weak_count::__release_weak();
                            }
                    }
                    if (**___stack_chk_guard != decomp_var_68) {
                            __stack_chk_fail();
                    }
            }
    }
    return;

.l11:
    if (temp_0 != 0x0) {
            if (temp_0 != 0x1) {
                    if (temp_0 != 0x2) {
                            if (temp_0 == 0x3) {
                                    sub_1029fe0a0("PropertyDirtySet::test - Index out of bounds");
                            }
                            if (temp_0 != 0x4) {
                                    if (temp_0 != 0x5) {
                                            sub_1029fe0a0(decomp_var_380);
                                    }
                            }
                            else {
                                    r8 = "Received unauthorized ISR attribute schema";
                            }
                            sub_1029fe0a0(decomp_var_380);
                    }
            }
            else {
                    r24 = decomp_var_1f8;
                    r21 = decomp_var_1f0;
                    if (r24 != r21) {
                            while (true) {
                                    if (*(int8_t *)byte_106c67660 != 0x1) {
                                            r25 = sub_104e06ec8(0xc8);
                                            sub_104e07174();
                                            decomp_var_e0 = r25;
                                            r25[0x4] = decomp_var_1a0;
                                            r0 = sub_100005858(r25 + 0x30, &decomp_var_1b0);
                                            r23 = decomp_var_e0;
                                            r23[0x5] = r20[0x3];
                                            if ((sign_extend_64(r23[0x67]) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                            q0 = *(int128_t *)r24;
                                            r23[0xc] = r24[0x2];
                                            r23[0x5] = q0;
                                            r24[0x17] = 0x0;
                                            *(int8_t *)r24 = 0x0;
                                            sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_e0);
                                            r23 = decomp_var_2f8;
                                            if (decomp_var_e0 != 0x0) {
                                                    sub_104d7e9dc();
                                                    sub_104e07020();
                                            }
                                            r24 = r24 + 0x18;
                                            if (r24 != r21) {
                                                    continue;
                                            }
                                            break;
                                    }
                                    r8 = sign_extend_64(r24[0x17]);
                                    if ((r8 & 0xffffffff80000000) == 0x0) {
                                            if (r8 == 0x0) {
                                                    r24 = r24 + 0x18;
                                                    if (r24 != r21) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                            else {
                                                    r0 = sub_104d73b30(r19, &decomp_var_198, r24);
                                                    if (r0 == 0xffff) {
                                                            r25 = sub_104e06ec8(0xc8);
                                                            sub_104e07174();
                                                            decomp_var_e0 = r25;
                                                            r25[0x4] = decomp_var_1a0;
                                                            r0 = sub_100005858(r25 + 0x30, &decomp_var_1b0);
                                                            r23 = decomp_var_e0;
                                                            r23[0x5] = r20[0x3];
                                                            if ((sign_extend_64(r23[0x67]) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                            q0 = *(int128_t *)r24;
                                                            r23[0xc] = r24[0x2];
                                                            r23[0x5] = q0;
                                                            r24[0x17] = 0x0;
                                                            *(int8_t *)r24 = 0x0;
                                                            sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_e0);
                                                            r23 = decomp_var_2f8;
                                                            if (decomp_var_e0 != 0x0) {
                                                                    sub_104d7e9dc();
                                                                    sub_104e07020();
                                                            }
                                                            r24 = r24 + 0x18;
                                                            if (r24 != r21) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    else {
                                                            r24 = r24 + 0x18;
                                                            if (r24 != r21) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                            }
                                    }
                                    else {
                                            if (r24[0x1] != 0x0) {
                                                    r0 = sub_104d73b30(r19, &decomp_var_198, r24);
                                                    if (r0 == 0xffff) {
                                                            r25 = sub_104e06ec8(0xc8);
                                                            sub_104e07174();
                                                            decomp_var_e0 = r25;
                                                            r25[0x4] = decomp_var_1a0;
                                                            r0 = sub_100005858(r25 + 0x30, &decomp_var_1b0);
                                                            r23 = decomp_var_e0;
                                                            r23[0x5] = r20[0x3];
                                                            if ((sign_extend_64(r23[0x67]) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                            q0 = *(int128_t *)r24;
                                                            r23[0xc] = r24[0x2];
                                                            r23[0x5] = q0;
                                                            r24[0x17] = 0x0;
                                                            *(int8_t *)r24 = 0x0;
                                                            sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_e0);
                                                            r23 = decomp_var_2f8;
                                                            if (decomp_var_e0 != 0x0) {
                                                                    sub_104d7e9dc();
                                                                    sub_104e07020();
                                                            }
                                                            r24 = r24 + 0x18;
                                                            if (r24 != r21) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    else {
                                                            r24 = r24 + 0x18;
                                                            if (r24 != r21) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                            }
                                            else {
                                                    r24 = r24 + 0x18;
                                                    if (r24 != r21) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                    }
                            }
                    }
                    r1 = decomp_var_340;
                    asm { ccmp       w1, #0x0, #0x4, eq };
                    r0 = decomp_var_2f0;
                    r21 = decomp_var_344;
                    if (!asm { ccmp       w1, #0x0, #0x4, eq }) {
                            r8 = r0[0xe];
                            if (r8 != r1) {
                                    if (*(int8_t *)byte_106c67630 != 0x1) {
                                            sub_1029fe0a0("ISR property data size mismatch: read %u bytes, expected end at %zu");
                                    }
                                    sub_1015fe774(r0, r1);
                                    decomp_var_e0 = &decomp_var_1f8;
                                    r0 = sub_100015abc(&decomp_var_e0);
                                    r8 = decomp_var_328;
                                    r22 = r8;
                                    if (r23 != 0x0) {
                                            r24 = *(int8_t *)byte_106c48450;
                                            sub_104d164e8(r23, r24, *(int16_t *)decomp_var_2e0, 0x1, decomp_var_2fc);
                                            r8 = decomp_var_2e0;
                                            sub_104d164e8(r23, r24, *(int16_t *)r8, 0x2, r22);
                                    }
                                    if (decomp_var_350 == 0x0) {
                                            r8 = 0x1;
                                    }
                                    if (((r21 | r8) & 0x1) != 0x0) {
                                            if ((r21 & 0x1) == 0x0) {
                                                    r20 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x10);
                                                    loc_102c3ec38();
                                                    r0 = sub_104d7e5d4(r20 + 0x8, &decomp_var_198);
                                                    r20 = r0;
                                                    r0[0x1] = decomp_var_1a0;
                                                    r1 = decomp_var_150;
                                                    if (r1 >= r0[0x6]) {
                                                            sub_104d7e308(r20 + 0x10);
                                                            r1 = decomp_var_150;
                                                    }
                                                    if (r1 != 0x0) {
                                                            r21 = 0x0;
                                                            r22 = 0x0;
                                                            do {
                                                                    r9 = decomp_var_158;
                                                                    r8 = *(r9 + r22 * 0x8);
                                                                    if (r8 == 0x0) {
                                                                            r22 = r22 + 0x1;
                                                                            r21 = r21 + 0x8;
                                                                            if (r22 < r1) {
                                                                                    continue;
                                                                            }
                                                                            break;
                                                                    }
                                                                    r10 = r20[0x2];
                                                                    r11 = *(r10 + r21);
                                                                    if (r11 == 0x0) {
                                                                            *(r9 + r22 * 0x8) = 0x0;
                                                                            sub_104d74328(r10 + r21, r8);
                                                                            r1 = decomp_var_150;
                                                                            r22 = r22 + 0x1;
                                                                            r21 = r21 + 0x8;
                                                                            if (r22 < r1) {
                                                                                    continue;
                                                                            }
                                                                            break;
                                                                    }
                                                                    if (r11[0xa] >= r8[0xa]) {
                                                                            r22 = r22 + 0x1;
                                                                            r21 = r21 + 0x8;
                                                                            if (r22 < r1) {
                                                                                    continue;
                                                                            }
                                                                            break;
                                                                    }
                                                                    *(r9 + r22 * 0x8) = 0x0;
                                                                    sub_104d74328(r10 + r21, r8);
                                                                    r1 = decomp_var_150;
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                            } while (r22 < r1);
                                                    }
                                                    sub_102c3ebc0(&decomp_var_e0, r1);
                                            }
                                    }
                                    else {
                                            sub_104d73bfc();
                                    }
                                    if (*(int8_t *)byte_106c67600 == 0x1 && *(int8_t *)byte_106c67510 == 0x1) {
                                            asm { ldaddal    x9, x8, [x8] };
                                            asm { ldaddal    x9, x8, [x8] };
                                    }
                                    r19 = decomp_var_198;
                                    sub_104d754c0(&decomp_var_160 + 0x8);
                                    r20 = decomp_var_1a8;
                                    if (r20 != 0x0) {
                                            r8 = r20 + 0x8;
                                            asm { ldaddal    x9, x8, [x8] };
                                            if (r8 == 0x0) {
                                                    (*(*r20 + 0x10))(r20);
                                                    std::__1::__shared_weak_count::__release_weak();
                                            }
                                    }
                                    if (**___stack_chk_guard != decomp_var_68) {
                                            __stack_chk_fail();
                                    }
                            }
                            else {
                                    decomp_var_e0 = &decomp_var_1f8;
                                    r0 = sub_100015abc(&decomp_var_e0);
                                    r8 = decomp_var_328;
                                    r22 = r8;
                                    if (r23 != 0x0) {
                                            r24 = *(int8_t *)byte_106c48450;
                                            sub_104d164e8(r23, r24, *(int16_t *)decomp_var_2e0, 0x1, decomp_var_2fc);
                                            r8 = decomp_var_2e0;
                                            sub_104d164e8(r23, r24, *(int16_t *)r8, 0x2, r22);
                                    }
                                    if (decomp_var_350 == 0x0) {
                                            r8 = 0x1;
                                    }
                                    if (((r21 | r8) & 0x1) != 0x0) {
                                            if ((r21 & 0x1) == 0x0) {
                                                    r20 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x10);
                                                    loc_102c3ec38();
                                                    r0 = sub_104d7e5d4(r20 + 0x8, &decomp_var_198);
                                                    r20 = r0;
                                                    r0[0x1] = decomp_var_1a0;
                                                    r1 = decomp_var_150;
                                                    if (r1 >= r0[0x6]) {
                                                            sub_104d7e308(r20 + 0x10);
                                                            r1 = decomp_var_150;
                                                    }
                                                    if (r1 != 0x0) {
                                                            r21 = 0x0;
                                                            r22 = 0x0;
                                                            do {
                                                                    r9 = decomp_var_158;
                                                                    r8 = *(r9 + r22 * 0x8);
                                                                    if (r8 == 0x0) {
                                                                            r22 = r22 + 0x1;
                                                                            r21 = r21 + 0x8;
                                                                            if (r22 < r1) {
                                                                                    continue;
                                                                            }
                                                                            break;
                                                                    }
                                                                    r10 = r20[0x2];
                                                                    r11 = *(r10 + r21);
                                                                    if (r11 == 0x0) {
                                                                            *(r9 + r22 * 0x8) = 0x0;
                                                                            sub_104d74328(r10 + r21, r8);
                                                                            r1 = decomp_var_150;
                                                                            r22 = r22 + 0x1;
                                                                            r21 = r21 + 0x8;
                                                                            if (r22 < r1) {
                                                                                    continue;
                                                                            }
                                                                            break;
                                                                    }
                                                                    if (r11[0xa] >= r8[0xa]) {
                                                                            r22 = r22 + 0x1;
                                                                            r21 = r21 + 0x8;
                                                                            if (r22 < r1) {
                                                                                    continue;
                                                                            }
                                                                            break;
                                                                    }
                                                                    *(r9 + r22 * 0x8) = 0x0;
                                                                    sub_104d74328(r10 + r21, r8);
                                                                    r1 = decomp_var_150;
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                            } while (r22 < r1);
                                                    }
                                                    sub_102c3ebc0(&decomp_var_e0, r1);
                                            }
                                    }
                                    else {
                                            sub_104d73bfc();
                                    }
                                    if (*(int8_t *)byte_106c67600 == 0x1 && *(int8_t *)byte_106c67510 == 0x1) {
                                            asm { ldaddal    x9, x8, [x8] };
                                            asm { ldaddal    x9, x8, [x8] };
                                    }
                                    r19 = decomp_var_198;
                                    sub_104d754c0(&decomp_var_160 + 0x8);
                                    r20 = decomp_var_1a8;
                                    if (r20 != 0x0) {
                                            r8 = r20 + 0x8;
                                            asm { ldaddal    x9, x8, [x8] };
                                            if (r8 == 0x0) {
                                                    (*(*r20 + 0x10))(r20);
                                                    std::__1::__shared_weak_count::__release_weak();
                                            }
                                    }
                                    if (**___stack_chk_guard != decomp_var_68) {
                                            __stack_chk_fail();
                                    }
                            }
                    }
                    else {
                            decomp_var_e0 = &decomp_var_1f8;
                            r0 = sub_100015abc(&decomp_var_e0);
                            r8 = decomp_var_328;
                            r22 = r8;
                            if (r23 != 0x0) {
                                    r24 = *(int8_t *)byte_106c48450;
                                    sub_104d164e8(r23, r24, *(int16_t *)decomp_var_2e0, 0x1, decomp_var_2fc);
                                    r8 = decomp_var_2e0;
                                    sub_104d164e8(r23, r24, *(int16_t *)r8, 0x2, r22);
                            }
                            if (decomp_var_350 == 0x0) {
                                    r8 = 0x1;
                            }
                            if (((r21 | r8) & 0x1) != 0x0) {
                                    if ((r21 & 0x1) == 0x0) {
                                            r20 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x10);
                                            loc_102c3ec38();
                                            r0 = sub_104d7e5d4(r20 + 0x8, &decomp_var_198);
                                            r20 = r0;
                                            r0[0x1] = decomp_var_1a0;
                                            r1 = decomp_var_150;
                                            if (r1 >= r0[0x6]) {
                                                    sub_104d7e308(r20 + 0x10);
                                                    r1 = decomp_var_150;
                                            }
                                            if (r1 != 0x0) {
                                                    r21 = 0x0;
                                                    r22 = 0x0;
                                                    do {
                                                            r9 = decomp_var_158;
                                                            r8 = *(r9 + r22 * 0x8);
                                                            if (r8 == 0x0) {
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                                    if (r22 < r1) {
                                                                            continue;
                                                                    }
                                                                    break;
                                                            }
                                                            r10 = r20[0x2];
                                                            r11 = *(r10 + r21);
                                                            if (r11 == 0x0) {
                                                                    *(r9 + r22 * 0x8) = 0x0;
                                                                    sub_104d74328(r10 + r21, r8);
                                                                    r1 = decomp_var_150;
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                                    if (r22 < r1) {
                                                                            continue;
                                                                    }
                                                                    break;
                                                            }
                                                            if (r11[0xa] >= r8[0xa]) {
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                                    if (r22 < r1) {
                                                                            continue;
                                                                    }
                                                                    break;
                                                            }
                                                            *(r9 + r22 * 0x8) = 0x0;
                                                            sub_104d74328(r10 + r21, r8);
                                                            r1 = decomp_var_150;
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                    } while (r22 < r1);
                                            }
                                            sub_102c3ebc0(&decomp_var_e0, r1);
                                    }
                            }
                            else {
                                    sub_104d73bfc();
                            }
                            if (*(int8_t *)byte_106c67600 == 0x1 && *(int8_t *)byte_106c67510 == 0x1) {
                                    asm { ldaddal    x9, x8, [x8] };
                                    asm { ldaddal    x9, x8, [x8] };
                            }
                            r19 = decomp_var_198;
                            sub_104d754c0(&decomp_var_160 + 0x8);
                            r20 = decomp_var_1a8;
                            if (r20 != 0x0) {
                                    r8 = r20 + 0x8;
                                    asm { ldaddal    x9, x8, [x8] };
                                    if (r8 == 0x0) {
                                            (*(*r20 + 0x10))(r20);
                                            std::__1::__shared_weak_count::__release_weak();
                                    }
                            }
                            if (**___stack_chk_guard != decomp_var_68) {
                                    __stack_chk_fail();
                            }
                    }
            }
    }
    else {
            r24 = decomp_var_1f8;
            r21 = decomp_var_1f0;
            if (r24 != r21) {
                    while (true) {
                            if (*(int8_t *)byte_106c67660 != 0x1) {
                                    r25 = sub_104e06ec8(0xc8);
                                    sub_104e07174();
                                    decomp_var_e0 = r25;
                                    r25[0x4] = decomp_var_1a0;
                                    r0 = sub_100005858(r25 + 0x30, &decomp_var_1b0);
                                    r23 = decomp_var_e0;
                                    r23[0x5] = r20[0x3];
                                    if ((sign_extend_64(r23[0x67]) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00();
                                    }
                                    q0 = *(int128_t *)r24;
                                    r23[0xc] = r24[0x2];
                                    r23[0x5] = q0;
                                    r24[0x17] = 0x0;
                                    *(int8_t *)r24 = 0x0;
                                    sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_e0);
                                    r23 = decomp_var_2f8;
                                    if (decomp_var_e0 != 0x0) {
                                            sub_104d7e9dc();
                                            sub_104e07020();
                                    }
                                    r24 = r24 + 0x18;
                                    if (r24 != r21) {
                                            continue;
                                    }
                                    break;
                            }
                            r8 = sign_extend_64(r24[0x17]);
                            if ((r8 & 0xffffffff80000000) == 0x0) {
                                    if (r8 == 0x0) {
                                            r24 = r24 + 0x18;
                                            if (r24 != r21) {
                                                    continue;
                                            }
                                            break;
                                    }
                                    else {
                                            r0 = sub_104d73b30(r19, &decomp_var_198, r24);
                                            if (r0 == 0xffff) {
                                                    r25 = sub_104e06ec8(0xc8);
                                                    sub_104e07174();
                                                    decomp_var_e0 = r25;
                                                    r25[0x4] = decomp_var_1a0;
                                                    r0 = sub_100005858(r25 + 0x30, &decomp_var_1b0);
                                                    r23 = decomp_var_e0;
                                                    r23[0x5] = r20[0x3];
                                                    if ((sign_extend_64(r23[0x67]) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                                    q0 = *(int128_t *)r24;
                                                    r23[0xc] = r24[0x2];
                                                    r23[0x5] = q0;
                                                    r24[0x17] = 0x0;
                                                    *(int8_t *)r24 = 0x0;
                                                    sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_e0);
                                                    r23 = decomp_var_2f8;
                                                    if (decomp_var_e0 != 0x0) {
                                                            sub_104d7e9dc();
                                                            sub_104e07020();
                                                    }
                                                    r24 = r24 + 0x18;
                                                    if (r24 != r21) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                            else {
                                                    r24 = r24 + 0x18;
                                                    if (r24 != r21) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                    }
                            }
                            else {
                                    if (r24[0x1] != 0x0) {
                                            r0 = sub_104d73b30(r19, &decomp_var_198, r24);
                                            if (r0 == 0xffff) {
                                                    r25 = sub_104e06ec8(0xc8);
                                                    sub_104e07174();
                                                    decomp_var_e0 = r25;
                                                    r25[0x4] = decomp_var_1a0;
                                                    r0 = sub_100005858(r25 + 0x30, &decomp_var_1b0);
                                                    r23 = decomp_var_e0;
                                                    r23[0x5] = r20[0x3];
                                                    if ((sign_extend_64(r23[0x67]) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                                    q0 = *(int128_t *)r24;
                                                    r23[0xc] = r24[0x2];
                                                    r23[0x5] = q0;
                                                    r24[0x17] = 0x0;
                                                    *(int8_t *)r24 = 0x0;
                                                    sub_104d72b60(&decomp_var_160 + 0x8, &decomp_var_e0);
                                                    r23 = decomp_var_2f8;
                                                    if (decomp_var_e0 != 0x0) {
                                                            sub_104d7e9dc();
                                                            sub_104e07020();
                                                    }
                                                    r24 = r24 + 0x18;
                                                    if (r24 != r21) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                            else {
                                                    r24 = r24 + 0x18;
                                                    if (r24 != r21) {
                                                            continue;
                                                    }
                                                    break;
                                            }
                                    }
                                    else {
                                            r24 = r24 + 0x18;
                                            if (r24 != r21) {
                                                    continue;
                                            }
                                            break;
                                    }
                            }
                    }
            }
            r1 = decomp_var_340;
            asm { ccmp       w1, #0x0, #0x4, eq };
            r0 = decomp_var_2f0;
            r21 = decomp_var_344;
            if (!asm { ccmp       w1, #0x0, #0x4, eq }) {
                    r8 = r0[0xe];
                    if (r8 != r1) {
                            if (*(int8_t *)byte_106c67630 != 0x1) {
                                    sub_1029fe0a0("ISR property data size mismatch: read %u bytes, expected end at %zu");
                            }
                            sub_1015fe774(r0, r1);
                            decomp_var_e0 = &decomp_var_1f8;
                            r0 = sub_100015abc(&decomp_var_e0);
                            r8 = decomp_var_328;
                            r22 = r8;
                            if (r23 != 0x0) {
                                    r24 = *(int8_t *)byte_106c48450;
                                    sub_104d164e8(r23, r24, *(int16_t *)decomp_var_2e0, 0x1, decomp_var_2fc);
                                    r8 = decomp_var_2e0;
                                    sub_104d164e8(r23, r24, *(int16_t *)r8, 0x2, r22);
                            }
                            if (decomp_var_350 == 0x0) {
                                    r8 = 0x1;
                            }
                            if (((r21 | r8) & 0x1) != 0x0) {
                                    if ((r21 & 0x1) == 0x0) {
                                            r20 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x10);
                                            loc_102c3ec38();
                                            r0 = sub_104d7e5d4(r20 + 0x8, &decomp_var_198);
                                            r20 = r0;
                                            r0[0x1] = decomp_var_1a0;
                                            r1 = decomp_var_150;
                                            if (r1 >= r0[0x6]) {
                                                    sub_104d7e308(r20 + 0x10);
                                                    r1 = decomp_var_150;
                                            }
                                            if (r1 != 0x0) {
                                                    r21 = 0x0;
                                                    r22 = 0x0;
                                                    do {
                                                            r9 = decomp_var_158;
                                                            r8 = *(r9 + r22 * 0x8);
                                                            if (r8 == 0x0) {
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                                    if (r22 < r1) {
                                                                            continue;
                                                                    }
                                                                    break;
                                                            }
                                                            r10 = r20[0x2];
                                                            r11 = *(r10 + r21);
                                                            if (r11 == 0x0) {
                                                                    *(r9 + r22 * 0x8) = 0x0;
                                                                    sub_104d74328(r10 + r21, r8);
                                                                    r1 = decomp_var_150;
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                                    if (r22 < r1) {
                                                                            continue;
                                                                    }
                                                                    break;
                                                            }
                                                            if (r11[0xa] >= r8[0xa]) {
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                                    if (r22 < r1) {
                                                                            continue;
                                                                    }
                                                                    break;
                                                            }
                                                            *(r9 + r22 * 0x8) = 0x0;
                                                            sub_104d74328(r10 + r21, r8);
                                                            r1 = decomp_var_150;
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                    } while (r22 < r1);
                                            }
                                            sub_102c3ebc0(&decomp_var_e0, r1);
                                    }
                            }
                            else {
                                    sub_104d73bfc();
                            }
                            if (*(int8_t *)byte_106c67600 == 0x1 && *(int8_t *)byte_106c67510 == 0x1) {
                                    asm { ldaddal    x9, x8, [x8] };
                                    asm { ldaddal    x9, x8, [x8] };
                            }
                            r19 = decomp_var_198;
                            sub_104d754c0(&decomp_var_160 + 0x8);
                            r20 = decomp_var_1a8;
                            if (r20 != 0x0) {
                                    r8 = r20 + 0x8;
                                    asm { ldaddal    x9, x8, [x8] };
                                    if (r8 == 0x0) {
                                            (*(*r20 + 0x10))(r20);
                                            std::__1::__shared_weak_count::__release_weak();
                                    }
                            }
                            if (**___stack_chk_guard != decomp_var_68) {
                                    __stack_chk_fail();
                            }
                    }
                    else {
                            decomp_var_e0 = &decomp_var_1f8;
                            r0 = sub_100015abc(&decomp_var_e0);
                            r8 = decomp_var_328;
                            r22 = r8;
                            if (r23 != 0x0) {
                                    r24 = *(int8_t *)byte_106c48450;
                                    sub_104d164e8(r23, r24, *(int16_t *)decomp_var_2e0, 0x1, decomp_var_2fc);
                                    r8 = decomp_var_2e0;
                                    sub_104d164e8(r23, r24, *(int16_t *)r8, 0x2, r22);
                            }
                            if (decomp_var_350 == 0x0) {
                                    r8 = 0x1;
                            }
                            if (((r21 | r8) & 0x1) != 0x0) {
                                    if ((r21 & 0x1) == 0x0) {
                                            r20 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x10);
                                            loc_102c3ec38();
                                            r0 = sub_104d7e5d4(r20 + 0x8, &decomp_var_198);
                                            r20 = r0;
                                            r0[0x1] = decomp_var_1a0;
                                            r1 = decomp_var_150;
                                            if (r1 >= r0[0x6]) {
                                                    sub_104d7e308(r20 + 0x10);
                                                    r1 = decomp_var_150;
                                            }
                                            if (r1 != 0x0) {
                                                    r21 = 0x0;
                                                    r22 = 0x0;
                                                    do {
                                                            r9 = decomp_var_158;
                                                            r8 = *(r9 + r22 * 0x8);
                                                            if (r8 == 0x0) {
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                                    if (r22 < r1) {
                                                                            continue;
                                                                    }
                                                                    break;
                                                            }
                                                            r10 = r20[0x2];
                                                            r11 = *(r10 + r21);
                                                            if (r11 == 0x0) {
                                                                    *(r9 + r22 * 0x8) = 0x0;
                                                                    sub_104d74328(r10 + r21, r8);
                                                                    r1 = decomp_var_150;
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                                    if (r22 < r1) {
                                                                            continue;
                                                                    }
                                                                    break;
                                                            }
                                                            if (r11[0xa] >= r8[0xa]) {
                                                                    r22 = r22 + 0x1;
                                                                    r21 = r21 + 0x8;
                                                                    if (r22 < r1) {
                                                                            continue;
                                                                    }
                                                                    break;
                                                            }
                                                            *(r9 + r22 * 0x8) = 0x0;
                                                            sub_104d74328(r10 + r21, r8);
                                                            r1 = decomp_var_150;
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                    } while (r22 < r1);
                                            }
                                            sub_102c3ebc0(&decomp_var_e0, r1);
                                    }
                            }
                            else {
                                    sub_104d73bfc();
                            }
                            if (*(int8_t *)byte_106c67600 == 0x1 && *(int8_t *)byte_106c67510 == 0x1) {
                                    asm { ldaddal    x9, x8, [x8] };
                                    asm { ldaddal    x9, x8, [x8] };
                            }
                            r19 = decomp_var_198;
                            sub_104d754c0(&decomp_var_160 + 0x8);
                            r20 = decomp_var_1a8;
                            if (r20 != 0x0) {
                                    r8 = r20 + 0x8;
                                    asm { ldaddal    x9, x8, [x8] };
                                    if (r8 == 0x0) {
                                            (*(*r20 + 0x10))(r20);
                                            std::__1::__shared_weak_count::__release_weak();
                                    }
                            }
                            if (**___stack_chk_guard != decomp_var_68) {
                                    __stack_chk_fail();
                            }
                    }
            }
            else {
                    decomp_var_e0 = &decomp_var_1f8;
                    r0 = sub_100015abc(&decomp_var_e0);
                    r8 = decomp_var_328;
                    r22 = r8;
                    if (r23 != 0x0) {
                            r24 = *(int8_t *)byte_106c48450;
                            sub_104d164e8(r23, r24, *(int16_t *)decomp_var_2e0, 0x1, decomp_var_2fc);
                            r8 = decomp_var_2e0;
                            sub_104d164e8(r23, r24, *(int16_t *)r8, 0x2, r22);
                    }
                    if (decomp_var_350 == 0x0) {
                            r8 = 0x1;
                    }
                    if (((r21 | r8) & 0x1) != 0x0) {
                            if ((r21 & 0x1) == 0x0) {
                                    r20 = *(sub_104d75a9c(r19 + 0x58, r20) + 0x10);
                                    loc_102c3ec38();
                                    r0 = sub_104d7e5d4(r20 + 0x8, &decomp_var_198);
                                    r20 = r0;
                                    r0[0x1] = decomp_var_1a0;
                                    r1 = decomp_var_150;
                                    if (r1 >= r0[0x6]) {
                                            sub_104d7e308(r20 + 0x10);
                                            r1 = decomp_var_150;
                                    }
                                    if (r1 != 0x0) {
                                            r21 = 0x0;
                                            r22 = 0x0;
                                            do {
                                                    r9 = decomp_var_158;
                                                    r8 = *(r9 + r22 * 0x8);
                                                    if (r8 == 0x0) {
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    r10 = r20[0x2];
                                                    r11 = *(r10 + r21);
                                                    if (r11 == 0x0) {
                                                            *(r9 + r22 * 0x8) = 0x0;
                                                            sub_104d74328(r10 + r21, r8);
                                                            r1 = decomp_var_150;
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    if (r11[0xa] >= r8[0xa]) {
                                                            r22 = r22 + 0x1;
                                                            r21 = r21 + 0x8;
                                                            if (r22 < r1) {
                                                                    continue;
                                                            }
                                                            break;
                                                    }
                                                    *(r9 + r22 * 0x8) = 0x0;
                                                    sub_104d74328(r10 + r21, r8);
                                                    r1 = decomp_var_150;
                                                    r22 = r22 + 0x1;
                                                    r21 = r21 + 0x8;
                                            } while (r22 < r1);
                                    }
                                    sub_102c3ebc0(&decomp_var_e0, r1);
                            }
                    }
                    else {
                            sub_104d73bfc();
                    }
                    if (*(int8_t *)byte_106c67600 == 0x1 && *(int8_t *)byte_106c67510 == 0x1) {
                            asm { ldaddal    x9, x8, [x8] };
                            asm { ldaddal    x9, x8, [x8] };
                    }
                    r19 = decomp_var_198;
                    sub_104d754c0(&decomp_var_160 + 0x8);
                    r20 = decomp_var_1a8;
                    if (r20 != 0x0) {
                            r8 = r20 + 0x8;
                            asm { ldaddal    x9, x8, [x8] };
                            if (r8 == 0x0) {
                                    (*(*r20 + 0x10))(r20);
                                    std::__1::__shared_weak_count::__release_weak();
                            }
                    }
                    if (**___stack_chk_guard != decomp_var_68) {
                            __stack_chk_fail();
                    }
            }
    }
    return;
}
