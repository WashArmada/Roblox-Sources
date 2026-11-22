function sub_104416a40 {
    r31 = r31 - 0xa0;
    arg_50 = d11;
    arg_58 = d10;
    arg_60 = d9;
    arg_68 = d8;
    arg_70 = r22;
    arg_78 = r21;
    arg_80 = r20;
    arg_88 = r19;
    arg_90 = r29;
    arg_98 = r30;
    r20 = r3;
    r19 = r2;
    d8 = d3;
    d9 = d2;
    d10 = d1;
    d11 = d0;
    r8 = r0;
    asm { ccmp       w9, #0x3, #0x0, hs };
    if (!asm { ccmp       w9, #0x3, #0x0, hs }) {
            r8 = r8 + 0x8;
            r10 = *r8;
            if (sign_extend_64(r8[0x17]) < 0x0) {
                    r8 = r10;
            }
            arg_0 = r8;
            sub_102c7d058(*qword_106a9c3e0, *qword_106a9c3e8, 0x3, "[FLog::TextureManager2] Image loaded from fetchKey:{} semantic:{}", 0x41, 0x1c, &arg_0, 0x0, arg_0, 0x0, r1, 0x0);
    }
    r9 = *r20;
    r8 = r9[0x10];
    r10 = *(int32_t *)r19;
    if (r8 == r10) {
            r11 = r9[0x11];
            if (r11 == r19[0x1]) {
                    r10 = *qword_106a9c3e0 >> 0x8 & 0xff;
                    asm { ccmp       w10, #0x3, #0x0, hs };
                    if (!asm { ccmp       w10, #0x3, #0x0, hs }) {
                            sub_102c7d058();
                    }
            }
            else {
                    r11 = *qword_106a9c3e0 >> 0x8 & 0xff;
                    asm { ccmp       w11, #0x3, #0x0, hs };
                    if (!asm { ccmp       w11, #0x3, #0x0, hs }) {
                            r11 = r9[0x11];
                            sub_102c7d058();
                    }
            }
    }
    else {
            r11 = *qword_106a9c3e0 >> 0x8 & 0xff;
            asm { ccmp       w11, #0x3, #0x0, hs };
            if (!asm { ccmp       w11, #0x3, #0x0, hs }) {
                    r11 = r9[0x11];
                    sub_102c7d058();
            }
    }
    r9 = *qword_106a9c3e0 >> 0x8;
    asm { ccmp       w8, #0x3, #0x0, hs };
    if (!asm { ccmp       w8, #0x3, #0x0, hs }) {
            r8 = double_value_7_776E06;
            asm { fcvtzs     w8, d1 };
            asm { fcvtzs     w9, d1 };
            asm { fcvtzs     w10, d1 };
            asm { fcvtzs     w11, d0 };
            sub_102c7d058();
    }
    return;
}
