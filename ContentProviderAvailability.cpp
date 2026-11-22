int sub_1047f2ec0(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
    r2 = arg2;
    var_50 = r28;
    decomp_var_48 = r27;
    var_40 = r26;
    decomp_var_38 = r25;
    var_30 = r24;
    decomp_var_28 = r23;
    var_20 = r22;
    decomp_var_18 = r21;
    var_10 = r20;
    decomp_var_8 = r19;
    saved_fp = r29;
    decomp_var_m8 = r30;
    r31 = r31 + 0xffffffffffffffa0 - 0x200;
    r20 = arg5;
    r24 = arg4;
    r21 = arg3;
    r25 = r2;
    r26 = arg1;
    r22 = arg0;
    var_68 = **___stack_chk_guard;
    r0 = sub_10008b244();
    if (r0 != 0x0) {
            r23 = r0;
            r0 = sub_10481f4b0();
            if (r0 != 0x0) {
                    r19 = r0;
                    r0 = sub_10090473c(r26);
                    var_120 = *(int16_t *)r0;
                    r27 = &var_120;
                    if ((sign_extend_64(r0[0x1f]) & 0xffffffff80000000) == 0x0) {
                            q0 = *(int128_t *)(r0 + 0x8);
                            r27[0x3] = r0[0x3];
                            *(int128_t *)(r27 + 0x8) = q0;
                    }
                    else {
                            r1 = r0[0x1];
                            r2 = r0[0x2];
                            sub_100003c60(r27 + 0x8, r1, r2);
                    }
                    if (*(int32_t *)r26 == 0x2) {
                            loc_100904298(&decomp_var_148, r26);
                            sub_100906740(&decomp_var_148);
                            loc_10090362c();
                            if (var_1B0 != 0x0) {
                                    sub_1047f910c(&var_D0, r24);
                                    var_1A8 = 0x0;
                                    r0 = sub_10000c438(&decomp_var_168, 0x30, 0x8, &var_D0, 0x106986d70, sub_1047f92b8);
                                    sub_10481cfa4(r19, &decomp_var_168, 0x1);
                                    sub_10000be44(&decomp_var_168);
                                    r19 = var_A8;
                                    if (r19 != 0x0) {
                                            r8 = r19 + 0x8;
                                            asm { ldaddal    x9, x8, [x8] };
                                            if (r8 == 0x0) {
                                                    (*(*r19 + 0x10))(r19);
                                                    std::__1::__shared_weak_count::__release_weak();
                                            }
                                    }
                                    r0 = var_B8;
                                    if (r0 != &var_D0) {
                                            if (r0 != 0x0) {
                                                    r0 = (*(*r0 + 0x28))();
                                            }
                                    }
                                    else {
                                            r0 = (*(*r0 + 0x20))();
                                    }
                                    r19 = var_1A8;
                                    if (r19 != 0x0) {
                                            r8 = r19 + 0x8;
                                            asm { ldaddal    x9, x8, [x8] };
                                            if (r8 == 0x0) {
                                                    (*(*r19 + 0x10))(r19);
                                                    r0 = std::__1::__shared_weak_count::__release_weak();
                                            }
                                    }
                            }
                            else {
                                    r21 = var_1A8;
                                    if (r21 != 0x0) {
                                            r8 = r21 + 0x8;
                                            asm { ldaddal    x9, x8, [x8] };
                                            if (r8 == 0x0) {
                                                    (*(*r21 + 0x10))(r21);
                                                    std::__1::__shared_weak_count::__release_weak();
                                            }
                                    }
                                    sub_1033b1f90(&var_D0, r20);
                                    sub_10000c438(&decomp_var_188, 0x20, 0x8, &var_D0, 0x106986d90, sub_1047f9398);
                                    sub_10481cfa4(r19, &decomp_var_188, 0x1);
                                    sub_10000be44(&decomp_var_188);
                                    r0 = var_B8;
                                    if (r0 != &var_D0) {
                                            if (r0 != 0x0) {
                                                    r0 = (*(*r0 + 0x28))();
                                            }
                                    }
                                    else {
                                            r0 = (*(*r0 + 0x20))();
                                    }
                            }
                    }
                    else {
                            var_1B0 = var_120;
                            r28 = &var_1B0;
                            if ((sign_extend_64(var_101) & 0xffffffff80000000) == 0x0) {
                                    *(int128_t *)(r28 + 0x8) = *(int128_t *)(r27 + 0x8);
                                    r28[0x3] = r27[0x3];
                            }
                            else {
                                    r2 = decomp_var_110;
                                    sub_100003c60(r28 + 0x8, var_118, r2);
                            }
                            if (r19[0x6b] == 0x0) {
                                    r0 = sub_102b54574(&var_120);
                                    r8 = sign_extend_64(var_B9);
                                    r9 = var_C8;
                                    if (r8 >= 0x0) {
                                            r26 = r8;
                                    }
                                    else {
                                            r26 = r9;
                                    }
                                    if ((r8 & 0xffffffff80000000) != 0x0) {
                                            loc_102c74a48();
                                    }
                                    if (r26 != 0x0) {
                                            r26 = &var_1F0;
                                            sub_102b54574(&var_120);
                                            r9 = var_1F0;
                                            if (sign_extend_64(var_1D9) >= 0x0) {
                                                    r0 = r26;
                                            }
                                            else {
                                                    r0 = r9;
                                            }
                                            sub_1009f5e7c(r0);
                                            var_D0 = 0x0;
                                            r26 = &var_D0 + 0x8;
                                            var_C8 = var_1C8;
                                            var_1C8 = 0x0;
                                            r9 = var_B1;
                                            r10 = var_C8;
                                            r11 = var_C0;
                                            bool_16050 = sign_extend_64(r9) < 0x0;
                                            if (sign_extend_64(r9) >= 0x0) {
                                                    r8 = r26;
                                            }
                                            else {
                                                    r8 = r10;
                                            }
                                            if (bool_16050) {
                                                    r9 = r11;
                                            }
                                            if (r9 != 0x0) {
                                                    do {
                                                            if (*(int8_t *)r8 == 0x5c) {
                                                                    *(int8_t *)r8 = 0x2f;
                                                            }
                                                            r8 = r8 + 0x1;
                                                            r9 = r9 - 0x1;
                                                    } while (r9 != 0x0);
                                                    asm { ldurh      w8, [fp, var_D0] };
                                            }
                                            else {
                                                    r8 = 0x0;
                                            }
                                            var_1B0 = r8;
                                            if ((sign_extend_64(var_191) & 0xffffffff80000000) != 0x0) {
                                                    loc_102c74a48();
                                            }
                                            *(int128_t *)(r28 + 0x8) = *(int128_t *)r26;
                                            r28[0x3] = r26[0x2];
                                            var_C8 = 0x0;
                                            if ((sign_extend_64(var_1B1) & 0xffffffff80000000) != 0x0) {
                                                    loc_102c74a48();
                                            }
                                            if ((sign_extend_64(var_1D9) & 0xffffffff80000000) != 0x0) {
                                                    loc_102c74a48();
                                            }
                                    }
                            }
                            var_1F0 = var_1B0;
                            r26 = &var_1F0 + 0x8;
                            if ((sign_extend_64(var_191) & 0xffffffff80000000) == 0x0) {
                                    *(int128_t *)r26 = *(int128_t *)(r28 + 0x8);
                                    r26[0x2] = r28[0x3];
                            }
                            else {
                                    r2 = decomp_var_1a0;
                                    sub_100003c60(r26, var_1A8, r2);
                            }
                            r1 = &var_1F0;
                            if (sub_10090a7ec(r23, r1) != 0x0) {
                                    r0 = sub_102b53748(&var_1F0);
                                    if (r0 == 0x7) {
                                            r8 = r19[0x6b];
                                            if (r8 >= 0x1) {
                                                    var_D0 = *qword_106a07070;
                                                    var_C8 = 0x0;
                                                    sub_1025c500c("&{}={}", 0x6, 0x3c, &var_D0);
                                                    r8 = var_1D1;
                                                    r10 = var_1E8;
                                                    r11 = decomp_var_1e0;
                                                    bool_16017 = sign_extend_64(r8) < 0x0;
                                                    if (sign_extend_64(r8) >= 0x0) {
                                                            r2 = r26;
                                                    }
                                                    else {
                                                            r2 = r10;
                                                    }
                                                    r1 = 0x0;
                                                    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::insert(&var_228, 0x0, r2);
                                                    r9 = *r0;
                                                    var_78 = r0[0x1];
                                                    r10 = r0[0x17];
                                                    *r0 = 0x0;
                                                    r0[0x1] = 0x0;
                                                    r0[0x2] = 0x0;
                                                    var_210 = 0x0;
                                                    r26 = &var_210 + 0x8;
                                                    r12 = var_78;
                                                    bool_16018 = sign_extend_64(r10) < 0x0;
                                                    if (sign_extend_64(r10) >= 0x0) {
                                                            r8 = r26;
                                                    }
                                                    else {
                                                            r8 = r9;
                                                    }
                                                    if (!bool_16018) {
                                                            r9 = r10;
                                                    }
                                                    else {
                                                            r9 = r12;
                                                    }
                                                    if (r9 != 0x0) {
                                                            do {
                                                                    if (*(int8_t *)r8 == 0x5c) {
                                                                            *(int8_t *)r8 = 0x2f;
                                                                    }
                                                                    r8 = r8 + 0x1;
                                                                    r9 = r9 - 0x1;
                                                            } while (r9 != 0x0);
                                                            r8 = var_210;
                                                    }
                                                    else {
                                                            r8 = 0x0;
                                                    }
                                                    var_1B0 = r8;
                                                    if ((sign_extend_64(var_191) & 0xffffffff80000000) != 0x0) {
                                                            r1 = 0x0;
                                                            loc_102c74a48();
                                                    }
                                                    *(int128_t *)(r28 + 0x8) = *(int128_t *)r26;
                                                    r28[0x3] = r26[0x2];
                                                    if ((sign_extend_64(var_211) & 0xffffffff80000000) != 0x0) {
                                                            r1 = 0x0;
                                                            loc_102c74a48();
                                                    }
                                            }
                                    }
                            }
                            if ((sign_extend_64(var_1D1) & 0xffffffff80000000) != 0x0) {
                                    loc_102c74a48();
                            }
                            r25 = sub_1047f2e84(r25, r1, r2);
                            sub_10008b264();
                            var_D0 = var_1F0;
                            var_1E8 = 0x0;
                            r19 = &var_D0 + 0x10;
                            sub_1047f910c(r19, r24);
                            sub_1033b1f90(&var_D0 + 0x30, r20);
                            sub_10000c438(&decomp_var_248, 0x50, 0x8, &var_D0, 0x106986db0, sub_1047f97fc);
                            sub_1047f2a98(r22, r23, &var_1B0, &decomp_var_248, r25, r21);
                            sub_10000be44(&decomp_var_248);
                            r0 = var_88;
                            if (r0 != &var_D0 + 0x30) {
                                    if (r0 != 0x0) {
                                            (*(*r0 + 0x28))();
                                    }
                            }
                            else {
                                    (*(*r0 + 0x20))();
                            }
                            r0 = var_A8;
                            if (r0 != r19) {
                                    if (r0 != 0x0) {
                                            (*(*r0 + 0x28))();
                                    }
                            }
                            else {
                                    (*(*r0 + 0x20))();
                            }
                            if (var_C8 != 0x0) {
                                    std::__1::__shared_weak_count::__release_weak();
                            }
                            r0 = var_1E8;
                            if (r0 != 0x0) {
                                    r0 = std::__1::__shared_weak_count::__release_weak();
                            }
                            if ((sign_extend_64(var_191) & 0xffffffff80000000) != 0x0) {
                                    r0 = loc_102c74a48();
                            }
                    }
                    if ((sign_extend_64(var_101) & 0xffffffff80000000) != 0x0) {
                            r0 = loc_102c74a48();
                    }
                    if (**___stack_chk_guard != var_68) {
                            __stack_chk_fail();
                    }
            }
            else {
                    r0 = sub_100003d78(&var_100, "DataModel not available", r2);
                    r0 = r20[0x3];
                    if (r0 != 0x0) {
                            r0 = (*(*r0 + 0x30))();
                            if ((sign_extend_64(var_E9) & 0xffffffff80000000) != 0x0) {
                                    r0 = loc_102c74a48();
                            }
                            if (**___stack_chk_guard != var_68) {
                                    __stack_chk_fail();
                            }
                    }
                    else {
                            r0 = loc_10167a098(r0, "DataModel not available");
                            asm { brk        #0x1 };
                    }
            }
    }
    else {
            r0 = sub_100003d78(&var_E8, "ContentProvider not available", r2);
            r0 = r20[0x3];
            if (r0 != 0x0) {
                    r0 = (*(*r0 + 0x30))();
                    if ((sign_extend_64(var_D1) & 0xffffffff80000000) != 0x0) {
                            r0 = loc_102c74a48();
                    }
                    if (**___stack_chk_guard != var_68) {
                            __stack_chk_fail();
                    }
            }
            else {
                    r0 = loc_10167a098(r0, "ContentProvider not available");
                    asm { brk        #0x1 };
            }
    }
    return r0;
}
