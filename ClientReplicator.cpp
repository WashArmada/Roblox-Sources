void sub_104e30c4c(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7) {
    r7 = arg7;
    r6 = arg6;
    r5 = arg5;
    r4 = arg4;
    r3 = arg3;
    r2 = arg2;
    r1 = arg1;
    r0 = arg0;
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
    r31 = r31 + 0xffffffffffffffa0 - 0x250;
    decomp_var_68 = **___stack_chk_guard;
    r8 = r2[0x1];
    if (r8 == 0x0) goto loc_104e32e70;
    goto loc_104e30c84;

loc_104e32e70:
    r20 = __cxa_allocate_exception();
    sub_1029fdf64("Cannot read value: value sent via unsupported format");
    goto loc_104e32e8c;

loc_104e30c84:
    r8 = r8 - 0x2;
    if (r8 > 0x45) goto .l222;
    goto loc_104e30c90;

loc_104e32e8c:
    __cxa_throw();
    return;

.l222:
    r20 = __cxa_allocate_exception();
    sub_1029fdf64("Cannot read property value: unhandled type");
    goto loc_104e32e8c;

loc_104e30c90:
    r19 = r7;
    r24 = r6;
    r21 = r5;
    r23 = r4;
    r25 = r3;
    r26 = r2;
    r22 = r1;
    r20 = r0;
    r27 = &decomp_var_e0;
    r28 = &decomp_var_200;
    r9 = r1[0xe];
    decomp_var_29c = r9;
    index_0 = r8;
    if (index_0 == 0x0) goto loc_104e30cd8;
    goto .l263;

loc_104e30cd8:
    decomp_var_e0 = 0x0;
    decomp_var_d8 = 0x0;
    r24 = r20[0x3f];
    r0 = (*(*r20 + 0x410))(r20);
    r8 = 0x106c6b078;
    bool_9220 = r24 == 0x1;
    if (r24 != 0x1) {
            r8 = 0x106c66b10;
    }
    r9 = 0x106c6b048;
    if (!bool_9220) {
            r9 = 0x106c66ae0;
    }
    if (r0 == 0x0) {
            r8 = r9;
    }
    r2 = *(int32_t *)r8;
    r0 = sub_1015ff140(&decomp_var_e0, r22, r2);
    r9 = decomp_var_c9;
    r8 = sign_extend_64(r9);
    r10 = decomp_var_d8;
    r11 = *(int32_t *)r19;
    if (r8 < 0x0) {
            r9 = r10;
    }
    *(int32_t *)r19 = r11 + r9;
    r9 = r23[0x1];
    if (r9 != 0x0) {
            r1 = *r23;
            r0 = r9[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
            r8 = decomp_var_c9;
    }
    goto loc_104e329c8;

.l263:
    if (index_0 == 0x1) goto .l219;
    goto .l264;

loc_104e329c8:
    if ((r8 & 0x80) != 0x0) {
            loc_1029f6b00();
    }
    goto .l219;

.l219:
    r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
    asm { ccmp       x8, x21, #0x2, ne };
    if (asm { ccmp       x8, x21, #0x2, ne }) {
            r8 = 0x1;
    }
    r22 = r22[0xe] - decomp_var_29c;
    r9 = *(int32_t *)dword_106c69d38;
    asm { ccmp       w22, w9, #0x0, ne };
    if (asm { ccmp       w22, w9, #0x0, ne }) {
            r9 = 0x1;
    }
    asm { ccmp       w22, w10, #0x0, ne };
    if (asm { ccmp       w22, w10, #0x0, ne }) {
            r23 = 0x1;
    }
    r11 = *r19;
    asm { ccmp       w11, w12, #0x0, ne };
    if (asm { ccmp       w11, w12, #0x0, ne }) {
            r25 = 0x1;
    }
    asm { ccmp       w10, w13, #0x0, ne };
    if (asm { ccmp       w10, w13, #0x0, ne }) {
            r24 = 0x1;
    }
    if (*(int8_t *)byte_106c69cf0 == 0x1) {
            asm { ccmp       w11, w12, #0x0, ne };
            if (asm { ccmp       w11, w12, #0x0, ne }) {
                    r11 = 0x1;
            }
            asm { ccmp       w10, w13, #0x0, ne };
            if (!asm { ccmp       w10, w13, #0x0, ne }) {
                    r10 = 0x1;
            }
            else {
                    r10 = r11;
            }
            if (((r8 | r9 | r10) & 0x1) != 0x0) {
                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
    }
    else {
            if ((r8 | r9 | r25 | r24) == 0x1) {
                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
    }
    if (*(int8_t *)byte_106c68fb8 == 0x1) {
            if (r25 == 0x0) {
                    if (r24 == 0x0) {
                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                    if (**___stack_chk_guard != decomp_var_68) {
                                            __stack_chk_fail();
                                    }
                            }
                            else {
                                    r20 = __cxa_allocate_exception();
                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                    *r20 = 0x1068ac4e8;
                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                    r20[0x3] = decomp_var_288;
                                    __cxa_throw();
                            }
                    }
                    else {
                            r20 = __cxa_allocate_exception();
                            sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                            *r20 = 0x1068ac4e8;
                            *(int128_t *)(r20 + 0x8) = decomp_var_280;
                            r20[0x3] = decomp_var_270;
                            __cxa_throw();
                    }
            }
            else {
                    r20 = __cxa_allocate_exception();
                    sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                    *r20 = 0x1068ac4e8;
                    *(int128_t *)(r20 + 0x8) = decomp_var_268;
                    r20[0x3] = decomp_var_258;
                    __cxa_throw();
            }
    }
    else {
            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                    if (**___stack_chk_guard != decomp_var_68) {
                            __stack_chk_fail();
                    }
            }
            else {
                    r20 = __cxa_allocate_exception();
                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                    *r20 = 0x1068ac4e8;
                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                    r20[0x3] = decomp_var_288;
                    __cxa_throw();
            }
    }
    return;

.l264:
    if (index_0 == 0x2) goto .l222;

.l265:
    if (index_0 == 0x3) goto loc_104e3173c;
    goto .l266;

loc_104e3173c:
    sub_102a01648(&decomp_var_1d8, r1, r2);
    r25 = 0x2fb0;
    r2 = r20 + 0x2fb0;
    r1 = r22;
    r0 = sub_104e335a0(r20, r1, r2, &decomp_var_1d8);
    if (r0 != 0x0) {
            r0 = sub_1036bde44(&decomp_var_1d8, r1, r2);
            r8 = r23[0x1];
            if (r8 != 0x0) {
                    r1 = *r23;
                    r0 = r8[0x16];
                    r23 = &decomp_var_e0;
                    r2 = &decomp_var_e0;
                    (*(*r0 + 0x28))(r0, r1, r2);
            }
            sub_100172918(&decomp_var_e0 + 0x8);
            r0 = sub_100172918(&decomp_var_e0);
    }
    else {
            r25 = 0x2fb0;
            r0 = sub_104e85d4c(r24, r20 + 0x2fb0);
            decomp_var_e0 = 0x0;
            q0 = *(int128_t *)r23;
            asm { ext        v0.16b, v0.16b, v0.16b, #0x8 };
            *(int128_t *)(r27 + 0x8) = q0;
            r0 = sub_104e33630(r0 + 0x18, &decomp_var_e0, r2);
    }
    goto loc_104e32b28;

.l266:
    if (index_0 == 0x4) goto loc_104e31660;
    goto .l267;

loc_104e32b28:
    sub_100172918(&decomp_var_1d8);
    goto .l219;

loc_104e31660:
    r0 = sub_1015fede0(&decomp_var_e0);
    r0 = r23[0x1];
    if (r0 != 0x0) {
            r2 = decomp_var_e0;
            (*(*r0 + 0x110))();
    }
    goto .l219;

.l267:
    if (index_0 == 0x5) goto loc_104e3159c;
    goto .l268;

loc_104e3159c:
    decomp_var_e0 = 0x0;
    decomp_var_d8 = 0x0;
    r24 = r20[0x3f];
    r0 = (*(*r20 + 0x410))(r20);
    r8 = 0x106c6b078;
    bool_9219 = r24 == 0x1;
    if (r24 != 0x1) {
            r8 = 0x106c66b10;
    }
    r9 = 0x106c6b048;
    if (!bool_9219) {
            r9 = 0x106c66ae0;
    }
    if (r0 == 0x0) {
            r8 = r9;
    }
    r2 = *(int32_t *)r8;
    r0 = sub_1015ff140(&decomp_var_e0, r22, r2);
    r8 = decomp_var_c9;
    r10 = decomp_var_d8;
    r11 = *(int32_t *)r19;
    if (sign_extend_64(r8) < 0x0) {
            r8 = r10;
    }
    *(int32_t *)r19 = r11 + r8;
    if (r26[0x1] == 0x3) {
            r0 = sub_102a01754(&decomp_var_1d8, &decomp_var_e0);
            r8 = r23[0x1];
            if (r8 != 0x0) {
                    r1 = *r23;
                    r0 = r8[0x16];
                    r2 = &decomp_var_1d8;
                    (*(*r0 + 0x28))(r0, r1, r2);
            }
            sub_100172918(&decomp_var_1d8);
    }
    else {
            r8 = r23[0x1];
            if (r8 != 0x0) {
                    r1 = *r23;
                    r0 = r8[0x16];
                    r2 = &decomp_var_e0;
                    (*(*r0 + 0x28))(r0, r1, r2);
            }
    }
    goto loc_104e32754;

.l268:
    if (index_0 == 0x6) goto loc_104e31950;
    goto .l269;

loc_104e32754:
    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    goto .l219;

loc_104e31950:
    decomp_var_e0 = sub_1015ffb64(r22);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto .l219;

.l269:
    if (index_0 == 0x7) goto loc_104e31834;
    goto .l270;

loc_104e31834:
    r0 = sub_1015fefbc(&decomp_var_1d8, r22);
    if (r26[0x1] == 0x1) {
            decomp_var_e0 = sign_extend_64(decomp_var_1d8);
            r8 = r23[0x1];
            if (r8 != 0x0) {
                    r1 = *r23;
                    r0 = r8[0x16];
                    r2 = &decomp_var_e0;
                    (*(*r0 + 0x28))(r0, r1, r2);
            }
    }
    else {
            r8 = r23[0x1];
            if (r8 != 0x0) {
                    r1 = *r23;
                    r0 = r8[0x16];
                    r2 = &decomp_var_1d8;
                    (*(*r0 + 0x28))(r0, r1, r2);
            }
    }
    goto .l219;

.l270:
    if (index_0 == 0x8) goto loc_104e313a8;
    goto .l271;

loc_104e313a8:
    sub_1015ffb90(r22);
    decomp_var_e0 = s0;
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto .l219;

.l271:
    if (index_0 == 0x9) goto loc_104e319d0;
    goto .l272;

loc_104e319d0:
    sub_1015ffc4c(r22);
    decomp_var_e0 = d0;
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto .l219;

.l272:
    if (index_0 == 0xa) goto loc_104e31a74;
    goto .l273;

loc_104e31a74:
    decomp_var_e0 = 0x0;
    r0 = sub_104fac888(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto .l219;

.l273:
    if (index_0 == 0xb) goto loc_104e31290;
    goto .l274;

loc_104e31290:
    decomp_var_e0 = 0x0;
    r0 = sub_104fac7d8(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto .l219;

.l274:
    if (index_0 == 0xc) goto loc_104e31b6c;
    goto .l275;

loc_104e31b6c:
    decomp_var_e0 = 0x0;
    r0 = sub_104fae714(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto .l219;

.l275:
    if (index_0 == 0xd) goto loc_104e31340;
    goto .l276;

loc_104e31340:
    sub_1005fe804(&decomp_var_e0, 0x0);
    r0 = sub_1044cdf30(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto .l219;

.l276:
    if (index_0 == 0xe) goto loc_104e313d8;
    goto .l277;

loc_104e313d8:
    sub_1005fe804(&decomp_var_e0, 0x0);
    r0 = sub_1044cdf30(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto .l219;

.l277:
    if (index_0 == 0xf) goto loc_104e314f4;
    goto .l278;

loc_104e314f4:
    decomp_var_e0 = 0xc2;
    r0 = sub_104faa7d4(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto .l219;

.l278:
    if (index_0 == 0x10) goto loc_104e31564;
    goto .l279;

loc_104e31564:
    decomp_var_e0 = 0x0;
    r0 = sub_104faacc8(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto .l219;

.l279:
    if (index_0 == 0x11) goto loc_104e3152c;
    goto .l280;

loc_104e3152c:
    decomp_var_e0 = 0x0;
    r0 = sub_104fae678(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto .l219;

.l280:
    if (index_0 == 0x12) goto loc_104e31480;
    goto .l281;

loc_104e31480:
    decomp_var_e0 = 0x0;
    r0 = sub_104faabf8(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto .l219;

.l281:
    if (index_0 == 0x13) goto loc_104e31b34;
    goto .l282;

loc_104e31b34:
    decomp_var_e0 = 0x0;
    r0 = sub_104faacc8(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto .l219;

.l282:
    if (index_0 == 0x14) goto loc_104e3130c;
    goto .l283;

loc_104e3130c:
    decomp_var_e0 = 0x0;
    r0 = sub_104fae8dc(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto .l219;

.l283:
    if (index_0 == 0x15) goto loc_104e31220;
    goto .l284;

loc_104e31220:
    decomp_var_e0 = 0x0;
    r0 = sub_104fae9dc(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto .l219;

.l284:
    if (index_0 == 0x16) goto loc_104e314b4;
    goto .l285;

loc_104e314b4:
    *r27 = 5.26354e-315;
    r27[0x2] = 5.26354e-315;
    r27[0x2] = 5.26354e-315;
    r0 = sub_104fad910(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto .l219;

.l285:
    if (index_0 == 0x17) goto loc_104e31c84;
    goto .l286;

loc_104e31c84:
    *r27 = 5.26354e-315;
    r27[0x2] = 5.26354e-315;
    r27[0x2] = 5.26354e-315;
    r0 = sub_104fad7b4(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto .l219;

.l286:
    if (index_0 == 0x18) goto loc_104e31060;
    goto .l287;

loc_104e31060:
    decomp_var_190 = sub_104d65488(r20, r22);
    decomp_var_e0 = 0x0;
    r0 = r20[0x13];
    r2 = &decomp_var_e0;
    r0 = sub_1028a2c00(r0, &decomp_var_190, r2);
    if (r0 != 0x0) {
            r0 = r23[0x1];
            if (r0 != 0x0) {
                    r2 = decomp_var_e0;
                    (*(*r0 + 0x110))();
            }
    }
    else {
            decomp_var_220 = 0x0;
            decomp_var_1d8 = 0x0;
            decomp_var_f0 = 0x0;
            r2 = &decomp_var_1d8;
            sub_104e33768(r23, &decomp_var_220, r2);
            if (decomp_var_220 != 0x0 && decomp_var_1d8 != 0x0) {
                    r9 = decomp_var_f0;
                    asm { ccmp       x9, #0x0, #0x4, ne };
                    if (!asm { ccmp       x9, #0x0, #0x4, ne }) {
                            *r9 = decomp_var_190;
                    }
            }
            sub_100005114(&decomp_var_1d8);
    }
    r0 = &decomp_var_e0;
    sub_100005114(r0);
    goto .l219;

.l287:
    if (index_0 == 0x19) goto loc_104e31ba4;
    goto .l288;

loc_104e31ba4:
    if (r21 != 0x0) {
            if (r20 != 0x0) {
                    r19 = r20[0x3];
                    r0 = sub_104f968a0();
                    if (r19[0xe0] - r0[0xe0] <= r0[0xe1]) {
                            (*(*r20 + 0x6f8))(r20, "codeName", 0x24, 0x1, "Tuple", 0x0);
                    }
            }
            sub_1029fe0a0("Tuple cannot be received as a member of another container.");
    }
    r0 = sub_1015fede0(&decomp_var_190);
    sub_104e337dc(decomp_var_190, "Tuple (read)");
    r0 = loc_1029f6ac8(0x18);
    *r0 = 0x0;
    r0[0x1] = 0x0;
    r0[0x2] = 0x0;
    r0 = sub_1002768b4(&decomp_var_e0, r0);
    sub_1014889d8(decomp_var_e0, decomp_var_190);
    if (decomp_var_190 != 0x0) {
            r26 = 0x0;
            r27 = 0x0;
            do {
                    r2 = r25;
                    sub_104e339bc(r20, r22, r2, *decomp_var_e0 + r26, 0x0, r24, r19);
                    r27 = r27 + 0x1;
                    r26 = r26 + 0x50;
            } while (r27 < decomp_var_190);
    }
    r8 = decomp_var_d8;
    decomp_var_1d8 = decomp_var_e0;
    if (r8 != 0x0) {
            asm { ldadd      x9, x8, [x8] };
    }
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_1d8;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    sub_100005114(&decomp_var_1d8);
    r0 = sub_100005114(&decomp_var_e0);
    goto .l219;

.l288:
    if (index_0 == 0x1a) goto loc_104e31d84;
    goto .l289;

loc_104e31d84:
    r0 = sub_1015fede0(&decomp_var_190);
    sub_104e337dc(decomp_var_190, "ValueArray (read)");
    r0 = loc_1029f6ac8(0x18);
    r26 = r0;
    sub_1000b3104(r0, decomp_var_190, r2);
    r0 = sub_1010b2c5c(&decomp_var_e0, r26);
    if (decomp_var_190 != 0x0) {
            r26 = 0x0;
            r27 = 0x0;
            do {
                    r2 = r25;
                    sub_104e339bc(r20, r22, r2, *decomp_var_e0 + r26, r21, r24, r19);
                    r27 = r27 + 0x1;
                    r26 = r26 + 0x50;
            } while (r27 < decomp_var_190);
    }
    r0 = (*(*r20 + 0x618))(r20, &decomp_var_e0);
    r8 = decomp_var_d8;
    decomp_var_1d8 = decomp_var_e0;
    if (r8 != 0x0) {
            asm { ldadd      x9, x8, [x8] };
    }
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_1d8;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    sub_100005114(&decomp_var_1d8);
    r0 = sub_100005114(&decomp_var_e0);
    goto .l219;

.l289:
    if (index_0 == 0x1b) goto loc_104e3168c;
    goto .l290;

loc_104e3168c:
    if (*(int8_t *)byte_106c6a890 != 0x1) goto loc_104e321c0;
    goto loc_104e3169c;

.l290:
    if (index_0 == 0x1c) goto loc_104e31cc4;
    goto .l291;

loc_104e321c0:
    r1 = r22;
    r0 = sub_1015fede0(&decomp_var_220);
    sub_104e337dc(decomp_var_220, "ValueTable (read)");
    r0 = loc_1029f6ac8(0x28);
    r0[0x4] = 0x0;
    *r0 = q0;
    r0[0x2] = q0;
    r0[0x8] = 0x3f800000;
    r0 = sub_10026c014(&decomp_var_1d8, r0);
    decomp_var_e0 = 0x0;
    if (decomp_var_220 != 0x0) {
            r27 = 0x0;
            while (true) {
                    r28 = r20[0x3f];
                    r0 = (*(*r20 + 0x410))(r20);
                    bool_10074 = r28 == 0x1;
                    r8 = 0x106c6b078;
                    if (r28 != 0x1) {
                            r8 = 0x106c66b10;
                    }
                    r9 = 0x106c6b048;
                    if (!bool_10074) {
                            r9 = 0x106c66ae0;
                    }
                    if (r0 == 0x0) {
                            r8 = r9;
                    }
                    r0 = sub_1015ff140(&decomp_var_e0, r22, *(int32_t *)r8);
                    r0 = decomp_var_1d8;
                    if (*(int8_t *)byte_106c69d98 != 0x1) {
                            decomp_var_190 = &decomp_var_e0;
                            r0 = sub_10021a6c0(r0, &decomp_var_e0, 0x1059b8ec8, &decomp_var_190, &decomp_var_f0);
                            r2 = r25;
                            sub_104e339bc(r20, r22, r2, r0 + 0x28, r21, r24, r19);
                            r27 = r27 + 0x1;
                            if (r27 < decomp_var_220) {
                                    continue;
                            }
                            temp_1 = 0x1;
                            break;
                    }
                    decomp_var_190 = &decomp_var_e0;
                    r2 = 0x1059b8ec8;
                    r0 = sub_10021a6c0(r0, &decomp_var_e0, 0x1059b8ec8, &decomp_var_190, &decomp_var_f0);
                    if ((r1 & 0x1) == 0x0) {
                            sub_1029fe0a0("Received duplicate key in variant container");
                    }
                    r2 = r25;
                    sub_104e339bc(r20, r22, r2, r0 + 0x28, r21, r24, r19);
                    r27 = r27 + 0x1;
                    if (r27 < decomp_var_220) {
                            continue;
                    }
                    temp_1 = 0x1;
                    break;
            }
            if (temp_1 != 0x0) {
                    if ((*(int8_t *)byte_106c69d80 & 0x1) != 0x0) {
                            r0 = (*(*r20 + 0x610))(r20, &decomp_var_1d8);
                    }
                    r8 = decomp_var_1d0;
                    decomp_var_190 = decomp_var_1d8;
                    if (r8 != 0x0) {
                            asm { ldadd      x9, x8, [x8] };
                    }
                    r8 = r23[0x1];
                    if (r8 != 0x0) {
                            r1 = *r23;
                            r0 = r8[0x16];
                            r2 = &decomp_var_190;
                            (*(*r0 + 0x28))(r0, r1, r2);
                    }
                    sub_100005114(&decomp_var_190);
                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
                    sub_100005114(&decomp_var_1d8);
                    r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
                    asm { ccmp       x8, x21, #0x2, ne };
                    if (asm { ccmp       x8, x21, #0x2, ne }) {
                            r8 = 0x1;
                    }
                    r22 = r22[0xe] - decomp_var_29c;
                    r9 = *(int32_t *)dword_106c69d38;
                    asm { ccmp       w22, w9, #0x0, ne };
                    if (asm { ccmp       w22, w9, #0x0, ne }) {
                            r9 = 0x1;
                    }
                    asm { ccmp       w22, w10, #0x0, ne };
                    if (asm { ccmp       w22, w10, #0x0, ne }) {
                            r23 = 0x1;
                    }
                    r11 = *r19;
                    asm { ccmp       w11, w12, #0x0, ne };
                    if (asm { ccmp       w11, w12, #0x0, ne }) {
                            r25 = 0x1;
                    }
                    asm { ccmp       w10, w13, #0x0, ne };
                    if (asm { ccmp       w10, w13, #0x0, ne }) {
                            r24 = 0x1;
                    }
                    if (*(int8_t *)byte_106c69cf0 == 0x1) {
                            asm { ccmp       w11, w12, #0x0, ne };
                            if (asm { ccmp       w11, w12, #0x0, ne }) {
                                    r11 = 0x1;
                            }
                            asm { ccmp       w10, w13, #0x0, ne };
                            if (!asm { ccmp       w10, w13, #0x0, ne }) {
                                    r10 = 0x1;
                            }
                            else {
                                    r10 = r11;
                            }
                            if (((r8 | r9 | r10) & 0x1) != 0x0) {
                                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00();
                                    }
                            }
                    }
                    else {
                            if ((r8 | r9 | r25 | r24) == 0x1) {
                                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00();
                                    }
                            }
                    }
                    if (*(int8_t *)byte_106c68fb8 == 0x1) {
                            if (r25 == 0x0) {
                                    if (r24 == 0x0) {
                                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                                    if (**___stack_chk_guard != decomp_var_68) {
                                                            __stack_chk_fail();
                                                    }
                                            }
                                            else {
                                                    r20 = __cxa_allocate_exception();
                                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                                    *r20 = 0x1068ac4e8;
                                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                                    r20[0x3] = decomp_var_288;
                                                    __cxa_throw();
                                            }
                                    }
                                    else {
                                            r20 = __cxa_allocate_exception();
                                            sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                                            *r20 = 0x1068ac4e8;
                                            *(int128_t *)(r20 + 0x8) = decomp_var_280;
                                            r20[0x3] = decomp_var_270;
                                            __cxa_throw();
                                    }
                            }
                            else {
                                    r20 = __cxa_allocate_exception();
                                    sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                                    *r20 = 0x1068ac4e8;
                                    *(int128_t *)(r20 + 0x8) = decomp_var_268;
                                    r20[0x3] = decomp_var_258;
                                    __cxa_throw();
                            }
                    }
                    else {
                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                    if (**___stack_chk_guard != decomp_var_68) {
                                            __stack_chk_fail();
                                    }
                            }
                            else {
                                    r20 = __cxa_allocate_exception();
                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                    *r20 = 0x1068ac4e8;
                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                    r20[0x3] = decomp_var_288;
                                    __cxa_throw();
                            }
                    }
            }
    }
    else {
            if ((*(int8_t *)byte_106c69d80 & 0x1) != 0x0) {
                    r0 = (*(*r20 + 0x610))(r20, &decomp_var_1d8);
            }
            r8 = decomp_var_1d0;
            decomp_var_190 = decomp_var_1d8;
            if (r8 != 0x0) {
                    asm { ldadd      x9, x8, [x8] };
            }
            r8 = r23[0x1];
            if (r8 != 0x0) {
                    r1 = *r23;
                    r0 = r8[0x16];
                    r2 = &decomp_var_190;
                    (*(*r0 + 0x28))(r0, r1, r2);
            }
            sub_100005114(&decomp_var_190);
            if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
            sub_100005114(&decomp_var_1d8);
            r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
            asm { ccmp       x8, x21, #0x2, ne };
            if (asm { ccmp       x8, x21, #0x2, ne }) {
                    r8 = 0x1;
            }
            r22 = r22[0xe] - decomp_var_29c;
            r9 = *(int32_t *)dword_106c69d38;
            asm { ccmp       w22, w9, #0x0, ne };
            if (asm { ccmp       w22, w9, #0x0, ne }) {
                    r9 = 0x1;
            }
            asm { ccmp       w22, w10, #0x0, ne };
            if (asm { ccmp       w22, w10, #0x0, ne }) {
                    r23 = 0x1;
            }
            r11 = *r19;
            asm { ccmp       w11, w12, #0x0, ne };
            if (asm { ccmp       w11, w12, #0x0, ne }) {
                    r25 = 0x1;
            }
            asm { ccmp       w10, w13, #0x0, ne };
            if (asm { ccmp       w10, w13, #0x0, ne }) {
                    r24 = 0x1;
            }
            if (*(int8_t *)byte_106c69cf0 == 0x1) {
                    asm { ccmp       w11, w12, #0x0, ne };
                    if (asm { ccmp       w11, w12, #0x0, ne }) {
                            r11 = 0x1;
                    }
                    asm { ccmp       w10, w13, #0x0, ne };
                    if (!asm { ccmp       w10, w13, #0x0, ne }) {
                            r10 = 0x1;
                    }
                    else {
                            r10 = r11;
                    }
                    if (((r8 | r9 | r10) & 0x1) != 0x0) {
                            sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                            r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                            if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00();
                            }
                    }
            }
            else {
                    if ((r8 | r9 | r25 | r24) == 0x1) {
                            sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                            r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                            if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00();
                            }
                    }
            }
            if (*(int8_t *)byte_106c68fb8 == 0x1) {
                    if (r25 == 0x0) {
                            if (r24 == 0x0) {
                                    if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                            if (**___stack_chk_guard != decomp_var_68) {
                                                    __stack_chk_fail();
                                            }
                                    }
                                    else {
                                            r20 = __cxa_allocate_exception();
                                            sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                            *r20 = 0x1068ac4e8;
                                            *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                            r20[0x3] = decomp_var_288;
                                            __cxa_throw();
                                    }
                            }
                            else {
                                    r20 = __cxa_allocate_exception();
                                    sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                                    *r20 = 0x1068ac4e8;
                                    *(int128_t *)(r20 + 0x8) = decomp_var_280;
                                    r20[0x3] = decomp_var_270;
                                    __cxa_throw();
                            }
                    }
                    else {
                            r20 = __cxa_allocate_exception();
                            sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                            *r20 = 0x1068ac4e8;
                            *(int128_t *)(r20 + 0x8) = decomp_var_268;
                            r20[0x3] = decomp_var_258;
                            __cxa_throw();
                    }
            }
            else {
                    if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                            if (**___stack_chk_guard != decomp_var_68) {
                                    __stack_chk_fail();
                            }
                    }
                    else {
                            r20 = __cxa_allocate_exception();
                            sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                            *r20 = 0x1068ac4e8;
                            *(int128_t *)(r20 + 0x8) = decomp_var_298;
                            r20[0x3] = decomp_var_288;
                            __cxa_throw();
                    }
            }
    }
    return;

loc_104e3169c:
    r2 = r23;
    sub_104e33b28(r22, r25, r2, r21, r24, r19, r20);
    goto .l219;

loc_104e31cc4:
    if (*(int8_t *)byte_106c6a890 != 0x1) goto loc_104e32430;
    goto loc_104e31cd4;

.l291:
    if (index_0 == 0x1d) goto loc_104e3191c;
    goto .l292;

loc_104e32430:
    r1 = r22;
    r0 = sub_1015fede0(&decomp_var_220);
    sub_104e337dc(decomp_var_220, "ValueMap (read)");
    r0 = loc_1029f6ac8(0x18);
    r0[0x2] = 0x0;
    r0[0x1] = 0x0;
    *r0 = r0 + 0x8;
    r0 = sub_103d29d4c(&decomp_var_1d8, r0);
    decomp_var_e0 = 0x0;
    if (decomp_var_220 != 0x0) {
            r27 = 0x0;
            while (true) {
                    r28 = r20[0x3f];
                    r0 = (*(*r20 + 0x410))(r20);
                    bool_10081 = r28 == 0x1;
                    r8 = 0x106c6b078;
                    if (r28 != 0x1) {
                            r8 = 0x106c66b10;
                    }
                    r9 = 0x106c6b048;
                    if (!bool_10081) {
                            r9 = 0x106c66ae0;
                    }
                    if (r0 == 0x0) {
                            r8 = r9;
                    }
                    r0 = sub_1015ff140(&decomp_var_e0, r22, *(int32_t *)r8);
                    r0 = decomp_var_1d8;
                    if (*(int8_t *)byte_106c69d98 != 0x1) {
                            decomp_var_190 = &decomp_var_e0;
                            r0 = sub_100a11b9c(r0, &decomp_var_e0, 0x1059b8ec8, &decomp_var_190, &decomp_var_f0);
                            r2 = r25;
                            sub_104e339bc(r20, r22, r2, r0 + 0x38, r21, r24, r19);
                            r27 = r27 + 0x1;
                            if (r27 < decomp_var_220) {
                                    continue;
                            }
                            temp_0 = 0x1;
                            break;
                    }
                    decomp_var_190 = &decomp_var_e0;
                    r2 = 0x1059b8ec8;
                    r0 = sub_100a11b9c(r0, &decomp_var_e0, 0x1059b8ec8, &decomp_var_190, &decomp_var_f0);
                    if ((r1 & 0x1) == 0x0) {
                            sub_1029fe0a0("Received duplicate key in variant container");
                    }
                    r2 = r25;
                    sub_104e339bc(r20, r22, r2, r0 + 0x38, r21, r24, r19);
                    r27 = r27 + 0x1;
                    if (r27 < decomp_var_220) {
                            continue;
                    }
                    temp_0 = 0x1;
                    break;
            }
            if (temp_0 != 0x0) {
                    r8 = decomp_var_1d0;
                    decomp_var_190 = decomp_var_1d8;
                    if (r8 != 0x0) {
                            asm { ldadd      x9, x8, [x8] };
                    }
                    r8 = r23[0x1];
                    if (r8 != 0x0) {
                            r1 = *r23;
                            r0 = r8[0x16];
                            r2 = &decomp_var_190;
                            (*(*r0 + 0x28))(r0, r1, r2);
                    }
                    sub_100005114(&decomp_var_190);
                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
                    sub_100005114(&decomp_var_1d8);
                    r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
                    asm { ccmp       x8, x21, #0x2, ne };
                    if (asm { ccmp       x8, x21, #0x2, ne }) {
                            r8 = 0x1;
                    }
                    r22 = r22[0xe] - decomp_var_29c;
                    r9 = *(int32_t *)dword_106c69d38;
                    asm { ccmp       w22, w9, #0x0, ne };
                    if (asm { ccmp       w22, w9, #0x0, ne }) {
                            r9 = 0x1;
                    }
                    asm { ccmp       w22, w10, #0x0, ne };
                    if (asm { ccmp       w22, w10, #0x0, ne }) {
                            r23 = 0x1;
                    }
                    r11 = *r19;
                    asm { ccmp       w11, w12, #0x0, ne };
                    if (asm { ccmp       w11, w12, #0x0, ne }) {
                            r25 = 0x1;
                    }
                    asm { ccmp       w10, w13, #0x0, ne };
                    if (asm { ccmp       w10, w13, #0x0, ne }) {
                            r24 = 0x1;
                    }
                    if (*(int8_t *)byte_106c69cf0 == 0x1) {
                            asm { ccmp       w11, w12, #0x0, ne };
                            if (asm { ccmp       w11, w12, #0x0, ne }) {
                                    r11 = 0x1;
                            }
                            asm { ccmp       w10, w13, #0x0, ne };
                            if (!asm { ccmp       w10, w13, #0x0, ne }) {
                                    r10 = 0x1;
                            }
                            else {
                                    r10 = r11;
                            }
                            if (((r8 | r9 | r10) & 0x1) != 0x0) {
                                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00();
                                    }
                            }
                    }
                    else {
                            if ((r8 | r9 | r25 | r24) == 0x1) {
                                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00();
                                    }
                            }
                    }
                    if (*(int8_t *)byte_106c68fb8 == 0x1) {
                            if (r25 == 0x0) {
                                    if (r24 == 0x0) {
                                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                                    if (**___stack_chk_guard != decomp_var_68) {
                                                            __stack_chk_fail();
                                                    }
                                            }
                                            else {
                                                    r20 = __cxa_allocate_exception();
                                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                                    *r20 = 0x1068ac4e8;
                                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                                    r20[0x3] = decomp_var_288;
                                                    __cxa_throw();
                                            }
                                    }
                                    else {
                                            r20 = __cxa_allocate_exception();
                                            sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                                            *r20 = 0x1068ac4e8;
                                            *(int128_t *)(r20 + 0x8) = decomp_var_280;
                                            r20[0x3] = decomp_var_270;
                                            __cxa_throw();
                                    }
                            }
                            else {
                                    r20 = __cxa_allocate_exception();
                                    sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                                    *r20 = 0x1068ac4e8;
                                    *(int128_t *)(r20 + 0x8) = decomp_var_268;
                                    r20[0x3] = decomp_var_258;
                                    __cxa_throw();
                            }
                    }
                    else {
                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                    if (**___stack_chk_guard != decomp_var_68) {
                                            __stack_chk_fail();
                                    }
                            }
                            else {
                                    r20 = __cxa_allocate_exception();
                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                    *r20 = 0x1068ac4e8;
                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                    r20[0x3] = decomp_var_288;
                                    __cxa_throw();
                            }
                    }
            }
    }
    else {
            r8 = decomp_var_1d0;
            decomp_var_190 = decomp_var_1d8;
            if (r8 != 0x0) {
                    asm { ldadd      x9, x8, [x8] };
            }
            r8 = r23[0x1];
            if (r8 != 0x0) {
                    r1 = *r23;
                    r0 = r8[0x16];
                    r2 = &decomp_var_190;
                    (*(*r0 + 0x28))(r0, r1, r2);
            }
            sub_100005114(&decomp_var_190);
            if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
            sub_100005114(&decomp_var_1d8);
            r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
            asm { ccmp       x8, x21, #0x2, ne };
            if (asm { ccmp       x8, x21, #0x2, ne }) {
                    r8 = 0x1;
            }
            r22 = r22[0xe] - decomp_var_29c;
            r9 = *(int32_t *)dword_106c69d38;
            asm { ccmp       w22, w9, #0x0, ne };
            if (asm { ccmp       w22, w9, #0x0, ne }) {
                    r9 = 0x1;
            }
            asm { ccmp       w22, w10, #0x0, ne };
            if (asm { ccmp       w22, w10, #0x0, ne }) {
                    r23 = 0x1;
            }
            r11 = *r19;
            asm { ccmp       w11, w12, #0x0, ne };
            if (asm { ccmp       w11, w12, #0x0, ne }) {
                    r25 = 0x1;
            }
            asm { ccmp       w10, w13, #0x0, ne };
            if (asm { ccmp       w10, w13, #0x0, ne }) {
                    r24 = 0x1;
            }
            if (*(int8_t *)byte_106c69cf0 == 0x1) {
                    asm { ccmp       w11, w12, #0x0, ne };
                    if (asm { ccmp       w11, w12, #0x0, ne }) {
                            r11 = 0x1;
                    }
                    asm { ccmp       w10, w13, #0x0, ne };
                    if (!asm { ccmp       w10, w13, #0x0, ne }) {
                            r10 = 0x1;
                    }
                    else {
                            r10 = r11;
                    }
                    if (((r8 | r9 | r10) & 0x1) != 0x0) {
                            sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                            r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                            if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00();
                            }
                    }
            }
            else {
                    if ((r8 | r9 | r25 | r24) == 0x1) {
                            sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                            r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                            if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00();
                            }
                    }
            }
            if (*(int8_t *)byte_106c68fb8 == 0x1) {
                    if (r25 == 0x0) {
                            if (r24 == 0x0) {
                                    if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                            if (**___stack_chk_guard != decomp_var_68) {
                                                    __stack_chk_fail();
                                            }
                                    }
                                    else {
                                            r20 = __cxa_allocate_exception();
                                            sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                            *r20 = 0x1068ac4e8;
                                            *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                            r20[0x3] = decomp_var_288;
                                            __cxa_throw();
                                    }
                            }
                            else {
                                    r20 = __cxa_allocate_exception();
                                    sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                                    *r20 = 0x1068ac4e8;
                                    *(int128_t *)(r20 + 0x8) = decomp_var_280;
                                    r20[0x3] = decomp_var_270;
                                    __cxa_throw();
                            }
                    }
                    else {
                            r20 = __cxa_allocate_exception();
                            sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                            *r20 = 0x1068ac4e8;
                            *(int128_t *)(r20 + 0x8) = decomp_var_268;
                            r20[0x3] = decomp_var_258;
                            __cxa_throw();
                    }
            }
            else {
                    if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                            if (**___stack_chk_guard != decomp_var_68) {
                                    __stack_chk_fail();
                            }
                    }
                    else {
                            r20 = __cxa_allocate_exception();
                            sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                            *r20 = 0x1068ac4e8;
                            *(int128_t *)(r20 + 0x8) = decomp_var_298;
                            r20[0x3] = decomp_var_288;
                            __cxa_throw();
                    }
            }
    }
    return;

loc_104e31cd4:
    r2 = r23;
    sub_104e33fec(r22, r25, r2, r21, r24, r19, r20);
    goto .l219;

loc_104e3191c:
    r2 = r25;
    sub_104e344ac(r20, r22);
    r0 = r23[0x1];
    if (r0 != 0x0) {
            r2 = &decomp_var_e0;
            (*(*r0 + 0xd0))();
    }
    goto loc_104e32754;

.l292:
    if (index_0 == 0x1e) goto loc_104e31a00;
    goto .l293;

loc_104e31a00:
    sub_1015fede0(&decomp_var_1d8);
    decomp_var_e0 = decomp_var_1d8;
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto .l219;

.l293:
    if (index_0 == 0x1f) goto loc_104e317a8;
    goto .l294;

loc_104e317a8:
    sub_102798894(&decomp_var_e0);
    r24 = &decomp_var_e0;
    r0 = sub_104faad9c(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto loc_104e317e4;

.l294:
    if (index_0 == 0x20) goto loc_104e317fc;
    goto .l295;

loc_104e317e4:
    if (decomp_var_e0 != &decomp_var_e0 + 0x10) {
            loc_1029f6b00();
    }
    goto .l219;

loc_104e317fc:
    decomp_var_e0 = 0x0;
    r0 = sub_104faacc8(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto .l219;

.l295:
    if (index_0 == 0x21) goto loc_104e31a40;
    goto .l296;

loc_104e31a40:
    decomp_var_e0 = 0x0;
    r0 = sub_104faabf8(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto .l219;

.l296:
    if (index_0 == 0x22) goto loc_104e312c4;
    goto .l297;

loc_104e312c4:
    sub_10277c9cc();
    r24 = &decomp_var_e0;
    r0 = sub_104faa974(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto loc_104e317e4;

.l297:
    if (index_0 == 0x23) goto loc_104e31158;
    goto .l298;

loc_104e31158:
    decomp_var_e0 = 0x0;
    r0 = sub_104faa8a0(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto .l219;

.l298:
    if (index_0 == 0x24) goto loc_104e31124;
    goto .l299;

loc_104e31124:
    decomp_var_e0 = 0x0;
    r0 = sub_104fae7bc(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto .l219;

.l299:
    if (index_0 == 0x25) goto loc_104e31190;
    goto .l300;

loc_104e31190:
    decomp_var_e0 = 0x0;
    *(r27 + 0x4) = 0x0;
    *(r27 + 0x14) = 0x0;
    *(r27 + 0xc) = 0x0;
    r0 = sub_104fabdbc(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto .l219;

.l300:
    if (index_0 == 0x26) goto loc_104e31258;
    goto .l301;

loc_104e31258:
    sub_10279b4ec(&decomp_var_e0);
    r0 = sub_104fac094(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto .l219;

.l301:
    if (index_0 == 0x27) goto loc_104e30f9c;
    goto .l302;

loc_104e30f9c:
    decomp_var_e0 = 0x0;
    r0 = sub_104fac16c(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto .l219;

.l302:
    if (index_0 == 0x28) goto loc_104e30e84;
    goto .l303;

loc_104e30e84:
    r0 = sub_1015ff000(&decomp_var_e0, r22);
    if (r26[0x1] == 0x2) {
            decomp_var_1d8 = decomp_var_e0;
            r8 = r23[0x1];
            if (r8 != 0x0) {
                    r1 = *r23;
                    r0 = r8[0x16];
                    r2 = &decomp_var_1d8;
                    (*(*r0 + 0x28))(r0, r1, r2);
            }
    }
    else {
            r8 = r23[0x1];
            if (r8 != 0x0) {
                    r1 = *r23;
                    r0 = r8[0x16];
                    r2 = &decomp_var_e0;
                    (*(*r0 + 0x28))(r0, r1, r2);
            }
    }
    goto .l219;

.l303:
    if (index_0 == 0x29) goto loc_104e31e6c;
    goto .l304;

loc_104e31e6c:
    r25 = r20 + 0x2fb0;
    r1 = r25;
    if ((sign_extend_64(r20[0x2fc7]) & 0xffffffff80000000) != 0x0) {
            r1 = *r25;
    }
    r2 = 0x10;
    sub_1015fe4d4(r22, r1, 0x10);
    sub_104e34800(r20, r25);
    if (decomp_var_1d0 == 0x1) {
            if (r26[0x1] == 0x4) {
                    r2 = 0x10;
                    r0 = sub_102a01af4(&decomp_var_1d8);
                    if ((sign_extend_64(r0[0x17]) & 0xffffffff80000000) == 0x0) {
                            q0 = *(int128_t *)r0;
                            decomp_var_110 = r0[0x2];
                            r28[0xe] = q0;
                    }
                    else {
                            r1 = *r0;
                            r2 = r0[0x1];
                            sub_100004018(&decomp_var_120, r1, r2);
                    }
                    *(int128_t *)r27 = r28[0xe];
                    decomp_var_120 = 0x0;
                    r8 = r23[0x1];
                    if (r8 != 0x0) {
                            r1 = *r23;
                            r0 = r8[0x16];
                            r2 = &decomp_var_e0;
                            (*(*r0 + 0x28))(r0, r1, r2);
                    }
                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
                    if ((sign_extend_64(decomp_var_109) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    r8 = r23[0x1];
                    if (r8 != 0x0) {
                            r1 = *r23;
                            r0 = r8[0x16];
                            r2 = &decomp_var_1d8;
                            (*(*r0 + 0x28))(r0, r1, r2);
                    }
            }
    }
    else {
            r2 = 0x10;
            r0 = sub_104e85d4c(r24, r25);
            decomp_var_e0 = 0x0;
            q0 = *(int128_t *)r23;
            asm { ext        v0.16b, v0.16b, v0.16b, #0x8 };
            *(int128_t *)(r27 + 0x8) = q0;
            r0 = sub_104e33630(r0 + 0x18, &decomp_var_e0, r2);
    }
    if (decomp_var_1d0 == 0x1) {
            sub_100172918(&decomp_var_1d8);
    }
    goto .l219;

.l304:
    if (index_0 == 0x2a) goto loc_104e31f70;
    goto .l305;

loc_104e31f70:
    sub_102a01648(&decomp_var_1d8, r1, r2);
    r25 = 0x2fb0;
    r2 = r20 + 0x2fb0;
    r1 = r22;
    r0 = sub_104e335a0(r20, r1, r2, &decomp_var_1d8);
    if (r0 != 0x0) {
            r0 = sub_1036bdec0(&decomp_var_1d8, r1, r2);
            r8 = r23[0x1];
            if (r8 != 0x0) {
                    r1 = *r23;
                    r0 = r8[0x16];
                    r24 = &decomp_var_e0;
                    r2 = &decomp_var_e0;
                    (*(*r0 + 0x28))(r0, r1, r2);
            }
            sub_100172918(&decomp_var_e0 + 0x8);
            r0 = sub_100172918(&decomp_var_e0);
    }
    else {
            r25 = 0x2fb0;
            r0 = sub_104e85d4c(r24, r20 + 0x2fb0);
            decomp_var_e0 = 0x0;
            q0 = *(int128_t *)r23;
            asm { ext        v0.16b, v0.16b, v0.16b, #0x8 };
            *(int128_t *)(r27 + 0x8) = q0;
            r0 = sub_104e33630(r0 + 0x18, &decomp_var_e0, r2);
    }
    if (*(int32_t *)(*r23 + 0x30) == -0x1) {
            sub_1029fe0a0("Invalid Bytecode.");
    }
    if (r23[0x8] == 0xffff) {
            sub_1029fe0a0("Invalid Bytecode.");
    }
    goto loc_104e32b28;

.l305:
    if (index_0 == 0x2b) goto loc_104e30f54;
    goto .l306;

loc_104e30f54:
    sub_100087fa4();
    sub_100087fa4();
    r0 = sub_104faa374(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto .l219;

.l306:
    if (index_0 == 0x2c) goto loc_104e316c0;
    goto .l307;

loc_104e316c0:
    r0 = sub_1015ff914();
    r24 = r0;
    if ((r0 & 0x80) != 0x0) goto loc_104e327f4;
    goto loc_104e316d0;

.l307:
    if (index_0 == 0x2d) goto loc_104e31ee0;
    goto .l308;

loc_104e327f4:
    r8 = r24 & 0x7f;
    decomp_var_e0 = 0x0;
    if (r8 == 0x7f) {
            sub_1015fede0(&decomp_var_e0);
            r8 = decomp_var_e0 + 0x7f;
    }
    decomp_var_e0 = r8;
    r0 = r20[0x655];
    r0 = sub_104e34864(r0, r8 & 0xffff);
    r8 = r0[0x17];
    r10 = r0[0x2];
    r11 = *(int32_t *)r19;
    if (sign_extend_64(r8) < 0x0) {
            r8 = r10;
    }
    *(int32_t *)r19 = r11 + r8;
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r2 = r0;
            r1 = *r23;
            r0 = r8[0x16];
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
    asm { ccmp       x8, x21, #0x2, ne };
    if (asm { ccmp       x8, x21, #0x2, ne }) {
            r8 = 0x1;
    }
    r22 = r22[0xe] - decomp_var_29c;
    r9 = *(int32_t *)dword_106c69d38;
    asm { ccmp       w22, w9, #0x0, ne };
    if (asm { ccmp       w22, w9, #0x0, ne }) {
            r9 = 0x1;
    }
    asm { ccmp       w22, w10, #0x0, ne };
    if (asm { ccmp       w22, w10, #0x0, ne }) {
            r23 = 0x1;
    }
    r11 = *r19;
    asm { ccmp       w11, w12, #0x0, ne };
    if (asm { ccmp       w11, w12, #0x0, ne }) {
            r25 = 0x1;
    }
    asm { ccmp       w10, w13, #0x0, ne };
    if (asm { ccmp       w10, w13, #0x0, ne }) {
            r24 = 0x1;
    }
    if (*(int8_t *)byte_106c69cf0 == 0x1) {
            asm { ccmp       w11, w12, #0x0, ne };
            if (asm { ccmp       w11, w12, #0x0, ne }) {
                    r11 = 0x1;
            }
            asm { ccmp       w10, w13, #0x0, ne };
            if (!asm { ccmp       w10, w13, #0x0, ne }) {
                    r10 = 0x1;
            }
            else {
                    r10 = r11;
            }
            if (((r8 | r9 | r10) & 0x1) != 0x0) {
                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
    }
    else {
            if ((r8 | r9 | r25 | r24) == 0x1) {
                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
    }
    if (*(int8_t *)byte_106c68fb8 == 0x1) {
            if (r25 == 0x0) {
                    if (r24 == 0x0) {
                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                    if (**___stack_chk_guard != decomp_var_68) {
                                            __stack_chk_fail();
                                    }
                            }
                            else {
                                    r20 = __cxa_allocate_exception();
                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                    *r20 = 0x1068ac4e8;
                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                    r20[0x3] = decomp_var_288;
                                    __cxa_throw();
                            }
                    }
                    else {
                            r20 = __cxa_allocate_exception();
                            sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                            *r20 = 0x1068ac4e8;
                            *(int128_t *)(r20 + 0x8) = decomp_var_280;
                            r20[0x3] = decomp_var_270;
                            __cxa_throw();
                    }
            }
            else {
                    r20 = __cxa_allocate_exception();
                    sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                    *r20 = 0x1068ac4e8;
                    *(int128_t *)(r20 + 0x8) = decomp_var_268;
                    r20[0x3] = decomp_var_258;
                    __cxa_throw();
            }
    }
    else {
            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                    if (**___stack_chk_guard != decomp_var_68) {
                            __stack_chk_fail();
                    }
            }
            else {
                    r20 = __cxa_allocate_exception();
                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                    *r20 = 0x1068ac4e8;
                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                    r20[0x3] = decomp_var_288;
                    __cxa_throw();
            }
    }
    return;

loc_104e316d0:
    decomp_var_e0 = 0x0;
    decomp_var_d8 = 0x0;
    if (r24 != 0x7f) goto loc_104e32944;
    goto loc_104e316e0;

loc_104e31ee0:
    loc_1015be9f4(&decomp_var_e0);
    r0 = sub_104fadc84(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto loc_104e31f14;

.l308:
    if (index_0 == 0x2e) goto loc_104e30f1c;
    goto .l309;

loc_104e32944:
    if (sub_1015fe77c(r22) < r24) goto loc_104e3307c;
    goto loc_104e32954;

loc_104e316e0:
    r24 = r20[0x3f];
    r0 = (*(*r20 + 0x410))(r20);
    r8 = 0x106c6b078;
    bool_9335 = r24 == 0x1;
    if (r24 != 0x1) {
            r8 = 0x106c66b10;
    }
    r9 = 0x106c6b048;
    if (!bool_9335) {
            r9 = 0x106c66ae0;
    }
    if (r0 == 0x0) {
            r8 = r9;
    }
    r2 = *(int32_t *)r8;
    r0 = sub_1015ff140(&decomp_var_e0, r22, r2);
    r9 = decomp_var_c9;
    r8 = sign_extend_64(r9);
    r10 = decomp_var_d8;
    r11 = *(int32_t *)r19;
    if (r8 < 0x0) {
            r9 = r10;
    }
    *(int32_t *)r19 = r11 + r9;
    r9 = r23[0x1];
    if (r9 != 0x0) {
            r1 = *r23;
            r0 = r9[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
            r8 = decomp_var_c9;
    }
    if ((r8 & 0x80) != 0x0) {
            loc_1029f6b00();
    }
    r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
    asm { ccmp       x8, x21, #0x2, ne };
    if (asm { ccmp       x8, x21, #0x2, ne }) {
            r8 = 0x1;
    }
    r22 = r22[0xe] - decomp_var_29c;
    r9 = *(int32_t *)dword_106c69d38;
    asm { ccmp       w22, w9, #0x0, ne };
    if (asm { ccmp       w22, w9, #0x0, ne }) {
            r9 = 0x1;
    }
    asm { ccmp       w22, w10, #0x0, ne };
    if (asm { ccmp       w22, w10, #0x0, ne }) {
            r23 = 0x1;
    }
    r11 = *r19;
    asm { ccmp       w11, w12, #0x0, ne };
    if (asm { ccmp       w11, w12, #0x0, ne }) {
            r25 = 0x1;
    }
    asm { ccmp       w10, w13, #0x0, ne };
    if (asm { ccmp       w10, w13, #0x0, ne }) {
            r24 = 0x1;
    }
    if (*(int8_t *)byte_106c69cf0 == 0x1) {
            asm { ccmp       w11, w12, #0x0, ne };
            if (asm { ccmp       w11, w12, #0x0, ne }) {
                    r11 = 0x1;
            }
            asm { ccmp       w10, w13, #0x0, ne };
            if (!asm { ccmp       w10, w13, #0x0, ne }) {
                    r10 = 0x1;
            }
            else {
                    r10 = r11;
            }
            if (((r8 | r9 | r10) & 0x1) != 0x0) {
                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
    }
    else {
            if ((r8 | r9 | r25 | r24) == 0x1) {
                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
    }
    if (*(int8_t *)byte_106c68fb8 == 0x1) {
            if (r25 == 0x0) {
                    if (r24 == 0x0) {
                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                    if (**___stack_chk_guard != decomp_var_68) {
                                            __stack_chk_fail();
                                    }
                            }
                            else {
                                    r20 = __cxa_allocate_exception();
                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                    *r20 = 0x1068ac4e8;
                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                    r20[0x3] = decomp_var_288;
                                    __cxa_throw();
                            }
                    }
                    else {
                            r20 = __cxa_allocate_exception();
                            sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                            *r20 = 0x1068ac4e8;
                            *(int128_t *)(r20 + 0x8) = decomp_var_280;
                            r20[0x3] = decomp_var_270;
                            __cxa_throw();
                    }
            }
            else {
                    r20 = __cxa_allocate_exception();
                    sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                    *r20 = 0x1068ac4e8;
                    *(int128_t *)(r20 + 0x8) = decomp_var_268;
                    r20[0x3] = decomp_var_258;
                    __cxa_throw();
            }
    }
    else {
            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                    if (**___stack_chk_guard != decomp_var_68) {
                            __stack_chk_fail();
                    }
            }
            else {
                    r20 = __cxa_allocate_exception();
                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                    *r20 = 0x1068ac4e8;
                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                    r20[0x3] = decomp_var_288;
                    __cxa_throw();
            }
    }
    return;

loc_104e31f14:
    r0 = sub_10279ae64(&decomp_var_e0);
    goto .l219;

loc_104e30f1c:
    loc_1015be9f4(&decomp_var_e0);
    r0 = sub_104fada9c(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto loc_104e31f14;

.l309:
    if (index_0 == 0x2f) goto loc_104e31414;
    goto .l310;

loc_104e3307c:
    r20 = __cxa_allocate_exception();
    sub_1015fe77c(r22);
    sub_1029fe130("BitStream string read: String too long (%u requested %u available)");
    *r20 = 0x1068ac4e8;
    *(int128_t *)(r20 + 0x8) = decomp_var_138;
    r20[0x3] = decomp_var_128;
    __cxa_throw();
    return;

loc_104e32954:
    r25 = &decomp_var_e0;
    r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::resize(&decomp_var_e0, r24);
    r9 = decomp_var_e0;
    if (sign_extend_64(decomp_var_c9) >= 0x0) {
            r1 = r25;
    }
    else {
            r1 = r9;
    }
    r2 = r24;
    sub_1015fe4d4(r22, r1, r2);
    r9 = decomp_var_c9;
    r8 = sign_extend_64(r9);
    r10 = decomp_var_d8;
    r11 = *(int32_t *)r19;
    if (r8 < 0x0) {
            r9 = r10;
    }
    *(int32_t *)r19 = r11 + r9;
    r9 = r23[0x1];
    if (r9 != 0x0) {
            r1 = *r23;
            r0 = r9[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
            r8 = decomp_var_c9;
    }
    goto loc_104e329c8;

loc_104e31414:
    r25 = sub_1015ff79c(r22);
    r26 = sub_1015ff608();
    r24 = sub_1015ff608();
    sub_1027a1e9c(&decomp_var_1d8, r25, r26);
    r2 = decomp_var_1d0;
    r0 = sub_1027a2510(&decomp_var_e0, decomp_var_1d8, r2, r24);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto .l219;

.l310:
    if (index_0 == 0x30) goto loc_104e31cf8;
    goto .l311;

loc_104e31cf8:
    r0 = sub_1006c2108(&decomp_var_e0);
    r24 = r20[0x3f];
    r0 = (*(*r20 + 0x410))(r20);
    r8 = 0x106c6b078;
    bool_9217 = r24 == 0x1;
    if (r24 != 0x1) {
            r8 = 0x106c66b10;
    }
    r9 = 0x106c6b048;
    if (!bool_9217) {
            r9 = 0x106c66ae0;
    }
    if (r0 == 0x0) {
            r8 = r9;
    }
    r2 = *(int32_t *)r8;
    r0 = sub_104fae284(r22, &decomp_var_e0, r2);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    r0 = sub_100005114(&decomp_var_e0);
    goto .l219;

.l311:
    if (index_0 == 0x31) goto loc_104e31fdc;
    goto .l312;

loc_104e31fdc:
    r24 = r20[0x3f];
    r0 = (*(*r20 + 0x410))(r20);
    r8 = 0x106c6b078;
    bool_9216 = r24 == 0x1;
    if (r24 != 0x1) {
            r8 = 0x106c66b10;
    }
    r9 = 0x106c6b048;
    if (!bool_9216) {
            r9 = 0x106c66ae0;
    }
    if (r0 == 0x0) {
            r8 = r9;
    }
    sub_104fade44(r22, *(int32_t *)r8);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    r1 = decomp_var_e0;
    decomp_var_e0 = 0x0;
    if (r1 != 0x0) {
            r0 = loc_100478490(&decomp_var_e0);
    }
    goto .l219;

.l312:
    if (index_0 == 0x32) goto loc_104e30d7c;
    goto .l313;

loc_104e30d7c:
    decomp_var_e0 = sub_1015ff79c(r22);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto .l219;

.l313:
    if (index_0 == 0x33) goto loc_104e31aa8;
    goto .l314;

loc_104e31aa8:
    sub_104e348d4(r22);
    r9 = *(int32_t *)r19;
    decomp_var_150 = decomp_var_e0;
    *(int128_t *)(r28 + 0xb8) = *(int128_t *)(r27 + 0x8);
    *(int32_t *)r19 = r9 + (d0 - decomp_var_e0);
    decomp_var_e0 = 0x0;
    r0 = sub_10138dd48(&decomp_var_150);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_1d8;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    sub_100005114(&decomp_var_1d8);
    r0 = decomp_var_150;
    if (r0 != 0x0) {
            loc_1029f6b00();
    }
    r0 = decomp_var_e0;
    if (r0 != 0x0) {
            loc_1029f6b00();
    }
    goto .l219;

.l314:
    if (index_0 == 0x34) goto loc_104e31980;
    goto .l315;

loc_104e31980:
    if ((r20[0x3f1e] & 0x20) == 0x0) {
            decomp_var_e0 = 0x0;
            r2 = 0x0;
            r0 = sub_104fab4f8(r22, &decomp_var_e0, 0x0);
            r8 = r23[0x1];
            if (r8 != 0x0) {
                    r1 = *r23;
                    r0 = r8[0x16];
                    r2 = &decomp_var_e0;
                    (*(*r0 + 0x28))(r0, r1, r2);
            }
    }
    else {
            sub_1044d9914(r22);
            r0 = sub_10488d24c(&decomp_var_e0);
            decomp_var_190 = *(r28 + 0x4c);
            *(r28 + 0xa4) = *(r28 + 0x64);
            r8 = r23[0x1];
            if (r8 != 0x0) {
                    r1 = *r23;
                    r0 = r8[0x16];
                    r2 = &decomp_var_190;
                    (*(*r0 + 0x28))(r0, r1, r2);
            }
    }
    goto .l219;

.l315:
    if (index_0 == 0x35) goto loc_104e31878;
    goto .l316;

loc_104e31878:
    r0 = sub_10010497c(r20[0x759] + 0x4f0);
    if ((*(int8_t *)byte_106bdbca8 & 0x1) == 0x0) {
            r8 = *r0;
            if ((r8 & 0x8) == 0x0) {
                    if (*(int8_t *)byte_106bdbd68 == 0x1) {
                            if ((*(int8_t *)byte_106bdbcc0 & 0x1) == 0x0 && (r8 & 0x1) == 0x0) {
                                    decomp_var_e0 = 0x0;
                                    decomp_var_c0 = 0x0;
                                    r0 = sub_104fad564(r22, &decomp_var_e0);
                                    r8 = r23[0x1];
                                    if (r8 != 0x0) {
                                            r1 = *r23;
                                            r0 = r8[0x16];
                                            r2 = &decomp_var_e0;
                                            (*(*r0 + 0x28))(r0, r1, r2);
                                    }
                                    r0 = decomp_var_c0;
                                    if (r0 != 0x0) {
                                            loc_1029f6b00();
                                    }
                            }
                    }
                    else {
                            decomp_var_e0 = 0x0;
                            decomp_var_c0 = 0x0;
                            r0 = sub_104fad564(r22, &decomp_var_e0);
                            r8 = r23[0x1];
                            if (r8 != 0x0) {
                                    r1 = *r23;
                                    r0 = r8[0x16];
                                    r2 = &decomp_var_e0;
                                    (*(*r0 + 0x28))(r0, r1, r2);
                            }
                            r0 = decomp_var_c0;
                            if (r0 != 0x0) {
                                    loc_1029f6b00();
                            }
                    }
            }
    }
    goto .l219;

.l316:
    if (index_0 == 0x36) goto loc_104e31f20;
    goto .l317;

loc_104e31f20:
    decomp_var_e0 = 0x0;
    sub_101600350(&decomp_var_1d8, r20[0x15], *(r20 + 0xac), 0x0);
    r2 = &decomp_var_e0;
    sub_104e156f0(&decomp_var_1d8, r22, r2);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2, 0x0);
    }
    goto .l219;

.l317:
    if (index_0 == 0x37) goto loc_104e311d0;
    goto .l318;

loc_104e311d0:
    decomp_var_1d8 = 0x0;
    decomp_var_1c8 = 0x0;
    if (*(int8_t *)byte_106bdbe40 == 0x1) {
            r8 = r20[0x655];
            if (r8[0x1d9] == 0x1) {
                    r0 = sub_101600350(&decomp_var_e0, r20[0x15], *(r20 + 0xac), r8 + 0x178);
                    r0 = sub_104e156f0(r0, r22, &decomp_var_1d8);
            }
            else {
                    r0 = sub_101600350(&decomp_var_e0, r20[0x15], *(r20 + 0xac), 0x0);
                    r0 = sub_104e156f0(r0, r22, &decomp_var_1d8);
            }
    }
    else {
            r0 = sub_101600350(&decomp_var_e0, r20[0x15], *(r20 + 0xac), 0x0);
            r0 = sub_104e156f0(r0, r22, &decomp_var_1d8);
    }
    r25 = byte_106bdbe40;
    r24 = sub_103f4a5fc();
    if (*(int8_t *)byte_106bdbe40 != 0x1) goto loc_104e320e0;
    goto loc_104e320d4;

.l318:
    if (index_0 == 0x38) goto loc_104e3137c;
    goto .l319;

loc_104e320e0:
    if ((*(int8_t *)byte_106bdbe10 & 0x1) == 0x0) goto loc_104e3286c;
    goto loc_104e320f0;

loc_104e320d4:
    if ((*(int8_t *)(r20[0x655] + 0x1d9) & 0x1) == 0x0) {
            if ((*(int8_t *)byte_106bdbe10 & 0x1) != 0x0) {
                    r0 = r20[0x655];
                    r0 = sub_10010497c(r0);
                    r1 = decomp_var_1c8;
                    if ((*(int8_t *)r0 & 0x10) != 0x0) {
                            if (r1 != 0xffff) {
                                    r8 = r20[0x655];
                                    if (r1 >= (r8[0x30] - r8[0x2f]) / 0x2) {
                                            sub_1029fe0a0("Invalid LR Network Type %u");
                                    }
                                    r1 = sub_1044d5fb8(r8 + 0x178, r1);
                                    decomp_var_1c8 = r1;
                                    if (*(int8_t *)byte_106c6a860 == 0x1) {
                                            if (r1 >= 0xe) {
                                                    if (r20[0x3f] != 0x0) {
                                                            sub_1029fe0a0("Invalid LR Handle");
                                                    }
                                                    decomp_var_1d8 = 0x0;
                                                    decomp_var_1c8 = 0x0;
                                                    r28[0x7] = decomp_var_1d8;
                                                    r2 = &decomp_var_190;
                                                    r0 = sub_1015fc9e4(&decomp_var_e0, r24, r2);
                                                    if ((0x100020000000 & !r20[0x7e3]) == 0x0 && r20[0x3f] == 0x0 && (r20[0x4a21] & 0x1) == 0x0) {
                                                            r24 = decomp_var_1c8;
                                                            if (r24 == loc_1015f5ff8() && sub_1015f632c(decomp_var_1d8) != 0x0) {
                                                                    r8 = r20[0x7d1];
                                                                    if (r8 != 0x0) {
                                                                            sub_1011f40ac(r8 + 0x50, &decomp_var_1d8);
                                                                    }
                                                            }
                                                    }
                                                    r8 = r23[0x1];
                                                    if (r8 != 0x0) {
                                                            r1 = *r23;
                                                            r0 = r8[0x16];
                                                            r2 = &decomp_var_e0;
                                                            (*(*r0 + 0x28))(r0, r1, r2);
                                                    }
                                                    loc_1015fcc3c();
                                                    r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
                                                    asm { ccmp       x8, x21, #0x2, ne };
                                                    if (asm { ccmp       x8, x21, #0x2, ne }) {
                                                            r8 = 0x1;
                                                    }
                                                    r22 = r22[0xe] - decomp_var_29c;
                                                    r9 = *(int32_t *)dword_106c69d38;
                                                    asm { ccmp       w22, w9, #0x0, ne };
                                                    if (asm { ccmp       w22, w9, #0x0, ne }) {
                                                            r9 = 0x1;
                                                    }
                                                    asm { ccmp       w22, w10, #0x0, ne };
                                                    if (asm { ccmp       w22, w10, #0x0, ne }) {
                                                            r23 = 0x1;
                                                    }
                                                    r11 = *r19;
                                                    asm { ccmp       w11, w12, #0x0, ne };
                                                    asm { ccmp       w10, w13, #0x0, ne };
                                                    if (asm { ccmp       w10, w13, #0x0, ne }) {
                                                            r24 = 0x1;
                                                    }
                                                    if (*(int8_t *)byte_106c69cf0 == 0x1) {
                                                            asm { ccmp       w11, w12, #0x0, ne };
                                                            if (asm { ccmp       w11, w12, #0x0, ne }) {
                                                                    r11 = 0x1;
                                                            }
                                                            asm { ccmp       w10, w13, #0x0, ne };
                                                            if (!asm { ccmp       w10, w13, #0x0, ne }) {
                                                                    r10 = 0x1;
                                                            }
                                                            else {
                                                                    r10 = r11;
                                                            }
                                                            if (((r8 | r9 | r10) & 0x1) != 0x0) {
                                                                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                                                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                                                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00();
                                                                    }
                                                            }
                                                    }
                                                    else {
                                                            if ((r8 | r9 | 0x1 | r24) == 0x1) {
                                                                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                                                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                                                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00();
                                                                    }
                                                            }
                                                    }
                                                    if (*(int8_t *)byte_106c68fb8 == 0x1) {
                                                            if (0x1 == 0x0) {
                                                                    if (r24 == 0x0) {
                                                                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                                                                    if (**___stack_chk_guard != decomp_var_68) {
                                                                                            __stack_chk_fail();
                                                                                    }
                                                                            }
                                                                            else {
                                                                                    r20 = __cxa_allocate_exception();
                                                                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                                                                    *r20 = 0x1068ac4e8;
                                                                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                                                                    r20[0x3] = decomp_var_288;
                                                                                    __cxa_throw();
                                                                            }
                                                                    }
                                                                    else {
                                                                            r20 = __cxa_allocate_exception();
                                                                            sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                                                                            *r20 = 0x1068ac4e8;
                                                                            *(int128_t *)(r20 + 0x8) = decomp_var_280;
                                                                            r20[0x3] = decomp_var_270;
                                                                            __cxa_throw();
                                                                    }
                                                            }
                                                            else {
                                                                    r20 = __cxa_allocate_exception();
                                                                    sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                                                                    *r20 = 0x1068ac4e8;
                                                                    *(int128_t *)(r20 + 0x8) = decomp_var_268;
                                                                    r20[0x3] = decomp_var_258;
                                                                    __cxa_throw();
                                                            }
                                                    }
                                                    else {
                                                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                                                    if (**___stack_chk_guard != decomp_var_68) {
                                                                            __stack_chk_fail();
                                                                    }
                                                            }
                                                            else {
                                                                    r20 = __cxa_allocate_exception();
                                                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                                                    *r20 = 0x1068ac4e8;
                                                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                                                    r20[0x3] = decomp_var_288;
                                                                    __cxa_throw();
                                                            }
                                                    }
                                            }
                                            else {
                                                    r28[0x7] = decomp_var_1d8;
                                                    r2 = &decomp_var_190;
                                                    r0 = sub_1015fc9e4(&decomp_var_e0, r24, r2);
                                                    if ((0x100020000000 & !r20[0x7e3]) == 0x0 && r20[0x3f] == 0x0 && (r20[0x4a21] & 0x1) == 0x0) {
                                                            r24 = decomp_var_1c8;
                                                            if (r24 == loc_1015f5ff8() && sub_1015f632c(decomp_var_1d8) != 0x0) {
                                                                    r8 = r20[0x7d1];
                                                                    if (r8 != 0x0) {
                                                                            sub_1011f40ac(r8 + 0x50, &decomp_var_1d8);
                                                                    }
                                                            }
                                                    }
                                                    r8 = r23[0x1];
                                                    if (r8 != 0x0) {
                                                            r1 = *r23;
                                                            r0 = r8[0x16];
                                                            r2 = &decomp_var_e0;
                                                            (*(*r0 + 0x28))(r0, r1, r2);
                                                    }
                                                    loc_1015fcc3c();
                                                    r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
                                                    asm { ccmp       x8, x21, #0x2, ne };
                                                    if (asm { ccmp       x8, x21, #0x2, ne }) {
                                                            r8 = 0x1;
                                                    }
                                                    r22 = r22[0xe] - decomp_var_29c;
                                                    r9 = *(int32_t *)dword_106c69d38;
                                                    asm { ccmp       w22, w9, #0x0, ne };
                                                    if (asm { ccmp       w22, w9, #0x0, ne }) {
                                                            r9 = 0x1;
                                                    }
                                                    asm { ccmp       w22, w10, #0x0, ne };
                                                    if (asm { ccmp       w22, w10, #0x0, ne }) {
                                                            r23 = 0x1;
                                                    }
                                                    r11 = *r19;
                                                    asm { ccmp       w11, w12, #0x0, ne };
                                                    asm { ccmp       w10, w13, #0x0, ne };
                                                    if (asm { ccmp       w10, w13, #0x0, ne }) {
                                                            r24 = 0x1;
                                                    }
                                                    if (*(int8_t *)byte_106c69cf0 == 0x1) {
                                                            asm { ccmp       w11, w12, #0x0, ne };
                                                            if (asm { ccmp       w11, w12, #0x0, ne }) {
                                                                    r11 = 0x1;
                                                            }
                                                            asm { ccmp       w10, w13, #0x0, ne };
                                                            if (!asm { ccmp       w10, w13, #0x0, ne }) {
                                                                    r10 = 0x1;
                                                            }
                                                            else {
                                                                    r10 = r11;
                                                            }
                                                            if (((r8 | r9 | r10) & 0x1) != 0x0) {
                                                                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                                                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                                                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00();
                                                                    }
                                                            }
                                                    }
                                                    else {
                                                            if ((r8 | r9 | 0x1 | r24) == 0x1) {
                                                                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                                                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                                                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                                                            loc_1029f6b00();
                                                                    }
                                                            }
                                                    }
                                                    if (*(int8_t *)byte_106c68fb8 == 0x1) {
                                                            if (0x1 == 0x0) {
                                                                    if (r24 == 0x0) {
                                                                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                                                                    if (**___stack_chk_guard != decomp_var_68) {
                                                                                            __stack_chk_fail();
                                                                                    }
                                                                            }
                                                                            else {
                                                                                    r20 = __cxa_allocate_exception();
                                                                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                                                                    *r20 = 0x1068ac4e8;
                                                                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                                                                    r20[0x3] = decomp_var_288;
                                                                                    __cxa_throw();
                                                                            }
                                                                    }
                                                                    else {
                                                                            r20 = __cxa_allocate_exception();
                                                                            sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                                                                            *r20 = 0x1068ac4e8;
                                                                            *(int128_t *)(r20 + 0x8) = decomp_var_280;
                                                                            r20[0x3] = decomp_var_270;
                                                                            __cxa_throw();
                                                                    }
                                                            }
                                                            else {
                                                                    r20 = __cxa_allocate_exception();
                                                                    sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                                                                    *r20 = 0x1068ac4e8;
                                                                    *(int128_t *)(r20 + 0x8) = decomp_var_268;
                                                                    r20[0x3] = decomp_var_258;
                                                                    __cxa_throw();
                                                            }
                                                    }
                                                    else {
                                                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                                                    if (**___stack_chk_guard != decomp_var_68) {
                                                                            __stack_chk_fail();
                                                                    }
                                                            }
                                                            else {
                                                                    r20 = __cxa_allocate_exception();
                                                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                                                    *r20 = 0x1068ac4e8;
                                                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                                                    r20[0x3] = decomp_var_288;
                                                                    __cxa_throw();
                                                            }
                                                    }
                                            }
                                    }
                                    else {
                                            r28[0x7] = decomp_var_1d8;
                                            r2 = &decomp_var_190;
                                            r0 = sub_1015fc9e4(&decomp_var_e0, r24, r2);
                                            if ((0x100020000000 & !r20[0x7e3]) == 0x0 && r20[0x3f] == 0x0 && (r20[0x4a21] & 0x1) == 0x0) {
                                                    r24 = decomp_var_1c8;
                                                    if (r24 == loc_1015f5ff8() && sub_1015f632c(decomp_var_1d8) != 0x0) {
                                                            r8 = r20[0x7d1];
                                                            if (r8 != 0x0) {
                                                                    sub_1011f40ac(r8 + 0x50, &decomp_var_1d8);
                                                            }
                                                    }
                                            }
                                            r8 = r23[0x1];
                                            if (r8 != 0x0) {
                                                    r1 = *r23;
                                                    r0 = r8[0x16];
                                                    r2 = &decomp_var_e0;
                                                    (*(*r0 + 0x28))(r0, r1, r2);
                                            }
                                            loc_1015fcc3c();
                                            r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
                                            asm { ccmp       x8, x21, #0x2, ne };
                                            if (asm { ccmp       x8, x21, #0x2, ne }) {
                                                    r8 = 0x1;
                                            }
                                            r22 = r22[0xe] - decomp_var_29c;
                                            r9 = *(int32_t *)dword_106c69d38;
                                            asm { ccmp       w22, w9, #0x0, ne };
                                            if (asm { ccmp       w22, w9, #0x0, ne }) {
                                                    r9 = 0x1;
                                            }
                                            asm { ccmp       w22, w10, #0x0, ne };
                                            if (asm { ccmp       w22, w10, #0x0, ne }) {
                                                    r23 = 0x1;
                                            }
                                            r11 = *r19;
                                            asm { ccmp       w11, w12, #0x0, ne };
                                            asm { ccmp       w10, w13, #0x0, ne };
                                            if (asm { ccmp       w10, w13, #0x0, ne }) {
                                                    r24 = 0x1;
                                            }
                                            if (*(int8_t *)byte_106c69cf0 == 0x1) {
                                                    asm { ccmp       w11, w12, #0x0, ne };
                                                    if (asm { ccmp       w11, w12, #0x0, ne }) {
                                                            r11 = 0x1;
                                                    }
                                                    asm { ccmp       w10, w13, #0x0, ne };
                                                    if (!asm { ccmp       w10, w13, #0x0, ne }) {
                                                            r10 = 0x1;
                                                    }
                                                    else {
                                                            r10 = r11;
                                                    }
                                                    if (((r8 | r9 | r10) & 0x1) != 0x0) {
                                                            sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                                            r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                                            if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                            }
                                            else {
                                                    if ((r8 | r9 | 0x1 | r24) == 0x1) {
                                                            sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                                            r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                                            if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                            }
                                            if (*(int8_t *)byte_106c68fb8 == 0x1) {
                                                    if (0x1 == 0x0) {
                                                            if (r24 == 0x0) {
                                                                    if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                                                            if (**___stack_chk_guard != decomp_var_68) {
                                                                                    __stack_chk_fail();
                                                                            }
                                                                    }
                                                                    else {
                                                                            r20 = __cxa_allocate_exception();
                                                                            sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                                                            *r20 = 0x1068ac4e8;
                                                                            *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                                                            r20[0x3] = decomp_var_288;
                                                                            __cxa_throw();
                                                                    }
                                                            }
                                                            else {
                                                                    r20 = __cxa_allocate_exception();
                                                                    sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                                                                    *r20 = 0x1068ac4e8;
                                                                    *(int128_t *)(r20 + 0x8) = decomp_var_280;
                                                                    r20[0x3] = decomp_var_270;
                                                                    __cxa_throw();
                                                            }
                                                    }
                                                    else {
                                                            r20 = __cxa_allocate_exception();
                                                            sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                                                            *r20 = 0x1068ac4e8;
                                                            *(int128_t *)(r20 + 0x8) = decomp_var_268;
                                                            r20[0x3] = decomp_var_258;
                                                            __cxa_throw();
                                                    }
                                            }
                                            else {
                                                    if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                                            if (**___stack_chk_guard != decomp_var_68) {
                                                                    __stack_chk_fail();
                                                            }
                                                    }
                                                    else {
                                                            r20 = __cxa_allocate_exception();
                                                            sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                                            *r20 = 0x1068ac4e8;
                                                            *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                                            r20[0x3] = decomp_var_288;
                                                            __cxa_throw();
                                                    }
                                            }
                                    }
                            }
                            else {
                                    decomp_var_1d8 = 0x0;
                                    decomp_var_1c8 = 0x0;
                                    r28[0x7] = decomp_var_1d8;
                                    r2 = &decomp_var_190;
                                    r0 = sub_1015fc9e4(&decomp_var_e0, r24, r2);
                                    if ((0x100020000000 & !r20[0x7e3]) == 0x0 && r20[0x3f] == 0x0 && (r20[0x4a21] & 0x1) == 0x0) {
                                            r24 = decomp_var_1c8;
                                            if (r24 == loc_1015f5ff8() && sub_1015f632c(decomp_var_1d8) != 0x0) {
                                                    r8 = r20[0x7d1];
                                                    if (r8 != 0x0) {
                                                            sub_1011f40ac(r8 + 0x50, &decomp_var_1d8);
                                                    }
                                            }
                                    }
                                    r8 = r23[0x1];
                                    if (r8 != 0x0) {
                                            r1 = *r23;
                                            r0 = r8[0x16];
                                            r2 = &decomp_var_e0;
                                            (*(*r0 + 0x28))(r0, r1, r2);
                                    }
                                    loc_1015fcc3c();
                                    r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
                                    asm { ccmp       x8, x21, #0x2, ne };
                                    if (asm { ccmp       x8, x21, #0x2, ne }) {
                                            r8 = 0x1;
                                    }
                                    r22 = r22[0xe] - decomp_var_29c;
                                    r9 = *(int32_t *)dword_106c69d38;
                                    asm { ccmp       w22, w9, #0x0, ne };
                                    if (asm { ccmp       w22, w9, #0x0, ne }) {
                                            r9 = 0x1;
                                    }
                                    asm { ccmp       w22, w10, #0x0, ne };
                                    if (asm { ccmp       w22, w10, #0x0, ne }) {
                                            r23 = 0x1;
                                    }
                                    r11 = *r19;
                                    asm { ccmp       w11, w12, #0x0, ne };
                                    asm { ccmp       w10, w13, #0x0, ne };
                                    if (asm { ccmp       w10, w13, #0x0, ne }) {
                                            r24 = 0x1;
                                    }
                                    if (*(int8_t *)byte_106c69cf0 == 0x1) {
                                            asm { ccmp       w11, w12, #0x0, ne };
                                            if (asm { ccmp       w11, w12, #0x0, ne }) {
                                                    r11 = 0x1;
                                            }
                                            asm { ccmp       w10, w13, #0x0, ne };
                                            if (!asm { ccmp       w10, w13, #0x0, ne }) {
                                                    r10 = 0x1;
                                            }
                                            else {
                                                    r10 = r11;
                                            }
                                            if (((r8 | r9 | r10) & 0x1) != 0x0) {
                                                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                            }
                                    }
                                    else {
                                            if ((r8 | r9 | 0x1 | r24) == 0x1) {
                                                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                            }
                                    }
                                    if (*(int8_t *)byte_106c68fb8 == 0x1) {
                                            if (0x1 == 0x0) {
                                                    if (r24 == 0x0) {
                                                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                                                    if (**___stack_chk_guard != decomp_var_68) {
                                                                            __stack_chk_fail();
                                                                    }
                                                            }
                                                            else {
                                                                    r20 = __cxa_allocate_exception();
                                                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                                                    *r20 = 0x1068ac4e8;
                                                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                                                    r20[0x3] = decomp_var_288;
                                                                    __cxa_throw();
                                                            }
                                                    }
                                                    else {
                                                            r20 = __cxa_allocate_exception();
                                                            sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                                                            *r20 = 0x1068ac4e8;
                                                            *(int128_t *)(r20 + 0x8) = decomp_var_280;
                                                            r20[0x3] = decomp_var_270;
                                                            __cxa_throw();
                                                    }
                                            }
                                            else {
                                                    r20 = __cxa_allocate_exception();
                                                    sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                                                    *r20 = 0x1068ac4e8;
                                                    *(int128_t *)(r20 + 0x8) = decomp_var_268;
                                                    r20[0x3] = decomp_var_258;
                                                    __cxa_throw();
                                            }
                                    }
                                    else {
                                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                                    if (**___stack_chk_guard != decomp_var_68) {
                                                            __stack_chk_fail();
                                                    }
                                            }
                                            else {
                                                    r20 = __cxa_allocate_exception();
                                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                                    *r20 = 0x1068ac4e8;
                                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                                    r20[0x3] = decomp_var_288;
                                                    __cxa_throw();
                                            }
                                    }
                            }
                    }
                    else {
                            if (*(int8_t *)byte_106c6a860 == 0x1) {
                                    if (r1 >= 0xe) {
                                            if (r20[0x3f] != 0x0) {
                                                    sub_1029fe0a0("Invalid LR Handle");
                                            }
                                            decomp_var_1d8 = 0x0;
                                            decomp_var_1c8 = 0x0;
                                            r28[0x7] = decomp_var_1d8;
                                            r2 = &decomp_var_190;
                                            r0 = sub_1015fc9e4(&decomp_var_e0, r24, r2);
                                            if ((0x100020000000 & !r20[0x7e3]) == 0x0 && r20[0x3f] == 0x0 && (r20[0x4a21] & 0x1) == 0x0) {
                                                    r24 = decomp_var_1c8;
                                                    if (r24 == loc_1015f5ff8() && sub_1015f632c(decomp_var_1d8) != 0x0) {
                                                            r8 = r20[0x7d1];
                                                            if (r8 != 0x0) {
                                                                    sub_1011f40ac(r8 + 0x50, &decomp_var_1d8);
                                                            }
                                                    }
                                            }
                                            r8 = r23[0x1];
                                            if (r8 != 0x0) {
                                                    r1 = *r23;
                                                    r0 = r8[0x16];
                                                    r2 = &decomp_var_e0;
                                                    (*(*r0 + 0x28))(r0, r1, r2);
                                            }
                                            loc_1015fcc3c();
                                            r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
                                            asm { ccmp       x8, x21, #0x2, ne };
                                            if (asm { ccmp       x8, x21, #0x2, ne }) {
                                                    r8 = 0x1;
                                            }
                                            r22 = r22[0xe] - decomp_var_29c;
                                            r9 = *(int32_t *)dword_106c69d38;
                                            asm { ccmp       w22, w9, #0x0, ne };
                                            if (asm { ccmp       w22, w9, #0x0, ne }) {
                                                    r9 = 0x1;
                                            }
                                            asm { ccmp       w22, w10, #0x0, ne };
                                            if (asm { ccmp       w22, w10, #0x0, ne }) {
                                                    r23 = 0x1;
                                            }
                                            r11 = *r19;
                                            asm { ccmp       w11, w12, #0x0, ne };
                                            asm { ccmp       w10, w13, #0x0, ne };
                                            if (asm { ccmp       w10, w13, #0x0, ne }) {
                                                    r24 = 0x1;
                                            }
                                            if (*(int8_t *)byte_106c69cf0 == 0x1) {
                                                    asm { ccmp       w11, w12, #0x0, ne };
                                                    if (asm { ccmp       w11, w12, #0x0, ne }) {
                                                            r11 = 0x1;
                                                    }
                                                    asm { ccmp       w10, w13, #0x0, ne };
                                                    if (!asm { ccmp       w10, w13, #0x0, ne }) {
                                                            r10 = 0x1;
                                                    }
                                                    else {
                                                            r10 = r11;
                                                    }
                                                    if (((r8 | r9 | r10) & 0x1) != 0x0) {
                                                            sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                                            r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                                            if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                            }
                                            else {
                                                    if ((r8 | r9 | 0x1 | r24) == 0x1) {
                                                            sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                                            r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                                            if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                            }
                                            if (*(int8_t *)byte_106c68fb8 == 0x1) {
                                                    if (0x1 == 0x0) {
                                                            if (r24 == 0x0) {
                                                                    if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                                                            if (**___stack_chk_guard != decomp_var_68) {
                                                                                    __stack_chk_fail();
                                                                            }
                                                                    }
                                                                    else {
                                                                            r20 = __cxa_allocate_exception();
                                                                            sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                                                            *r20 = 0x1068ac4e8;
                                                                            *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                                                            r20[0x3] = decomp_var_288;
                                                                            __cxa_throw();
                                                                    }
                                                            }
                                                            else {
                                                                    r20 = __cxa_allocate_exception();
                                                                    sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                                                                    *r20 = 0x1068ac4e8;
                                                                    *(int128_t *)(r20 + 0x8) = decomp_var_280;
                                                                    r20[0x3] = decomp_var_270;
                                                                    __cxa_throw();
                                                            }
                                                    }
                                                    else {
                                                            r20 = __cxa_allocate_exception();
                                                            sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                                                            *r20 = 0x1068ac4e8;
                                                            *(int128_t *)(r20 + 0x8) = decomp_var_268;
                                                            r20[0x3] = decomp_var_258;
                                                            __cxa_throw();
                                                    }
                                            }
                                            else {
                                                    if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                                            if (**___stack_chk_guard != decomp_var_68) {
                                                                    __stack_chk_fail();
                                                            }
                                                    }
                                                    else {
                                                            r20 = __cxa_allocate_exception();
                                                            sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                                            *r20 = 0x1068ac4e8;
                                                            *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                                            r20[0x3] = decomp_var_288;
                                                            __cxa_throw();
                                                    }
                                            }
                                    }
                                    else {
                                            r28[0x7] = decomp_var_1d8;
                                            r2 = &decomp_var_190;
                                            r0 = sub_1015fc9e4(&decomp_var_e0, r24, r2);
                                            if ((0x100020000000 & !r20[0x7e3]) == 0x0 && r20[0x3f] == 0x0 && (r20[0x4a21] & 0x1) == 0x0) {
                                                    r24 = decomp_var_1c8;
                                                    if (r24 == loc_1015f5ff8() && sub_1015f632c(decomp_var_1d8) != 0x0) {
                                                            r8 = r20[0x7d1];
                                                            if (r8 != 0x0) {
                                                                    sub_1011f40ac(r8 + 0x50, &decomp_var_1d8);
                                                            }
                                                    }
                                            }
                                            r8 = r23[0x1];
                                            if (r8 != 0x0) {
                                                    r1 = *r23;
                                                    r0 = r8[0x16];
                                                    r2 = &decomp_var_e0;
                                                    (*(*r0 + 0x28))(r0, r1, r2);
                                            }
                                            loc_1015fcc3c();
                                            r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
                                            asm { ccmp       x8, x21, #0x2, ne };
                                            if (asm { ccmp       x8, x21, #0x2, ne }) {
                                                    r8 = 0x1;
                                            }
                                            r22 = r22[0xe] - decomp_var_29c;
                                            r9 = *(int32_t *)dword_106c69d38;
                                            asm { ccmp       w22, w9, #0x0, ne };
                                            if (asm { ccmp       w22, w9, #0x0, ne }) {
                                                    r9 = 0x1;
                                            }
                                            asm { ccmp       w22, w10, #0x0, ne };
                                            if (asm { ccmp       w22, w10, #0x0, ne }) {
                                                    r23 = 0x1;
                                            }
                                            r11 = *r19;
                                            asm { ccmp       w11, w12, #0x0, ne };
                                            asm { ccmp       w10, w13, #0x0, ne };
                                            if (asm { ccmp       w10, w13, #0x0, ne }) {
                                                    r24 = 0x1;
                                            }
                                            if (*(int8_t *)byte_106c69cf0 == 0x1) {
                                                    asm { ccmp       w11, w12, #0x0, ne };
                                                    if (asm { ccmp       w11, w12, #0x0, ne }) {
                                                            r11 = 0x1;
                                                    }
                                                    asm { ccmp       w10, w13, #0x0, ne };
                                                    if (!asm { ccmp       w10, w13, #0x0, ne }) {
                                                            r10 = 0x1;
                                                    }
                                                    else {
                                                            r10 = r11;
                                                    }
                                                    if (((r8 | r9 | r10) & 0x1) != 0x0) {
                                                            sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                                            r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                                            if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                            }
                                            else {
                                                    if ((r8 | r9 | 0x1 | r24) == 0x1) {
                                                            sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                                            r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                                            if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                                                    loc_1029f6b00();
                                                            }
                                                    }
                                            }
                                            if (*(int8_t *)byte_106c68fb8 == 0x1) {
                                                    if (0x1 == 0x0) {
                                                            if (r24 == 0x0) {
                                                                    if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                                                            if (**___stack_chk_guard != decomp_var_68) {
                                                                                    __stack_chk_fail();
                                                                            }
                                                                    }
                                                                    else {
                                                                            r20 = __cxa_allocate_exception();
                                                                            sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                                                            *r20 = 0x1068ac4e8;
                                                                            *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                                                            r20[0x3] = decomp_var_288;
                                                                            __cxa_throw();
                                                                    }
                                                            }
                                                            else {
                                                                    r20 = __cxa_allocate_exception();
                                                                    sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                                                                    *r20 = 0x1068ac4e8;
                                                                    *(int128_t *)(r20 + 0x8) = decomp_var_280;
                                                                    r20[0x3] = decomp_var_270;
                                                                    __cxa_throw();
                                                            }
                                                    }
                                                    else {
                                                            r20 = __cxa_allocate_exception();
                                                            sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                                                            *r20 = 0x1068ac4e8;
                                                            *(int128_t *)(r20 + 0x8) = decomp_var_268;
                                                            r20[0x3] = decomp_var_258;
                                                            __cxa_throw();
                                                    }
                                            }
                                            else {
                                                    if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                                            if (**___stack_chk_guard != decomp_var_68) {
                                                                    __stack_chk_fail();
                                                            }
                                                    }
                                                    else {
                                                            r20 = __cxa_allocate_exception();
                                                            sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                                            *r20 = 0x1068ac4e8;
                                                            *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                                            r20[0x3] = decomp_var_288;
                                                            __cxa_throw();
                                                    }
                                            }
                                    }
                            }
                            else {
                                    r28[0x7] = decomp_var_1d8;
                                    r2 = &decomp_var_190;
                                    r0 = sub_1015fc9e4(&decomp_var_e0, r24, r2);
                                    if ((0x100020000000 & !r20[0x7e3]) == 0x0 && r20[0x3f] == 0x0 && (r20[0x4a21] & 0x1) == 0x0) {
                                            r24 = decomp_var_1c8;
                                            if (r24 == loc_1015f5ff8() && sub_1015f632c(decomp_var_1d8) != 0x0) {
                                                    r8 = r20[0x7d1];
                                                    if (r8 != 0x0) {
                                                            sub_1011f40ac(r8 + 0x50, &decomp_var_1d8);
                                                    }
                                            }
                                    }
                                    r8 = r23[0x1];
                                    if (r8 != 0x0) {
                                            r1 = *r23;
                                            r0 = r8[0x16];
                                            r2 = &decomp_var_e0;
                                            (*(*r0 + 0x28))(r0, r1, r2);
                                    }
                                    loc_1015fcc3c();
                                    r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
                                    asm { ccmp       x8, x21, #0x2, ne };
                                    if (asm { ccmp       x8, x21, #0x2, ne }) {
                                            r8 = 0x1;
                                    }
                                    r22 = r22[0xe] - decomp_var_29c;
                                    r9 = *(int32_t *)dword_106c69d38;
                                    asm { ccmp       w22, w9, #0x0, ne };
                                    if (asm { ccmp       w22, w9, #0x0, ne }) {
                                            r9 = 0x1;
                                    }
                                    asm { ccmp       w22, w10, #0x0, ne };
                                    if (asm { ccmp       w22, w10, #0x0, ne }) {
                                            r23 = 0x1;
                                    }
                                    r11 = *r19;
                                    asm { ccmp       w11, w12, #0x0, ne };
                                    asm { ccmp       w10, w13, #0x0, ne };
                                    if (asm { ccmp       w10, w13, #0x0, ne }) {
                                            r24 = 0x1;
                                    }
                                    if (*(int8_t *)byte_106c69cf0 == 0x1) {
                                            asm { ccmp       w11, w12, #0x0, ne };
                                            if (asm { ccmp       w11, w12, #0x0, ne }) {
                                                    r11 = 0x1;
                                            }
                                            asm { ccmp       w10, w13, #0x0, ne };
                                            if (!asm { ccmp       w10, w13, #0x0, ne }) {
                                                    r10 = 0x1;
                                            }
                                            else {
                                                    r10 = r11;
                                            }
                                            if (((r8 | r9 | r10) & 0x1) != 0x0) {
                                                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                            }
                                    }
                                    else {
                                            if ((r8 | r9 | 0x1 | r24) == 0x1) {
                                                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                            }
                                    }
                                    if (*(int8_t *)byte_106c68fb8 == 0x1) {
                                            if (0x1 == 0x0) {
                                                    if (r24 == 0x0) {
                                                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                                                    if (**___stack_chk_guard != decomp_var_68) {
                                                                            __stack_chk_fail();
                                                                    }
                                                            }
                                                            else {
                                                                    r20 = __cxa_allocate_exception();
                                                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                                                    *r20 = 0x1068ac4e8;
                                                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                                                    r20[0x3] = decomp_var_288;
                                                                    __cxa_throw();
                                                            }
                                                    }
                                                    else {
                                                            r20 = __cxa_allocate_exception();
                                                            sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                                                            *r20 = 0x1068ac4e8;
                                                            *(int128_t *)(r20 + 0x8) = decomp_var_280;
                                                            r20[0x3] = decomp_var_270;
                                                            __cxa_throw();
                                                    }
                                            }
                                            else {
                                                    r20 = __cxa_allocate_exception();
                                                    sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                                                    *r20 = 0x1068ac4e8;
                                                    *(int128_t *)(r20 + 0x8) = decomp_var_268;
                                                    r20[0x3] = decomp_var_258;
                                                    __cxa_throw();
                                            }
                                    }
                                    else {
                                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                                    if (**___stack_chk_guard != decomp_var_68) {
                                                            __stack_chk_fail();
                                                    }
                                            }
                                            else {
                                                    r20 = __cxa_allocate_exception();
                                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                                    *r20 = 0x1068ac4e8;
                                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                                    r20[0x3] = decomp_var_288;
                                                    __cxa_throw();
                                            }
                                    }
                            }
                    }
            }
            else {
                    r1 = decomp_var_1c8;
                    if (*(int8_t *)byte_106c6a860 == 0x1) {
                            if (r1 >= 0xe) {
                                    if (r20[0x3f] != 0x0) {
                                            sub_1029fe0a0("Invalid LR Handle");
                                    }
                                    decomp_var_1d8 = 0x0;
                                    decomp_var_1c8 = 0x0;
                                    r28[0x7] = decomp_var_1d8;
                                    r2 = &decomp_var_190;
                                    r0 = sub_1015fc9e4(&decomp_var_e0, r24, r2);
                                    if ((0x100020000000 & !r20[0x7e3]) == 0x0 && r20[0x3f] == 0x0 && (r20[0x4a21] & 0x1) == 0x0) {
                                            r24 = decomp_var_1c8;
                                            if (r24 == loc_1015f5ff8() && sub_1015f632c(decomp_var_1d8) != 0x0) {
                                                    r8 = r20[0x7d1];
                                                    if (r8 != 0x0) {
                                                            sub_1011f40ac(r8 + 0x50, &decomp_var_1d8);
                                                    }
                                            }
                                    }
                                    r8 = r23[0x1];
                                    if (r8 != 0x0) {
                                            r1 = *r23;
                                            r0 = r8[0x16];
                                            r2 = &decomp_var_e0;
                                            (*(*r0 + 0x28))(r0, r1, r2);
                                    }
                                    loc_1015fcc3c();
                                    r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
                                    asm { ccmp       x8, x21, #0x2, ne };
                                    if (asm { ccmp       x8, x21, #0x2, ne }) {
                                            r8 = 0x1;
                                    }
                                    r22 = r22[0xe] - decomp_var_29c;
                                    r9 = *(int32_t *)dword_106c69d38;
                                    asm { ccmp       w22, w9, #0x0, ne };
                                    if (asm { ccmp       w22, w9, #0x0, ne }) {
                                            r9 = 0x1;
                                    }
                                    asm { ccmp       w22, w10, #0x0, ne };
                                    if (asm { ccmp       w22, w10, #0x0, ne }) {
                                            r23 = 0x1;
                                    }
                                    r11 = *r19;
                                    asm { ccmp       w11, w12, #0x0, ne };
                                    asm { ccmp       w10, w13, #0x0, ne };
                                    if (asm { ccmp       w10, w13, #0x0, ne }) {
                                            r24 = 0x1;
                                    }
                                    if (*(int8_t *)byte_106c69cf0 == 0x1) {
                                            asm { ccmp       w11, w12, #0x0, ne };
                                            if (asm { ccmp       w11, w12, #0x0, ne }) {
                                                    r11 = 0x1;
                                            }
                                            asm { ccmp       w10, w13, #0x0, ne };
                                            if (!asm { ccmp       w10, w13, #0x0, ne }) {
                                                    r10 = 0x1;
                                            }
                                            else {
                                                    r10 = r11;
                                            }
                                            if (((r8 | r9 | r10) & 0x1) != 0x0) {
                                                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                            }
                                    }
                                    else {
                                            if ((r8 | r9 | 0x1 | r24) == 0x1) {
                                                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                            }
                                    }
                                    if (*(int8_t *)byte_106c68fb8 == 0x1) {
                                            if (0x1 == 0x0) {
                                                    if (r24 == 0x0) {
                                                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                                                    if (**___stack_chk_guard != decomp_var_68) {
                                                                            __stack_chk_fail();
                                                                    }
                                                            }
                                                            else {
                                                                    r20 = __cxa_allocate_exception();
                                                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                                                    *r20 = 0x1068ac4e8;
                                                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                                                    r20[0x3] = decomp_var_288;
                                                                    __cxa_throw();
                                                            }
                                                    }
                                                    else {
                                                            r20 = __cxa_allocate_exception();
                                                            sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                                                            *r20 = 0x1068ac4e8;
                                                            *(int128_t *)(r20 + 0x8) = decomp_var_280;
                                                            r20[0x3] = decomp_var_270;
                                                            __cxa_throw();
                                                    }
                                            }
                                            else {
                                                    r20 = __cxa_allocate_exception();
                                                    sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                                                    *r20 = 0x1068ac4e8;
                                                    *(int128_t *)(r20 + 0x8) = decomp_var_268;
                                                    r20[0x3] = decomp_var_258;
                                                    __cxa_throw();
                                            }
                                    }
                                    else {
                                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                                    if (**___stack_chk_guard != decomp_var_68) {
                                                            __stack_chk_fail();
                                                    }
                                            }
                                            else {
                                                    r20 = __cxa_allocate_exception();
                                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                                    *r20 = 0x1068ac4e8;
                                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                                    r20[0x3] = decomp_var_288;
                                                    __cxa_throw();
                                            }
                                    }
                            }
                            else {
                                    r28[0x7] = decomp_var_1d8;
                                    r2 = &decomp_var_190;
                                    r0 = sub_1015fc9e4(&decomp_var_e0, r24, r2);
                                    if ((0x100020000000 & !r20[0x7e3]) == 0x0 && r20[0x3f] == 0x0 && (r20[0x4a21] & 0x1) == 0x0) {
                                            r24 = decomp_var_1c8;
                                            if (r24 == loc_1015f5ff8() && sub_1015f632c(decomp_var_1d8) != 0x0) {
                                                    r8 = r20[0x7d1];
                                                    if (r8 != 0x0) {
                                                            sub_1011f40ac(r8 + 0x50, &decomp_var_1d8);
                                                    }
                                            }
                                    }
                                    r8 = r23[0x1];
                                    if (r8 != 0x0) {
                                            r1 = *r23;
                                            r0 = r8[0x16];
                                            r2 = &decomp_var_e0;
                                            (*(*r0 + 0x28))(r0, r1, r2);
                                    }
                                    loc_1015fcc3c();
                                    r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
                                    asm { ccmp       x8, x21, #0x2, ne };
                                    if (asm { ccmp       x8, x21, #0x2, ne }) {
                                            r8 = 0x1;
                                    }
                                    r22 = r22[0xe] - decomp_var_29c;
                                    r9 = *(int32_t *)dword_106c69d38;
                                    asm { ccmp       w22, w9, #0x0, ne };
                                    if (asm { ccmp       w22, w9, #0x0, ne }) {
                                            r9 = 0x1;
                                    }
                                    asm { ccmp       w22, w10, #0x0, ne };
                                    if (asm { ccmp       w22, w10, #0x0, ne }) {
                                            r23 = 0x1;
                                    }
                                    r11 = *r19;
                                    asm { ccmp       w11, w12, #0x0, ne };
                                    asm { ccmp       w10, w13, #0x0, ne };
                                    if (asm { ccmp       w10, w13, #0x0, ne }) {
                                            r24 = 0x1;
                                    }
                                    if (*(int8_t *)byte_106c69cf0 == 0x1) {
                                            asm { ccmp       w11, w12, #0x0, ne };
                                            if (asm { ccmp       w11, w12, #0x0, ne }) {
                                                    r11 = 0x1;
                                            }
                                            asm { ccmp       w10, w13, #0x0, ne };
                                            if (!asm { ccmp       w10, w13, #0x0, ne }) {
                                                    r10 = 0x1;
                                            }
                                            else {
                                                    r10 = r11;
                                            }
                                            if (((r8 | r9 | r10) & 0x1) != 0x0) {
                                                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                            }
                                    }
                                    else {
                                            if ((r8 | r9 | 0x1 | r24) == 0x1) {
                                                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                            }
                                    }
                                    if (*(int8_t *)byte_106c68fb8 == 0x1) {
                                            if (0x1 == 0x0) {
                                                    if (r24 == 0x0) {
                                                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                                                    if (**___stack_chk_guard != decomp_var_68) {
                                                                            __stack_chk_fail();
                                                                    }
                                                            }
                                                            else {
                                                                    r20 = __cxa_allocate_exception();
                                                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                                                    *r20 = 0x1068ac4e8;
                                                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                                                    r20[0x3] = decomp_var_288;
                                                                    __cxa_throw();
                                                            }
                                                    }
                                                    else {
                                                            r20 = __cxa_allocate_exception();
                                                            sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                                                            *r20 = 0x1068ac4e8;
                                                            *(int128_t *)(r20 + 0x8) = decomp_var_280;
                                                            r20[0x3] = decomp_var_270;
                                                            __cxa_throw();
                                                    }
                                            }
                                            else {
                                                    r20 = __cxa_allocate_exception();
                                                    sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                                                    *r20 = 0x1068ac4e8;
                                                    *(int128_t *)(r20 + 0x8) = decomp_var_268;
                                                    r20[0x3] = decomp_var_258;
                                                    __cxa_throw();
                                            }
                                    }
                                    else {
                                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                                    if (**___stack_chk_guard != decomp_var_68) {
                                                            __stack_chk_fail();
                                                    }
                                            }
                                            else {
                                                    r20 = __cxa_allocate_exception();
                                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                                    *r20 = 0x1068ac4e8;
                                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                                    r20[0x3] = decomp_var_288;
                                                    __cxa_throw();
                                            }
                                    }
                            }
                    }
                    else {
                            r28[0x7] = decomp_var_1d8;
                            r2 = &decomp_var_190;
                            r0 = sub_1015fc9e4(&decomp_var_e0, r24, r2);
                            if ((0x100020000000 & !r20[0x7e3]) == 0x0 && r20[0x3f] == 0x0 && (r20[0x4a21] & 0x1) == 0x0) {
                                    r24 = decomp_var_1c8;
                                    if (r24 == loc_1015f5ff8() && sub_1015f632c(decomp_var_1d8) != 0x0) {
                                            r8 = r20[0x7d1];
                                            if (r8 != 0x0) {
                                                    sub_1011f40ac(r8 + 0x50, &decomp_var_1d8);
                                            }
                                    }
                            }
                            r8 = r23[0x1];
                            if (r8 != 0x0) {
                                    r1 = *r23;
                                    r0 = r8[0x16];
                                    r2 = &decomp_var_e0;
                                    (*(*r0 + 0x28))(r0, r1, r2);
                            }
                            loc_1015fcc3c();
                            r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
                            asm { ccmp       x8, x21, #0x2, ne };
                            if (asm { ccmp       x8, x21, #0x2, ne }) {
                                    r8 = 0x1;
                            }
                            r22 = r22[0xe] - decomp_var_29c;
                            r9 = *(int32_t *)dword_106c69d38;
                            asm { ccmp       w22, w9, #0x0, ne };
                            if (asm { ccmp       w22, w9, #0x0, ne }) {
                                    r9 = 0x1;
                            }
                            asm { ccmp       w22, w10, #0x0, ne };
                            if (asm { ccmp       w22, w10, #0x0, ne }) {
                                    r23 = 0x1;
                            }
                            r11 = *r19;
                            asm { ccmp       w11, w12, #0x0, ne };
                            asm { ccmp       w10, w13, #0x0, ne };
                            if (asm { ccmp       w10, w13, #0x0, ne }) {
                                    r24 = 0x1;
                            }
                            if (*(int8_t *)byte_106c69cf0 == 0x1) {
                                    asm { ccmp       w11, w12, #0x0, ne };
                                    if (asm { ccmp       w11, w12, #0x0, ne }) {
                                            r11 = 0x1;
                                    }
                                    asm { ccmp       w10, w13, #0x0, ne };
                                    if (!asm { ccmp       w10, w13, #0x0, ne }) {
                                            r10 = 0x1;
                                    }
                                    else {
                                            r10 = r11;
                                    }
                                    if (((r8 | r9 | r10) & 0x1) != 0x0) {
                                            sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                            r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                            if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                    }
                            }
                            else {
                                    if ((r8 | r9 | 0x1 | r24) == 0x1) {
                                            sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                            r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                            if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                    }
                            }
                            if (*(int8_t *)byte_106c68fb8 == 0x1) {
                                    if (0x1 == 0x0) {
                                            if (r24 == 0x0) {
                                                    if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                                            if (**___stack_chk_guard != decomp_var_68) {
                                                                    __stack_chk_fail();
                                                            }
                                                    }
                                                    else {
                                                            r20 = __cxa_allocate_exception();
                                                            sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                                            *r20 = 0x1068ac4e8;
                                                            *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                                            r20[0x3] = decomp_var_288;
                                                            __cxa_throw();
                                                    }
                                            }
                                            else {
                                                    r20 = __cxa_allocate_exception();
                                                    sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                                                    *r20 = 0x1068ac4e8;
                                                    *(int128_t *)(r20 + 0x8) = decomp_var_280;
                                                    r20[0x3] = decomp_var_270;
                                                    __cxa_throw();
                                            }
                                    }
                                    else {
                                            r20 = __cxa_allocate_exception();
                                            sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                                            *r20 = 0x1068ac4e8;
                                            *(int128_t *)(r20 + 0x8) = decomp_var_268;
                                            r20[0x3] = decomp_var_258;
                                            __cxa_throw();
                                    }
                            }
                            else {
                                    if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                            if (**___stack_chk_guard != decomp_var_68) {
                                                    __stack_chk_fail();
                                            }
                                    }
                                    else {
                                            r20 = __cxa_allocate_exception();
                                            sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                            *r20 = 0x1068ac4e8;
                                            *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                            r20[0x3] = decomp_var_288;
                                            __cxa_throw();
                                    }
                            }
                    }
            }
    }
    else {
            r28[0x7] = decomp_var_1d8;
            r2 = &decomp_var_190;
            r0 = sub_1015fc9e4(&decomp_var_e0, r24, r2);
            if ((0x100020000000 & !r20[0x7e3]) == 0x0 && r20[0x3f] == 0x0 && (r20[0x4a21] & 0x1) == 0x0) {
                    r24 = decomp_var_1c8;
                    if (r24 == loc_1015f5ff8() && sub_1015f632c(decomp_var_1d8) != 0x0) {
                            r8 = r20[0x7d1];
                            if (r8 != 0x0) {
                                    sub_1011f40ac(r8 + 0x50, &decomp_var_1d8);
                            }
                    }
            }
            r8 = r23[0x1];
            if (r8 != 0x0) {
                    r1 = *r23;
                    r0 = r8[0x16];
                    r2 = &decomp_var_e0;
                    (*(*r0 + 0x28))(r0, r1, r2);
            }
            loc_1015fcc3c();
            r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
            asm { ccmp       x8, x21, #0x2, ne };
            if (asm { ccmp       x8, x21, #0x2, ne }) {
                    r8 = 0x1;
            }
            r22 = r22[0xe] - decomp_var_29c;
            r9 = *(int32_t *)dword_106c69d38;
            asm { ccmp       w22, w9, #0x0, ne };
            if (asm { ccmp       w22, w9, #0x0, ne }) {
                    r9 = 0x1;
            }
            asm { ccmp       w22, w10, #0x0, ne };
            if (asm { ccmp       w22, w10, #0x0, ne }) {
                    r23 = 0x1;
            }
            r11 = *r19;
            asm { ccmp       w11, w12, #0x0, ne };
            asm { ccmp       w10, w13, #0x0, ne };
            if (asm { ccmp       w10, w13, #0x0, ne }) {
                    r24 = 0x1;
            }
            if (*(int8_t *)byte_106c69cf0 == 0x1) {
                    asm { ccmp       w11, w12, #0x0, ne };
                    if (asm { ccmp       w11, w12, #0x0, ne }) {
                            r11 = 0x1;
                    }
                    asm { ccmp       w10, w13, #0x0, ne };
                    if (!asm { ccmp       w10, w13, #0x0, ne }) {
                            r10 = 0x1;
                    }
                    else {
                            r10 = r11;
                    }
                    if (((r8 | r9 | r10) & 0x1) != 0x0) {
                            sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                            r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                            if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00();
                            }
                    }
            }
            else {
                    if ((r8 | r9 | 0x1 | r24) == 0x1) {
                            sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                            r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                            if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00();
                            }
                    }
            }
            if (*(int8_t *)byte_106c68fb8 == 0x1) {
                    if (0x1 == 0x0) {
                            if (r24 == 0x0) {
                                    if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                            if (**___stack_chk_guard != decomp_var_68) {
                                                    __stack_chk_fail();
                                            }
                                    }
                                    else {
                                            r20 = __cxa_allocate_exception();
                                            sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                            *r20 = 0x1068ac4e8;
                                            *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                            r20[0x3] = decomp_var_288;
                                            __cxa_throw();
                                    }
                            }
                            else {
                                    r20 = __cxa_allocate_exception();
                                    sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                                    *r20 = 0x1068ac4e8;
                                    *(int128_t *)(r20 + 0x8) = decomp_var_280;
                                    r20[0x3] = decomp_var_270;
                                    __cxa_throw();
                            }
                    }
                    else {
                            r20 = __cxa_allocate_exception();
                            sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                            *r20 = 0x1068ac4e8;
                            *(int128_t *)(r20 + 0x8) = decomp_var_268;
                            r20[0x3] = decomp_var_258;
                            __cxa_throw();
                    }
            }
            else {
                    if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                            if (**___stack_chk_guard != decomp_var_68) {
                                    __stack_chk_fail();
                            }
                    }
                    else {
                            r20 = __cxa_allocate_exception();
                            sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                            *r20 = 0x1068ac4e8;
                            *(int128_t *)(r20 + 0x8) = decomp_var_298;
                            r20[0x3] = decomp_var_288;
                            __cxa_throw();
                    }
            }
    }
    return;

loc_104e3137c:
    if (*(int8_t *)byte_106c162a8 == 0x1) {
            sub_104dce760(r20[0x655]);
            asm { ubfx       w24, w8, #0x6, #0x1 };
    }
    else {
            r24 = 0x0;
    }
    decomp_var_1d8 = r20;
    sub_1015fede0(&decomp_var_f0);
    r8 = decomp_var_f0;
    if (r8 > 0x1) goto loc_104e326c8;
    goto loc_104e3215c;

.l319:
    if (index_0 == 0x39) goto loc_104e3206c;
    goto .l320;

loc_104e3286c:
    r1 = decomp_var_1c8;
    if (*(int8_t *)byte_106c6a860 != 0x1) goto .l232;
    goto loc_104e32880;

loc_104e320f0:
    r0 = r20[0x655];
    r0 = sub_10010497c(r0);
    r1 = decomp_var_1c8;
    if ((*(int8_t *)r0 & 0x10) != 0x0) {
            if (r1 != 0xffff) {
                    r8 = r20[0x655];
                    if (r1 >= (r8[0x30] - r8[0x2f]) / 0x2) {
                            sub_1029fe0a0("Invalid LR Network Type %u");
                    }
                    r1 = sub_1044d5fb8(r8 + 0x178, r1);
                    decomp_var_1c8 = r1;
                    if (*(int8_t *)byte_106c6a860 == 0x1) {
                            if (r1 >= 0xe) {
                                    if (r20[0x3f] != 0x0) {
                                            sub_1029fe0a0("Invalid LR Handle");
                                    }
                                    decomp_var_1d8 = 0x0;
                                    decomp_var_1c8 = 0x0;
                                    r28[0x7] = decomp_var_1d8;
                                    r2 = &decomp_var_190;
                                    r0 = sub_1015fc9e4(&decomp_var_e0, r24, r2);
                                    if ((0x100020000000 & !r20[0x7e3]) == 0x0 && r20[0x3f] == 0x0 && (r20[0x4a21] & 0x1) == 0x0) {
                                            r24 = decomp_var_1c8;
                                            if (r24 == loc_1015f5ff8() && sub_1015f632c(decomp_var_1d8) != 0x0) {
                                                    r8 = r20[0x7d1];
                                                    if (r8 != 0x0) {
                                                            sub_1011f40ac(r8 + 0x50, &decomp_var_1d8);
                                                    }
                                            }
                                    }
                                    r8 = r23[0x1];
                                    if (r8 != 0x0) {
                                            r1 = *r23;
                                            r0 = r8[0x16];
                                            r2 = &decomp_var_e0;
                                            (*(*r0 + 0x28))(r0, r1, r2);
                                    }
                                    loc_1015fcc3c();
                                    r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
                                    asm { ccmp       x8, x21, #0x2, ne };
                                    if (asm { ccmp       x8, x21, #0x2, ne }) {
                                            r8 = 0x1;
                                    }
                                    r22 = r22[0xe] - decomp_var_29c;
                                    r9 = *(int32_t *)dword_106c69d38;
                                    asm { ccmp       w22, w9, #0x0, ne };
                                    if (asm { ccmp       w22, w9, #0x0, ne }) {
                                            r9 = 0x1;
                                    }
                                    asm { ccmp       w22, w10, #0x0, ne };
                                    if (asm { ccmp       w22, w10, #0x0, ne }) {
                                            r23 = 0x1;
                                    }
                                    r11 = *r19;
                                    asm { ccmp       w11, w12, #0x0, ne };
                                    asm { ccmp       w10, w13, #0x0, ne };
                                    if (asm { ccmp       w10, w13, #0x0, ne }) {
                                            r24 = 0x1;
                                    }
                                    if (*(int8_t *)byte_106c69cf0 == 0x1) {
                                            asm { ccmp       w11, w12, #0x0, ne };
                                            if (asm { ccmp       w11, w12, #0x0, ne }) {
                                                    r11 = 0x1;
                                            }
                                            asm { ccmp       w10, w13, #0x0, ne };
                                            if (!asm { ccmp       w10, w13, #0x0, ne }) {
                                                    r10 = 0x1;
                                            }
                                            else {
                                                    r10 = r11;
                                            }
                                            if (((r8 | r9 | r10) & 0x1) != 0x0) {
                                                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                            }
                                    }
                                    else {
                                            if ((r8 | r9 | 0x1 | r24) == 0x1) {
                                                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                            }
                                    }
                                    if (*(int8_t *)byte_106c68fb8 == 0x1) {
                                            if (0x1 == 0x0) {
                                                    if (r24 == 0x0) {
                                                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                                                    if (**___stack_chk_guard != decomp_var_68) {
                                                                            __stack_chk_fail();
                                                                    }
                                                            }
                                                            else {
                                                                    r20 = __cxa_allocate_exception();
                                                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                                                    *r20 = 0x1068ac4e8;
                                                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                                                    r20[0x3] = decomp_var_288;
                                                                    __cxa_throw();
                                                            }
                                                    }
                                                    else {
                                                            r20 = __cxa_allocate_exception();
                                                            sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                                                            *r20 = 0x1068ac4e8;
                                                            *(int128_t *)(r20 + 0x8) = decomp_var_280;
                                                            r20[0x3] = decomp_var_270;
                                                            __cxa_throw();
                                                    }
                                            }
                                            else {
                                                    r20 = __cxa_allocate_exception();
                                                    sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                                                    *r20 = 0x1068ac4e8;
                                                    *(int128_t *)(r20 + 0x8) = decomp_var_268;
                                                    r20[0x3] = decomp_var_258;
                                                    __cxa_throw();
                                            }
                                    }
                                    else {
                                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                                    if (**___stack_chk_guard != decomp_var_68) {
                                                            __stack_chk_fail();
                                                    }
                                            }
                                            else {
                                                    r20 = __cxa_allocate_exception();
                                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                                    *r20 = 0x1068ac4e8;
                                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                                    r20[0x3] = decomp_var_288;
                                                    __cxa_throw();
                                            }
                                    }
                            }
                            else {
                                    r28[0x7] = decomp_var_1d8;
                                    r2 = &decomp_var_190;
                                    r0 = sub_1015fc9e4(&decomp_var_e0, r24, r2);
                                    if ((0x100020000000 & !r20[0x7e3]) == 0x0 && r20[0x3f] == 0x0 && (r20[0x4a21] & 0x1) == 0x0) {
                                            r24 = decomp_var_1c8;
                                            if (r24 == loc_1015f5ff8() && sub_1015f632c(decomp_var_1d8) != 0x0) {
                                                    r8 = r20[0x7d1];
                                                    if (r8 != 0x0) {
                                                            sub_1011f40ac(r8 + 0x50, &decomp_var_1d8);
                                                    }
                                            }
                                    }
                                    r8 = r23[0x1];
                                    if (r8 != 0x0) {
                                            r1 = *r23;
                                            r0 = r8[0x16];
                                            r2 = &decomp_var_e0;
                                            (*(*r0 + 0x28))(r0, r1, r2);
                                    }
                                    loc_1015fcc3c();
                                    r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
                                    asm { ccmp       x8, x21, #0x2, ne };
                                    if (asm { ccmp       x8, x21, #0x2, ne }) {
                                            r8 = 0x1;
                                    }
                                    r22 = r22[0xe] - decomp_var_29c;
                                    r9 = *(int32_t *)dword_106c69d38;
                                    asm { ccmp       w22, w9, #0x0, ne };
                                    if (asm { ccmp       w22, w9, #0x0, ne }) {
                                            r9 = 0x1;
                                    }
                                    asm { ccmp       w22, w10, #0x0, ne };
                                    if (asm { ccmp       w22, w10, #0x0, ne }) {
                                            r23 = 0x1;
                                    }
                                    r11 = *r19;
                                    asm { ccmp       w11, w12, #0x0, ne };
                                    asm { ccmp       w10, w13, #0x0, ne };
                                    if (asm { ccmp       w10, w13, #0x0, ne }) {
                                            r24 = 0x1;
                                    }
                                    if (*(int8_t *)byte_106c69cf0 == 0x1) {
                                            asm { ccmp       w11, w12, #0x0, ne };
                                            if (asm { ccmp       w11, w12, #0x0, ne }) {
                                                    r11 = 0x1;
                                            }
                                            asm { ccmp       w10, w13, #0x0, ne };
                                            if (!asm { ccmp       w10, w13, #0x0, ne }) {
                                                    r10 = 0x1;
                                            }
                                            else {
                                                    r10 = r11;
                                            }
                                            if (((r8 | r9 | r10) & 0x1) != 0x0) {
                                                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                            }
                                    }
                                    else {
                                            if ((r8 | r9 | 0x1 | r24) == 0x1) {
                                                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                            }
                                    }
                                    if (*(int8_t *)byte_106c68fb8 == 0x1) {
                                            if (0x1 == 0x0) {
                                                    if (r24 == 0x0) {
                                                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                                                    if (**___stack_chk_guard != decomp_var_68) {
                                                                            __stack_chk_fail();
                                                                    }
                                                            }
                                                            else {
                                                                    r20 = __cxa_allocate_exception();
                                                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                                                    *r20 = 0x1068ac4e8;
                                                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                                                    r20[0x3] = decomp_var_288;
                                                                    __cxa_throw();
                                                            }
                                                    }
                                                    else {
                                                            r20 = __cxa_allocate_exception();
                                                            sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                                                            *r20 = 0x1068ac4e8;
                                                            *(int128_t *)(r20 + 0x8) = decomp_var_280;
                                                            r20[0x3] = decomp_var_270;
                                                            __cxa_throw();
                                                    }
                                            }
                                            else {
                                                    r20 = __cxa_allocate_exception();
                                                    sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                                                    *r20 = 0x1068ac4e8;
                                                    *(int128_t *)(r20 + 0x8) = decomp_var_268;
                                                    r20[0x3] = decomp_var_258;
                                                    __cxa_throw();
                                            }
                                    }
                                    else {
                                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                                    if (**___stack_chk_guard != decomp_var_68) {
                                                            __stack_chk_fail();
                                                    }
                                            }
                                            else {
                                                    r20 = __cxa_allocate_exception();
                                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                                    *r20 = 0x1068ac4e8;
                                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                                    r20[0x3] = decomp_var_288;
                                                    __cxa_throw();
                                            }
                                    }
                            }
                    }
                    else {
                            r28[0x7] = decomp_var_1d8;
                            r2 = &decomp_var_190;
                            r0 = sub_1015fc9e4(&decomp_var_e0, r24, r2);
                            if ((0x100020000000 & !r20[0x7e3]) == 0x0 && r20[0x3f] == 0x0 && (r20[0x4a21] & 0x1) == 0x0) {
                                    r24 = decomp_var_1c8;
                                    if (r24 == loc_1015f5ff8() && sub_1015f632c(decomp_var_1d8) != 0x0) {
                                            r8 = r20[0x7d1];
                                            if (r8 != 0x0) {
                                                    sub_1011f40ac(r8 + 0x50, &decomp_var_1d8);
                                            }
                                    }
                            }
                            r8 = r23[0x1];
                            if (r8 != 0x0) {
                                    r1 = *r23;
                                    r0 = r8[0x16];
                                    r2 = &decomp_var_e0;
                                    (*(*r0 + 0x28))(r0, r1, r2);
                            }
                            loc_1015fcc3c();
                            r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
                            asm { ccmp       x8, x21, #0x2, ne };
                            if (asm { ccmp       x8, x21, #0x2, ne }) {
                                    r8 = 0x1;
                            }
                            r22 = r22[0xe] - decomp_var_29c;
                            r9 = *(int32_t *)dword_106c69d38;
                            asm { ccmp       w22, w9, #0x0, ne };
                            if (asm { ccmp       w22, w9, #0x0, ne }) {
                                    r9 = 0x1;
                            }
                            asm { ccmp       w22, w10, #0x0, ne };
                            if (asm { ccmp       w22, w10, #0x0, ne }) {
                                    r23 = 0x1;
                            }
                            r11 = *r19;
                            asm { ccmp       w11, w12, #0x0, ne };
                            asm { ccmp       w10, w13, #0x0, ne };
                            if (asm { ccmp       w10, w13, #0x0, ne }) {
                                    r24 = 0x1;
                            }
                            if (*(int8_t *)byte_106c69cf0 == 0x1) {
                                    asm { ccmp       w11, w12, #0x0, ne };
                                    if (asm { ccmp       w11, w12, #0x0, ne }) {
                                            r11 = 0x1;
                                    }
                                    asm { ccmp       w10, w13, #0x0, ne };
                                    if (!asm { ccmp       w10, w13, #0x0, ne }) {
                                            r10 = 0x1;
                                    }
                                    else {
                                            r10 = r11;
                                    }
                                    if (((r8 | r9 | r10) & 0x1) != 0x0) {
                                            sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                            r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                            if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                    }
                            }
                            else {
                                    if ((r8 | r9 | 0x1 | r24) == 0x1) {
                                            sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                            r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                            if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                    }
                            }
                            if (*(int8_t *)byte_106c68fb8 == 0x1) {
                                    if (0x1 == 0x0) {
                                            if (r24 == 0x0) {
                                                    if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                                            if (**___stack_chk_guard != decomp_var_68) {
                                                                    __stack_chk_fail();
                                                            }
                                                    }
                                                    else {
                                                            r20 = __cxa_allocate_exception();
                                                            sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                                            *r20 = 0x1068ac4e8;
                                                            *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                                            r20[0x3] = decomp_var_288;
                                                            __cxa_throw();
                                                    }
                                            }
                                            else {
                                                    r20 = __cxa_allocate_exception();
                                                    sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                                                    *r20 = 0x1068ac4e8;
                                                    *(int128_t *)(r20 + 0x8) = decomp_var_280;
                                                    r20[0x3] = decomp_var_270;
                                                    __cxa_throw();
                                            }
                                    }
                                    else {
                                            r20 = __cxa_allocate_exception();
                                            sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                                            *r20 = 0x1068ac4e8;
                                            *(int128_t *)(r20 + 0x8) = decomp_var_268;
                                            r20[0x3] = decomp_var_258;
                                            __cxa_throw();
                                    }
                            }
                            else {
                                    if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                            if (**___stack_chk_guard != decomp_var_68) {
                                                    __stack_chk_fail();
                                            }
                                    }
                                    else {
                                            r20 = __cxa_allocate_exception();
                                            sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                            *r20 = 0x1068ac4e8;
                                            *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                            r20[0x3] = decomp_var_288;
                                            __cxa_throw();
                                    }
                            }
                    }
            }
            else {
                    decomp_var_1d8 = 0x0;
                    decomp_var_1c8 = 0x0;
                    r28[0x7] = decomp_var_1d8;
                    r2 = &decomp_var_190;
                    r0 = sub_1015fc9e4(&decomp_var_e0, r24, r2);
                    if ((0x100020000000 & !r20[0x7e3]) == 0x0 && r20[0x3f] == 0x0 && (r20[0x4a21] & 0x1) == 0x0) {
                            r24 = decomp_var_1c8;
                            if (r24 == loc_1015f5ff8() && sub_1015f632c(decomp_var_1d8) != 0x0) {
                                    r8 = r20[0x7d1];
                                    if (r8 != 0x0) {
                                            sub_1011f40ac(r8 + 0x50, &decomp_var_1d8);
                                    }
                            }
                    }
                    r8 = r23[0x1];
                    if (r8 != 0x0) {
                            r1 = *r23;
                            r0 = r8[0x16];
                            r2 = &decomp_var_e0;
                            (*(*r0 + 0x28))(r0, r1, r2);
                    }
                    loc_1015fcc3c();
                    r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
                    asm { ccmp       x8, x21, #0x2, ne };
                    if (asm { ccmp       x8, x21, #0x2, ne }) {
                            r8 = 0x1;
                    }
                    r22 = r22[0xe] - decomp_var_29c;
                    r9 = *(int32_t *)dword_106c69d38;
                    asm { ccmp       w22, w9, #0x0, ne };
                    if (asm { ccmp       w22, w9, #0x0, ne }) {
                            r9 = 0x1;
                    }
                    asm { ccmp       w22, w10, #0x0, ne };
                    if (asm { ccmp       w22, w10, #0x0, ne }) {
                            r23 = 0x1;
                    }
                    r11 = *r19;
                    asm { ccmp       w11, w12, #0x0, ne };
                    asm { ccmp       w10, w13, #0x0, ne };
                    if (asm { ccmp       w10, w13, #0x0, ne }) {
                            r24 = 0x1;
                    }
                    if (*(int8_t *)byte_106c69cf0 == 0x1) {
                            asm { ccmp       w11, w12, #0x0, ne };
                            if (asm { ccmp       w11, w12, #0x0, ne }) {
                                    r11 = 0x1;
                            }
                            asm { ccmp       w10, w13, #0x0, ne };
                            if (!asm { ccmp       w10, w13, #0x0, ne }) {
                                    r10 = 0x1;
                            }
                            else {
                                    r10 = r11;
                            }
                            if (((r8 | r9 | r10) & 0x1) != 0x0) {
                                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00();
                                    }
                            }
                    }
                    else {
                            if ((r8 | r9 | 0x1 | r24) == 0x1) {
                                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00();
                                    }
                            }
                    }
                    if (*(int8_t *)byte_106c68fb8 == 0x1) {
                            if (0x1 == 0x0) {
                                    if (r24 == 0x0) {
                                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                                    if (**___stack_chk_guard != decomp_var_68) {
                                                            __stack_chk_fail();
                                                    }
                                            }
                                            else {
                                                    r20 = __cxa_allocate_exception();
                                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                                    *r20 = 0x1068ac4e8;
                                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                                    r20[0x3] = decomp_var_288;
                                                    __cxa_throw();
                                            }
                                    }
                                    else {
                                            r20 = __cxa_allocate_exception();
                                            sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                                            *r20 = 0x1068ac4e8;
                                            *(int128_t *)(r20 + 0x8) = decomp_var_280;
                                            r20[0x3] = decomp_var_270;
                                            __cxa_throw();
                                    }
                            }
                            else {
                                    r20 = __cxa_allocate_exception();
                                    sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                                    *r20 = 0x1068ac4e8;
                                    *(int128_t *)(r20 + 0x8) = decomp_var_268;
                                    r20[0x3] = decomp_var_258;
                                    __cxa_throw();
                            }
                    }
                    else {
                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                    if (**___stack_chk_guard != decomp_var_68) {
                                            __stack_chk_fail();
                                    }
                            }
                            else {
                                    r20 = __cxa_allocate_exception();
                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                    *r20 = 0x1068ac4e8;
                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                    r20[0x3] = decomp_var_288;
                                    __cxa_throw();
                            }
                    }
            }
    }
    else {
            if (*(int8_t *)byte_106c6a860 == 0x1) {
                    if (r1 >= 0xe) {
                            if (r20[0x3f] != 0x0) {
                                    sub_1029fe0a0("Invalid LR Handle");
                            }
                            decomp_var_1d8 = 0x0;
                            decomp_var_1c8 = 0x0;
                            r28[0x7] = decomp_var_1d8;
                            r2 = &decomp_var_190;
                            r0 = sub_1015fc9e4(&decomp_var_e0, r24, r2);
                            if ((0x100020000000 & !r20[0x7e3]) == 0x0 && r20[0x3f] == 0x0 && (r20[0x4a21] & 0x1) == 0x0) {
                                    r24 = decomp_var_1c8;
                                    if (r24 == loc_1015f5ff8() && sub_1015f632c(decomp_var_1d8) != 0x0) {
                                            r8 = r20[0x7d1];
                                            if (r8 != 0x0) {
                                                    sub_1011f40ac(r8 + 0x50, &decomp_var_1d8);
                                            }
                                    }
                            }
                            r8 = r23[0x1];
                            if (r8 != 0x0) {
                                    r1 = *r23;
                                    r0 = r8[0x16];
                                    r2 = &decomp_var_e0;
                                    (*(*r0 + 0x28))(r0, r1, r2);
                            }
                            loc_1015fcc3c();
                            r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
                            asm { ccmp       x8, x21, #0x2, ne };
                            if (asm { ccmp       x8, x21, #0x2, ne }) {
                                    r8 = 0x1;
                            }
                            r22 = r22[0xe] - decomp_var_29c;
                            r9 = *(int32_t *)dword_106c69d38;
                            asm { ccmp       w22, w9, #0x0, ne };
                            if (asm { ccmp       w22, w9, #0x0, ne }) {
                                    r9 = 0x1;
                            }
                            asm { ccmp       w22, w10, #0x0, ne };
                            if (asm { ccmp       w22, w10, #0x0, ne }) {
                                    r23 = 0x1;
                            }
                            r11 = *r19;
                            asm { ccmp       w11, w12, #0x0, ne };
                            asm { ccmp       w10, w13, #0x0, ne };
                            if (asm { ccmp       w10, w13, #0x0, ne }) {
                                    r24 = 0x1;
                            }
                            if (*(int8_t *)byte_106c69cf0 == 0x1) {
                                    asm { ccmp       w11, w12, #0x0, ne };
                                    if (asm { ccmp       w11, w12, #0x0, ne }) {
                                            r11 = 0x1;
                                    }
                                    asm { ccmp       w10, w13, #0x0, ne };
                                    if (!asm { ccmp       w10, w13, #0x0, ne }) {
                                            r10 = 0x1;
                                    }
                                    else {
                                            r10 = r11;
                                    }
                                    if (((r8 | r9 | r10) & 0x1) != 0x0) {
                                            sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                            r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                            if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                    }
                            }
                            else {
                                    if ((r8 | r9 | 0x1 | r24) == 0x1) {
                                            sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                            r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                            if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                    }
                            }
                            if (*(int8_t *)byte_106c68fb8 == 0x1) {
                                    if (0x1 == 0x0) {
                                            if (r24 == 0x0) {
                                                    if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                                            if (**___stack_chk_guard != decomp_var_68) {
                                                                    __stack_chk_fail();
                                                            }
                                                    }
                                                    else {
                                                            r20 = __cxa_allocate_exception();
                                                            sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                                            *r20 = 0x1068ac4e8;
                                                            *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                                            r20[0x3] = decomp_var_288;
                                                            __cxa_throw();
                                                    }
                                            }
                                            else {
                                                    r20 = __cxa_allocate_exception();
                                                    sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                                                    *r20 = 0x1068ac4e8;
                                                    *(int128_t *)(r20 + 0x8) = decomp_var_280;
                                                    r20[0x3] = decomp_var_270;
                                                    __cxa_throw();
                                            }
                                    }
                                    else {
                                            r20 = __cxa_allocate_exception();
                                            sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                                            *r20 = 0x1068ac4e8;
                                            *(int128_t *)(r20 + 0x8) = decomp_var_268;
                                            r20[0x3] = decomp_var_258;
                                            __cxa_throw();
                                    }
                            }
                            else {
                                    if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                            if (**___stack_chk_guard != decomp_var_68) {
                                                    __stack_chk_fail();
                                            }
                                    }
                                    else {
                                            r20 = __cxa_allocate_exception();
                                            sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                            *r20 = 0x1068ac4e8;
                                            *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                            r20[0x3] = decomp_var_288;
                                            __cxa_throw();
                                    }
                            }
                    }
                    else {
                            r28[0x7] = decomp_var_1d8;
                            r2 = &decomp_var_190;
                            r0 = sub_1015fc9e4(&decomp_var_e0, r24, r2);
                            if ((0x100020000000 & !r20[0x7e3]) == 0x0 && r20[0x3f] == 0x0 && (r20[0x4a21] & 0x1) == 0x0) {
                                    r24 = decomp_var_1c8;
                                    if (r24 == loc_1015f5ff8() && sub_1015f632c(decomp_var_1d8) != 0x0) {
                                            r8 = r20[0x7d1];
                                            if (r8 != 0x0) {
                                                    sub_1011f40ac(r8 + 0x50, &decomp_var_1d8);
                                            }
                                    }
                            }
                            r8 = r23[0x1];
                            if (r8 != 0x0) {
                                    r1 = *r23;
                                    r0 = r8[0x16];
                                    r2 = &decomp_var_e0;
                                    (*(*r0 + 0x28))(r0, r1, r2);
                            }
                            loc_1015fcc3c();
                            r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
                            asm { ccmp       x8, x21, #0x2, ne };
                            if (asm { ccmp       x8, x21, #0x2, ne }) {
                                    r8 = 0x1;
                            }
                            r22 = r22[0xe] - decomp_var_29c;
                            r9 = *(int32_t *)dword_106c69d38;
                            asm { ccmp       w22, w9, #0x0, ne };
                            if (asm { ccmp       w22, w9, #0x0, ne }) {
                                    r9 = 0x1;
                            }
                            asm { ccmp       w22, w10, #0x0, ne };
                            if (asm { ccmp       w22, w10, #0x0, ne }) {
                                    r23 = 0x1;
                            }
                            r11 = *r19;
                            asm { ccmp       w11, w12, #0x0, ne };
                            asm { ccmp       w10, w13, #0x0, ne };
                            if (asm { ccmp       w10, w13, #0x0, ne }) {
                                    r24 = 0x1;
                            }
                            if (*(int8_t *)byte_106c69cf0 == 0x1) {
                                    asm { ccmp       w11, w12, #0x0, ne };
                                    if (asm { ccmp       w11, w12, #0x0, ne }) {
                                            r11 = 0x1;
                                    }
                                    asm { ccmp       w10, w13, #0x0, ne };
                                    if (!asm { ccmp       w10, w13, #0x0, ne }) {
                                            r10 = 0x1;
                                    }
                                    else {
                                            r10 = r11;
                                    }
                                    if (((r8 | r9 | r10) & 0x1) != 0x0) {
                                            sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                            r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                            if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                    }
                            }
                            else {
                                    if ((r8 | r9 | 0x1 | r24) == 0x1) {
                                            sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                            r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                            if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                    }
                            }
                            if (*(int8_t *)byte_106c68fb8 == 0x1) {
                                    if (0x1 == 0x0) {
                                            if (r24 == 0x0) {
                                                    if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                                            if (**___stack_chk_guard != decomp_var_68) {
                                                                    __stack_chk_fail();
                                                            }
                                                    }
                                                    else {
                                                            r20 = __cxa_allocate_exception();
                                                            sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                                            *r20 = 0x1068ac4e8;
                                                            *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                                            r20[0x3] = decomp_var_288;
                                                            __cxa_throw();
                                                    }
                                            }
                                            else {
                                                    r20 = __cxa_allocate_exception();
                                                    sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                                                    *r20 = 0x1068ac4e8;
                                                    *(int128_t *)(r20 + 0x8) = decomp_var_280;
                                                    r20[0x3] = decomp_var_270;
                                                    __cxa_throw();
                                            }
                                    }
                                    else {
                                            r20 = __cxa_allocate_exception();
                                            sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                                            *r20 = 0x1068ac4e8;
                                            *(int128_t *)(r20 + 0x8) = decomp_var_268;
                                            r20[0x3] = decomp_var_258;
                                            __cxa_throw();
                                    }
                            }
                            else {
                                    if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                            if (**___stack_chk_guard != decomp_var_68) {
                                                    __stack_chk_fail();
                                            }
                                    }
                                    else {
                                            r20 = __cxa_allocate_exception();
                                            sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                            *r20 = 0x1068ac4e8;
                                            *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                            r20[0x3] = decomp_var_288;
                                            __cxa_throw();
                                    }
                            }
                    }
            }
            else {
                    r28[0x7] = decomp_var_1d8;
                    r2 = &decomp_var_190;
                    r0 = sub_1015fc9e4(&decomp_var_e0, r24, r2);
                    if ((0x100020000000 & !r20[0x7e3]) == 0x0 && r20[0x3f] == 0x0 && (r20[0x4a21] & 0x1) == 0x0) {
                            r24 = decomp_var_1c8;
                            if (r24 == loc_1015f5ff8() && sub_1015f632c(decomp_var_1d8) != 0x0) {
                                    r8 = r20[0x7d1];
                                    if (r8 != 0x0) {
                                            sub_1011f40ac(r8 + 0x50, &decomp_var_1d8);
                                    }
                            }
                    }
                    r8 = r23[0x1];
                    if (r8 != 0x0) {
                            r1 = *r23;
                            r0 = r8[0x16];
                            r2 = &decomp_var_e0;
                            (*(*r0 + 0x28))(r0, r1, r2);
                    }
                    loc_1015fcc3c();
                    r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
                    asm { ccmp       x8, x21, #0x2, ne };
                    if (asm { ccmp       x8, x21, #0x2, ne }) {
                            r8 = 0x1;
                    }
                    r22 = r22[0xe] - decomp_var_29c;
                    r9 = *(int32_t *)dword_106c69d38;
                    asm { ccmp       w22, w9, #0x0, ne };
                    if (asm { ccmp       w22, w9, #0x0, ne }) {
                            r9 = 0x1;
                    }
                    asm { ccmp       w22, w10, #0x0, ne };
                    if (asm { ccmp       w22, w10, #0x0, ne }) {
                            r23 = 0x1;
                    }
                    r11 = *r19;
                    asm { ccmp       w11, w12, #0x0, ne };
                    asm { ccmp       w10, w13, #0x0, ne };
                    if (asm { ccmp       w10, w13, #0x0, ne }) {
                            r24 = 0x1;
                    }
                    if (*(int8_t *)byte_106c69cf0 == 0x1) {
                            asm { ccmp       w11, w12, #0x0, ne };
                            if (asm { ccmp       w11, w12, #0x0, ne }) {
                                    r11 = 0x1;
                            }
                            asm { ccmp       w10, w13, #0x0, ne };
                            if (!asm { ccmp       w10, w13, #0x0, ne }) {
                                    r10 = 0x1;
                            }
                            else {
                                    r10 = r11;
                            }
                            if (((r8 | r9 | r10) & 0x1) != 0x0) {
                                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00();
                                    }
                            }
                    }
                    else {
                            if ((r8 | r9 | 0x1 | r24) == 0x1) {
                                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00();
                                    }
                            }
                    }
                    if (*(int8_t *)byte_106c68fb8 == 0x1) {
                            if (0x1 == 0x0) {
                                    if (r24 == 0x0) {
                                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                                    if (**___stack_chk_guard != decomp_var_68) {
                                                            __stack_chk_fail();
                                                    }
                                            }
                                            else {
                                                    r20 = __cxa_allocate_exception();
                                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                                    *r20 = 0x1068ac4e8;
                                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                                    r20[0x3] = decomp_var_288;
                                                    __cxa_throw();
                                            }
                                    }
                                    else {
                                            r20 = __cxa_allocate_exception();
                                            sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                                            *r20 = 0x1068ac4e8;
                                            *(int128_t *)(r20 + 0x8) = decomp_var_280;
                                            r20[0x3] = decomp_var_270;
                                            __cxa_throw();
                                    }
                            }
                            else {
                                    r20 = __cxa_allocate_exception();
                                    sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                                    *r20 = 0x1068ac4e8;
                                    *(int128_t *)(r20 + 0x8) = decomp_var_268;
                                    r20[0x3] = decomp_var_258;
                                    __cxa_throw();
                            }
                    }
                    else {
                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                    if (**___stack_chk_guard != decomp_var_68) {
                                            __stack_chk_fail();
                                    }
                            }
                            else {
                                    r20 = __cxa_allocate_exception();
                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                    *r20 = 0x1068ac4e8;
                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                    r20[0x3] = decomp_var_288;
                                    __cxa_throw();
                            }
                    }
            }
    }
    return;

loc_104e326c8:
    if (r8 == 0x2) goto loc_104e32a2c;
    goto loc_104e326d0;

loc_104e3215c:
    if (r8 == 0x0) goto loc_104e329fc;
    goto loc_104e32160;

loc_104e3206c:
    sub_1029ffb44(&decomp_var_e0);
    r0 = sub_104fabfc8(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto .l219;

.l320:
    if (index_0 == 0x3a) goto loc_104e310a8;
    goto .l321;

.l232:
    r28[0x7] = decomp_var_1d8;
    r2 = &decomp_var_190;
    r0 = sub_1015fc9e4(&decomp_var_e0, r24, r2);
    if ((0x100020000000 & !r20[0x7e3]) == 0x0 && r20[0x3f] == 0x0 && (r20[0x4a21] & 0x1) == 0x0) {
            r24 = decomp_var_1c8;
            if (r24 == loc_1015f5ff8() && sub_1015f632c(decomp_var_1d8) != 0x0) {
                    r8 = r20[0x7d1];
                    if (r8 != 0x0) {
                            sub_1011f40ac(r8 + 0x50, &decomp_var_1d8);
                    }
            }
    }
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    loc_1015fcc3c();
    r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
    asm { ccmp       x8, x21, #0x2, ne };
    if (asm { ccmp       x8, x21, #0x2, ne }) {
            r8 = 0x1;
    }
    r22 = r22[0xe] - decomp_var_29c;
    r9 = *(int32_t *)dword_106c69d38;
    asm { ccmp       w22, w9, #0x0, ne };
    if (asm { ccmp       w22, w9, #0x0, ne }) {
            r9 = 0x1;
    }
    asm { ccmp       w22, w10, #0x0, ne };
    if (asm { ccmp       w22, w10, #0x0, ne }) {
            r23 = 0x1;
    }
    r11 = *r19;
    asm { ccmp       w11, w12, #0x0, ne };
    asm { ccmp       w10, w13, #0x0, ne };
    if (asm { ccmp       w10, w13, #0x0, ne }) {
            r24 = 0x1;
    }
    if (*(int8_t *)byte_106c69cf0 == 0x1) {
            asm { ccmp       w11, w12, #0x0, ne };
            if (asm { ccmp       w11, w12, #0x0, ne }) {
                    r11 = 0x1;
            }
            asm { ccmp       w10, w13, #0x0, ne };
            if (!asm { ccmp       w10, w13, #0x0, ne }) {
                    r10 = 0x1;
            }
            else {
                    r10 = r11;
            }
            if (((r8 | r9 | r10) & 0x1) != 0x0) {
                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
    }
    else {
            if ((r8 | r9 | 0x1 | r24) == 0x1) {
                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
    }
    if (*(int8_t *)byte_106c68fb8 == 0x1) {
            if (0x1 == 0x0) {
                    if (r24 == 0x0) {
                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                    if (**___stack_chk_guard != decomp_var_68) {
                                            __stack_chk_fail();
                                    }
                            }
                            else {
                                    r20 = __cxa_allocate_exception();
                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                    *r20 = 0x1068ac4e8;
                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                    r20[0x3] = decomp_var_288;
                                    __cxa_throw();
                            }
                    }
                    else {
                            r20 = __cxa_allocate_exception();
                            sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                            *r20 = 0x1068ac4e8;
                            *(int128_t *)(r20 + 0x8) = decomp_var_280;
                            r20[0x3] = decomp_var_270;
                            __cxa_throw();
                    }
            }
            else {
                    r20 = __cxa_allocate_exception();
                    sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                    *r20 = 0x1068ac4e8;
                    *(int128_t *)(r20 + 0x8) = decomp_var_268;
                    r20[0x3] = decomp_var_258;
                    __cxa_throw();
            }
    }
    else {
            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                    if (**___stack_chk_guard != decomp_var_68) {
                            __stack_chk_fail();
                    }
            }
            else {
                    r20 = __cxa_allocate_exception();
                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                    *r20 = 0x1068ac4e8;
                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                    r20[0x3] = decomp_var_288;
                    __cxa_throw();
            }
    }
    return;

loc_104e32880:
    if (r1 < 0xe) goto .l233;
    goto loc_104e32888;

loc_104e32a2c:
    if (r24 != 0x0) {
            sub_104e34bc0(&decomp_var_1d8);
    }
    else {
            r0 = sub_104d65488(r20, r22);
            r2 = r20;
            sub_104e34d64(&decomp_var_190, r0, r2);
            *(int128_t *)r28 = r28[0x7];
            decomp_var_190 = 0x0;
            r0 = sub_10091802c(&decomp_var_e0, &decomp_var_200);
            r8 = r23[0x1];
            if (r8 != 0x0) {
                    r1 = *r23;
                    r0 = r8[0x16];
                    r2 = &decomp_var_e0;
                    (*(*r0 + 0x28))(r0, r1, r2);
            }
            loc_100917a00();
            sub_100005114(&decomp_var_200);
            r0 = &decomp_var_190;
            sub_100005114(r0);
    }
    r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
    asm { ccmp       x8, x21, #0x2, ne };
    if (asm { ccmp       x8, x21, #0x2, ne }) {
            r8 = 0x1;
    }
    r22 = r22[0xe] - decomp_var_29c;
    r9 = *(int32_t *)dword_106c69d38;
    asm { ccmp       w22, w9, #0x0, ne };
    if (asm { ccmp       w22, w9, #0x0, ne }) {
            r9 = 0x1;
    }
    asm { ccmp       w22, w10, #0x0, ne };
    if (asm { ccmp       w22, w10, #0x0, ne }) {
            r23 = 0x1;
    }
    r11 = *r19;
    asm { ccmp       w11, w12, #0x0, ne };
    if (asm { ccmp       w11, w12, #0x0, ne }) {
            r25 = 0x1;
    }
    asm { ccmp       w10, w13, #0x0, ne };
    if (asm { ccmp       w10, w13, #0x0, ne }) {
            r24 = 0x1;
    }
    if (*(int8_t *)byte_106c69cf0 == 0x1) {
            asm { ccmp       w11, w12, #0x0, ne };
            if (asm { ccmp       w11, w12, #0x0, ne }) {
                    r11 = 0x1;
            }
            asm { ccmp       w10, w13, #0x0, ne };
            if (!asm { ccmp       w10, w13, #0x0, ne }) {
                    r10 = 0x1;
            }
            else {
                    r10 = r11;
            }
            if (((r8 | r9 | r10) & 0x1) != 0x0) {
                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
    }
    else {
            if ((r8 | r9 | r25 | r24) == 0x1) {
                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
    }
    if (*(int8_t *)byte_106c68fb8 == 0x1) {
            if (r25 == 0x0) {
                    if (r24 == 0x0) {
                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                    if (**___stack_chk_guard != decomp_var_68) {
                                            __stack_chk_fail();
                                    }
                            }
                            else {
                                    r20 = __cxa_allocate_exception();
                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                    *r20 = 0x1068ac4e8;
                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                    r20[0x3] = decomp_var_288;
                                    __cxa_throw();
                            }
                    }
                    else {
                            r20 = __cxa_allocate_exception();
                            sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                            *r20 = 0x1068ac4e8;
                            *(int128_t *)(r20 + 0x8) = decomp_var_280;
                            r20[0x3] = decomp_var_270;
                            __cxa_throw();
                    }
            }
            else {
                    r20 = __cxa_allocate_exception();
                    sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                    *r20 = 0x1068ac4e8;
                    *(int128_t *)(r20 + 0x8) = decomp_var_268;
                    r20[0x3] = decomp_var_258;
                    __cxa_throw();
            }
    }
    else {
            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                    if (**___stack_chk_guard != decomp_var_68) {
                            __stack_chk_fail();
                    }
            }
            else {
                    r20 = __cxa_allocate_exception();
                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                    *r20 = 0x1068ac4e8;
                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                    r20[0x3] = decomp_var_288;
                    __cxa_throw();
            }
    }
    return;

loc_104e326d0:
    if (r8 != 0x3) goto .l1;
    goto loc_104e326d8;

loc_104e329fc:
    decomp_var_e0 = 0x0;
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    loc_100917a00();
    r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
    asm { ccmp       x8, x21, #0x2, ne };
    if (asm { ccmp       x8, x21, #0x2, ne }) {
            r8 = 0x1;
    }
    r22 = r22[0xe] - decomp_var_29c;
    r9 = *(int32_t *)dword_106c69d38;
    asm { ccmp       w22, w9, #0x0, ne };
    if (asm { ccmp       w22, w9, #0x0, ne }) {
            r9 = 0x1;
    }
    asm { ccmp       w22, w10, #0x0, ne };
    if (asm { ccmp       w22, w10, #0x0, ne }) {
            r23 = 0x1;
    }
    r11 = *r19;
    asm { ccmp       w11, w12, #0x0, ne };
    if (asm { ccmp       w11, w12, #0x0, ne }) {
            r25 = 0x1;
    }
    asm { ccmp       w10, w13, #0x0, ne };
    if (asm { ccmp       w10, w13, #0x0, ne }) {
            r24 = 0x1;
    }
    if (*(int8_t *)byte_106c69cf0 == 0x1) {
            asm { ccmp       w11, w12, #0x0, ne };
            if (asm { ccmp       w11, w12, #0x0, ne }) {
                    r11 = 0x1;
            }
            asm { ccmp       w10, w13, #0x0, ne };
            if (!asm { ccmp       w10, w13, #0x0, ne }) {
                    r10 = 0x1;
            }
            else {
                    r10 = r11;
            }
            if (((r8 | r9 | r10) & 0x1) != 0x0) {
                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
    }
    else {
            if ((r8 | r9 | r25 | r24) == 0x1) {
                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
    }
    if (*(int8_t *)byte_106c68fb8 == 0x1) {
            if (r25 == 0x0) {
                    if (r24 == 0x0) {
                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                    if (**___stack_chk_guard != decomp_var_68) {
                                            __stack_chk_fail();
                                    }
                            }
                            else {
                                    r20 = __cxa_allocate_exception();
                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                    *r20 = 0x1068ac4e8;
                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                    r20[0x3] = decomp_var_288;
                                    __cxa_throw();
                            }
                    }
                    else {
                            r20 = __cxa_allocate_exception();
                            sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                            *r20 = 0x1068ac4e8;
                            *(int128_t *)(r20 + 0x8) = decomp_var_280;
                            r20[0x3] = decomp_var_270;
                            __cxa_throw();
                    }
            }
            else {
                    r20 = __cxa_allocate_exception();
                    sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                    *r20 = 0x1068ac4e8;
                    *(int128_t *)(r20 + 0x8) = decomp_var_268;
                    r20[0x3] = decomp_var_258;
                    __cxa_throw();
            }
    }
    else {
            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                    if (**___stack_chk_guard != decomp_var_68) {
                            __stack_chk_fail();
                    }
            }
            else {
                    r20 = __cxa_allocate_exception();
                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                    *r20 = 0x1068ac4e8;
                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                    r20[0x3] = decomp_var_288;
                    __cxa_throw();
            }
    }
    return;

loc_104e32160:
    if (r8 != 0x1) goto loc_104e330e8;
    goto loc_104e32168;

loc_104e310a8:
    r27[0x2] = q0;
    r27[0x4] = q0;
    *(int128_t *)r27 = q0;
    r0 = sub_104fb2638(r22, &decomp_var_e0, r2);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    r0 = sub_100043468(&decomp_var_e0);
    goto .l219;

.l321:
    if (index_0 == 0x3b) goto loc_104e30dac;
    goto .l322;

.l233:
    r28[0x7] = decomp_var_1d8;
    r2 = &decomp_var_190;
    r0 = sub_1015fc9e4(&decomp_var_e0, r24, r2);
    if ((0x100020000000 & !r20[0x7e3]) == 0x0 && r20[0x3f] == 0x0 && (r20[0x4a21] & 0x1) == 0x0) {
            r24 = decomp_var_1c8;
            if (r24 == loc_1015f5ff8() && sub_1015f632c(decomp_var_1d8) != 0x0) {
                    r8 = r20[0x7d1];
                    if (r8 != 0x0) {
                            sub_1011f40ac(r8 + 0x50, &decomp_var_1d8);
                    }
            }
    }
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    loc_1015fcc3c();
    r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
    asm { ccmp       x8, x21, #0x2, ne };
    if (asm { ccmp       x8, x21, #0x2, ne }) {
            r8 = 0x1;
    }
    r22 = r22[0xe] - decomp_var_29c;
    r9 = *(int32_t *)dword_106c69d38;
    asm { ccmp       w22, w9, #0x0, ne };
    if (asm { ccmp       w22, w9, #0x0, ne }) {
            r9 = 0x1;
    }
    asm { ccmp       w22, w10, #0x0, ne };
    if (asm { ccmp       w22, w10, #0x0, ne }) {
            r23 = 0x1;
    }
    r11 = *r19;
    asm { ccmp       w11, w12, #0x0, ne };
    asm { ccmp       w10, w13, #0x0, ne };
    if (asm { ccmp       w10, w13, #0x0, ne }) {
            r24 = 0x1;
    }
    if (*(int8_t *)byte_106c69cf0 == 0x1) {
            asm { ccmp       w11, w12, #0x0, ne };
            if (asm { ccmp       w11, w12, #0x0, ne }) {
                    r11 = 0x1;
            }
            asm { ccmp       w10, w13, #0x0, ne };
            if (!asm { ccmp       w10, w13, #0x0, ne }) {
                    r10 = 0x1;
            }
            else {
                    r10 = r11;
            }
            if (((r8 | r9 | r10) & 0x1) != 0x0) {
                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
    }
    else {
            if ((r8 | r9 | 0x1 | r24) == 0x1) {
                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
    }
    if (*(int8_t *)byte_106c68fb8 == 0x1) {
            if (0x1 == 0x0) {
                    if (r24 == 0x0) {
                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                    if (**___stack_chk_guard != decomp_var_68) {
                                            __stack_chk_fail();
                                    }
                            }
                            else {
                                    r20 = __cxa_allocate_exception();
                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                    *r20 = 0x1068ac4e8;
                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                    r20[0x3] = decomp_var_288;
                                    __cxa_throw();
                            }
                    }
                    else {
                            r20 = __cxa_allocate_exception();
                            sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                            *r20 = 0x1068ac4e8;
                            *(int128_t *)(r20 + 0x8) = decomp_var_280;
                            r20[0x3] = decomp_var_270;
                            __cxa_throw();
                    }
            }
            else {
                    r20 = __cxa_allocate_exception();
                    sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                    *r20 = 0x1068ac4e8;
                    *(int128_t *)(r20 + 0x8) = decomp_var_268;
                    r20[0x3] = decomp_var_258;
                    __cxa_throw();
            }
    }
    else {
            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                    if (**___stack_chk_guard != decomp_var_68) {
                            __stack_chk_fail();
                    }
            }
            else {
                    r20 = __cxa_allocate_exception();
                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                    *r20 = 0x1068ac4e8;
                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                    r20[0x3] = decomp_var_288;
                    __cxa_throw();
            }
    }
    return;

loc_104e32888:
    if (r20[0x3f] != 0x0) {
            sub_1029fe0a0("Invalid LR Handle");
    }
    decomp_var_1d8 = 0x0;
    decomp_var_1c8 = 0x0;
    r28[0x7] = decomp_var_1d8;
    r2 = &decomp_var_190;
    r0 = sub_1015fc9e4(&decomp_var_e0, r24, r2);
    if ((0x100020000000 & !r20[0x7e3]) == 0x0 && r20[0x3f] == 0x0 && (r20[0x4a21] & 0x1) == 0x0) {
            r24 = decomp_var_1c8;
            if (r24 == loc_1015f5ff8() && sub_1015f632c(decomp_var_1d8) != 0x0) {
                    r8 = r20[0x7d1];
                    if (r8 != 0x0) {
                            sub_1011f40ac(r8 + 0x50, &decomp_var_1d8);
                    }
            }
    }
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    loc_1015fcc3c();
    goto .l219;

.l1:
    __cxa_allocate_exception();
    sub_1029fdf64("Cannot read Content value: unhandled SourceType");
    __cxa_throw();
    return;

loc_104e326d8:
    r24 = sub_103bfa44c();
    r2 = r25;
    sub_104e344ac(r20, r22);
    if (*(int8_t *)byte_106c6abf0 != 0x1) goto loc_104e32aac;
    goto loc_104e32704;

loc_104e330e8:
    __cxa_allocate_exception();
    sub_1029fdf64("Cannot read Content value: unhandled SourceType");
    __cxa_throw();
    return;

loc_104e32168:
    r2 = r25;
    sub_104e344ac(r20, r22);
    r0 = sub_100917ec4(&decomp_var_e0, &decomp_var_1f0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    loc_100917a00();
    if ((sign_extend_64(decomp_var_1d9) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    goto .l219;

loc_104e30dac:
    decomp_var_e0 = 0x0;
    r0 = sub_104faca10(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    goto .l219;

.l322:
    if (index_0 == 0x3c) goto loc_104e310ec;
    goto .l323;

loc_104e32aac:
    if (r24 != 0x0) {
            r0 = r24[0x3];
    }
    else {
            r0 = 0x0;
    }
    r0 = sub_103dac9f4(r0, &decomp_var_190);
    decomp_var_220 = 0x0;
    decomp_var_218 = 0x0;
    if (decomp_var_d8 != 0x0) {
            r0 = std::__1::__shared_weak_count::lock();
            decomp_var_218 = r0;
            if (r0 != 0x0) {
                    decomp_var_220 = decomp_var_e0;
            }
            if (decomp_var_d8 != 0x0) {
                    std::__1::__shared_weak_count::__release_weak();
            }
            r8 = decomp_var_220;
            if (r8 != 0x0) {
                    decomp_var_230 = r8;
                    decomp_var_220 = 0x0;
                    r0 = sub_100918064(&decomp_var_e0, &decomp_var_230);
                    r8 = r23[0x1];
                    if (r8 != 0x0) {
                            r1 = *r23;
                            r0 = r8[0x16];
                            r2 = &decomp_var_e0;
                            (*(*r0 + 0x28))(r0, r1, r2);
                    }
                    loc_100917a00();
                    r0 = &decomp_var_230;
            }
            else {
                    r0 = sub_10404987c(&decomp_var_e1, &decomp_var_190);
                    r0 = sub_100007a1c(&decomp_var_220, &decomp_var_e0);
                    r0 = sub_100005114(&decomp_var_e0);
                    if (r24 != 0x0) {
                            r0 = r24[0x3];
                    }
                    else {
                            r0 = 0x0;
                    }
                    r8 = decomp_var_218;
                    decomp_var_240 = decomp_var_220;
                    decomp_var_238 = r8;
                    if (r8 != 0x0) {
                            asm { ldadd      x9, x8, [x8] };
                    }
                    r2 = &decomp_var_240;
                    r0 = sub_103dacac4(r0, &decomp_var_190, r2);
                    if (decomp_var_238 != 0x0) {
                            std::__1::__shared_weak_count::__release_weak();
                    }
                    decomp_var_250 = decomp_var_220;
                    decomp_var_220 = 0x0;
                    r0 = sub_100918064(&decomp_var_e0, &decomp_var_250);
                    r8 = r23[0x1];
                    if (r8 != 0x0) {
                            r1 = *r23;
                            r0 = r8[0x16];
                            r2 = &decomp_var_e0;
                            (*(*r0 + 0x28))(r0, r1, r2);
                    }
                    loc_100917a00();
                    r0 = &decomp_var_250;
            }
    }
    else {
            r0 = sub_10404987c(&decomp_var_e1, &decomp_var_190);
            r0 = sub_100007a1c(&decomp_var_220, &decomp_var_e0);
            r0 = sub_100005114(&decomp_var_e0);
            if (r24 != 0x0) {
                    r0 = r24[0x3];
            }
            else {
                    r0 = 0x0;
            }
            r8 = decomp_var_218;
            decomp_var_240 = decomp_var_220;
            decomp_var_238 = r8;
            if (r8 != 0x0) {
                    asm { ldadd      x9, x8, [x8] };
            }
            r2 = &decomp_var_240;
            r0 = sub_103dacac4(r0, &decomp_var_190, r2);
            if (decomp_var_238 != 0x0) {
                    std::__1::__shared_weak_count::__release_weak();
            }
            decomp_var_250 = decomp_var_220;
            decomp_var_220 = 0x0;
            r0 = sub_100918064(&decomp_var_e0, &decomp_var_250);
            r8 = r23[0x1];
            if (r8 != 0x0) {
                    r1 = *r23;
                    r0 = r8[0x16];
                    r2 = &decomp_var_e0;
                    (*(*r0 + 0x28))(r0, r1, r2);
            }
            loc_100917a00();
            r0 = &decomp_var_250;
    }
    sub_100005114(r0);
    r0 = &decomp_var_220;
    goto loc_104e32e44;

loc_104e32704:
    r8 = decomp_var_179;
    r10 = decomp_var_190;
    r11 = decomp_var_188;
    bool_9964 = r9 < 0x0;
    r9 = &decomp_var_190;
    if (sign_extend_64(r8) >= 0x0) {
            r0 = r9;
    }
    else {
            r0 = r10;
    }
    if (!bool_9964) {
            r1 = r8;
    }
    else {
            r1 = r11;
    }
    if (sub_104032164(r0, r1) == 0x0) goto loc_104e32c8c;
    goto loc_104e32728;

loc_104e310ec:
    decomp_var_e0 = 0x0;
    r0 = sub_104fac940(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
    asm { ccmp       x8, x21, #0x2, ne };
    if (asm { ccmp       x8, x21, #0x2, ne }) {
            r8 = 0x1;
    }
    r22 = r22[0xe] - decomp_var_29c;
    r9 = *(int32_t *)dword_106c69d38;
    asm { ccmp       w22, w9, #0x0, ne };
    if (asm { ccmp       w22, w9, #0x0, ne }) {
            r9 = 0x1;
    }
    asm { ccmp       w22, w10, #0x0, ne };
    if (asm { ccmp       w22, w10, #0x0, ne }) {
            r23 = 0x1;
    }
    r11 = *r19;
    asm { ccmp       w11, w12, #0x0, ne };
    if (asm { ccmp       w11, w12, #0x0, ne }) {
            r25 = 0x1;
    }
    asm { ccmp       w10, w13, #0x0, ne };
    if (asm { ccmp       w10, w13, #0x0, ne }) {
            r24 = 0x1;
    }
    if (*(int8_t *)byte_106c69cf0 == 0x1) {
            asm { ccmp       w11, w12, #0x0, ne };
            if (asm { ccmp       w11, w12, #0x0, ne }) {
                    r11 = 0x1;
            }
            asm { ccmp       w10, w13, #0x0, ne };
            if (!asm { ccmp       w10, w13, #0x0, ne }) {
                    r10 = 0x1;
            }
            else {
                    r10 = r11;
            }
            if (((r8 | r9 | r10) & 0x1) != 0x0) {
                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
    }
    else {
            if ((r8 | r9 | r25 | r24) == 0x1) {
                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
    }
    if (*(int8_t *)byte_106c68fb8 == 0x1) {
            if (r25 == 0x0) {
                    if (r24 == 0x0) {
                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                    if (**___stack_chk_guard != decomp_var_68) {
                                            __stack_chk_fail();
                                    }
                            }
                            else {
                                    r20 = __cxa_allocate_exception();
                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                    *r20 = 0x1068ac4e8;
                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                    r20[0x3] = decomp_var_288;
                                    __cxa_throw();
                            }
                    }
                    else {
                            r20 = __cxa_allocate_exception();
                            sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                            *r20 = 0x1068ac4e8;
                            *(int128_t *)(r20 + 0x8) = decomp_var_280;
                            r20[0x3] = decomp_var_270;
                            __cxa_throw();
                    }
            }
            else {
                    r20 = __cxa_allocate_exception();
                    sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                    *r20 = 0x1068ac4e8;
                    *(int128_t *)(r20 + 0x8) = decomp_var_268;
                    r20[0x3] = decomp_var_258;
                    __cxa_throw();
            }
    }
    else {
            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                    if (**___stack_chk_guard != decomp_var_68) {
                            __stack_chk_fail();
                    }
            }
            else {
                    r20 = __cxa_allocate_exception();
                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                    *r20 = 0x1068ac4e8;
                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                    r20[0x3] = decomp_var_288;
                    __cxa_throw();
            }
    }
    return;

.l323:
    if (index_0 == 0x3d) goto loc_104e30de8;
    goto .l324;

loc_104e32e44:
    sub_100005114(r0);
    goto loc_104e32e48;

loc_104e32c8c:
    decomp_var_e0 = 0x0;
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    loc_100917a00();
    goto loc_104e32e48;

loc_104e32728:
    if (r24 != 0x0) {
            r0 = r24[0x3];
    }
    else {
            r0 = 0x0;
    }
    r0 = sub_103dace28(r0, &decomp_var_190);
    r0 = sub_100918064(&decomp_var_e0, &decomp_var_210);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    loc_100917a00();
    r0 = &decomp_var_210;
    goto loc_104e32e44;

loc_104e30de8:
    decomp_var_e0 = 0x0;
    r0 = sub_104facaec(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
    asm { ccmp       x8, x21, #0x2, ne };
    if (asm { ccmp       x8, x21, #0x2, ne }) {
            r8 = 0x1;
    }
    r22 = r22[0xe] - decomp_var_29c;
    r9 = *(int32_t *)dword_106c69d38;
    asm { ccmp       w22, w9, #0x0, ne };
    if (asm { ccmp       w22, w9, #0x0, ne }) {
            r9 = 0x1;
    }
    asm { ccmp       w22, w10, #0x0, ne };
    if (asm { ccmp       w22, w10, #0x0, ne }) {
            r23 = 0x1;
    }
    r11 = *r19;
    asm { ccmp       w11, w12, #0x0, ne };
    if (asm { ccmp       w11, w12, #0x0, ne }) {
            r25 = 0x1;
    }
    asm { ccmp       w10, w13, #0x0, ne };
    if (asm { ccmp       w10, w13, #0x0, ne }) {
            r24 = 0x1;
    }
    if (*(int8_t *)byte_106c69cf0 == 0x1) {
            asm { ccmp       w11, w12, #0x0, ne };
            if (asm { ccmp       w11, w12, #0x0, ne }) {
                    r11 = 0x1;
            }
            asm { ccmp       w10, w13, #0x0, ne };
            if (!asm { ccmp       w10, w13, #0x0, ne }) {
                    r10 = 0x1;
            }
            else {
                    r10 = r11;
            }
            if (((r8 | r9 | r10) & 0x1) != 0x0) {
                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
    }
    else {
            if ((r8 | r9 | r25 | r24) == 0x1) {
                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
    }
    if (*(int8_t *)byte_106c68fb8 == 0x1) {
            if (r25 == 0x0) {
                    if (r24 == 0x0) {
                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                    if (**___stack_chk_guard != decomp_var_68) {
                                            __stack_chk_fail();
                                    }
                            }
                            else {
                                    r20 = __cxa_allocate_exception();
                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                    *r20 = 0x1068ac4e8;
                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                    r20[0x3] = decomp_var_288;
                                    __cxa_throw();
                            }
                    }
                    else {
                            r20 = __cxa_allocate_exception();
                            sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                            *r20 = 0x1068ac4e8;
                            *(int128_t *)(r20 + 0x8) = decomp_var_280;
                            r20[0x3] = decomp_var_270;
                            __cxa_throw();
                    }
            }
            else {
                    r20 = __cxa_allocate_exception();
                    sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                    *r20 = 0x1068ac4e8;
                    *(int128_t *)(r20 + 0x8) = decomp_var_268;
                    r20[0x3] = decomp_var_258;
                    __cxa_throw();
            }
    }
    else {
            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                    if (**___stack_chk_guard != decomp_var_68) {
                            __stack_chk_fail();
                    }
            }
            else {
                    r20 = __cxa_allocate_exception();
                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                    *r20 = 0x1068ac4e8;
                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                    r20[0x3] = decomp_var_288;
                    __cxa_throw();
            }
    }
    return;

.l324:
    if (index_0 == 0x3e) goto loc_104e30fd4;
    goto .l325;

loc_104e32e48:
    if ((sign_extend_64(decomp_var_179) & 0xffffffff80000000) != 0x0) {
            loc_1029f6b00();
    }
    if (r24 != 0x0) {
            (*(*r24 + 0x10))(r24);
    }
    r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
    asm { ccmp       x8, x21, #0x2, ne };
    if (asm { ccmp       x8, x21, #0x2, ne }) {
            r8 = 0x1;
    }
    r22 = r22[0xe] - decomp_var_29c;
    r9 = *(int32_t *)dword_106c69d38;
    asm { ccmp       w22, w9, #0x0, ne };
    if (asm { ccmp       w22, w9, #0x0, ne }) {
            r9 = 0x1;
    }
    asm { ccmp       w22, w10, #0x0, ne };
    if (asm { ccmp       w22, w10, #0x0, ne }) {
            r23 = 0x1;
    }
    r11 = *r19;
    asm { ccmp       w11, w12, #0x0, ne };
    if (asm { ccmp       w11, w12, #0x0, ne }) {
            r25 = 0x1;
    }
    asm { ccmp       w10, w13, #0x0, ne };
    if (asm { ccmp       w10, w13, #0x0, ne }) {
            r24 = 0x1;
    }
    if (*(int8_t *)byte_106c69cf0 == 0x1) {
            asm { ccmp       w11, w12, #0x0, ne };
            if (asm { ccmp       w11, w12, #0x0, ne }) {
                    r11 = 0x1;
            }
            asm { ccmp       w10, w13, #0x0, ne };
            if (!asm { ccmp       w10, w13, #0x0, ne }) {
                    r10 = 0x1;
            }
            else {
                    r10 = r11;
            }
            if (((r8 | r9 | r10) & 0x1) != 0x0) {
                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
    }
    else {
            if ((r8 | r9 | r25 | r24) == 0x1) {
                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
    }
    if (*(int8_t *)byte_106c68fb8 == 0x1) {
            if (r25 == 0x0) {
                    if (r24 == 0x0) {
                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                    if (**___stack_chk_guard != decomp_var_68) {
                                            __stack_chk_fail();
                                    }
                            }
                            else {
                                    r20 = __cxa_allocate_exception();
                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                    *r20 = 0x1068ac4e8;
                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                    r20[0x3] = decomp_var_288;
                                    __cxa_throw();
                            }
                    }
                    else {
                            r20 = __cxa_allocate_exception();
                            sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                            *r20 = 0x1068ac4e8;
                            *(int128_t *)(r20 + 0x8) = decomp_var_280;
                            r20[0x3] = decomp_var_270;
                            __cxa_throw();
                    }
            }
            else {
                    r20 = __cxa_allocate_exception();
                    sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                    *r20 = 0x1068ac4e8;
                    *(int128_t *)(r20 + 0x8) = decomp_var_268;
                    r20[0x3] = decomp_var_258;
                    __cxa_throw();
            }
    }
    else {
            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                    if (**___stack_chk_guard != decomp_var_68) {
                            __stack_chk_fail();
                    }
            }
            else {
                    r20 = __cxa_allocate_exception();
                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                    *r20 = 0x1068ac4e8;
                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                    r20[0x3] = decomp_var_288;
                    __cxa_throw();
            }
    }
    return;

loc_104e30fd4:
    decomp_var_e0 = 0x0;
    r0 = sub_104faa640(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
    asm { ccmp       x8, x21, #0x2, ne };
    if (asm { ccmp       x8, x21, #0x2, ne }) {
            r8 = 0x1;
    }
    r22 = r22[0xe] - decomp_var_29c;
    r9 = *(int32_t *)dword_106c69d38;
    asm { ccmp       w22, w9, #0x0, ne };
    if (asm { ccmp       w22, w9, #0x0, ne }) {
            r9 = 0x1;
    }
    asm { ccmp       w22, w10, #0x0, ne };
    if (asm { ccmp       w22, w10, #0x0, ne }) {
            r23 = 0x1;
    }
    r11 = *r19;
    asm { ccmp       w11, w12, #0x0, ne };
    if (asm { ccmp       w11, w12, #0x0, ne }) {
            r25 = 0x1;
    }
    asm { ccmp       w10, w13, #0x0, ne };
    if (asm { ccmp       w10, w13, #0x0, ne }) {
            r24 = 0x1;
    }
    if (*(int8_t *)byte_106c69cf0 == 0x1) {
            asm { ccmp       w11, w12, #0x0, ne };
            if (asm { ccmp       w11, w12, #0x0, ne }) {
                    r11 = 0x1;
            }
            asm { ccmp       w10, w13, #0x0, ne };
            if (!asm { ccmp       w10, w13, #0x0, ne }) {
                    r10 = 0x1;
            }
            else {
                    r10 = r11;
            }
            if (((r8 | r9 | r10) & 0x1) != 0x0) {
                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
    }
    else {
            if ((r8 | r9 | r25 | r24) == 0x1) {
                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
    }
    if (*(int8_t *)byte_106c68fb8 == 0x1) {
            if (r25 == 0x0) {
                    if (r24 == 0x0) {
                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                    if (**___stack_chk_guard != decomp_var_68) {
                                            __stack_chk_fail();
                                    }
                            }
                            else {
                                    r20 = __cxa_allocate_exception();
                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                    *r20 = 0x1068ac4e8;
                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                    r20[0x3] = decomp_var_288;
                                    __cxa_throw();
                            }
                    }
                    else {
                            r20 = __cxa_allocate_exception();
                            sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                            *r20 = 0x1068ac4e8;
                            *(int128_t *)(r20 + 0x8) = decomp_var_280;
                            r20[0x3] = decomp_var_270;
                            __cxa_throw();
                    }
            }
            else {
                    r20 = __cxa_allocate_exception();
                    sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                    *r20 = 0x1068ac4e8;
                    *(int128_t *)(r20 + 0x8) = decomp_var_268;
                    r20[0x3] = decomp_var_258;
                    __cxa_throw();
            }
    }
    else {
            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                    if (**___stack_chk_guard != decomp_var_68) {
                            __stack_chk_fail();
                    }
            }
            else {
                    r20 = __cxa_allocate_exception();
                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                    *r20 = 0x1068ac4e8;
                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                    r20[0x3] = decomp_var_288;
                    __cxa_throw();
            }
    }
    return;

.l325:
    if (index_0 == 0x3f) goto loc_104e31014;
    goto .l326;

loc_104e31014:
    r0 = sub_104d65488(r20, r22);
    r2 = r20[0x13];
    r0 = sub_1028a276c(&decomp_var_e0, r0, r2);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2);
    }
    if (decomp_var_d8 != 0x0) {
            std::__1::__shared_weak_count::__release_weak();
    }
    r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
    asm { ccmp       x8, x21, #0x2, ne };
    if (asm { ccmp       x8, x21, #0x2, ne }) {
            r8 = 0x1;
    }
    r22 = r22[0xe] - decomp_var_29c;
    r9 = *(int32_t *)dword_106c69d38;
    asm { ccmp       w22, w9, #0x0, ne };
    if (asm { ccmp       w22, w9, #0x0, ne }) {
            r9 = 0x1;
    }
    asm { ccmp       w22, w10, #0x0, ne };
    if (asm { ccmp       w22, w10, #0x0, ne }) {
            r23 = 0x1;
    }
    r11 = *r19;
    asm { ccmp       w11, w12, #0x0, ne };
    if (asm { ccmp       w11, w12, #0x0, ne }) {
            r25 = 0x1;
    }
    asm { ccmp       w10, w13, #0x0, ne };
    if (asm { ccmp       w10, w13, #0x0, ne }) {
            r24 = 0x1;
    }
    if (*(int8_t *)byte_106c69cf0 == 0x1) {
            asm { ccmp       w11, w12, #0x0, ne };
            if (asm { ccmp       w11, w12, #0x0, ne }) {
                    r11 = 0x1;
            }
            asm { ccmp       w10, w13, #0x0, ne };
            if (!asm { ccmp       w10, w13, #0x0, ne }) {
                    r10 = 0x1;
            }
            else {
                    r10 = r11;
            }
            if (((r8 | r9 | r10) & 0x1) != 0x0) {
                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
    }
    else {
            if ((r8 | r9 | r25 | r24) == 0x1) {
                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
    }
    if (*(int8_t *)byte_106c68fb8 == 0x1) {
            if (r25 == 0x0) {
                    if (r24 == 0x0) {
                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                    if (**___stack_chk_guard != decomp_var_68) {
                                            __stack_chk_fail();
                                    }
                            }
                            else {
                                    r20 = __cxa_allocate_exception();
                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                    *r20 = 0x1068ac4e8;
                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                    r20[0x3] = decomp_var_288;
                                    __cxa_throw();
                            }
                    }
                    else {
                            r20 = __cxa_allocate_exception();
                            sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                            *r20 = 0x1068ac4e8;
                            *(int128_t *)(r20 + 0x8) = decomp_var_280;
                            r20[0x3] = decomp_var_270;
                            __cxa_throw();
                    }
            }
            else {
                    r20 = __cxa_allocate_exception();
                    sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                    *r20 = 0x1068ac4e8;
                    *(int128_t *)(r20 + 0x8) = decomp_var_268;
                    r20[0x3] = decomp_var_258;
                    __cxa_throw();
            }
    }
    else {
            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                    if (**___stack_chk_guard != decomp_var_68) {
                            __stack_chk_fail();
                    }
            }
            else {
                    r20 = __cxa_allocate_exception();
                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                    *r20 = 0x1068ac4e8;
                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                    r20[0x3] = decomp_var_288;
                    __cxa_throw();
            }
    }
    return;

.l326:
    if (index_0 == 0x40) goto loc_104e30ec8;
    goto loc_104e30e1c;

loc_104e30ec8:
    r2 = 0x1;
    sub_10279d0f4(&decomp_var_e0, 0x3, 0x1, 0x0, 0x0);
    r0 = sub_104fac2d0(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2, 0x0, 0x0);
    }
    r8 = sign_extend_64(*(int32_t *)dword_106c69d68);
    asm { ccmp       x8, x21, #0x2, ne };
    if (asm { ccmp       x8, x21, #0x2, ne }) {
            r8 = 0x1;
    }
    r22 = r22[0xe] - decomp_var_29c;
    r9 = *(int32_t *)dword_106c69d38;
    asm { ccmp       w22, w9, #0x0, ne };
    if (asm { ccmp       w22, w9, #0x0, ne }) {
            r9 = 0x1;
    }
    asm { ccmp       w22, w10, #0x0, ne };
    if (asm { ccmp       w22, w10, #0x0, ne }) {
            r23 = 0x1;
    }
    r11 = *r19;
    asm { ccmp       w11, w12, #0x0, ne };
    if (asm { ccmp       w11, w12, #0x0, ne }) {
            r25 = 0x1;
    }
    asm { ccmp       w10, w13, #0x0, ne };
    if (asm { ccmp       w10, w13, #0x0, ne }) {
            r24 = 0x1;
    }
    if (*(int8_t *)byte_106c69cf0 == 0x1) {
            asm { ccmp       w11, w12, #0x0, ne };
            if (asm { ccmp       w11, w12, #0x0, ne }) {
                    r11 = 0x1;
            }
            asm { ccmp       w10, w13, #0x0, ne };
            if (!asm { ccmp       w10, w13, #0x0, ne }) {
                    r10 = 0x1;
            }
            else {
                    r10 = r11;
            }
            if (((r8 | r9 | r10) & 0x1) != 0x0) {
                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
    }
    else {
            if ((r8 | r9 | r25 | r24) == 0x1) {
                    sub_100004130(&decomp_var_e0, "ReplicatorReadVariantLimit", r2);
                    r0 = sub_104e35044(r19, r22, &decomp_var_e0, r20 + 0x2e48, r21);
                    if ((sign_extend_64(decomp_var_c9) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
    }
    if (*(int8_t *)byte_106c68fb8 == 0x1) {
            if (r25 == 0x0) {
                    if (r24 == 0x0) {
                            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                                    if (**___stack_chk_guard != decomp_var_68) {
                                            __stack_chk_fail();
                                    }
                            }
                            else {
                                    r20 = __cxa_allocate_exception();
                                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                                    *r20 = 0x1068ac4e8;
                                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                                    r20[0x3] = decomp_var_288;
                                    __cxa_throw();
                            }
                    }
                    else {
                            r20 = __cxa_allocate_exception();
                            sub_1029fe130("Replicator read variant: Variant count exceeded limit! (%u)");
                            *r20 = 0x1068ac4e8;
                            *(int128_t *)(r20 + 0x8) = decomp_var_280;
                            r20[0x3] = decomp_var_270;
                            __cxa_throw();
                    }
            }
            else {
                    r20 = __cxa_allocate_exception();
                    sub_1029fe130("Replicator read variant: Total string data size exceed limit! (%u)");
                    *r20 = 0x1068ac4e8;
                    *(int128_t *)(r20 + 0x8) = decomp_var_268;
                    r20[0x3] = decomp_var_258;
                    __cxa_throw();
            }
    }
    else {
            if ((r23 & *(int8_t *)byte_106c69cc0) != 0x1) {
                    if (**___stack_chk_guard != decomp_var_68) {
                            __stack_chk_fail();
                    }
            }
            else {
                    r20 = __cxa_allocate_exception();
                    sub_1029fe130("Replicator read variant: Variant read size exceeded limit! (%u)");
                    *r20 = 0x1068ac4e8;
                    *(int128_t *)(r20 + 0x8) = decomp_var_298;
                    r20[0x3] = decomp_var_288;
                    __cxa_throw();
            }
    }
    return;

loc_104e30e1c:
    if (*(int8_t *)byte_106c68598 != 0x1) goto loc_104e32ff0;
    goto loc_104e30e30;

loc_104e32ff0:
    r20 = __cxa_allocate_exception();
    sub_1029fdf64("Cannot read property value: unhandled type");
    __cxa_throw();
    return;

loc_104e30e30:
    r2 = 0x1;
    sub_10279d0f4(&decomp_var_e0, 0x3, 0x1, 0x0, 0x0);
    r0 = sub_104fac5dc(r22, &decomp_var_e0);
    r8 = r23[0x1];
    if (r8 != 0x0) {
            r1 = *r23;
            r0 = r8[0x16];
            r2 = &decomp_var_e0;
            (*(*r0 + 0x28))(r0, r1, r2, 0x0, 0x0);
    }
    goto .l219;
}
