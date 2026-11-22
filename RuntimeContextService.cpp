function sub_104028918 {
    arg_10 = r28;
    arg_18 = r27;
    arg_20 = r24;
    arg_28 = r23;
    arg_30 = r22;
    arg_40 = r20;
    arg_48 = r19;
    arg_50 = r29;
    arg_58 = r30;
    r31 = r31 + 0xffffffffffffffa0 - 0x2b0;
    r19 = r0;
    decomp_var_58 = **___stack_chk_guard;
    *r0 = 0x1066a7f70;
    r0[0x13] = 0x1066a81e8;
    asm { ccmp       w8, #0x6, #0x0, hs };
    if (!asm { ccmp       w8, #0x6, #0x0, hs }) {
            r0 = *qword_106a95d80;
            r0 = sub_102c7d058(r0, *qword_106a95d88, 0x6, "[FLog::RuntimeContentLog] RuntimeContentService shutting down..", 0x3f, 0x0, &arg_40, 0x1);
    }
    loc_102c8a568();
    d8 = d0;
    if (*(int8_t *)byte_106a96150 == 0x1) {
            loc_102eb8be8(&arg_40, r19 + 0xd8, 0x0);
            r23 = r19[0x1f];
            r0 = sub_102eb8b70(&arg_40);
    }
    else {
            r23 = r19[0x1f];
    }
    if (*(int8_t *)byte_106a95ef8 == 0x1) {
            sub_104029078(r19);
    }
    else {
            for (r1 = r19[0x1e]; r1 != 0x0; r1 = r24) {
                    r24 = *r1;
                    sub_104029360(r19, r1 + 0x10);
            }
    }
    loc_102c8a568();
    d8 = (d0 - d8) * 1000.0;
    arg_38 = d8;
    asm { ccmp       w9, #0x6, #0x0, hs };
    if (!asm { ccmp       w9, #0x6, #0x0, hs }) {
            r8 = d8;
            if (*(int8_t *)byte_106a95ef8 == 0x1) {
                    r10 = r19[0x189];
                    if (r10 <= 0x2) {
                            r9 = *(0x105e3acc8 + r10 * 0x8);
                            r10 = *(0x106958488 + r10 * 0x8);
                    }
                    else {
                            r10 = "unknown";
                            r9 = 0x7;
                    }
            }
            else {
                    if (r19[0x188] == 0x0) {
                            r10 = "client";
                    }
                    else {
                            r10 = "server";
                    }
                    r9 = 0x6;
            }
            arg_20 = r10;
            arg_28 = r9;
            arg_40 = &arg_20;
            arg_48 = sub_1000b949c;
            arg_50 = r8;
            arg_58 = 0x0;
            sub_102c7d058(*qword_106a95d80);
    }
    if (*(int8_t *)byte_106a96150 == 0x1) {
            sub_104027cc8(r19);
            if (arg_a0 != 0x0) {
                    r0 = sub_1040281d4(r19, &arg_40);
            }
    }
    else {
            if (r19[0x5a] != 0x0) {
                    if (*(int8_t *)byte_106a95ef8 == 0x1) {
                            sub_104028680();
                    }
                    r20 = r19 + 0x270;
                    sub_104028798();
                    r23 = &arg_40;
                    r0 = sub_10001e030(&arg_40, 0x10720ee80);
                    sub_102845b54(r23 + 0x58);
                    sub_100003d78(&arg_20, "");
                    r0 = sub_1028450e8(r23 + 0x58, &arg_20);
                    if ((sign_extend_64(arg_37) & 0xffffffff80000000) != 0x0) {
                            loc_102c74a48(arg_20);
                    }
                    sub_102845940(r23 + 0x58);
                    sub_102842318(r23 + 0x58, "TotalCreated", 0xc, r19[0x5a], 0x1);
                    sub_102842318(r23 + 0x58, "SuccessfulCreations", 0x13, r19[0x5b], 0x1);
                    sub_102842318(r23 + 0x58, "FailedCreations", 0xf, r19[0x5c], 0x1);
                    if (*(int8_t *)byte_106a95e20 == 0x1) {
                            sub_102842318(r23 + 0x58, "SuccessfulAPICreations", 0x16, r19[0x5d], 0x1);
                            sub_102842318(r23 + 0x58, "FailedAPICreations", 0x12, r19[0x5e], 0x1);
                            sub_102842318(r23 + 0x58, "SuccessfulAPICreationsImage", 0x1b, r19[0x60], 0x1);
                            sub_102842318(r23 + 0x58, "FailedAPICreationsImage", 0x17, r19[0x62], 0x1);
                            sub_102842318(r23 + 0x58, "SuccessfulAPICreationsMesh", 0x1a, r19[0x5f], 0x1);
                            sub_102842318(r23 + 0x58, "FailedAPICreationsMesh", 0x16, r19[0x61], 0x1);
                            sub_102842318(r23 + 0x58, "SuccessfulForkableImage", 0x17, r19[0x63], 0x1);
                            sub_102842318(r23 + 0x58, "FailedForkableImage", 0x13, r19[0x64], 0x1);
                            sub_102842318(r23 + 0x58, "SuccessfulForkableMesh", 0x16, r19[0x65], 0x1);
                            sub_102842318(r23 + 0x58, "FailedForkableMesh", 0x12, r19[0x66], 0x1);
                    }
                    sub_102842318(r23 + 0x58, "MaxStoredBytes", 0xe, *r20, 0x1);
                    sub_102842318(r23 + 0x58, "MaxBaseAssetStoredBytes", 0x17, r19[0x4f], 0x1);
                    sub_10284283c(r23 + 0x58, "MaxTranscodedSecond", 0x13, 0x1);
                    sub_102842318(r23 + 0x58, "CacheMissed", 0xb, r19[0x54], 0x1);
                    if (*(int8_t *)byte_106a95ef8 == 0x1) {
                            sub_10284283c(r23 + 0x58, "ShutdownCleanupTimeMs", 0x15, 0x1);
                    }
                    if (*(int8_t *)byte_106a96078 == 0x1) {
                            sub_10284283c(r23 + 0x58, "LastEstimatedQueueWaitTime", 0x1a, 0x1);
                            sub_102842318(r23 + 0x58, "TranscodesCompleted", 0x13, r19[0x57], 0x1);
                            sub_102842318(r23 + 0x58, "TranscodesEvicted", 0x11, r19[0x58], 0x1);
                            sub_102842318(r23 + 0x58, "TranscodesSkippedByPendingWrite", 0x1f, r19[0x59], 0x1);
                    }
                    if (*(int8_t *)byte_106a96108 == 0x1) {
                            r22 = r19 + 0x278;
                            r8 = *r20;
                            r8 = r8 - *r22;
                            if (r8 >= 0x0) {
                                    r3 = r8;
                            }
                            else {
                                    r3 = 0x0;
                            }
                            arg_20 = r3;
                            sub_102842318(r23 + 0x58, "MaxAcrStoredBytes", 0x11);
                            sub_102842318(r23 + 0x58, "MaxStoredBytesImage", 0x13, r19[0x50], 0x1);
                            sub_102842318(r23 + 0x58, "MaxStoredBytesMesh", 0x12, r19[0x51], 0x1);
                            sub_102842318(r23 + 0x58, "MaxBaseAssetStoredBytesImage", 0x1c, r19[0x52], 0x1);
                            sub_102842318(r23 + 0x58, "MaxBaseAssetStoredBytesMesh", 0x1b, r19[0x53], 0x1);
                            if ((*qword_106a95d80 & 0xff) >= 0x6 && (*qword_106a95d80 & 0xfc00) != 0x0) {
                                    arg_10 = r20;
                                    arg_18 = r22;
                                    arg_0 = r19 + 0x290;
                                    arg_8 = r19 + 0x298;
                                    sub_1040288ac();
                            }
                    }
                    sub_1028550fc(&arg_40);
                    r0 = sub_100017728(&arg_40, 0x106896828);
            }
    }
    if (*(int8_t *)byte_106a95e80 == 0x1) {
            r8 = r19[0x80];
            sub_103db90c0();
    }
    r0 = r19[0x80];
    if (r0 != 0x0) {
            (*(*r0 + 0x10))();
    }
    sub_10403fc14(r19 + 0x248);
    sub_10403fd4c(r19 + 0x220);
    sub_1000847dc(r19 + 0x1f8);
    sub_1040427dc(r19 + 0x1d8);
    loc_102eb8eb0(r19 + 0x1d0);
    sub_1000847dc(r19 + 0x1a8);
    loc_102eb8eb0(r19 + 0x1a0);
    if (r19[0x33] != 0x0) {
            std::__1::__shared_weak_count::__release_weak();
    }
    sub_103ab3dd8(r19 + 0x130);
    sub_1000152a0(r19 + 0x108);
    loc_104042710(r19 + 0xe0);
    loc_102eb8eb0(r19 + 0xd8);
    sub_10035dc84(r19 + 0xa8);
    sub_104027c80(r19);
    if (**___stack_chk_guard != decomp_var_58) {
            __stack_chk_fail();
    }
    return;
}
