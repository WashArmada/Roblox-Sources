function sub_100bb55e0 {
    r31 = r31 - 0x50;
    arg_20 = r22;
    arg_28 = r21;
    arg_30 = r20;
    arg_38 = r19;
    arg_40 = r29;
    arg_48 = r30;
    r29 = &arg_40;
    r19 = r0;
    if (loc_10407dd08() != *r0) {
            r20 = *r19;
            if (loc_10160f518() == r20) {
                    r20 = *r19;
                    if (loc_10160f518() == r20) {
                            r20 = r19 + 0x10;
                            if (r19[0x1] != 0x0) {
                                    r21 = r20;
                            }
                            else {
                                    r21 = 0x0;
                            }
                            sub_100bb5520();
                            r8 = sign_extend_64(r21[0x17]);
                            r9 = *r21;
                            if (loc_101607388() != 0x0) {
                                    r0 = sub_100ae2d58();
                                    r8 = r19[0x1];
                                    if (r8 != r0) {
                                            r21 = r0;
                                            if (r8 != 0x0) {
                                                    (r8[0x2])(r20);
                                            }
                                            r19[0x4] = arg_1c;
                                            r19[0x1] = r21;
                                    }
                                    else {
                                            *(int32_t *)r20 = arg_1c;
                                    }
                                    r0 = loc_10407dd08();
                                    *r19 = r0;
                                    if (loc_10407dd08() == r0) {
                                    }
                                    else {
                                            r0 = loc_1029fe0a0("Variant cast failed");
                                            r19 = r0;
                                            *loc_101606bb0() = 0x1067128b0;
                                            loc_101606a20(0x1070dcbb0, "ToPlace", 0x0, 0x0, 0x0, r19);
                                            loc_101606a20(0x1070dcbe8, "ToInstance", 0x0, 0x0, 0x1, r19);
                                            loc_101606a20(0x1070dcc20, "ToReservedServer", 0x0, 0x0, 0x2, r19);
                                            loc_101606a20(0x1070dcc58, "ToVIPServer", 0x0, 0x0, 0x3, r19);
                                            loc_101606a20(0x1070dcc90, "ToInstanceBack", 0x0, 0x0, 0x4, r19);
                                            r19[0x8] = 0x1070dcbb0;
                                            r19[0x9] = 0x5;
                                            r19[0xa] = 0x1059e54e8;
                                            r19[0xb] = 0x5;
                                    }
                            }
                            else {
                                    r19 = *(*r19 + 0x8);
                                    if ((sign_extend_64(r19[0x17]) & 0xffffffff80000000) != 0x0) {
                                            r19 = *r19;
                                    }
                                    r8 = *(sub_100bdbe90() + 0x8);
                                    if ((sign_extend_64(r8[0x17]) & 0xffffffff80000000) != 0x0) {
                                            r8 = *r8;
                                    }
                                    loc_1029fe0a0("Unable to cast %s to %s");
                                    r0 = loc_1029fe0a0("Variant cast failed");
                                    r19 = r0;
                                    *loc_101606bb0() = 0x1067128b0;
                                    loc_101606a20(0x1070dcbb0, "ToPlace", 0x0, 0x0, 0x0, r19);
                                    loc_101606a20(0x1070dcbe8, "ToInstance", 0x0, 0x0, 0x1, r19);
                                    loc_101606a20(0x1070dcc20, "ToReservedServer", 0x0, 0x0, 0x2, r19);
                                    loc_101606a20(0x1070dcc58, "ToVIPServer", 0x0, 0x0, 0x3, r19);
                                    loc_101606a20(0x1070dcc90, "ToInstanceBack", 0x0, 0x0, 0x4, r19);
                                    r19[0x8] = 0x1070dcbb0;
                                    r19[0x9] = 0x5;
                                    r19[0xa] = 0x1059e54e8;
                                    r19[0xb] = 0x5;
                            }
                    }
                    else {
                            r0 = loc_1029fe0a0("Variant cast failed");
                            r19 = r0;
                            *loc_101606bb0() = 0x1067128b0;
                            loc_101606a20(0x1070dcbb0, "ToPlace", 0x0, 0x0, 0x0, r19);
                            loc_101606a20(0x1070dcbe8, "ToInstance", 0x0, 0x0, 0x1, r19);
                            loc_101606a20(0x1070dcc20, "ToReservedServer", 0x0, 0x0, 0x2, r19);
                            loc_101606a20(0x1070dcc58, "ToVIPServer", 0x0, 0x0, 0x3, r19);
                            loc_101606a20(0x1070dcc90, "ToInstanceBack", 0x0, 0x0, 0x4, r19);
                            r19[0x8] = 0x1070dcbb0;
                            r19[0x9] = 0x5;
                            r19[0xa] = 0x1059e54e8;
                            r19[0xb] = 0x5;
                    }
            }
            else {
                    r19 = *(*r19 + 0x8);
                    if ((sign_extend_64(r19[0x17]) & 0xffffffff80000000) != 0x0) {
                            r19 = *r19;
                    }
                    r8 = *(sub_100bdbe90() + 0x8);
                    if ((sign_extend_64(r8[0x17]) & 0xffffffff80000000) != 0x0) {
                            r8 = *r8;
                    }
                    loc_1029fe0a0("Unable to cast %s to %s");
                    r0 = loc_1029fe0a0("Variant cast failed");
                    r19 = r0;
                    *loc_101606bb0() = 0x1067128b0;
                    loc_101606a20(0x1070dcbb0, "ToPlace", 0x0, 0x0, 0x0, r19);
                    loc_101606a20(0x1070dcbe8, "ToInstance", 0x0, 0x0, 0x1, r19);
                    loc_101606a20(0x1070dcc20, "ToReservedServer", 0x0, 0x0, 0x2, r19);
                    loc_101606a20(0x1070dcc58, "ToVIPServer", 0x0, 0x0, 0x3, r19);
                    loc_101606a20(0x1070dcc90, "ToInstanceBack", 0x0, 0x0, 0x4, r19);
                    r19[0x8] = 0x1070dcbb0;
                    r19[0x9] = 0x5;
                    r19[0xa] = 0x1059e54e8;
                    r19[0xb] = 0x5;
            }
    }
    else {
            if (r19[0x1] == 0x0) {
                    r20 = *r19;
                    if (loc_10160f518() == r20) {
                            r20 = *r19;
                            if (loc_10160f518() == r20) {
                                    r20 = r19 + 0x10;
                                    if (r19[0x1] != 0x0) {
                                            r21 = r20;
                                    }
                                    else {
                                            r21 = 0x0;
                                    }
                                    sub_100bb5520();
                                    r8 = sign_extend_64(r21[0x17]);
                                    r9 = *r21;
                                    if (loc_101607388() != 0x0) {
                                            r0 = sub_100ae2d58();
                                            r8 = r19[0x1];
                                            if (r8 != r0) {
                                                    r21 = r0;
                                                    if (r8 != 0x0) {
                                                            (r8[0x2])(r20);
                                                    }
                                                    r19[0x4] = arg_1c;
                                                    r19[0x1] = r21;
                                            }
                                            else {
                                                    *(int32_t *)r20 = arg_1c;
                                            }
                                            r0 = loc_10407dd08();
                                            *r19 = r0;
                                            if (loc_10407dd08() == r0) {
                                            }
                                            else {
                                                    r0 = loc_1029fe0a0("Variant cast failed");
                                                    r19 = r0;
                                                    *loc_101606bb0() = 0x1067128b0;
                                                    loc_101606a20(0x1070dcbb0, "ToPlace", 0x0, 0x0, 0x0, r19);
                                                    loc_101606a20(0x1070dcbe8, "ToInstance", 0x0, 0x0, 0x1, r19);
                                                    loc_101606a20(0x1070dcc20, "ToReservedServer", 0x0, 0x0, 0x2, r19);
                                                    loc_101606a20(0x1070dcc58, "ToVIPServer", 0x0, 0x0, 0x3, r19);
                                                    loc_101606a20(0x1070dcc90, "ToInstanceBack", 0x0, 0x0, 0x4, r19);
                                                    r19[0x8] = 0x1070dcbb0;
                                                    r19[0x9] = 0x5;
                                                    r19[0xa] = 0x1059e54e8;
                                                    r19[0xb] = 0x5;
                                            }
                                    }
                                    else {
                                            r19 = *(*r19 + 0x8);
                                            if ((sign_extend_64(r19[0x17]) & 0xffffffff80000000) != 0x0) {
                                                    r19 = *r19;
                                            }
                                            r8 = *(sub_100bdbe90() + 0x8);
                                            if ((sign_extend_64(r8[0x17]) & 0xffffffff80000000) != 0x0) {
                                                    r8 = *r8;
                                            }
                                            loc_1029fe0a0("Unable to cast %s to %s");
                                            r0 = loc_1029fe0a0("Variant cast failed");
                                            r19 = r0;
                                            *loc_101606bb0() = 0x1067128b0;
                                            loc_101606a20(0x1070dcbb0, "ToPlace", 0x0, 0x0, 0x0, r19);
                                            loc_101606a20(0x1070dcbe8, "ToInstance", 0x0, 0x0, 0x1, r19);
                                            loc_101606a20(0x1070dcc20, "ToReservedServer", 0x0, 0x0, 0x2, r19);
                                            loc_101606a20(0x1070dcc58, "ToVIPServer", 0x0, 0x0, 0x3, r19);
                                            loc_101606a20(0x1070dcc90, "ToInstanceBack", 0x0, 0x0, 0x4, r19);
                                            r19[0x8] = 0x1070dcbb0;
                                            r19[0x9] = 0x5;
                                            r19[0xa] = 0x1059e54e8;
                                            r19[0xb] = 0x5;
                                    }
                            }
                            else {
                                    r0 = loc_1029fe0a0("Variant cast failed");
                                    r19 = r0;
                                    *loc_101606bb0() = 0x1067128b0;
                                    loc_101606a20(0x1070dcbb0, "ToPlace", 0x0, 0x0, 0x0, r19);
                                    loc_101606a20(0x1070dcbe8, "ToInstance", 0x0, 0x0, 0x1, r19);
                                    loc_101606a20(0x1070dcc20, "ToReservedServer", 0x0, 0x0, 0x2, r19);
                                    loc_101606a20(0x1070dcc58, "ToVIPServer", 0x0, 0x0, 0x3, r19);
                                    loc_101606a20(0x1070dcc90, "ToInstanceBack", 0x0, 0x0, 0x4, r19);
                                    r19[0x8] = 0x1070dcbb0;
                                    r19[0x9] = 0x5;
                                    r19[0xa] = 0x1059e54e8;
                                    r19[0xb] = 0x5;
                            }
                    }
                    else {
                            r19 = *(*r19 + 0x8);
                            if ((sign_extend_64(r19[0x17]) & 0xffffffff80000000) != 0x0) {
                                    r19 = *r19;
                            }
                            r8 = *(sub_100bdbe90() + 0x8);
                            if ((sign_extend_64(r8[0x17]) & 0xffffffff80000000) != 0x0) {
                                    r8 = *r8;
                            }
                            loc_1029fe0a0("Unable to cast %s to %s");
                            r0 = loc_1029fe0a0("Variant cast failed");
                            r19 = r0;
                            *loc_101606bb0() = 0x1067128b0;
                            loc_101606a20(0x1070dcbb0, "ToPlace", 0x0, 0x0, 0x0, r19);
                            loc_101606a20(0x1070dcbe8, "ToInstance", 0x0, 0x0, 0x1, r19);
                            loc_101606a20(0x1070dcc20, "ToReservedServer", 0x0, 0x0, 0x2, r19);
                            loc_101606a20(0x1070dcc58, "ToVIPServer", 0x0, 0x0, 0x3, r19);
                            loc_101606a20(0x1070dcc90, "ToInstanceBack", 0x0, 0x0, 0x4, r19);
                            r19[0x8] = 0x1070dcbb0;
                            r19[0x9] = 0x5;
                            r19[0xa] = 0x1059e54e8;
                            r19[0xb] = 0x5;
                    }
            }
    }
    return;
}
