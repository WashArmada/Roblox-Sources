function sub_104055c74 {
    arg_10 = r26;
    arg_18 = r25;
    arg_20 = r24;
    arg_28 = r23;
    arg_30 = r22;
    arg_38 = r21;
    arg_40 = r20;
    arg_48 = r19;
    arg_50 = r29;
    arg_58 = r30;
    r31 = r31 + 0xffffffffffffffa0 - 0x500;
    r19 = r8;
    if (*(int8_t *)byte_106a96678 == 0x1) {
            if ((*(int8_t *)byte_106aaad90 & 0x1) != 0x0) {
                    r20 = r1;
                    r21 = r0;
                    if (sub_104820450() == 0x0) {
                            r8 = r20[0x17];
                            r10 = *r20;
                            r11 = r20[0x1];
                            bool_5753 = sign_extend_64(r8) < 0x0;
                            if ((sub_102c6fb78() & 0x1) != 0x0) {
                                    r0 = sub_1000821f8();
                                    if (r0 != 0x0) {
                                            r22 = r0;
                                            sub_100017368(&arg_20, 0x10720ef10);
                                            sub_104055f48(r21, &arg_20, r20, 0x1);
                                            r0 = sub_100017728(&arg_20, 0x106896828);
                                            r0 = sub_1028550fc(&arg_290);
                                            r25 = r22[0x47];
                                            r21 = r22[0x48];
                                            arg_10 = r25;
                                            arg_18 = r21;
                                            if (r21 != 0x0) {
                                                    asm { ldadd      x9, x8, [x8] };
                                            }
                                            r0 = loc_102c74a10(0x30);
                                            r22 = r0;
                                            r0[0x1] = 0x0;
                                            r0[0x2] = 0x0;
                                            *r0 = 0x10691c7b0;
                                            r23 = r0 + 0x18;
                                            *r23 = 0x0;
                                            r0[0x4] = 0x0;
                                            r0[0x5] = 0x0;
                                            arg_0 = r23;
                                            arg_8 = r0;
                                            r24 = *r25;
                                            r25 = r25[0x1];
                                            if (r24 != r25) {
                                                    r26 = &arg_20;
                                                    while (true) {
                                                            r8 = *r24;
                                                            if ((sign_extend_64(r8[0x14f]) & 0xffffffff80000000) == 0x0) {
                                                                    arg_20 = *(int128_t *)(r8 + 0x138);
                                                                    arg_30 = *(r8 + 0x148);
                                                            }
                                                            else {
                                                                    r0 = sub_100003c60(&arg_20, r8[0x27], r8[0x28]);
                                                            }
                                                            r8 = arg_37;
                                                            r27 = sign_extend_64(r8);
                                                            r9 = arg_28;
                                                            if (r27 >= 0x0) {
                                                                    r2 = r8;
                                                            }
                                                            else {
                                                                    r2 = r9;
                                                            }
                                                            r9 = r20[0x17];
                                                            r8 = sign_extend_64(r9);
                                                            r10 = r20[0x1];
                                                            if (r8 < 0x0) {
                                                                    r9 = r10;
                                                            }
                                                            if (r2 == r9) {
                                                                    r9 = arg_20;
                                                                    if (r27 >= 0x0) {
                                                                            r0 = r26;
                                                                    }
                                                                    else {
                                                                            r0 = r9;
                                                                    }
                                                                    r9 = *r20;
                                                                    if (r8 >= 0x0) {
                                                                            r1 = r20;
                                                                    }
                                                                    else {
                                                                            r1 = r9;
                                                                    }
                                                                    if (memcmp(r0, r1, r2) == 0x0) {
                                                                            r28 = 0x1;
                                                                    }
                                                                    if ((r27 & 0xffffffff80000000) != 0x0) {
                                                                            loc_102c74a48();
                                                                            if (r28 != 0x0) {
                                                                                    sub_100109ba8(r23, r24, r2);
                                                                                    r24 = r24 + 0x10;
                                                                                    if (r24 != r25) {
                                                                                            continue;
                                                                                    }
                                                                                    break;
                                                                            }
                                                                            else {
                                                                                    r24 = r24 + 0x10;
                                                                                    if (r24 != r25) {
                                                                                            continue;
                                                                                    }
                                                                                    break;
                                                                            }
                                                                    }
                                                                    else {
                                                                            if (r28 == 0x0) {
                                                                                    r24 = r24 + 0x10;
                                                                                    if (r24 != r25) {
                                                                                            continue;
                                                                                    }
                                                                                    break;
                                                                            }
                                                                            else {
                                                                                    sub_100109ba8(r23, r24, r2);
                                                                                    r24 = r24 + 0x10;
                                                                                    if (r24 != r25) {
                                                                                            continue;
                                                                                    }
                                                                                    break;
                                                                            }
                                                                    }
                                                            }
                                                            else {
                                                                    if ((r27 & 0xffffffff80000000) == 0x0) {
                                                                            r28 = 0x0;
                                                                            if (0x0 != 0x0) {
                                                                                    sub_100109ba8(r23, r24, r2);
                                                                            }
                                                                            r24 = r24 + 0x10;
                                                                            if (r24 != r25) {
                                                                                    continue;
                                                                            }
                                                                            break;
                                                                    }
                                                                    else {
                                                                            r28 = 0x0;
                                                                            loc_102c74a48();
                                                                            if (0x0 != 0x0) {
                                                                                    sub_100109ba8(r23, r24, r2);
                                                                                    r24 = r24 + 0x10;
                                                                                    if (r24 != r25) {
                                                                                            continue;
                                                                                    }
                                                                                    break;
                                                                            }
                                                                            else {
                                                                                    r24 = r24 + 0x10;
                                                                                    if (r24 != r25) {
                                                                                            continue;
                                                                                    }
                                                                                    break;
                                                                            }
                                                                    }
                                                            }
                                                    }
                                            }
                                            *r19 = r23;
                                            r19[0x1] = r22;
                                            if (r21 != 0x0) {
                                                    r8 = r21 + 0x8;
                                                    asm { ldaddal    x9, x8, [x8] };
                                                    if (r8 == 0x0) {
                                                            (*(*r21 + 0x10))(r21);
                                                            std::__1::__shared_weak_count::__release_weak();
                                                    }
                                            }
                                            sub_100017728(&arg_290, 0x106896828);
                                    }
                                    else {
                                            r0 = loc_102c74a10(0x30);
                                            r0[0x1] = 0x0;
                                            r0[0x2] = 0x0;
                                            *r0 = 0x10691c7b0;
                                            r0[0x4] = 0x0;
                                            r0[0x5] = 0x0;
                                            r19[0x1] = r0;
                                            r0[0x3] = 0x0;
                                            *r19 = r0 + 0x18;
                                    }
                            }
                            else {
                                    r0 = loc_102c74a10(0x30);
                                    r0[0x1] = 0x0;
                                    r0[0x2] = 0x0;
                                    *r0 = 0x10691c7b0;
                                    r0[0x4] = 0x0;
                                    r0[0x5] = 0x0;
                                    r19[0x1] = r0;
                                    r0[0x3] = 0x0;
                                    *r19 = r0 + 0x18;
                            }
                    }
                    else {
                            r19 = sub_102c7c590("SocialService:GetPlayersByPartyId Must be called from a server script.");
                            sub_100004d5c(&arg_10);
                            sub_100017728(&arg_290, 0x106896828);
                            _Unwind_Resume(r19);
                    }
            }
            else {
                    sub_102c7c590("SocialService:GetPlayersByPartyId API is not enabled.");
                    r19 = sub_102c7c590("SocialService:GetPlayersByPartyId Must be called from a server script.");
                    sub_100004d5c(&arg_10);
                    sub_100017728(&arg_290, 0x106896828);
                    _Unwind_Resume(r19);
            }
    }
    else {
            sub_102c7c590("SocialService:GetPlayersByPartyId API is not enabled.");
            r19 = sub_102c7c590("SocialService:GetPlayersByPartyId Must be called from a server script.");
            sub_100004d5c(&arg_10);
            sub_100017728(&arg_290, 0x106896828);
            _Unwind_Resume(r19);
    }
    return;
}
