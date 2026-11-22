function sub_1015511fc {
    r31 = r31 - 0x50;
    arg_10 = r24;
    arg_18 = r23;
    arg_20 = r22;
    arg_28 = r21;
    arg_30 = r20;
    arg_38 = r19;
    arg_40 = r29;
    arg_48 = r30;
    r29 = &arg_40;
    r8 = *r3;
    r9 = r8 + 0x4;
    if (r9 > r2) goto loc_101551328;
    goto loc_101551224;

loc_101551328:
    arg_c = 0x4;
    r1 = &arg_c;
    r0 = sub_101348258("Error reading mesh data: offset is out of bounds while reading %d bytes", r1);
    arg_10 = d9;
    arg_18 = d8;
    arg_20 = r28;
    arg_28 = r27;
    arg_30 = r26;
    arg_38 = r25;
    arg_40 = r24;
    arg_48 = r23;
    arg_50 = r22;
    arg_58 = r21;
    arg_60 = r20;
    arg_68 = r19;
    arg_70 = r29;
    arg_78 = r30;
    r31 = r31 + 0xffffffffffffff80 - 0x350;
    r20 = r1;
    r21 = r0;
    r19 = r8;
    decomp_var_80 = **___stack_chk_guard;
    arg_c8 = 0x0;
    arg_e8 = 0x0;
    sub_10154cc5c();
    *(int32_t *)(*r19 + 0x248) = 0x2bc;
    arg_c0 = 0x0;
    if (r20 == 0x0) goto loc_101551c00;
    goto loc_1015513a8;

loc_101551224:
    r19 = r0;
    r23 = *(int32_t *)(r1 + r8);
    *r3 = r9;
    sub_1015535d0(*r0 + 0x1b0);
    sub_1015535d0(*r19 + 0x1c8, r1, r2, r3);
    r8 = *r19;
    r11 = r8[0x36];
    r12 = r8[0x37];
    if (r11 != r12) {
            r13 = r12[0xffffffffffffffff];
            r10 = r8[0x39];
            r9 = r8[0x3a];
            if (r13 == (r9 - r10) / 0x4) {
                    r12 = SAR(r12 - r11, 0x2);
                    if (r12 >= 0x2) {
                            r12 = r12 - 0x1;
                            r11 = r11 + 0x4;
                            while (true) {
                                    if (*r11 < *(r11 + 0xfffffffffffffffc)) {
                                            temp_4 = 0x0;
                                            break;
                                    }
                                    r11 = r11 + 0x4;
                                    r12 = r12 - 0x1;
                                    if (r12 != 0x0) {
                                            continue;
                                    }
                                    if (r10 == r9) {
                                            temp_4 = 0x2;
                                    }
                                    else {
                                            if (*(int32_t *)r10 < r23) {
                                                    r10 = r10 + 0x4;
                                                    temp_4 = 0x1;
                                            }
                                            else {
                                                    temp_4 = 0x3;
                                            }
                                    }
                                    break;
                            }
                            if (temp_4 != 0x0) {
                                    if (temp_4 != 0x1) {
                                            if (temp_4 != 0x2) {
                                                    sub_10153d9c4(r8 + 0x1b0, 0x0, 0x0, 0x0);
                                                    sub_10153d9c4(*r19 + 0x1c8, 0x0, 0x0, 0x0);
                                            }
                                    }
                                    else {
                                            while (true) {
                                                    if (r10 != r9) {
                                                            if (*(int32_t *)r10 < r23) {
                                                                    r10 = r10 + 0x4;
                                                                    continue;
                                                            }
                                                            temp_3 = 0x1;
                                                            break;
                                                    }
                                                    temp_3 = 0x0;
                                                    break;
                                            }
                                            if (temp_3 != 0x0) {
                                                    sub_10153d9c4(r8 + 0x1b0, 0x0, 0x0, 0x0);
                                                    sub_10153d9c4(*r19 + 0x1c8, 0x0, 0x0, 0x0);
                                            }
                                    }
                            }
                            else {
                                    sub_10153d9c4(r8 + 0x1b0, 0x0, 0x0, 0x0);
                                    sub_10153d9c4(*r19 + 0x1c8, 0x0, 0x0, 0x0);
                            }
                    }
                    else {
                            while (true) {
                                    if (r10 != r9) {
                                            if (*(int32_t *)r10 < r23) {
                                                    r10 = r10 + 0x4;
                                                    continue;
                                            }
                                            temp_3 = 0x1;
                                            break;
                                    }
                                    temp_3 = 0x0;
                                    break;
                            }
                            if (temp_3 != 0x0) {
                                    sub_10153d9c4(r8 + 0x1b0, 0x0, 0x0, 0x0);
                                    sub_10153d9c4(*r19 + 0x1c8, 0x0, 0x0, 0x0);
                            }
                    }
            }
            else {
                    sub_10153d9c4(r8 + 0x1b0, 0x0, 0x0, 0x0);
                    sub_10153d9c4(*r19 + 0x1c8, 0x0, 0x0, 0x0);
            }
    }
    else {
            sub_10153d9c4(r8 + 0x1b0, 0x0, 0x0, 0x0);
            sub_10153d9c4(*r19 + 0x1c8, 0x0, 0x0, 0x0);
    }
    return;

loc_101551c00:
    if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
            sub_1015558e0(*r19, "V7");
            if ((*(int8_t *)byte_106bdb710 & 0x1) == 0x0) {
                    sub_101540e3c(*r19, "V7");
            }
            if (arg_c4 != 0x0) {
                    if (arg_c0 != 0x0) {
                            if (*(int32_t *)(*r19 + 0x1f0) >= 0x1) {
                                    if (**___stack_chk_guard != decomp_var_80) {
                                            __stack_chk_fail();
                                    }
                            }
                            else {
                                    loc_1029fe0a0("Error reading mesh data: invalid number of LOD offsets", "V7");
                                    asm { brk        #0x1 };
                            }
                    }
                    else {
                            loc_1029fe0a0("Error reading mesh data: empty mesh", "V7");
                            asm { brk        #0x1 };
                    }
            }
            else {
                    loc_1029fe0a0("Error reading mesh data: empty mesh", "V7");
                    asm { brk        #0x1 };
            }
    }
    else {
            r8 = 0x0;
            if ((*(int8_t *)byte_106bdb710 & 0x1) == 0x0) {
                    sub_101540e3c(*r19);
                    r8 = arg_c8;
            }
            if (r8 == r20) {
                    if (arg_c4 != 0x0) {
                            if (arg_c0 != 0x0) {
                                    if (*(int32_t *)(*r19 + 0x1f0) >= 0x1) {
                                            if (**___stack_chk_guard != decomp_var_80) {
                                                    __stack_chk_fail();
                                            }
                                    }
                                    else {
                                            loc_1029fe0a0("Error reading mesh data: invalid number of LOD offsets");
                                            asm { brk        #0x1 };
                                    }
                            }
                            else {
                                    loc_1029fe0a0("Error reading mesh data: empty mesh");
                                    asm { brk        #0x1 };
                            }
                    }
                    else {
                            loc_1029fe0a0("Error reading mesh data: empty mesh");
                            asm { brk        #0x1 };
                    }
            }
            else {
                    loc_1029fe0a0("Error reading mesh data: unexpected data at end of file");
                    asm { brk        #0x1 };
            }
    }
    return;

loc_1015513a8:
    r28 = &arg_f0;
    arg_18 = "COREMESH chunk too small to hold the compressed mesh data size";
    d10 = 1000.0;
    goto loc_1015513d8;

loc_1015513d8:
    r0 = sub_10154f7e8(r21, r20, &arg_c8);
    arg_b0 = r0;
    arg_b8 = r1;
    r1 = r0;
    r0 = sub_101550220(&arg_e8, r1);
    r0 = arg_b0;
    if (r0 <= 0x50414d46444f4b) {
            if (r0 <= 0x4154454d444f4b) {
                    if (r0 != 0x53434146) {
                            if (r0 == 0x53444f4c) {
                                    r8 = arg_b8;
                                    if (r8 == 0x1) {
                                            r8 = *r19;
                                            r22 = r19[0x1];
                                            arg_80 = r8;
                                            if (r22 != 0x0) {
                                                    asm { ldadd      x9, x8, [x8] };
                                            }
                                            r1 = r21;
                                            r0 = loc_1015505b4(&arg_80, r1, r20, &arg_c8);
                                            if (r22 != 0x0) {
                                                    r8 = r22 + 0x8;
                                                    asm { ldaddal    x9, x8, [x8] };
                                                    if (r8 == 0x0) {
                                                            (*(*r22 + 0x10))(r22);
                                                            std::__1::__shared_weak_count::__release_weak(r22);
                                                    }
                                            }
                                            r8 = arg_c8;
                                            if (r8 < r20) {
                                                    continue;
                                            }
                                            if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                                    if (r8 != r20) {
                                                            temp_2 = 0x6;
                                                    }
                                                    else {
                                                            temp_2 = 0x3;
                                                    }
                                            }
                                            else {
                                                    temp_2 = 0x4;
                                            }
                                            break;
                                    }
                                    else {
                                            if ((*qword_106bdb7c8 & 0xff) >= 0x6 && (*qword_106bdb7c8 & 0xfe00) != 0x0) {
                                                    r1 = *qword_106bdb7d0;
                                                    arg_f0 = r8;
                                                    loc_1029fea60();
                                            }
                                            arg_c8 = arg_c8 + arg_bc;
                                            r8 = arg_c8;
                                            if (r8 < r20) {
                                                    continue;
                                            }
                                            if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                                    if (r8 != r20) {
                                                            temp_2 = 0x6;
                                                    }
                                                    else {
                                                            temp_2 = 0x3;
                                                    }
                                            }
                                            else {
                                                    temp_2 = 0x4;
                                            }
                                            break;
                                    }
                            }
                            else {
                                    asm { ccmp       x9, #0x0, #0x4, hs };
                                    if (!asm { ccmp       x9, #0x0, #0x4, hs }) {
                                            sub_10154f960();
                                            r9 = arg_f0;
                                            if (sign_extend_64(arg_107) >= 0x0) {
                                                    r8 = r28;
                                            }
                                            else {
                                                    r8 = r9;
                                            }
                                            arg_d0 = r8;
                                            r1 = *qword_106bdb7d0;
                                            loc_1029fea60(*qword_106bdb7c8, *qword_106bdb7d0, 0x2, "[FLog::FileMeshDataChunkReaderLogChannel] Unknown chunk skipped {}", 0x42, 0xc, &arg_d0, 0x1);
                                            if ((sign_extend_64(arg_107) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00(arg_f0);
                                            }
                                    }
                                    arg_c8 = arg_c8 + arg_bc;
                                    r8 = arg_c8;
                                    if (r8 < r20) {
                                            continue;
                                    }
                                    if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                            if (r8 != r20) {
                                                    temp_2 = 0x6;
                                            }
                                            else {
                                                    temp_2 = 0x3;
                                            }
                                    }
                                    else {
                                            temp_2 = 0x4;
                                    }
                                    break;
                            }
                    }
                    else {
                            r8 = arg_b8;
                            if (r8 == 0x1) {
                                    r8 = *r19;
                                    r22 = r19[0x1];
                                    arg_60 = r8;
                                    arg_68 = r22;
                                    if (r22 != 0x0) {
                                            asm { ldadd      x9, x8, [x8] };
                                    }
                                    r1 = &arg_60;
                                    r0 = loc_101550c1c(&arg_b0, r1, r21, r20, &arg_c8);
                                    if (r22 != 0x0) {
                                            r8 = r22 + 0x8;
                                            asm { ldaddal    x9, x8, [x8] };
                                            if (r8 == 0x0) {
                                                    (*(*r22 + 0x10))(r22);
                                                    std::__1::__shared_weak_count::__release_weak(r22);
                                            }
                                    }
                                    r8 = arg_c8;
                                    if (r8 < r20) {
                                            continue;
                                    }
                                    if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                            if (r8 != r20) {
                                                    temp_2 = 0x6;
                                            }
                                            else {
                                                    temp_2 = 0x3;
                                            }
                                    }
                                    else {
                                            temp_2 = 0x4;
                                    }
                                    break;
                            }
                            else {
                                    if ((*qword_106bdb7c8 & 0xff) >= 0x6) {
                                            if ((*qword_106bdb7c8 & 0xfe00) != 0x0) {
                                                    r0 = *qword_106bdb7c8;
                                                    r1 = *qword_106bdb7d0;
                                                    arg_f0 = r8;
                                                    r0 = loc_1029fea60(r0, *qword_106bdb7d0, 0x2, "[FLog::FileMeshDataChunkReaderLogChannel] Error reading 'FACS' chunk: unsupported version {}", 0x5c, 0x2, &arg_f0, 0x1);
                                            }
                                    }
                                    arg_c8 = arg_c8 + arg_bc;
                                    r8 = arg_c8;
                                    if (r8 < r20) {
                                            continue;
                                    }
                                    if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                            if (r8 != r20) {
                                                    temp_2 = 0x6;
                                            }
                                            else {
                                                    temp_2 = 0x3;
                                            }
                                    }
                                    else {
                                            temp_2 = 0x4;
                                    }
                                    break;
                            }
                    }
            }
            else {
                    if (r0 != 0x4154454d444f4c) {
                            if (r0 == 0x4853454d425553) {
                                    if (*(int8_t *)byte_106bdb7b0 == 0x1) {
                                            r8 = arg_b8;
                                            if (r8 == 0x1) {
                                                    r8 = *r19;
                                                    r22 = r19[0x1];
                                                    arg_30 = r8;
                                                    arg_38 = r22;
                                                    if (r22 != 0x0) {
                                                            asm { ldadd      x9, x8, [x8] };
                                                    }
                                                    r1 = &arg_30;
                                                    r0 = loc_101550e38(&arg_b0, r1, r21, r20, &arg_c8);
                                                    if (r22 != 0x0) {
                                                            r8 = r22 + 0x8;
                                                            asm { ldaddal    x9, x8, [x8] };
                                                            if (r8 == 0x0) {
                                                                    (*(*r22 + 0x10))(r22);
                                                                    std::__1::__shared_weak_count::__release_weak(r22);
                                                            }
                                                    }
                                                    r8 = arg_c8;
                                                    if (r8 < r20) {
                                                            continue;
                                                    }
                                                    if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                                            if (r8 != r20) {
                                                                    temp_2 = 0x6;
                                                            }
                                                            else {
                                                                    temp_2 = 0x3;
                                                            }
                                                    }
                                                    else {
                                                            temp_2 = 0x4;
                                                    }
                                                    break;
                                            }
                                            else {
                                                    if ((*qword_106bdb7c8 & 0xff) >= 0x6) {
                                                            if ((*qword_106bdb7c8 & 0xfe00) != 0x0) {
                                                                    r0 = *qword_106bdb7c8;
                                                                    r1 = *qword_106bdb7d0;
                                                                    arg_f0 = r8;
                                                                    r0 = loc_1029fea60(r0, *qword_106bdb7d0, 0x2, "[FLog::FileMeshDataChunkReaderLogChannel] Error reading 'SUBMESH' chunk: unsupported version {}", 0x5f, 0x2, &arg_f0, 0x1);
                                                            }
                                                    }
                                                    arg_c8 = arg_c8 + arg_bc;
                                                    r8 = arg_c8;
                                                    if (r8 < r20) {
                                                            continue;
                                                    }
                                                    if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                                            if (r8 != r20) {
                                                                    temp_2 = 0x6;
                                                            }
                                                            else {
                                                                    temp_2 = 0x3;
                                                            }
                                                    }
                                                    else {
                                                            temp_2 = 0x4;
                                                    }
                                                    break;
                                            }
                                    }
                                    else {
                                            arg_c8 = arg_c8 + arg_bc;
                                            r8 = arg_c8;
                                            if (r8 < r20) {
                                                    continue;
                                            }
                                            if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                                    if (r8 != r20) {
                                                            temp_2 = 0x6;
                                                    }
                                                    else {
                                                            temp_2 = 0x3;
                                                    }
                                            }
                                            else {
                                                    temp_2 = 0x4;
                                            }
                                            break;
                                    }
                            }
                            else {
                                    asm { ccmp       x9, #0x0, #0x4, hs };
                                    if (!asm { ccmp       x9, #0x0, #0x4, hs }) {
                                            r23 = *qword_106bdb7d0;
                                            sub_10154f960();
                                            r9 = arg_f0;
                                            if (sign_extend_64(arg_107) >= 0x0) {
                                                    r8 = r28;
                                            }
                                            else {
                                                    r8 = r9;
                                            }
                                            arg_d0 = r8;
                                            r1 = r23;
                                            loc_1029fea60(*qword_106bdb7c8, r1, 0x2, "[FLog::FileMeshDataChunkReaderLogChannel] Unknown chunk skipped {}", 0x42, 0xc, &arg_d0, 0x1);
                                            if ((sign_extend_64(arg_107) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00(arg_f0);
                                            }
                                    }
                                    arg_c8 = arg_c8 + arg_bc;
                                    r8 = arg_c8;
                                    if (r8 < r20) {
                                            continue;
                                    }
                                    if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                            if (r8 != r20) {
                                                    temp_2 = 0x6;
                                            }
                                            else {
                                                    temp_2 = 0x3;
                                            }
                                    }
                                    else {
                                            temp_2 = 0x4;
                                    }
                                    break;
                            }
                    }
                    else {
                            r8 = arg_b8;
                            if (r8 == 0x1) {
                                    r8 = *r19;
                                    r22 = r19[0x1];
                                    arg_50 = r8;
                                    arg_58 = r22;
                                    if (r22 != 0x0) {
                                            asm { ldadd      x9, x8, [x8] };
                                    }
                                    r1 = r21;
                                    r0 = sub_101550cf8(&arg_50, r1, r20, &arg_c8);
                                    if (r22 != 0x0) {
                                            r8 = r22 + 0x8;
                                            asm { ldaddal    x9, x8, [x8] };
                                            if (r8 == 0x0) {
                                                    (*(*r22 + 0x10))(r22);
                                                    std::__1::__shared_weak_count::__release_weak(r22);
                                            }
                                    }
                                    r8 = arg_c8;
                                    if (r8 < r20) {
                                            continue;
                                    }
                                    if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                            if (r8 != r20) {
                                                    temp_2 = 0x6;
                                            }
                                            else {
                                                    temp_2 = 0x3;
                                            }
                                    }
                                    else {
                                            temp_2 = 0x4;
                                    }
                                    break;
                            }
                            else {
                                    if ((*qword_106bdb7c8 & 0xff) >= 0x6) {
                                            if ((*qword_106bdb7c8 & 0xfe00) != 0x0) {
                                                    r0 = *qword_106bdb7c8;
                                                    r1 = *qword_106bdb7d0;
                                                    arg_f0 = r8;
                                                    r0 = loc_1029fea60(r0, *qword_106bdb7d0, 0x2, "[FLog::FileMeshDataChunkReaderLogChannel] Error reading 'LOD Metadata' chunk: unsupported version {}", 0x64, 0x2, &arg_f0, 0x1);
                                            }
                                    }
                                    arg_c8 = arg_c8 + arg_bc;
                                    r8 = arg_c8;
                                    if (r8 < r20) {
                                            continue;
                                    }
                                    if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                            if (r8 != r20) {
                                                    temp_2 = 0x6;
                                            }
                                            else {
                                                    temp_2 = 0x3;
                                            }
                                    }
                                    else {
                                            temp_2 = 0x4;
                                    }
                                    break;
                            }
                    }
            }
    }
    else {
            if (r0 <= 0x474e494e4e494b52) {
                    if (r0 != 0x50414d46444f4c) {
                            if (r0 == 0x56495245445655) {
                                    r8 = arg_b8;
                                    if (r8 == 0x1) {
                                            r8 = *r19;
                                            r22 = r19[0x1];
                                            arg_40 = r8;
                                            arg_48 = r22;
                                            if (r22 != 0x0) {
                                                    asm { ldadd      x10, x10, [x9] };
                                                    r11 = arg_c8;
                                                    r10 = r11 + 0xc;
                                                    if (r10 <= r20) {
                                                            r13 = *(r21 + r11);
                                                            r8[0x91] = *(int32_t *)(r21 + r11 + 0x8);
                                                            *(r8 + 0x23c) = r13;
                                                            arg_c8 = r10;
                                                            r8 = 0xffffffffffffffff;
                                                            asm { ldaddal    x8, x8, [x9] };
                                                            if (r8 == 0x0) {
                                                                    (*(*r22 + 0x10))(r22);
                                                                    std::__1::__shared_weak_count::__release_weak(r22);
                                                            }
                                                            r8 = arg_c8;
                                                            if (r8 < r20) {
                                                                    continue;
                                                            }
                                                            if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                                                    if (r8 != r20) {
                                                                            temp_2 = 0x6;
                                                                    }
                                                                    else {
                                                                            temp_2 = 0x3;
                                                                    }
                                                            }
                                                            else {
                                                                    temp_2 = 0x4;
                                                            }
                                                            break;
                                                    }
                                                    else {
                                                            temp_2 = 0x5;
                                                            break;
                                                    }
                                            }
                                            else {
                                                    r10 = arg_c8;
                                                    r9 = r10 + 0xc;
                                                    if (r9 <= r20) {
                                                            r12 = *(r21 + r10);
                                                            r8[0x91] = *(int32_t *)(r21 + r10 + 0x8);
                                                            *(r8 + 0x23c) = r12;
                                                            arg_c8 = r9;
                                                            r8 = arg_c8;
                                                            if (r8 < r20) {
                                                                    continue;
                                                            }
                                                            if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                                                    if (r8 != r20) {
                                                                            temp_2 = 0x6;
                                                                    }
                                                                    else {
                                                                            temp_2 = 0x3;
                                                                    }
                                                            }
                                                            else {
                                                                    temp_2 = 0x4;
                                                            }
                                                            break;
                                                    }
                                                    else {
                                                            temp_2 = 0x5;
                                                            break;
                                                    }
                                            }
                                    }
                                    else {
                                            if ((*qword_106bdb7c8 & 0xff) >= 0x6) {
                                                    if ((*qword_106bdb7c8 & 0xfe00) != 0x0) {
                                                            r1 = *qword_106bdb7d0;
                                                            arg_f0 = r8;
                                                            loc_1029fea60();
                                                    }
                                            }
                                            arg_c8 = arg_c8 + arg_bc;
                                            r8 = arg_c8;
                                            if (r8 < r20) {
                                                    continue;
                                            }
                                            if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                                    if (r8 != r20) {
                                                            temp_2 = 0x6;
                                                    }
                                                    else {
                                                            temp_2 = 0x3;
                                                    }
                                            }
                                            else {
                                                    temp_2 = 0x4;
                                            }
                                            break;
                                    }
                            }
                            else {
                                    asm { ccmp       x9, #0x0, #0x4, hs };
                                    if (!asm { ccmp       x9, #0x0, #0x4, hs }) {
                                            r23 = *qword_106bdb7d0;
                                            sub_10154f960();
                                            r9 = arg_f0;
                                            if (sign_extend_64(arg_107) >= 0x0) {
                                                    r8 = r28;
                                            }
                                            else {
                                                    r8 = r9;
                                            }
                                            arg_d0 = r8;
                                            r1 = r23;
                                            loc_1029fea60(*qword_106bdb7c8, r1, 0x2, "[FLog::FileMeshDataChunkReaderLogChannel] Unknown chunk skipped {}", 0x42, 0xc, &arg_d0, 0x1);
                                            if ((sign_extend_64(arg_107) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00(arg_f0);
                                            }
                                    }
                                    arg_c8 = arg_c8 + arg_bc;
                                    r8 = arg_c8;
                                    if (r8 < r20) {
                                            continue;
                                    }
                                    if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                            if (r8 != r20) {
                                                    temp_2 = 0x6;
                                            }
                                            else {
                                                    temp_2 = 0x3;
                                            }
                                    }
                                    else {
                                            temp_2 = 0x4;
                                    }
                                    break;
                            }
                    }
                    else {
                            if (arg_b8 == 0x1) {
                                    r8 = *r19;
                                    r22 = r19[0x1];
                                    arg_20 = r8;
                                    arg_28 = r22;
                                    if (r22 != 0x0) {
                                            asm { ldadd      x9, x8, [x8] };
                                    }
                                    r1 = r21;
                                    r0 = sub_1015511fc(&arg_20, r1, r20, &arg_c8);
                                    if (r22 != 0x0) {
                                            r8 = r22 + 0x8;
                                            asm { ldaddal    x9, x8, [x8] };
                                            if (r8 == 0x0) {
                                                    (*(*r22 + 0x10))(r22);
                                                    std::__1::__shared_weak_count::__release_weak(r22);
                                            }
                                    }
                                    r8 = arg_c8;
                                    if (r8 < r20) {
                                            continue;
                                    }
                                    if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                            if (r8 != r20) {
                                                    temp_2 = 0x6;
                                            }
                                            else {
                                                    temp_2 = 0x3;
                                            }
                                    }
                                    else {
                                            temp_2 = 0x4;
                                    }
                                    break;
                            }
                            else {
                                    arg_c8 = arg_c8 + arg_bc;
                                    r8 = arg_c8;
                                    if (r8 < r20) {
                                            continue;
                                    }
                                    if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                            if (r8 != r20) {
                                                    temp_2 = 0x6;
                                            }
                                            else {
                                                    temp_2 = 0x3;
                                            }
                                    }
                                    else {
                                            temp_2 = 0x4;
                                    }
                                    break;
                            }
                    }
            }
            else {
                    if (r0 != 0x474e494e4e494b53) {
                            if (r0 == 0x4853454d45524f43) {
                                    r8 = arg_b8;
                                    if (r8 != 0x1) {
                                            if (r8 == 0x2) {
                                                    r23 = *r19;
                                                    r22 = r19[0x1];
                                                    if (r22 != 0x0) {
                                                            asm { ldadd      x9, x8, [x8] };
                                                    }
                                                    r8 = byte_106bdb000;
                                                    r9 = arg_bc;
                                                    if (*(int8_t *)byte_106bdb7f0 == 0x1) {
                                                            if (r9 >= 0x3) {
                                                                    r11 = arg_c8;
                                                                    r25 = r11 + 0x4;
                                                                    r8 = r20 - r25;
                                                                    if (r8 >= 0x0) {
                                                                            r10 = *(int8_t *)byte_106bdb7f0;
                                                                            r27 = *(int32_t *)(r21 + r11);
                                                                            arg_c8 = r25;
                                                                            if (r10 != 0x0) {
                                                                                    if (r9 - 0x4 >= r27) {
                                                                                            if (r8 >= r27) {
                                                                                                    r24 = r27;
                                                                                            }
                                                                                            else {
                                                                                                    r24 = r8;
                                                                                            }
                                                                                            loc_102a0c7ec();
                                                                                            d8 = d0;
                                                                                            r1 = r24;
                                                                                            if ((sub_101559470(r21 + r25, r1, r23) & 0x1) != 0x0) {
                                                                                                    arg_c8 = arg_c8 + r27;
                                                                                                    r0 = loc_1029ffa34();
                                                                                                    if (r0 - (r0 * 0xd1b71759 >> 0x2d) * 0x2710 < *(int32_t *)dword_106bdb7d8) {
                                                                                                            loc_102a0c7ec();
                                                                                                            sub_100029730(&arg_f0, 0x1068a7528);
                                                                                                            d0 = (d9 - d8) * d10;
                                                                                                            loc_1025d4ca0(&arg_f0);
                                                                                                            loc_1025d507c(&arg_f0);
                                                                                                            r1 = 0x10699b708;
                                                                                                            r0 = sub_10002a8d8(&arg_f0, 0x10699b708);
                                                                                                    }
                                                                                                    r8 = r23[0x6];
                                                                                                    r11 = (SAR(r23[0x7] - r8, 0x2)) * 0xaaaaaaaaaaaaaaab;
                                                                                                    r10 = *r23;
                                                                                                    r9 = r23[0x1];
                                                                                                    r9 = (r9 - r10 >> 0x3) * 0xcccccccd;
                                                                                                    arg_c0 = r11;
                                                                                                    arg_c4 = r9;
                                                                                                    if (r11 != 0x0) {
                                                                                                            r10 = 0x0;
                                                                                                            while (true) {
                                                                                                                    r12 = 0x0;
                                                                                                                    d0 = *(0xc + 0xc * r10);
                                                                                                                    arg_f0 = d0;
                                                                                                                    while (true) {
                                                                                                                            r13 = *(int32_t *)(r28 + r12);
                                                                                                                            if (r13 >= r9) {
                                                                                                                                    arg_8 = r13;
                                                                                                                                    arg_10 = r9;
                                                                                                                                    arg_0 = r10;
                                                                                                                                    loc_1029fe0a0("Error reading mesh data: face %d index value %d out of range %d");
                                                                                                                                    temp_0 = 0x0;
                                                                                                                                    break;
                                                                                                                            }
                                                                                                                            r12 = r12 + 0x4;
                                                                                                                            if (r12 != 0xc) {
                                                                                                                                    continue;
                                                                                                                            }
                                                                                                                            temp_0 = 0x1;
                                                                                                                            break;
                                                                                                                    }
                                                                                                                    if (temp_0 == 0x0) {
                                                                                                                            temp_1 = 0x1;
                                                                                                                            break;
                                                                                                                    }
                                                                                                                    r10 = r10 + 0x1;
                                                                                                                    if (r10 != r11) {
                                                                                                                            continue;
                                                                                                                    }
                                                                                                                    temp_1 = 0x0;
                                                                                                                    break;
                                                                                                            }
                                                                                                            if (temp_1 != 0x0) {
                                                                                                                    temp_2 = 0x0;
                                                                                                                    break;
                                                                                                            }
                                                                                                            else {
                                                                                                                    if (r22 != 0x0) {
                                                                                                                            r8 = r22 + 0x8;
                                                                                                                            asm { ldaddal    x9, x8, [x8] };
                                                                                                                            if (r8 == 0x0) {
                                                                                                                                    (*(*r22 + 0x10))(r22);
                                                                                                                                    std::__1::__shared_weak_count::__release_weak(r22);
                                                                                                                            }
                                                                                                                    }
                                                                                                                    r8 = arg_c8;
                                                                                                                    if (r8 < r20) {
                                                                                                                            continue;
                                                                                                                    }
                                                                                                                    if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                                                                                                            if (r8 != r20) {
                                                                                                                                    temp_2 = 0x6;
                                                                                                                            }
                                                                                                                            else {
                                                                                                                                    temp_2 = 0x3;
                                                                                                                            }
                                                                                                                    }
                                                                                                                    else {
                                                                                                                            temp_2 = 0x4;
                                                                                                                    }
                                                                                                                    break;
                                                                                                            }
                                                                                                    }
                                                                                                    else {
                                                                                                            if (r22 != 0x0) {
                                                                                                                    r8 = r22 + 0x8;
                                                                                                                    asm { ldaddal    x9, x8, [x8] };
                                                                                                                    if (r8 == 0x0) {
                                                                                                                            (*(*r22 + 0x10))(r22);
                                                                                                                            std::__1::__shared_weak_count::__release_weak(r22);
                                                                                                                    }
                                                                                                            }
                                                                                                            r8 = arg_c8;
                                                                                                            if (r8 < r20) {
                                                                                                                    continue;
                                                                                                            }
                                                                                                            if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                                                                                                    if (r8 != r20) {
                                                                                                                            temp_2 = 0x6;
                                                                                                                    }
                                                                                                                    else {
                                                                                                                            temp_2 = 0x3;
                                                                                                                    }
                                                                                                            }
                                                                                                            else {
                                                                                                                    temp_2 = 0x4;
                                                                                                            }
                                                                                                            break;
                                                                                                    }
                                                                                            }
                                                                                            else {
                                                                                                    r8 = *(int8_t *)byte_106c05950;
                                                                                                    if (*(int8_t *)byte_106c05950 == 0x1) {
                                                                                                            r8 = *(int8_t *)byte_106c05950;
                                                                                                            sub_10001565c(&arg_f0, 0x1068a7510);
                                                                                                            loc_1025cc26c(&arg_f0);
                                                                                                            sub_100015724(&arg_f0);
                                                                                                            temp_2 = 0x7;
                                                                                                    }
                                                                                                    else {
                                                                                                            temp_2 = 0x7;
                                                                                                    }
                                                                                                    break;
                                                                                            }
                                                                                    }
                                                                                    else {
                                                                                            r8 = "Compressed mesh data size exceeds COREMESH chunk size";
                                                                                            temp_2 = 0x2;
                                                                                            break;
                                                                                    }
                                                                            }
                                                                            else {
                                                                                    if (*(int8_t *)byte_106c04c38 == 0x1) {
                                                                                            if (r8 >= r27) {
                                                                                                    r9 = r25 + r27;
                                                                                                    if (r8 >= r9) {
                                                                                                            r24 = r9;
                                                                                                    }
                                                                                                    else {
                                                                                                            r24 = r8;
                                                                                                    }
                                                                                                    loc_102a0c7ec();
                                                                                                    d8 = d0;
                                                                                                    r1 = r24;
                                                                                                    if ((sub_101559470(r21 + r25, r1, r23) & 0x1) != 0x0) {
                                                                                                            arg_c8 = arg_c8 + r27;
                                                                                                            r0 = loc_1029ffa34();
                                                                                                            if (r0 - (r0 * 0xd1b71759 >> 0x2d) * 0x2710 < *(int32_t *)dword_106bdb7d8) {
                                                                                                                    loc_102a0c7ec();
                                                                                                                    sub_100029730(&arg_f0, 0x1068a7528);
                                                                                                                    d0 = (d9 - d8) * d10;
                                                                                                                    loc_1025d4ca0(&arg_f0);
                                                                                                                    loc_1025d507c(&arg_f0);
                                                                                                                    r1 = 0x10699b708;
                                                                                                                    r0 = sub_10002a8d8(&arg_f0, 0x10699b708);
                                                                                                            }
                                                                                                            r8 = r23[0x6];
                                                                                                            r11 = (SAR(r23[0x7] - r8, 0x2)) * 0xaaaaaaaaaaaaaaab;
                                                                                                            r10 = *r23;
                                                                                                            r9 = r23[0x1];
                                                                                                            r9 = (r9 - r10 >> 0x3) * 0xcccccccd;
                                                                                                            arg_c0 = r11;
                                                                                                            arg_c4 = r9;
                                                                                                            if (r11 != 0x0) {
                                                                                                                    r10 = 0x0;
                                                                                                                    while (true) {
                                                                                                                            r12 = 0x0;
                                                                                                                            d0 = *(0xc + 0xc * r10);
                                                                                                                            arg_f0 = d0;
                                                                                                                            while (true) {
                                                                                                                                    r13 = *(int32_t *)(r28 + r12);
                                                                                                                                    if (r13 >= r9) {
                                                                                                                                            arg_8 = r13;
                                                                                                                                            arg_10 = r9;
                                                                                                                                            arg_0 = r10;
                                                                                                                                            loc_1029fe0a0("Error reading mesh data: face %d index value %d out of range %d");
                                                                                                                                            temp_0 = 0x0;
                                                                                                                                            break;
                                                                                                                                    }
                                                                                                                                    r12 = r12 + 0x4;
                                                                                                                                    if (r12 != 0xc) {
                                                                                                                                            continue;
                                                                                                                                    }
                                                                                                                                    temp_0 = 0x1;
                                                                                                                                    break;
                                                                                                                            }
                                                                                                                            if (temp_0 == 0x0) {
                                                                                                                                    temp_1 = 0x1;
                                                                                                                                    break;
                                                                                                                            }
                                                                                                                            r10 = r10 + 0x1;
                                                                                                                            if (r10 != r11) {
                                                                                                                                    continue;
                                                                                                                            }
                                                                                                                            temp_1 = 0x0;
                                                                                                                            break;
                                                                                                                    }
                                                                                                                    if (temp_1 != 0x0) {
                                                                                                                            temp_2 = 0x0;
                                                                                                                            break;
                                                                                                                    }
                                                                                                                    else {
                                                                                                                            if (r22 != 0x0) {
                                                                                                                                    r8 = r22 + 0x8;
                                                                                                                                    asm { ldaddal    x9, x8, [x8] };
                                                                                                                                    if (r8 == 0x0) {
                                                                                                                                            (*(*r22 + 0x10))(r22);
                                                                                                                                            std::__1::__shared_weak_count::__release_weak(r22);
                                                                                                                                    }
                                                                                                                            }
                                                                                                                            r8 = arg_c8;
                                                                                                                            if (r8 < r20) {
                                                                                                                                    continue;
                                                                                                                            }
                                                                                                                            if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                                                                                                                    if (r8 != r20) {
                                                                                                                                            temp_2 = 0x6;
                                                                                                                                    }
                                                                                                                                    else {
                                                                                                                                            temp_2 = 0x3;
                                                                                                                                    }
                                                                                                                            }
                                                                                                                            else {
                                                                                                                                    temp_2 = 0x4;
                                                                                                                            }
                                                                                                                            break;
                                                                                                                    }
                                                                                                            }
                                                                                                            else {
                                                                                                                    if (r22 != 0x0) {
                                                                                                                            r8 = r22 + 0x8;
                                                                                                                            asm { ldaddal    x9, x8, [x8] };
                                                                                                                            if (r8 == 0x0) {
                                                                                                                                    (*(*r22 + 0x10))(r22);
                                                                                                                                    std::__1::__shared_weak_count::__release_weak(r22);
                                                                                                                            }
                                                                                                                    }
                                                                                                                    r8 = arg_c8;
                                                                                                                    if (r8 < r20) {
                                                                                                                            continue;
                                                                                                                    }
                                                                                                                    if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                                                                                                            if (r8 != r20) {
                                                                                                                                    temp_2 = 0x6;
                                                                                                                            }
                                                                                                                            else {
                                                                                                                                    temp_2 = 0x3;
                                                                                                                            }
                                                                                                                    }
                                                                                                                    else {
                                                                                                                            temp_2 = 0x4;
                                                                                                                    }
                                                                                                                    break;
                                                                                                            }
                                                                                                    }
                                                                                                    else {
                                                                                                            r8 = *(int8_t *)byte_106c05950;
                                                                                                            if (*(int8_t *)byte_106c05950 == 0x1) {
                                                                                                                    r8 = *(int8_t *)byte_106c05950;
                                                                                                                    sub_10001565c(&arg_f0, 0x1068a7510);
                                                                                                                    loc_1025cc26c(&arg_f0);
                                                                                                                    sub_100015724(&arg_f0);
                                                                                                                    temp_2 = 0x7;
                                                                                                            }
                                                                                                            else {
                                                                                                                    temp_2 = 0x7;
                                                                                                            }
                                                                                                            break;
                                                                                                    }
                                                                                            }
                                                                                            else {
                                                                                                    temp_2 = 0x8;
                                                                                                    break;
                                                                                            }
                                                                                    }
                                                                                    else {
                                                                                            r9 = r25 + r27;
                                                                                            if (r8 >= r9) {
                                                                                                    r24 = r9;
                                                                                            }
                                                                                            else {
                                                                                                    r24 = r8;
                                                                                            }
                                                                                            if (r9 <= r20) {
                                                                                                    loc_102a0c7ec();
                                                                                                    d8 = d0;
                                                                                                    r1 = r24;
                                                                                                    if ((sub_101559470(r21 + r25, r1, r23) & 0x1) != 0x0) {
                                                                                                            arg_c8 = arg_c8 + r27;
                                                                                                            r0 = loc_1029ffa34();
                                                                                                            if (r0 - (r0 * 0xd1b71759 >> 0x2d) * 0x2710 < *(int32_t *)dword_106bdb7d8) {
                                                                                                                    loc_102a0c7ec();
                                                                                                                    sub_100029730(&arg_f0, 0x1068a7528);
                                                                                                                    d0 = (d9 - d8) * d10;
                                                                                                                    loc_1025d4ca0(&arg_f0);
                                                                                                                    loc_1025d507c(&arg_f0);
                                                                                                                    r1 = 0x10699b708;
                                                                                                                    r0 = sub_10002a8d8(&arg_f0, 0x10699b708);
                                                                                                            }
                                                                                                            r8 = r23[0x6];
                                                                                                            r11 = (SAR(r23[0x7] - r8, 0x2)) * 0xaaaaaaaaaaaaaaab;
                                                                                                            r10 = *r23;
                                                                                                            r9 = r23[0x1];
                                                                                                            r9 = (r9 - r10 >> 0x3) * 0xcccccccd;
                                                                                                            arg_c0 = r11;
                                                                                                            arg_c4 = r9;
                                                                                                            if (r11 != 0x0) {
                                                                                                                    r10 = 0x0;
                                                                                                                    while (true) {
                                                                                                                            r12 = 0x0;
                                                                                                                            d0 = *(0xc + 0xc * r10);
                                                                                                                            arg_f0 = d0;
                                                                                                                            while (true) {
                                                                                                                                    r13 = *(int32_t *)(r28 + r12);
                                                                                                                                    if (r13 >= r9) {
                                                                                                                                            arg_8 = r13;
                                                                                                                                            arg_10 = r9;
                                                                                                                                            arg_0 = r10;
                                                                                                                                            loc_1029fe0a0("Error reading mesh data: face %d index value %d out of range %d");
                                                                                                                                            temp_0 = 0x0;
                                                                                                                                            break;
                                                                                                                                    }
                                                                                                                                    r12 = r12 + 0x4;
                                                                                                                                    if (r12 != 0xc) {
                                                                                                                                            continue;
                                                                                                                                    }
                                                                                                                                    temp_0 = 0x1;
                                                                                                                                    break;
                                                                                                                            }
                                                                                                                            if (temp_0 == 0x0) {
                                                                                                                                    temp_1 = 0x1;
                                                                                                                                    break;
                                                                                                                            }
                                                                                                                            r10 = r10 + 0x1;
                                                                                                                            if (r10 != r11) {
                                                                                                                                    continue;
                                                                                                                            }
                                                                                                                            temp_1 = 0x0;
                                                                                                                            break;
                                                                                                                    }
                                                                                                                    if (temp_1 != 0x0) {
                                                                                                                            temp_2 = 0x0;
                                                                                                                            break;
                                                                                                                    }
                                                                                                                    else {
                                                                                                                            if (r22 != 0x0) {
                                                                                                                                    r8 = r22 + 0x8;
                                                                                                                                    asm { ldaddal    x9, x8, [x8] };
                                                                                                                                    if (r8 == 0x0) {
                                                                                                                                            (*(*r22 + 0x10))(r22);
                                                                                                                                            std::__1::__shared_weak_count::__release_weak(r22);
                                                                                                                                    }
                                                                                                                            }
                                                                                                                            r8 = arg_c8;
                                                                                                                            if (r8 < r20) {
                                                                                                                                    continue;
                                                                                                                            }
                                                                                                                            if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                                                                                                                    if (r8 != r20) {
                                                                                                                                            temp_2 = 0x6;
                                                                                                                                    }
                                                                                                                                    else {
                                                                                                                                            temp_2 = 0x3;
                                                                                                                                    }
                                                                                                                            }
                                                                                                                            else {
                                                                                                                                    temp_2 = 0x4;
                                                                                                                            }
                                                                                                                            break;
                                                                                                                    }
                                                                                                            }
                                                                                                            else {
                                                                                                                    if (r22 != 0x0) {
                                                                                                                            r8 = r22 + 0x8;
                                                                                                                            asm { ldaddal    x9, x8, [x8] };
                                                                                                                            if (r8 == 0x0) {
                                                                                                                                    (*(*r22 + 0x10))(r22);
                                                                                                                                    std::__1::__shared_weak_count::__release_weak(r22);
                                                                                                                            }
                                                                                                                    }
                                                                                                                    r8 = arg_c8;
                                                                                                                    if (r8 < r20) {
                                                                                                                            continue;
                                                                                                                    }
                                                                                                                    if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                                                                                                            if (r8 != r20) {
                                                                                                                                    temp_2 = 0x6;
                                                                                                                            }
                                                                                                                            else {
                                                                                                                                    temp_2 = 0x3;
                                                                                                                            }
                                                                                                                    }
                                                                                                                    else {
                                                                                                                            temp_2 = 0x4;
                                                                                                                    }
                                                                                                                    break;
                                                                                                            }
                                                                                                    }
                                                                                                    else {
                                                                                                            r8 = *(int8_t *)byte_106c05950;
                                                                                                            if (*(int8_t *)byte_106c05950 == 0x1) {
                                                                                                                    r8 = *(int8_t *)byte_106c05950;
                                                                                                                    sub_10001565c(&arg_f0, 0x1068a7510);
                                                                                                                    loc_1025cc26c(&arg_f0);
                                                                                                                    sub_100015724(&arg_f0);
                                                                                                                    temp_2 = 0x7;
                                                                                                            }
                                                                                                            else {
                                                                                                                    temp_2 = 0x7;
                                                                                                            }
                                                                                                            break;
                                                                                                    }
                                                                                            }
                                                                                            else {
                                                                                                    temp_2 = 0x8;
                                                                                                    break;
                                                                                            }
                                                                                    }
                                                                            }
                                                                    }
                                                                    else {
                                                                            r8 = 0x4;
                                                                            arg_f0 = 0x4;
                                                                            sub_101348258("Error reading mesh data: offset is out of bounds while reading %d bytes", &arg_f0);
                                                                            temp_2 = 0x1;
                                                                            break;
                                                                    }
                                                            }
                                                            else {
                                                                    temp_2 = 0x9;
                                                                    break;
                                                            }
                                                    }
                                                    else {
                                                            r11 = arg_c8;
                                                            r25 = r11 + 0x4;
                                                            r8 = r20 - r25;
                                                            if (r8 >= 0x0) {
                                                                    r10 = *(int8_t *)byte_106bdb7f0;
                                                                    r27 = *(int32_t *)(r21 + r11);
                                                                    arg_c8 = r25;
                                                                    if (r10 != 0x0) {
                                                                            if (r9 - 0x4 >= r27) {
                                                                                    if (r8 >= r27) {
                                                                                            r24 = r27;
                                                                                    }
                                                                                    else {
                                                                                            r24 = r8;
                                                                                    }
                                                                                    loc_102a0c7ec();
                                                                                    d8 = d0;
                                                                                    r1 = r24;
                                                                                    if ((sub_101559470(r21 + r25, r1, r23) & 0x1) != 0x0) {
                                                                                            arg_c8 = arg_c8 + r27;
                                                                                            r0 = loc_1029ffa34();
                                                                                            if (r0 - (r0 * 0xd1b71759 >> 0x2d) * 0x2710 < *(int32_t *)dword_106bdb7d8) {
                                                                                                    loc_102a0c7ec();
                                                                                                    sub_100029730(&arg_f0, 0x1068a7528);
                                                                                                    d0 = (d9 - d8) * d10;
                                                                                                    loc_1025d4ca0(&arg_f0);
                                                                                                    loc_1025d507c(&arg_f0);
                                                                                                    r1 = 0x10699b708;
                                                                                                    r0 = sub_10002a8d8(&arg_f0, 0x10699b708);
                                                                                            }
                                                                                            r8 = r23[0x6];
                                                                                            r11 = (SAR(r23[0x7] - r8, 0x2)) * 0xaaaaaaaaaaaaaaab;
                                                                                            r10 = *r23;
                                                                                            r9 = r23[0x1];
                                                                                            r9 = (r9 - r10 >> 0x3) * 0xcccccccd;
                                                                                            arg_c0 = r11;
                                                                                            arg_c4 = r9;
                                                                                            if (r11 != 0x0) {
                                                                                                    r10 = 0x0;
                                                                                                    while (true) {
                                                                                                            r12 = 0x0;
                                                                                                            d0 = *(0xc + 0xc * r10);
                                                                                                            arg_f0 = d0;
                                                                                                            while (true) {
                                                                                                                    r13 = *(int32_t *)(r28 + r12);
                                                                                                                    if (r13 >= r9) {
                                                                                                                            arg_8 = r13;
                                                                                                                            arg_10 = r9;
                                                                                                                            arg_0 = r10;
                                                                                                                            loc_1029fe0a0("Error reading mesh data: face %d index value %d out of range %d");
                                                                                                                            temp_0 = 0x0;
                                                                                                                            break;
                                                                                                                    }
                                                                                                                    r12 = r12 + 0x4;
                                                                                                                    if (r12 != 0xc) {
                                                                                                                            continue;
                                                                                                                    }
                                                                                                                    temp_0 = 0x1;
                                                                                                                    break;
                                                                                                            }
                                                                                                            if (temp_0 == 0x0) {
                                                                                                                    temp_1 = 0x1;
                                                                                                                    break;
                                                                                                            }
                                                                                                            r10 = r10 + 0x1;
                                                                                                            if (r10 != r11) {
                                                                                                                    continue;
                                                                                                            }
                                                                                                            temp_1 = 0x0;
                                                                                                            break;
                                                                                                    }
                                                                                                    if (temp_1 != 0x0) {
                                                                                                            temp_2 = 0x0;
                                                                                                            break;
                                                                                                    }
                                                                                                    else {
                                                                                                            if (r22 != 0x0) {
                                                                                                                    r8 = r22 + 0x8;
                                                                                                                    asm { ldaddal    x9, x8, [x8] };
                                                                                                                    if (r8 == 0x0) {
                                                                                                                            (*(*r22 + 0x10))(r22);
                                                                                                                            std::__1::__shared_weak_count::__release_weak(r22);
                                                                                                                    }
                                                                                                            }
                                                                                                            r8 = arg_c8;
                                                                                                            if (r8 < r20) {
                                                                                                                    continue;
                                                                                                            }
                                                                                                            if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                                                                                                    if (r8 != r20) {
                                                                                                                            temp_2 = 0x6;
                                                                                                                    }
                                                                                                                    else {
                                                                                                                            temp_2 = 0x3;
                                                                                                                    }
                                                                                                            }
                                                                                                            else {
                                                                                                                    temp_2 = 0x4;
                                                                                                            }
                                                                                                            break;
                                                                                                    }
                                                                                            }
                                                                                            else {
                                                                                                    if (r22 != 0x0) {
                                                                                                            r8 = r22 + 0x8;
                                                                                                            asm { ldaddal    x9, x8, [x8] };
                                                                                                            if (r8 == 0x0) {
                                                                                                                    (*(*r22 + 0x10))(r22);
                                                                                                                    std::__1::__shared_weak_count::__release_weak(r22);
                                                                                                            }
                                                                                                    }
                                                                                                    r8 = arg_c8;
                                                                                                    if (r8 < r20) {
                                                                                                            continue;
                                                                                                    }
                                                                                                    if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                                                                                            if (r8 != r20) {
                                                                                                                    temp_2 = 0x6;
                                                                                                            }
                                                                                                            else {
                                                                                                                    temp_2 = 0x3;
                                                                                                            }
                                                                                                    }
                                                                                                    else {
                                                                                                            temp_2 = 0x4;
                                                                                                    }
                                                                                                    break;
                                                                                            }
                                                                                    }
                                                                                    else {
                                                                                            r8 = *(int8_t *)byte_106c05950;
                                                                                            if (*(int8_t *)byte_106c05950 == 0x1) {
                                                                                                    r8 = *(int8_t *)byte_106c05950;
                                                                                                    sub_10001565c(&arg_f0, 0x1068a7510);
                                                                                                    loc_1025cc26c(&arg_f0);
                                                                                                    sub_100015724(&arg_f0);
                                                                                                    temp_2 = 0x7;
                                                                                            }
                                                                                            else {
                                                                                                    temp_2 = 0x7;
                                                                                            }
                                                                                            break;
                                                                                    }
                                                                            }
                                                                            else {
                                                                                    r8 = "Compressed mesh data size exceeds COREMESH chunk size";
                                                                                    temp_2 = 0x2;
                                                                                    break;
                                                                            }
                                                                    }
                                                                    else {
                                                                            if (*(int8_t *)byte_106c04c38 == 0x1) {
                                                                                    if (r8 >= r27) {
                                                                                            r9 = r25 + r27;
                                                                                            if (r8 >= r9) {
                                                                                                    r24 = r9;
                                                                                            }
                                                                                            else {
                                                                                                    r24 = r8;
                                                                                            }
                                                                                            loc_102a0c7ec();
                                                                                            d8 = d0;
                                                                                            r1 = r24;
                                                                                            if ((sub_101559470(r21 + r25, r1, r23) & 0x1) != 0x0) {
                                                                                                    arg_c8 = arg_c8 + r27;
                                                                                                    r0 = loc_1029ffa34();
                                                                                                    if (r0 - (r0 * 0xd1b71759 >> 0x2d) * 0x2710 < *(int32_t *)dword_106bdb7d8) {
                                                                                                            loc_102a0c7ec();
                                                                                                            sub_100029730(&arg_f0, 0x1068a7528);
                                                                                                            d0 = (d9 - d8) * d10;
                                                                                                            loc_1025d4ca0(&arg_f0);
                                                                                                            loc_1025d507c(&arg_f0);
                                                                                                            r1 = 0x10699b708;
                                                                                                            r0 = sub_10002a8d8(&arg_f0, 0x10699b708);
                                                                                                    }
                                                                                                    r8 = r23[0x6];
                                                                                                    r11 = (SAR(r23[0x7] - r8, 0x2)) * 0xaaaaaaaaaaaaaaab;
                                                                                                    r10 = *r23;
                                                                                                    r9 = r23[0x1];
                                                                                                    r9 = (r9 - r10 >> 0x3) * 0xcccccccd;
                                                                                                    arg_c0 = r11;
                                                                                                    arg_c4 = r9;
                                                                                                    if (r11 != 0x0) {
                                                                                                            r10 = 0x0;
                                                                                                            while (true) {
                                                                                                                    r12 = 0x0;
                                                                                                                    d0 = *(0xc + 0xc * r10);
                                                                                                                    arg_f0 = d0;
                                                                                                                    while (true) {
                                                                                                                            r13 = *(int32_t *)(r28 + r12);
                                                                                                                            if (r13 >= r9) {
                                                                                                                                    arg_8 = r13;
                                                                                                                                    arg_10 = r9;
                                                                                                                                    arg_0 = r10;
                                                                                                                                    loc_1029fe0a0("Error reading mesh data: face %d index value %d out of range %d");
                                                                                                                                    temp_0 = 0x0;
                                                                                                                                    break;
                                                                                                                            }
                                                                                                                            r12 = r12 + 0x4;
                                                                                                                            if (r12 != 0xc) {
                                                                                                                                    continue;
                                                                                                                            }
                                                                                                                            temp_0 = 0x1;
                                                                                                                            break;
                                                                                                                    }
                                                                                                                    if (temp_0 == 0x0) {
                                                                                                                            temp_1 = 0x1;
                                                                                                                            break;
                                                                                                                    }
                                                                                                                    r10 = r10 + 0x1;
                                                                                                                    if (r10 != r11) {
                                                                                                                            continue;
                                                                                                                    }
                                                                                                                    temp_1 = 0x0;
                                                                                                                    break;
                                                                                                            }
                                                                                                            if (temp_1 != 0x0) {
                                                                                                                    temp_2 = 0x0;
                                                                                                                    break;
                                                                                                            }
                                                                                                            else {
                                                                                                                    if (r22 != 0x0) {
                                                                                                                            r8 = r22 + 0x8;
                                                                                                                            asm { ldaddal    x9, x8, [x8] };
                                                                                                                            if (r8 == 0x0) {
                                                                                                                                    (*(*r22 + 0x10))(r22);
                                                                                                                                    std::__1::__shared_weak_count::__release_weak(r22);
                                                                                                                            }
                                                                                                                    }
                                                                                                                    r8 = arg_c8;
                                                                                                                    if (r8 < r20) {
                                                                                                                            continue;
                                                                                                                    }
                                                                                                                    if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                                                                                                            if (r8 != r20) {
                                                                                                                                    temp_2 = 0x6;
                                                                                                                            }
                                                                                                                            else {
                                                                                                                                    temp_2 = 0x3;
                                                                                                                            }
                                                                                                                    }
                                                                                                                    else {
                                                                                                                            temp_2 = 0x4;
                                                                                                                    }
                                                                                                                    break;
                                                                                                            }
                                                                                                    }
                                                                                                    else {
                                                                                                            if (r22 != 0x0) {
                                                                                                                    r8 = r22 + 0x8;
                                                                                                                    asm { ldaddal    x9, x8, [x8] };
                                                                                                                    if (r8 == 0x0) {
                                                                                                                            (*(*r22 + 0x10))(r22);
                                                                                                                            std::__1::__shared_weak_count::__release_weak(r22);
                                                                                                                    }
                                                                                                            }
                                                                                                            r8 = arg_c8;
                                                                                                            if (r8 < r20) {
                                                                                                                    continue;
                                                                                                            }
                                                                                                            if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                                                                                                    if (r8 != r20) {
                                                                                                                            temp_2 = 0x6;
                                                                                                                    }
                                                                                                                    else {
                                                                                                                            temp_2 = 0x3;
                                                                                                                    }
                                                                                                            }
                                                                                                            else {
                                                                                                                    temp_2 = 0x4;
                                                                                                            }
                                                                                                            break;
                                                                                                    }
                                                                                            }
                                                                                            else {
                                                                                                    r8 = *(int8_t *)byte_106c05950;
                                                                                                    if (*(int8_t *)byte_106c05950 == 0x1) {
                                                                                                            r8 = *(int8_t *)byte_106c05950;
                                                                                                            sub_10001565c(&arg_f0, 0x1068a7510);
                                                                                                            loc_1025cc26c(&arg_f0);
                                                                                                            sub_100015724(&arg_f0);
                                                                                                            temp_2 = 0x7;
                                                                                                    }
                                                                                                    else {
                                                                                                            temp_2 = 0x7;
                                                                                                    }
                                                                                                    break;
                                                                                            }
                                                                                    }
                                                                                    else {
                                                                                            temp_2 = 0x8;
                                                                                            break;
                                                                                    }
                                                                            }
                                                                            else {
                                                                                    r9 = r25 + r27;
                                                                                    if (r8 >= r9) {
                                                                                            r24 = r9;
                                                                                    }
                                                                                    else {
                                                                                            r24 = r8;
                                                                                    }
                                                                                    if (r9 <= r20) {
                                                                                            loc_102a0c7ec();
                                                                                            d8 = d0;
                                                                                            r1 = r24;
                                                                                            if ((sub_101559470(r21 + r25, r1, r23) & 0x1) != 0x0) {
                                                                                                    arg_c8 = arg_c8 + r27;
                                                                                                    r0 = loc_1029ffa34();
                                                                                                    if (r0 - (r0 * 0xd1b71759 >> 0x2d) * 0x2710 < *(int32_t *)dword_106bdb7d8) {
                                                                                                            loc_102a0c7ec();
                                                                                                            sub_100029730(&arg_f0, 0x1068a7528);
                                                                                                            d0 = (d9 - d8) * d10;
                                                                                                            loc_1025d4ca0(&arg_f0);
                                                                                                            loc_1025d507c(&arg_f0);
                                                                                                            r1 = 0x10699b708;
                                                                                                            r0 = sub_10002a8d8(&arg_f0, 0x10699b708);
                                                                                                    }
                                                                                                    r8 = r23[0x6];
                                                                                                    r11 = (SAR(r23[0x7] - r8, 0x2)) * 0xaaaaaaaaaaaaaaab;
                                                                                                    r10 = *r23;
                                                                                                    r9 = r23[0x1];
                                                                                                    r9 = (r9 - r10 >> 0x3) * 0xcccccccd;
                                                                                                    arg_c0 = r11;
                                                                                                    arg_c4 = r9;
                                                                                                    if (r11 != 0x0) {
                                                                                                            r10 = 0x0;
                                                                                                            while (true) {
                                                                                                                    r12 = 0x0;
                                                                                                                    d0 = *(0xc + 0xc * r10);
                                                                                                                    arg_f0 = d0;
                                                                                                                    while (true) {
                                                                                                                            r13 = *(int32_t *)(r28 + r12);
                                                                                                                            if (r13 >= r9) {
                                                                                                                                    arg_8 = r13;
                                                                                                                                    arg_10 = r9;
                                                                                                                                    arg_0 = r10;
                                                                                                                                    loc_1029fe0a0("Error reading mesh data: face %d index value %d out of range %d");
                                                                                                                                    temp_0 = 0x0;
                                                                                                                                    break;
                                                                                                                            }
                                                                                                                            r12 = r12 + 0x4;
                                                                                                                            if (r12 != 0xc) {
                                                                                                                                    continue;
                                                                                                                            }
                                                                                                                            temp_0 = 0x1;
                                                                                                                            break;
                                                                                                                    }
                                                                                                                    if (temp_0 == 0x0) {
                                                                                                                            temp_1 = 0x1;
                                                                                                                            break;
                                                                                                                    }
                                                                                                                    r10 = r10 + 0x1;
                                                                                                                    if (r10 != r11) {
                                                                                                                            continue;
                                                                                                                    }
                                                                                                                    temp_1 = 0x0;
                                                                                                                    break;
                                                                                                            }
                                                                                                            if (temp_1 != 0x0) {
                                                                                                                    temp_2 = 0x0;
                                                                                                                    break;
                                                                                                            }
                                                                                                            else {
                                                                                                                    if (r22 != 0x0) {
                                                                                                                            r8 = r22 + 0x8;
                                                                                                                            asm { ldaddal    x9, x8, [x8] };
                                                                                                                            if (r8 == 0x0) {
                                                                                                                                    (*(*r22 + 0x10))(r22);
                                                                                                                                    std::__1::__shared_weak_count::__release_weak(r22);
                                                                                                                            }
                                                                                                                    }
                                                                                                                    r8 = arg_c8;
                                                                                                                    if (r8 < r20) {
                                                                                                                            continue;
                                                                                                                    }
                                                                                                                    if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                                                                                                            if (r8 != r20) {
                                                                                                                                    temp_2 = 0x6;
                                                                                                                            }
                                                                                                                            else {
                                                                                                                                    temp_2 = 0x3;
                                                                                                                            }
                                                                                                                    }
                                                                                                                    else {
                                                                                                                            temp_2 = 0x4;
                                                                                                                    }
                                                                                                                    break;
                                                                                                            }
                                                                                                    }
                                                                                                    else {
                                                                                                            if (r22 != 0x0) {
                                                                                                                    r8 = r22 + 0x8;
                                                                                                                    asm { ldaddal    x9, x8, [x8] };
                                                                                                                    if (r8 == 0x0) {
                                                                                                                            (*(*r22 + 0x10))(r22);
                                                                                                                            std::__1::__shared_weak_count::__release_weak(r22);
                                                                                                                    }
                                                                                                            }
                                                                                                            r8 = arg_c8;
                                                                                                            if (r8 < r20) {
                                                                                                                    continue;
                                                                                                            }
                                                                                                            if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                                                                                                    if (r8 != r20) {
                                                                                                                            temp_2 = 0x6;
                                                                                                                    }
                                                                                                                    else {
                                                                                                                            temp_2 = 0x3;
                                                                                                                    }
                                                                                                            }
                                                                                                            else {
                                                                                                                    temp_2 = 0x4;
                                                                                                            }
                                                                                                            break;
                                                                                                    }
                                                                                            }
                                                                                            else {
                                                                                                    r8 = *(int8_t *)byte_106c05950;
                                                                                                    if (*(int8_t *)byte_106c05950 == 0x1) {
                                                                                                            r8 = *(int8_t *)byte_106c05950;
                                                                                                            sub_10001565c(&arg_f0, 0x1068a7510);
                                                                                                            loc_1025cc26c(&arg_f0);
                                                                                                            sub_100015724(&arg_f0);
                                                                                                            temp_2 = 0x7;
                                                                                                    }
                                                                                                    else {
                                                                                                            temp_2 = 0x7;
                                                                                                    }
                                                                                                    break;
                                                                                            }
                                                                                    }
                                                                                    else {
                                                                                            temp_2 = 0x8;
                                                                                            break;
                                                                                    }
                                                                            }
                                                                    }
                                                            }
                                                            else {
                                                                    r8 = 0x4;
                                                                    arg_f0 = 0x4;
                                                                    sub_101348258("Error reading mesh data: offset is out of bounds while reading %d bytes", &arg_f0);
                                                                    temp_2 = 0x1;
                                                                    break;
                                                            }
                                                    }
                                            }
                                            else {
                                                    if ((*qword_106bdb7c8 & 0xff) >= 0x6) {
                                                            if ((*qword_106bdb7c8 & 0xfe00) != 0x0) {
                                                                    r1 = *qword_106bdb7d0;
                                                                    arg_f0 = r8;
                                                                    loc_1029fea60();
                                                            }
                                                    }
                                                    arg_c8 = arg_c8 + arg_bc;
                                                    r8 = arg_c8;
                                                    if (r8 < r20) {
                                                            continue;
                                                    }
                                                    if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                                            if (r8 != r20) {
                                                                    temp_2 = 0x6;
                                                            }
                                                            else {
                                                                    temp_2 = 0x3;
                                                            }
                                                    }
                                                    else {
                                                            temp_2 = 0x4;
                                                    }
                                                    break;
                                            }
                                    }
                                    else {
                                            r8 = *r19;
                                            r22 = r19[0x1];
                                            arg_90 = r8;
                                            if (r22 != 0x0) {
                                                    asm { ldadd      x9, x8, [x8] };
                                            }
                                            r1 = r21;
                                            r0 = sub_10155032c(&arg_90, r1, r20, &arg_c8, &arg_c4, &arg_c0);
                                            if (r22 != 0x0) {
                                                    r8 = r22 + 0x8;
                                                    asm { ldaddal    x9, x8, [x8] };
                                                    if (r8 == 0x0) {
                                                            (*(*r22 + 0x10))(r22);
                                                            std::__1::__shared_weak_count::__release_weak(r22);
                                                    }
                                            }
                                            r8 = arg_c8;
                                            if (r8 < r20) {
                                                    continue;
                                            }
                                            if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                                    if (r8 != r20) {
                                                            temp_2 = 0x6;
                                                    }
                                                    else {
                                                            temp_2 = 0x3;
                                                    }
                                            }
                                            else {
                                                    temp_2 = 0x4;
                                            }
                                            break;
                                    }
                            }
                            else {
                                    asm { ccmp       x9, #0x0, #0x4, hs };
                                    if (!asm { ccmp       x9, #0x0, #0x4, hs }) {
                                            r23 = *qword_106bdb7d0;
                                            sub_10154f960();
                                            r9 = arg_f0;
                                            if (sign_extend_64(arg_107) >= 0x0) {
                                                    r8 = r28;
                                            }
                                            else {
                                                    r8 = r9;
                                            }
                                            arg_d0 = r8;
                                            r1 = r23;
                                            loc_1029fea60(*qword_106bdb7c8, r1, 0x2, "[FLog::FileMeshDataChunkReaderLogChannel] Unknown chunk skipped {}", 0x42, 0xc, &arg_d0, 0x1);
                                            if ((sign_extend_64(arg_107) & 0xffffffff80000000) != 0x0) {
                                                    loc_1029f6b00(arg_f0);
                                            }
                                    }
                                    arg_c8 = arg_c8 + arg_bc;
                                    r8 = arg_c8;
                                    if (r8 < r20) {
                                            continue;
                                    }
                                    if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                            if (r8 != r20) {
                                                    temp_2 = 0x6;
                                            }
                                            else {
                                                    temp_2 = 0x3;
                                            }
                                    }
                                    else {
                                            temp_2 = 0x4;
                                    }
                                    break;
                            }
                    }
                    else {
                            r8 = arg_b8;
                            if (r8 == 0x1) {
                                    r8 = *r19;
                                    r22 = r19[0x1];
                                    arg_70 = r8;
                                    arg_78 = r22;
                                    if (r22 != 0x0) {
                                            asm { ldadd      x9, x8, [x8] };
                                    }
                                    r1 = r21;
                                    r0 = sub_101550784(&arg_70, r1, r20, &arg_c8);
                                    if (r22 != 0x0) {
                                            r8 = r22 + 0x8;
                                            asm { ldaddal    x9, x8, [x8] };
                                            if (r8 == 0x0) {
                                                    (*(*r22 + 0x10))(r22);
                                                    std::__1::__shared_weak_count::__release_weak(r22);
                                            }
                                    }
                                    r8 = arg_c8;
                                    if (r8 < r20) {
                                            continue;
                                    }
                                    if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                            if (r8 != r20) {
                                                    temp_2 = 0x6;
                                            }
                                            else {
                                                    temp_2 = 0x3;
                                            }
                                    }
                                    else {
                                            temp_2 = 0x4;
                                    }
                                    break;
                            }
                            else {
                                    if ((*qword_106bdb7c8 & 0xff) >= 0x6) {
                                            if ((*qword_106bdb7c8 & 0xfe00) != 0x0) {
                                                    r0 = *qword_106bdb7c8;
                                                    r1 = *qword_106bdb7d0;
                                                    arg_f0 = r8;
                                                    r0 = loc_1029fea60(r0, *qword_106bdb7d0, 0x2, "[FLog::FileMeshDataChunkReaderLogChannel] Error reading 'SKINNING' chunk: unsupported version {}", 0x60, 0x2, &arg_f0, 0x1);
                                            }
                                    }
                                    arg_c8 = arg_c8 + arg_bc;
                                    r8 = arg_c8;
                                    if (r8 < r20) {
                                            continue;
                                    }
                                    if ((*(int8_t *)byte_106bdb808 & 0x1) != 0x0) {
                                            if (r8 != r20) {
                                                    temp_2 = 0x6;
                                            }
                                            else {
                                                    temp_2 = 0x3;
                                            }
                                    }
                                    else {
                                            temp_2 = 0x4;
                                    }
                                    break;
                            }
                    }
            }
    }
    goto .l1;

.l1:
    switch (temp_2) {
        case 0:
            asm { brk        #0x1 };
            break;
        case 1:
            asm { brk        #0x1 };
            break;
        case 2:
            arg_18 = r8;
            loc_1029fe0a0(arg_18);
            asm { brk        #0x1 };
            break;
        case 3:
            sub_1015558e0(*r19, "V7");
            if ((*(int8_t *)byte_106bdb710 & 0x1) == 0x0) {
                    sub_101540e3c(*r19, "V7");
            }
            if (arg_c4 != 0x0) {
                    if (arg_c0 != 0x0) {
                            if (*(int32_t *)(*r19 + 0x1f0) >= 0x1) {
                                    if (**___stack_chk_guard != decomp_var_80) {
                                            __stack_chk_fail();
                                    }
                            }
                            else {
                                    loc_1029fe0a0("Error reading mesh data: invalid number of LOD offsets", "V7");
                                    asm { brk        #0x1 };
                            }
                    }
                    else {
                            loc_1029fe0a0("Error reading mesh data: empty mesh", "V7");
                            asm { brk        #0x1 };
                    }
            }
            else {
                    loc_1029fe0a0("Error reading mesh data: empty mesh", "V7");
                    asm { brk        #0x1 };
            }
            break;
        case 4:
            if ((*(int8_t *)byte_106bdb710 & 0x1) == 0x0) {
                    sub_101540e3c(*r19);
                    r8 = arg_c8;
            }
            if (r8 == r20) {
                    if (arg_c4 != 0x0) {
                            if (arg_c0 != 0x0) {
                                    if (*(int32_t *)(*r19 + 0x1f0) >= 0x1) {
                                            if (**___stack_chk_guard != decomp_var_80) {
                                                    __stack_chk_fail();
                                            }
                                    }
                                    else {
                                            loc_1029fe0a0("Error reading mesh data: invalid number of LOD offsets");
                                            asm { brk        #0x1 };
                                    }
                            }
                            else {
                                    loc_1029fe0a0("Error reading mesh data: empty mesh");
                                    asm { brk        #0x1 };
                            }
                    }
                    else {
                            loc_1029fe0a0("Error reading mesh data: empty mesh");
                            asm { brk        #0x1 };
                    }
            }
            else {
                    loc_1029fe0a0("Error reading mesh data: unexpected data at end of file");
                    asm { brk        #0x1 };
            }
            break;
        case 5:
            arg_f0 = 0xc;
            sub_101348258("Error reading mesh data: offset is out of bounds while reading %d bytes", &arg_f0);
            asm { brk        #0x1 };
            break;
        case 6:
            loc_1029fe0a0("Error reading mesh data: unexpected data at end of file");
            asm { brk        #0x1 };
            break;
        default:
            if (temp_2 != 0x7) {
                    if (temp_2 == 0x8) {
                            arg_18 = "Compressed mesh data size exceeds FileMeshData size";
                    }
            }
            else {
                    if ((*(int8_t *)byte_106c05968 & 0x1) == 0x0) {
                            arg_f0 = 0x10656df90;
                            sub_1005f5afc(&arg_f0, 0x106999f60, 0x1068a74f8);
                            arg_f0 = 0x106999f10;
                            loc_1025ce4b4(&arg_f0);
                            sub_1000158b8(&arg_f0, 0x106999f60);
                    }
                    arg_18 = "Mesh decompression failed";
            }
            loc_1029fe0a0(arg_18);
            asm { brk        #0x1 };
            break;
    }
    return;
}
