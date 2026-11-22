int sub_104f71940(int arg0, int arg1) {
    r31 = r31 - 0x140;
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
    var_128 = r8;
    loc_100081824(arg0, arg1);
    var_120 = arg0;
    var_80 = sub_102a0fa4c(arg0, "itemId", 0x6);
    r0 = sub_102a0e548(&var_80);
    if (r0 != 0x0) {
            var_90 = sub_102a0fa4c(var_120, "itemId", 0x6);
            var_88 = r1;
            sub_1005f07e8();
            r19 = *var_128;
            sub_100004130(&var_B0, "ItemId", r2);
            var_C8 = &var_B0;
            r0 = sub_10020b384(r19, &var_B0, 0x1059b8ec8, &var_C8, &var_D8);
            r19 = r0;
            r19[0x5] = sub_10160f518();
            r0 = sub_100055ef8(r19 + 0x30, &var_80);
            if ((sign_extend_64(var_99) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
            if ((sign_extend_64(var_69) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
    }
    var_80 = sub_102a0fa4c(var_120, "referenceId", 0xb);
    r0 = sub_102a0e548(&var_80);
    if (r0 != 0x0) {
            var_90 = sub_102a0fa4c(var_120, "referenceId", 0xb);
            var_88 = r1;
            sub_1005f07e8();
            r19 = *var_128;
            sub_100004130(&var_B0, "ReferenceId", r2);
            var_C8 = &var_B0;
            r0 = sub_10020b384(r19, &var_B0, 0x1059b8ec8, &var_C8, &var_D8);
            r19 = r0;
            r19[0x5] = sub_10160f518();
            r0 = sub_100055ef8(r19 + 0x30, &var_80);
            if ((sign_extend_64(var_99) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
            if ((sign_extend_64(var_69) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
    }
    var_80 = sub_102a0fa4c(var_120, "creator", 0x7);
    r0 = sub_102a0fcd4(&var_80);
    if (r0 != 0x0) {
            var_B0 = sub_102a0fa4c(var_120, "creator", 0x7);
            r0 = sub_102a0fa4c(&var_B0, "creatorId", 0x9);
            var_80 = r0;
            var_78 = r1;
            r0 = sub_102a0ffcc(&var_80, 0x0);
            var_D8 = r0;
            var_90 = sub_102a0fa4c(var_120, "creator", 0x7);
            var_88 = r1;
            r0 = sub_102a0fa4c(&var_90, "creatorType", 0xb);
            var_B0 = r0;
            var_A8 = r1;
            loc_100081824(sub_1005f07e8(), r1);
            r19 = var_90;
            r20 = &var_B0;
            sub_100004130(&var_B0, "CreatorId", r2);
            var_C8 = r20;
            r0 = sub_10020b384(r19, &var_B0, 0x1059b8ec8, &var_C8, &var_100);
            r19 = r0;
            r19[0x5] = sub_10160f3b0();
            r0 = sub_100062e0c(r19 + 0x30, &var_D8);
            if ((sign_extend_64(var_99) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
            r0 = sub_1031608c0();
            r9 = var_80;
            r8 = &var_80;
            if (sign_extend_64(var_69) >= 0x0) {
                    r1 = r8;
            }
            else {
                    r1 = r9;
            }
            r2 = &var_E8;
            if (sub_101607388(r0, r1, r2) != 0x0) {
                    sub_100004130(&var_B0, "CreatorType", r2);
                    var_C8 = &var_B0;
                    r2 = 0x1059b8ec8;
                    r0 = sub_10020b384(var_90, &var_B0, 0x1059b8ec8, &var_C8, &var_100);
                    r19 = r0;
                    r19[0x5] = loc_104881cc8();
                    r0 = sub_10315a224(r19 + 0x30, &var_E8);
                    if ((sign_extend_64(var_99) & 0xffffffff80000000) != 0x0) {
                            r2 = 0x1059b8ec8;
                            loc_1029f6b00();
                    }
            }
            else {
                    if ((*qword_106c6e188 & 0xff) >= 0x6 && (*qword_106c6e188 >> 0x8 & 0xff) >= 0x3) {
                            r8 = sign_extend_64(var_69);
                            r9 = &var_80;
                            r10 = var_80;
                            r11 = var_78;
                            if (r8 < 0x0) {
                                    r9 = r10;
                            }
                            if (r8 < 0x0) {
                                    r8 = r11;
                            }
                            r1 = *qword_106c6e190;
                            r0 = *qword_106c6e188;
                            var_B0 = r9;
                            var_A8 = r8;
                            r2 = 0x3;
                            r0 = sub_1029fea60(r0, r1, 0x3, "[DFLog::RecommendationSystem] Invalid creator type: {}", 0x36, 0xd, &var_B0, 0x1);
                    }
            }
            r19 = *var_128;
            sub_100004130(&var_B0, "Creator", r2);
            var_C8 = &var_B0;
            r0 = sub_10020b384(r19, &var_B0, 0x1059b8ec8, &var_C8, &var_100);
            r19 = r0;
            r19[0x5] = sub_101612e6c();
            r0 = sub_100290c34(r19 + 0x30, &var_90);
            if ((sign_extend_64(var_99) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
            r19 = var_88;
            if (r19 != 0x0) {
                    r8 = r19 + 0x8;
                    asm { ldaddal    x9, x8, [x8] };
                    if (r8 == 0x0) {
                            (*(*r19 + 0x10))(r19);
                            std::__1::__shared_weak_count::__release_weak();
                    }
            }
            if ((sign_extend_64(var_69) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
    }
    var_80 = sub_102a0fa4c(var_120, "visibilityStatus", 0x10);
    var_78 = r1;
    r0 = sub_102a0e548(&var_80);
    if (r0 != 0x0) {
            var_B0 = sub_102a0fa4c(var_120, "visibilityStatus", 0x10);
            var_A8 = r1;
            sub_1005f07e8();
            r0 = sub_104f6a054();
            r9 = var_80;
            r8 = &var_80;
            if (sign_extend_64(var_69) >= 0x0) {
                    r1 = r8;
            }
            else {
                    r1 = r9;
            }
            r2 = &var_C8;
            if (sub_101607388(r0, r1, r2) != 0x0) {
                    r19 = *var_128;
                    sub_100004130(&var_B0, "Visibility", r2);
                    var_90 = &var_B0;
                    r0 = sub_10020b384(r19, &var_B0, 0x1059b8ec8, &var_90, &var_D8);
                    r19 = r0;
                    r19[0x5] = sub_104f6a050();
                    r0 = sub_104f7336c(r19 + 0x30, &var_C8);
                    if ((sign_extend_64(var_99) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            else {
                    if ((*qword_106c6e188 & 0xff) >= 0x6 && (*qword_106c6e188 >> 0x8 & 0xff) >= 0x3) {
                            r8 = sign_extend_64(var_69);
                            r9 = &var_80;
                            r10 = var_80;
                            r11 = var_78;
                            if (r8 < 0x0) {
                                    r9 = r10;
                            }
                            if (r8 < 0x0) {
                                    r8 = r11;
                            }
                            r1 = *qword_106c6e190;
                            r0 = *qword_106c6e188;
                            var_B0 = r9;
                            var_A8 = r8;
                            r0 = sub_1029fea60(r0, r1, 0x3, "[DFLog::RecommendationSystem] Invalid visibility status: {}", 0x3b, 0xd, &var_B0, 0x1);
                    }
            }
            if ((sign_extend_64(var_69) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
    }
    var_80 = sub_102a0fa4c(var_120, "customTags", 0xa);
    r0 = sub_102a0fcf8(&var_80);
    if (r0 != 0x0) {
            sub_10020aaf8();
            r2 = 0xa;
            var_80 = sub_102a0fa4c(var_120, "customTags", 0xa);
            r0 = sub_102a1004c(&var_80);
            var_C8 = r0;
            r0 = sub_102a101d4(&var_C8);
            var_D8 = r0;
            r0 = sub_102a101e0(&var_C8);
            var_E8 = r0;
            while (true) {
                    r1 = &var_E8;
                    r0 = sub_10281cff4(&var_D8, r1);
                    if ((r0 & 0x1) == 0x0) {
                            break;
                    }
                    r0 = sub_102a10254(&var_D8);
                    var_90 = r0;
                    var_88 = r1;
                    r0 = sub_102a0e548(&var_90);
                    if (r0 != 0x0) {
                            r19 = var_B0;
                            sub_1005f07e8();
                            r0 = r19 + 0x10;
                            r8 = *r0;
                            r20 = r0[0xffffffffffffffff];
                            if (r20 < r8) {
                                    r2 = &var_80;
                                    sub_1000691d8(r0, r20, r2);
                                    r0 = r20 + 0x50;
                                    r19[0x1] = r0;
                            }
                            else {
                                    r0 = sub_1000690a4(r19, &var_80, r2);
                            }
                            r19[0x1] = r0;
                            if ((sign_extend_64(var_69) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00();
                            }
                    }
                    r0 = sub_102a10264(&var_D8);
            }
            if (*var_B0 != var_B0[0x1]) {
                    r19 = *var_128;
                    sub_100004130(&var_80, "CustomTags", r2);
                    var_90 = &var_80;
                    r0 = sub_10020b384(r19, &var_80, 0x1059b8ec8, &var_90, &var_C8);
                    r19 = r0;
                    r19[0x5] = sub_101612cd4();
                    r0 = sub_10020d5dc(r19 + 0x30, &var_B0);
                    if ((sign_extend_64(var_69) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            r19 = var_A8;
            if (r19 != 0x0) {
                    r8 = r19 + 0x8;
                    asm { ldaddal    x9, x8, [x8] };
                    if (r8 == 0x0) {
                            (*(*r19 + 0x10))(r19);
                            std::__1::__shared_weak_count::__release_weak();
                    }
            }
    }
    var_80 = sub_102a0fa4c(var_120, "contentAttributes", 0x11);
    r0 = sub_102a0fcf8(&var_80);
    if (r0 != 0x0) {
            sub_10020aaf8();
            r2 = 0x11;
            var_80 = sub_102a0fa4c(var_120, "contentAttributes", 0x11);
            r0 = sub_102a1004c(&var_80);
            var_118 = r0;
            r0 = sub_102a101d4(&var_118);
            var_68 = r0;
            r0 = sub_102a101e0(&var_118);
            r20 = "assetId";
            var_B8 = r0;
            r21 = &var_80;
            r24 = 0x105f5cdd6;
            r26 = "seekStartTimeSeconds";
            while (true) {
                    r1 = &var_B8;
                    r0 = sub_10281cff4(&var_68, r1);
                    if ((r0 & 0x1) == 0x0) {
                            break;
                    }
                    r0 = sub_102a10254(&var_68);
                    var_C8 = r0;
                    r0 = sub_102a0fcd4(&var_C8);
                    if (r0 == 0x0) {
                            r0 = sub_102a10264(&var_68);
                            continue;
                    }
                    loc_100081824(r0, r1);
                    r1 = r20;
                    r0 = sub_102a0fa4c(&var_C8, r1, 0x7);
                    var_80 = r0;
                    r0 = sub_102a0e4a4(&var_80);
                    if (r0 != 0x0) {
                            r0 = sub_102a0fa4c(&var_C8, r20, 0x7);
                            var_B0 = r0;
                            r0 = sub_102a0ffcc(&var_B0, 0x0);
                            var_100 = r0;
                            sub_100004130(&var_80, "AssetId", r2);
                            var_E8 = r21;
                            r0 = sub_10020b384(var_D8, &var_80, 0x1059b8ec8, &var_E8, &var_F0);
                            r19 = r0;
                            r19[0x5] = sub_10160f3b0();
                            r0 = sub_100062e0c(r19 + 0x30, &var_100);
                            if ((sign_extend_64(var_69) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00();
                            }
                    }
                    r1 = r24;
                    r0 = sub_102a0fa4c(&var_C8, r1, 0x4);
                    var_80 = r0;
                    r0 = sub_102a0e548(&var_80);
                    if (r0 != 0x0) {
                            r0 = sub_102a0fa4c(&var_C8, r24, 0x4);
                            var_E8 = r0;
                            sub_1005f07e8();
                            sub_100004130(&var_B0, 0x105f5cddb, r2);
                            var_100 = &var_B0;
                            r0 = sub_10020b384(var_D8, &var_B0, 0x1059b8ec8, &var_100, &var_F0);
                            r19 = r0;
                            r19[0x5] = sub_10160f518();
                            r0 = sub_100055ef8(r19 + 0x30, &var_80);
                            if ((sign_extend_64(var_99) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00();
                            }
                            if ((sign_extend_64(var_69) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00();
                            }
                    }
                    r1 = r26;
                    r0 = sub_102a0fa4c(&var_C8, r1, 0x14);
                    var_80 = r0;
                    r0 = sub_102a0e528(&var_80);
                    if (r0 != 0x0) {
                            r0 = sub_102a0fa4c(&var_C8, r26, 0x14);
                            var_B0 = r0;
                            r0 = sub_102a0febc(&var_B0);
                            var_100 = d0;
                            sub_100004130(&var_80, "SeekStartTime", r2);
                            var_E8 = r21;
                            r0 = sub_10020b384(var_D8, &var_80, 0x1059b8ec8, &var_E8, &var_F0);
                            r19 = r0;
                            r19[0x5] = sub_10160f464();
                            r0 = sub_1000a77b4(r19 + 0x30, &var_100);
                            if ((sign_extend_64(var_69) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00();
                            }
                    }
                    r0 = sub_102a0fa4c(&var_C8, "seekEndTimeSeconds", 0x12);
                    var_80 = r0;
                    r0 = sub_102a0e528(&var_80);
                    if (r0 != 0x0) {
                            r0 = sub_102a0fa4c(&var_C8, "seekEndTimeSeconds", 0x12);
                            var_B0 = r0;
                            r0 = sub_102a0febc(&var_B0);
                            var_100 = d0;
                            sub_100004130(&var_80, "SeekEndTime", r2);
                            var_E8 = r21;
                            r0 = sub_10020b384(var_D8, &var_80, 0x1059b8ec8, &var_E8, &var_F0);
                            r19 = r0;
                            r19[0x5] = sub_10160f464();
                            r0 = sub_1000a77b4(r19 + 0x30, &var_100);
                            if ((sign_extend_64(var_69) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00();
                            }
                    }
                    r0 = sub_102a0fa4c(&var_C8, "trimStartTimeSeconds", 0x14);
                    var_80 = r0;
                    r0 = sub_102a0e528(&var_80);
                    if (r0 != 0x0) {
                            r0 = sub_102a0fa4c(&var_C8, "trimStartTimeSeconds", 0x14);
                            var_B0 = r0;
                            r0 = sub_102a0febc(&var_B0);
                            var_100 = d0;
                            sub_100004130(&var_80, "TrimStartTime", r2);
                            var_E8 = r21;
                            r0 = sub_10020b384(var_D8, &var_80, 0x1059b8ec8, &var_E8, &var_F0);
                            r19 = r0;
                            r19[0x5] = sub_10160f464();
                            r0 = sub_1000a77b4(r19 + 0x30, &var_100);
                            if ((sign_extend_64(var_69) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00();
                            }
                    }
                    r0 = sub_102a0fa4c(&var_C8, "trimEndTimeSeconds", 0x12);
                    var_80 = r0;
                    r0 = sub_102a0e528(&var_80);
                    if (r0 != 0x0) {
                            r0 = sub_102a0fa4c(&var_C8, "trimEndTimeSeconds", 0x12);
                            var_B0 = r0;
                            r0 = sub_102a0febc(&var_B0);
                            var_100 = d0;
                            sub_100004130(&var_80, "TrimEndTime", r2);
                            var_E8 = r21;
                            r0 = sub_10020b384(var_D8, &var_80, 0x1059b8ec8, &var_E8, &var_F0);
                            r19 = r0;
                            r19[0x5] = sub_10160f464();
                            r0 = sub_1000a77b4(r19 + 0x30, &var_100);
                            if ((sign_extend_64(var_69) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00();
                            }
                    }
                    r2 = 0x12;
                    r0 = sub_102a0fa4c(&var_C8, "contentDescription", 0x12);
                    var_80 = r0;
                    r0 = sub_102a0e548(&var_80);
                    if (r0 != 0x0) {
                            r0 = sub_102a0fa4c(&var_C8, "contentDescription", 0x12);
                            var_E8 = r0;
                            sub_1005f07e8();
                            sub_100004130(&var_B0, "Description", r2);
                            var_100 = &var_B0;
                            r2 = 0x1059b8ec8;
                            r0 = sub_10020b384(var_D8, &var_B0, 0x1059b8ec8, &var_100, &var_F0);
                            r19 = r0;
                            r19[0x5] = sub_10160f518();
                            r0 = sub_100055ef8(r19 + 0x30, &var_80);
                            if ((sign_extend_64(var_99) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00();
                            }
                            if ((sign_extend_64(var_69) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00();
                            }
                    }
                    if (var_D8[0x3] != 0x0) {
                            r28 = r26;
                            r26 = r24;
                            r24 = r20;
                            r19 = var_90;
                            r20 = r19[0x1];
                            r0 = r19 + 0x10;
                            if (r20 < *r0) {
                                    r2 = &var_D8;
                                    sub_100290bc8(r0, r20, r2);
                                    r0 = r20 + 0x50;
                                    r19[0x1] = r0;
                            }
                            else {
                                    r0 = sub_100290a94(r19, &var_D8, r2);
                            }
                            r20 = r24;
                            r19[0x1] = r0;
                            r24 = r26;
                            r26 = r28;
                    }
                    r19 = var_D0;
                    if (r19 != 0x0) {
                            r8 = r19 + 0x8;
                            asm { ldaddal    x9, x8, [x8] };
                            if (r8 == 0x0) {
                                    (*(*r19 + 0x10))(r19);
                                    std::__1::__shared_weak_count::__release_weak();
                            }
                    }
                    r0 = sub_102a10264(&var_68);
            }
            if (*var_90 != var_90[0x1]) {
                    r19 = *var_128;
                    sub_100004130(&var_80, "Attributes", r2);
                    var_B0 = &var_80;
                    r0 = sub_10020b384(r19, &var_80, 0x1059b8ec8, &var_B0, &var_C8);
                    r19 = r0;
                    r19[0x5] = sub_101612cd4();
                    r0 = sub_10020d5dc(r19 + 0x30, &var_90);
                    if ((sign_extend_64(var_69) & 0xffffffff80000000) != 0x0) {
                            r0 = loc_1029f6b00();
                    }
            }
            r19 = var_88;
            if (r19 != 0x0) {
                    r8 = r19 + 0x8;
                    asm { ldaddal    x9, x8, [x8] };
                    if (r8 == 0x0) {
                            (*(*r19 + 0x10))(r19);
                            r0 = std::__1::__shared_weak_count::__release_weak();
                    }
            }
    }
    if (*(int8_t *)byte_106c6e110 == 0x1) {
            var_80 = sub_102a0fa4c(var_120, "stats", 0x5);
            r0 = sub_102a0fcd4(&var_80);
            if (r0 != 0x0) {
                    loc_100081824(r0, "stats");
                    var_C8 = sub_102a0fa4c(var_120, "stats", 0x5);
                    r0 = sub_102a0fa4c(&var_C8, "impressions", 0xb);
                    var_80 = r0;
                    r0 = sub_102a0fcf8(&var_80);
                    if (r0 != 0x0) {
                            sub_10020aaf8();
                            r2 = 0xb;
                            r0 = sub_102a0fa4c(&var_C8, "impressions", 0xb);
                            var_80 = r0;
                            r0 = sub_102a1004c(&var_80);
                            var_68 = r0;
                            r0 = sub_102a101d4(&var_68);
                            var_B8 = r0;
                            r0 = sub_102a101e0(&var_68);
                            var_F0 = r0;
                            r26 = &var_80;
                            r27 = &var_B0;
                            while (true) {
                                    r1 = &var_F0;
                                    r0 = sub_10281cff4(&var_B8, r1);
                                    if ((r0 & 0x1) == 0x0) {
                                            break;
                                    }
                                    r0 = sub_102a10254(&var_B8);
                                    var_E8 = r0;
                                    r0 = sub_102a0fcd4(&var_E8);
                                    if ((r0 & 0x1) == 0x0) {
                                            r0 = sub_102a10264(&var_B8);
                                            continue;
                                    }
                                    loc_100081824(r0, r1);
                                    r0 = sub_102a0fa4c(&var_E8, "impressionType", 0xe);
                                    var_80 = r0;
                                    r0 = sub_102a0e548(&var_80);
                                    if (r0 != 0x0) {
                                            r0 = sub_102a0fa4c(&var_E8, "impressionType", 0xe);
                                            var_B0 = r0;
                                            sub_1005f07e8();
                                            r0 = sub_104f69a38();
                                            r9 = var_80;
                                            if (sign_extend_64(var_69) >= 0x0) {
                                                    r1 = r26;
                                            }
                                            else {
                                                    r1 = r9;
                                            }
                                            r2 = &var_108;
                                            if (sub_101607388(r0, r1, r2) != 0x0) {
                                                    sub_100004130(&var_B0, "ImpressionType", r2);
                                                    var_118 = r27;
                                                    r0 = sub_10020b384(var_100, &var_B0, 0x1059b8ec8, &var_118, &decomp_var_59);
                                                    r24 = r0;
                                                    r24[0x5] = sub_104f69a34();
                                                    r0 = sub_104f6d954(r24 + 0x30, &var_108);
                                                    if ((sign_extend_64(var_99) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                            }
                                            if ((sign_extend_64(var_69) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                    }
                                    r2 = 0x6;
                                    r0 = sub_102a0fa4c(&var_E8, "counts", 0x6);
                                    var_80 = r0;
                                    r0 = sub_102a0fd40(&var_80);
                                    if (r0 != 0x0) {
                                            r0 = sub_102a0fa4c(&var_E8, "counts", 0x6);
                                            var_B0 = r0;
                                            r0 = sub_102a0ffcc(&var_B0, 0x0);
                                            var_108 = r0;
                                            sub_100004130(&var_80, "Counts", r2);
                                            var_118 = r26;
                                            r2 = 0x1059b8ec8;
                                            r0 = sub_10020b384(var_100, &var_80, 0x1059b8ec8, &var_118, &decomp_var_59);
                                            r24 = r0;
                                            r24[0x5] = sub_10160f3b0();
                                            r0 = sub_100062e0c(r24 + 0x30, &var_108);
                                            if ((sign_extend_64(var_69) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                    }
                                    if (var_100[0x3] != 0x0) {
                                            r24 = var_D8;
                                            r25 = r24[0x1];
                                            r0 = r24 + 0x10;
                                            if (r25 < *r0) {
                                                    r2 = &var_100;
                                                    sub_100290bc8(r0, r25, r2);
                                                    r0 = r25 + 0x50;
                                                    r24[0x1] = r0;
                                            }
                                            else {
                                                    r0 = sub_100290a94(r24, &var_100, r2);
                                            }
                                            r24[0x1] = r0;
                                    }
                                    r24 = var_F8;
                                    if (r24 != 0x0) {
                                            r8 = r24 + 0x8;
                                            asm { ldaddal    x28, x8, [x8] };
                                            if (r8 == 0x0) {
                                                    (*(*r24 + 0x10))(r24);
                                                    std::__1::__shared_weak_count::__release_weak();
                                            }
                                    }
                                    r0 = sub_102a10264(&var_B8);
                            }
                            if (*var_D8 != var_D8[0x1]) {
                                    sub_100004130(&var_80, "Impressions", r2);
                                    var_B0 = &var_80;
                                    r0 = sub_10020b384(var_90, &var_80, 0x1059b8ec8, &var_B0, &var_E8);
                                    r19 = r0;
                                    r19[0x5] = sub_101612cd4();
                                    r0 = sub_10020d5dc(r19 + 0x30, &var_D8);
                                    if ((sign_extend_64(var_69) & 0xffffffff80000000) != 0x0) {
                                            loc_1029f6b00();
                                    }
                            }
                            r19 = var_D0;
                            if (r19 != 0x0) {
                                    r8 = r19 + 0x8;
                                    asm { ldaddal    x9, x8, [x8] };
                                    if (r8 == 0x0) {
                                            (*(*r19 + 0x10))(r19);
                                            std::__1::__shared_weak_count::__release_weak();
                                    }
                            }
                    }
                    r2 = 0x7;
                    r0 = sub_102a0fa4c(&var_C8, "actions", 0x7);
                    var_80 = r0;
                    r0 = sub_102a0fcf8(&var_80);
                    if (r0 != 0x0) {
                            sub_10020aaf8();
                            r2 = 0x7;
                            r0 = sub_102a0fa4c(&var_C8, "actions", 0x7);
                            var_80 = r0;
                            r0 = sub_102a1004c(&var_80);
                            var_B8 = r0;
                            r0 = sub_102a101d4(&var_B8);
                            var_F0 = r0;
                            r0 = sub_102a101e0(&var_B8);
                            var_108 = r0;
                            r28 = &var_80;
                            r20 = &var_B0;
                            while (true) {
                                    r1 = &var_108;
                                    r0 = sub_10281cff4(&var_F0, r1);
                                    if ((r0 & 0x1) == 0x0) {
                                            break;
                                    }
                                    r0 = sub_102a10254(&var_F0);
                                    var_E8 = r0;
                                    r0 = sub_102a0fcd4(&var_E8);
                                    if ((r0 & 0x1) == 0x0) {
                                            r0 = sub_102a10264(&var_F0);
                                            continue;
                                    }
                                    loc_100081824(r0, r1);
                                    r0 = sub_102a0fa4c(&var_E8, "actionType", 0xa);
                                    var_80 = r0;
                                    r0 = sub_102a0e548(&var_80);
                                    if (r0 != 0x0) {
                                            r0 = sub_102a0fa4c(&var_E8, "actionType", 0xa);
                                            var_B0 = r0;
                                            sub_1005f07e8();
                                            r0 = sub_104f6941c();
                                            r9 = var_80;
                                            if (sign_extend_64(var_69) >= 0x0) {
                                                    r1 = r28;
                                            }
                                            else {
                                                    r1 = r9;
                                            }
                                            r2 = &var_68;
                                            if (sub_101607388(r0, r1, r2) != 0x0) {
                                                    sub_100004130(&var_B0, "ActionType", r2);
                                                    var_118 = r20;
                                                    r0 = sub_10020b384(var_100, &var_B0, 0x1059b8ec8, &var_118, &decomp_var_59);
                                                    r26 = r0;
                                                    r26[0x5] = sub_104f69418();
                                                    r0 = sub_104f6dea4(r26 + 0x30, &var_68);
                                                    if ((sign_extend_64(var_99) & 0xffffffff80000000) != 0x0) {
                                                            loc_1029f6b00();
                                                    }
                                            }
                                            if ((sign_extend_64(var_69) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                    }
                                    r0 = sub_102a0fa4c(&var_E8, "reactionType", 0xc);
                                    var_80 = r0;
                                    r0 = sub_102a0e548(&var_80);
                                    if (r0 != 0x0) {
                                            r0 = sub_102a0fa4c(&var_E8, "reactionType", 0xc);
                                            sub_1005f07e8();
                                            sub_100004130(&var_B0, "ReactionType", r2);
                                            var_68 = r20;
                                            r0 = sub_10020b384(var_100, &var_B0, 0x1059b8ec8, &var_68, &decomp_var_59);
                                            r26 = r0;
                                            r26[0x5] = sub_10160f518();
                                            r0 = sub_100055ef8(r26 + 0x30, &var_80);
                                            if ((sign_extend_64(var_99) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                            if ((sign_extend_64(var_69) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                    }
                                    r2 = 0x6;
                                    r0 = sub_102a0fa4c(&var_E8, "counts", 0x6);
                                    var_80 = r0;
                                    r0 = sub_102a0fd40(&var_80);
                                    if (r0 != 0x0) {
                                            r0 = sub_102a0fa4c(&var_E8, "counts", 0x6);
                                            var_B0 = r0;
                                            r0 = sub_102a0ffcc(&var_B0, 0x0);
                                            var_68 = r0;
                                            sub_100004130(&var_80, "Counts", r2);
                                            var_118 = r28;
                                            r2 = 0x1059b8ec8;
                                            r0 = sub_10020b384(var_100, &var_80, 0x1059b8ec8, &var_118, &decomp_var_59);
                                            r26 = r0;
                                            r26[0x5] = sub_10160f3b0();
                                            r0 = sub_100062e0c(r26 + 0x30, &var_68);
                                            if ((sign_extend_64(var_69) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00();
                                            }
                                    }
                                    if (var_100[0x3] != 0x0) {
                                            r26 = var_D8;
                                            r27 = r26[0x1];
                                            r0 = r26 + 0x10;
                                            if (r27 < *r0) {
                                                    r2 = &var_100;
                                                    sub_100290bc8(r0, r27, r2);
                                                    r0 = r27 + 0x50;
                                                    r26[0x1] = r0;
                                            }
                                            else {
                                                    r0 = sub_100290a94(r26, &var_100, r2);
                                            }
                                            r26[0x1] = r0;
                                    }
                                    r26 = var_F8;
                                    if (r26 != 0x0) {
                                            r8 = r26 + 0x8;
                                            asm { ldaddal    x23, x8, [x8] };
                                            if (r8 == 0x0) {
                                                    (*(*r26 + 0x10))(r26);
                                                    std::__1::__shared_weak_count::__release_weak();
                                            }
                                    }
                                    r0 = sub_102a10264(&var_F0);
                            }
                            if (*var_D8 != var_D8[0x1]) {
                                    sub_100004130(&var_80, "Actions", r2);
                                    var_B0 = &var_80;
                                    r2 = 0x1059b8ec8;
                                    r0 = sub_10020b384(var_90, &var_80, 0x1059b8ec8, &var_B0, &var_E8);
                                    r19 = r0;
                                    r19[0x5] = sub_101612cd4();
                                    r0 = sub_10020d5dc(r19 + 0x30, &var_D8);
                                    if ((sign_extend_64(var_69) & 0xffffffff80000000) != 0x0) {
                                            r2 = 0x1059b8ec8;
                                            r0 = loc_1029f6b00();
                                    }
                            }
                            r19 = var_D0;
                            if (r19 != 0x0) {
                                    r8 = r19 + 0x8;
                                    asm { ldaddal    x9, x8, [x8] };
                                    if (r8 == 0x0) {
                                            (*(*r19 + 0x10))(r19);
                                            r0 = std::__1::__shared_weak_count::__release_weak();
                                    }
                            }
                    }
                    if (var_90[0x3] != 0x0) {
                            r19 = *var_128;
                            sub_100004130(&var_80, "Stats", r2);
                            var_B0 = &var_80;
                            r0 = sub_10020b384(r19, &var_80, 0x1059b8ec8, &var_B0, &var_D8);
                            r19 = r0;
                            r19[0x5] = sub_101612e6c();
                            r0 = sub_100290c34(r19 + 0x30, &var_90);
                            if ((sign_extend_64(var_69) & 0xffffffff80000000) != 0x0) {
                                    r0 = loc_1029f6b00();
                            }
                    }
                    r19 = var_88;
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
    return r0;
}
