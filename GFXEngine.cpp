function sub_10445bb10 {
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
    r31 = r31 + 0xffffffffffffff90 - 0x230;
    decomp_var_78 = **___stack_chk_guard;
    if (r1[0x14] == 0x1) {
            r21 = r1;
            r28 = r0;
            r25 = sub_1029f573c(*(int32_t *)dword_106f3d3f0);
            r8 = 0x107356fe8;
            asm { ldaprb     w8, [x8] };
            arg_10 = r28;
            if ((r8 & 0x1) == 0x0 && loc_102c41c7c() != 0x0) {
                    r23 = *(int8_t *)0x106c1a438;
                    r19 = sub_10294ae40("telem", "gfx", 0xffffffff, 0xff);
                    if (r23 != 0x0) {
                            sub_1029398d4(r19);
                    }
                    *0x107356fe0 = r19;
                    loc_102c41d94();
                    r28 = arg_10;
            }
            r8 = *(int8_t *)0x106c1a438;
            arg_130 = q0;
            *(&arg_130 + 0x10) = q0;
            *(&arg_130 + 0x20) = 0x0;
            *(&arg_130 + 0x28) = 0xffffffffffffffff;
            *(&arg_130 + 0x30) = q0;
            *(&arg_130 + 0x40) = q0;
            *(int128_t *)(&arg_130 + 0x50) = q0;
            *(&arg_130 + 0x68) = 0x0;
            *(&arg_130 + 0x70) = 0x0;
            *(&arg_130 + 0x78) = 0xffffffffffffffff;
            if (r8 == 0x1) {
                    r0 = sub_102939810(&arg_130);
            }
            r8 = r28[0x21];
            if (r8 != 0x0) {
                    if ((sign_extend_64(r8[0x4f]) & 0xffffffff80000000) == 0x0) {
                            r11 = &arg_130;
                            r11[0x9] = *(int128_t *)(r8 + 0x38);
                            r8 = r8[0x9];
                            r11[0x14] = r8;
                    }
                    else {
                            r0 = sub_100004018(&decomp_var_d0, r8[0x7], r8[0x8]);
                            r11 = &arg_130;
                    }
                    r9 = decomp_var_b9;
                    r10 = r11[0x12];
                    r11 = r11[0x13];
                    r22 = &arg_130;
                    bool_7580 = r8 < 0x0;
                    r8 = &decomp_var_d0;
                    if (sign_extend_64(r9) < 0x0) {
                            r8 = r10;
                    }
                    if (bool_7580) {
                            r9 = r11;
                    }
                    if (r9 != 0x0) {
                            do {
                                    if (*(int8_t *)r8 == 0x20) {
                                            *(int8_t *)r8 = 0x5f;
                                    }
                                    r8 = r8 + 0x1;
                                    r9 = r9 - 0x1;
                            } while (r9 != 0x0);
                    }
                    r19 = r21[0x1];
                    r0 = r28[0x21];
                    r20 = &arg_28;
                    (*(*r0 + 0xb8))(r0);
                    r9 = arg_28;
                    (*(*r19 + 0x40))(r19, "gfx/featurelevel");
                    if ((sign_extend_64(arg_3f) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
                    r8 = *(int8_t *)byte_106c14700;
                    r19 = r21[0x1];
                    if (r8 == 0x1) {
                            r0 = r28[0x21];
                            r0 = (*(*r0 + 0xc8))(r0, "gfx/featurelevel");
                            (*(*r19 + 0x40))(r19, "gfx/shadinglang");
                    }
                    else {
                            r0 = r28[0x21];
                            r20 = &arg_28;
                            (*(*r0 + 0xc0))(r0, "gfx/featurelevel");
                            r9 = arg_28;
                            (*(*r19 + 0x40))(r19, "gfx/shadinglang");
                            if ((sign_extend_64(arg_3f) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00();
                            }
                    }
                    r0 = r21[0x1];
                    r9 = r22[0x12];
                    r8 = &decomp_var_d0;
                    (*(*r0 + 0x40))();
                    r19 = r21[0x1];
                    r0 = r28[0x21];
                    (*(*r19 + 0x38))(r19, "gfx/vram", *((*(*r0 + 0xf0))(r0) + 0x68));
                    if (*(int8_t *)byte_106c47eb0 == 0x1) {
                            r19 = r21[0x1];
                            r0 = r28[0x21];
                            (*(*r0 + 0x100))(r0, "gfx/vram");
                            (*(*r19 + 0x20))(r19, "gfx/pipelineObjects", arg_68);
                    }
                    if ((sign_extend_64(decomp_var_b9) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            r26 = &arg_28;
            if (*(int8_t *)byte_106c47ee0 == 0x1) {
                    r9 = *0x106cad860;
                    r22 = *0x106cad868;
                    r26[0x1f] = r9;
                    r26[0x20] = r22;
                    if (r22 != 0x0) {
                            asm { ldadd      x9, x8, [x8] };
                    }
                    r22 = *0x106cad868;
                    r0 = sub_104451848(&arg_120);
                    r19 = r0;
                    if (r22 != 0x0) {
                            r8 = *0x106cad868 + 0x8;
                            asm { ldaddal    x9, x8, [x8] };
                            if (r8 == 0x0) {
                                    r22 = *0x106cad868;
                                    (*(*r22 + 0x10))(r22);
                                    std::__1::__shared_weak_count::__release_weak();
                            }
                    }
                    if (r19 == *qword_106c481b8) {
                            if (sign_extend_64(*(int16_t *)word_107356f78) >= 0x1) {
                                    r0 = r21[0x1];
                                    (*(*r0 + 0x20))(r0, "gfx/recovery/count");
                                    r0 = r21[0x1];
                                    (*(*r0 + 0x20))(r0, "gfx/recovery/count_hung", sign_extend_64(*(int16_t *)qword_107356f80));
                                    r0 = r21[0x1];
                                    (*(*r0 + 0x20))(r0, "gfx/recovery/count_removed", sign_extend_64(*(int16_t *)word_107356f82));
                                    r0 = r21[0x1];
                                    (*(*r0 + 0x20))(r0, "gfx/recovery/count_reset", sign_extend_64(*(int16_t *)word_107356f84));
                                    r0 = r21[0x1];
                                    (*(*r0 + 0x20))(r0, "gfx/recovery/count_other", sign_extend_64(*(int16_t *)word_107356f86));
                                    r0 = r21[0x1];
                                    (*(*r0 + 0x28))(r0, "gfx/recovery/first_frame_index", *qword_106c48198);
                                    r0 = r21[0x1];
                                    (*(*r0 + 0x28))(r0, "gfx/recovery/frames_since_last_recovery", r28[0x1] - *qword_106c481a0);
                            }
                    }
                    else {
                            *(int16_t *)word_107356f78 = 0x0;
                            *qword_107356f80 = 0x0;
                            *qword_106c48198 = 0xffffffffffffffff;
                            *qword_106c481a0 = 0xffffffffffffffff;
                            *qword_106c481b8 = r19;
                    }
                    if ((*qword_106c481a8 & 0xffffffff80000000) == 0x0) {
                            r2 = *qword_106c481a8;
                            r0 = r21[0x1];
                            (*(*r0 + 0x28))(r0, "gfx/recovery/first_session_index", r2);
                    }
                    if ((*qword_106c481b0 & 0xffffffff80000000) == 0x0) {
                            r8 = *qword_106c481b0;
                            r0 = r21[0x1];
                            (*(*r0 + 0x28))(r0, "gfx/recovery/sessions_since_last_recovery", r19 - r8);
                    }
            }
            sub_100d05c84();
            r24 = r21 + 0x8;
            r19 = *r24;
            r20 = &arg_28;
            sub_101607238();
            r9 = arg_28;
            (*(*r19 + 0x40))(r19, "gfx/disp/tech");
            if ((sign_extend_64(arg_3f) & 0xffffffff80000000) != 0x0) {
                    loc_1029f6b00();
            }
            r22 = sub_1042cf120(r28[0x183], "gfx/disp/tech");
            r19 = r1;
            r0 = *r24;
            (*(*r0 + 0x20))(r0, "gfx/disp/width", r22);
            r0 = *r24;
            (*(*r0 + 0x20))(r0, "gfx/disp/height", r22 >> 0x20);
            r0 = *r24;
            asm { fcvt       d0, s0 };
            (*(*r0 + 0x18))(r0, "gfx/disp/mpixels");
            r0 = *r24;
            (*(*r0 + 0x20))(r0, "gfx/disp/nsamples", r19);
            if (*(int8_t *)byte_106c48180 == 0x1 && (r28[0x110] & 0x1) == 0x0) {
                    r2 = *(r28[0x19e] + 0x4e38);
                    r0 = *r24;
                    (*(*r0 + 0x28))(r0, "gfx/disp/msaaColorCommittedBytes", r2);
                    r0 = *r24;
                    r8 = r28[0x19e];
                    r8 = r8[0x1390];
                    if (r8 > 0xc) {
                            if (r8 > 0x12) {
                                    if (r8 != 0x13 && r8 != 0x21) {
                                            if (r8 == 0x42) {
                                                    (*(*r0 + 0x40))();
                                            }
                                            else {
                                                    (*(*r0 + 0x40))();
                                            }
                                    }
                                    else {
                                            (*(*r0 + 0x40))();
                                    }
                            }
                            else {
                                    if (r8 != 0xd) {
                                            if (r8 == 0xf) {
                                                    (*(*r0 + 0x40))();
                                            }
                                            else {
                                                    (*(*r0 + 0x40))();
                                            }
                                    }
                                    else {
                                            (*(*r0 + 0x40))();
                                    }
                            }
                    }
                    else {
                            if (r8 <= 0x2) {
                                    if (r8 != 0x0) {
                                            if (r8 == 0x2) {
                                                    (*(*r0 + 0x40))();
                                            }
                                            else {
                                                    (*(*r0 + 0x40))();
                                            }
                                    }
                                    else {
                                            (*(*r0 + 0x40))();
                                    }
                            }
                            else {
                                    if (r8 != 0x3) {
                                            if (r8 == 0x5) {
                                                    (*(*r0 + 0x40))();
                                            }
                                            else {
                                                    (*(*r0 + 0x40))();
                                            }
                                    }
                                    else {
                                            (*(*r0 + 0x40))();
                                    }
                            }
                    }
            }
            r0 = *r24;
            (*(*r0 + 0x30))(r0, "gfx/lighting/light", *(int32_t *)(r28[0x19e] + 0x4dcc));
            r0 = *r24;
            (*(*r0 + 0x30))(r0, "gfx/lighting/unshadowed_light", *(int32_t *)(r28[0x19e] + 0x4dd0));
            r0 = *r24;
            (*(*r0 + 0x30))(r0, "gfx/lighting/shadowed_light", *(int32_t *)(r28[0x19e] + 0x4dd4));
            r19 = r28[0x19e] + 0x4000;
            r0 = *r24;
            (*(*r0 + 0x30))(r0, "gfx/lighting/light_type_none", r19[0x37a] + r19[0x376]);
            r0 = *r24;
            (*(*r0 + 0x30))(r0, "gfx/lighting/unshadowed_light_type_none", r19[0x376]);
            r0 = *r24;
            (*(*r0 + 0x30))(r0, "gfx/lighting/shadowed_light_type_none", r19[0x37a]);
            r0 = *r24;
            (*(*r0 + 0x30))(r0, "gfx/lighting/light_type_point", r19[0x37b] + r19[0x377]);
            r0 = *r24;
            (*(*r0 + 0x30))(r0, "gfx/lighting/unshadowed_light_type_point", r19[0x377]);
            r0 = *r24;
            (*(*r0 + 0x30))(r0, "gfx/lighting/shadowed_light_type_point", r19[0x37b]);
            r0 = *r24;
            (*(*r0 + 0x30))(r0, "gfx/lighting/light_type_spot", r19[0x37c] + r19[0x378]);
            r0 = *r24;
            (*(*r0 + 0x30))(r0, "gfx/lighting/unshadowed_light_type_spot", r19[0x378]);
            r0 = *r24;
            (*(*r0 + 0x30))(r0, "gfx/lighting/shadowed_light_type_spot", r19[0x37c]);
            r0 = *r24;
            (*(*r0 + 0x30))(r0, "gfx/lighting/light_type_surface", r19[0x37d] + r19[0x379]);
            r0 = *r24;
            (*(*r0 + 0x30))(r0, "gfx/lighting/unshadowed_light_type_surface", r19[0x379]);
            r0 = *r24;
            (*(*r0 + 0x30))(r0, "gfx/lighting/shadowed_light_type_surface", r19[0x37d]);
            r0 = r28[0x21];
            if (r0 != 0x0 && (*(*r0 + 0x78))() != 0x0) {
                    r0 = r28[0x21];
                    r19 = (*(*r0 + 0x78))(r0);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/disp/surface_width", r19[0x1c]);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/disp/surface_height", r19[0x1d]);
                    r0 = *r24;
                    asm { fcvt       d0, s0 };
                    (*(*r0 + 0x18))(r0, "gfx/disp/surface_mpixels");
                    r19 = sub_102998f30();
                    r22 = sub_102998f34();
                    r0 = *r24;
                    (*(*r0 + 0x20))(r0, "gfx/disp/physical_width", r19);
                    r0 = *r24;
                    (*(*r0 + 0x20))(r0, "gfx/disp/physical_height", r22);
                    r0 = *r24;
                    asm { fcvt       d0, s0 };
                    (*(*r0 + 0x18))(r0, "gfx/disp/physical_mpixels");
            }
            if (*(int8_t *)byte_106c47e38 == 0x1) {
                    r8 = r28[0x1bb];
                    if (r8 != 0x0) {
                            r0 = loc_10486afa4(r8 + 0x2d8);
                            if (r0 != 0x0) {
                                    r0 = sub_101103118(r0);
                                    r8 = r28[0x183];
                                    if (r8 != 0x0) {
                                            r19 = 0x0;
                                            if (r8[0xdb] != 0x0 && r0 != 0x0) {
                                                    if (r0[0xac] == 0x1) {
                                                            s8 = *(r0 + 0xa4);
                                                            s9 = r0[0x15];
                                                            r19 = 0x1;
                                                    }
                                                    else {
                                                            r19 = 0x0;
                                                    }
                                            }
                                    }
                                    else {
                                            r19 = 0x0;
                                    }
                                    r0 = *r24;
                                    (*(*r0 + 0x20))(r0, "gfx/clouds/active", r19);
                                    r0 = *r24;
                                    asm { fcvt       d0, s8 };
                                    (*(*r0 + 0x18))(r0, "gfx/clouds/cover");
                                    r0 = *r24;
                                    asm { fcvt       d0, s9 };
                                    (*(*r0 + 0x18))(r0, "gfx/clouds/density");
                                    asm { fcvt       d0, s0 };
                                    r0 = *r24;
                                    d1 = 0x0;
                                    if (r19 == 0x0) {
                                            d0 = d1;
                                    }
                                    (*(*r0 + 0x18))();
                            }
                    }
            }
            sub_10445b810();
            if (r21[0x4] == 0x1) {
                    sub_10445b810();
                    sub_10445b810();
                    sub_10445b810();
                    sub_10445b810();
                    sub_10445b810();
                    sub_10445b810();
            }
            r27 = *(int32_t *)(r28[0x16d] + 0x54);
            r0 = *r24;
            (*(*r0 + 0x20))(r0, "gfx/frm/qualityLevel", r27);
            *(int32_t *)dword_106f465e0 = r27;
            r8 = r28[0x16d];
            r8 = r8[0x1a];
            r0 = *r24;
            (*(*r0 + 0x40))(r0, "gfx/frm/qualityMode", *(0x106c37980 + r8 * 0x8));
            r2 = sub_103b1f0b4(r28[0x16d]);
            r0 = *r24;
            (*(*r0 + 0x20))(r0, "gfx/frm/frameRateCap", r2);
            if (*(int8_t *)byte_106c47e08 == 0x1) {
                    r0 = *r24;
                    (*(*r0 + 0x10))(r0, "gfx/frm/TargetSteppedEnabled", *(int8_t *)byte_106c374d0);
                    r0 = *r24;
                    (*(*r0 + 0x10))(r0, "gfx/frm/TargetConstantEnabled", *(int8_t *)byte_106c374b8);
                    r0 = *r24;
                    (*(*r0 + 0x10))(r0, "gfx/frm/DrawModerateEnabled", *(int8_t *)byte_106c374a0);
            }
            if (*(int8_t *)byte_106c37380 == 0x1 && (r21[0x17] & 0x1) == 0x0) {
                    sub_103b1fd64();
                    r0 = *r24;
                    (*(*r0 + 0x48))(r0, "gfx/frm/qualityLevelFrameTimeState", &arg_28 + 0x18);
                    if ((*qword_106c4c8c0 & 0xff) >= 0x6 && (*qword_106c4c8c0 & 0xfc00) != 0x0) {
                            r8 = sign_extend_64(arg_3f);
                            r9 = &arg_28;
                            r10 = arg_28;
                            r11 = arg_30;
                            if (r8 < 0x0) {
                                    r9 = r10;
                            }
                            if (r8 < 0x0) {
                                    r8 = r11;
                            }
                            *(&arg_130 + 0x90) = r9;
                            *(&arg_130 + 0x98) = r8;
                            sub_1029fea60();
                    }
                    if ((sign_extend_64(arg_57) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
                    if ((sign_extend_64(arg_3f) & 0xffffffff80000000) != 0x0) {
                            loc_1029f6b00();
                    }
            }
            if ((r21[0x17] & 0x1) == 0x0) {
                    r19 = *r24;
                    (*(*r19 + 0x10))(r19, "gfx/drs/enabled", sub_103b1cc6c(r28[0x16d]));
                    r19 = *r24;
                    sub_103b1cbdc(r28[0x16d]);
                    asm { fcvt       d0, s0 };
                    (*(*r19 + 0x18))(r19, "gfx/drs/area_scale");
                    r0 = *r24;
                    (*(*r0 + 0x10))(r0, "gfx/drs/scale_changed", *(int8_t *)(r28[0x16d] + 0xb12));
                    if (*(int32_t *)(r28[0x16d] + 0xb60) >= 0x1) {
                            r0 = *r24;
                            (*(*r0 + 0x28))(r0, "gfx/drs/kilopixels");
                    }
            }
            if (r21[0x17] == 0x1) {
                    r19 = r28[0x16d];
                    r0 = *r24;
                    (*(*r0 + 0x10))(r0, "gfx/drs/enabled", r19[0xb18]);
                    r0 = *r24;
                    (*(*r0 + 0x10))(r0, "gfx/drs/used", r19[0xb19]);
                    s0 = r19[0x2c7];
                    if (s0 < 0x3ff0000000000000) {
                            r0 = *r24;
                            asm { fcvtzs     x2, s0 };
                            (*(*r0 + 0x28))(r0, "gfx/drs/min_area_scale_percent");
                    }
                    d0 = r19[0x169];
                    if (d0 > 0x0) {
                            r0 = *r24;
                            asm { fcvtzs     x2, d0 };
                            (*(*r0 + 0x28))(r0, "gfx/drs/scale_full_percent");
                            r0 = *r24;
                            asm { fcvtzs     x2, d0 };
                            (*(*r0 + 0x28))(r0, "gfx/drs/scale_61to90_percent");
                            r0 = *r24;
                            asm { fcvtzs     x2, d0 };
                            (*(*r0 + 0x28))(r0, "gfx/drs/scale_31to60_percent");
                            r0 = *r24;
                            asm { fcvtzs     x2, d0 };
                            (*(*r0 + 0x28))(r0, "gfx/drs/scale_0to30_percent");
                            r0 = *r24;
                            d0 = r19[0x165];
                            d0 = d8 * d0;
                            asm { fcvtzs     x2, d0 };
                            (*(*r0 + 0x28))(r0, "gfx/drs/scale_91to99_percent");
                    }
                    r8 = r19[0x16a];
                    if (r8 != 0x0) {
                            r0 = *r24;
                            d0 = r19[0x16b];
                            d0 = d0 * 0x4059000000000000 / r8;
                            asm { fcvtzs     x2, d0 };
                            (*(*r0 + 0x28))(r0, "gfx/drs/scale_changed_percent");
                    }
                    r0 = r28[0x16d];
                    r0 = sub_103b1ccb8(r0);
                    if (r0 >= 0x1) {
                            r8 = *r24;
                            (*(*r8 + 0x28))(r8, "gfx/drs/average_kilopixels", r0);
                    }
            }
            if (*(int8_t *)byte_106c47df0 == 0x1) {
                    sub_103b2078c(r28[0x16d]);
                    r0 = *r24;
                    asm { fcvt       d0, s0 };
                    (*(*r0 + 0x18))(r0, "gfx/frm/stepHillCurrent");
                    r0 = *r24;
                    (*(*r0 + 0x20))(r0, "gfx/frm/transitionsDown", arg_2c);
                    r0 = *r24;
                    (*(*r0 + 0x20))(r0, "gfx/frm/transitionsUp", arg_30);
                    r0 = *r24;
                    (*(*r0 + 0x20))(r0, "gfx/frm/lastNumStableFrames", arg_34);
                    r0 = *r24;
                    (*(*r0 + 0x20))(r0, "gfx/frm/fastBackoffCount", arg_38);
                    r0 = *r24;
                    (*(*r0 + 0x20))(r0, "gfx/frm/varianceGateBlocks", arg_3c);
                    r0 = *r24;
                    (*(*r0 + 0x20))(r0, "gfx/frm/renderLimitedFrames", arg_40);
                    if (*(int8_t *)byte_106c37908 == 0x1) {
                            r0 = *r24;
                            (*(*r0 + 0x20))(r0, "gfx/frm/slimFrmLodDownBias", arg_44);
                            r0 = *r24;
                            (*(*r0 + 0x20))(r0, "gfx/frm/slimFrmLodPressureFrames", arg_48);
                            r0 = *r24;
                            (*(*r0 + 0x20))(r0, "gfx/frm/slimFrmLodRecoveryFrames", arg_4c);
                    }
            }
            if (*(int8_t *)byte_106c46eb0 == 0x1) {
                    r23 = r28[0x17e];
                    if (r23 == 0x0) {
                            r23 = r28[0x181];
                            if (r23 == 0x0) {
                                    r0 = *r24;
                                    (*(*r0 + 0x10))(r0, "gfx/swocc/enabled", 0x0);
                            }
                            else {
                                    sub_1043f0800(r23);
                                    r0 = *r24;
                                    (*(*r0 + 0x10))(r0, "gfx/swocc/enabled", 0x1);
                                    r0 = *r24;
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/mainloop");
                                    r0 = *r24;
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/feedback");
                                    r0 = *r24;
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/waitonfrustumqueries");
                                    r0 = *r24;
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/resolutionFactor");
                                    r0 = *r24;
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/occludersUsed");
                                    r0 = *r24;
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/cullFraction");
                                    r0 = *r24;
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/blocksCullFraction");
                                    r0 = *r24;
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/meshesCullFraction");
                                    r0 = *r24;
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/blocksCulled");
                                    r0 = *r24;
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/meshesCulled");
                                    r0 = *r24;
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/culled");
                                    r0 = *r24;
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/blocksTested");
                                    r0 = *r24;
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/meshesTested");
                                    r0 = *r24;
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/tested");
                                    r0 = *r24;
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/totalThreadTime");
                                    r0 = *r24;
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/intervalMainLoop");
                                    r0 = *r24;
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/intervalFeedback");
                                    r0 = *r24;
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/intervalWaitonfrustumqueries");
                                    r0 = *r24;
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/intervalResolutionFactor");
                                    r0 = *r24;
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/intervalOccludersUsed");
                                    r0 = *r24;
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/intervalCullFraction");
                                    r0 = *r24;
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/intervalBlocksCullFraction");
                                    r0 = *r24;
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/intervalMeshesCullFraction");
                                    r0 = *r24;
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/intervalBlocksCulled");
                                    r0 = *r24;
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/intervalMeshesCulled");
                                    r0 = *r24;
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/intervalCulled");
                                    r0 = *r24;
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/intervalBlocksTested");
                                    r0 = *r24;
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/intervalMeshesTested");
                                    r0 = *r24;
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/intervalTested");
                                    r0 = *r24;
                                    d0 = r26[0x19];
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/intervalTotalThreadTime");
                                    if (arg_108 <= 0x1) {
                                            if (arg_10c != 0x0) {
                                                    r0 = *r24;
                                                    (*(*r0 + 0x18))(r0, "gfx/swocc/intervalExtraCullsFromFeedback", 0x1);
                                                    r0 = *r24;
                                                    d0 = r26[0x1b];
                                                    (*(*r0 + 0x18))(r0, "gfx/swocc/intervalFeedbackEfficiency");
                                                    r0 = *r24;
                                                    (*(*r0 + 0x30))(r0, "gfx/swocc/currentFeedbackInterval", arg_108);
                                                    r0 = *r24;
                                                    (*(*r0 + 0x30))(r0, "gfx/swocc/intervalFeedbackSnapshotsRun", arg_10c);
                                                    r0 = *r24;
                                                    (*(*r0 + 0x30))(r0, "gfx/swocc/intervalFeedbackSnapshotsSkipped", arg_110);
                                                    r0 = *r24;
                                                    (*(*r0 + 0x30))(r0, "gfx/swocc/intervalFeedbackEvaluationsRun", arg_114);
                                                    sub_1043f0b78(r23);
                                            }
                                            else {
                                                    sub_1043f0b78(r23);
                                            }
                                    }
                                    else {
                                            r0 = *r24;
                                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalExtraCullsFromFeedback", 0x1);
                                            r0 = *r24;
                                            d0 = r26[0x1b];
                                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalFeedbackEfficiency");
                                            r0 = *r24;
                                            (*(*r0 + 0x30))(r0, "gfx/swocc/currentFeedbackInterval", arg_108);
                                            r0 = *r24;
                                            (*(*r0 + 0x30))(r0, "gfx/swocc/intervalFeedbackSnapshotsRun", arg_10c);
                                            r0 = *r24;
                                            (*(*r0 + 0x30))(r0, "gfx/swocc/intervalFeedbackSnapshotsSkipped", arg_110);
                                            r0 = *r24;
                                            (*(*r0 + 0x30))(r0, "gfx/swocc/intervalFeedbackEvaluationsRun", arg_114);
                                            sub_1043f0b78(r23);
                                    }
                            }
                    }
                    else {
                            sub_1043f0800(r23);
                            r0 = *r24;
                            (*(*r0 + 0x10))(r0, "gfx/swocc/enabled", 0x1);
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/mainloop");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/feedback");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/waitonfrustumqueries");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/resolutionFactor");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/occludersUsed");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/cullFraction");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/blocksCullFraction");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/meshesCullFraction");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/blocksCulled");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/meshesCulled");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/culled");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/blocksTested");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/meshesTested");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/tested");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/totalThreadTime");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalMainLoop");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalFeedback");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalWaitonfrustumqueries");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalResolutionFactor");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalOccludersUsed");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalCullFraction");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalBlocksCullFraction");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalMeshesCullFraction");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalBlocksCulled");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalMeshesCulled");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalCulled");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalBlocksTested");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalMeshesTested");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalTested");
                            r0 = *r24;
                            d0 = r26[0x19];
                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalTotalThreadTime");
                            if (arg_108 <= 0x1) {
                                    if (arg_10c != 0x0) {
                                            r0 = *r24;
                                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalExtraCullsFromFeedback", 0x1);
                                            r0 = *r24;
                                            d0 = r26[0x1b];
                                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalFeedbackEfficiency");
                                            r0 = *r24;
                                            (*(*r0 + 0x30))(r0, "gfx/swocc/currentFeedbackInterval", arg_108);
                                            r0 = *r24;
                                            (*(*r0 + 0x30))(r0, "gfx/swocc/intervalFeedbackSnapshotsRun", arg_10c);
                                            r0 = *r24;
                                            (*(*r0 + 0x30))(r0, "gfx/swocc/intervalFeedbackSnapshotsSkipped", arg_110);
                                            r0 = *r24;
                                            (*(*r0 + 0x30))(r0, "gfx/swocc/intervalFeedbackEvaluationsRun", arg_114);
                                            sub_1043f0b78(r23);
                                    }
                                    else {
                                            sub_1043f0b78(r23);
                                    }
                            }
                            else {
                                    r0 = *r24;
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/intervalExtraCullsFromFeedback", 0x1);
                                    r0 = *r24;
                                    d0 = r26[0x1b];
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/intervalFeedbackEfficiency");
                                    r0 = *r24;
                                    (*(*r0 + 0x30))(r0, "gfx/swocc/currentFeedbackInterval", arg_108);
                                    r0 = *r24;
                                    (*(*r0 + 0x30))(r0, "gfx/swocc/intervalFeedbackSnapshotsRun", arg_10c);
                                    r0 = *r24;
                                    (*(*r0 + 0x30))(r0, "gfx/swocc/intervalFeedbackSnapshotsSkipped", arg_110);
                                    r0 = *r24;
                                    (*(*r0 + 0x30))(r0, "gfx/swocc/intervalFeedbackEvaluationsRun", arg_114);
                                    sub_1043f0b78(r23);
                            }
                    }
            }
            else {
                    r23 = sub_1043f030c();
                    if (r23 != 0x0) {
                            sub_1043f0800(r23);
                            r0 = *r24;
                            (*(*r0 + 0x10))(r0, "gfx/swocc/enabled", 0x1);
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/mainloop");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/feedback");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/waitonfrustumqueries");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/resolutionFactor");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/occludersUsed");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/cullFraction");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/blocksCullFraction");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/meshesCullFraction");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/blocksCulled");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/meshesCulled");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/culled");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/blocksTested");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/meshesTested");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/tested");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/totalThreadTime");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalMainLoop");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalFeedback");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalWaitonfrustumqueries");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalResolutionFactor");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalOccludersUsed");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalCullFraction");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalBlocksCullFraction");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalMeshesCullFraction");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalBlocksCulled");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalMeshesCulled");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalCulled");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalBlocksTested");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalMeshesTested");
                            r0 = *r24;
                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalTested");
                            r0 = *r24;
                            d0 = r26[0x19];
                            (*(*r0 + 0x18))(r0, "gfx/swocc/intervalTotalThreadTime");
                            if (arg_108 > 0x1 || arg_10c != 0x0) {
                                    r0 = *r24;
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/intervalExtraCullsFromFeedback", 0x1);
                                    r0 = *r24;
                                    d0 = r26[0x1b];
                                    (*(*r0 + 0x18))(r0, "gfx/swocc/intervalFeedbackEfficiency");
                                    r0 = *r24;
                                    (*(*r0 + 0x30))(r0, "gfx/swocc/currentFeedbackInterval", arg_108);
                                    r0 = *r24;
                                    (*(*r0 + 0x30))(r0, "gfx/swocc/intervalFeedbackSnapshotsRun", arg_10c);
                                    r0 = *r24;
                                    (*(*r0 + 0x30))(r0, "gfx/swocc/intervalFeedbackSnapshotsSkipped", arg_110);
                                    r0 = *r24;
                                    (*(*r0 + 0x30))(r0, "gfx/swocc/intervalFeedbackEvaluationsRun", arg_114);
                            }
                            sub_1043f0b78(r23);
                    }
                    else {
                            r0 = *r24;
                            (*(*r0 + 0x10))(r0, "gfx/swocc/enabled", 0x0);
                    }
            }
            sub_104201c0c(*r24);
            r19 = *r24;
            *(int32_t *)(sub_1042e3d2c(r28[0x183]) + 0x30);
            asm { fsqrt      s0, s0 };
            asm { fcvt       d0, s0 };
            (*(*r19 + 0x18))(r19, "gfx/frm/renderDistance");
            if (*(int8_t *)byte_106c1a5e0 == 0x1) {
                    r26 = byte_106c1a5e0;
                    r0 = *r24;
                    asm { fsqrt      s0, s0 };
                    asm { fcvt       d0, s0 };
                    (*(*r0 + 0x18))(r0, "gfx/frm/farthestInFrustum");
                    if ((*(int8_t *)r26 & 0x1) != 0x0) {
                            r0 = sub_101131b44();
                            r19 = r0;
                            if (r0 != 0x0) {
                                    sub_102095090(r19[0x3]);
                                    if (d0 > 0x0) {
                                            r0 = *r24;
                                            (*(*r0 + 0x18))(r0, "gfx/display/refreshRate");
                                    }
                                    (*(*r19 + 0x10))(r19);
                            }
                    }
            }
            arg_18 = r24;
            if (r28[0x188] != 0x0) {
                    if ((*(int8_t *)byte_106c44fd0 & 0x1) == 0x0) {
                            r8 = r28[0x1bb];
                            if (r8 != 0x0 && loc_10486afa4(r8 + 0x2d8) != 0x0) {
                                    sub_1040d25a0() != 0x0;
                            }
                    }
                    r0 = *r24;
                    (*(*r0 + 0x40))(r0, "gfx/meshes/version");
                    r0 = r28[0x188];
                    (*(*r0 + 0x70))(r0);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshesUpload/countMax", arg_28);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshesUpload/bytesMax", arg_2c);
                    r0 = *r24;
                    asm { fcvt       d0, s0 };
                    (*(*r0 + 0x18))(r0, "gfx/meshesUpload/timeMsMax");
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/countMax", arg_38);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/bytesMax", arg_34);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/budget", arg_3c);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/usedMaxCount", arg_44);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/usedMaxBytes", arg_4c);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/unusedMaxCount", arg_40);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/unusedMaxBytes", arg_48);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/budgetIdealMaxBytes", arg_50);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/budgetMinMaxBytes", arg_54);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/budgetMaxMaxBytes", arg_58);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/totalTranscodedMeshes", arg_5c);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/totalNonTranscodedMeshes", arg_60);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/totalMeshPacksPossible", arg_64);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/totalMeshLodsPossible", arg_68);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/totalMeshLodsLoaded", arg_6c);
                    asm { addv       s0, v0.4s };
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/totalMeshPacks", s0);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/meshPack0Count", arg_70);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/meshPack1Count", arg_74);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/meshPack2Count", arg_78);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/meshPack3Count", arg_7c);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/meshPack0ContentBytes", arg_80);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/meshPack1ContentBytes", arg_84);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/meshPack2ContentBytes", arg_88);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/meshPack3ContentBytes", arg_8c);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/meshPack0MDBytes", arg_90);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/meshPack1MDBytes", arg_94);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/meshPack2MDBytes", arg_98);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/meshPack3MDBytes", arg_9c);
                    if (*(int8_t *)byte_106c44fe8 == 0x1) {
                            r8 = 0x0;
                            r20 = &arg_28 + 0x78;
                            arg_24 = 0x0;
                            r23 = &decomp_var_d0 + 0x18;
                            do {
                                    if (*(int32_t *)(r20 + r8 * 0x4) != 0x0) {
                                            r0 = sub_10445e6c4("gfx/meshes/meshLod{}PossibleCount", 0x21, &arg_24);
                                            r22 = *r24;
                                            r0 = sub_1016620b0(&decomp_var_d0, 0x0);
                                            r1 = *(&arg_130 + 0x90);
                                            *(&arg_130 + 0x98) = *(&arg_130 + 0x98) - 0x1;
                                            (*(*r22 + 0x30))(r22, r1, *(int32_t *)(r20 + sign_extend_64(arg_24) * 0x4));
                                            if (*(&arg_130 + 0x90) != r23) {
                                                    loc_1029f6b00();
                                            }
                                            r8 = arg_24;
                                            r24 = arg_18;
                                    }
                                    arg_24 = r8 + 0x1;
                                    bool_7610 = r8 < 0x9;
                                    r8 = r8 + 0x1;
                            } while (bool_7610);
                    }
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/numberOfPreciseFidelityMeshes", arg_c8);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/numberOfAutoFidelityMeshes", arg_cc);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/numberOfPerformanceFidelityMeshes", arg_d0);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/totalPreciseFidelityBytes", arg_d4);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/totalAutoFidelityBytes", arg_d8);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/totalPerformanceFidelityBytes", arg_dc);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/longestStreamingMs", arg_e0);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/longestStreamingFirst60sMs", arg_e4);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/longestStreamingMinQualityMs", arg_e8);
                    r0 = *r24;
                    (*(*r0 + 0x30))(r0, "gfx/meshes/longestStreamingMinQualityFirst60sMs", arg_ec);
            }
            if (r28[0x177] != 0x0 && r21[0x17] == 0x1) {
                    sub_10441dd18();
            }
            if (*(int8_t *)byte_106c36030 == 0x1 && r21[0x17] == 0x1) {
                    r0 = r28[0x171];
                    if (r0 != 0x0) {
                            (*(*r0 + 0x40))();
                            if (arg_28 != 0x0) {
                                    r0 = *r24;
                                    (*(*r0 + 0x40))(r0, "gfx/slim/loader/version");
                                    r0 = *r24;
                                    (*(*r0 + 0x38))(r0, "gfx/slim/loader/lod_requests", arg_30);
                                    r0 = *r24;
                                    (*(*r0 + 0x38))(r0, "gfx/slim/loader/lod_succeeded", arg_38);
                                    r0 = *r24;
                                    (*(*r0 + 0x38))(r0, "gfx/slim/loader/lod_failed", arg_40);
                                    r0 = *r24;
                                    (*(*r0 + 0x38))(r0, "gfx/slim/loader/acr_requests", arg_48);
                                    r0 = *r24;
                                    (*(*r0 + 0x38))(r0, "gfx/slim/loader/acr_retries", arg_50);
                                    r0 = *r24;
                                    (*(*r0 + 0x38))(r0, "gfx/slim/loader/acr_succeeded", arg_58);
                                    r0 = *r24;
                                    (*(*r0 + 0x38))(r0, "gfx/slim/loader/acr_failed", arg_60);
                                    r0 = *r24;
                                    (*(*r0 + 0x38))(r0, "gfx/slim/loader/bytes_received", arg_68);
                            }
                    }
            }
            if (r28[0x184] != 0x0) {
                    r19 = *r24;
                    sub_103b34238();
                    asm { fcvt       d0, s0 };
                    (*(*r19 + 0x18))(r19, "gfx/frm/shadingDistance");
            }
            r8 = r28[0x19d];
            r9 = r8[0x177];
            r10 = r8[0x178];
            r23 = r8[0x179];
            r22 = r8[0x176];
            r19 = r8[0x17b];
            r20 = r8[0x17c];
            r0 = *r24;
            (*(*r0 + 0x30))(r0, "gfx/triCount/instancedCluster", (r10 + r9) * 0xaaaaaaab >> 0x21);
            r0 = *arg_18;
            (*(*r0 + 0x30))(r0, "gfx/triCount/fastCluster", r23 * 0xaaaaaaab >> 0x21);
            r0 = *arg_18;
            (*(*r0 + 0x30))(r0, "gfx/triCount/nonInstancedCluster", r22 * 0xaaaaaaab >> 0x21);
            r0 = *arg_18;
            (*(*r0 + 0x30))(r0, "gfx/triCount/slim", (r20 + r19) * 0xaaaaaaab >> 0x21);
            r0 = r28[0x21];
            if (r0 != 0x0) {
                    r1 = "gfx/triCount/slim";
                    (*(*r0 + 0x100))();
                    r20 = arg_18;
                    if (arg_2c == 0x1) {
                            r0 = *r20;
                            asm { fcvt       d0, s0 };
                            r1 = "prof/gpu/total";
                            (*(*r0 + 0x18))(r0, "prof/gpu/total");
                    }
                    if ((r21[0x17] & 0x1) == 0x0) {
                            r0 = r28[0x21];
                            r19 = *(int8_t *)((*(*r0 + 0xf0))(r0, "prof/gpu/total") + 0x3b);
                            r0 = *r20;
                            r1 = "gfx/vsync/timingSupported";
                            (*(*r0 + 0x10))(r0, "gfx/vsync/timingSupported", r19);
                            if (r19 != 0x0 && arg_60 == 0x1) {
                                    r0 = *r20;
                                    (*(*r0 + 0x18))(r0, "gfx/vsync/displayIntervalMs");
                                    r0 = *r20;
                                    (*(*r0 + 0x18))(r0, "gfx/vsync/gapMs");
                                    r0 = *r20;
                                    (*(*r0 + 0x18))(r0, "gfx/vsync/targetMs");
                                    r0 = *r20;
                                    (*(*r0 + 0x18))(r0, "gfx/vsync/screenMaxFps");
                                    r8 = arg_58;
                                    if ((r28[0xa0] & 0x1) != 0x0) {
                                            r9 = r28[0x13];
                                            r10 = *(r28 + 0x9c);
                                            if (r8 < r9) {
                                                    r9 = 0x0;
                                            }
                                            r19 = r8 - r9;
                                            r9 = arg_5c;
                                            if (r9 < r10) {
                                                    r10 = 0x0;
                                            }
                                            r22 = r9 - r10;
                                    }
                                    else {
                                            r22 = 0x0;
                                            r19 = 0x0;
                                            r9 = arg_5c;
                                    }
                                    r28[0x13] = r8;
                                    *(r28 + 0x9c) = r9;
                                    r28[0xa0] = 0x1;
                                    r0 = *r20;
                                    (*(*r0 + 0x30))(r0, "gfx/vsync/framesWithinTarget", r19);
                                    r0 = *r20;
                                    r1 = "gfx/vsync/framesMissed";
                                    (*(*r0 + 0x30))(r0, "gfx/vsync/framesMissed", r22);
                                    r8 = r19 + r22;
                                    if (r8 != 0x0) {
                                            r0 = *r20;
                                            r1 = "gfx/vsync/framesWithinTargetPercent";
                                            (*(*r0 + 0x18))(r0, "gfx/vsync/framesWithinTargetPercent");
                                    }
                            }
                    }
                    if ((r21[0x17] & 0x1) == 0x0) {
                            if (*(int8_t *)byte_106c14d18 == 0x1) {
                                    r0 = r28[0x21];
                                    r0 = (*(*r0 + 0x118))(r0);
                                    if ((r1 & 0x1) != 0x0) {
                                            r0 = *r20;
                                            asm { fcvt       d0, s0 };
                                            (*(*r0 + 0x18))(r0, "gfx/metal/drawableWaitAvg");
                                            r0 = *r20;
                                            asm { fcvt       d0, s0 };
                                            (*(*r0 + 0x18))(r0, "gfx/metal/drawableWaitP95");
                                    }
                            }
                    }
            }
            if (r21[0x17] == 0x1 && sub_10295886c() != 0x0) {
                    arg_8 = r27;
                    arg_c = r25;
                    r23 = 0x106faeff8;
                    r26 = 0x68;
                    r27 = &arg_28;
                    r25 = &arg_130;
                    r24 = arg_18;
                    do {
                            r22 = *r23;
                            r19 = r28[0x187];
                            r21 = *r24;
                            r25[0x12] = r22[0x9];
                            r25[0x13] = 0x0;
                            r0 = sub_1023475b4("gfx/geoBuffers/{}/bufferCount", 0x1d, 0xc, &decomp_var_d0);
                            r8 = r19 + r26;
                            r10 = arg_28;
                            (*(*r21 + 0x38))(r21);
                            if ((sign_extend_64(arg_3f) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00();
                            }
                            r21 = *r24;
                            r25[0x12] = r22[0x9];
                            r25[0x13] = 0x0;
                            r0 = sub_1023475b4("gfx/geoBuffers/{}/vertexAllocatedMB", 0x23, 0xc, &decomp_var_d0);
                            r9 = arg_28;
                            r24 = r19 + r26;
                            asm { fcvt       d0, s0 };
                            (*(*r21 + 0x18))(r21);
                            if ((sign_extend_64(arg_3f) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00();
                            }
                            r21 = *arg_18;
                            r25[0x12] = r22[0x9];
                            r25[0x13] = 0x0;
                            r0 = sub_1023475b4("gfx/geoBuffers/{}/indexAllocatedMB", 0x22, 0xc, &decomp_var_d0);
                            r9 = arg_28;
                            r20 = r19 + r26;
                            asm { fcvt       d0, s0 };
                            (*(*r21 + 0x18))(r21);
                            if ((sign_extend_64(arg_3f) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00();
                            }
                            r21 = *arg_18;
                            r25[0x12] = r22[0x9];
                            r25[0x13] = 0x0;
                            r0 = sub_1023475b4("gfx/geoBuffers/{}/vertexCapacityMB", 0x22, 0xc, &decomp_var_d0);
                            r9 = arg_28;
                            r25 = r19 + r26;
                            asm { fcvt       d0, s0 };
                            (*(*r21 + 0x18))(r21);
                            r28 = &arg_28;
                            if ((sign_extend_64(arg_3f) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00();
                            }
                            r21 = *arg_18;
                            *(&arg_130 + 0x90) = r22[0x9];
                            *(&arg_130 + 0x98) = 0x0;
                            r0 = sub_1023475b4("gfx/geoBuffers/{}/indexCapacityMB", 0x21, 0xc, &decomp_var_d0);
                            r9 = arg_28;
                            r28 = r19 + r26;
                            asm { fcvt       d0, s0 };
                            (*(*r21 + 0x18))(r21);
                            if ((sign_extend_64(arg_3f) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00();
                            }
                            r21 = *arg_18;
                            *(&arg_130 + 0x90) = r22[0x9];
                            *(&arg_130 + 0x98) = 0x0;
                            r0 = sub_1023475b4("gfx/geoBuffers/{}/vertexOccupancy", 0x21, 0xc, &decomp_var_d0);
                            r27 = &arg_28;
                            r9 = arg_28;
                            r8 = r25[0xfffffffffffffffd];
                            if (r8 != 0x0) {
                                    asm { fcvt       d0, s0 };
                            }
                            r25 = &arg_130;
                            r24 = arg_18;
                            (*(*r21 + 0x18))(r21);
                            if ((sign_extend_64(arg_3f) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00();
                            }
                            r21 = *r24;
                            r25[0x12] = r22[0x9];
                            r25[0x13] = 0x0;
                            r0 = sub_1023475b4("gfx/geoBuffers/{}/indexOccupancy", 0x20, 0xc, &decomp_var_d0);
                            r9 = arg_28;
                            r8 = r28[0xfffffffffffffffe];
                            if (r8 != 0x0) {
                                    asm { fcvt       d0, s0 };
                            }
                            r28 = arg_10;
                            (*(*r21 + 0x18))(r21);
                            if ((sign_extend_64(arg_3f) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00();
                            }
                            r21 = *r24;
                            r25[0x12] = r22[0x9];
                            r25[0x13] = 0x0;
                            r0 = sub_1023475b4("gfx/geoBuffers/{}/numAllocatedVertices", 0x26, 0xc, &decomp_var_d0);
                            r9 = arg_28;
                            (*(*r21 + 0x38))(r21);
                            if ((sign_extend_64(arg_3f) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00();
                            }
                            r21 = *r24;
                            r25[0x12] = r22[0x9];
                            r25[0x13] = 0x0;
                            r0 = sub_1023475b4("gfx/geoBuffers/{}/numAllocatedIndices", 0x25, 0xc, &decomp_var_d0);
                            r9 = arg_28;
                            (*(*r21 + 0x38))(r21);
                            if ((sign_extend_64(arg_3f) & 0xffffffff80000000) != 0x0) {
                                    loc_1029f6b00();
                            }
                            r26 = r26 + 0x24;
                            r23 = r23 + 0x8;
                    } while (r26 != 0x11c);
                    r0 = *r24;
                    r25 = arg_c;
                    (*(*r0 + 0x30))(r0, "gfx/geoBuffers/total/bufferCount", *(int32_t *)(r28[0x187] + 0x104));
                    r27 = arg_8;
                    r0 = *arg_18;
                    asm { fcvt       d0, s0 };
                    (*(*r0 + 0x18))(r0, "gfx/geoBuffers/total/vertexAllocatedMB");
                    r0 = *arg_18;
                    asm { fcvt       d0, s0 };
                    (*(*r0 + 0x18))(r0, "gfx/geoBuffers/total/indexAllocatedMB");
                    r0 = *arg_18;
                    asm { fcvt       d0, s0 };
                    (*(*r0 + 0x18))(r0, "gfx/geoBuffers/total/vertexCapacityMB");
                    r0 = *arg_18;
                    asm { fcvt       d0, s0 };
                    (*(*r0 + 0x18))(r0, "gfx/geoBuffers/total/indexCapacityMB");
                    r0 = *arg_18;
                    r9 = r28[0x187];
                    r8 = r9[0x44];
                    if (r8 != 0x0) {
                            asm { fcvt       d0, s0 };
                    }
                    (*(*r0 + 0x18))();
                    r0 = *arg_18;
                    r9 = r28[0x187];
                    r8 = r9[0x45];
                    if (r8 != 0x0) {
                            asm { fcvt       d0, s0 };
                    }
                    (*(*r0 + 0x18))();
                    r0 = *arg_18;
                    (*(*r0 + 0x30))(r0, "gfx/geoBuffers/total/numAllocatedVertices", *(int32_t *)(r28[0x187] + 0x118));
                    r0 = *arg_18;
                    (*(*r0 + 0x30))(r0, "gfx/geoBuffers/total/numAllocatedIndices", *(int32_t *)(r28[0x187] + 0x11c));
            }
            r22 = arg_18;
            if (r28[0x185] != 0x0) {
                    sub_104179c84();
                    r0 = *r22;
                    (*(*r0 + 0x30))(r0, "gfx/particles/maxTotalEmittersPerFrame", arg_28);
                    r0 = *r22;
                    (*(*r0 + 0x30))(r0, "gfx/particles/maxSimulatedParticlesPerFrame", arg_2c);
                    r0 = *r22;
                    (*(*r0 + 0x30))(r0, "gfx/particles/visEmittersAtMaxParticles", arg_30);
            }
            if (*(int8_t *)byte_106c43c48 == 0x1) {
                    if (r28[0x185] != 0x0) {
                            if (r27 >= *(int32_t *)dword_106c43c60) {
                                    r19 = *(int32_t *)dword_106c43c78 + *(int32_t *)dword_106c43c60;
                                    if (r27 <= r19) {
                                            sub_104179c84();
                                            r0 = *r22;
                                            (*(*r0 + 0x30))(r0, "gfx/particles/visibleParticles", arg_34);
                                            r0 = *r22;
                                            (*(*r0 + 0x30))(r0, "gfx/particles/visibleEmitters", arg_38);
                                            r0 = *r22;
                                            (*(*r0 + 0x30))(r0, "gfx/particles/nonVisibleParticles", arg_3c);
                                            r0 = *r22;
                                            (*(*r0 + 0x30))(r0, "gfx/particles/nonVisibleEmitters", arg_40);
                                            if ((*(int8_t *)byte_106c1a5e0 & 0x1) == 0x0) {
                                                    r21 = *(int32_t *)dword_106c43c60;
                                                    r0 = *r22;
                                                    (*(*r0 + 0x20))(r0, "gfx/particles/minQualityLevel", r21);
                                                    r0 = *r22;
                                                    (*(*r0 + 0x20))(r0, "gfx/particles/maxQualityLevel", r19);
                                            }
                                            if ((*(int8_t *)byte_106c43c48 & 0x1) == 0x0) {
                                                    if (*(int8_t *)byte_106c43d38 == 0x1 && r28[0x185] != 0x0) {
                                                            sub_104179c84();
                                                            r0 = *r22;
                                                            asm { fcvt       d0, s0 };
                                                            (*(*r0 + 0x18))(r0, "gfx/particles/totalSimTimeAvgMs");
                                                            if (*(int8_t *)byte_106c1a610 == 0x1) {
                                                                    if (*(int8_t *)byte_106c43c48 == 0x1) {
                                                                            r0 = *r22;
                                                                            asm { fcvt       d0, s0 };
                                                                            (*(*r0 + 0x18))(r0, "gfx/particles/visibleSimTimeAvgMs");
                                                                    }
                                                            }
                                                    }
                                            }
                                            else {
                                                    if (r28[0x185] != 0x0) {
                                                            sub_104179c84();
                                                            r0 = *r22;
                                                            asm { fcvt       d0, s0 };
                                                            (*(*r0 + 0x18))(r0, "gfx/particles/totalSimTimeAvgMs");
                                                            if (*(int8_t *)byte_106c1a610 == 0x1) {
                                                                    if (*(int8_t *)byte_106c43c48 == 0x1) {
                                                                            r0 = *r22;
                                                                            asm { fcvt       d0, s0 };
                                                                            (*(*r0 + 0x18))(r0, "gfx/particles/visibleSimTimeAvgMs");
                                                                    }
                                                            }
                                                    }
                                            }
                                    }
                                    else {
                                            if (r28[0x185] != 0x0) {
                                                    sub_104179c84();
                                                    r0 = *r22;
                                                    asm { fcvt       d0, s0 };
                                                    (*(*r0 + 0x18))(r0, "gfx/particles/totalSimTimeAvgMs");
                                                    if (*(int8_t *)byte_106c1a610 == 0x1) {
                                                            if (*(int8_t *)byte_106c43c48 == 0x1) {
                                                                    r0 = *r22;
                                                                    asm { fcvt       d0, s0 };
                                                                    (*(*r0 + 0x18))(r0, "gfx/particles/visibleSimTimeAvgMs");
                                                            }
                                                    }
                                            }
                                    }
                            }
                            else {
                                    if (r28[0x185] != 0x0) {
                                            sub_104179c84();
                                            r0 = *r22;
                                            asm { fcvt       d0, s0 };
                                            (*(*r0 + 0x18))(r0, "gfx/particles/totalSimTimeAvgMs");
                                            if (*(int8_t *)byte_106c1a610 == 0x1) {
                                                    if (*(int8_t *)byte_106c43c48 == 0x1) {
                                                            r0 = *r22;
                                                            asm { fcvt       d0, s0 };
                                                            (*(*r0 + 0x18))(r0, "gfx/particles/visibleSimTimeAvgMs");
                                                    }
                                            }
                                    }
                            }
                    }
                    else {
                            if (r28[0x185] != 0x0) {
                                    sub_104179c84();
                                    r0 = *r22;
                                    asm { fcvt       d0, s0 };
                                    (*(*r0 + 0x18))(r0, "gfx/particles/totalSimTimeAvgMs");
                                    if (*(int8_t *)byte_106c1a610 == 0x1) {
                                            if (*(int8_t *)byte_106c43c48 == 0x1) {
                                                    r0 = *r22;
                                                    asm { fcvt       d0, s0 };
                                                    (*(*r0 + 0x18))(r0, "gfx/particles/visibleSimTimeAvgMs");
                                            }
                                    }
                            }
                    }
            }
            else {
                    if (*(int8_t *)byte_106c43d38 == 0x1 && r28[0x185] != 0x0) {
                            sub_104179c84();
                            r0 = *r22;
                            asm { fcvt       d0, s0 };
                            (*(*r0 + 0x18))(r0, "gfx/particles/totalSimTimeAvgMs");
                            if (*(int8_t *)byte_106c1a610 == 0x1) {
                                    if (*(int8_t *)byte_106c43c48 == 0x1) {
                                            r0 = *r22;
                                            asm { fcvt       d0, s0 };
                                            (*(*r0 + 0x18))(r0, "gfx/particles/visibleSimTimeAvgMs");
                                    }
                            }
                    }
            }
            r19 = sub_1044318c0(r28[0x186]);
            r0 = *r22;
            (*(*r0 + 0x30))(r0, "gfx/planeEffect/beamSegments", r19[0x4]);
            r0 = *r22;
            (*(*r0 + 0x30))(r0, "gfx/planeEffect/planeEffectVertices", r19[0x1]);
            r0 = *r22;
            (*(*r0 + 0x30))(r0, "gfx/planeEffect/beamVertices", r19[0x2]);
            r0 = *r22;
            (*(*r0 + 0x30))(r0, "gfx/planeEffect/trailVertices", r19[0x3]);
            sub_10117ad70(&arg_130);
            sub_1029f573c(r25);
    }
    if (**___stack_chk_guard != decomp_var_78) {
            __stack_chk_fail();
    }
    return;
}
