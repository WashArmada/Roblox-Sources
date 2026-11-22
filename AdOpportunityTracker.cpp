function sub_100098d2c {
    r31 = r31 - 0x60;
    arg_20 = d9;
    arg_28 = d8;
    arg_30 = r22;
    arg_38 = r21;
    arg_40 = r20;
    arg_48 = r19;
    arg_50 = r29;
    arg_58 = r30;
    r19 = r0;
    if (r1 != 0x0) {
            r21 = r2;
            if (r2 != 0x0) {
                    r20 = r1;
                    if (sub_100099128(r1) >> 0x20 == 0x0) {
                            asm { ccmp       w8, #0x5, #0x0, hs };
                            if (!asm { ccmp       w8, #0x5, #0x0, hs }) {
                                    r20 = r20[0xd];
                                    r0 = sub_10009920c();
                                    r8 = sign_extend_64(r20[0x17]);
                                    r9 = *r20;
                                    r10 = r20[0x1];
                                    if (r8 >= 0x0) {
                                            r9 = r20;
                                    }
                                    if (r8 < 0x0) {
                                            r8 = r10;
                                    }
                                    arg_0 = r9;
                                    loc_102c7d058(*qword_1069e61a0, *qword_1069e61a8, 0x5, "[FLog::AdOpportunityTracker] Instance '{}' is not currently trackable: {}", 0x49, 0xcd, &arg_0, 0x1, arg_0, r8, r0, 0x0);
                            }
                    }
                    else {
                            sub_1000a109c(r21);
                            r22 = arg_0;
                            r21 = arg_8;
                            if (r21 != 0x0) {
                                    r8 = r21 + 0x8;
                                    asm { ldaddal    x9, x8, [x8] };
                                    if (r8 == 0x0) {
                                            (*(*r21 + 0x10))(r21);
                                            std::__1::__shared_weak_count::__release_weak(r21);
                                    }
                            }
                            if (r22 != 0x0) {
                                    r0 = sub_1000821f8(r20);
                                    if (r0 != 0x0) {
                                            if (r0[0x21] != 0x0) {
                                                    r0 = loc_1046ec7b4();
                                                    if (r0 != 0x0) {
                                                            r21 = r0;
                                                            r22 = r20[0x3];
                                                            r0 = loc_100769a84();
                                                            if (r22[0xdc] - r0[0xdc] >= r0[0xdd]) {
                                                                    if ((r19[0x20] & 0x1) == 0x0) {
                                                                            if ((*qword_1069e61a0 & 0xff) >= 0x6 && (*qword_1069e61a0 >> 0x8 & 0xff) >= 0x3) {
                                                                                    loc_102c7d058(*qword_1069e61a0, *qword_1069e61a8, 0x3, "[FLog::AdOpportunityTracker] isInstanceCurrentlyMeetingImpressionCriteria: Instance is not a GuiButton.", 0x67, 0x0);
                                                                            }
                                                                            r19[0x20] = 0x1;
                                                                    }
                                                            }
                                                            else {
                                                                    if (sub_100089e08(r20) != 0x0) {
                                                                            (*(*r20 + 0x2d8))(r20);
                                                                            loc_10075ccfc(r20 + 0xb8);
                                                                            if (*(int8_t *)byte_1069e61e0 == 0x1) {
                                                                                    sub_100099230(r21);
                                                                            }
                                                                            else {
                                                                                    asm { fcvtzs     w1, s0 };
                                                                                    asm { fcvtzs     w2, s1 };
                                                                                    sub_100099348(r21);
                                                                            }
                                                                            sub_100004d5c(&arg_0);
                                                                    }
                                                                    else {
                                                                            if ((r19[0x20] & 0x1) == 0x0) {
                                                                                    if ((*qword_1069e61a0 & 0xff) >= 0x6 && (*qword_1069e61a0 >> 0x8 & 0xff) >= 0x3) {
                                                                                            loc_102c7d058(*qword_1069e61a0, *qword_1069e61a8, 0x3, "[FLog::AdOpportunityTracker] isInstanceCurrentlyMeetingImpressionCriteria: GuiService not found.", 0x60, 0x0);
                                                                                    }
                                                                                    r19[0x20] = 0x1;
                                                                            }
                                                                    }
                                                            }
                                                    }
                                                    else {
                                                            if ((r19[0x20] & 0x1) == 0x0) {
                                                                    if ((*qword_1069e61a0 & 0xff) >= 0x6 && (*qword_1069e61a0 >> 0x8 & 0xff) >= 0x3) {
                                                                            loc_102c7d058(*qword_1069e61a0, *qword_1069e61a8, 0x3, "[FLog::AdOpportunityTracker] isInstanceCurrentlyMeetingImpressionCriteria: PlayerGui not found.", 0x5f, 0x0);
                                                                    }
                                                                    r19[0x20] = 0x1;
                                                            }
                                                    }
                                            }
                                            else {
                                                    if ((r19[0x20] & 0x1) == 0x0) {
                                                            if ((*qword_1069e61a0 & 0xff) >= 0x6 && (*qword_1069e61a0 >> 0x8 & 0xff) >= 0x3) {
                                                                    loc_102c7d058(*qword_1069e61a0, *qword_1069e61a8, 0x3, "[FLog::AdOpportunityTracker] isInstanceCurrentlyMeetingImpressionCriteria: LocalPlayer not found.", 0x61, 0x0);
                                                            }
                                                            r19[0x20] = 0x1;
                                                    }
                                            }
                                    }
                                    else {
                                            if ((r19[0x20] & 0x1) == 0x0) {
                                                    if ((*qword_1069e61a0 & 0xff) >= 0x6 && (*qword_1069e61a0 >> 0x8 & 0xff) >= 0x3) {
                                                            loc_102c7d058(*qword_1069e61a0, *qword_1069e61a8, 0x3, "[FLog::AdOpportunityTracker] isInstanceCurrentlyMeetingImpressionCriteria: Players service not found.", 0x65, 0x0);
                                                    }
                                                    r19[0x20] = 0x1;
                                            }
                                    }
                            }
                    }
            }
            else {
                    if ((r19[0x20] & 0x1) == 0x0) {
                            asm { ccmp       w8, #0x3, #0x0, hs };
                            if (!asm { ccmp       w8, #0x3, #0x0, hs }) {
                                    loc_102c7d058(*qword_1069e61a0, *qword_1069e61a8, 0x3, "[FLog::AdOpportunityTracker] isInstanceCurrentlyMeetingImpressionCriteria: AdService not found.", 0x5f, 0x0);
                                    r19[0x20] = 0x1;
                            }
                            else {
                                    r19[0x20] = 0x1;
                            }
                    }
            }
    }
    else {
            if ((r19[0x20] & 0x1) == 0x0) {
                    asm { ccmp       w8, #0x3, #0x0, hs };
                    if (!asm { ccmp       w8, #0x3, #0x0, hs }) {
                            loc_102c7d058(*qword_1069e61a0, *qword_1069e61a8, 0x3, "[FLog::AdOpportunityTracker] isInstanceCurrentlyMeetingImpressionCriteria: instance is null.", 0x5c, 0x0);
                            r19[0x20] = 0x1;
                    }
                    else {
                            r19[0x20] = 0x1;
                    }
            }
    }
    return;
}
