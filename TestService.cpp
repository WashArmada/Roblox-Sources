function sub_1040921c4 {
    arg_10 = r28;
    arg_18 = r27;
    arg_20 = r26;
    arg_28 = r25;
    arg_30 = r24;
    arg_38 = r23;
    arg_40 = r22;
    arg_48 = r21;
    arg_50 = r20;
    arg_58 = r19;
    arg_60 = r29;
    arg_68 = r30;
    r31 = r31 + 0xffffffffffffff90 - 0x3f0;
    decomp_var_70 = **___stack_chk_guard;
    r8 = r0[0x9b];
    if (r8 == 0x0) goto .l110;
    goto loc_104092200;

.l110:
    if (**___stack_chk_guard != decomp_var_70) {
            __stack_chk_fail();
    }
    return;

loc_104092200:
    r28 = r4;
    if (r8[0xb] != r4) goto .l1;
    goto loc_104092210;

.l1:
    if (**___stack_chk_guard != decomp_var_70) {
            __stack_chk_fail();
    }
    return;

loc_104092210:
    r23 = r3;
    r21 = r2;
    r22 = r1;
    r19 = r0;
    r8[0xb] = 0x0;
    if (r8[0x14] != 0x0) {
            if (sub_1000ea888(r19) != 0x0) {
                    sub_103e582c4();
            }
            r8 = r19[0x9b];
            r8[0x14] = 0x0;
    }
    r20 = r8[0x6];
    r27 = *r8;
    r24 = std::__1::chrono::steady_clock::now();
    if (*(int8_t *)byte_106bfeb48 == 0x1) {
            sub_100e5c0d8(r19[0xa] & 0xfffffffffffffff8);
    }
    else {
            arg_2f0 = sub_1022cd278();
            arg_2f8 = 0x2dcb37;
            sub_100e5c120(&arg_2f0);
    }
    arg_8 = r28;
    r27 = r27 + r20 * 0x10;
    r20 = arg_270;
    r8 = *r27;
    if ((sign_extend_64(r8[0x6f]) & 0xffffffff80000000) == 0x0) {
            arg_250 = *(int128_t *)(r8 + 0x58);
    }
    else {
            r0 = sub_100004018(&arg_250, r8[0xb], r8[0xc]);
    }
    r0 = sub_100e5a260(r20 + 0x58, &arg_250);
    if ((sign_extend_64(arg_267) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_250);
    }
    r20 = arg_270;
    r8 = *r27;
    if ((sign_extend_64(r8[0x9f]) & 0xffffffff80000000) == 0x0) {
            arg_230 = *(int128_t *)(r8 + 0x88);
    }
    else {
            r0 = sub_100004018(&arg_230, r8[0x11], r8[0x12]);
    }
    r0 = sub_100e5a340(r20 + 0x58, &arg_230);
    if ((sign_extend_64(arg_247) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_230);
    }
    r20 = arg_270;
    r8 = *r27;
    if ((sign_extend_64(r8[0x87]) & 0xffffffff80000000) == 0x0) {
            arg_210 = r8[0x7];
    }
    else {
            r0 = sub_100004018(&arg_210, r8[0xe], r8[0xf]);
    }
    r0 = sub_100e5a420(r20 + 0x58, &arg_210);
    if ((sign_extend_64(arg_227) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_210);
    }
    r8 = *r27;
    arg_1f0 = 0x0;
    r1 = r8[0x17];
    r2 = r8[0x18];
    r28 = &arg_1f0;
    sub_1002dcaf8(&arg_1f0, r1, r2, (SAR(r2 - r1, 0x3)) * 0xaaaaaaaaaaaaaaab);
    d8 = (r24 - r23) / 1.0e+09;
    sub_10002a610(arg_270 + 0xe8);
    *(int128_t *)(arg_270 + 0xe8) = arg_1f0;
    arg_270[0x1f] = 0x0;
    arg_2f0 = r28;
    r0 = sub_100015abc(&arg_2f0);
    sub_100e5a56c(arg_270 + 0x58);
    sub_100e5a788(arg_270 + 0x58, *(int32_t *)(*r27 + 0xe8));
    sub_100e5a7f4(arg_270 + 0x58, *(int32_t *)(*r27 + 0xec));
    if (*(int8_t *)byte_106c42040 != 0x1) goto loc_104092470;
    goto loc_104092450;

loc_104092470:
    if (r22 == 0x0) goto loc_104092494;
    goto loc_104092474;

loc_104092450:
    sub_1040939e8(r19, arg_270, *r27, r22, r21);
    sub_103e3b3d8(*r27);
    r8 = arg_2f0;
    r23 = arg_2f8;
    if (r8 == r23) goto .l7;
    goto .l6;

loc_104092494:
    r8 = 0x1072fe238;
    asm { ldaprb     w8, [x8] };
    if ((r8 & 0x1) == 0x0) {
            if (loc_102c41c7c(0x1072fe238) != 0x0) {
                    sub_100004130(0x1072fe220, "Script timeout:");
                    __cxa_atexit(*std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::~basic_string(), 0x1072fe220, __mh_execute_header);
                    loc_102c41d94(0x1072fe238);
            }
    }
    r8 = r21[0x17];
    r10 = *r21;
    r11 = r21[0x1];
    bool_5534 = sign_extend_64(r8) < 0x0;
    if (sign_extend_64(r8) >= 0x0) {
            r9 = r21;
    }
    else {
            r9 = r10;
    }
    if (bool_5534) {
            r8 = r11;
    }
    arg_2f0 = r9;
    r0 = sub_102a0a518(&arg_2f0, "__testServiceSkip:", 0x12, 0x0);
    r23 = r0;
    r8 = r21[0x17];
    r10 = *r21;
    r11 = r21[0x1];
    bool_5588 = sign_extend_64(r8) < 0x0;
    if (sign_extend_64(r8) >= 0x0) {
            r9 = r21;
    }
    else {
            r9 = r10;
    }
    if (bool_5588) {
            r8 = r11;
    }
    arg_2f0 = r9;
    arg_2f8 = r8;
    r0 = sub_102a0a518(&arg_2f0, "__testServiceFailure:", 0x15, 0x0);
    if (r23 == -0x1) goto loc_104092540;
    goto loc_104092520;

loc_104092474:
    r8 = arg_270;
    sub_100e5a500(r8 + 0x58);
    sub_103e3b3d8(*r27);
    r8 = arg_2f0;
    r23 = arg_2f8;
    if (r8 == r23) goto .l5;
    goto .l4;

.l7:
    arg_2a0 = &arg_2f0;
    r0 = sub_103e3c014(&arg_2a0);
    r8 = arg_270;
    r20 = r8[0x38];
    asm { cinc       w9, w9, ne };
    if (r20 == 0x0) {
            r21 = 0x1;
    }
    else {
            r21 = 0x2;
    }
    if ((sign_extend_64(r8[0x87]) & 0xffffffff80000000) == 0x0) {
            arg_2a0 = r8[0x7];
    }
    else {
            r0 = sub_100004018(&arg_2a0, r8[0xe], r8[0xf]);
            r8 = arg_270;
    }
    r10 = arg_2a0;
    r9 = &arg_2a0;
    if (sign_extend_64(arg_2b7) >= 0x0) {
            r22 = r9;
    }
    else {
            r22 = r10;
    }
    if ((sign_extend_64(r8[0xb7]) & 0xffffffff80000000) == 0x0) {
            arg_280 = r8[0xa];
    }
    else {
            r0 = sub_100004018(&arg_280, r8[0x14], r8[0x15]);
    }
    r9 = arg_280;
    r8 = &arg_280;
    if (sign_extend_64(arg_297) < 0x0) {
            r8 = r9;
    }
    if (r20 <= 0x3) {
            r9 = *(0x106aae050 + r20 * 0x8);
    }
    else {
            r9 = "Fail";
    }
    asm { fcvtzs     w10, d0 };
    arg_2f8 = 0x0;
    arg_2f0 = r22;
    arg_300 = r8;
    r0 = sub_1023475b4("TestService: [{}/{}] {} ({}ms)", 0x1e, 0x1ccc, &arg_2f0);
    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_280);
    }
    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_2a0);
    }
    r9 = arg_270;
    if (r20 == 0x3) {
            r8 = r9 + 0x58;
            if ((sign_extend_64(r9[0x6f]) & 0xffffffff80000000) != 0x0) {
                    r0 = sub_100004018(&arg_90, *r8, r9[0xc]);
            }
            else {
                    arg_90 = *(int128_t *)r8;
            }
    }
    else {
            r8 = r9 + 0xb8;
            if ((sign_extend_64(r9[0xcf]) & 0xffffffff80000000) == 0x0) {
                    arg_90 = *(int128_t *)r8;
            }
            else {
                    r0 = sub_100004018(&arg_90, *r8, r9[0x18]);
            }
    }
    if (*(int8_t *)byte_106c42040 == 0x1) {
            sub_104094080(arg_270);
            r9 = arg_307;
            r8 = sign_extend_64(r9);
            r10 = arg_2f8;
            if (r8 < 0x0) {
                    r9 = r10;
            }
            if (r9 != 0x0) {
                    if ((sign_extend_64(arg_a7) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00(arg_90);
                    }
                    arg_90 = arg_2f0;
            }
            else {
                    if ((r8 & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00(arg_2f0);
                    }
            }
    }
    r8 = arg_a7;
    r10 = arg_98;
    if (sign_extend_64(r8) < 0x0) {
            r8 = r10;
    }
    if (r8 != 0x0) {
            r20 = &arg_2f0;
            r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::operator+<char, std::__1::char_traits<char>, std::__1::allocator<char> >(": ", &arg_90);
            r8 = arg_307;
            r10 = arg_2f0;
            r11 = arg_2f8;
            bool_5641 = sign_extend_64(r8) < 0x0;
            r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::append(&arg_b0);
            if ((sign_extend_64(arg_307) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00(arg_2f0);
            }
    }
    r9 = arg_b0;
    r8 = &arg_b0;
    if (sign_extend_64(arg_c7) < 0x0) {
            r8 = r9;
    }
    arg_0 = r8;
    sub_1027ac3a0(r21, "%s");
    r21 = arg_270[0x20];
    r23 = arg_270[0x21];
    if (r21 != r23) {
            r26 = &arg_2f0;
            r20 = &arg_2a0;
            r28 = &arg_58;
            while (true) {
                    r8 = *r21;
                    if (r8 == 0x0) {
                            r21 = r21 + 0x10;
                            if (r21 != r23) {
                                    continue;
                            }
                            break;
                    }
                    if ((sign_extend_64(r8[0x6f]) & 0xffffffff80000000) == 0x0) {
                            arg_2f0 = *(int128_t *)(r8 + 0x58);
                    }
                    else {
                            r0 = sub_100004018(&arg_2f0, r8[0xb], r8[0xc]);
                    }
                    r8 = arg_307;
                    r10 = arg_2f8;
                    if (sign_extend_64(r8) < 0x0) {
                            r8 = r10;
                    }
                    if (r8 != 0x0) {
                            r8 = *r21;
                            if ((sign_extend_64(r8[0x6f]) & 0xffffffff80000000) == 0x0) {
                                    arg_70 = *(int128_t *)(r8 + 0x58);
                            }
                            else {
                                    r0 = sub_100004018(&arg_70, r8[0xb], r8[0xc]);
                            }
                    }
                    else {
                            r0 = sub_100004130(&arg_70, "check");
                    }
                    if ((sign_extend_64(arg_307) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00(arg_2f0);
                    }
                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::operator+<char, std::__1::char_traits<char>, std::__1::allocator<char> >("    - ", &arg_70);
                    r25 = *r21;
                    r27 = r25[0x15];
                    r8 = r25[0x16];
                    arg_2f0 = r27;
                    if (r8 != 0x0) {
                            (*r8)(r25 + 0xb8, r26 + 0x10);
                            r8 = r25[0x16];
                            r27 = arg_2f0;
                    }
                    arg_2f8 = r8;
                    if (r27 != sub_10160ed5c()) {
                            r27 = 0x1;
                    }
                    else {
                            r25 = *r21;
                            r27 = r25[0x1f];
                            r8 = r25[0x20];
                            arg_2a0 = r27;
                            if (r8 != 0x0) {
                                    (*r8)(r25 + 0x108, r20 + 0x10);
                                    r8 = r25[0x20];
                                    r27 = arg_2a0;
                            }
                            arg_2a8 = r8;
                            if (r27 != sub_10160ed5c()) {
                                    r27 = 0x1;
                            }
                            r8 = arg_2a8;
                            if (r8 != 0x0) {
                                    (r8[0x2])(r20 + 0x10);
                            }
                    }
                    r8 = arg_2f8;
                    if (r8 != 0x0) {
                            (r8[0x2])(r26 + 0x10);
                    }
                    if (r27 != 0x0) {
                            r25 = *r21;
                            r9 = r25[0x15];
                            r8 = r25[0x16];
                            arg_2f0 = r9;
                            if (r8 != 0x0) {
                                    (*r8)(r25 + 0xb8, r26 + 0x10);
                                    r8 = r25[0x16];
                            }
                            arg_2f8 = r8;
                            r0 = sub_101612cc0(&arg_2f0);
                            r9 = arg_28;
                            r8 = &arg_28;
                            if (sign_extend_64(arg_3f) >= 0x0) {
                                    r27 = r8;
                            }
                            else {
                                    r27 = r9;
                            }
                            r25 = *r21;
                            r9 = r25[0x1f];
                            r8 = r25[0x20];
                            arg_2a0 = r9;
                            if (r8 != 0x0) {
                                    (*r8)(r25 + 0x108, r20 + 0x10);
                                    r8 = r25[0x20];
                            }
                            arg_2a8 = r8;
                            r0 = sub_101612cc0(&arg_2a0);
                            r9 = arg_10;
                            r8 = &arg_10;
                            if (sign_extend_64(arg_27) < 0x0) {
                                    r8 = r9;
                            }
                            arg_280 = r27;
                            sub_1023475b4(": expected {}, got {}", 0x15, 0xcc, &arg_280);
                            r8 = arg_57;
                            r10 = arg_40;
                            r11 = arg_48;
                            bool_6183 = sign_extend_64(r8) < 0x0;
                            r9 = &arg_40;
                            r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::append(&arg_58);
                            if ((sign_extend_64(arg_57) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00(arg_40);
                            }
                            if ((sign_extend_64(arg_27) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00(arg_10);
                            }
                            r8 = arg_2a8;
                            if (r8 != 0x0) {
                                    (r8[0x2])(r20 + 0x10);
                            }
                            if ((sign_extend_64(arg_3f) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00(arg_28);
                            }
                            r8 = arg_2f8;
                            if (r8 != 0x0) {
                                    (r8[0x2])(r26 + 0x10);
                            }
                    }
                    r25 = *r21;
                    if (r25[0x2a] != 0x0) {
                            r0 = std::__1::__shared_weak_count::lock();
                            if (r0 != 0x0) {
                                    r27 = r0;
                                    r9 = r25[0x29];
                                    if (r9 != 0x0) {
                                            r8 = *r21;
                                            r8 = r8[0x28];
                                            if (r8 >= 0x1) {
                                                    r9 = r9[0xd];
                                                    if ((sign_extend_64(r9[0x17]) & 0xffffffff80000000) != 0x0) {
                                                            r9 = *r9;
                                                    }
                                                    arg_2f8 = 0x0;
                                                    arg_2f0 = r9;
                                                    r0 = sub_1023475b4(" ({}:{})", 0x8, 0x1c, &arg_2f0);
                                                    r8 = arg_2b7;
                                                    r10 = arg_2a0;
                                                    r11 = arg_2a8;
                                                    bool_6142 = sign_extend_64(r8) < 0x0;
                                                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::append(&arg_58);
                                                    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00(arg_2a0);
                                                    }
                                            }
                                    }
                                    r8 = r27 + 0x8;
                                    asm { ldaddal    x9, x8, [x8] };
                                    if (r8 == 0x0) {
                                            (*(*r27 + 0x10))(r27);
                                            std::__1::__shared_weak_count::__release_weak(r27);
                                    }
                            }
                    }
                    r8 = *r21;
                    if ((sign_extend_64(r8[0x87]) & 0xffffffff80000000) == 0x0) {
                            arg_2f0 = r8[0x7];
                    }
                    else {
                            r0 = sub_100004018(&arg_2f0, r8[0xe], r8[0xf]);
                    }
                    r8 = sign_extend_64(arg_307);
                    if ((r8 & 0xffffffff80000000) == 0x0) {
                            if (r8 == 0x0) {
                                    r9 = arg_58;
                                    if (sign_extend_64(arg_6f) >= 0x0) {
                                            r8 = r28;
                                    }
                                    else {
                                            r8 = r9;
                                    }
                                    arg_0 = r8;
                                    sub_1027ac3a0(0x3, "%s");
                                    if ((sign_extend_64(arg_6f) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_58);
                                    }
                                    if ((sign_extend_64(arg_87) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_70);
                                    }
                                    r21 = r21 + 0x10;
                                    if (r21 != r23) {
                                            continue;
                                    }
                                    break;
                            }
                            else {
                                    r8 = *r21;
                                    if ((sign_extend_64(r8[0x87]) & 0xffffffff80000000) == 0x0) {
                                            arg_2a0 = r8[0x7];
                                    }
                                    else {
                                            r0 = sub_100004018(&arg_2a0, r8[0xe], r8[0xf]);
                                    }
                                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::insert(&arg_2a0, 0x0, " -- ");
                                    arg_2f0 = *(int128_t *)r0;
                                    r0[0x1] = 0x0;
                                    r0[0x2] = 0x0;
                                    *r0 = 0x0;
                                    r8 = arg_307;
                                    r10 = arg_2f0;
                                    r11 = arg_2f8;
                                    bool_6160 = sign_extend_64(r8) < 0x0;
                                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::append(&arg_58);
                                    if ((sign_extend_64(arg_307) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_2f0);
                                    }
                                    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_2a0);
                                    }
                                    r9 = arg_58;
                                    if (sign_extend_64(arg_6f) >= 0x0) {
                                            r8 = r28;
                                    }
                                    else {
                                            r8 = r9;
                                    }
                                    arg_0 = r8;
                                    sub_1027ac3a0(0x3, "%s");
                                    if ((sign_extend_64(arg_6f) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_58);
                                    }
                                    if ((sign_extend_64(arg_87) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_70);
                                    }
                                    r21 = r21 + 0x10;
                                    if (r21 != r23) {
                                            continue;
                                    }
                                    break;
                            }
                    }
                    else {
                            loc_1029f6b00(arg_2f0);
                            if (arg_2f8 != 0x0) {
                                    r8 = *r21;
                                    if ((sign_extend_64(r8[0x87]) & 0xffffffff80000000) == 0x0) {
                                            arg_2a0 = r8[0x7];
                                    }
                                    else {
                                            r0 = sub_100004018(&arg_2a0, r8[0xe], r8[0xf]);
                                    }
                                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::insert(&arg_2a0, 0x0, " -- ");
                                    arg_2f0 = *(int128_t *)r0;
                                    r0[0x1] = 0x0;
                                    r0[0x2] = 0x0;
                                    *r0 = 0x0;
                                    r8 = arg_307;
                                    r10 = arg_2f0;
                                    r11 = arg_2f8;
                                    bool_6170 = sign_extend_64(r8) < 0x0;
                                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::append(&arg_58);
                                    if ((sign_extend_64(arg_307) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_2f0);
                                    }
                                    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_2a0);
                                    }
                                    r9 = arg_58;
                                    if (sign_extend_64(arg_6f) >= 0x0) {
                                            r8 = r28;
                                    }
                                    else {
                                            r8 = r9;
                                    }
                                    arg_0 = r8;
                                    sub_1027ac3a0(0x3, "%s");
                                    if ((sign_extend_64(arg_6f) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_58);
                                    }
                                    if ((sign_extend_64(arg_87) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_70);
                                    }
                                    r21 = r21 + 0x10;
                                    if (r21 != r23) {
                                            continue;
                                    }
                                    break;
                            }
                            else {
                                    r9 = arg_58;
                                    if (sign_extend_64(arg_6f) >= 0x0) {
                                            r8 = r28;
                                    }
                                    else {
                                            r8 = r9;
                                    }
                                    arg_0 = r8;
                                    sub_1027ac3a0(0x3, "%s");
                                    if ((sign_extend_64(arg_6f) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_58);
                                    }
                                    if ((sign_extend_64(arg_87) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_70);
                                    }
                                    r21 = r21 + 0x10;
                                    if (r21 != r23) {
                                            continue;
                                    }
                                    break;
                            }
                    }
            }
    }
    if ((sign_extend_64(arg_a7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_90);
    }
    if ((sign_extend_64(arg_c7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_b0);
    }
    sub_104091dc4(r19, arg_270);
    sub_100103100(r19[0x9b] + 0x18, &arg_270);
    r8 = r19[0x9b];
    r8[0x6] = r8[0x6] + 0x1;
    if (*(int8_t *)byte_106c42040 == 0x1) {
            arg_2f0 = 0x1068a6510;
            sub_10150f5dc(r8 + 0x98, &arg_2f0);
            loc_10150f6c0(&arg_2f0);
            sub_100024280(r19[0x9b] + 0xb8);
            sub_104091538(r19);
    }
    else {
            if (sub_101367fac(r19) != 0x0) {
                    r8 = r19[0x9b];
                    r8 = r8 + 0x48;
                    if (*r8 > 0x0) {
                            sub_101478090();
                    }
            }
            sub_1040904d0(r19);
    }
    r19 = arg_278;
    if (r19 != 0x0) {
            r8 = r19 + 0x8;
            asm { ldaddal    x9, x8, [x8] };
            if (r8 == 0x0) {
                    (*(*r19 + 0x10))(r19);
                    std::__1::__shared_weak_count::__release_weak(r19);
            }
    }
    if (**___stack_chk_guard != decomp_var_70) {
            __stack_chk_fail();
    }
    return;

.l6:
    r20 = &decomp_var_c0;
    r22 = &arg_340;
    r24 = r8 + 0xe0;
    goto .l14;

loc_104092540:
    r22 = r0;
    r9 = sign_extend_64(*(int8_t *)byte_1072fe237);
    if (r9 >= 0x0) {
            r24 = *(int8_t *)byte_1072fe237;
    }
    else {
            r24 = *0x1072fe228;
    }
    r20 = sign_extend_64(r21[0x17]);
    if ((r20 & 0xffffffff80000000) != 0x0) goto loc_104092604;
    goto loc_104092568;

loc_104092520:
    if (*(int32_t *)(*r27 + 0xec) > 0x0) {
            sub_100e5a500();
    }
    else {
            sub_100e5a500();
            r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::basic_string(&arg_2f0, r21, r23 + 0x12, 0xffffffffffffffff, &arg_2a0);
            r8 = arg_307;
            r10 = arg_2f8;
            if (sign_extend_64(r8) < 0x0) {
                    r8 = r10;
            }
            if (r8 != 0x0) {
                    arg_1d0 = arg_2f0;
                    arg_2f8 = 0x0;
                    arg_2f0 = 0x0;
                    r0 = sub_100e5a6b8(arg_270 + 0x58, &arg_1d0);
                    if ((sign_extend_64(arg_1e7) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00(arg_1d0);
                    }
            }
            if ((sign_extend_64(arg_307) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
    }
    sub_103e3b3d8(*r27);
    r8 = arg_2f0;
    r23 = arg_2f8;
    if (r8 == r23) goto .l10;
    goto .l9;

.l5:
    arg_2a0 = &arg_2f0;
    r0 = sub_103e3c014(&arg_2a0);
    r8 = arg_270;
    r20 = r8[0x38];
    asm { cinc       w9, w9, ne };
    if (r20 == 0x0) {
            r21 = 0x1;
    }
    else {
            r21 = 0x2;
    }
    if ((sign_extend_64(r8[0x87]) & 0xffffffff80000000) == 0x0) {
            arg_2a0 = r8[0x7];
    }
    else {
            r0 = sub_100004018(&arg_2a0, r8[0xe], r8[0xf]);
            r8 = arg_270;
    }
    r10 = arg_2a0;
    r9 = &arg_2a0;
    if (sign_extend_64(arg_2b7) >= 0x0) {
            r22 = r9;
    }
    else {
            r22 = r10;
    }
    if ((sign_extend_64(r8[0xb7]) & 0xffffffff80000000) == 0x0) {
            arg_280 = r8[0xa];
    }
    else {
            r0 = sub_100004018(&arg_280, r8[0x14], r8[0x15]);
    }
    r9 = arg_280;
    r8 = &arg_280;
    if (sign_extend_64(arg_297) < 0x0) {
            r8 = r9;
    }
    if (r20 <= 0x3) {
            r9 = *(0x106aae050 + r20 * 0x8);
    }
    else {
            r9 = "Fail";
    }
    asm { fcvtzs     w10, d0 };
    arg_2f8 = 0x0;
    arg_2f0 = r22;
    arg_300 = r8;
    r0 = sub_1023475b4("TestService: [{}/{}] {} ({}ms)", 0x1e, 0x1ccc, &arg_2f0);
    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_280);
    }
    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_2a0);
    }
    r9 = arg_270;
    if (r20 == 0x3) {
            r8 = r9 + 0x58;
            if ((sign_extend_64(r9[0x6f]) & 0xffffffff80000000) != 0x0) {
                    r0 = sub_100004018(&arg_90, *r8, r9[0xc]);
            }
            else {
                    arg_90 = *(int128_t *)r8;
            }
    }
    else {
            r8 = r9 + 0xb8;
            if ((sign_extend_64(r9[0xcf]) & 0xffffffff80000000) == 0x0) {
                    arg_90 = *(int128_t *)r8;
            }
            else {
                    r0 = sub_100004018(&arg_90, *r8, r9[0x18]);
            }
    }
    if (*(int8_t *)byte_106c42040 == 0x1) {
            sub_104094080(arg_270);
            r9 = arg_307;
            r8 = sign_extend_64(r9);
            r10 = arg_2f8;
            if (r8 < 0x0) {
                    r9 = r10;
            }
            if (r9 != 0x0) {
                    if ((sign_extend_64(arg_a7) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00(arg_90);
                    }
                    arg_90 = arg_2f0;
            }
            else {
                    if ((r8 & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00(arg_2f0);
                    }
            }
    }
    r8 = arg_a7;
    r10 = arg_98;
    if (sign_extend_64(r8) < 0x0) {
            r8 = r10;
    }
    if (r8 != 0x0) {
            r20 = &arg_2f0;
            r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::operator+<char, std::__1::char_traits<char>, std::__1::allocator<char> >(": ", &arg_90);
            r8 = arg_307;
            r10 = arg_2f0;
            r11 = arg_2f8;
            bool_5583 = sign_extend_64(r8) < 0x0;
            r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::append(&arg_b0);
            if ((sign_extend_64(arg_307) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00(arg_2f0);
            }
    }
    r9 = arg_b0;
    r8 = &arg_b0;
    if (sign_extend_64(arg_c7) < 0x0) {
            r8 = r9;
    }
    arg_0 = r8;
    sub_1027ac3a0(r21, "%s");
    r21 = arg_270[0x20];
    r23 = arg_270[0x21];
    if (r21 != r23) {
            r26 = &arg_2f0;
            r20 = &arg_2a0;
            r28 = &arg_58;
            while (true) {
                    r8 = *r21;
                    if (r8 == 0x0) {
                            r21 = r21 + 0x10;
                            if (r21 != r23) {
                                    continue;
                            }
                            break;
                    }
                    if ((sign_extend_64(r8[0x6f]) & 0xffffffff80000000) == 0x0) {
                            arg_2f0 = *(int128_t *)(r8 + 0x58);
                    }
                    else {
                            r0 = sub_100004018(&arg_2f0, r8[0xb], r8[0xc]);
                    }
                    r8 = arg_307;
                    r10 = arg_2f8;
                    if (sign_extend_64(r8) < 0x0) {
                            r8 = r10;
                    }
                    if (r8 != 0x0) {
                            r8 = *r21;
                            if ((sign_extend_64(r8[0x6f]) & 0xffffffff80000000) == 0x0) {
                                    arg_70 = *(int128_t *)(r8 + 0x58);
                            }
                            else {
                                    r0 = sub_100004018(&arg_70, r8[0xb], r8[0xc]);
                            }
                    }
                    else {
                            r0 = sub_100004130(&arg_70, "check");
                    }
                    if ((sign_extend_64(arg_307) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00(arg_2f0);
                    }
                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::operator+<char, std::__1::char_traits<char>, std::__1::allocator<char> >("    - ", &arg_70);
                    r25 = *r21;
                    r27 = r25[0x15];
                    r8 = r25[0x16];
                    arg_2f0 = r27;
                    if (r8 != 0x0) {
                            (*r8)(r25 + 0xb8, r26 + 0x10);
                            r8 = r25[0x16];
                            r27 = arg_2f0;
                    }
                    arg_2f8 = r8;
                    if (r27 != sub_10160ed5c()) {
                            r27 = 0x1;
                    }
                    else {
                            r25 = *r21;
                            r27 = r25[0x1f];
                            r8 = r25[0x20];
                            arg_2a0 = r27;
                            if (r8 != 0x0) {
                                    (*r8)(r25 + 0x108, r20 + 0x10);
                                    r8 = r25[0x20];
                                    r27 = arg_2a0;
                            }
                            arg_2a8 = r8;
                            if (r27 != sub_10160ed5c()) {
                                    r27 = 0x1;
                            }
                            r8 = arg_2a8;
                            if (r8 != 0x0) {
                                    (r8[0x2])(r20 + 0x10);
                            }
                    }
                    r8 = arg_2f8;
                    if (r8 != 0x0) {
                            (r8[0x2])(r26 + 0x10);
                    }
                    if (r27 != 0x0) {
                            r25 = *r21;
                            r9 = r25[0x15];
                            r8 = r25[0x16];
                            arg_2f0 = r9;
                            if (r8 != 0x0) {
                                    (*r8)(r25 + 0xb8, r26 + 0x10);
                                    r8 = r25[0x16];
                            }
                            arg_2f8 = r8;
                            r0 = sub_101612cc0(&arg_2f0);
                            r9 = arg_28;
                            r8 = &arg_28;
                            if (sign_extend_64(arg_3f) >= 0x0) {
                                    r27 = r8;
                            }
                            else {
                                    r27 = r9;
                            }
                            r25 = *r21;
                            r9 = r25[0x1f];
                            r8 = r25[0x20];
                            arg_2a0 = r9;
                            if (r8 != 0x0) {
                                    (*r8)(r25 + 0x108, r20 + 0x10);
                                    r8 = r25[0x20];
                            }
                            arg_2a8 = r8;
                            r0 = sub_101612cc0(&arg_2a0);
                            r9 = arg_10;
                            r8 = &arg_10;
                            if (sign_extend_64(arg_27) < 0x0) {
                                    r8 = r9;
                            }
                            arg_280 = r27;
                            sub_1023475b4(": expected {}, got {}", 0x15, 0xcc, &arg_280);
                            r8 = arg_57;
                            r10 = arg_40;
                            r11 = arg_48;
                            bool_6500 = sign_extend_64(r8) < 0x0;
                            r9 = &arg_40;
                            r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::append(&arg_58);
                            if ((sign_extend_64(arg_57) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00(arg_40);
                            }
                            if ((sign_extend_64(arg_27) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00(arg_10);
                            }
                            r8 = arg_2a8;
                            if (r8 != 0x0) {
                                    (r8[0x2])(r20 + 0x10);
                            }
                            if ((sign_extend_64(arg_3f) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00(arg_28);
                            }
                            r8 = arg_2f8;
                            if (r8 != 0x0) {
                                    (r8[0x2])(r26 + 0x10);
                            }
                    }
                    r25 = *r21;
                    if (r25[0x2a] != 0x0) {
                            r0 = std::__1::__shared_weak_count::lock();
                            if (r0 != 0x0) {
                                    r27 = r0;
                                    r9 = r25[0x29];
                                    if (r9 != 0x0) {
                                            r8 = *r21;
                                            r8 = r8[0x28];
                                            if (r8 >= 0x1) {
                                                    r9 = r9[0xd];
                                                    if ((sign_extend_64(r9[0x17]) & 0xffffffff80000000) != 0x0) {
                                                            r9 = *r9;
                                                    }
                                                    arg_2f8 = 0x0;
                                                    arg_2f0 = r9;
                                                    r0 = sub_1023475b4(" ({}:{})", 0x8, 0x1c, &arg_2f0);
                                                    r8 = arg_2b7;
                                                    r10 = arg_2a0;
                                                    r11 = arg_2a8;
                                                    bool_6483 = sign_extend_64(r8) < 0x0;
                                                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::append(&arg_58);
                                                    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00(arg_2a0);
                                                    }
                                            }
                                    }
                                    r8 = r27 + 0x8;
                                    asm { ldaddal    x9, x8, [x8] };
                                    if (r8 == 0x0) {
                                            (*(*r27 + 0x10))(r27);
                                            std::__1::__shared_weak_count::__release_weak(r27);
                                    }
                            }
                    }
                    r8 = *r21;
                    if ((sign_extend_64(r8[0x87]) & 0xffffffff80000000) == 0x0) {
                            arg_2f0 = r8[0x7];
                    }
                    else {
                            r0 = sub_100004018(&arg_2f0, r8[0xe], r8[0xf]);
                    }
                    r8 = sign_extend_64(arg_307);
                    if ((r8 & 0xffffffff80000000) == 0x0) {
                            if (r8 == 0x0) {
                                    r9 = arg_58;
                                    if (sign_extend_64(arg_6f) >= 0x0) {
                                            r8 = r28;
                                    }
                                    else {
                                            r8 = r9;
                                    }
                                    arg_0 = r8;
                                    sub_1027ac3a0(0x3, "%s");
                                    if ((sign_extend_64(arg_6f) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_58);
                                    }
                                    if ((sign_extend_64(arg_87) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_70);
                                    }
                                    r21 = r21 + 0x10;
                                    if (r21 != r23) {
                                            continue;
                                    }
                                    break;
                            }
                            else {
                                    r8 = *r21;
                                    if ((sign_extend_64(r8[0x87]) & 0xffffffff80000000) == 0x0) {
                                            arg_2a0 = r8[0x7];
                                    }
                                    else {
                                            r0 = sub_100004018(&arg_2a0, r8[0xe], r8[0xf]);
                                    }
                                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::insert(&arg_2a0, 0x0, " -- ");
                                    arg_2f0 = *(int128_t *)r0;
                                    r0[0x1] = 0x0;
                                    r0[0x2] = 0x0;
                                    *r0 = 0x0;
                                    r8 = arg_307;
                                    r10 = arg_2f0;
                                    r11 = arg_2f8;
                                    bool_6482 = sign_extend_64(r8) < 0x0;
                                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::append(&arg_58);
                                    if ((sign_extend_64(arg_307) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_2f0);
                                    }
                                    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_2a0);
                                    }
                                    r9 = arg_58;
                                    if (sign_extend_64(arg_6f) >= 0x0) {
                                            r8 = r28;
                                    }
                                    else {
                                            r8 = r9;
                                    }
                                    arg_0 = r8;
                                    sub_1027ac3a0(0x3, "%s");
                                    if ((sign_extend_64(arg_6f) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_58);
                                    }
                                    if ((sign_extend_64(arg_87) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_70);
                                    }
                                    r21 = r21 + 0x10;
                                    if (r21 != r23) {
                                            continue;
                                    }
                                    break;
                            }
                    }
                    else {
                            loc_1029f6b00(arg_2f0);
                            if (arg_2f8 != 0x0) {
                                    r8 = *r21;
                                    if ((sign_extend_64(r8[0x87]) & 0xffffffff80000000) == 0x0) {
                                            arg_2a0 = r8[0x7];
                                    }
                                    else {
                                            r0 = sub_100004018(&arg_2a0, r8[0xe], r8[0xf]);
                                    }
                                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::insert(&arg_2a0, 0x0, " -- ");
                                    arg_2f0 = *(int128_t *)r0;
                                    r0[0x1] = 0x0;
                                    r0[0x2] = 0x0;
                                    *r0 = 0x0;
                                    r8 = arg_307;
                                    r10 = arg_2f0;
                                    r11 = arg_2f8;
                                    bool_6498 = sign_extend_64(r8) < 0x0;
                                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::append(&arg_58);
                                    if ((sign_extend_64(arg_307) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_2f0);
                                    }
                                    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_2a0);
                                    }
                                    r9 = arg_58;
                                    if (sign_extend_64(arg_6f) >= 0x0) {
                                            r8 = r28;
                                    }
                                    else {
                                            r8 = r9;
                                    }
                                    arg_0 = r8;
                                    sub_1027ac3a0(0x3, "%s");
                                    if ((sign_extend_64(arg_6f) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_58);
                                    }
                                    if ((sign_extend_64(arg_87) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_70);
                                    }
                                    r21 = r21 + 0x10;
                                    if (r21 != r23) {
                                            continue;
                                    }
                                    break;
                            }
                            else {
                                    r9 = arg_58;
                                    if (sign_extend_64(arg_6f) >= 0x0) {
                                            r8 = r28;
                                    }
                                    else {
                                            r8 = r9;
                                    }
                                    arg_0 = r8;
                                    sub_1027ac3a0(0x3, "%s");
                                    if ((sign_extend_64(arg_6f) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_58);
                                    }
                                    if ((sign_extend_64(arg_87) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_70);
                                    }
                                    r21 = r21 + 0x10;
                                    if (r21 != r23) {
                                            continue;
                                    }
                                    break;
                            }
                    }
            }
    }
    if ((sign_extend_64(arg_a7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_90);
    }
    if ((sign_extend_64(arg_c7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_b0);
    }
    sub_104091dc4(r19, arg_270);
    sub_100103100(r19[0x9b] + 0x18, &arg_270);
    r8 = r19[0x9b];
    r8[0x6] = r8[0x6] + 0x1;
    if (*(int8_t *)byte_106c42040 == 0x1) {
            arg_2f0 = 0x1068a6510;
            sub_10150f5dc(r8 + 0x98, &arg_2f0);
            loc_10150f6c0(&arg_2f0);
            sub_100024280(r19[0x9b] + 0xb8);
            sub_104091538(r19);
    }
    else {
            if (sub_101367fac(r19) != 0x0) {
                    r8 = r19[0x9b];
                    r8 = r8 + 0x48;
                    if (*r8 > 0x0) {
                            sub_101478090();
                    }
            }
            sub_1040904d0(r19);
    }
    r19 = arg_278;
    if (r19 != 0x0) {
            r8 = r19 + 0x8;
            asm { ldaddal    x9, x8, [x8] };
            if (r8 == 0x0) {
                    (*(*r19 + 0x10))(r19);
                    std::__1::__shared_weak_count::__release_weak(r19);
            }
    }
    if (**___stack_chk_guard != decomp_var_70) {
            __stack_chk_fail();
    }
    return;

.l4:
    r20 = &decomp_var_c0;
    r22 = &arg_340;
    r24 = r8 + 0xe0;
    goto .l12;

.l14:
    if (*(int8_t *)byte_106c42040 == 0x1 && *(int8_t *)byte_106bfeb48 == 0x1) {
            sub_100e597b8(r19[0xa] & 0xfffffffffffffff8);
    }
    else {
            arg_2a0 = sub_1022cd278();
            arg_2a8 = 0x2dcb0f;
            sub_100e59800(&arg_2a0);
    }
    r21 = arg_280;
    if ((sign_extend_64(*(int32_t *)(r24 + 0xffffffffffffff37)) & 0xffffffff80000000) == 0x0) {
            arg_100 = *(int128_t *)(r24 - 0xe0);
    }
    else {
            r0 = sub_100004018(&arg_100, r24[0xffffffffffffffe4], r24[0xffffffffffffffe5]);
    }
    r0 = sub_100e587d0(r21 + 0x58, &arg_100);
    if ((sign_extend_64(arg_117) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_100);
    }
    r21 = arg_280;
    if ((sign_extend_64(*(int32_t *)(r24 + 0xffffffffffffff4f)) & 0xffffffff80000000) == 0x0) {
            arg_e0 = *(int128_t *)(r24 - 0xc8);
    }
    else {
            r0 = sub_100004018(&arg_e0, r24[0xffffffffffffffe7], r24[0xffffffffffffffe8]);
    }
    r0 = sub_100e588b0(r21 + 0x58, &arg_e0);
    if ((sign_extend_64(arg_f7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_e0);
    }
    r21 = arg_280;
    decomp_var_c0 = r24[0xffffffffffffffea];
    r8 = r24[0xffffffffffffffeb];
    if (r8 != 0x0) {
            (*r8)(r24 - 0xa0, r20 + 0x10);
            r8 = r24[0xffffffffffffffeb];
    }
    sub_104093fe8(r21, &decomp_var_c0);
    r8 = r8;
    if (r8 != 0x0) {
            (r8[0x2])(r20 + 0x10);
    }
    r21 = arg_280;
    arg_340 = r24[0xfffffffffffffff4];
    r8 = r24[0xfffffffffffffff5];
    if (r8 != 0x0) {
            (*r8)(r24 - 0x50, r22 + 0x10);
            r8 = r24[0xfffffffffffffff5];
    }
    sub_104094034(r21, &arg_340);
    r8 = r8;
    if (r8 != 0x0) {
            (r8[0x2])(r22 + 0x10);
    }
    r8 = arg_280;
    r10 = r24[0xfffffffffffffffe];
    r9 = r24[0xffffffffffffffff];
    if (r9 != 0x0) {
            asm { ldadd      x28, x11, [x11] };
    }
    r0 = r8[0x2a];
    r8[0x29] = r10;
    r8[0x2a] = r9;
    if (r0 != 0x0) {
            std::__1::__shared_weak_count::__release_weak();
            r8 = arg_280;
    }
    sub_100e58a60(r8 + 0x58, *(int32_t *)r24);
    arg_d0 = arg_280;
    arg_288 = 0x0;
    arg_280 = 0x0;
    sub_100103778(arg_270 + 0x100, &arg_d0);
    r21 = arg_d8;
    if (r21 != 0x0) {
            r8 = r21 + 0x8;
            asm { ldaddal    x27, x8, [x8] };
            if (r8 == 0x0) {
                    (*(*r21 + 0x10))(r21);
                    std::__1::__shared_weak_count::__release_weak(r21);
            }
    }
    r21 = arg_288;
    if (r21 != 0x0) {
            r8 = r21 + 0x8;
            asm { ldaddal    x27, x8, [x8] };
            if (r8 == 0x0) {
                    (*(*r21 + 0x10))(r21);
                    std::__1::__shared_weak_count::__release_weak(r21);
            }
    }
    r8 = r24 + 0x8;
    r24 = r24 + 0xe8;
    if (r8 != r23) {
            continue;
    }
    break;

loc_104092604:
    if (r24 == -0x1) goto .l8;
    goto loc_10409260c;

loc_104092568:
    if (r24 == -0x1) goto loc_104093580;
    goto loc_104092570;

.l10:
    arg_2a0 = &arg_2f0;
    r0 = sub_103e3c014(&arg_2a0);
    r8 = arg_270;
    r20 = r8[0x38];
    asm { cinc       w9, w9, ne };
    if (r20 == 0x0) {
            r21 = 0x1;
    }
    else {
            r21 = 0x2;
    }
    if ((sign_extend_64(r8[0x87]) & 0xffffffff80000000) == 0x0) {
            arg_2a0 = r8[0x7];
    }
    else {
            r0 = sub_100004018(&arg_2a0, r8[0xe], r8[0xf]);
            r8 = arg_270;
    }
    r10 = arg_2a0;
    r9 = &arg_2a0;
    if (sign_extend_64(arg_2b7) >= 0x0) {
            r22 = r9;
    }
    else {
            r22 = r10;
    }
    if ((sign_extend_64(r8[0xb7]) & 0xffffffff80000000) == 0x0) {
            arg_280 = r8[0xa];
    }
    else {
            r0 = sub_100004018(&arg_280, r8[0x14], r8[0x15]);
    }
    r9 = arg_280;
    r8 = &arg_280;
    if (sign_extend_64(arg_297) < 0x0) {
            r8 = r9;
    }
    if (r20 <= 0x3) {
            r9 = *(0x106aae050 + r20 * 0x8);
    }
    else {
            r9 = "Fail";
    }
    asm { fcvtzs     w10, d0 };
    arg_2f8 = 0x0;
    arg_2f0 = r22;
    arg_300 = r8;
    r0 = sub_1023475b4("TestService: [{}/{}] {} ({}ms)", 0x1e, 0x1ccc, &arg_2f0);
    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_280);
    }
    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_2a0);
    }
    r9 = arg_270;
    if (r20 == 0x3) {
            r8 = r9 + 0x58;
            if ((sign_extend_64(r9[0x6f]) & 0xffffffff80000000) != 0x0) {
                    r0 = sub_100004018(&arg_90, *r8, r9[0xc]);
            }
            else {
                    arg_90 = *(int128_t *)r8;
            }
    }
    else {
            r8 = r9 + 0xb8;
            if ((sign_extend_64(r9[0xcf]) & 0xffffffff80000000) == 0x0) {
                    arg_90 = *(int128_t *)r8;
            }
            else {
                    r0 = sub_100004018(&arg_90, *r8, r9[0x18]);
            }
    }
    if (*(int8_t *)byte_106c42040 == 0x1) {
            sub_104094080(arg_270);
            r9 = arg_307;
            r8 = sign_extend_64(r9);
            r10 = arg_2f8;
            if (r8 < 0x0) {
                    r9 = r10;
            }
            if (r9 != 0x0) {
                    if ((sign_extend_64(arg_a7) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00(arg_90);
                    }
                    arg_90 = arg_2f0;
            }
            else {
                    if ((r8 & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00(arg_2f0);
                    }
            }
    }
    r8 = arg_a7;
    r10 = arg_98;
    if (sign_extend_64(r8) < 0x0) {
            r8 = r10;
    }
    if (r8 != 0x0) {
            r20 = &arg_2f0;
            r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::operator+<char, std::__1::char_traits<char>, std::__1::allocator<char> >(": ", &arg_90);
            r8 = arg_307;
            r10 = arg_2f0;
            r11 = arg_2f8;
            bool_5760 = sign_extend_64(r8) < 0x0;
            r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::append(&arg_b0);
            if ((sign_extend_64(arg_307) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00(arg_2f0);
            }
    }
    r9 = arg_b0;
    r8 = &arg_b0;
    if (sign_extend_64(arg_c7) < 0x0) {
            r8 = r9;
    }
    arg_0 = r8;
    sub_1027ac3a0(r21, "%s");
    r21 = arg_270[0x20];
    r23 = arg_270[0x21];
    if (r21 != r23) {
            r26 = &arg_2f0;
            r20 = &arg_2a0;
            r28 = &arg_58;
            while (true) {
                    r8 = *r21;
                    if (r8 == 0x0) {
                            r21 = r21 + 0x10;
                            if (r21 != r23) {
                                    continue;
                            }
                            break;
                    }
                    if ((sign_extend_64(r8[0x6f]) & 0xffffffff80000000) == 0x0) {
                            arg_2f0 = *(int128_t *)(r8 + 0x58);
                    }
                    else {
                            r0 = sub_100004018(&arg_2f0, r8[0xb], r8[0xc]);
                    }
                    r8 = arg_307;
                    r10 = arg_2f8;
                    if (sign_extend_64(r8) < 0x0) {
                            r8 = r10;
                    }
                    if (r8 != 0x0) {
                            r8 = *r21;
                            if ((sign_extend_64(r8[0x6f]) & 0xffffffff80000000) == 0x0) {
                                    arg_70 = *(int128_t *)(r8 + 0x58);
                            }
                            else {
                                    r0 = sub_100004018(&arg_70, r8[0xb], r8[0xc]);
                            }
                    }
                    else {
                            r0 = sub_100004130(&arg_70, "check");
                    }
                    if ((sign_extend_64(arg_307) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00(arg_2f0);
                    }
                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::operator+<char, std::__1::char_traits<char>, std::__1::allocator<char> >("    - ", &arg_70);
                    r25 = *r21;
                    r27 = r25[0x15];
                    r8 = r25[0x16];
                    arg_2f0 = r27;
                    if (r8 != 0x0) {
                            (*r8)(r25 + 0xb8, r26 + 0x10);
                            r8 = r25[0x16];
                            r27 = arg_2f0;
                    }
                    arg_2f8 = r8;
                    if (r27 != sub_10160ed5c()) {
                            r27 = 0x1;
                    }
                    else {
                            r25 = *r21;
                            r27 = r25[0x1f];
                            r8 = r25[0x20];
                            arg_2a0 = r27;
                            if (r8 != 0x0) {
                                    (*r8)(r25 + 0x108, r20 + 0x10);
                                    r8 = r25[0x20];
                                    r27 = arg_2a0;
                            }
                            arg_2a8 = r8;
                            if (r27 != sub_10160ed5c()) {
                                    r27 = 0x1;
                            }
                            r8 = arg_2a8;
                            if (r8 != 0x0) {
                                    (r8[0x2])(r20 + 0x10);
                            }
                    }
                    r8 = arg_2f8;
                    if (r8 != 0x0) {
                            (r8[0x2])(r26 + 0x10);
                    }
                    if (r27 != 0x0) {
                            r25 = *r21;
                            r9 = r25[0x15];
                            r8 = r25[0x16];
                            arg_2f0 = r9;
                            if (r8 != 0x0) {
                                    (*r8)(r25 + 0xb8, r26 + 0x10);
                                    r8 = r25[0x16];
                            }
                            arg_2f8 = r8;
                            r0 = sub_101612cc0(&arg_2f0);
                            r9 = arg_28;
                            r8 = &arg_28;
                            if (sign_extend_64(arg_3f) >= 0x0) {
                                    r27 = r8;
                            }
                            else {
                                    r27 = r9;
                            }
                            r25 = *r21;
                            r9 = r25[0x1f];
                            r8 = r25[0x20];
                            arg_2a0 = r9;
                            if (r8 != 0x0) {
                                    (*r8)(r25 + 0x108, r20 + 0x10);
                                    r8 = r25[0x20];
                            }
                            arg_2a8 = r8;
                            r0 = sub_101612cc0(&arg_2a0);
                            r9 = arg_10;
                            r8 = &arg_10;
                            if (sign_extend_64(arg_27) < 0x0) {
                                    r8 = r9;
                            }
                            arg_280 = r27;
                            sub_1023475b4(": expected {}, got {}", 0x15, 0xcc, &arg_280);
                            r8 = arg_57;
                            r10 = arg_40;
                            r11 = arg_48;
                            bool_6473 = sign_extend_64(r8) < 0x0;
                            r9 = &arg_40;
                            r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::append(&arg_58);
                            if ((sign_extend_64(arg_57) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00(arg_40);
                            }
                            if ((sign_extend_64(arg_27) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00(arg_10);
                            }
                            r8 = arg_2a8;
                            if (r8 != 0x0) {
                                    (r8[0x2])(r20 + 0x10);
                            }
                            if ((sign_extend_64(arg_3f) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00(arg_28);
                            }
                            r8 = arg_2f8;
                            if (r8 != 0x0) {
                                    (r8[0x2])(r26 + 0x10);
                            }
                    }
                    r25 = *r21;
                    if (r25[0x2a] != 0x0) {
                            r0 = std::__1::__shared_weak_count::lock();
                            if (r0 != 0x0) {
                                    r27 = r0;
                                    r9 = r25[0x29];
                                    if (r9 != 0x0) {
                                            r8 = *r21;
                                            r8 = r8[0x28];
                                            if (r8 >= 0x1) {
                                                    r9 = r9[0xd];
                                                    if ((sign_extend_64(r9[0x17]) & 0xffffffff80000000) != 0x0) {
                                                            r9 = *r9;
                                                    }
                                                    arg_2f8 = 0x0;
                                                    arg_2f0 = r9;
                                                    r0 = sub_1023475b4(" ({}:{})", 0x8, 0x1c, &arg_2f0);
                                                    r8 = arg_2b7;
                                                    r10 = arg_2a0;
                                                    r11 = arg_2a8;
                                                    bool_6463 = sign_extend_64(r8) < 0x0;
                                                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::append(&arg_58);
                                                    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00(arg_2a0);
                                                    }
                                            }
                                    }
                                    r8 = r27 + 0x8;
                                    asm { ldaddal    x9, x8, [x8] };
                                    if (r8 == 0x0) {
                                            (*(*r27 + 0x10))(r27);
                                            std::__1::__shared_weak_count::__release_weak(r27);
                                    }
                            }
                    }
                    r8 = *r21;
                    if ((sign_extend_64(r8[0x87]) & 0xffffffff80000000) == 0x0) {
                            arg_2f0 = r8[0x7];
                    }
                    else {
                            r0 = sub_100004018(&arg_2f0, r8[0xe], r8[0xf]);
                    }
                    r8 = sign_extend_64(arg_307);
                    if ((r8 & 0xffffffff80000000) == 0x0) {
                            if (r8 == 0x0) {
                                    r9 = arg_58;
                                    if (sign_extend_64(arg_6f) >= 0x0) {
                                            r8 = r28;
                                    }
                                    else {
                                            r8 = r9;
                                    }
                                    arg_0 = r8;
                                    sub_1027ac3a0(0x3, "%s");
                                    if ((sign_extend_64(arg_6f) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_58);
                                    }
                                    if ((sign_extend_64(arg_87) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_70);
                                    }
                                    r21 = r21 + 0x10;
                                    if (r21 != r23) {
                                            continue;
                                    }
                                    break;
                            }
                            else {
                                    r8 = *r21;
                                    if ((sign_extend_64(r8[0x87]) & 0xffffffff80000000) == 0x0) {
                                            arg_2a0 = r8[0x7];
                                    }
                                    else {
                                            r0 = sub_100004018(&arg_2a0, r8[0xe], r8[0xf]);
                                    }
                                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::insert(&arg_2a0, 0x0, " -- ");
                                    arg_2f0 = *(int128_t *)r0;
                                    r0[0x1] = 0x0;
                                    r0[0x2] = 0x0;
                                    *r0 = 0x0;
                                    r8 = arg_307;
                                    r10 = arg_2f0;
                                    r11 = arg_2f8;
                                    bool_6466 = sign_extend_64(r8) < 0x0;
                                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::append(&arg_58);
                                    if ((sign_extend_64(arg_307) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_2f0);
                                    }
                                    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_2a0);
                                    }
                                    r9 = arg_58;
                                    if (sign_extend_64(arg_6f) >= 0x0) {
                                            r8 = r28;
                                    }
                                    else {
                                            r8 = r9;
                                    }
                                    arg_0 = r8;
                                    sub_1027ac3a0(0x3, "%s");
                                    if ((sign_extend_64(arg_6f) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_58);
                                    }
                                    if ((sign_extend_64(arg_87) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_70);
                                    }
                                    r21 = r21 + 0x10;
                                    if (r21 != r23) {
                                            continue;
                                    }
                                    break;
                            }
                    }
                    else {
                            loc_1029f6b00(arg_2f0);
                            if (arg_2f8 != 0x0) {
                                    r8 = *r21;
                                    if ((sign_extend_64(r8[0x87]) & 0xffffffff80000000) == 0x0) {
                                            arg_2a0 = r8[0x7];
                                    }
                                    else {
                                            r0 = sub_100004018(&arg_2a0, r8[0xe], r8[0xf]);
                                    }
                                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::insert(&arg_2a0, 0x0, " -- ");
                                    arg_2f0 = *(int128_t *)r0;
                                    r0[0x1] = 0x0;
                                    r0[0x2] = 0x0;
                                    *r0 = 0x0;
                                    r8 = arg_307;
                                    r10 = arg_2f0;
                                    r11 = arg_2f8;
                                    bool_6460 = sign_extend_64(r8) < 0x0;
                                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::append(&arg_58);
                                    if ((sign_extend_64(arg_307) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_2f0);
                                    }
                                    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_2a0);
                                    }
                                    r9 = arg_58;
                                    if (sign_extend_64(arg_6f) >= 0x0) {
                                            r8 = r28;
                                    }
                                    else {
                                            r8 = r9;
                                    }
                                    arg_0 = r8;
                                    sub_1027ac3a0(0x3, "%s");
                                    if ((sign_extend_64(arg_6f) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_58);
                                    }
                                    if ((sign_extend_64(arg_87) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_70);
                                    }
                                    r21 = r21 + 0x10;
                                    if (r21 != r23) {
                                            continue;
                                    }
                                    break;
                            }
                            else {
                                    r9 = arg_58;
                                    if (sign_extend_64(arg_6f) >= 0x0) {
                                            r8 = r28;
                                    }
                                    else {
                                            r8 = r9;
                                    }
                                    arg_0 = r8;
                                    sub_1027ac3a0(0x3, "%s");
                                    if ((sign_extend_64(arg_6f) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_58);
                                    }
                                    if ((sign_extend_64(arg_87) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_70);
                                    }
                                    r21 = r21 + 0x10;
                                    if (r21 != r23) {
                                            continue;
                                    }
                                    break;
                            }
                    }
            }
    }
    if ((sign_extend_64(arg_a7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_90);
    }
    if ((sign_extend_64(arg_c7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_b0);
    }
    sub_104091dc4(r19, arg_270);
    sub_100103100(r19[0x9b] + 0x18, &arg_270);
    r8 = r19[0x9b];
    r8[0x6] = r8[0x6] + 0x1;
    if (*(int8_t *)byte_106c42040 == 0x1) {
            arg_2f0 = 0x1068a6510;
            sub_10150f5dc(r8 + 0x98, &arg_2f0);
            loc_10150f6c0(&arg_2f0);
            sub_100024280(r19[0x9b] + 0xb8);
            sub_104091538(r19);
    }
    else {
            if (sub_101367fac(r19) != 0x0) {
                    r8 = r19[0x9b];
                    r8 = r8 + 0x48;
                    if (*r8 > 0x0) {
                            sub_101478090();
                    }
            }
            sub_1040904d0(r19);
    }
    r19 = arg_278;
    if (r19 != 0x0) {
            r8 = r19 + 0x8;
            asm { ldaddal    x9, x8, [x8] };
            if (r8 == 0x0) {
                    (*(*r19 + 0x10))(r19);
                    std::__1::__shared_weak_count::__release_weak(r19);
            }
    }
    if (**___stack_chk_guard != decomp_var_70) {
            __stack_chk_fail();
    }
    return;

.l9:
    r20 = &decomp_var_c0;
    r22 = &arg_340;
    r24 = r8 + 0xe0;
    goto loc_104092a6c;

.l12:
    if (*(int8_t *)byte_106c42040 == 0x1 && *(int8_t *)byte_106bfeb48 == 0x1) {
            sub_100e597b8(r19[0xa] & 0xfffffffffffffff8);
    }
    else {
            arg_2a0 = sub_1022cd278();
            arg_2a8 = 0x2dcb0f;
            sub_100e59800(&arg_2a0);
    }
    r21 = arg_280;
    if ((sign_extend_64(*(int32_t *)(r24 + 0xffffffffffffff37)) & 0xffffffff80000000) == 0x0) {
            arg_100 = *(int128_t *)(r24 - 0xe0);
    }
    else {
            r0 = sub_100004018(&arg_100, r24[0xffffffffffffffe4], r24[0xffffffffffffffe5]);
    }
    r0 = sub_100e587d0(r21 + 0x58, &arg_100);
    if ((sign_extend_64(arg_117) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_100);
    }
    r21 = arg_280;
    if ((sign_extend_64(*(int32_t *)(r24 + 0xffffffffffffff4f)) & 0xffffffff80000000) == 0x0) {
            arg_e0 = *(int128_t *)(r24 - 0xc8);
    }
    else {
            r0 = sub_100004018(&arg_e0, r24[0xffffffffffffffe7], r24[0xffffffffffffffe8]);
    }
    r0 = sub_100e588b0(r21 + 0x58, &arg_e0);
    if ((sign_extend_64(arg_f7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_e0);
    }
    r21 = arg_280;
    decomp_var_c0 = r24[0xffffffffffffffea];
    r8 = r24[0xffffffffffffffeb];
    if (r8 != 0x0) {
            (*r8)(r24 - 0xa0, r20 + 0x10);
            r8 = r24[0xffffffffffffffeb];
    }
    sub_104093fe8(r21, &decomp_var_c0);
    r8 = r8;
    if (r8 != 0x0) {
            (r8[0x2])(r20 + 0x10);
    }
    r21 = arg_280;
    arg_340 = r24[0xfffffffffffffff4];
    r8 = r24[0xfffffffffffffff5];
    if (r8 != 0x0) {
            (*r8)(r24 - 0x50, r22 + 0x10);
            r8 = r24[0xfffffffffffffff5];
    }
    sub_104094034(r21, &arg_340);
    r8 = r8;
    if (r8 != 0x0) {
            (r8[0x2])(r22 + 0x10);
    }
    r8 = arg_280;
    r10 = r24[0xfffffffffffffffe];
    r9 = r24[0xffffffffffffffff];
    if (r9 != 0x0) {
            asm { ldadd      x28, x11, [x11] };
    }
    r0 = r8[0x2a];
    r8[0x29] = r10;
    r8[0x2a] = r9;
    if (r0 != 0x0) {
            std::__1::__shared_weak_count::__release_weak();
            r8 = arg_280;
    }
    sub_100e58a60(r8 + 0x58, *(int32_t *)r24);
    arg_d0 = arg_280;
    arg_288 = 0x0;
    arg_280 = 0x0;
    sub_100103778(arg_270 + 0x100, &arg_d0);
    r21 = arg_d8;
    if (r21 != 0x0) {
            r8 = r21 + 0x8;
            asm { ldaddal    x27, x8, [x8] };
            if (r8 == 0x0) {
                    (*(*r21 + 0x10))(r21);
                    std::__1::__shared_weak_count::__release_weak(r21);
            }
    }
    r21 = arg_288;
    if (r21 != 0x0) {
            r8 = r21 + 0x8;
            asm { ldaddal    x27, x8, [x8] };
            if (r8 == 0x0) {
                    (*(*r21 + 0x10))(r21);
                    std::__1::__shared_weak_count::__release_weak(r21);
            }
    }
    r8 = r24 + 0x8;
    r24 = r24 + 0xe8;
    if (r8 != r23) {
            continue;
    }
    break;

.l8:
    sub_10000c1a4();
    asm { brk        #0x1 };
    return;

loc_10409260c:
    r0 = *r21;
    r11 = r21[0x1];
    if (r11 >= r24) {
            r23 = r24;
    }
    else {
            r23 = r11;
    }
    if (r9 >= 0x0) {
            r1 = 0x1072fe220;
    }
    else {
            r1 = *0x1072fe220;
    }
    if (memcmp(r0, r1, r23) == 0x0) {
            if (r23 == r24) {
                    sub_100e5a500();
            }
            else {
                    if (r22 != -0x1) {
                            sub_100e5a500(arg_270 + 0x58, 0x1);
                            r20 = &arg_2a0;
                            r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::basic_string(&arg_2a0, r21, r22 + 0x15, 0xffffffffffffffff, &arg_2f0);
                            r8 = arg_2b7;
                            r10 = arg_2a0;
                            r11 = arg_2a8;
                            bool_5870 = sign_extend_64(r8) < 0x0;
                            if (!bool_5870) {
                                    sub_102a10938();
                                    r0 = sub_102a0fcd4(&arg_2f0);
                                    if (r0 != 0x0) {
                                            if (*(int8_t *)byte_106bfeb48 == 0x1) {
                                                    sub_100e597b8(r19[0xa] & 0xfffffffffffffff8);
                                                    r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e587d0(arg_b0 + 0x58, &arg_1b8);
                                                            if ((sign_extend_64(arg_1cf) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_1b8);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                                    if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_1a0);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                                    if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_188);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0fd40(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                                    arg_280 = r0;
                                                                    r0 = loc_102a115c0(&arg_280);
                                                                    sub_100e58a60(arg_b0 + 0x58, r0);
                                                            }
                                                            arg_170 = arg_b0;
                                                            arg_b0 = 0x0;
                                                            sub_100103778(arg_270 + 0x100, &arg_170);
                                                            sub_100005114(&arg_170);
                                                            r0 = sub_100005114(&arg_b0);
                                                            r0 = loc_102a105c0(&arg_2f0);
                                                            if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                                    else {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                                    if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_1a0);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                                    if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_188);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0fd40(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                                    arg_280 = r0;
                                                                    r0 = loc_102a115c0(&arg_280);
                                                                    sub_100e58a60(arg_b0 + 0x58, r0);
                                                            }
                                                            arg_170 = arg_b0;
                                                            arg_b0 = 0x0;
                                                            sub_100103778(arg_270 + 0x100, &arg_170);
                                                            sub_100005114(&arg_170);
                                                            r0 = sub_100005114(&arg_b0);
                                                            r0 = loc_102a105c0(&arg_2f0);
                                                            if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                            }
                                            else {
                                                    sub_104093fa4();
                                                    r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e587d0(arg_b0 + 0x58, &arg_1b8);
                                                            if ((sign_extend_64(arg_1cf) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_1b8);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                                    if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_1a0);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                                    if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_188);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0fd40(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                                    arg_280 = r0;
                                                                    r0 = loc_102a115c0(&arg_280);
                                                                    sub_100e58a60(arg_b0 + 0x58, r0);
                                                            }
                                                            arg_170 = arg_b0;
                                                            arg_b0 = 0x0;
                                                            sub_100103778(arg_270 + 0x100, &arg_170);
                                                            sub_100005114(&arg_170);
                                                            r0 = sub_100005114(&arg_b0);
                                                            r0 = loc_102a105c0(&arg_2f0);
                                                            if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                                    else {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                                    if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_1a0);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                                    if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_188);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0fd40(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                                    arg_280 = r0;
                                                                    r0 = loc_102a115c0(&arg_280);
                                                                    sub_100e58a60(arg_b0 + 0x58, r0);
                                                            }
                                                            arg_170 = arg_b0;
                                                            arg_b0 = 0x0;
                                                            sub_100103778(arg_270 + 0x100, &arg_170);
                                                            sub_100005114(&arg_170);
                                                            r0 = sub_100005114(&arg_b0);
                                                            r0 = loc_102a105c0(&arg_2f0);
                                                            if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                            }
                                    }
                                    else {
                                            sub_100004130(&arg_158, "Test failed with a malformed structured failure payload.");
                                            r0 = sub_100e5a5d8(arg_270 + 0x58, &arg_158);
                                            if ((sign_extend_64(arg_16f) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00(arg_158);
                                            }
                                            r0 = loc_102a105c0(&arg_2f0);
                                            if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                    }
                            }
                            else {
                                    sub_102a10938();
                                    r0 = sub_102a0fcd4(&arg_2f0);
                                    if (r0 != 0x0) {
                                            if (*(int8_t *)byte_106bfeb48 == 0x1) {
                                                    sub_100e597b8(r19[0xa] & 0xfffffffffffffff8);
                                                    r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e587d0(arg_b0 + 0x58, &arg_1b8);
                                                            if ((sign_extend_64(arg_1cf) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_1b8);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                                    if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_1a0);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                                    if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_188);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0fd40(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                                    arg_280 = r0;
                                                                    r0 = loc_102a115c0(&arg_280);
                                                                    sub_100e58a60(arg_b0 + 0x58, r0);
                                                            }
                                                            arg_170 = arg_b0;
                                                            arg_b0 = 0x0;
                                                            sub_100103778(arg_270 + 0x100, &arg_170);
                                                            sub_100005114(&arg_170);
                                                            r0 = sub_100005114(&arg_b0);
                                                            r0 = loc_102a105c0(&arg_2f0);
                                                            if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                                    else {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                                    if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_1a0);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                                    if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_188);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0fd40(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                                    arg_280 = r0;
                                                                    r0 = loc_102a115c0(&arg_280);
                                                                    sub_100e58a60(arg_b0 + 0x58, r0);
                                                            }
                                                            arg_170 = arg_b0;
                                                            arg_b0 = 0x0;
                                                            sub_100103778(arg_270 + 0x100, &arg_170);
                                                            sub_100005114(&arg_170);
                                                            r0 = sub_100005114(&arg_b0);
                                                            r0 = loc_102a105c0(&arg_2f0);
                                                            if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                            }
                                            else {
                                                    sub_104093fa4();
                                                    r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e587d0(arg_b0 + 0x58, &arg_1b8);
                                                            if ((sign_extend_64(arg_1cf) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_1b8);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                                    if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_1a0);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                                    if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_188);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0fd40(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                                    arg_280 = r0;
                                                                    r0 = loc_102a115c0(&arg_280);
                                                                    sub_100e58a60(arg_b0 + 0x58, r0);
                                                            }
                                                            arg_170 = arg_b0;
                                                            arg_b0 = 0x0;
                                                            sub_100103778(arg_270 + 0x100, &arg_170);
                                                            sub_100005114(&arg_170);
                                                            r0 = sub_100005114(&arg_b0);
                                                            r0 = loc_102a105c0(&arg_2f0);
                                                            if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                                    else {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                                    if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_1a0);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                                    if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_188);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0fd40(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                                    arg_280 = r0;
                                                                    r0 = loc_102a115c0(&arg_280);
                                                                    sub_100e58a60(arg_b0 + 0x58, r0);
                                                            }
                                                            arg_170 = arg_b0;
                                                            arg_b0 = 0x0;
                                                            sub_100103778(arg_270 + 0x100, &arg_170);
                                                            sub_100005114(&arg_170);
                                                            r0 = sub_100005114(&arg_b0);
                                                            r0 = loc_102a105c0(&arg_2f0);
                                                            if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                            }
                                    }
                                    else {
                                            sub_100004130(&arg_158, "Test failed with a malformed structured failure payload.");
                                            r0 = sub_100e5a5d8(arg_270 + 0x58, &arg_158);
                                            if ((sign_extend_64(arg_16f) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00(arg_158);
                                            }
                                            r0 = loc_102a105c0(&arg_2f0);
                                            if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                    }
                            }
                    }
                    else {
                            r8 = r21[0x1];
                            if (r20 >= 0x0) {
                                    r9 = r20;
                            }
                            else {
                                    r9 = r8;
                            }
                            r8 = arg_270;
                            if (r9 != 0x0) {
                                    sub_100e5a500(r8 + 0x58, 0x1);
                                    r20 = arg_270;
                                    if ((sign_extend_64(r21[0x17]) & 0xffffffff80000000) == 0x0) {
                                            arg_120 = *(int128_t *)r21;
                                            r0 = sub_100e5a5d8(r20 + 0x58, &arg_120);
                                            if ((sign_extend_64(arg_137) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                    }
                                    else {
                                            r0 = sub_100004018(&arg_120, *r21, r21[0x1]);
                                            r0 = sub_100e5a5d8(r20 + 0x58, &arg_120);
                                            if ((sign_extend_64(arg_137) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                    }
                            }
                            else {
                                    sub_100e5a500(r8 + 0x58, 0x1);
                                    r0 = loc_1029f6ac8(0x80);
                                    arg_140 = r0;
                                    *(int128_t *)(&arg_49 + 0xff) = 5.97819e-322;
                                    q0 = *"be extracted. Throw a string to report a failure message.";
                                    q1 = *"row a string to report a failure message.";
                                    r0[0x8] = q0;
                                    r0[0xa] = q1;
                                    r0[0x6] = *(int128_t *)"report a failure message.";
                                    *(int128_t *)(r0 + 0x69) = *(int128_t *)"failure message.";
                                    q0 = *"Test callback raised a non-string error value; no message could be extracted. Throw a string to report a failure message.";
                                    q1 = *"ised a non-string error value; no message could be extracted. Throw a string to report a failure message.";
                                    *r0 = q0;
                                    r0[0x2] = q1;
                                    q0 = *"g error value; no message could be extracted. Throw a string to report a failure message.";
                                    q1 = *"o message could be extracted. Throw a string to report a failure message.";
                                    r0[0x4] = q0;
                                    r0[0x6] = q1;
                                    r0[0x79] = 0x0;
                                    r0 = sub_100e5a5d8(arg_270 + 0x58, &arg_140);
                                    if ((sign_extend_64(arg_157) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00();
                                    }
                            }
                    }
            }
    }
    else {
            if (r22 != -0x1) {
                    sub_100e5a500(arg_270 + 0x58, 0x1);
                    r20 = &arg_2a0;
                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::basic_string(&arg_2a0, r21, r22 + 0x15, 0xffffffffffffffff, &arg_2f0);
                    r8 = arg_2b7;
                    r10 = arg_2a0;
                    r11 = arg_2a8;
                    bool_5774 = sign_extend_64(r8) < 0x0;
                    bool_5738 = sign_extend_64(r8) < 0x0;
                    if (sign_extend_64(r8) >= 0x0) {
                            if (!bool_5774) {
                                    sub_102a10938();
                                    r0 = sub_102a0fcd4(&arg_2f0);
                                    if (r0 != 0x0) {
                                            if (*(int8_t *)byte_106bfeb48 == 0x1) {
                                                    sub_100e597b8(r19[0xa] & 0xfffffffffffffff8);
                                                    r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e587d0(arg_b0 + 0x58, &arg_1b8);
                                                            if ((sign_extend_64(arg_1cf) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_1b8);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                                    if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_1a0);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                                    if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_188);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0fd40(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                                    arg_280 = r0;
                                                                    r0 = loc_102a115c0(&arg_280);
                                                                    sub_100e58a60(arg_b0 + 0x58, r0);
                                                            }
                                                            arg_170 = arg_b0;
                                                            arg_b0 = 0x0;
                                                            sub_100103778(arg_270 + 0x100, &arg_170);
                                                            sub_100005114(&arg_170);
                                                            r0 = sub_100005114(&arg_b0);
                                                            r0 = loc_102a105c0(&arg_2f0);
                                                            if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                                    else {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                                    if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_1a0);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                                    if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_188);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0fd40(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                                    arg_280 = r0;
                                                                    r0 = loc_102a115c0(&arg_280);
                                                                    sub_100e58a60(arg_b0 + 0x58, r0);
                                                            }
                                                            arg_170 = arg_b0;
                                                            arg_b0 = 0x0;
                                                            sub_100103778(arg_270 + 0x100, &arg_170);
                                                            sub_100005114(&arg_170);
                                                            r0 = sub_100005114(&arg_b0);
                                                            r0 = loc_102a105c0(&arg_2f0);
                                                            if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                            }
                                            else {
                                                    sub_104093fa4();
                                                    r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e587d0(arg_b0 + 0x58, &arg_1b8);
                                                            if ((sign_extend_64(arg_1cf) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_1b8);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                            if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_1a0);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                            if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_188);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0fd40(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = loc_102a115c0(&arg_280);
                                                            sub_100e58a60(arg_b0 + 0x58, r0);
                                                    }
                                                    arg_170 = arg_b0;
                                                    arg_b0 = 0x0;
                                                    sub_100103778(arg_270 + 0x100, &arg_170);
                                                    sub_100005114(&arg_170);
                                                    r0 = sub_100005114(&arg_b0);
                                                    r0 = loc_102a105c0(&arg_2f0);
                                                    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                            }
                                    }
                                    else {
                                            sub_100004130(&arg_158, "Test failed with a malformed structured failure payload.");
                                            r0 = sub_100e5a5d8(arg_270 + 0x58, &arg_158);
                                            if ((sign_extend_64(arg_16f) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00(arg_158);
                                            }
                                            r0 = loc_102a105c0(&arg_2f0);
                                            if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                    }
                            }
                            else {
                                    sub_102a10938();
                                    r0 = sub_102a0fcd4(&arg_2f0);
                                    if (r0 != 0x0) {
                                            if (*(int8_t *)byte_106bfeb48 == 0x1) {
                                                    sub_100e597b8(r19[0xa] & 0xfffffffffffffff8);
                                            }
                                            else {
                                                    sub_104093fa4();
                                            }
                                            r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                            arg_280 = r0;
                                            r0 = sub_102a0e548(&arg_280);
                                            if (r0 != 0x0) {
                                                    r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                                    arg_90 = r0;
                                                    arg_98 = r1;
                                                    arg_280 = 0x0;
                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                    r0 = sub_100e587d0(arg_b0 + 0x58, &arg_1b8);
                                                    if ((sign_extend_64(arg_1cf) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00(arg_1b8);
                                                    }
                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00(arg_280);
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                            if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_1a0);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                            if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_188);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0fd40(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = loc_102a115c0(&arg_280);
                                                            sub_100e58a60(arg_b0 + 0x58, r0);
                                                    }
                                                    arg_170 = arg_b0;
                                                    arg_b0 = 0x0;
                                                    sub_100103778(arg_270 + 0x100, &arg_170);
                                                    sub_100005114(&arg_170);
                                                    r0 = sub_100005114(&arg_b0);
                                                    r0 = loc_102a105c0(&arg_2f0);
                                                    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                            }
                                            else {
                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                            if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_1a0);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                            if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_188);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0fd40(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = loc_102a115c0(&arg_280);
                                                            sub_100e58a60(arg_b0 + 0x58, r0);
                                                    }
                                                    arg_170 = arg_b0;
                                                    arg_b0 = 0x0;
                                                    sub_100103778(arg_270 + 0x100, &arg_170);
                                                    sub_100005114(&arg_170);
                                                    r0 = sub_100005114(&arg_b0);
                                                    r0 = loc_102a105c0(&arg_2f0);
                                                    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                            }
                                    }
                                    else {
                                            sub_100004130(&arg_158, "Test failed with a malformed structured failure payload.");
                                            r0 = sub_100e5a5d8(arg_270 + 0x58, &arg_158);
                                            if ((sign_extend_64(arg_16f) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00(arg_158);
                                            }
                                            r0 = loc_102a105c0(&arg_2f0);
                                            if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                    }
                            }
                    }
                    else {
                            sub_102a10938();
                            r0 = sub_102a0fcd4(&arg_2f0);
                            if (r0 != 0x0) {
                                    if (*(int8_t *)byte_106bfeb48 == 0x1) {
                                            sub_100e597b8(r19[0xa] & 0xfffffffffffffff8);
                                            r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                            arg_280 = r0;
                                            r0 = sub_102a0e548(&arg_280);
                                            if (r0 != 0x0) {
                                                    r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                                    arg_90 = r0;
                                                    arg_98 = r1;
                                                    arg_280 = 0x0;
                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                    r0 = sub_100e587d0(arg_b0 + 0x58, &arg_1b8);
                                                    if ((sign_extend_64(arg_1cf) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00(arg_1b8);
                                                    }
                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00(arg_280);
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                            if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_1a0);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                            if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_188);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0fd40(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = loc_102a115c0(&arg_280);
                                                            sub_100e58a60(arg_b0 + 0x58, r0);
                                                    }
                                                    arg_170 = arg_b0;
                                                    arg_b0 = 0x0;
                                                    sub_100103778(arg_270 + 0x100, &arg_170);
                                                    sub_100005114(&arg_170);
                                                    r0 = sub_100005114(&arg_b0);
                                                    r0 = loc_102a105c0(&arg_2f0);
                                                    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                            }
                                            else {
                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                            if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_1a0);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                            if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_188);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0fd40(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = loc_102a115c0(&arg_280);
                                                            sub_100e58a60(arg_b0 + 0x58, r0);
                                                    }
                                                    arg_170 = arg_b0;
                                                    arg_b0 = 0x0;
                                                    sub_100103778(arg_270 + 0x100, &arg_170);
                                                    sub_100005114(&arg_170);
                                                    r0 = sub_100005114(&arg_b0);
                                                    r0 = loc_102a105c0(&arg_2f0);
                                                    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                            }
                                    }
                                    else {
                                            sub_104093fa4();
                                            r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                            arg_280 = r0;
                                            r0 = sub_102a0e548(&arg_280);
                                            if (r0 != 0x0) {
                                                    r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                                    arg_90 = r0;
                                                    arg_98 = r1;
                                                    arg_280 = 0x0;
                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                    r0 = sub_100e587d0(arg_b0 + 0x58, &arg_1b8);
                                                    if ((sign_extend_64(arg_1cf) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00(arg_1b8);
                                                    }
                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00(arg_280);
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                            if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_1a0);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                            if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_188);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0fd40(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = loc_102a115c0(&arg_280);
                                                            sub_100e58a60(arg_b0 + 0x58, r0);
                                                    }
                                                    arg_170 = arg_b0;
                                                    arg_b0 = 0x0;
                                                    sub_100103778(arg_270 + 0x100, &arg_170);
                                                    sub_100005114(&arg_170);
                                                    r0 = sub_100005114(&arg_b0);
                                                    r0 = loc_102a105c0(&arg_2f0);
                                                    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                            }
                                            else {
                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                            if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_1a0);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                            if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_188);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0fd40(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = loc_102a115c0(&arg_280);
                                                            sub_100e58a60(arg_b0 + 0x58, r0);
                                                    }
                                                    arg_170 = arg_b0;
                                                    arg_b0 = 0x0;
                                                    sub_100103778(arg_270 + 0x100, &arg_170);
                                                    sub_100005114(&arg_170);
                                                    r0 = sub_100005114(&arg_b0);
                                                    r0 = loc_102a105c0(&arg_2f0);
                                                    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                            }
                                    }
                            }
                            else {
                                    sub_100004130(&arg_158, "Test failed with a malformed structured failure payload.");
                                    r0 = sub_100e5a5d8(arg_270 + 0x58, &arg_158);
                                    if ((sign_extend_64(arg_16f) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_158);
                                    }
                                    r0 = loc_102a105c0(&arg_2f0);
                                    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00();
                                    }
                            }
                    }
            }
            else {
                    r8 = r21[0x1];
                    if (r20 >= 0x0) {
                            r9 = r20;
                            r8 = arg_270;
                            if (r9 != 0x0) {
                                    sub_100e5a500(r8 + 0x58, 0x1);
                                    r20 = arg_270;
                                    if ((sign_extend_64(r21[0x17]) & 0xffffffff80000000) == 0x0) {
                                            arg_120 = *(int128_t *)r21;
                                            r0 = sub_100e5a5d8(r20 + 0x58, &arg_120);
                                            if ((sign_extend_64(arg_137) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                    }
                                    else {
                                            r0 = sub_100004018(&arg_120, *r21, r21[0x1]);
                                            r0 = sub_100e5a5d8(r20 + 0x58, &arg_120);
                                            if ((sign_extend_64(arg_137) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                    }
                            }
                            else {
                                    sub_100e5a500(r8 + 0x58, 0x1);
                                    r0 = loc_1029f6ac8(0x80);
                                    arg_140 = r0;
                                    *(int128_t *)(&arg_49 + 0xff) = 5.97819e-322;
                                    q0 = *"be extracted. Throw a string to report a failure message.";
                                    q1 = *"row a string to report a failure message.";
                                    r0[0x8] = q0;
                                    r0[0xa] = q1;
                                    r0[0x6] = *(int128_t *)"report a failure message.";
                                    *(int128_t *)(r0 + 0x69) = *(int128_t *)"failure message.";
                                    q0 = *"Test callback raised a non-string error value; no message could be extracted. Throw a string to report a failure message.";
                                    q1 = *"ised a non-string error value; no message could be extracted. Throw a string to report a failure message.";
                                    *r0 = q0;
                                    r0[0x2] = q1;
                                    q0 = *"g error value; no message could be extracted. Throw a string to report a failure message.";
                                    q1 = *"o message could be extracted. Throw a string to report a failure message.";
                                    r0[0x4] = q0;
                                    r0[0x6] = q1;
                                    r0[0x79] = 0x0;
                                    r0 = sub_100e5a5d8(arg_270 + 0x58, &arg_140);
                                    if ((sign_extend_64(arg_157) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00();
                                    }
                            }
                    }
                    else {
                            r9 = r8;
                            r8 = arg_270;
                            if (r9 != 0x0) {
                                    sub_100e5a500(r8 + 0x58, 0x1);
                                    r20 = arg_270;
                                    if ((sign_extend_64(r21[0x17]) & 0xffffffff80000000) == 0x0) {
                                            arg_120 = *(int128_t *)r21;
                                    }
                                    else {
                                            r0 = sub_100004018(&arg_120, *r21, r21[0x1]);
                                    }
                                    r0 = sub_100e5a5d8(r20 + 0x58, &arg_120);
                                    if ((sign_extend_64(arg_137) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00();
                                    }
                            }
                            else {
                                    sub_100e5a500(r8 + 0x58, 0x1);
                                    r0 = loc_1029f6ac8(0x80);
                                    arg_140 = r0;
                                    *(int128_t *)(&arg_49 + 0xff) = 5.97819e-322;
                                    q0 = *"be extracted. Throw a string to report a failure message.";
                                    q1 = *"row a string to report a failure message.";
                                    r0[0x8] = q0;
                                    r0[0xa] = q1;
                                    r0[0x6] = *(int128_t *)"report a failure message.";
                                    *(int128_t *)(r0 + 0x69) = *(int128_t *)"failure message.";
                                    q0 = *"Test callback raised a non-string error value; no message could be extracted. Throw a string to report a failure message.";
                                    q1 = *"ised a non-string error value; no message could be extracted. Throw a string to report a failure message.";
                                    *r0 = q0;
                                    r0[0x2] = q1;
                                    q0 = *"g error value; no message could be extracted. Throw a string to report a failure message.";
                                    q1 = *"o message could be extracted. Throw a string to report a failure message.";
                                    r0[0x4] = q0;
                                    r0[0x6] = q1;
                                    r0[0x79] = 0x0;
                                    r0 = sub_100e5a5d8(arg_270 + 0x58, &arg_140);
                                    if ((sign_extend_64(arg_157) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00();
                                    }
                            }
                    }
            }
    }
    sub_103e3b3d8(*r27);
    r8 = arg_2f0;
    r23 = arg_2f8;
    if (r8 == r23) goto .l3;
    goto .l2;

loc_104093580:
    sub_10000c1a4();
    asm { brk        #0x1 };
    return;

loc_104092570:
    if (r20 >= r24) {
            r23 = r24;
    }
    else {
            r23 = r20;
    }
    r0 = r21;
    if (r9 >= 0x0) {
            r1 = 0x1072fe220;
    }
    else {
            r1 = *0x1072fe220;
    }
    if (memcmp(r0, r1, r23) == 0x0) {
            if (r23 == r24) {
                    sub_100e5a500();
            }
            else {
                    if (r22 != -0x1) {
                            sub_100e5a500(arg_270 + 0x58, 0x1);
                            r20 = &arg_2a0;
                            r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::basic_string(&arg_2a0, r21, r22 + 0x15, 0xffffffffffffffff, &arg_2f0);
                            r8 = arg_2b7;
                            r10 = arg_2a0;
                            r11 = arg_2a8;
                            bool_6054 = sign_extend_64(r8) < 0x0;
                            if (!bool_6054) {
                                    sub_102a10938();
                                    r0 = sub_102a0fcd4(&arg_2f0);
                                    if (r0 != 0x0) {
                                            if (*(int8_t *)byte_106bfeb48 == 0x1) {
                                                    sub_100e597b8(r19[0xa] & 0xfffffffffffffff8);
                                                    r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e587d0(arg_b0 + 0x58, &arg_1b8);
                                                            if ((sign_extend_64(arg_1cf) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_1b8);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                                    if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_1a0);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                                    if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_188);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0fd40(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                                    arg_280 = r0;
                                                                    r0 = loc_102a115c0(&arg_280);
                                                                    sub_100e58a60(arg_b0 + 0x58, r0);
                                                            }
                                                            arg_170 = arg_b0;
                                                            arg_b0 = 0x0;
                                                            sub_100103778(arg_270 + 0x100, &arg_170);
                                                            sub_100005114(&arg_170);
                                                            r0 = sub_100005114(&arg_b0);
                                                            r0 = loc_102a105c0(&arg_2f0);
                                                            if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                                    else {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                                    if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_1a0);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                                    if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_188);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0fd40(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                                    arg_280 = r0;
                                                                    r0 = loc_102a115c0(&arg_280);
                                                                    sub_100e58a60(arg_b0 + 0x58, r0);
                                                            }
                                                            arg_170 = arg_b0;
                                                            arg_b0 = 0x0;
                                                            sub_100103778(arg_270 + 0x100, &arg_170);
                                                            sub_100005114(&arg_170);
                                                            r0 = sub_100005114(&arg_b0);
                                                            r0 = loc_102a105c0(&arg_2f0);
                                                            if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                            }
                                            else {
                                                    sub_104093fa4();
                                                    r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e587d0(arg_b0 + 0x58, &arg_1b8);
                                                            if ((sign_extend_64(arg_1cf) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_1b8);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                                    if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_1a0);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                                    if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_188);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0fd40(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                                    arg_280 = r0;
                                                                    r0 = loc_102a115c0(&arg_280);
                                                                    sub_100e58a60(arg_b0 + 0x58, r0);
                                                            }
                                                            arg_170 = arg_b0;
                                                            arg_b0 = 0x0;
                                                            sub_100103778(arg_270 + 0x100, &arg_170);
                                                            sub_100005114(&arg_170);
                                                            r0 = sub_100005114(&arg_b0);
                                                            r0 = loc_102a105c0(&arg_2f0);
                                                            if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                                    else {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                                    if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_1a0);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                                    if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_188);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0fd40(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                                    arg_280 = r0;
                                                                    r0 = loc_102a115c0(&arg_280);
                                                                    sub_100e58a60(arg_b0 + 0x58, r0);
                                                            }
                                                            arg_170 = arg_b0;
                                                            arg_b0 = 0x0;
                                                            sub_100103778(arg_270 + 0x100, &arg_170);
                                                            sub_100005114(&arg_170);
                                                            r0 = sub_100005114(&arg_b0);
                                                            r0 = loc_102a105c0(&arg_2f0);
                                                            if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                            }
                                    }
                                    else {
                                            sub_100004130(&arg_158, "Test failed with a malformed structured failure payload.");
                                            r0 = sub_100e5a5d8(arg_270 + 0x58, &arg_158);
                                            if ((sign_extend_64(arg_16f) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00(arg_158);
                                            }
                                            r0 = loc_102a105c0(&arg_2f0);
                                            if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                    }
                            }
                            else {
                                    sub_102a10938();
                                    r0 = sub_102a0fcd4(&arg_2f0);
                                    if (r0 != 0x0) {
                                            if (*(int8_t *)byte_106bfeb48 == 0x1) {
                                                    sub_100e597b8(r19[0xa] & 0xfffffffffffffff8);
                                                    r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e587d0(arg_b0 + 0x58, &arg_1b8);
                                                            if ((sign_extend_64(arg_1cf) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_1b8);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                                    if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_1a0);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                                    if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_188);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0fd40(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                                    arg_280 = r0;
                                                                    r0 = loc_102a115c0(&arg_280);
                                                                    sub_100e58a60(arg_b0 + 0x58, r0);
                                                            }
                                                            arg_170 = arg_b0;
                                                            arg_b0 = 0x0;
                                                            sub_100103778(arg_270 + 0x100, &arg_170);
                                                            sub_100005114(&arg_170);
                                                            r0 = sub_100005114(&arg_b0);
                                                            r0 = loc_102a105c0(&arg_2f0);
                                                            if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                                    else {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                                    if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_1a0);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                                    if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_188);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0fd40(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                                    arg_280 = r0;
                                                                    r0 = loc_102a115c0(&arg_280);
                                                                    sub_100e58a60(arg_b0 + 0x58, r0);
                                                            }
                                                            arg_170 = arg_b0;
                                                            arg_b0 = 0x0;
                                                            sub_100103778(arg_270 + 0x100, &arg_170);
                                                            sub_100005114(&arg_170);
                                                            r0 = sub_100005114(&arg_b0);
                                                            r0 = loc_102a105c0(&arg_2f0);
                                                            if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                            }
                                            else {
                                                    sub_104093fa4();
                                                    r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e587d0(arg_b0 + 0x58, &arg_1b8);
                                                            if ((sign_extend_64(arg_1cf) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_1b8);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                                    if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_1a0);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                                    if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_188);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0fd40(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                                    arg_280 = r0;
                                                                    r0 = loc_102a115c0(&arg_280);
                                                                    sub_100e58a60(arg_b0 + 0x58, r0);
                                                            }
                                                            arg_170 = arg_b0;
                                                            arg_b0 = 0x0;
                                                            sub_100103778(arg_270 + 0x100, &arg_170);
                                                            sub_100005114(&arg_170);
                                                            r0 = sub_100005114(&arg_b0);
                                                            r0 = loc_102a105c0(&arg_2f0);
                                                            if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                                    else {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                                    if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_1a0);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                                    if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_188);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0fd40(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                                    arg_280 = r0;
                                                                    r0 = loc_102a115c0(&arg_280);
                                                                    sub_100e58a60(arg_b0 + 0x58, r0);
                                                            }
                                                            arg_170 = arg_b0;
                                                            arg_b0 = 0x0;
                                                            sub_100103778(arg_270 + 0x100, &arg_170);
                                                            sub_100005114(&arg_170);
                                                            r0 = sub_100005114(&arg_b0);
                                                            r0 = loc_102a105c0(&arg_2f0);
                                                            if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                            }
                                    }
                                    else {
                                            sub_100004130(&arg_158, "Test failed with a malformed structured failure payload.");
                                            r0 = sub_100e5a5d8(arg_270 + 0x58, &arg_158);
                                            if ((sign_extend_64(arg_16f) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00(arg_158);
                                            }
                                            r0 = loc_102a105c0(&arg_2f0);
                                            if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                    }
                            }
                    }
                    else {
                            r8 = r21[0x1];
                            if (r20 >= 0x0) {
                                    r9 = r20;
                            }
                            else {
                                    r9 = r8;
                            }
                            r8 = arg_270;
                            if (r9 != 0x0) {
                                    sub_100e5a500(r8 + 0x58, 0x1);
                                    r20 = arg_270;
                                    if ((sign_extend_64(r21[0x17]) & 0xffffffff80000000) == 0x0) {
                                            arg_120 = *(int128_t *)r21;
                                            r0 = sub_100e5a5d8(r20 + 0x58, &arg_120);
                                            if ((sign_extend_64(arg_137) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                    }
                                    else {
                                            r0 = sub_100004018(&arg_120, *r21, r21[0x1]);
                                            r0 = sub_100e5a5d8(r20 + 0x58, &arg_120);
                                            if ((sign_extend_64(arg_137) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                    }
                            }
                            else {
                                    sub_100e5a500(r8 + 0x58, 0x1);
                                    r0 = loc_1029f6ac8(0x80);
                                    arg_140 = r0;
                                    *(int128_t *)(&arg_49 + 0xff) = 5.97819e-322;
                                    q0 = *"be extracted. Throw a string to report a failure message.";
                                    q1 = *"row a string to report a failure message.";
                                    r0[0x8] = q0;
                                    r0[0xa] = q1;
                                    r0[0x6] = *(int128_t *)"report a failure message.";
                                    *(int128_t *)(r0 + 0x69) = *(int128_t *)"failure message.";
                                    q0 = *"Test callback raised a non-string error value; no message could be extracted. Throw a string to report a failure message.";
                                    q1 = *"ised a non-string error value; no message could be extracted. Throw a string to report a failure message.";
                                    *r0 = q0;
                                    r0[0x2] = q1;
                                    q0 = *"g error value; no message could be extracted. Throw a string to report a failure message.";
                                    q1 = *"o message could be extracted. Throw a string to report a failure message.";
                                    r0[0x4] = q0;
                                    r0[0x6] = q1;
                                    r0[0x79] = 0x0;
                                    r0 = sub_100e5a5d8(arg_270 + 0x58, &arg_140);
                                    if ((sign_extend_64(arg_157) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00();
                                    }
                            }
                    }
            }
    }
    else {
            if (r22 != -0x1) {
                    sub_100e5a500(arg_270 + 0x58, 0x1);
                    r20 = &arg_2a0;
                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::basic_string(&arg_2a0, r21, r22 + 0x15, 0xffffffffffffffff, &arg_2f0);
                    r8 = arg_2b7;
                    r10 = arg_2a0;
                    r11 = arg_2a8;
                    bool_5958 = sign_extend_64(r8) < 0x0;
                    bool_5643 = sign_extend_64(r8) < 0x0;
                    if (sign_extend_64(r8) >= 0x0) {
                            if (!bool_5958) {
                                    sub_102a10938();
                                    r0 = sub_102a0fcd4(&arg_2f0);
                                    if (r0 != 0x0) {
                                            if (*(int8_t *)byte_106bfeb48 == 0x1) {
                                                    sub_100e597b8(r19[0xa] & 0xfffffffffffffff8);
                                                    r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e587d0(arg_b0 + 0x58, &arg_1b8);
                                                            if ((sign_extend_64(arg_1cf) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_1b8);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                                    if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_1a0);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                                    if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_188);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0fd40(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                                    arg_280 = r0;
                                                                    r0 = loc_102a115c0(&arg_280);
                                                                    sub_100e58a60(arg_b0 + 0x58, r0);
                                                            }
                                                            arg_170 = arg_b0;
                                                            arg_b0 = 0x0;
                                                            sub_100103778(arg_270 + 0x100, &arg_170);
                                                            sub_100005114(&arg_170);
                                                            r0 = sub_100005114(&arg_b0);
                                                            r0 = loc_102a105c0(&arg_2f0);
                                                            if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                                    else {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                                    if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_1a0);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0e548(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                                    arg_90 = r0;
                                                                    arg_98 = r1;
                                                                    arg_280 = 0x0;
                                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                                    r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                                    if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_188);
                                                                    }
                                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00(arg_280);
                                                                    }
                                                            }
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = sub_102a0fd40(&arg_280);
                                                            if (r0 != 0x0) {
                                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                                    arg_280 = r0;
                                                                    r0 = loc_102a115c0(&arg_280);
                                                                    sub_100e58a60(arg_b0 + 0x58, r0);
                                                            }
                                                            arg_170 = arg_b0;
                                                            arg_b0 = 0x0;
                                                            sub_100103778(arg_270 + 0x100, &arg_170);
                                                            sub_100005114(&arg_170);
                                                            r0 = sub_100005114(&arg_b0);
                                                            r0 = loc_102a105c0(&arg_2f0);
                                                            if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                            }
                                            else {
                                                    sub_104093fa4();
                                                    r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e587d0(arg_b0 + 0x58, &arg_1b8);
                                                            if ((sign_extend_64(arg_1cf) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_1b8);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                            if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_1a0);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                            if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_188);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0fd40(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = loc_102a115c0(&arg_280);
                                                            sub_100e58a60(arg_b0 + 0x58, r0);
                                                    }
                                                    arg_170 = arg_b0;
                                                    arg_b0 = 0x0;
                                                    sub_100103778(arg_270 + 0x100, &arg_170);
                                                    sub_100005114(&arg_170);
                                                    r0 = sub_100005114(&arg_b0);
                                                    r0 = loc_102a105c0(&arg_2f0);
                                                    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                            }
                                    }
                                    else {
                                            sub_100004130(&arg_158, "Test failed with a malformed structured failure payload.");
                                            r0 = sub_100e5a5d8(arg_270 + 0x58, &arg_158);
                                            if ((sign_extend_64(arg_16f) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00(arg_158);
                                            }
                                            r0 = loc_102a105c0(&arg_2f0);
                                            if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                    }
                            }
                            else {
                                    sub_102a10938();
                                    r0 = sub_102a0fcd4(&arg_2f0);
                                    if (r0 != 0x0) {
                                            if (*(int8_t *)byte_106bfeb48 == 0x1) {
                                                    sub_100e597b8(r19[0xa] & 0xfffffffffffffff8);
                                            }
                                            else {
                                                    sub_104093fa4();
                                            }
                                            r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                            arg_280 = r0;
                                            r0 = sub_102a0e548(&arg_280);
                                            if (r0 != 0x0) {
                                                    r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                                    arg_90 = r0;
                                                    arg_98 = r1;
                                                    arg_280 = 0x0;
                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                    r0 = sub_100e587d0(arg_b0 + 0x58, &arg_1b8);
                                                    if ((sign_extend_64(arg_1cf) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00(arg_1b8);
                                                    }
                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00(arg_280);
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                            if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_1a0);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                            if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_188);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0fd40(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = loc_102a115c0(&arg_280);
                                                            sub_100e58a60(arg_b0 + 0x58, r0);
                                                    }
                                                    arg_170 = arg_b0;
                                                    arg_b0 = 0x0;
                                                    sub_100103778(arg_270 + 0x100, &arg_170);
                                                    sub_100005114(&arg_170);
                                                    r0 = sub_100005114(&arg_b0);
                                                    r0 = loc_102a105c0(&arg_2f0);
                                                    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                            }
                                            else {
                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                            if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_1a0);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                            if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_188);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0fd40(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = loc_102a115c0(&arg_280);
                                                            sub_100e58a60(arg_b0 + 0x58, r0);
                                                    }
                                                    arg_170 = arg_b0;
                                                    arg_b0 = 0x0;
                                                    sub_100103778(arg_270 + 0x100, &arg_170);
                                                    sub_100005114(&arg_170);
                                                    r0 = sub_100005114(&arg_b0);
                                                    r0 = loc_102a105c0(&arg_2f0);
                                                    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                            }
                                    }
                                    else {
                                            sub_100004130(&arg_158, "Test failed with a malformed structured failure payload.");
                                            r0 = sub_100e5a5d8(arg_270 + 0x58, &arg_158);
                                            if ((sign_extend_64(arg_16f) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00(arg_158);
                                            }
                                            r0 = loc_102a105c0(&arg_2f0);
                                            if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                    }
                            }
                    }
                    else {
                            sub_102a10938();
                            r0 = sub_102a0fcd4(&arg_2f0);
                            if (r0 != 0x0) {
                                    if (*(int8_t *)byte_106bfeb48 == 0x1) {
                                            sub_100e597b8(r19[0xa] & 0xfffffffffffffff8);
                                            r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                            arg_280 = r0;
                                            r0 = sub_102a0e548(&arg_280);
                                            if (r0 != 0x0) {
                                                    r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                                    arg_90 = r0;
                                                    arg_98 = r1;
                                                    arg_280 = 0x0;
                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                    r0 = sub_100e587d0(arg_b0 + 0x58, &arg_1b8);
                                                    if ((sign_extend_64(arg_1cf) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00(arg_1b8);
                                                    }
                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00(arg_280);
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                            if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_1a0);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                            if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_188);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0fd40(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = loc_102a115c0(&arg_280);
                                                            sub_100e58a60(arg_b0 + 0x58, r0);
                                                    }
                                                    arg_170 = arg_b0;
                                                    arg_b0 = 0x0;
                                                    sub_100103778(arg_270 + 0x100, &arg_170);
                                                    sub_100005114(&arg_170);
                                                    r0 = sub_100005114(&arg_b0);
                                                    r0 = loc_102a105c0(&arg_2f0);
                                                    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                            }
                                            else {
                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                            if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_1a0);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                            if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_188);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0fd40(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = loc_102a115c0(&arg_280);
                                                            sub_100e58a60(arg_b0 + 0x58, r0);
                                                    }
                                                    arg_170 = arg_b0;
                                                    arg_b0 = 0x0;
                                                    sub_100103778(arg_270 + 0x100, &arg_170);
                                                    sub_100005114(&arg_170);
                                                    r0 = sub_100005114(&arg_b0);
                                                    r0 = loc_102a105c0(&arg_2f0);
                                                    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                            }
                                    }
                                    else {
                                            sub_104093fa4();
                                            r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                            arg_280 = r0;
                                            r0 = sub_102a0e548(&arg_280);
                                            if (r0 != 0x0) {
                                                    r0 = sub_102a0fba8(&arg_2f0, "Message", 0x7);
                                                    arg_90 = r0;
                                                    arg_98 = r1;
                                                    arg_280 = 0x0;
                                                    r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                    r0 = sub_100e587d0(arg_b0 + 0x58, &arg_1b8);
                                                    if ((sign_extend_64(arg_1cf) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00(arg_1b8);
                                                    }
                                                    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00(arg_280);
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                            if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_1a0);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                            if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_188);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0fd40(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = loc_102a115c0(&arg_280);
                                                            sub_100e58a60(arg_b0 + 0x58, r0);
                                                    }
                                                    arg_170 = arg_b0;
                                                    arg_b0 = 0x0;
                                                    sub_100103778(arg_270 + 0x100, &arg_170);
                                                    sub_100005114(&arg_170);
                                                    r0 = sub_100005114(&arg_b0);
                                                    r0 = loc_102a105c0(&arg_2f0);
                                                    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                            }
                                            else {
                                                    r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Matcher", 0x7);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e588b0(arg_b0 + 0x58, &arg_1a0);
                                                            if ((sign_extend_64(arg_1b7) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_1a0);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0e548(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "StackTrace", 0xa);
                                                            arg_90 = r0;
                                                            arg_98 = r1;
                                                            arg_280 = 0x0;
                                                            r0 = sub_102a0fdf4(&arg_90, &arg_280);
                                                            r0 = sub_100e58980(arg_b0 + 0x58, &arg_188);
                                                            if ((sign_extend_64(arg_19f) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_188);
                                                            }
                                                            if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00(arg_280);
                                                            }
                                                    }
                                                    r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                    arg_280 = r0;
                                                    r0 = sub_102a0fd40(&arg_280);
                                                    if (r0 != 0x0) {
                                                            r0 = sub_102a0fba8(&arg_2f0, "Line", 0x4);
                                                            arg_280 = r0;
                                                            r0 = loc_102a115c0(&arg_280);
                                                            sub_100e58a60(arg_b0 + 0x58, r0);
                                                    }
                                                    arg_170 = arg_b0;
                                                    arg_b0 = 0x0;
                                                    sub_100103778(arg_270 + 0x100, &arg_170);
                                                    sub_100005114(&arg_170);
                                                    r0 = sub_100005114(&arg_b0);
                                                    r0 = loc_102a105c0(&arg_2f0);
                                                    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                            }
                                    }
                            }
                            else {
                                    sub_100004130(&arg_158, "Test failed with a malformed structured failure payload.");
                                    r0 = sub_100e5a5d8(arg_270 + 0x58, &arg_158);
                                    if ((sign_extend_64(arg_16f) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_158);
                                    }
                                    r0 = loc_102a105c0(&arg_2f0);
                                    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00();
                                    }
                            }
                    }
            }
            else {
                    r8 = r21[0x1];
                    if (r20 >= 0x0) {
                            r9 = r20;
                            r8 = arg_270;
                            if (r9 != 0x0) {
                                    sub_100e5a500(r8 + 0x58, 0x1);
                                    r20 = arg_270;
                                    if ((sign_extend_64(r21[0x17]) & 0xffffffff80000000) == 0x0) {
                                            arg_120 = *(int128_t *)r21;
                                            r0 = sub_100e5a5d8(r20 + 0x58, &arg_120);
                                            if ((sign_extend_64(arg_137) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                    }
                                    else {
                                            r0 = sub_100004018(&arg_120, *r21, r21[0x1]);
                                            r0 = sub_100e5a5d8(r20 + 0x58, &arg_120);
                                            if ((sign_extend_64(arg_137) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                    }
                            }
                            else {
                                    sub_100e5a500(r8 + 0x58, 0x1);
                                    r0 = loc_1029f6ac8(0x80);
                                    arg_140 = r0;
                                    *(int128_t *)(&arg_49 + 0xff) = 5.97819e-322;
                                    q0 = *"be extracted. Throw a string to report a failure message.";
                                    q1 = *"row a string to report a failure message.";
                                    r0[0x8] = q0;
                                    r0[0xa] = q1;
                                    r0[0x6] = *(int128_t *)"report a failure message.";
                                    *(int128_t *)(r0 + 0x69) = *(int128_t *)"failure message.";
                                    q0 = *"Test callback raised a non-string error value; no message could be extracted. Throw a string to report a failure message.";
                                    q1 = *"ised a non-string error value; no message could be extracted. Throw a string to report a failure message.";
                                    *r0 = q0;
                                    r0[0x2] = q1;
                                    q0 = *"g error value; no message could be extracted. Throw a string to report a failure message.";
                                    q1 = *"o message could be extracted. Throw a string to report a failure message.";
                                    r0[0x4] = q0;
                                    r0[0x6] = q1;
                                    r0[0x79] = 0x0;
                                    r0 = sub_100e5a5d8(arg_270 + 0x58, &arg_140);
                                    if ((sign_extend_64(arg_157) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00();
                                    }
                            }
                    }
                    else {
                            r9 = r8;
                            r8 = arg_270;
                            if (r9 != 0x0) {
                                    sub_100e5a500(r8 + 0x58, 0x1);
                                    r20 = arg_270;
                                    if ((sign_extend_64(r21[0x17]) & 0xffffffff80000000) == 0x0) {
                                            arg_120 = *(int128_t *)r21;
                                    }
                                    else {
                                            r0 = sub_100004018(&arg_120, *r21, r21[0x1]);
                                    }
                                    r0 = sub_100e5a5d8(r20 + 0x58, &arg_120);
                                    if ((sign_extend_64(arg_137) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00();
                                    }
                            }
                            else {
                                    sub_100e5a500(r8 + 0x58, 0x1);
                                    r0 = loc_1029f6ac8(0x80);
                                    arg_140 = r0;
                                    *(int128_t *)(&arg_49 + 0xff) = 5.97819e-322;
                                    q0 = *"be extracted. Throw a string to report a failure message.";
                                    q1 = *"row a string to report a failure message.";
                                    r0[0x8] = q0;
                                    r0[0xa] = q1;
                                    r0[0x6] = *(int128_t *)"report a failure message.";
                                    *(int128_t *)(r0 + 0x69) = *(int128_t *)"failure message.";
                                    q0 = *"Test callback raised a non-string error value; no message could be extracted. Throw a string to report a failure message.";
                                    q1 = *"ised a non-string error value; no message could be extracted. Throw a string to report a failure message.";
                                    *r0 = q0;
                                    r0[0x2] = q1;
                                    q0 = *"g error value; no message could be extracted. Throw a string to report a failure message.";
                                    q1 = *"o message could be extracted. Throw a string to report a failure message.";
                                    r0[0x4] = q0;
                                    r0[0x6] = q1;
                                    r0[0x79] = 0x0;
                                    r0 = sub_100e5a5d8(arg_270 + 0x58, &arg_140);
                                    if ((sign_extend_64(arg_157) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00();
                                    }
                            }
                    }
            }
    }
    sub_103e3b3d8(*r27);
    r8 = arg_2f0;
    r23 = arg_2f8;
    if (r8 == r23) goto loc_104092ca4;
    goto loc_104092a58;

loc_104092a6c:
    if (*(int8_t *)byte_106c42040 == 0x1 && *(int8_t *)byte_106bfeb48 == 0x1) {
            sub_100e597b8(r19[0xa] & 0xfffffffffffffff8);
    }
    else {
            arg_2a0 = sub_1022cd278();
            arg_2a8 = 0x2dcb0f;
            sub_100e59800(&arg_2a0);
    }
    r21 = arg_280;
    if ((sign_extend_64(*(int32_t *)(r24 + 0xffffffffffffff37)) & 0xffffffff80000000) == 0x0) {
            arg_100 = *(int128_t *)(r24 - 0xe0);
    }
    else {
            r0 = sub_100004018(&arg_100, r24[0xffffffffffffffe4], r24[0xffffffffffffffe5]);
    }
    r0 = sub_100e587d0(r21 + 0x58, &arg_100);
    if ((sign_extend_64(arg_117) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_100);
    }
    r21 = arg_280;
    if ((sign_extend_64(*(int32_t *)(r24 + 0xffffffffffffff4f)) & 0xffffffff80000000) == 0x0) {
            arg_e0 = *(int128_t *)(r24 - 0xc8);
    }
    else {
            r0 = sub_100004018(&arg_e0, r24[0xffffffffffffffe7], r24[0xffffffffffffffe8]);
    }
    r0 = sub_100e588b0(r21 + 0x58, &arg_e0);
    if ((sign_extend_64(arg_f7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_e0);
    }
    r21 = arg_280;
    decomp_var_c0 = r24[0xffffffffffffffea];
    r8 = r24[0xffffffffffffffeb];
    if (r8 != 0x0) {
            (*r8)(r24 - 0xa0, r20 + 0x10);
            r8 = r24[0xffffffffffffffeb];
    }
    sub_104093fe8(r21, &decomp_var_c0);
    r8 = r8;
    if (r8 != 0x0) {
            (r8[0x2])(r20 + 0x10);
    }
    r21 = arg_280;
    arg_340 = r24[0xfffffffffffffff4];
    r8 = r24[0xfffffffffffffff5];
    if (r8 != 0x0) {
            (*r8)(r24 - 0x50, r22 + 0x10);
            r8 = r24[0xfffffffffffffff5];
    }
    sub_104094034(r21, &arg_340);
    r8 = r8;
    if (r8 != 0x0) {
            (r8[0x2])(r22 + 0x10);
    }
    r8 = arg_280;
    r10 = r24[0xfffffffffffffffe];
    r9 = r24[0xffffffffffffffff];
    if (r9 != 0x0) {
            asm { ldadd      x28, x11, [x11] };
    }
    r0 = r8[0x2a];
    r8[0x29] = r10;
    r8[0x2a] = r9;
    if (r0 != 0x0) {
            std::__1::__shared_weak_count::__release_weak();
            r8 = arg_280;
    }
    sub_100e58a60(r8 + 0x58, *(int32_t *)r24);
    arg_d0 = arg_280;
    arg_288 = 0x0;
    arg_280 = 0x0;
    sub_100103778(arg_270 + 0x100, &arg_d0);
    r21 = arg_d8;
    if (r21 != 0x0) {
            r8 = r21 + 0x8;
            asm { ldaddal    x27, x8, [x8] };
            if (r8 == 0x0) {
                    (*(*r21 + 0x10))(r21);
                    std::__1::__shared_weak_count::__release_weak(r21);
            }
    }
    r21 = arg_288;
    if (r21 != 0x0) {
            r8 = r21 + 0x8;
            asm { ldaddal    x27, x8, [x8] };
            if (r8 == 0x0) {
                    (*(*r21 + 0x10))(r21);
                    std::__1::__shared_weak_count::__release_weak(r21);
            }
    }
    r8 = r24 + 0x8;
    r24 = r24 + 0xe8;
    if (r8 != r23) {
            continue;
    }
    break;

.l3:
    arg_2a0 = &arg_2f0;
    r0 = sub_103e3c014(&arg_2a0);
    r8 = arg_270;
    r20 = r8[0x38];
    asm { cinc       w9, w9, ne };
    if (r20 == 0x0) {
            r21 = 0x1;
    }
    else {
            r21 = 0x2;
    }
    if ((sign_extend_64(r8[0x87]) & 0xffffffff80000000) == 0x0) {
            arg_2a0 = r8[0x7];
    }
    else {
            r0 = sub_100004018(&arg_2a0, r8[0xe], r8[0xf]);
            r8 = arg_270;
    }
    r10 = arg_2a0;
    r9 = &arg_2a0;
    if (sign_extend_64(arg_2b7) >= 0x0) {
            r22 = r9;
    }
    else {
            r22 = r10;
    }
    if ((sign_extend_64(r8[0xb7]) & 0xffffffff80000000) == 0x0) {
            arg_280 = r8[0xa];
    }
    else {
            r0 = sub_100004018(&arg_280, r8[0x14], r8[0x15]);
    }
    r9 = arg_280;
    r8 = &arg_280;
    if (sign_extend_64(arg_297) < 0x0) {
            r8 = r9;
    }
    if (r20 <= 0x3) {
            r9 = *(0x106aae050 + r20 * 0x8);
    }
    else {
            r9 = "Fail";
    }
    asm { fcvtzs     w10, d0 };
    arg_2f8 = 0x0;
    arg_2f0 = r22;
    arg_300 = r8;
    r0 = sub_1023475b4("TestService: [{}/{}] {} ({}ms)", 0x1e, 0x1ccc, &arg_2f0);
    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_280);
    }
    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_2a0);
    }
    r9 = arg_270;
    if (r20 == 0x3) {
            r8 = r9 + 0x58;
            if ((sign_extend_64(r9[0x6f]) & 0xffffffff80000000) != 0x0) {
                    r0 = sub_100004018(&arg_90, *r8, r9[0xc]);
            }
            else {
                    arg_90 = *(int128_t *)r8;
            }
    }
    else {
            r8 = r9 + 0xb8;
            if ((sign_extend_64(r9[0xcf]) & 0xffffffff80000000) == 0x0) {
                    arg_90 = *(int128_t *)r8;
            }
            else {
                    r0 = sub_100004018(&arg_90, *r8, r9[0x18]);
            }
    }
    if (*(int8_t *)byte_106c42040 == 0x1) {
            sub_104094080(arg_270);
            r9 = arg_307;
            r8 = sign_extend_64(r9);
            r10 = arg_2f8;
            if (r8 < 0x0) {
                    r9 = r10;
            }
            if (r9 != 0x0) {
                    if ((sign_extend_64(arg_a7) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00(arg_90);
                    }
                    arg_90 = arg_2f0;
            }
            else {
                    if ((r8 & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00(arg_2f0);
                    }
            }
    }
    r8 = arg_a7;
    r10 = arg_98;
    if (sign_extend_64(r8) < 0x0) {
            r8 = r10;
    }
    if (r8 != 0x0) {
            r20 = &arg_2f0;
            r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::operator+<char, std::__1::char_traits<char>, std::__1::allocator<char> >(": ", &arg_90);
            r8 = arg_307;
            r10 = arg_2f0;
            r11 = arg_2f8;
            bool_5549 = sign_extend_64(r8) < 0x0;
            r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::append(&arg_b0);
            if ((sign_extend_64(arg_307) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00(arg_2f0);
            }
    }
    r9 = arg_b0;
    r8 = &arg_b0;
    if (sign_extend_64(arg_c7) < 0x0) {
            r8 = r9;
    }
    arg_0 = r8;
    sub_1027ac3a0(r21, "%s");
    r21 = arg_270[0x20];
    r23 = arg_270[0x21];
    if (r21 != r23) {
            r26 = &arg_2f0;
            r20 = &arg_2a0;
            r28 = &arg_58;
            while (true) {
                    r8 = *r21;
                    if (r8 == 0x0) {
                            r21 = r21 + 0x10;
                            if (r21 != r23) {
                                    continue;
                            }
                            break;
                    }
                    if ((sign_extend_64(r8[0x6f]) & 0xffffffff80000000) == 0x0) {
                            arg_2f0 = *(int128_t *)(r8 + 0x58);
                    }
                    else {
                            r0 = sub_100004018(&arg_2f0, r8[0xb], r8[0xc]);
                    }
                    r8 = arg_307;
                    r10 = arg_2f8;
                    if (sign_extend_64(r8) < 0x0) {
                            r8 = r10;
                    }
                    if (r8 != 0x0) {
                            r8 = *r21;
                            if ((sign_extend_64(r8[0x6f]) & 0xffffffff80000000) == 0x0) {
                                    arg_70 = *(int128_t *)(r8 + 0x58);
                            }
                            else {
                                    r0 = sub_100004018(&arg_70, r8[0xb], r8[0xc]);
                            }
                    }
                    else {
                            r0 = sub_100004130(&arg_70, "check");
                    }
                    if ((sign_extend_64(arg_307) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00(arg_2f0);
                    }
                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::operator+<char, std::__1::char_traits<char>, std::__1::allocator<char> >("    - ", &arg_70);
                    r25 = *r21;
                    r27 = r25[0x15];
                    r8 = r25[0x16];
                    arg_2f0 = r27;
                    if (r8 != 0x0) {
                            (*r8)(r25 + 0xb8, r26 + 0x10);
                            r8 = r25[0x16];
                            r27 = arg_2f0;
                    }
                    arg_2f8 = r8;
                    if (r27 != sub_10160ed5c()) {
                            r27 = 0x1;
                    }
                    else {
                            r25 = *r21;
                            r27 = r25[0x1f];
                            r8 = r25[0x20];
                            arg_2a0 = r27;
                            if (r8 != 0x0) {
                                    (*r8)(r25 + 0x108, r20 + 0x10);
                                    r8 = r25[0x20];
                                    r27 = arg_2a0;
                            }
                            arg_2a8 = r8;
                            if (r27 != sub_10160ed5c()) {
                                    r27 = 0x1;
                            }
                            r8 = arg_2a8;
                            if (r8 != 0x0) {
                                    (r8[0x2])(r20 + 0x10);
                            }
                    }
                    r8 = arg_2f8;
                    if (r8 != 0x0) {
                            (r8[0x2])(r26 + 0x10);
                    }
                    if (r27 != 0x0) {
                            r25 = *r21;
                            r9 = r25[0x15];
                            r8 = r25[0x16];
                            arg_2f0 = r9;
                            if (r8 != 0x0) {
                                    (*r8)(r25 + 0xb8, r26 + 0x10);
                                    r8 = r25[0x16];
                            }
                            arg_2f8 = r8;
                            r0 = sub_101612cc0(&arg_2f0);
                            r9 = arg_28;
                            r8 = &arg_28;
                            if (sign_extend_64(arg_3f) >= 0x0) {
                                    r27 = r8;
                            }
                            else {
                                    r27 = r9;
                            }
                            r25 = *r21;
                            r9 = r25[0x1f];
                            r8 = r25[0x20];
                            arg_2a0 = r9;
                            if (r8 != 0x0) {
                                    (*r8)(r25 + 0x108, r20 + 0x10);
                                    r8 = r25[0x20];
                            }
                            arg_2a8 = r8;
                            r0 = sub_101612cc0(&arg_2a0);
                            r9 = arg_10;
                            r8 = &arg_10;
                            if (sign_extend_64(arg_27) < 0x0) {
                                    r8 = r9;
                            }
                            arg_280 = r27;
                            sub_1023475b4(": expected {}, got {}", 0x15, 0xcc, &arg_280);
                            r8 = arg_57;
                            r10 = arg_40;
                            r11 = arg_48;
                            bool_6262 = sign_extend_64(r8) < 0x0;
                            r9 = &arg_40;
                            r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::append(&arg_58);
                            if ((sign_extend_64(arg_57) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00(arg_40);
                            }
                            if ((sign_extend_64(arg_27) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00(arg_10);
                            }
                            r8 = arg_2a8;
                            if (r8 != 0x0) {
                                    (r8[0x2])(r20 + 0x10);
                            }
                            if ((sign_extend_64(arg_3f) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00(arg_28);
                            }
                            r8 = arg_2f8;
                            if (r8 != 0x0) {
                                    (r8[0x2])(r26 + 0x10);
                            }
                    }
                    r25 = *r21;
                    if (r25[0x2a] != 0x0) {
                            r0 = std::__1::__shared_weak_count::lock();
                            if (r0 != 0x0) {
                                    r27 = r0;
                                    r9 = r25[0x29];
                                    if (r9 != 0x0) {
                                            r8 = *r21;
                                            r8 = r8[0x28];
                                            if (r8 >= 0x1) {
                                                    r9 = r9[0xd];
                                                    if ((sign_extend_64(r9[0x17]) & 0xffffffff80000000) != 0x0) {
                                                            r9 = *r9;
                                                    }
                                                    arg_2f8 = 0x0;
                                                    arg_2f0 = r9;
                                                    r0 = sub_1023475b4(" ({}:{})", 0x8, 0x1c, &arg_2f0);
                                                    r8 = arg_2b7;
                                                    r10 = arg_2a0;
                                                    r11 = arg_2a8;
                                                    bool_6221 = sign_extend_64(r8) < 0x0;
                                                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::append(&arg_58);
                                                    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00(arg_2a0);
                                                    }
                                            }
                                    }
                                    r8 = r27 + 0x8;
                                    asm { ldaddal    x9, x8, [x8] };
                                    if (r8 == 0x0) {
                                            (*(*r27 + 0x10))(r27);
                                            std::__1::__shared_weak_count::__release_weak(r27);
                                    }
                            }
                    }
                    r8 = *r21;
                    if ((sign_extend_64(r8[0x87]) & 0xffffffff80000000) == 0x0) {
                            arg_2f0 = r8[0x7];
                    }
                    else {
                            r0 = sub_100004018(&arg_2f0, r8[0xe], r8[0xf]);
                    }
                    r8 = sign_extend_64(arg_307);
                    if ((r8 & 0xffffffff80000000) == 0x0) {
                            if (r8 == 0x0) {
                                    r9 = arg_58;
                                    if (sign_extend_64(arg_6f) >= 0x0) {
                                            r8 = r28;
                                    }
                                    else {
                                            r8 = r9;
                                    }
                                    arg_0 = r8;
                                    sub_1027ac3a0(0x3, "%s");
                                    if ((sign_extend_64(arg_6f) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_58);
                                    }
                                    if ((sign_extend_64(arg_87) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_70);
                                    }
                                    r21 = r21 + 0x10;
                                    if (r21 != r23) {
                                            continue;
                                    }
                                    break;
                            }
                            else {
                                    r8 = *r21;
                                    if ((sign_extend_64(r8[0x87]) & 0xffffffff80000000) == 0x0) {
                                            arg_2a0 = r8[0x7];
                                    }
                                    else {
                                            r0 = sub_100004018(&arg_2a0, r8[0xe], r8[0xf]);
                                    }
                                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::insert(&arg_2a0, 0x0, " -- ");
                                    arg_2f0 = *(int128_t *)r0;
                                    r0[0x1] = 0x0;
                                    r0[0x2] = 0x0;
                                    *r0 = 0x0;
                                    r8 = arg_307;
                                    r10 = arg_2f0;
                                    r11 = arg_2f8;
                                    bool_6220 = sign_extend_64(r8) < 0x0;
                                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::append(&arg_58);
                                    if ((sign_extend_64(arg_307) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_2f0);
                                    }
                                    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_2a0);
                                    }
                                    r9 = arg_58;
                                    if (sign_extend_64(arg_6f) >= 0x0) {
                                            r8 = r28;
                                    }
                                    else {
                                            r8 = r9;
                                    }
                                    arg_0 = r8;
                                    sub_1027ac3a0(0x3, "%s");
                                    if ((sign_extend_64(arg_6f) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_58);
                                    }
                                    if ((sign_extend_64(arg_87) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_70);
                                    }
                                    r21 = r21 + 0x10;
                                    if (r21 != r23) {
                                            continue;
                                    }
                                    break;
                            }
                    }
                    else {
                            loc_1029f6b00(arg_2f0);
                            if (arg_2f8 != 0x0) {
                                    r8 = *r21;
                                    if ((sign_extend_64(r8[0x87]) & 0xffffffff80000000) == 0x0) {
                                            arg_2a0 = r8[0x7];
                                    }
                                    else {
                                            r0 = sub_100004018(&arg_2a0, r8[0xe], r8[0xf]);
                                    }
                                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::insert(&arg_2a0, 0x0, " -- ");
                                    arg_2f0 = *(int128_t *)r0;
                                    r0[0x1] = 0x0;
                                    r0[0x2] = 0x0;
                                    *r0 = 0x0;
                                    r8 = arg_307;
                                    r10 = arg_2f0;
                                    r11 = arg_2f8;
                                    bool_6226 = sign_extend_64(r8) < 0x0;
                                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::append(&arg_58);
                                    if ((sign_extend_64(arg_307) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_2f0);
                                    }
                                    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_2a0);
                                    }
                                    r9 = arg_58;
                                    if (sign_extend_64(arg_6f) >= 0x0) {
                                            r8 = r28;
                                    }
                                    else {
                                            r8 = r9;
                                    }
                                    arg_0 = r8;
                                    sub_1027ac3a0(0x3, "%s");
                                    if ((sign_extend_64(arg_6f) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_58);
                                    }
                                    if ((sign_extend_64(arg_87) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_70);
                                    }
                                    r21 = r21 + 0x10;
                                    if (r21 != r23) {
                                            continue;
                                    }
                                    break;
                            }
                            else {
                                    r9 = arg_58;
                                    if (sign_extend_64(arg_6f) >= 0x0) {
                                            r8 = r28;
                                    }
                                    else {
                                            r8 = r9;
                                    }
                                    arg_0 = r8;
                                    sub_1027ac3a0(0x3, "%s");
                                    if ((sign_extend_64(arg_6f) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_58);
                                    }
                                    if ((sign_extend_64(arg_87) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_70);
                                    }
                                    r21 = r21 + 0x10;
                                    if (r21 != r23) {
                                            continue;
                                    }
                                    break;
                            }
                    }
            }
    }
    if ((sign_extend_64(arg_a7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_90);
    }
    if ((sign_extend_64(arg_c7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_b0);
    }
    sub_104091dc4(r19, arg_270);
    sub_100103100(r19[0x9b] + 0x18, &arg_270);
    r8 = r19[0x9b];
    r8[0x6] = r8[0x6] + 0x1;
    if (*(int8_t *)byte_106c42040 == 0x1) {
            arg_2f0 = 0x1068a6510;
            sub_10150f5dc(r8 + 0x98, &arg_2f0);
            loc_10150f6c0(&arg_2f0);
            sub_100024280(r19[0x9b] + 0xb8);
            sub_104091538(r19);
    }
    else {
            if (sub_101367fac(r19) != 0x0) {
                    r8 = r19[0x9b];
                    r8 = r8 + 0x48;
                    if (*r8 > 0x0) {
                            sub_101478090();
                    }
            }
            sub_1040904d0(r19);
    }
    r19 = arg_278;
    if (r19 != 0x0) {
            r8 = r19 + 0x8;
            asm { ldaddal    x9, x8, [x8] };
            if (r8 == 0x0) {
                    (*(*r19 + 0x10))(r19);
                    std::__1::__shared_weak_count::__release_weak(r19);
            }
    }
    if (**___stack_chk_guard != decomp_var_70) {
            __stack_chk_fail();
    }
    return;

.l2:
    r20 = &decomp_var_c0;
    r22 = &arg_340;
    r24 = r8 + 0xe0;
    goto .l13;

loc_104092ca4:
    arg_2a0 = &arg_2f0;
    r0 = sub_103e3c014(&arg_2a0);
    r8 = arg_270;
    r20 = r8[0x38];
    asm { cinc       w9, w9, ne };
    if (r20 == 0x0) {
            r21 = 0x1;
    }
    else {
            r21 = 0x2;
    }
    if ((sign_extend_64(r8[0x87]) & 0xffffffff80000000) == 0x0) {
            arg_2a0 = r8[0x7];
    }
    else {
            r0 = sub_100004018(&arg_2a0, r8[0xe], r8[0xf]);
            r8 = arg_270;
    }
    r10 = arg_2a0;
    r9 = &arg_2a0;
    if (sign_extend_64(arg_2b7) >= 0x0) {
            r22 = r9;
    }
    else {
            r22 = r10;
    }
    if ((sign_extend_64(r8[0xb7]) & 0xffffffff80000000) == 0x0) {
            arg_280 = r8[0xa];
    }
    else {
            r0 = sub_100004018(&arg_280, r8[0x14], r8[0x15]);
    }
    r9 = arg_280;
    r8 = &arg_280;
    if (sign_extend_64(arg_297) < 0x0) {
            r8 = r9;
    }
    if (r20 <= 0x3) {
            r9 = *(0x106aae050 + r20 * 0x8);
    }
    else {
            r9 = "Fail";
    }
    asm { fcvtzs     w10, d0 };
    arg_2f8 = 0x0;
    arg_2f0 = r22;
    arg_300 = r8;
    r0 = sub_1023475b4("TestService: [{}/{}] {} ({}ms)", 0x1e, 0x1ccc, &arg_2f0);
    if ((sign_extend_64(arg_297) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_280);
    }
    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_2a0);
    }
    r9 = arg_270;
    if (r20 == 0x3) {
            r8 = r9 + 0x58;
            if ((sign_extend_64(r9[0x6f]) & 0xffffffff80000000) != 0x0) {
                    r0 = sub_100004018(&arg_90, *r8, r9[0xc]);
            }
            else {
                    arg_90 = *(int128_t *)r8;
            }
    }
    else {
            r8 = r9 + 0xb8;
            if ((sign_extend_64(r9[0xcf]) & 0xffffffff80000000) == 0x0) {
                    arg_90 = *(int128_t *)r8;
            }
            else {
                    r0 = sub_100004018(&arg_90, *r8, r9[0x18]);
            }
    }
    if (*(int8_t *)byte_106c42040 == 0x1) {
            sub_104094080(arg_270);
            r9 = arg_307;
            r8 = sign_extend_64(r9);
            r10 = arg_2f8;
            if (r8 < 0x0) {
                    r9 = r10;
            }
            if (r9 != 0x0) {
                    if ((sign_extend_64(arg_a7) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00(arg_90);
                    }
                    arg_90 = arg_2f0;
            }
            else {
                    if ((r8 & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00(arg_2f0);
                    }
            }
    }
    r8 = arg_a7;
    r10 = arg_98;
    if (sign_extend_64(r8) < 0x0) {
            r8 = r10;
    }
    if (r8 != 0x0) {
            r20 = &arg_2f0;
            r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::operator+<char, std::__1::char_traits<char>, std::__1::allocator<char> >(": ", &arg_90);
            r8 = arg_307;
            r10 = arg_2f0;
            r11 = arg_2f8;
            bool_5768 = sign_extend_64(r8) < 0x0;
            r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::append(&arg_b0);
            if ((sign_extend_64(arg_307) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00(arg_2f0);
            }
    }
    r9 = arg_b0;
    r8 = &arg_b0;
    if (sign_extend_64(arg_c7) < 0x0) {
            r8 = r9;
    }
    arg_0 = r8;
    sub_1027ac3a0(r21, "%s");
    r21 = arg_270[0x20];
    r23 = arg_270[0x21];
    if (r21 != r23) {
            r26 = &arg_2f0;
            r20 = &arg_2a0;
            r28 = &arg_58;
            while (true) {
                    r8 = *r21;
                    if (r8 == 0x0) {
                            r21 = r21 + 0x10;
                            if (r21 != r23) {
                                    continue;
                            }
                            break;
                    }
                    if ((sign_extend_64(r8[0x6f]) & 0xffffffff80000000) == 0x0) {
                            arg_2f0 = *(int128_t *)(r8 + 0x58);
                    }
                    else {
                            r0 = sub_100004018(&arg_2f0, r8[0xb], r8[0xc]);
                    }
                    r8 = arg_307;
                    r10 = arg_2f8;
                    if (sign_extend_64(r8) < 0x0) {
                            r8 = r10;
                    }
                    if (r8 != 0x0) {
                            r8 = *r21;
                            if ((sign_extend_64(r8[0x6f]) & 0xffffffff80000000) == 0x0) {
                                    arg_70 = *(int128_t *)(r8 + 0x58);
                            }
                            else {
                                    r0 = sub_100004018(&arg_70, r8[0xb], r8[0xc]);
                            }
                    }
                    else {
                            r0 = sub_100004130(&arg_70, "check");
                    }
                    if ((sign_extend_64(arg_307) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00(arg_2f0);
                    }
                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::operator+<char, std::__1::char_traits<char>, std::__1::allocator<char> >("    - ", &arg_70);
                    r25 = *r21;
                    r27 = r25[0x15];
                    r8 = r25[0x16];
                    arg_2f0 = r27;
                    if (r8 != 0x0) {
                            (*r8)(r25 + 0xb8, r26 + 0x10);
                            r8 = r25[0x16];
                            r27 = arg_2f0;
                    }
                    arg_2f8 = r8;
                    if (r27 != sub_10160ed5c()) {
                            r27 = 0x1;
                    }
                    else {
                            r25 = *r21;
                            r27 = r25[0x1f];
                            r8 = r25[0x20];
                            arg_2a0 = r27;
                            if (r8 != 0x0) {
                                    (*r8)(r25 + 0x108, r20 + 0x10);
                                    r8 = r25[0x20];
                                    r27 = arg_2a0;
                            }
                            arg_2a8 = r8;
                            if (r27 != sub_10160ed5c()) {
                                    r27 = 0x1;
                            }
                            r8 = arg_2a8;
                            if (r8 != 0x0) {
                                    (r8[0x2])(r20 + 0x10);
                            }
                    }
                    r8 = arg_2f8;
                    if (r8 != 0x0) {
                            (r8[0x2])(r26 + 0x10);
                    }
                    if (r27 != 0x0) {
                            r25 = *r21;
                            r9 = r25[0x15];
                            r8 = r25[0x16];
                            arg_2f0 = r9;
                            if (r8 != 0x0) {
                                    (*r8)(r25 + 0xb8, r26 + 0x10);
                                    r8 = r25[0x16];
                            }
                            arg_2f8 = r8;
                            r0 = sub_101612cc0(&arg_2f0);
                            r9 = arg_28;
                            r8 = &arg_28;
                            if (sign_extend_64(arg_3f) >= 0x0) {
                                    r27 = r8;
                            }
                            else {
                                    r27 = r9;
                            }
                            r25 = *r21;
                            r9 = r25[0x1f];
                            r8 = r25[0x20];
                            arg_2a0 = r9;
                            if (r8 != 0x0) {
                                    (*r8)(r25 + 0x108, r20 + 0x10);
                                    r8 = r25[0x20];
                            }
                            arg_2a8 = r8;
                            r0 = sub_101612cc0(&arg_2a0);
                            r9 = arg_10;
                            r8 = &arg_10;
                            if (sign_extend_64(arg_27) < 0x0) {
                                    r8 = r9;
                            }
                            arg_280 = r27;
                            sub_1023475b4(": expected {}, got {}", 0x15, 0xcc, &arg_280);
                            r8 = arg_57;
                            r10 = arg_40;
                            r11 = arg_48;
                            bool_6305 = sign_extend_64(r8) < 0x0;
                            r9 = &arg_40;
                            r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::append(&arg_58);
                            if ((sign_extend_64(arg_57) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00(arg_40);
                            }
                            if ((sign_extend_64(arg_27) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00(arg_10);
                            }
                            r8 = arg_2a8;
                            if (r8 != 0x0) {
                                    (r8[0x2])(r20 + 0x10);
                            }
                            if ((sign_extend_64(arg_3f) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00(arg_28);
                            }
                            r8 = arg_2f8;
                            if (r8 != 0x0) {
                                    (r8[0x2])(r26 + 0x10);
                            }
                    }
                    r25 = *r21;
                    if (r25[0x2a] != 0x0) {
                            r0 = std::__1::__shared_weak_count::lock();
                            if (r0 != 0x0) {
                                    r27 = r0;
                                    r9 = r25[0x29];
                                    if (r9 != 0x0) {
                                            r8 = *r21;
                                            r8 = r8[0x28];
                                            if (r8 >= 0x1) {
                                                    r9 = r9[0xd];
                                                    if ((sign_extend_64(r9[0x17]) & 0xffffffff80000000) != 0x0) {
                                                            r9 = *r9;
                                                    }
                                                    arg_2f8 = 0x0;
                                                    arg_2f0 = r9;
                                                    r0 = sub_1023475b4(" ({}:{})", 0x8, 0x1c, &arg_2f0);
                                                    r8 = arg_2b7;
                                                    r10 = arg_2a0;
                                                    r11 = arg_2a8;
                                                    bool_6353 = sign_extend_64(r8) < 0x0;
                                                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::append(&arg_58);
                                                    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00(arg_2a0);
                                                    }
                                            }
                                    }
                                    r8 = r27 + 0x8;
                                    asm { ldaddal    x9, x8, [x8] };
                                    if (r8 == 0x0) {
                                            (*(*r27 + 0x10))(r27);
                                            std::__1::__shared_weak_count::__release_weak(r27);
                                    }
                            }
                    }
                    r8 = *r21;
                    if ((sign_extend_64(r8[0x87]) & 0xffffffff80000000) == 0x0) {
                            arg_2f0 = r8[0x7];
                    }
                    else {
                            r0 = sub_100004018(&arg_2f0, r8[0xe], r8[0xf]);
                    }
                    r8 = sign_extend_64(arg_307);
                    if ((r8 & 0xffffffff80000000) == 0x0) {
                            if (r8 == 0x0) {
                                    r9 = arg_58;
                                    if (sign_extend_64(arg_6f) >= 0x0) {
                                            r8 = r28;
                                    }
                                    else {
                                            r8 = r9;
                                    }
                                    arg_0 = r8;
                                    sub_1027ac3a0(0x3, "%s");
                                    if ((sign_extend_64(arg_6f) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_58);
                                    }
                                    if ((sign_extend_64(arg_87) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_70);
                                    }
                                    r21 = r21 + 0x10;
                                    if (r21 != r23) {
                                            continue;
                                    }
                                    break;
                            }
                            else {
                                    r8 = *r21;
                                    if ((sign_extend_64(r8[0x87]) & 0xffffffff80000000) == 0x0) {
                                            arg_2a0 = r8[0x7];
                                    }
                                    else {
                                            r0 = sub_100004018(&arg_2a0, r8[0xe], r8[0xf]);
                                    }
                                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::insert(&arg_2a0, 0x0, " -- ");
                                    arg_2f0 = *(int128_t *)r0;
                                    r0[0x1] = 0x0;
                                    r0[0x2] = 0x0;
                                    *r0 = 0x0;
                                    r8 = arg_307;
                                    r10 = arg_2f0;
                                    r11 = arg_2f8;
                                    bool_6319 = sign_extend_64(r8) < 0x0;
                                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::append(&arg_58);
                                    if ((sign_extend_64(arg_307) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_2f0);
                                    }
                                    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_2a0);
                                    }
                                    r9 = arg_58;
                                    if (sign_extend_64(arg_6f) >= 0x0) {
                                            r8 = r28;
                                    }
                                    else {
                                            r8 = r9;
                                    }
                                    arg_0 = r8;
                                    sub_1027ac3a0(0x3, "%s");
                                    if ((sign_extend_64(arg_6f) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_58);
                                    }
                                    if ((sign_extend_64(arg_87) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_70);
                                    }
                                    r21 = r21 + 0x10;
                                    if (r21 != r23) {
                                            continue;
                                    }
                                    break;
                            }
                    }
                    else {
                            loc_1029f6b00(arg_2f0);
                            if (arg_2f8 != 0x0) {
                                    r8 = *r21;
                                    if ((sign_extend_64(r8[0x87]) & 0xffffffff80000000) == 0x0) {
                                            arg_2a0 = r8[0x7];
                                    }
                                    else {
                                            r0 = sub_100004018(&arg_2a0, r8[0xe], r8[0xf]);
                                    }
                                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::insert(&arg_2a0, 0x0, " -- ");
                                    arg_2f0 = *(int128_t *)r0;
                                    r0[0x1] = 0x0;
                                    r0[0x2] = 0x0;
                                    *r0 = 0x0;
                                    r8 = arg_307;
                                    r10 = arg_2f0;
                                    r11 = arg_2f8;
                                    bool_6358 = sign_extend_64(r8) < 0x0;
                                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::append(&arg_58);
                                    if ((sign_extend_64(arg_307) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_2f0);
                                    }
                                    if ((sign_extend_64(arg_2b7) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_2a0);
                                    }
                                    r9 = arg_58;
                                    if (sign_extend_64(arg_6f) >= 0x0) {
                                            r8 = r28;
                                    }
                                    else {
                                            r8 = r9;
                                    }
                                    arg_0 = r8;
                                    sub_1027ac3a0(0x3, "%s");
                                    if ((sign_extend_64(arg_6f) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_58);
                                    }
                                    if ((sign_extend_64(arg_87) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_70);
                                    }
                                    r21 = r21 + 0x10;
                                    if (r21 != r23) {
                                            continue;
                                    }
                                    break;
                            }
                            else {
                                    r9 = arg_58;
                                    if (sign_extend_64(arg_6f) >= 0x0) {
                                            r8 = r28;
                                    }
                                    else {
                                            r8 = r9;
                                    }
                                    arg_0 = r8;
                                    sub_1027ac3a0(0x3, "%s");
                                    if ((sign_extend_64(arg_6f) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_58);
                                    }
                                    if ((sign_extend_64(arg_87) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00(arg_70);
                                    }
                                    r21 = r21 + 0x10;
                                    if (r21 != r23) {
                                            continue;
                                    }
                                    break;
                            }
                    }
            }
    }
    if ((sign_extend_64(arg_a7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_90);
    }
    if ((sign_extend_64(arg_c7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_b0);
    }
    sub_104091dc4(r19, arg_270);
    sub_100103100(r19[0x9b] + 0x18, &arg_270);
    r8 = r19[0x9b];
    r8[0x6] = r8[0x6] + 0x1;
    if (*(int8_t *)byte_106c42040 == 0x1) {
            arg_2f0 = 0x1068a6510;
            sub_10150f5dc(r8 + 0x98, &arg_2f0);
            loc_10150f6c0(&arg_2f0);
            sub_100024280(r19[0x9b] + 0xb8);
            sub_104091538(r19);
    }
    else {
            if (sub_101367fac(r19) != 0x0) {
                    r8 = r19[0x9b];
                    r8 = r8 + 0x48;
                    if (*r8 > 0x0) {
                            sub_101478090();
                    }
            }
            sub_1040904d0(r19);
    }
    r19 = arg_278;
    if (r19 != 0x0) {
            r8 = r19 + 0x8;
            asm { ldaddal    x9, x8, [x8] };
            if (r8 == 0x0) {
                    (*(*r19 + 0x10))(r19);
                    std::__1::__shared_weak_count::__release_weak(r19);
            }
    }
    if (**___stack_chk_guard != decomp_var_70) {
            __stack_chk_fail();
    }
    return;

loc_104092a58:
    r20 = &decomp_var_c0;
    r22 = &arg_340;
    r24 = r8 + 0xe0;
    goto .l11;

.l13:
    if (*(int8_t *)byte_106c42040 == 0x1 && *(int8_t *)byte_106bfeb48 == 0x1) {
            sub_100e597b8(r19[0xa] & 0xfffffffffffffff8);
    }
    else {
            arg_2a0 = sub_1022cd278();
            arg_2a8 = 0x2dcb0f;
            sub_100e59800(&arg_2a0);
    }
    r21 = arg_280;
    if ((sign_extend_64(*(int32_t *)(r24 + 0xffffffffffffff37)) & 0xffffffff80000000) == 0x0) {
            arg_100 = *(int128_t *)(r24 - 0xe0);
    }
    else {
            r0 = sub_100004018(&arg_100, r24[0xffffffffffffffe4], r24[0xffffffffffffffe5]);
    }
    r0 = sub_100e587d0(r21 + 0x58, &arg_100);
    if ((sign_extend_64(arg_117) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_100);
    }
    r21 = arg_280;
    if ((sign_extend_64(*(int32_t *)(r24 + 0xffffffffffffff4f)) & 0xffffffff80000000) == 0x0) {
            arg_e0 = *(int128_t *)(r24 - 0xc8);
    }
    else {
            r0 = sub_100004018(&arg_e0, r24[0xffffffffffffffe7], r24[0xffffffffffffffe8]);
    }
    r0 = sub_100e588b0(r21 + 0x58, &arg_e0);
    if ((sign_extend_64(arg_f7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_e0);
    }
    r21 = arg_280;
    decomp_var_c0 = r24[0xffffffffffffffea];
    r8 = r24[0xffffffffffffffeb];
    if (r8 != 0x0) {
            (*r8)(r24 - 0xa0, r20 + 0x10);
            r8 = r24[0xffffffffffffffeb];
    }
    sub_104093fe8(r21, &decomp_var_c0);
    r8 = r8;
    if (r8 != 0x0) {
            (r8[0x2])(r20 + 0x10);
    }
    r21 = arg_280;
    arg_340 = r24[0xfffffffffffffff4];
    r8 = r24[0xfffffffffffffff5];
    if (r8 != 0x0) {
            (*r8)(r24 - 0x50, r22 + 0x10);
            r8 = r24[0xfffffffffffffff5];
    }
    sub_104094034(r21, &arg_340);
    r8 = r8;
    if (r8 != 0x0) {
            (r8[0x2])(r22 + 0x10);
    }
    r8 = arg_280;
    r10 = r24[0xfffffffffffffffe];
    r9 = r24[0xffffffffffffffff];
    if (r9 != 0x0) {
            asm { ldadd      x28, x11, [x11] };
    }
    r0 = r8[0x2a];
    r8[0x29] = r10;
    r8[0x2a] = r9;
    if (r0 != 0x0) {
            std::__1::__shared_weak_count::__release_weak();
            r8 = arg_280;
    }
    sub_100e58a60(r8 + 0x58, *(int32_t *)r24);
    arg_d0 = arg_280;
    arg_288 = 0x0;
    arg_280 = 0x0;
    sub_100103778(arg_270 + 0x100, &arg_d0);
    r21 = arg_d8;
    if (r21 != 0x0) {
            r8 = r21 + 0x8;
            asm { ldaddal    x27, x8, [x8] };
            if (r8 == 0x0) {
                    (*(*r21 + 0x10))(r21);
                    std::__1::__shared_weak_count::__release_weak(r21);
            }
    }
    r21 = arg_288;
    if (r21 != 0x0) {
            r8 = r21 + 0x8;
            asm { ldaddal    x27, x8, [x8] };
            if (r8 == 0x0) {
                    (*(*r21 + 0x10))(r21);
                    std::__1::__shared_weak_count::__release_weak(r21);
            }
    }
    r8 = r24 + 0x8;
    r24 = r24 + 0xe8;
    if (r8 != r23) {
            continue;
    }
    break;

.l11:
    if (*(int8_t *)byte_106c42040 == 0x1 && *(int8_t *)byte_106bfeb48 == 0x1) {
            sub_100e597b8(r19[0xa] & 0xfffffffffffffff8);
    }
    else {
            arg_2a0 = sub_1022cd278();
            arg_2a8 = 0x2dcb0f;
            sub_100e59800(&arg_2a0);
    }
    r21 = arg_280;
    if ((sign_extend_64(*(int32_t *)(r24 + 0xffffffffffffff37)) & 0xffffffff80000000) == 0x0) {
            arg_100 = *(int128_t *)(r24 - 0xe0);
    }
    else {
            r0 = sub_100004018(&arg_100, r24[0xffffffffffffffe4], r24[0xffffffffffffffe5]);
    }
    r0 = sub_100e587d0(r21 + 0x58, &arg_100);
    if ((sign_extend_64(arg_117) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_100);
    }
    r21 = arg_280;
    if ((sign_extend_64(*(int32_t *)(r24 + 0xffffffffffffff4f)) & 0xffffffff80000000) == 0x0) {
            arg_e0 = *(int128_t *)(r24 - 0xc8);
    }
    else {
            r0 = sub_100004018(&arg_e0, r24[0xffffffffffffffe7], r24[0xffffffffffffffe8]);
    }
    r0 = sub_100e588b0(r21 + 0x58, &arg_e0);
    if ((sign_extend_64(arg_f7) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00(arg_e0);
    }
    r21 = arg_280;
    decomp_var_c0 = r24[0xffffffffffffffea];
    r8 = r24[0xffffffffffffffeb];
    if (r8 != 0x0) {
            (*r8)(r24 - 0xa0, r20 + 0x10);
            r8 = r24[0xffffffffffffffeb];
    }
    sub_104093fe8(r21, &decomp_var_c0);
    r8 = r8;
    if (r8 != 0x0) {
            (r8[0x2])(r20 + 0x10);
    }
    r21 = arg_280;
    arg_340 = r24[0xfffffffffffffff4];
    r8 = r24[0xfffffffffffffff5];
    if (r8 != 0x0) {
            (*r8)(r24 - 0x50, r22 + 0x10);
            r8 = r24[0xfffffffffffffff5];
    }
    sub_104094034(r21, &arg_340);
    r8 = r8;
    if (r8 != 0x0) {
            (r8[0x2])(r22 + 0x10);
    }
    r8 = arg_280;
    r10 = r24[0xfffffffffffffffe];
    r9 = r24[0xffffffffffffffff];
    if (r9 != 0x0) {
            asm { ldadd      x28, x11, [x11] };
    }
    r0 = r8[0x2a];
    r8[0x29] = r10;
    r8[0x2a] = r9;
    if (r0 != 0x0) {
            std::__1::__shared_weak_count::__release_weak();
            r8 = arg_280;
    }
    sub_100e58a60(r8 + 0x58, *(int32_t *)r24);
    arg_d0 = arg_280;
    arg_288 = 0x0;
    arg_280 = 0x0;
    sub_100103778(arg_270 + 0x100, &arg_d0);
    r21 = arg_d8;
    if (r21 != 0x0) {
            r8 = r21 + 0x8;
            asm { ldaddal    x27, x8, [x8] };
            if (r8 == 0x0) {
                    (*(*r21 + 0x10))(r21);
                    std::__1::__shared_weak_count::__release_weak(r21);
            }
    }
    r21 = arg_288;
    if (r21 != 0x0) {
            r8 = r21 + 0x8;
            asm { ldaddal    x27, x8, [x8] };
            if (r8 == 0x0) {
                    (*(*r21 + 0x10))(r21);
                    std::__1::__shared_weak_count::__release_weak(r21);
            }
    }
    r8 = r24 + 0x8;
    r24 = r24 + 0xe8;
    if (r8 != r23) {
            continue;
    }
    break;
}
