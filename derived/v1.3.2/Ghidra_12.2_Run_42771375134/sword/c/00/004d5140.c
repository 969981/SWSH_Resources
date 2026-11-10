/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d5140; name: FUN_004d5140
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d5140(float param_1,long *param_2,long param_3)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  undefined1 (*pauVar4) [12];
  undefined1 *puVar5;
  uint uVar6;
  byte bVar7;
  ushort uVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float *pfVar36;
  float *pfVar37;
  float *pfVar38;
  float *pfVar39;
  float *pfVar40;
  float *pfVar41;
  float *pfVar42;
  float *pfVar43;
  float *pfVar44;
  float *pfVar45;
  float *pfVar46;
  float *pfVar47;
  float *pfVar48;
  float *pfVar49;
  float *pfVar50;
  float *pfVar51;
  float *pfVar52;
  float *pfVar53;
  float *pfVar54;
  float *pfVar55;
  float *pfVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 (*pauVar62) [12];
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  ulong uVar87;
  undefined1 (*pauVar88) [12];
  undefined1 (*pauVar89) [12];
  ulong uVar90;
  long lVar91;
  float *pfVar92;
  float *pfVar93;
  long lVar94;
  long lVar95;
  long lVar96;
  ulong uVar97;
  void *__src;
  float *pfVar98;
  float fVar99;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  float fVar115;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined4 uVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  undefined4 uVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  float fVar153;
  float fVar154;
  float fVar155;
  float fVar156;
  float fVar157;
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar162;
  float fVar163;
  float fVar164;
  float fVar165;
  float fVar166;
  float fVar167;
  float fVar168;
  float fVar169;
  float fVar170;
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  float local_d0 [4];
  undefined8 local_c0 [2];
  float local_b0 [4];
  undefined8 auStack_a0 [6];
  
  uVar6 = *(uint *)(param_3 + 0x44);
  fVar35 = 0.0;
  if (*(short *)((long)param_2 + 0x12) != 0) {
    fVar35 = param_1;
  }
  if ((uVar6 & 1) != 0) {
    bVar7 = *(byte *)(param_2 + 1);
    if (fVar35 <= 0.0) {
      if (bVar7 != 0) {
                    /* WARNING: Subroutine does not return */
        memset(*(void **)(param_3 + 0x10),0,(ulong)bVar7 << 2);
      }
    }
    else {
      fVar99 = fVar35 * DAT_01d4c724;
      auVar112._8_4_ = 0x4f000000;
      auVar112._0_8_ = 0x4f0000004f000000;
      auVar112._12_4_ = 0x4f000000;
      uVar87 = 0;
      do {
        lVar91 = uVar87 * *(ushort *)(param_2 + 2);
        lVar95 = *param_2;
        lVar94 = ((ulong)*(ushort *)(param_2 + 2) & 0xfffc) * 4;
        lVar96 = lVar91 * 4;
        pauVar4 = (undefined1 (*) [12])(lVar95 + lVar96);
        puVar5 = (undefined1 *)(lVar95 + lVar94 + lVar96);
        if (puVar5 <= pauVar4[1] + 4) {
          puVar5 = pauVar4[1] + 4;
        }
        uVar3 = ((uint)((ulong)(puVar5 + (lVar91 * -4 - lVar95) + -1) >> 4) & 0xfffffff) + 1;
        auVar116 = auVar112;
        if ((uVar3 & 7) == 0) {
          auVar111._8_8_ = 0xcf000000cf000000;
          auVar111._0_8_ = 0xcf000000cf000000;
          pauVar89 = pauVar4;
        }
        else {
          auVar111._8_8_ = 0xcf000000cf000000;
          auVar111._0_8_ = 0xcf000000cf000000;
          lVar96 = -((ulong)uVar3 & 7);
          pauVar88 = pauVar4;
          do {
            pauVar89 = (undefined1 (*) [12])(pauVar88[1] + 4);
            uVar118 = (undefined4)((ulong)*(undefined8 *)(*pauVar88 + 8) >> 0x20);
            lVar96 = lVar96 + 1;
            auVar117._12_4_ = uVar118;
            auVar117._0_12_ = *pauVar88;
            auVar116 = NEON_fmin(auVar116,auVar117,4);
            auVar19._12_4_ = uVar118;
            auVar19._0_12_ = *pauVar88;
            auVar111 = NEON_fmax(auVar111,auVar19,4);
            pauVar88 = pauVar89;
          } while (lVar96 != 0);
        }
        if ((undefined1 *)0x6f < puVar5 + (lVar91 * -4 - lVar95) + -1) {
          do {
            uVar118 = (undefined4)((ulong)*(undefined8 *)(*pauVar89 + 8) >> 0x20);
            uVar126 = (undefined4)((ulong)*(undefined8 *)pauVar89[2] >> 0x20);
            auVar20._12_4_ = uVar118;
            auVar20._0_12_ = *pauVar89;
            auVar117 = NEON_fmin(auVar116,auVar20,4);
            auVar116._12_4_ = uVar118;
            auVar116._0_12_ = *pauVar89;
            auVar116 = NEON_fmax(auVar111,auVar116,4);
            auVar27._12_4_ = uVar126;
            auVar27._0_12_ = *(undefined1 (*) [12])(pauVar89[1] + 4);
            auVar111 = NEON_fmin(auVar117,auVar27,4);
            auVar28._12_4_ = uVar126;
            auVar28._0_12_ = *(undefined1 (*) [12])(pauVar89[1] + 4);
            auVar116 = NEON_fmax(auVar116,auVar28,4);
            uVar118 = (undefined4)((ulong)*(undefined8 *)(pauVar89[3] + 4) >> 0x20);
            uVar126 = (undefined4)((ulong)*(undefined8 *)(pauVar89[4] + 8) >> 0x20);
            auVar21._12_4_ = uVar118;
            auVar21._0_12_ = *(undefined1 (*) [12])(pauVar89[2] + 8);
            auVar111 = NEON_fmin(auVar111,auVar21,4);
            auVar22._12_4_ = uVar118;
            auVar22._0_12_ = *(undefined1 (*) [12])(pauVar89[2] + 8);
            auVar116 = NEON_fmax(auVar116,auVar22,4);
            auVar29._12_4_ = uVar126;
            auVar29._0_12_ = pauVar89[4];
            auVar111 = NEON_fmin(auVar111,auVar29,4);
            auVar30._12_4_ = uVar126;
            auVar30._0_12_ = pauVar89[4];
            auVar116 = NEON_fmax(auVar116,auVar30,4);
            uVar118 = (undefined4)((ulong)*(undefined8 *)pauVar89[6] >> 0x20);
            uVar126 = (undefined4)((ulong)*(undefined8 *)(pauVar89[7] + 4) >> 0x20);
            auVar23._12_4_ = uVar118;
            auVar23._0_12_ = *(undefined1 (*) [12])(pauVar89[5] + 4);
            auVar111 = NEON_fmin(auVar111,auVar23,4);
            auVar24._12_4_ = uVar118;
            auVar24._0_12_ = *(undefined1 (*) [12])(pauVar89[5] + 4);
            auVar116 = NEON_fmax(auVar116,auVar24,4);
            auVar31._12_4_ = uVar126;
            auVar31._0_12_ = *(undefined1 (*) [12])(pauVar89[6] + 8);
            auVar111 = NEON_fmin(auVar111,auVar31,4);
            auVar32._12_4_ = uVar126;
            auVar32._0_12_ = *(undefined1 (*) [12])(pauVar89[6] + 8);
            auVar116 = NEON_fmax(auVar116,auVar32,4);
            pauVar88 = pauVar89 + 8;
            uVar118 = (undefined4)((ulong)*(undefined8 *)(pauVar89[8] + 8) >> 0x20);
            pauVar62 = pauVar89 + 9;
            uVar126 = (undefined4)((ulong)*(undefined8 *)pauVar89[10] >> 0x20);
            pauVar89 = (undefined1 (*) [12])(pauVar89[10] + 8);
            auVar25._12_4_ = uVar118;
            auVar25._0_12_ = *pauVar88;
            auVar117 = NEON_fmin(auVar111,auVar25,4);
            auVar26._12_4_ = uVar118;
            auVar26._0_12_ = *pauVar88;
            auVar111 = NEON_fmax(auVar116,auVar26,4);
            auVar33._12_4_ = uVar126;
            auVar33._0_12_ = *(undefined1 (*) [12])(*pauVar62 + 4);
            auVar116 = NEON_fmin(auVar117,auVar33,4);
            auVar34._12_4_ = uVar126;
            auVar34._0_12_ = *(undefined1 (*) [12])(*pauVar62 + 4);
            auVar111 = NEON_fmax(auVar111,auVar34,4);
          } while (pauVar89 < (undefined1 (*) [12])(*pauVar4 + lVar94));
        }
        uVar118 = NEON_fminnm(auVar116._0_4_,auVar116._4_4_);
        uVar118 = NEON_fminnm(uVar118,auVar116._8_4_);
        fVar115 = (float)NEON_fminnm(uVar118,auVar116._12_4_);
        *(float *)(*(long *)(param_3 + 0x10) + uVar87 * 4) = fVar99 * ABS(fVar115);
        uVar87 = uVar87 + 1;
      } while (uVar87 < bVar7);
    }
  }
  if ((uVar6 >> 2 & 1) != 0) {
    bVar7 = *(byte *)(param_2 + 1);
    if (fVar35 <= 0.0) {
      if (bVar7 != 0) {
                    /* WARNING: Subroutine does not return */
        memset(*(void **)(param_3 + 0x18),0,(ulong)bVar7 << 2);
      }
    }
    else {
      fVar99 = fVar35 * DAT_01d4c724;
      uVar87 = 0;
      do {
        uVar90 = (ulong)*(ushort *)(param_2 + 2);
        lVar94 = *param_2;
        lVar91 = uVar87 * uVar90 * 4;
        pfVar98 = (float *)(lVar94 + lVar91);
        pfVar93 = (float *)(lVar94 + (uVar90 & 0xfffc) * 4 + lVar91);
        if (pfVar93 <= pfVar98 + 4) {
          pfVar93 = pfVar98 + 4;
        }
        uVar97 = (long)pfVar93 + (uVar87 * uVar90 * -4 - lVar94) + -1;
        uVar3 = ((uint)(uVar97 >> 4) & 0xfffffff) + 1;
        if ((uVar3 & 7) == 0) {
          fVar107 = 0.0;
          fVar109 = 0.0;
          fVar115 = 0.0;
          fVar105 = 0.0;
          pfVar93 = pfVar98;
        }
        else {
          fVar107 = 0.0;
          fVar109 = 0.0;
          fVar115 = 0.0;
          fVar105 = 0.0;
          lVar91 = -((ulong)uVar3 & 7);
          pfVar92 = pfVar98;
          do {
            pfVar93 = pfVar92 + 4;
            fVar115 = fVar115 + *pfVar92 * *pfVar92;
            fVar105 = fVar105 + pfVar92[1] * pfVar92[1];
            fVar107 = fVar107 + pfVar92[2] * pfVar92[2];
            fVar109 = fVar109 + pfVar92[3] * pfVar92[3];
            lVar91 = lVar91 + 1;
            pfVar92 = pfVar93;
          } while (lVar91 != 0);
        }
        if (0x6f < uVar97) {
          do {
            fVar104 = *pfVar93;
            pfVar36 = pfVar93 + 1;
            pfVar37 = pfVar93 + 2;
            pfVar38 = pfVar93 + 3;
            pfVar9 = pfVar93 + 4;
            pfVar39 = pfVar93 + 5;
            pfVar40 = pfVar93 + 6;
            pfVar41 = pfVar93 + 7;
            pfVar92 = pfVar93 + 8;
            pfVar42 = pfVar93 + 9;
            pfVar43 = pfVar93 + 10;
            pfVar44 = pfVar93 + 0xb;
            pfVar10 = pfVar93 + 0xc;
            pfVar45 = pfVar93 + 0xd;
            pfVar46 = pfVar93 + 0xe;
            pfVar47 = pfVar93 + 0xf;
            pfVar1 = pfVar93 + 0x10;
            pfVar48 = pfVar93 + 0x11;
            pfVar49 = pfVar93 + 0x12;
            pfVar50 = pfVar93 + 0x13;
            pfVar11 = pfVar93 + 0x14;
            pfVar51 = pfVar93 + 0x15;
            pfVar52 = pfVar93 + 0x16;
            pfVar53 = pfVar93 + 0x17;
            pfVar2 = pfVar93 + 0x18;
            pfVar54 = pfVar93 + 0x19;
            pfVar55 = pfVar93 + 0x1a;
            pfVar56 = pfVar93 + 0x1b;
            auVar112 = *(undefined1 (*) [16])(pfVar93 + 0x1c);
            pfVar93 = pfVar93 + 0x20;
            fVar115 = fVar115 + fVar104 * fVar104 + *pfVar9 * *pfVar9 + *pfVar92 * *pfVar92 +
                      *pfVar10 * *pfVar10 + *pfVar1 * *pfVar1 + *pfVar11 * *pfVar11 +
                      *pfVar2 * *pfVar2 + auVar112._0_4_ * auVar112._0_4_;
            fVar105 = fVar105 + *pfVar36 * *pfVar36 + *pfVar39 * *pfVar39 + *pfVar42 * *pfVar42 +
                      *pfVar45 * *pfVar45 + *pfVar48 * *pfVar48 + *pfVar51 * *pfVar51 +
                      *pfVar54 * *pfVar54 + auVar112._4_4_ * auVar112._4_4_;
            fVar107 = fVar107 + *pfVar37 * *pfVar37 + *pfVar40 * *pfVar40 + *pfVar43 * *pfVar43 +
                      *pfVar46 * *pfVar46 + *pfVar49 * *pfVar49 + *pfVar52 * *pfVar52 +
                      *pfVar55 * *pfVar55 + auVar112._8_4_ * auVar112._8_4_;
            fVar109 = fVar109 + *pfVar38 * *pfVar38 + *pfVar41 * *pfVar41 + *pfVar44 * *pfVar44 +
                      *pfVar47 * *pfVar47 + *pfVar50 * *pfVar50 + *pfVar53 * *pfVar53 +
                      *pfVar56 * *pfVar56 + auVar112._12_4_ * auVar112._12_4_;
          } while (pfVar93 < pfVar98 + (uVar90 & 0xfffc));
        }
        auVar12._4_4_ = fVar105;
        auVar12._0_4_ = fVar115;
        auVar12._8_4_ = fVar107;
        auVar12._12_4_ = fVar109;
        auVar13._4_4_ = fVar105;
        auVar13._0_4_ = fVar115;
        auVar13._8_4_ = fVar107;
        auVar13._12_4_ = fVar109;
        auVar112 = NEON_ext(auVar12,auVar13,8,1);
        auVar14._4_4_ = fVar105;
        auVar14._0_4_ = fVar115;
        auVar14._8_4_ = fVar107;
        auVar14._12_4_ = fVar109;
        auVar112 = NEON_ext(auVar14,auVar112,8,1);
        *(float *)(*(long *)(param_3 + 0x18) + uVar87 * 4) =
             fVar99 * SQRT((auVar112._4_4_ + fVar105 + auVar112._0_4_ + fVar115) / (float)uVar90);
        uVar87 = uVar87 + 1;
      } while (uVar87 < bVar7);
    }
  }
  uVar86 = _UNK_01d4b5a8;
  uVar85 = _DAT_01d4b5a0;
  uVar84 = _UNK_01d4b3e8;
  uVar83 = _DAT_01d4b3e0;
  uVar82 = _UNK_01d4b1b8;
  uVar81 = _DAT_01d4b1b0;
  uVar80 = _UNK_01d4af38;
  uVar79 = _DAT_01d4af30;
  uVar78 = _UNK_01d4ae68;
  uVar77 = _DAT_01d4ae60;
  uVar76 = _UNK_01d4ad18;
  uVar75 = _DAT_01d4ad10;
  uVar74 = _UNK_01d4aa58;
  uVar73 = _DAT_01d4aa50;
  uVar72 = _UNK_01d4a758;
  uVar71 = _DAT_01d4a750;
  uVar70 = _UNK_01d4a568;
  uVar69 = _DAT_01d4a560;
  uVar68 = _UNK_01d4a3b8;
  uVar67 = _DAT_01d4a3b0;
  uVar66 = _UNK_01d4a3a8;
  uVar65 = _DAT_01d4a3a0;
  uVar64 = _UNK_01d49de8;
  uVar63 = _DAT_01d49de0;
  if ((uVar6 >> 1 & 1) != 0) {
    bVar7 = *(byte *)(param_2 + 1);
    if (fVar35 <= 0.0) {
      if (bVar7 != 0) {
                    /* WARNING: Subroutine does not return */
        memset(*(void **)(param_3 + 0x20),0,(ulong)bVar7 << 2);
      }
    }
    else {
      fVar99 = fVar35 * DAT_01d4c724;
      uVar87 = 0;
      do {
        uVar8 = *(ushort *)(param_2 + 2);
        pfVar98 = (float *)(*param_2 + uVar87 * uVar8 * 4);
        __src = (void *)(*(long *)(param_3 + 0x28) + uVar87 * 0x30);
        memcpy(local_d0,__src,0x30);
        memcpy(auStack_a0,pfVar98,0x30);
        auVar172._8_4_ = 0x4f000000;
        auVar172._0_8_ = 0x4f0000004f000000;
        auVar172._12_4_ = 0x4f000000;
        auVar171._8_4_ = 0xcf000000;
        auVar171._0_8_ = 0xcf000000cf000000;
        auVar171._12_4_ = 0xcf000000;
        fVar107 = (float)uVar82;
        fVar109 = (float)((ulong)uVar82 >> 0x20);
        fVar115 = (float)uVar81;
        fVar105 = (float)((ulong)uVar81 >> 0x20);
        pfVar93 = local_d0;
        do {
          fVar104 = *pfVar93;
          fVar106 = pfVar93[1];
          fVar110 = pfVar93[2];
          fVar57 = pfVar93[3];
          pfVar92 = pfVar93 + 4;
          fVar123 = (float)*(undefined8 *)(pfVar93 + 6);
          fVar125 = (float)((ulong)*(undefined8 *)(pfVar93 + 6) >> 0x20);
          fVar119 = (float)*(undefined8 *)pfVar92;
          fVar121 = (float)((ulong)*(undefined8 *)pfVar92 >> 0x20);
          fVar127 = (float)uVar69;
          fVar128 = (float)((ulong)uVar69 >> 0x20);
          fVar129 = (float)uVar70;
          fVar130 = (float)((ulong)uVar70 >> 0x20);
          fVar131 = (float)uVar85;
          fVar132 = (float)((ulong)uVar85 >> 0x20);
          fVar133 = (float)uVar86;
          fVar134 = (float)((ulong)uVar86 >> 0x20);
          fVar135 = (float)uVar63;
          fVar136 = (float)((ulong)uVar63 >> 0x20);
          fVar137 = (float)uVar64;
          fVar138 = (float)((ulong)uVar64 >> 0x20);
          fVar139 = (float)uVar65;
          fVar140 = (float)((ulong)uVar65 >> 0x20);
          fVar141 = (float)uVar66;
          fVar142 = (float)((ulong)uVar66 >> 0x20);
          fVar143 = (float)uVar71;
          fVar144 = (float)((ulong)uVar71 >> 0x20);
          fVar145 = (float)uVar72;
          fVar146 = (float)((ulong)uVar72 >> 0x20);
          fVar147 = (float)uVar67;
          fVar148 = (float)((ulong)uVar67 >> 0x20);
          fVar149 = (float)uVar68;
          fVar150 = (float)((ulong)uVar68 >> 0x20);
          fVar151 = (float)uVar79;
          fVar152 = (float)((ulong)uVar79 >> 0x20);
          fVar153 = (float)uVar80;
          fVar154 = (float)((ulong)uVar80 >> 0x20);
          fVar58 = pfVar93[8];
          fVar59 = pfVar93[9];
          fVar60 = pfVar93[10];
          fVar61 = pfVar93[0xb];
          fVar124 = (float)*(undefined8 *)(pfVar93 + 0xe);
          fVar120 = (float)*(undefined8 *)(pfVar93 + 0xc);
          fVar122 = (float)((ulong)*(undefined8 *)(pfVar93 + 0xc) >> 0x20);
          fVar155 = (float)uVar77;
          fVar156 = (float)((ulong)uVar77 >> 0x20);
          fVar157 = (float)uVar78;
          fVar158 = (float)((ulong)uVar78 >> 0x20);
          fVar159 = (float)uVar75;
          fVar160 = (float)((ulong)uVar75 >> 0x20);
          fVar161 = (float)uVar76;
          fVar162 = (float)((ulong)uVar76 >> 0x20);
          fVar163 = (float)uVar73;
          fVar164 = (float)((ulong)uVar73 >> 0x20);
          fVar165 = (float)uVar74;
          fVar166 = (float)((ulong)uVar74 >> 0x20);
          fVar167 = (float)uVar83;
          fVar168 = (float)((ulong)uVar83 >> 0x20);
          fVar169 = (float)uVar84;
          fVar170 = (float)((ulong)uVar84 >> 0x20);
          auVar100._0_4_ =
               fVar127 * fVar106 + fVar115 * fVar104 + fVar131 * fVar110 + fVar135 * fVar57 +
               fVar139 * fVar119 + fVar143 * fVar121 + fVar147 * fVar123 + fVar151 * fVar125 +
               fVar155 * fVar58 + fVar159 * fVar59 + fVar163 * fVar60 + fVar167 * fVar61;
          auVar100._4_4_ =
               fVar128 * fVar106 + fVar105 * fVar104 + fVar132 * fVar110 + fVar136 * fVar57 +
               fVar140 * fVar119 + fVar144 * fVar121 + fVar148 * fVar123 + fVar152 * fVar125 +
               fVar156 * fVar58 + fVar160 * fVar59 + fVar164 * fVar60 + fVar168 * fVar61;
          auVar100._8_4_ =
               fVar129 * fVar106 + fVar107 * fVar104 + fVar133 * fVar110 + fVar137 * fVar57 +
               fVar141 * fVar119 + fVar145 * fVar121 + fVar149 * fVar123 + fVar153 * fVar125 +
               fVar157 * fVar58 + fVar161 * fVar59 + fVar165 * fVar60 + fVar169 * fVar61;
          auVar100._12_4_ =
               fVar130 * fVar106 + fVar109 * fVar104 + fVar134 * fVar110 + fVar138 * fVar57 +
               fVar142 * fVar119 + fVar146 * fVar121 + fVar150 * fVar123 + fVar154 * fVar125 +
               fVar158 * fVar58 + fVar162 * fVar59 + fVar166 * fVar60 + fVar170 * fVar61;
          auVar102._0_4_ =
               fVar127 * fVar110 + fVar115 * fVar106 + fVar131 * fVar57 + fVar135 * fVar119 +
               fVar139 * fVar121 + fVar143 * fVar123 + fVar147 * fVar125 + fVar151 * fVar58 +
               fVar155 * fVar59 + fVar159 * fVar60 + fVar163 * fVar61 + fVar167 * fVar120;
          auVar102._4_4_ =
               fVar128 * fVar110 + fVar105 * fVar106 + fVar132 * fVar57 + fVar136 * fVar119 +
               fVar140 * fVar121 + fVar144 * fVar123 + fVar148 * fVar125 + fVar152 * fVar58 +
               fVar156 * fVar59 + fVar160 * fVar60 + fVar164 * fVar61 + fVar168 * fVar120;
          auVar102._8_4_ =
               fVar129 * fVar110 + fVar107 * fVar106 + fVar133 * fVar57 + fVar137 * fVar119 +
               fVar141 * fVar121 + fVar145 * fVar123 + fVar149 * fVar125 + fVar153 * fVar58 +
               fVar157 * fVar59 + fVar161 * fVar60 + fVar165 * fVar61 + fVar169 * fVar120;
          auVar102._12_4_ =
               fVar130 * fVar110 + fVar109 * fVar106 + fVar134 * fVar57 + fVar138 * fVar119 +
               fVar142 * fVar121 + fVar146 * fVar123 + fVar150 * fVar125 + fVar154 * fVar58 +
               fVar158 * fVar59 + fVar162 * fVar60 + fVar166 * fVar61 + fVar170 * fVar120;
          auVar116 = NEON_fmin(auVar172,auVar100,4);
          fVar104 = fVar127 * fVar57 + fVar115 * fVar110 + fVar131 * fVar119 + fVar135 * fVar121 +
                    fVar139 * fVar123 + fVar143 * fVar125 + fVar147 * fVar58 + fVar151 * fVar59 +
                    fVar155 * fVar60 + fVar159 * fVar61 + fVar163 * fVar120 + fVar167 * fVar122;
          fVar106 = fVar128 * fVar57 + fVar105 * fVar110 + fVar132 * fVar119 + fVar136 * fVar121 +
                    fVar140 * fVar123 + fVar144 * fVar125 + fVar148 * fVar58 + fVar152 * fVar59 +
                    fVar156 * fVar60 + fVar160 * fVar61 + fVar164 * fVar120 + fVar168 * fVar122;
          fVar108 = fVar129 * fVar57 + fVar107 * fVar110 + fVar133 * fVar119 + fVar137 * fVar121 +
                    fVar141 * fVar123 + fVar145 * fVar125 + fVar149 * fVar58 + fVar153 * fVar59 +
                    fVar157 * fVar60 + fVar161 * fVar61 + fVar165 * fVar120 + fVar169 * fVar122;
          fVar110 = fVar130 * fVar57 + fVar109 * fVar110 + fVar134 * fVar119 + fVar138 * fVar121 +
                    fVar142 * fVar123 + fVar146 * fVar125 + fVar150 * fVar58 + fVar154 * fVar59 +
                    fVar158 * fVar60 + fVar162 * fVar61 + fVar166 * fVar120 + fVar170 * fVar122;
          auVar112 = NEON_fmax(auVar171,auVar100,4);
          auVar113._0_4_ =
               fVar115 * fVar57 + fVar127 * fVar119 + fVar131 * fVar121 + fVar135 * fVar123 +
               fVar139 * fVar125 + fVar143 * fVar58 + fVar147 * fVar59 + fVar151 * fVar60 +
               fVar155 * fVar61 + fVar159 * fVar120 + fVar163 * fVar122 + fVar167 * fVar124;
          auVar113._4_4_ =
               fVar105 * fVar57 + fVar128 * fVar119 + fVar132 * fVar121 + fVar136 * fVar123 +
               fVar140 * fVar125 + fVar144 * fVar58 + fVar148 * fVar59 + fVar152 * fVar60 +
               fVar156 * fVar61 + fVar160 * fVar120 + fVar164 * fVar122 + fVar168 * fVar124;
          auVar113._8_4_ =
               fVar107 * fVar57 + fVar129 * fVar119 + fVar133 * fVar121 + fVar137 * fVar123 +
               fVar141 * fVar125 + fVar145 * fVar58 + fVar149 * fVar59 + fVar153 * fVar60 +
               fVar157 * fVar61 + fVar161 * fVar120 + fVar165 * fVar122 + fVar169 * fVar124;
          auVar113._12_4_ =
               fVar109 * fVar57 + fVar130 * fVar119 + fVar134 * fVar121 + fVar138 * fVar123 +
               fVar142 * fVar125 + fVar146 * fVar58 + fVar150 * fVar59 + fVar154 * fVar60 +
               fVar158 * fVar61 + fVar162 * fVar120 + fVar166 * fVar122 + fVar170 * fVar124;
          auVar116 = NEON_fmin(auVar116,auVar102,4);
          auVar112 = NEON_fmax(auVar112,auVar102,4);
          auVar15._4_4_ = fVar106;
          auVar15._0_4_ = fVar104;
          auVar15._8_4_ = fVar108;
          auVar15._12_4_ = fVar110;
          auVar116 = NEON_fmin(auVar116,auVar15,4);
          auVar16._4_4_ = fVar106;
          auVar16._0_4_ = fVar104;
          auVar16._8_4_ = fVar108;
          auVar16._12_4_ = fVar110;
          auVar112 = NEON_fmax(auVar112,auVar16,4);
          auVar172 = NEON_fmin(auVar116,auVar113,4);
          auVar171 = NEON_fmax(auVar112,auVar113,4);
          pfVar93 = pfVar92;
        } while (pfVar92 < auStack_a0);
        pfVar93 = pfVar98 + (((ulong)uVar8 & 0xfffc) - 0xc);
        if (pfVar98 < pfVar93) {
          do {
            fVar104 = *pfVar98;
            fVar106 = pfVar98[1];
            fVar110 = pfVar98[2];
            fVar57 = pfVar98[3];
            pfVar92 = pfVar98 + 4;
            fVar123 = (float)*(undefined8 *)(pfVar98 + 6);
            fVar125 = (float)((ulong)*(undefined8 *)(pfVar98 + 6) >> 0x20);
            fVar119 = (float)*(undefined8 *)pfVar92;
            fVar121 = (float)((ulong)*(undefined8 *)pfVar92 >> 0x20);
            fVar58 = pfVar98[8];
            fVar59 = pfVar98[9];
            fVar60 = pfVar98[10];
            fVar61 = pfVar98[0xb];
            fVar124 = (float)*(undefined8 *)(pfVar98 + 0xe);
            fVar120 = (float)*(undefined8 *)(pfVar98 + 0xc);
            fVar122 = (float)((ulong)*(undefined8 *)(pfVar98 + 0xc) >> 0x20);
            auVar101._0_4_ =
                 fVar127 * fVar106 + fVar115 * fVar104 + fVar131 * fVar110 + fVar135 * fVar57 +
                 fVar139 * fVar119 + fVar143 * fVar121 + fVar147 * fVar123 + fVar151 * fVar125 +
                 fVar155 * fVar58 + fVar159 * fVar59 + fVar163 * fVar60 + fVar167 * fVar61;
            auVar101._4_4_ =
                 fVar128 * fVar106 + fVar105 * fVar104 + fVar132 * fVar110 + fVar136 * fVar57 +
                 fVar140 * fVar119 + fVar144 * fVar121 + fVar148 * fVar123 + fVar152 * fVar125 +
                 fVar156 * fVar58 + fVar160 * fVar59 + fVar164 * fVar60 + fVar168 * fVar61;
            auVar101._8_4_ =
                 fVar129 * fVar106 + fVar107 * fVar104 + fVar133 * fVar110 + fVar137 * fVar57 +
                 fVar141 * fVar119 + fVar145 * fVar121 + fVar149 * fVar123 + fVar153 * fVar125 +
                 fVar157 * fVar58 + fVar161 * fVar59 + fVar165 * fVar60 + fVar169 * fVar61;
            auVar101._12_4_ =
                 fVar130 * fVar106 + fVar109 * fVar104 + fVar134 * fVar110 + fVar138 * fVar57 +
                 fVar142 * fVar119 + fVar146 * fVar121 + fVar150 * fVar123 + fVar154 * fVar125 +
                 fVar158 * fVar58 + fVar162 * fVar59 + fVar166 * fVar60 + fVar170 * fVar61;
            auVar103._0_4_ =
                 fVar127 * fVar110 + fVar115 * fVar106 + fVar131 * fVar57 + fVar135 * fVar119 +
                 fVar139 * fVar121 + fVar143 * fVar123 + fVar147 * fVar125 + fVar151 * fVar58 +
                 fVar155 * fVar59 + fVar159 * fVar60 + fVar163 * fVar61 + fVar167 * fVar120;
            auVar103._4_4_ =
                 fVar128 * fVar110 + fVar105 * fVar106 + fVar132 * fVar57 + fVar136 * fVar119 +
                 fVar140 * fVar121 + fVar144 * fVar123 + fVar148 * fVar125 + fVar152 * fVar58 +
                 fVar156 * fVar59 + fVar160 * fVar60 + fVar164 * fVar61 + fVar168 * fVar120;
            auVar103._8_4_ =
                 fVar129 * fVar110 + fVar107 * fVar106 + fVar133 * fVar57 + fVar137 * fVar119 +
                 fVar141 * fVar121 + fVar145 * fVar123 + fVar149 * fVar125 + fVar153 * fVar58 +
                 fVar157 * fVar59 + fVar161 * fVar60 + fVar165 * fVar61 + fVar169 * fVar120;
            auVar103._12_4_ =
                 fVar130 * fVar110 + fVar109 * fVar106 + fVar134 * fVar57 + fVar138 * fVar119 +
                 fVar142 * fVar121 + fVar146 * fVar123 + fVar150 * fVar125 + fVar154 * fVar58 +
                 fVar158 * fVar59 + fVar162 * fVar60 + fVar166 * fVar61 + fVar170 * fVar120;
            auVar116 = NEON_fmin(auVar172,auVar101,4);
            fVar104 = fVar127 * fVar57 + fVar115 * fVar110 + fVar131 * fVar119 + fVar135 * fVar121 +
                      fVar139 * fVar123 + fVar143 * fVar125 + fVar147 * fVar58 + fVar151 * fVar59 +
                      fVar155 * fVar60 + fVar159 * fVar61 + fVar163 * fVar120 + fVar167 * fVar122;
            fVar106 = fVar128 * fVar57 + fVar105 * fVar110 + fVar132 * fVar119 + fVar136 * fVar121 +
                      fVar140 * fVar123 + fVar144 * fVar125 + fVar148 * fVar58 + fVar152 * fVar59 +
                      fVar156 * fVar60 + fVar160 * fVar61 + fVar164 * fVar120 + fVar168 * fVar122;
            fVar108 = fVar129 * fVar57 + fVar107 * fVar110 + fVar133 * fVar119 + fVar137 * fVar121 +
                      fVar141 * fVar123 + fVar145 * fVar125 + fVar149 * fVar58 + fVar153 * fVar59 +
                      fVar157 * fVar60 + fVar161 * fVar61 + fVar165 * fVar120 + fVar169 * fVar122;
            fVar110 = fVar130 * fVar57 + fVar109 * fVar110 + fVar134 * fVar119 + fVar138 * fVar121 +
                      fVar142 * fVar123 + fVar146 * fVar125 + fVar150 * fVar58 + fVar154 * fVar59 +
                      fVar158 * fVar60 + fVar162 * fVar61 + fVar166 * fVar120 + fVar170 * fVar122;
            auVar112 = NEON_fmax(auVar171,auVar101,4);
            auVar114._0_4_ =
                 fVar115 * fVar57 + fVar127 * fVar119 + fVar131 * fVar121 + fVar135 * fVar123 +
                 fVar139 * fVar125 + fVar143 * fVar58 + fVar147 * fVar59 + fVar151 * fVar60 +
                 fVar155 * fVar61 + fVar159 * fVar120 + fVar163 * fVar122 + fVar167 * fVar124;
            auVar114._4_4_ =
                 fVar105 * fVar57 + fVar128 * fVar119 + fVar132 * fVar121 + fVar136 * fVar123 +
                 fVar140 * fVar125 + fVar144 * fVar58 + fVar148 * fVar59 + fVar152 * fVar60 +
                 fVar156 * fVar61 + fVar160 * fVar120 + fVar164 * fVar122 + fVar168 * fVar124;
            auVar114._8_4_ =
                 fVar107 * fVar57 + fVar129 * fVar119 + fVar133 * fVar121 + fVar137 * fVar123 +
                 fVar141 * fVar125 + fVar145 * fVar58 + fVar149 * fVar59 + fVar153 * fVar60 +
                 fVar157 * fVar61 + fVar161 * fVar120 + fVar165 * fVar122 + fVar169 * fVar124;
            auVar114._12_4_ =
                 fVar109 * fVar57 + fVar130 * fVar119 + fVar134 * fVar121 + fVar138 * fVar123 +
                 fVar142 * fVar125 + fVar146 * fVar58 + fVar150 * fVar59 + fVar154 * fVar60 +
                 fVar158 * fVar61 + fVar162 * fVar120 + fVar166 * fVar122 + fVar170 * fVar124;
            auVar116 = NEON_fmin(auVar116,auVar103,4);
            auVar112 = NEON_fmax(auVar112,auVar103,4);
            auVar17._4_4_ = fVar106;
            auVar17._0_4_ = fVar104;
            auVar17._8_4_ = fVar108;
            auVar17._12_4_ = fVar110;
            auVar116 = NEON_fmin(auVar116,auVar17,4);
            auVar18._4_4_ = fVar106;
            auVar18._0_4_ = fVar104;
            auVar18._8_4_ = fVar108;
            auVar18._12_4_ = fVar110;
            auVar112 = NEON_fmax(auVar112,auVar18,4);
            auVar172 = NEON_fmin(auVar116,auVar114,4);
            auVar171 = NEON_fmax(auVar112,auVar114,4);
            pfVar98 = pfVar92;
          } while (pfVar92 < pfVar93);
        }
        memcpy(__src,pfVar93,0x30);
        uVar118 = NEON_fminnm(auVar172._0_4_,auVar172._4_4_);
        uVar118 = NEON_fminnm(uVar118,auVar172._8_4_);
        fVar115 = auVar171._0_4_;
        if (auVar171._0_4_ <= auVar171._8_4_) {
          fVar115 = auVar171._8_4_;
        }
        fVar105 = (float)NEON_fminnm(uVar118,auVar172._12_4_);
        if (fVar115 <= auVar171._12_4_) {
          fVar115 = auVar171._12_4_;
        }
        fVar107 = ABS(fVar105);
        if (ABS(fVar105) <= fVar115) {
          fVar107 = fVar115;
        }
        *(float *)(*(long *)(param_3 + 0x20) + uVar87 * 4) = fVar99 * fVar107;
        uVar87 = uVar87 + 1;
      } while (uVar87 < bVar7);
    }
  }
  if ((uVar6 >> 4 & 1) != 0) {
    FUN_004d5ac0(fVar35,param_3,param_2);
  }
  return;
}


