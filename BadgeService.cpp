int sub_103b8e024(int arg0, int arg1, int arg2, int arg3, int arg4) {
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
    r31 = r31 + 0xffffffffffffffb0 - 0x2c0;
    r19 = arg4;
    r20 = arg3;
    r22 = arg2;
    r23 = arg1;
    r21 = arg0;
    r0 = sub_104730fec(arg0);
    r24 = r0;
    if (r0 != 0x1) {
            r25 = 0x1;
    }
    sub_10000927c(&decomp_var_68, r20);
    r0 = sub_103b8d000(&decomp_var_68, 0x3, r25);
    if (r24 != 0x1) {
            r24 = 0x1;
    }
    sub_10003f140(r20, &var_300);
    sub_10000be44(&var_300);
    sub_10000be44(&decomp_var_68);
    sub_10000927c(&var_89, r19);
    r2 = r24;
    sub_1008eae4c(&var_89, 0x3, r2);
    sub_10003f140(r19, &var_300);
    r0 = sub_10000be44(&var_300);
    sub_10000be44(&var_89);
    if ((*(int8_t *)byte_106a8d3b8 & 0x1) != 0x0) {
            r0 = sub_10472b190(r23);
            r1 = r0;
            var_A8 = r0;
            if ((sub_103b8c294(r21, r1) & 0x1) != 0x0) {
                    r10 = *r22;
                    if (r10 != 0x0) {
                            r9 = *r10;
                            r8 = r10[0x1];
                            r8 = r8 - r9;
                            if (r8 != 0x0) {
                                    r8 = (SAR(r8, 0x4)) * 0xcccccccccccccccd;
                                    r9 = sign_extend_64(*(int32_t *)dword_106a8d328);
                                    if (r8 >= r9) {
                                            if ((*qword_106a8d2d0 & 0xff) >= 0x6 && (*qword_106a8d2d0 >> 0x8 & 0xff) >= 0x5) {
                                                    var_300 = r8;
                                                    sub_102c7d058(*qword_106a8d2d0, *qword_106a8d2d8, 0x5, "[FLog::BadgeService] GetUserBadgesAsync: BadgeIds count {} is greater than allowed {}.", 0x56, 0xf4, &var_300, 0x1);
                                                    r9 = *(int32_t *)dword_106a8d328;
                                            }
                                            std::__1::to_string(r9);
                                            r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::insert(&var_1B8, 0x0);
                                            var_300 = *(int128_t *)r0;
                                            r0[0x1] = 0x0;
                                            r0[0x2] = 0x0;
                                            *r0 = 0x0;
                                            r0 = std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::append(&var_300);
                                            var_F0 = *(int128_t *)r0;
                                            r0[0x1] = 0x0;
                                            r0[0x2] = 0x0;
                                            *r0 = 0x0;
                                            r0 = sub_100007d9c(r19);
                                            if ((sign_extend_64(var_D9) & 0xffffffff80000000) != 0x0) {
                                                    r0 = loc_102c74a48();
                                            }
                                            if ((sign_extend_64(var_2E9) & 0xffffffff80000000) != 0x0) {
                                                    r0 = loc_102c74a48();
                                            }
                                            if ((sign_extend_64(var_1A1) & 0xffffffff80000000) != 0x0) {
                                                    r0 = loc_102c74a48();
                                            }
                                    }
                                    else {
                                            var_110 = 0x0;
                                            var_100 = 0x0;
                                            r22 = *r10;
                                            r23 = r10[0x1];
                                            while (true) {
                                                    if (r22 == r23) {
                                                            sub_10481f4b0();
                                                            sub_10023e588();
                                                            if (var_138 != 0x0) {
                                                                    r8 = 0x3f800000;
                                                                    var_1B8 = 0x1388;
                                                                    r0 = sub_1000821f8();
                                                                    r22 = r0;
                                                                    if (r0 != 0x0) {
                                                                            r0 = sub_10473d490(r22, var_A8);
                                                                            r8 = "false";
                                                                            if (r0 == 0x0) {
                                                                                    r8 = "false";
                                                                                    r1 = "false";
                                                                                    temp_0 = 0x2;
                                                                            }
                                                                            else {
                                                                                    r1 = "true";
                                                                                    temp_0 = 0x2;
                                                                            }
                                                                    }
                                                                    else {
                                                                            temp_0 = 0x0;
                                                                    }
                                                            }
                                                            else {
                                                                    r0 = *qword_106a8d2d0;
                                                                    r8 = *qword_106a8d2d0 & 0xff;
                                                                    if (r8 >= 0x6) {
                                                                            r0 = *qword_106a8d2d0;
                                                                            r8 = *qword_106a8d2d0 & 0xfe00;
                                                                            if (r8 != 0x0) {
                                                                                    r0 = *qword_106a8d2d0;
                                                                                    r8 = 0x106a8d000;
                                                                                    r1 = *qword_106a8d2d8;
                                                                                    r2 = 0x2;
                                                                                    r0 = sub_102c7d058(r0, *qword_106a8d2d8, 0x2, "[FLog::BadgeService] GetUserBadgesAsync: Data model is null.", 0x3c, 0x0, &var_300, 0x1);
                                                                                    temp_0 = 0x5;
                                                                            }
                                                                            else {
                                                                                    temp_0 = 0x1;
                                                                            }
                                                                    }
                                                                    else {
                                                                            temp_0 = 0x1;
                                                                    }
                                                            }
                                                            break;
                                                    }
                                                    r8 = *r22;
                                                    if ((r8[0x35] & 0x1) != 0x0) {
                                                            var_300 = sub_10005e15c(r22);
                                                            r1 = &var_300;
                                                            r0 = loc_100049088(&var_110, r1, r2);
                                                            r22 = r22 + 0x50;
                                                            continue;
                                                    }
                                                    r0 = *qword_106a8d2d0;
                                                    asm { ccmp       w10, #0x5, #0x0, hs };
                                                    if (!asm { ccmp       w10, #0x5, #0x0, hs }) {
                                                            r1 = *qword_106a8d2d8;
                                                            r8 = r8[0x1];
                                                            if ((sign_extend_64(r8[0x17]) & 0xffffffff80000000) != 0x0) {
                                                                    r8 = *r8;
                                                                    temp_0 = 0x3;
                                                            }
                                                            else {
                                                                    temp_0 = 0x3;
                                                            }
                                                    }
                                                    else {
                                                            temp_0 = 0x4;
                                                    }
                                                    break;
                                            }
                                            switch (temp_0) {
                                                case 0:
                                                    if (*(int8_t *)byte_106a92698 == 0x1) {
                                                            r0 = sub_103dbcdf4("badges_awarded_dates", 0x14, &var_A8, 0x1);
                                                    }
                                                    r2 = &var_110;
                                                    sub_103b8c488(r21, var_A8, r2, "GetUserBadgesAsync", 0x12);
                                                    r23 = var_138;
                                                    r22 = var_130;
                                                    if (r22 != 0x0) {
                                                            asm { ldadd      x9, x8, [x8] };
                                                    }
                                                    sub_10005c828();
                                                    sub_1048204d0();
                                                    sub_100003d78(&var_208, "BadgeService::getUserBadgesAsync", r2);
                                                    var_300 = var_A8;
                                                    var_110 = 0x0;
                                                    r24 = &var_300;
                                                    r0 = sub_103b8ee38(r24 + 0x20, &var_1B8);
                                                    var_1C8 = 0x0;
                                                    var_1D8 = 0x0;
                                                    loc_10000c5b0(r24 + 0xb8, r20);
                                                    loc_10000c5b0(r24 + 0xd8, r19);
                                                    r0 = sub_103b8e964(&var_208, &var_300);
                                                    sub_100004d5c(&decomp_var_1f0);
                                                    sub_103b8eeb8(&var_300);
                                                    if ((sign_extend_64(var_1F1) & 0xffffffff80000000) != 0x0) {
                                                            loc_102c74a48();
                                                    }
                                                    if (var_1D8 != 0x0) {
                                                            std::__1::__shared_weak_count::__release_weak();
                                                    }
                                                    if (var_1C8 != 0x0) {
                                                            std::__1::__shared_weak_count::__release_weak();
                                                    }
                                                    sub_100942840(&var_1B8);
                                                    r19 = var_130;
                                                    if (r19 != 0x0) {
                                                            r8 = r19 + 0x8;
                                                            asm { ldaddal    x9, x8, [x8] };
                                                            if (r8 == 0x0) {
                                                                    (*(*r19 + 0x10))(r19);
                                                                    std::__1::__shared_weak_count::__release_weak();
                                                            }
                                                    }
                                                    r0 = var_110;
                                                    if (r0 != 0x0) {
                                                            r0 = loc_102c74a48();
                                                    }
                                                    break;
                                                case 1:
                                                    r0 = sub_100003d78(&var_150, "GetUserBadgesAsync: Internal error.", r2);
                                                    sub_100007d9c(r19);
                                                    if ((sign_extend_64(var_139) & 0xffffffff80000000) != 0x0) {
                                                            loc_102c74a48();
                                                    }
                                                    r19 = var_130;
                                                    if (r19 != 0x0) {
                                                            r8 = r19 + 0x8;
                                                            asm { ldaddal    x9, x8, [x8] };
                                                            if (r8 == 0x0) {
                                                                    (*(*r19 + 0x10))(r19);
                                                                    std::__1::__shared_weak_count::__release_weak();
                                                            }
                                                    }
                                                    r0 = var_110;
                                                    if (r0 != 0x0) {
                                                            r0 = loc_102c74a48();
                                                    }
                                                    break;
                                                case 2:
                                                    r0 = sub_100003d78(&var_300, r1, r2);
                                                    sub_100003d78(&var_1D0, "RequestUserIdIsInGameServer", r2);
                                                    var_1E0 = &var_1D0;
                                                    r0 = sub_10003f798(&var_1B8 + 0x8, &var_1D0, 0x10590f848, &var_1E0);
                                                    r23 = r0;
                                                    if ((sign_extend_64(r0[0x3f]) & 0xffffffff80000000) != 0x0) {
                                                            loc_102c74a48();
                                                    }
                                                    *(int128_t *)(r23 + 0x28) = var_300;
                                                    r23[0x7] = var_2F0;
                                                    var_2E9 = 0x0;
                                                    var_300 = 0x0;
                                                    if ((sign_extend_64(var_1B9) & 0xffffffff80000000) != 0x0) {
                                                            loc_102c74a48();
                                                            if ((sign_extend_64(var_2E9) & 0xffffffff80000000) != 0x0) {
                                                                    loc_102c74a48();
                                                            }
                                                    }
                                                    if (*(int8_t *)byte_106a92698 == 0x1) {
                                                            r0 = sub_103dbcdf4("badges_awarded_dates", 0x14, &var_A8, 0x1);
                                                    }
                                                    r2 = &var_110;
                                                    sub_103b8c488(r21, var_A8, r2, "GetUserBadgesAsync", 0x12);
                                                    r23 = var_138;
                                                    r22 = var_130;
                                                    if (r22 != 0x0) {
                                                            asm { ldadd      x9, x8, [x8] };
                                                    }
                                                    sub_10005c828();
                                                    sub_1048204d0();
                                                    sub_100003d78(&var_208, "BadgeService::getUserBadgesAsync", r2);
                                                    var_300 = var_A8;
                                                    var_110 = 0x0;
                                                    r24 = &var_300;
                                                    r0 = sub_103b8ee38(r24 + 0x20, &var_1B8);
                                                    var_1C8 = 0x0;
                                                    var_1D8 = 0x0;
                                                    loc_10000c5b0(r24 + 0xb8, r20);
                                                    loc_10000c5b0(r24 + 0xd8, r19);
                                                    r0 = sub_103b8e964(&var_208, &var_300);
                                                    sub_100004d5c(&decomp_var_1f0);
                                                    sub_103b8eeb8(&var_300);
                                                    if ((sign_extend_64(var_1F1) & 0xffffffff80000000) != 0x0) {
                                                            loc_102c74a48();
                                                    }
                                                    if (var_1D8 != 0x0) {
                                                            std::__1::__shared_weak_count::__release_weak();
                                                    }
                                                    if (var_1C8 != 0x0) {
                                                            std::__1::__shared_weak_count::__release_weak();
                                                    }
                                                    sub_100942840(&var_1B8);
                                                    r19 = var_130;
                                                    if (r19 != 0x0) {
                                                            r8 = r19 + 0x8;
                                                            asm { ldaddal    x9, x8, [x8] };
                                                            if (r8 == 0x0) {
                                                                    (*(*r19 + 0x10))(r19);
                                                                    std::__1::__shared_weak_count::__release_weak();
                                                            }
                                                    }
                                                    r0 = var_110;
                                                    if (r0 != 0x0) {
                                                            r0 = loc_102c74a48();
                                                    }
                                                    break;
                                                case 3:
                                                    var_300 = r8;
                                                    sub_102c7d058(r0, r1, 0x5, "[FLog::BadgeService] GetUserBadgesAsync: Provided badgeId of type {} is not a number.", 0x55, 0xc, &var_300, 0x1);
                                                    r0 = sub_100003d78(&var_128, "GetUserBadgesAsync: badgeIds must be numeric.", 0x5);
                                                    sub_100007d9c(r19);
                                                    if ((sign_extend_64(var_111) & 0xffffffff80000000) != 0x0) {
                                                            loc_102c74a48();
                                                    }
                                                    r0 = var_110;
                                                    if (r0 != 0x0) {
                                                            r0 = loc_102c74a48();
                                                    }
                                                    break;
                                                case 4:
                                                    r0 = sub_100003d78(&var_128, "GetUserBadgesAsync: badgeIds must be numeric.", r2);
                                                    sub_100007d9c(r19);
                                                    if ((sign_extend_64(var_111) & 0xffffffff80000000) != 0x0) {
                                                            loc_102c74a48();
                                                    }
                                                    r0 = var_110;
                                                    if (r0 != 0x0) {
                                                            r0 = loc_102c74a48();
                                                    }
                                                    break;
                                                default:
                                                    r0 = sub_100003d78(&var_150, "GetUserBadgesAsync: Internal error.", r2);
                                                    sub_100007d9c(r19);
                                                    if ((sign_extend_64(var_139) & 0xffffffff80000000) != 0x0) {
                                                            loc_102c74a48();
                                                    }
                                                    r19 = var_130;
                                                    if (r19 != 0x0) {
                                                            r8 = r19 + 0x8;
                                                            asm { ldaddal    x9, x8, [x8] };
                                                            if (r8 == 0x0) {
                                                                    (*(*r19 + 0x10))(r19);
                                                                    std::__1::__shared_weak_count::__release_weak();
                                                            }
                                                    }
                                                    r0 = var_110;
                                                    if (r0 != 0x0) {
                                                            r0 = loc_102c74a48();
                                                    }
                                                    break;
                                            }
                                    }
                            }
                            else {
                                    if ((*qword_106a8d2d0 & 0xff) >= 0x6 && (*qword_106a8d2d0 >> 0x8 & 0xff) >= 0x5) {
                                            r0 = *qword_106a8d2d0;
                                            r0 = sub_102c7d058(r0, *qword_106a8d2d8, 0x5, "[FLog::BadgeService] GetUserBadgesAsync: BadgeIds are empty; returning empty array.", 0x53, 0x0, &var_300, 0x1);
                                    }
                                    sub_100201918();
                                    var_2F8 = 0x0;
                                    r0 = sub_100007d9c(r20);
                                    r19 = var_C8;
                                    if (r19 != 0x0) {
                                            r8 = r19 + 0x8;
                                            asm { ldaddal    x9, x8, [x8] };
                                            if (r8 == 0x0) {
                                                    (*(*r19 + 0x10))(r19);
                                                    r0 = std::__1::__shared_weak_count::__release_weak();
                                            }
                                    }
                                    r19 = var_2F8;
                                    if (r19 != 0x0) {
                                            r8 = r19 + 0x8;
                                            asm { ldaddal    x9, x8, [x8] };
                                            if (r8 == 0x0) {
                                                    (*(*r19 + 0x10))(r19);
                                                    r0 = std::__1::__shared_weak_count::__release_weak();
                                            }
                                    }
                            }
                    }
                    else {
                            if ((*qword_106a8d2d0 & 0xff) >= 0x6 && (*qword_106a8d2d0 >> 0x8 & 0xff) >= 0x5) {
                                    r0 = *qword_106a8d2d0;
                                    r0 = sub_102c7d058(r0, *qword_106a8d2d8, 0x5, "[FLog::BadgeService] GetUserBadgesAsync: BadgeIds are empty; returning empty array.", 0x53, 0x0, &var_300, 0x1);
                            }
                            sub_100201918();
                            var_2F8 = 0x0;
                            r0 = sub_100007d9c(r20);
                            r19 = var_C8;
                            if (r19 != 0x0) {
                                    r8 = r19 + 0x8;
                                    asm { ldaddal    x9, x8, [x8] };
                                    if (r8 == 0x0) {
                                            (*(*r19 + 0x10))(r19);
                                            r0 = std::__1::__shared_weak_count::__release_weak();
                                    }
                            }
                            r19 = var_2F8;
                            if (r19 != 0x0) {
                                    r8 = r19 + 0x8;
                                    asm { ldaddal    x9, x8, [x8] };
                                    if (r8 == 0x0) {
                                            (*(*r19 + 0x10))(r19);
                                            r0 = std::__1::__shared_weak_count::__release_weak();
                                    }
                            }
                    }
            }
            else {
                    if ((*qword_106a8d2d0 & 0xff) >= 0x6 && (*qword_106a8d2d0 >> 0x8 & 0xff) >= 0x5) {
                            r2 = 0x5;
                            sub_102c7d058(*qword_106a8d2d0, *qword_106a8d2d8, 0x5, "[FLog::BadgeService] GetUserBadgesAsync: Attempt to query non-local player from client.", 0x57, 0x0, &var_300, 0x1);
                    }
                    r0 = sub_100003d78(&var_C0, "GetUserBadgesAsync: Can only query local player from client.", r2);
                    r0 = sub_100007d9c(r19);
                    if ((sign_extend_64(var_A9) & 0xffffffff80000000) != 0x0) {
                            r0 = loc_102c74a48();
                    }
            }
    }
    else {
            r0 = sub_100003d78(&var_A0, "GetUserBadgesAsync: This API is not yet enabled.", r2);
            r0 = sub_100007d9c(r19);
            if ((sign_extend_64(var_89) & 0xffffffff80000000) != 0x0) {
                    r0 = loc_102c74a48();
            }
    }
    return r0;
}
