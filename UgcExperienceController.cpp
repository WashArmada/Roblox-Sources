function sub_104b9356c {
    arg_18 = r25;
    arg_30 = r22;
    arg_48 = r19;
    r31 = r31 + 0xffffffffffffffa0 - 0x620;
    r21 = r5;
    r24 = r4;
    r23 = r2;
    r22 = r1;
    r20 = r0;
    decomp_var_58 = **___stack_chk_guard;
    r9 = *qword_106c61900 & 0xfc00;
    asm { ccmp       x9, #0x0, #0x4, hs };
    if (!asm { ccmp       x9, #0x0, #0x4, hs }) {
            r0 = *qword_106c61900;
            r0 = sub_1029fea60(r0, *qword_106c61908, 0x4, "[FLog::UgcExperienceController] UgcExperienceController: finishTeleportWithJoinScriptPayload: begin", 0x63, 0x0, &arg_2a0, 0x1);
    }
    sub_103692164();
    r8 = r24[0x17];
    r10 = *r24;
    r11 = r24[0x1];
    bool_9939 = r9 < 0x0;
    if ((sub_104955280() & 0x1) != 0x0) {
            r0 = loc_1000a7c3c(arg_2c0, "GameId");
            r24 = r0;
            if (r0 != 0x0) {
                    r24 = r24 + 0x28;
                    if (sub_10160f518() == *r24) {
                            sub_100056098(r24);
                            r25 = &arg_288;
                            decomp_var_61 = *(r25 + 0x27);
                            r0 = sub_104b8d6f0(&arg_2c0);
                            arg_288 = arg_2a0;
                            *(r25 + 0xf) = decomp_var_61;
                            r0 = sub_1005fab58(&arg_2a0, &arg_288, r0);
                            sub_1000080fc(r23, &arg_2a0);
                            sub_1000584f0(&arg_2a0);
                            if ((sign_extend_64(sign_extend_64(arg_2b7)) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00(arg_288);
                            }
                            arg_2d0 = *(int128_t *)r22;
                            *(int128_t *)(r25 + 0x51) = *(int128_t *)(r22 + 0x9);
                            r23 = &arg_2d0;
                            sub_104b95bd8(r23 + 0x20, r22 + 0x20);
                            q0 = *(int128_t *)(r22 + 0x2b8);
                            *(int128_t *)(r23 + 0x2b8) = q0;
                            q1 = r22[0x2d];
                            r22[0x57] = q0;
                            *(r22 + 0x2c8) = q0;
                            arg_5a0 = q1;
                            *(int128_t *)(r22 + 0x2d8) = q0;
                            *(int128_t *)(r23 + 0x2e8) = *(int128_t *)(r22 + 0x2e8);
                            r22[0x5f] = 0x0;
                            *(int128_t *)(r22 + 0x2e8) = q0;
                            arg_5d0 = r22[0x30];
                            r22[0x62] = 0x0;
                            r22[0x30] = q0;
                            *(int128_t *)(r23 + 0x318) = *(int128_t *)(r22 + 0x318);
                            *(int128_t *)(r22 + 0x318) = q0;
                            arg_270 = arg_2c0;
                            arg_2c8 = 0x0;
                            q0 = *r21;
                            q1 = r21[0x2];
                            arg_20 = r21[0x4];
                            arg_0 = q0;
                            arg_10 = q1;
                            r21[0x2] = 0x0;
                            r21[0x3] = 0x0;
                            q0 = *(int128_t *)(r21 + 0x28);
                            arg_38 = r21[0x7];
                            arg_28 = q0;
                            r21[0x4] = 0x0;
                            r21[0x5] = 0x0;
                            r21[0x6] = 0x0;
                            r21[0x7] = 0x0;
                            q0 = r21[0x4];
                            arg_50 = r21[0xa];
                            arg_40 = q0;
                            r21[0x8] = 0x0;
                            r21[0x9] = 0x0;
                            arg_58 = *(int128_t *)(r21 + 0x58);
                            r21[0xa] = 0x0;
                            r21[0xb] = 0x0;
                            r21[0xc] = 0x0;
                            r21[0xd] = 0x0;
                            r21[0xe] = 0x0;
                            r21[0xf] = 0x0;
                            r21[0x10] = 0x0;
                            r21[0x12] = 0x0;
                            r21[0x13] = 0x0;
                            *(int128_t *)(&arg_0 + 0xa8) = *(int128_t *)(r21 + 0xa8);
                            r21[0x15] = 0x0;
                            r21[0x16] = 0x0;
                            r21[0x17] = 0x0;
                            *(int128_t *)(&arg_0 + 0xc8) = *(int128_t *)(r21 + 0xc8);
                            r21[0x19] = 0x0;
                            r21[0x1a] = 0x0;
                            r21[0x1b] = 0x0;
                            r21[0x1c] = 0x0;
                            r21[0x1d] = 0x0;
                            r21[0x1e] = 0x0;
                            *(int128_t *)(&arg_0 + 0x188) = *(int128_t *)(r21 + 0x188);
                            r21[0x31] = 0x0;
                            r21[0x32] = 0x0;
                            r21[0x33] = 0x0;
                            r21[0x34] = 0x0;
                            r21[0x35] = 0x0;
                            r21[0x36] = 0x0;
                            *(int128_t *)(&arg_0 + 0x1b8) = *(int128_t *)(r21 + 0x1b8);
                            r21[0x37] = 0x0;
                            r21[0x38] = 0x0;
                            r21[0x39] = 0x0;
                            *(int128_t *)(&arg_0 + 0x1f8) = *(int128_t *)(r21 + 0x1f8);
                            r21[0x3f] = 0x0;
                            r21[0x40] = 0x0;
                            r21[0x41] = 0x0;
                            sub_104b9221c(r20, &arg_2d0, &arg_270, &arg_0);
                            r0 = sub_104b377c8(&arg_0);
                            r19 = arg_278;
                            if (r19 != 0x0) {
                                    r8 = r19 + 0x8;
                                    asm { ldaddal    x9, x8, [x8] };
                                    if (r8 == 0x0) {
                                            (*(*r19 + 0x10))(r19);
                                            std::__1::__shared_weak_count::__release_weak();
                                    }
                            }
                            r19 = arg_5f0;
                            if (r19 != 0x0) {
                                    r8 = r19 + 0x8;
                                    asm { ldaddal    x9, x8, [x8] };
                                    if (r8 == 0x0) {
                                            (*(*r19 + 0x10))(r19);
                                            std::__1::__shared_weak_count::__release_weak();
                                    }
                            }
                            if ((sign_extend_64(arg_5e7) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00(arg_5d0);
                            }
                            if ((sign_extend_64(arg_5cf) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00(arg_5b8);
                            }
                            if ((sign_extend_64(arg_5b7) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00(arg_5a0);
                            }
                            if ((sign_extend_64(arg_59f) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00(arg_588);
                            }
                            sub_1008dbf74(r23 + 0x20);
                            r19 = arg_2c8;
                            if (r19 != 0x0) {
                                    r8 = r19 + 0x8;
                                    asm { ldaddal    x9, x8, [x8] };
                                    if (r8 == 0x0) {
                                            (*(*r19 + 0x10))(r19);
                                            std::__1::__shared_weak_count::__release_weak();
                                    }
                            }
                            if (**___stack_chk_guard != decomp_var_58) {
                                    __stack_chk_fail();
                            }
                    }
                    else {
                            if ((*qword_106c61900 & 0xff) >= 0x6 && (*qword_106c61900 & 0xfe00) != 0x0) {
                                    sub_1029fea60();
                            }
                            sub_1029fe0a0("finishTeleportWithJoinScriptPayload: failed to find game id");
                            asm { brk        #0x1 };
                    }
            }
            else {
                    if ((*qword_106c61900 & 0xff) >= 0x6 && (*qword_106c61900 & 0xfe00) != 0x0) {
                            sub_1029fea60();
                    }
                    sub_1029fe0a0("finishTeleportWithJoinScriptPayload: failed to find game id");
                    asm { brk        #0x1 };
            }
    }
    else {
            if ((*qword_106c61900 & 0xff) >= 0x6 && (*qword_106c61900 & 0xfe00) != 0x0) {
                    r8 = sign_extend_64(r24[0x17]);
                    r9 = *r24;
                    if (r8 >= 0x0) {
                            r8 = r24;
                    }
                    else {
                            r8 = r9;
                    }
                    sub_1029fea60();
            }
            sub_1029fe0a0("finishTeleportWithJoinScriptPayload: failed to parse json");
            asm { brk        #0x1 };
    }
    return;
}
