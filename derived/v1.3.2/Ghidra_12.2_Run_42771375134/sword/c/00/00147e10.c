/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00147e10; name: FUN_00147e10
 */


void FUN_00147e10(long param_1,long param_2)

{
  unkbyte9 *pVar1;
  float *pfVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined1 (*pauVar6) [12];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined5 uVar20;
  undefined1 auVar21 [12];
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  int *piVar25;
  ulong uVar26;
  uint *puVar27;
  ulong uVar28;
  undefined8 *puVar29;
  long *plVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  unkbyte9 *pVar33;
  uint uVar34;
  long lVar35;
  undefined8 *puVar36;
  undefined1 (*pauVar37) [16];
  undefined8 *puVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  float fVar48;
  undefined8 uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  float fVar69;
  float fVar75;
  float fVar76;
  undefined1 auVar70 [16];
  undefined8 uVar77;
  float fVar78;
  undefined1 auVar74 [16];
  undefined1 auVar73 [16];
  undefined1 auVar72 [16];
  undefined1 auVar71 [16];
  undefined1 auVar80 [12];
  float fVar79;
  float fVar86;
  float fVar87;
  undefined1 auVar82 [16];
  undefined1 auVar81 [16];
  undefined1 auVar85 [16];
  undefined1 auVar84 [16];
  undefined1 auVar83 [16];
  float fVar88;
  float fVar89;
  float fVar95;
  float fVar96;
  undefined1 auVar93 [16];
  undefined1 auVar92 [16];
  undefined1 auVar91 [16];
  undefined1 auVar90 [16];
  undefined1 auVar94 [16];
  float fVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  undefined1 uVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  int iVar116;
  undefined1 auVar117 [12];
  byte bVar135;
  byte bVar137;
  undefined4 uVar141;
  byte bVar142;
  byte bVar143;
  byte bVar145;
  byte bVar146;
  byte bVar148;
  byte bVar149;
  undefined1 in_q16 [16];
  undefined1 auVar122 [16];
  undefined1 auVar121 [16];
  undefined1 auVar120 [16];
  undefined1 auVar119 [16];
  undefined1 auVar123 [16];
  byte bVar139;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar118 [12];
  byte bVar136;
  byte bVar138;
  byte bVar140;
  byte bVar144;
  byte bVar147;
  byte bVar150;
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar134 [16];
  undefined1 auVar133 [16];
  undefined1 auVar132 [16];
  uint uVar151;
  float fVar204;
  undefined4 uVar165;
  uint uVar167;
  undefined1 auVar152 [16];
  uint uVar166;
  uint uVar168;
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar160 [16];
  undefined1 auVar159 [16];
  undefined1 auVar158 [16];
  undefined1 auVar157 [16];
  undefined1 auVar164 [16];
  undefined1 auVar163 [16];
  undefined1 auVar162 [16];
  undefined1 auVar161 [16];
  float fVar169;
  float fVar170;
  undefined1 auVar171 [12];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  float fVar174;
  float fVar175;
  float fVar176;
  float fVar177;
  float fVar178;
  float fVar179;
  float fVar181;
  float fVar182;
  undefined1 auVar180 [16];
  float fVar183;
  float fVar184;
  float fVar185;
  float fVar186;
  float fVar187;
  float fVar188;
  float fVar189;
  float fVar190;
  float fVar191;
  float fVar192;
  float fVar193;
  float fVar194;
  float fVar195;
  float fVar196;
  float fVar197;
  float fVar198;
  float fVar199;
  float fVar200;
  float fVar201;
  float fVar202;
  float fVar203;
  
  lVar35 = *(long *)(param_1 + 0x1c0);
  if (*(int *)(lVar35 + 0x148) == 0) {
    return;
  }
  uVar34 = *(uint *)(lVar35 + 0x138);
  if (uVar34 == 0) {
    puVar29 = (undefined8 *)0x0;
    uVar34 = *(uint *)(param_2 + 0xd0);
    puVar31 = *(undefined8 **)(lVar35 + 0x130);
  }
  else {
    lVar35 = *(long *)(param_1 + 0x1c8);
    puVar29 = (undefined8 *)(*(long *)(lVar35 + 0x10) + 0x1fU & 0xfffffffffffffff0);
    puVar29[-2] = *(undefined8 *)(lVar35 + 0x18);
    *(uint *)(puVar29 + -1) = uVar34 * 0x20 & 0x7fffffff;
    *(undefined8 **)(lVar35 + 0x10) = puVar29 + (ulong)uVar34 * 4;
    *(undefined8 **)(lVar35 + 0x18) = puVar29 + -2;
    lVar35 = *(long *)(param_1 + 0x1c0);
    uVar34 = *(uint *)(param_2 + 0xd0);
    puVar31 = *(undefined8 **)(lVar35 + 0x130);
  }
  if (uVar34 == 1) {
    uVar34 = *(uint *)(lVar35 + 0x138);
    if (uVar34 != 0) {
      uVar5 = uVar34 - 1;
      puVar36 = puVar29;
      if ((uVar34 & 3) != 0) {
        iVar116 = -(uVar34 & 3);
        puVar32 = puVar31;
        puVar38 = puVar29;
        do {
          puVar38[1] = puVar32[1];
          uVar34 = uVar34 - 1;
          puVar31 = puVar32 + 2;
          iVar116 = iVar116 + 1;
          puVar36 = puVar38 + 2;
          *puVar38 = *puVar32;
          puVar32 = puVar31;
          puVar38 = puVar36;
        } while (iVar116 != 0);
      }
      if (2 < uVar5) {
        do {
          *puVar36 = *puVar31;
          puVar36[1] = puVar31[1];
          puVar36[2] = puVar31[2];
          puVar36[3] = puVar31[3];
          puVar36[4] = puVar31[4];
          puVar36[5] = puVar31[5];
          puVar36[7] = puVar31[7];
          puVar32 = puVar31 + 6;
          uVar34 = uVar34 - 4;
          puVar31 = puVar31 + 8;
          puVar36[6] = *puVar32;
          puVar36 = puVar36 + 8;
        } while (uVar34 != 0);
      }
    }
  }
  else {
    uVar5 = *(uint *)(lVar35 + 0x138);
    if (uVar5 != 0) {
      fVar48 = *(float *)(param_2 + 0xd4) + (1.0 - *(float *)(param_2 + 0xd4) * (float)uVar34);
      puVar36 = *(undefined8 **)(lVar35 + 0x128);
      uVar34 = uVar5;
      puVar32 = puVar29;
      if ((uVar5 & 1) != 0) {
        uVar49 = *puVar31;
        fVar50 = (float)*puVar36;
        fVar87 = (float)((ulong)*puVar36 >> 0x20);
        fVar51 = (float)puVar36[1];
        fVar52 = (float)((ulong)puVar36[1] >> 0x20);
        puVar29[1] = CONCAT44(fVar52 + fVar48 * ((float)((ulong)puVar31[1] >> 0x20) - fVar52),
                              fVar51 + fVar48 * ((float)puVar31[1] - fVar51));
        *puVar29 = CONCAT44(fVar87 + fVar48 * ((float)((ulong)uVar49 >> 0x20) - fVar87),
                            fVar50 + fVar48 * ((float)uVar49 - fVar50));
        puVar31 = puVar31 + 2;
        puVar36 = puVar36 + 2;
        uVar34 = uVar5 - 1;
        puVar32 = puVar29 + 2;
      }
      if (uVar5 != 1) {
        do {
          uVar49 = *puVar31;
          uVar34 = uVar34 - 2;
          fVar50 = (float)*puVar36;
          fVar87 = (float)((ulong)*puVar36 >> 0x20);
          fVar51 = (float)puVar36[1];
          fVar52 = (float)((ulong)puVar36[1] >> 0x20);
          puVar32[1] = CONCAT44(fVar52 + fVar48 * ((float)((ulong)puVar31[1] >> 0x20) - fVar52),
                                fVar51 + fVar48 * ((float)puVar31[1] - fVar51));
          *puVar32 = CONCAT44(fVar87 + fVar48 * ((float)((ulong)uVar49 >> 0x20) - fVar87),
                              fVar50 + fVar48 * ((float)uVar49 - fVar50));
          puVar38 = puVar31 + 3;
          uVar49 = puVar31[2];
          puVar31 = puVar31 + 4;
          fVar50 = (float)puVar36[2];
          fVar87 = (float)((ulong)puVar36[2] >> 0x20);
          fVar51 = (float)puVar36[3];
          fVar52 = (float)((ulong)puVar36[3] >> 0x20);
          puVar36 = puVar36 + 4;
          puVar32[3] = CONCAT44(fVar52 + fVar48 * ((float)((ulong)*puVar38 >> 0x20) - fVar52),
                                fVar51 + fVar48 * ((float)*puVar38 - fVar51));
          puVar32[2] = CONCAT44(fVar87 + fVar48 * ((float)((ulong)uVar49 >> 0x20) - fVar87),
                                fVar50 + fVar48 * ((float)uVar49 - fVar50));
          puVar32 = puVar32 + 4;
        } while (uVar34 != 0);
      }
    }
  }
  puVar24 = PTR_DAT_02710da0;
  puVar23 = PTR_DAT_02710d80;
  puVar22 = PTR_DAT_02710d60;
  piVar25 = *(int **)(param_1 + 0x1c0);
  if (*piVar25 << 2 == 0) {
LAB_0014842c:
    if (puVar29 != (undefined8 *)0x0) {
      lVar35 = *(long *)(param_1 + 0x1c8);
      *(uint *)(puVar29 + -1) = *(uint *)(puVar29 + -1) | 0x80000000;
      plVar30 = *(long **)(lVar35 + 0x18);
      while ((plVar30 != (long *)0x0 && (*(int *)(plVar30 + 1) < 0))) {
        *(long **)(lVar35 + 0x10) = plVar30;
        plVar30 = (long *)*plVar30;
        *(long **)(lVar35 + 0x18) = plVar30;
      }
    }
    return;
  }
  fVar48 = (float)piVar25[0x62];
  pVar33 = *(unkbyte9 **)(piVar25 + 2);
  pauVar37 = *(undefined1 (**) [16])(piVar25 + 4);
  pVar1 = (unkbyte9 *)((long)pVar33 + (ulong)(uint)(*piVar25 << 2) * 4);
  do {
    auVar127 = *(undefined1 (*) [16])(pVar33 + 1);
    auVar172 = *(undefined1 (*) [16])(pVar33 + 2);
    auVar130 = *(undefined1 (*) [16])(pVar33 + 3);
    fVar51 = (float)*(undefined8 *)((long)pVar33 + 8);
    auVar119._4_12_ = in_q16._4_12_;
    auVar119._0_4_ = fVar51;
    auVar121._12_4_ = in_q16._12_4_;
    auVar121._0_8_ = auVar119._0_8_;
    auVar121._8_4_ = (int)((ulong)*(undefined8 *)((long)pVar33 + 8) >> 0x20);
    fVar44 = auVar172._8_4_;
    auVar120._8_8_ = auVar121._8_8_;
    auVar120._4_4_ = fVar44;
    auVar120._0_4_ = fVar51;
    auVar122._0_12_ = auVar120._0_12_;
    auVar122._12_4_ = auVar172._12_4_;
    auVar81._0_8_ = auVar172._4_8_ << 0x20;
    fVar39 = auVar127._4_4_;
    auVar81._8_4_ = fVar39;
    auVar81._12_4_ = auVar172._12_4_;
    auVar21._4_8_ = auVar81._8_8_;
    auVar21._0_4_ = auVar130._0_4_;
    auVar82._0_12_ = auVar21 << 0x20;
    fVar43 = auVar130._4_4_;
    auVar82._12_4_ = fVar43;
    fVar40 = auVar127._8_4_;
    auVar90._4_12_ = auVar130._4_12_;
    auVar90._0_4_ = fVar40;
    auVar92._12_4_ = auVar130._12_4_;
    auVar92._0_8_ = auVar90._0_8_;
    auVar92._8_4_ = auVar127._12_4_;
    fVar45 = auVar130._8_4_;
    auVar91._8_8_ = auVar92._8_8_;
    auVar91._4_4_ = fVar45;
    auVar91._0_4_ = fVar40;
    auVar93._0_12_ = auVar91._0_12_;
    auVar93._12_4_ = auVar92._12_4_;
    fVar52 = (float)((unkuint9)*pVar33 >> 0x20);
    auVar152._4_12_ = auVar127._4_12_;
    auVar152._0_4_ = fVar52;
    fVar42 = (float)(CONCAT17(auVar172[7],
                              CONCAT16(auVar172[6],
                                       CONCAT15(auVar172[5],CONCAT14(auVar172[4],fVar52)))) >> 0x20)
    ;
    auVar123._0_8_ = auVar152._0_8_;
    auVar123._8_4_ = fVar42;
    auVar123._12_4_ = auVar127._12_4_;
    auVar70._8_8_ = auVar123._8_8_;
    auVar70._0_8_ = CONCAT44(fVar39,fVar52);
    auVar180._0_12_ = auVar70._0_12_;
    auVar180._12_4_ = fVar43;
    auVar83._4_12_ = auVar82._4_12_;
    auVar83._0_4_ = fVar51;
    auVar85._0_8_ = auVar83._0_8_;
    auVar85._8_4_ = fVar44;
    auVar85._12_4_ = fVar43;
    auVar84._8_8_ = auVar85._8_8_;
    auVar84._4_4_ = fVar40;
    auVar84._0_4_ = fVar51;
    auVar80 = auVar84._0_12_;
    auVar123 = NEON_ext(auVar122,auVar122,8,1);
    bVar107 = 0;
    bVar108 = 0;
    bVar109 = 0;
    bVar110 = 0;
    bVar111 = 0;
    bVar112 = 0;
    bVar113 = 0;
    bVar114 = 0;
    bVar98 = 0;
    bVar99 = 0;
    bVar100 = 0;
    bVar101 = 0;
    bVar102 = 0;
    bVar103 = 0;
    bVar104 = 0;
    bVar105 = 0;
    auVar152 = NEON_ext(auVar93,auVar93,8,1);
    uVar141 = *(undefined4 *)puVar23;
    auVar94._4_4_ = (float)uVar141;
    auVar94._0_4_ = (float)uVar141;
    auVar94._8_4_ = (float)uVar141;
    auVar94._12_4_ = (float)uVar141;
    fVar87 = auVar172._0_4_;
    uVar8 = CONCAT17(auVar130[3],
                     CONCAT16(auVar130[2],CONCAT15(auVar130[1],CONCAT14(auVar130[0],fVar87))));
    fVar50 = (float)*pVar33;
    uVar49 = CONCAT17(auVar127[3],
                      CONCAT16(auVar127[2],CONCAT15(auVar127[1],CONCAT14(auVar127[0],fVar50))));
    uVar77 = auVar180._8_8_;
    uVar141 = auVar123._4_4_;
    uVar165 = auVar152._4_4_;
    uVar26 = (ulong)(uint)piVar25[0x4e];
    if (piVar25[0x4e] != 0) {
      uVar41 = *(undefined4 *)puVar24;
      auVar172._4_4_ = uVar41;
      auVar172._0_4_ = uVar41;
      auVar172._8_4_ = uVar41;
      auVar172._12_4_ = uVar41;
      bVar107 = 0;
      bVar108 = 0;
      bVar109 = 0;
      bVar110 = 0;
      bVar111 = 0;
      bVar112 = 0;
      bVar113 = 0;
      bVar114 = 0;
      bVar98 = 0;
      bVar99 = 0;
      bVar100 = 0;
      bVar101 = 0;
      bVar102 = 0;
      bVar103 = 0;
      bVar104 = 0;
      bVar105 = 0;
      lVar35 = 0;
      while( true ) {
        pfVar2 = (float *)((long)puVar29 + lVar35);
        fVar169 = pfVar2[2];
        fVar69 = pfVar2[3];
        fVar75 = *pfVar2;
        fVar170 = pfVar2[1];
        fVar76 = fVar69 + auVar80._0_4_ * fVar169 + auVar180._0_4_ * fVar170 + fVar50 * fVar75;
        fVar78 = fVar69 + auVar80._4_4_ * fVar169 + auVar180._4_4_ * fVar170 +
                 auVar127._0_4_ * fVar75;
        fVar79 = fVar69 + auVar80._8_4_ * fVar169 + auVar180._8_4_ * fVar170 + fVar87 * fVar75;
        fVar69 = fVar69 + fVar45 * fVar169 + auVar180._12_4_ * fVar170 + auVar130._0_4_ * fVar75;
        puVar31 = (undefined8 *)((long)puVar29 + lVar35 + uVar26 * 0x10);
        puVar31[1] = CONCAT17((char)((uint)fVar69 >> 0x18),
                              CONCAT16((char)((uint)fVar69 >> 0x10),
                                       CONCAT15((char)((uint)fVar69 >> 8),
                                                CONCAT14(SUB41(fVar69,0),fVar79))));
        *puVar31 = CONCAT17((char)((uint)fVar78 >> 0x18),
                            CONCAT16((char)((uint)fVar78 >> 0x10),
                                     CONCAT15((char)((uint)fVar78 >> 8),
                                              CONCAT14(SUB41(fVar78,0),fVar76))));
        iVar116 = -(uint)(fVar76 < 0.0);
        iVar9 = -(uint)(fVar78 < 0.0);
        iVar10 = -(uint)(fVar79 < 0.0);
        iVar11 = -(uint)(fVar69 < 0.0);
        bVar98 = auVar172[0] & (byte)iVar116 | bVar98;
        bVar99 = auVar172[1] & (byte)((uint)iVar116 >> 8) | bVar99;
        bVar100 = auVar172[2] & (byte)((uint)iVar116 >> 0x10) | bVar100;
        bVar101 = auVar172[3] & (byte)((uint)iVar116 >> 0x18) | bVar101;
        bVar102 = auVar172[4] & (byte)iVar9 | bVar102;
        bVar103 = auVar172[5] & (byte)((uint)iVar9 >> 8) | bVar103;
        bVar104 = auVar172[6] & (byte)((uint)iVar9 >> 0x10) | bVar104;
        bVar105 = auVar172[7] & (byte)((uint)iVar9 >> 0x18) | bVar105;
        bVar107 = auVar172[8] & (byte)iVar10 | bVar107;
        bVar108 = auVar172[9] & (byte)((uint)iVar10 >> 8) | bVar108;
        bVar109 = auVar172[10] & (byte)((uint)iVar10 >> 0x10) | bVar109;
        bVar110 = auVar172[0xb] & (byte)((uint)iVar10 >> 0x18) | bVar110;
        bVar111 = auVar172[0xc] & (byte)iVar11 | bVar111;
        bVar112 = auVar172[0xd] & (byte)((uint)iVar11 >> 8) | bVar112;
        bVar113 = auVar172[0xe] & (byte)((uint)iVar11 >> 0x10) | bVar113;
        bVar114 = auVar172[0xf] & (byte)((uint)iVar11 >> 0x18) | bVar114;
        if (uVar26 * 0x10 + -0x10 == lVar35) break;
        auVar7[8] = 1;
        auVar7._0_8_ = 0x100000001;
        auVar7._9_3_ = 0;
        auVar7[0xc] = 1;
        auVar7._13_3_ = 0;
        auVar172 = NEON_ushl(auVar172,auVar7,4);
        auVar180._8_8_ = uVar77;
        auVar180._0_8_ = auVar70._0_8_;
        auVar80._4_4_ = fVar40;
        auVar80._0_4_ = fVar51;
        auVar80._8_4_ = fVar44;
        lVar35 = lVar35 + 0x10;
      }
    }
    iVar116 = -(uint)(CONCAT13(bVar101,CONCAT12(bVar100,CONCAT11(bVar99,bVar98))) == 0);
    iVar9 = -(uint)(CONCAT13(bVar105,CONCAT12(bVar104,CONCAT11(bVar103,bVar102))) == 0);
    uVar53 = (undefined1)iVar9;
    uVar54 = (undefined1)((uint)iVar9 >> 8);
    uVar55 = (undefined1)((uint)iVar9 >> 0x10);
    uVar56 = (undefined1)((uint)iVar9 >> 0x18);
    iVar9 = -(uint)(CONCAT13(bVar110,CONCAT12(bVar109,CONCAT11(bVar108,bVar107))) == 0);
    uVar57 = (undefined1)iVar9;
    uVar58 = (undefined1)((uint)iVar9 >> 8);
    uVar59 = (undefined1)((uint)iVar9 >> 0x10);
    uVar60 = (undefined1)((uint)iVar9 >> 0x18);
    iVar9 = -(uint)(CONCAT13(bVar114,CONCAT12(bVar113,CONCAT11(bVar112,bVar111))) == 0);
    uVar61 = (undefined1)iVar9;
    uVar62 = (undefined1)((uint)iVar9 >> 8);
    uVar63 = (undefined1)((uint)iVar9 >> 0x10);
    uVar64 = (undefined1)((uint)iVar9 >> 0x18);
    auVar127[4] = uVar53;
    auVar127._0_4_ = iVar116;
    auVar127[5] = uVar54;
    auVar127[6] = uVar55;
    auVar127[7] = uVar56;
    auVar127[8] = uVar57;
    auVar127[9] = uVar58;
    auVar127[10] = uVar59;
    auVar127[0xb] = uVar60;
    auVar127[0xc] = uVar61;
    auVar127[0xd] = uVar62;
    auVar127[0xe] = uVar63;
    auVar127[0xf] = uVar64;
    auVar130[4] = uVar53;
    auVar130._0_4_ = iVar116;
    auVar130[5] = uVar54;
    auVar130[6] = uVar55;
    auVar130[7] = uVar56;
    auVar130[8] = uVar57;
    auVar130[9] = uVar58;
    auVar130[10] = uVar59;
    auVar130[0xb] = uVar60;
    auVar130[0xc] = uVar61;
    auVar130[0xd] = uVar62;
    auVar130[0xe] = uVar63;
    auVar130[0xf] = uVar64;
    NEON_ext(auVar127,auVar130,8,1);
    if (CONCAT13(uVar61,CONCAT12(uVar57,CONCAT11(uVar53,(char)iVar116))) == -1) {
LAB_00148230:
      uVar61 = 0;
      uVar62 = 0;
      uVar63 = 0;
      uVar64 = 0;
      uVar65 = 0;
      uVar66 = 0;
      uVar67 = 0;
      uVar68 = 0;
      uVar53 = 0;
      uVar54 = 0;
      uVar55 = 0;
      uVar56 = 0;
      uVar57 = 0;
      uVar58 = 0;
      uVar59 = 0;
      uVar60 = 0;
      fVar69 = 0.0;
      fVar75 = 0.0;
      fVar76 = 0.0;
      fVar78 = 0.0;
      fVar79 = 0.0;
      fVar169 = 0.0;
      fVar170 = 0.0;
      fVar88 = 0.0;
    }
    else {
      uVar34 = *(uint *)(*(long *)(param_1 + 0x1c0) + 0x148);
      if (uVar34 == 0) goto LAB_00148230;
      puVar27 = *(uint **)(*(long *)(param_1 + 0x1c0) + 0x140);
      uVar61 = 0;
      uVar62 = 0;
      uVar63 = 0;
      uVar64 = 0;
      uVar65 = 0;
      uVar66 = 0;
      uVar67 = 0;
      uVar68 = 0;
      uVar53 = 0;
      uVar54 = 0;
      uVar55 = 0;
      uVar56 = 0;
      uVar57 = 0;
      uVar58 = 0;
      uVar59 = 0;
      uVar60 = 0;
      fVar69 = 0.0;
      fVar75 = 0.0;
      fVar76 = 0.0;
      fVar78 = 0.0;
      fVar79 = 0.0;
      fVar169 = 0.0;
      fVar170 = 0.0;
      fVar88 = 0.0;
      puVar3 = puVar27 + uVar34;
      auVar127 = auVar94;
      do {
        uVar34 = *puVar27;
        bVar115 = (byte)uVar34;
        bVar135 = (byte)(uVar34 >> 8);
        bVar137 = (byte)(uVar34 >> 0x10);
        bVar139 = (byte)(uVar34 >> 0x18);
        iVar116 = CONCAT13(bVar139 & ~bVar101,
                           CONCAT12(bVar137 & ~bVar100,CONCAT11(bVar135 & ~bVar99,bVar115 & ~bVar98)
                                   ));
        auVar117._0_8_ =
             CONCAT17(bVar139 & ~bVar105,
                      CONCAT16(bVar137 & ~bVar104,
                               CONCAT15(bVar135 & ~bVar103,CONCAT14(bVar115 & ~bVar102,iVar116))));
        auVar117[8] = bVar115 & ~bVar107;
        auVar117[9] = bVar135 & ~bVar108;
        auVar117[10] = bVar137 & ~bVar109;
        auVar117[0xb] = bVar139 & ~bVar110;
        auVar124[0xc] = bVar115 & ~bVar111;
        auVar124._0_12_ = auVar117;
        auVar124[0xd] = bVar135 & ~bVar112;
        auVar124[0xe] = bVar137 & ~bVar113;
        auVar124[0xf] = bVar139 & ~bVar114;
        auVar125._0_4_ = -(uint)(iVar116 == 0);
        auVar125._4_4_ = -(uint)((int)((ulong)auVar117._0_8_ >> 0x20) == 0);
        auVar125._8_4_ = -(uint)(auVar117._8_4_ == 0);
        auVar125._12_4_ = -(uint)(auVar124._12_4_ == 0);
        NEON_ext(auVar125,auVar125,8,1);
        bVar115 = (byte)auVar125._0_4_;
        bVar135 = (byte)auVar125._4_4_;
        bVar137 = (byte)auVar125._8_4_;
        bVar139 = (byte)auVar125._12_4_;
        auVar94 = auVar127;
        if (CONCAT13(bVar139,CONCAT12(bVar137,CONCAT11(bVar135,bVar115))) != 0) {
          uVar28 = (ulong)(0x1f - (int)LZCOUNT(uVar34 & -uVar34));
          pfVar2 = (float *)(puVar29 + uVar28 * 2);
          fVar174 = *pfVar2;
          fVar86 = pfVar2[2];
          fVar89 = pfVar2[1];
          auVar172 = *(undefined1 (*) [16])(puVar29 + uVar26 * 2 + uVar28 * 2);
          fVar95 = fVar174;
          fVar96 = fVar174;
          fVar97 = fVar174;
          fVar175 = fVar86;
          fVar176 = fVar86;
          fVar177 = fVar86;
          fVar178 = fVar89;
          fVar179 = fVar89;
          fVar181 = fVar89;
          for (uVar34 = uVar34 - 1 & uVar34; uVar34 != 0; uVar34 = uVar34 - 1 & uVar34) {
            uVar28 = (ulong)(0x1f - (int)LZCOUNT(uVar34 & -uVar34));
            puVar4 = (uint *)(puVar29 + uVar28 * 2);
            pauVar6 = (undefined1 (*) [12])(puVar29 + uVar26 * 2 + uVar28 * 2);
            fVar182 = (float)((ulong)*(undefined8 *)(*pauVar6 + 8) >> 0x20);
            uVar5 = *puVar4;
            uVar151 = -(uint)(auVar172._0_4_ < (float)*(undefined8 *)*pauVar6);
            uVar166 = -(uint)(auVar172._4_4_ < (float)((ulong)*(undefined8 *)*pauVar6 >> 0x20));
            uVar167 = -(uint)(auVar172._8_4_ < (float)*(undefined8 *)(*pauVar6 + 8));
            uVar168 = -(uint)(auVar172._12_4_ < fVar182);
            auVar16._12_4_ = fVar182;
            auVar16._0_12_ = *pauVar6;
            auVar172 = NEON_fmax(auVar16,auVar172,4);
            fVar174 = (float)((uint)fVar174 ^ ((uint)fVar174 ^ uVar5) & uVar151);
            fVar95 = (float)((uint)fVar95 ^ ((uint)fVar95 ^ uVar5) & uVar166);
            fVar96 = (float)((uint)fVar96 ^ ((uint)fVar96 ^ uVar5) & uVar167);
            fVar97 = (float)((uint)fVar97 ^ ((uint)fVar97 ^ uVar5) & uVar168);
            uVar5 = puVar4[1];
            fVar89 = (float)((uint)fVar89 ^ ((uint)fVar89 ^ uVar5) & uVar151);
            fVar178 = (float)((uint)fVar178 ^ ((uint)fVar178 ^ uVar5) & uVar166);
            fVar179 = (float)((uint)fVar179 ^ ((uint)fVar179 ^ uVar5) & uVar167);
            fVar181 = (float)((uint)fVar181 ^ ((uint)fVar181 ^ uVar5) & uVar168);
            uVar5 = puVar4[2];
            fVar86 = (float)((uint)fVar86 ^ ((uint)fVar86 ^ uVar5) & uVar151);
            fVar175 = (float)((uint)fVar175 ^ ((uint)fVar175 ^ uVar5) & uVar166);
            fVar176 = (float)((uint)fVar176 ^ ((uint)fVar176 ^ uVar5) & uVar167);
            fVar177 = (float)((uint)fVar177 ^ ((uint)fVar177 ^ uVar5) & uVar168);
          }
          bVar136 = (byte)((uint)auVar125._0_4_ >> 8);
          bVar138 = (byte)((uint)auVar125._0_4_ >> 0x10);
          bVar140 = (byte)((uint)auVar125._0_4_ >> 0x18);
          fVar182 = (float)CONCAT13(auVar172[3] & bVar140,
                                    CONCAT12(auVar172[2] & bVar138,
                                             CONCAT11(auVar172[1] & bVar136,auVar172[0] & bVar115)))
          ;
          bVar142 = (byte)((uint)auVar125._4_4_ >> 8);
          bVar143 = (byte)((uint)auVar125._4_4_ >> 0x10);
          bVar144 = (byte)((uint)auVar125._4_4_ >> 0x18);
          auVar171._0_8_ =
               CONCAT17(auVar172[7] & bVar144,
                        CONCAT16(auVar172[6] & bVar143,
                                 CONCAT15(auVar172[5] & bVar142,
                                          CONCAT14(auVar172[4] & bVar135,fVar182))));
          auVar171[8] = auVar172[8] & bVar137;
          bVar145 = (byte)((uint)auVar125._8_4_ >> 8);
          auVar171[9] = auVar172[9] & bVar145;
          bVar146 = (byte)((uint)auVar125._8_4_ >> 0x10);
          auVar171[10] = auVar172[10] & bVar146;
          bVar147 = (byte)((uint)auVar125._8_4_ >> 0x18);
          auVar171[0xb] = auVar172[0xb] & bVar147;
          auVar173[0xc] = auVar172[0xc] & bVar139;
          auVar173._0_12_ = auVar171;
          bVar148 = (byte)((uint)auVar125._12_4_ >> 8);
          auVar173[0xd] = auVar172[0xd] & bVar148;
          bVar149 = (byte)((uint)auVar125._12_4_ >> 0x10);
          auVar173[0xe] = auVar172[0xe] & bVar149;
          bVar150 = (byte)((uint)auVar125._12_4_ >> 0x18);
          auVar173[0xf] = auVar172[0xf] & bVar150;
          fVar183 = (float)((ulong)auVar171._0_8_ >> 0x20);
          fVar188 = auVar171._8_4_;
          fVar189 = auVar173._12_4_;
          fVar86 = (float)CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53))) -
                   fVar86 * fVar182;
          uVar53 = SUB41(fVar86,0);
          uVar54 = (undefined1)((uint)fVar86 >> 8);
          uVar55 = (undefined1)((uint)fVar86 >> 0x10);
          uVar56 = (undefined1)((uint)fVar86 >> 0x18);
          fVar86 = (float)CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57))) -
                   fVar175 * fVar183;
          uVar57 = SUB41(fVar86,0);
          uVar58 = (undefined1)((uint)fVar86 >> 8);
          uVar59 = (undefined1)((uint)fVar86 >> 0x10);
          uVar60 = (undefined1)((uint)fVar86 >> 0x18);
          fVar86 = (float)CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) -
                   fVar176 * fVar188;
          uVar61 = SUB41(fVar86,0);
          uVar62 = (undefined1)((uint)fVar86 >> 8);
          uVar63 = (undefined1)((uint)fVar86 >> 0x10);
          uVar64 = (undefined1)((uint)fVar86 >> 0x18);
          fVar86 = (float)CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) -
                   fVar177 * fVar189;
          uVar65 = SUB41(fVar86,0);
          uVar66 = (undefined1)((uint)fVar86 >> 8);
          uVar67 = (undefined1)((uint)fVar86 >> 0x10);
          uVar68 = (undefined1)((uint)fVar86 >> 0x18);
          auVar172 = NEON_fmov(0x3f800000,4);
          fVar86 = (float)CONCAT13(bVar140 & auVar172[3],
                                   CONCAT12(bVar138 & auVar172[2],
                                            CONCAT11(bVar136 & auVar172[1],bVar115 & auVar172[0])));
          auVar118._0_8_ =
               CONCAT17(bVar144 & auVar172[7],
                        CONCAT16(bVar143 & auVar172[6],
                                 CONCAT15(bVar142 & auVar172[5],
                                          CONCAT14(bVar135 & auVar172[4],fVar86))));
          auVar118[8] = bVar137 & auVar172[8];
          auVar118[9] = bVar145 & auVar172[9];
          auVar118[10] = bVar146 & auVar172[10];
          auVar118[0xb] = bVar147 & auVar172[0xb];
          auVar126[0xc] = bVar139 & auVar172[0xc];
          auVar126._0_12_ = auVar118;
          auVar126[0xd] = bVar148 & auVar172[0xd];
          auVar126[0xe] = bVar149 & auVar172[0xe];
          auVar126[0xf] = bVar150 & auVar172[0xf];
          fVar79 = fVar79 - fVar174 * fVar182;
          fVar169 = fVar169 - fVar95 * fVar183;
          fVar170 = fVar170 - fVar96 * fVar188;
          fVar88 = fVar88 - fVar97 * fVar189;
          fVar69 = fVar69 - fVar89 * fVar182;
          fVar75 = fVar75 - fVar178 * fVar183;
          fVar76 = fVar76 - fVar179 * fVar188;
          fVar78 = fVar78 - fVar181 * fVar189;
          auVar94._0_4_ = auVar127._0_4_ + fVar86;
          auVar94._4_4_ = auVar127._4_4_ + (float)((ulong)auVar118._0_8_ >> 0x20);
          auVar94._8_4_ = auVar127._8_4_ + auVar118._8_4_;
          auVar94._12_4_ = auVar127._12_4_ + auVar126._12_4_;
        }
        puVar27 = puVar27 + 1;
        auVar127 = auVar94;
      } while (puVar27 != puVar3);
    }
    fVar174 = *(float *)puVar23;
    auVar153._4_4_ = fVar174;
    auVar153._0_4_ = fVar174;
    auVar153._8_4_ = fVar174;
    auVar153._12_4_ = fVar174;
    auVar80 = auVar153._4_12_;
    iVar116 = -(uint)(fVar174 < auVar94._0_4_);
    iVar9 = -(uint)(fVar174 < auVar94._4_4_);
    bVar98 = (byte)iVar9;
    bVar99 = (byte)((uint)iVar9 >> 8);
    bVar100 = (byte)((uint)iVar9 >> 0x10);
    bVar101 = (byte)((uint)iVar9 >> 0x18);
    iVar9 = -(uint)(fVar174 < auVar94._8_4_);
    bVar102 = (byte)iVar9;
    bVar103 = (byte)((uint)iVar9 >> 8);
    bVar104 = (byte)((uint)iVar9 >> 0x10);
    bVar105 = (byte)((uint)iVar9 >> 0x18);
    iVar9 = -(uint)(fVar174 < auVar94._12_4_);
    bVar107 = (byte)iVar9;
    bVar108 = (byte)((uint)iVar9 >> 8);
    bVar109 = (byte)((uint)iVar9 >> 0x10);
    bVar110 = (byte)((uint)iVar9 >> 0x18);
    auVar12[4] = bVar98;
    auVar12._0_4_ = iVar116;
    auVar12[5] = bVar99;
    auVar12[6] = bVar100;
    auVar12[7] = bVar101;
    auVar12[8] = bVar102;
    auVar12[9] = bVar103;
    auVar12[10] = bVar104;
    auVar12[0xb] = bVar105;
    auVar12[0xc] = bVar107;
    auVar12[0xd] = bVar108;
    auVar12[0xe] = bVar109;
    auVar12[0xf] = bVar110;
    auVar13[4] = bVar98;
    auVar13._0_4_ = iVar116;
    auVar13[5] = bVar99;
    auVar13[6] = bVar100;
    auVar13[7] = bVar101;
    auVar13[8] = bVar102;
    auVar13[9] = bVar103;
    auVar13[10] = bVar104;
    auVar13[0xb] = bVar105;
    auVar13[0xc] = bVar107;
    auVar13[0xd] = bVar108;
    auVar13[0xe] = bVar109;
    auVar13[0xf] = bVar110;
    auVar127 = NEON_ext(auVar12,auVar13,8,1);
    in_q16 = ZEXT116(auVar127[6]) << 0x38;
    if (CONCAT13(bVar107,CONCAT12(bVar102,CONCAT11(bVar98,(byte)iVar116))) != 0) {
      auVar172 = NEON_frecpe(auVar94,4);
      auVar127 = NEON_frecps(auVar94,auVar172,4);
      fVar89 = auVar172._0_4_ * auVar127._0_4_;
      fVar95 = auVar172._4_4_ * auVar127._4_4_;
      fVar96 = auVar172._8_4_ * auVar127._8_4_;
      fVar97 = auVar172._12_4_ * auVar127._12_4_;
      fVar86 = (float)((ulong)uVar49 >> 0x20);
      auVar134._12_4_ = (float)((ulong)uVar8 >> 0x20);
      if (0.0 < fVar48) {
        auVar127 = *pauVar37;
        auVar172 = pauVar37[1];
        uVar46 = *(undefined4 *)(pauVar37[2] + 0xc);
        fVar192 = fVar89 * 0.0;
        fVar193 = fVar95 * 0.0;
        fVar194 = fVar96 * 0.0;
        fVar195 = fVar97 * 0.0;
        fVar175 = (float)CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53))) *
                  (float)CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53))) +
                  fVar69 * fVar69 + fVar79 * fVar79;
        fVar176 = (float)CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57))) *
                  (float)CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57))) +
                  fVar75 * fVar75 + fVar169 * fVar169;
        fVar177 = (float)CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) *
                  (float)CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) +
                  fVar76 * fVar76 + fVar170 * fVar170;
        fVar178 = (float)CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) *
                  (float)CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) +
                  fVar78 * fVar78 + fVar88 * fVar88;
        auVar128._0_4_ = fVar175 + fVar174;
        auVar128._4_4_ = fVar176 + fVar174;
        auVar128._8_4_ = fVar177 + fVar174;
        auVar128._12_4_ = fVar178 + fVar174;
        auVar180 = NEON_frsqrte(auVar128,4);
        auVar129._0_4_ = auVar128._0_4_ * auVar180._0_4_;
        auVar129._4_4_ = auVar128._4_4_ * auVar180._4_4_;
        auVar129._8_4_ = auVar128._8_4_ * auVar180._8_4_;
        auVar129._12_4_ = auVar128._12_4_ * auVar180._12_4_;
        auVar130 = NEON_frsqrts(auVar129,auVar180,4);
        fVar179 = auVar180._0_4_ * auVar130._0_4_;
        fVar181 = auVar180._4_4_ * auVar130._4_4_;
        fVar182 = auVar180._8_4_ * auVar130._8_4_;
        fVar183 = auVar180._12_4_ * auVar130._12_4_;
        fVar196 = (fVar52 - auVar127._4_4_) - fVar192;
        fVar197 = (fVar39 - auVar172._4_4_) - fVar193;
        fVar198 = (fVar42 - *(float *)(pauVar37[2] + 4)) - fVar194;
        fVar199 = (fVar43 - *(float *)(pauVar37[3] + 4)) - fVar195;
        fVar188 = (fVar50 - auVar127._0_4_) - fVar192;
        fVar189 = (fVar86 - auVar172._0_4_) - fVar193;
        fVar190 = (fVar87 - *(float *)pauVar37[2]) - fVar194;
        fVar191 = (auVar134._12_4_ - *(float *)pauVar37[3]) - fVar195;
        fVar184 = (float)CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53))) * fVar179;
        fVar185 = (float)CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57))) * fVar181;
        fVar186 = (float)CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) * fVar182;
        fVar187 = (float)CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) * fVar183;
        fVar192 = (fVar51 - auVar127._8_4_) - fVar192;
        fVar193 = (fVar40 - auVar172._8_4_) - fVar193;
        fVar194 = (fVar44 - *(float *)(pauVar37[2] + 8)) - fVar194;
        fVar195 = (fVar45 - *(float *)(pauVar37[3] + 8)) - fVar195;
        fVar200 = fVar79 * fVar179 * fVar188 + fVar69 * fVar179 * fVar196 + fVar184 * fVar192;
        fVar201 = fVar169 * fVar181 * fVar189 + fVar75 * fVar181 * fVar197 + fVar185 * fVar193;
        fVar202 = fVar170 * fVar182 * fVar190 + fVar76 * fVar182 * fVar198 + fVar186 * fVar194;
        fVar203 = fVar88 * fVar183 * fVar191 + fVar78 * fVar183 * fVar199 + fVar187 * fVar195;
        fVar188 = fVar188 - fVar79 * fVar179 * fVar200;
        fVar189 = fVar189 - fVar169 * fVar181 * fVar201;
        fVar190 = fVar190 - fVar170 * fVar182 * fVar202;
        fVar191 = fVar191 - fVar88 * fVar183 * fVar203;
        fVar196 = fVar196 - fVar69 * fVar179 * fVar200;
        fVar197 = fVar197 - fVar75 * fVar181 * fVar201;
        fVar198 = fVar198 - fVar76 * fVar182 * fVar202;
        fVar199 = fVar199 - fVar78 * fVar183 * fVar203;
        fVar192 = fVar192 - fVar184 * fVar200;
        fVar193 = fVar193 - fVar185 * fVar201;
        fVar194 = fVar194 - fVar186 * fVar202;
        fVar195 = fVar195 - fVar187 * fVar203;
        auVar154._0_4_ = fVar174 + fVar192 * fVar192 + fVar188 * fVar188 + fVar196 * fVar196;
        auVar154._4_4_ = fVar174 + fVar193 * fVar193 + fVar189 * fVar189 + fVar197 * fVar197;
        auVar154._8_4_ = fVar174 + fVar194 * fVar194 + fVar190 * fVar190 + fVar198 * fVar198;
        auVar154._12_4_ = fVar174 + fVar195 * fVar195 + fVar191 * fVar191 + fVar199 * fVar199;
        auVar180 = NEON_frsqrte(auVar154,4);
        auVar155._0_4_ = auVar180._0_4_ * auVar154._0_4_;
        auVar155._4_4_ = auVar180._4_4_ * auVar154._4_4_;
        auVar155._8_4_ = auVar180._8_4_ * auVar154._8_4_;
        auVar155._12_4_ = auVar180._12_4_ * auVar154._12_4_;
        auVar130 = NEON_frsqrts(auVar155,auVar180,4);
        auVar156._0_4_ = -(fVar48 * fVar175 * fVar179 * auVar180._0_4_ * auVar130._0_4_);
        auVar156._4_4_ = -(fVar48 * fVar176 * fVar181 * auVar180._4_4_ * auVar130._4_4_);
        auVar156._8_4_ = -(fVar48 * fVar177 * fVar182 * auVar180._8_4_ * auVar130._8_4_);
        auVar156._12_4_ = -(fVar48 * fVar178 * fVar183 * auVar180._12_4_ * auVar130._12_4_);
        uVar41 = *(undefined4 *)puVar22;
        auVar17._4_4_ = uVar41;
        auVar17._0_4_ = uVar41;
        auVar17._8_4_ = uVar41;
        auVar17._12_4_ = uVar41;
        auVar130 = NEON_fmax(auVar156,auVar17,4);
        bVar111 = auVar130[0] & (byte)iVar116;
        bVar112 = auVar130[1] & (byte)((uint)iVar116 >> 8);
        bVar113 = auVar130[2] & (byte)((uint)iVar116 >> 0x10);
        bVar114 = auVar130[3] & (byte)((uint)iVar116 >> 0x18);
        bVar98 = auVar130[4] & bVar98;
        bVar99 = auVar130[5] & bVar99;
        bVar100 = auVar130[6] & bVar100;
        bVar101 = auVar130[7] & bVar101;
        bVar102 = auVar130[8] & bVar102;
        bVar103 = auVar130[9] & bVar103;
        bVar104 = auVar130[10] & bVar104;
        bVar105 = auVar130[0xb] & bVar105;
        bVar107 = auVar130[0xc] & bVar107;
        bVar108 = auVar130[0xd] & bVar108;
        bVar109 = auVar130[0xe] & bVar109;
        bVar110 = auVar130[0xf] & bVar110;
        fVar204 = auVar127._0_4_ -
                  fVar188 * (float)CONCAT13(bVar114,CONCAT12(bVar113,CONCAT11(bVar112,bVar111)));
        register0x00005224 =
             auVar172._0_4_ -
             fVar189 * (float)CONCAT13(bVar101,CONCAT12(bVar100,CONCAT11(bVar99,bVar98)));
        register0x00005228 =
             *(float *)pauVar37[2] -
             fVar190 * (float)CONCAT13(bVar105,CONCAT12(bVar104,CONCAT11(bVar103,bVar102)));
        register0x0000522c =
             *(float *)pauVar37[3] -
             fVar191 * (float)CONCAT13(bVar110,CONCAT12(bVar109,CONCAT11(bVar108,bVar107)));
        fVar174 = auVar127._8_4_ -
                  fVar192 * (float)CONCAT13(bVar114,CONCAT12(bVar113,CONCAT11(bVar112,bVar111)));
        fVar175 = auVar172._8_4_ -
                  fVar193 * (float)CONCAT13(bVar101,CONCAT12(bVar100,CONCAT11(bVar99,bVar98)));
        uVar106 = (undefined1)((uint)fVar175 >> 0x18);
        fVar176 = *(float *)(pauVar37[2] + 8) -
                  fVar194 * (float)CONCAT13(bVar105,CONCAT12(bVar104,CONCAT11(bVar103,bVar102)));
        fVar177 = *(float *)(pauVar37[3] + 8) -
                  fVar195 * (float)CONCAT13(bVar110,CONCAT12(bVar109,CONCAT11(bVar108,bVar107)));
        fVar178 = auVar127._4_4_ -
                  fVar196 * (float)CONCAT13(bVar114,CONCAT12(bVar113,CONCAT11(bVar112,bVar111)));
        fVar179 = auVar172._4_4_ -
                  fVar197 * (float)CONCAT13(bVar101,CONCAT12(bVar100,CONCAT11(bVar99,bVar98)));
        fVar181 = *(float *)(pauVar37[2] + 4) -
                  fVar198 * (float)CONCAT13(bVar105,CONCAT12(bVar104,CONCAT11(bVar103,bVar102)));
        fVar182 = *(float *)(pauVar37[3] + 4) -
                  fVar199 * (float)CONCAT13(bVar110,CONCAT12(bVar109,CONCAT11(bVar108,bVar107)));
        uVar20 = CONCAT14((char)((uint)fVar176 >> 0x18),
                          CONCAT13((char)((uint)fVar176 >> 0x10),
                                   CONCAT12((char)((uint)fVar176 >> 8),
                                            CONCAT11(SUB41(fVar176,0),uVar106))));
        uVar41 = (undefined4)((uint5)uVar20 >> 8);
        uVar47 = (undefined4)
                 (CONCAT18((char)((uint)fVar177 >> 0x18),
                           CONCAT17((char)((uint)fVar177 >> 0x10),
                                    CONCAT16((char)((uint)fVar177 >> 8),
                                             CONCAT15(SUB41(fVar177,0),uVar20)))) >> 0x28);
        auVar157._4_12_ = fVar204._4_12_;
        auVar157._0_4_ = fVar204;
        auVar159._0_8_ = auVar157._0_8_;
        auVar159._8_4_ = fVar174;
        auVar159._12_4_ = register0x0000522c;
        auVar158._8_8_ = auVar159._8_8_;
        auVar158._0_8_ = CONCAT44(fVar178,fVar204);
        auVar160._0_12_ = auVar158._0_12_;
        auVar160._12_4_ =
             (int)(CONCAT17(auVar127[0xf],
                            CONCAT16(auVar127[0xe],
                                     CONCAT15(auVar127[0xd],CONCAT14(auVar127[0xc],fVar178)))) >>
                  0x20);
        auVar80 = auVar160._4_12_;
        auVar14._4_4_ = uVar41;
        auVar14._0_4_ = register0x00005228;
        auVar14._8_4_ = register0x0000522c;
        auVar14._12_4_ = uVar47;
        auVar15._4_4_ = uVar41;
        auVar15._0_4_ = register0x00005228;
        auVar15._8_4_ = register0x0000522c;
        auVar15._12_4_ = uVar47;
        auVar127 = NEON_ext(auVar14,auVar15,8,1);
        auVar18._4_4_ = uVar46;
        auVar18._0_4_ = fVar181;
        auVar18._8_4_ = fVar182;
        auVar18._12_4_ = *(undefined4 *)(pauVar37[3] + 0xc);
        auVar19._4_4_ = uVar46;
        auVar19._0_4_ = fVar181;
        auVar19._8_4_ = fVar182;
        auVar19._12_4_ = *(undefined4 *)(pauVar37[3] + 0xc);
        auVar130 = NEON_ext(auVar18,auVar19,8,1);
        *(long *)(*pauVar37 + 8) = auVar160._8_8_;
        *(undefined8 *)*pauVar37 = auVar158._0_8_;
        *(ulong *)(pauVar37[1] + 8) =
             CONCAT17(auVar172[0xf],
                      CONCAT16(auVar172[0xe],
                               CONCAT15(auVar172[0xd],
                                        CONCAT14(auVar172[0xc],
                                                 CONCAT13(uVar106,CONCAT12((char)((uint)fVar175 >>
                                                                                 0x10),
                                                                           (short)(CONCAT15((char)((
                                                  uint)fVar175 >> 8),
                                                  CONCAT14(SUB41(fVar175,0),fVar174)) >> 0x20)))))))
        ;
        *(ulong *)pauVar37[1] =
             CONCAT17((char)((uint)fVar179 >> 0x18),
                      CONCAT16((char)((uint)fVar179 >> 0x10),
                               CONCAT15((char)((uint)fVar179 >> 8),
                                        CONCAT14(SUB41(fVar179,0),register0x00005224))));
        *(ulong *)(pauVar37[2] + 8) = CONCAT44(uVar46,uVar41);
        *(ulong *)pauVar37[2] = CONCAT44(fVar181,register0x00005228);
        *(ulong *)(pauVar37[3] + 8) = CONCAT44(auVar130._4_4_,auVar127._4_4_);
        *(ulong *)pauVar37[3] = CONCAT44(auVar130._0_4_,auVar127._0_4_);
      }
      auVar131._8_8_ = uVar8;
      auVar131._0_8_ = uVar49;
      fVar86 = fVar169 * fVar95 + fVar86;
      fVar87 = fVar170 * fVar96 + fVar87;
      fVar51 = (float)CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53))) * fVar89 + fVar51;
      fVar40 = (float)CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57))) * fVar95 + fVar40;
      uVar53 = (undefined1)((uint)fVar40 >> 0x18);
      fVar44 = (float)CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar61))) * fVar96 + fVar44;
      fVar45 = (float)CONCAT13(uVar68,CONCAT12(uVar67,CONCAT11(uVar66,uVar65))) * fVar97 + fVar45;
      uVar20 = CONCAT14((char)((uint)fVar44 >> 0x18),
                        CONCAT13((char)((uint)fVar44 >> 0x10),
                                 CONCAT12((char)((uint)fVar44 >> 8),CONCAT11(SUB41(fVar44,0),uVar53)
                                         )));
      auVar132._4_12_ = auVar131._4_12_;
      auVar132._0_4_ = fVar87;
      auVar134._0_8_ = auVar132._0_8_;
      auVar134._8_4_ = fVar88 * fVar97 + auVar134._12_4_;
      uVar46 = (undefined4)((uint5)uVar20 >> 8);
      auVar133._8_8_ = auVar134._8_8_;
      auVar133._4_4_ = uVar46;
      auVar133._0_4_ = fVar87;
      in_q16._0_12_ = auVar133._0_12_;
      in_q16._12_4_ =
           (int)(CONCAT18((char)((uint)fVar45 >> 0x18),
                          CONCAT17((char)((uint)fVar45 >> 0x10),
                                   CONCAT16((char)((uint)fVar45 >> 8),
                                            CONCAT15(SUB41(fVar45,0),uVar20)))) >> 0x28);
      fVar52 = fVar69 * fVar89 + fVar52;
      fVar39 = fVar75 * fVar95 + fVar39;
      uVar54 = (undefined1)((uint)fVar39 >> 0x18);
      fVar42 = fVar76 * fVar96 + fVar42;
      fVar43 = fVar78 * fVar97 + fVar43;
      auVar71._8_4_ = uVar141;
      auVar71._4_4_ = auVar152._0_4_;
      auVar71._12_4_ = uVar165;
      uVar20 = CONCAT14((char)((uint)fVar42 >> 0x18),
                        CONCAT13((char)((uint)fVar42 >> 0x10),
                                 CONCAT12((char)((uint)fVar42 >> 8),CONCAT11(SUB41(fVar42,0),uVar54)
                                         )));
      uVar41 = (undefined4)((uint5)uVar20 >> 8);
      auVar161._4_12_ = auVar80;
      auVar161._0_4_ = uVar41;
      auVar163._12_4_ = auVar80._8_4_;
      auVar163._0_8_ = auVar161._0_8_;
      auVar163._8_4_ =
           (int)(CONCAT18((char)((uint)fVar43 >> 0x18),
                          CONCAT17((char)((uint)fVar43 >> 0x10),
                                   CONCAT16((char)((uint)fVar43 >> 8),
                                            CONCAT15(SUB41(fVar43,0),uVar20)))) >> 0x28);
      auVar162._8_8_ = auVar163._8_8_;
      auVar162._4_4_ = uVar141;
      auVar162._0_4_ = uVar41;
      auVar164._0_12_ = auVar162._0_12_;
      auVar164._12_4_ = uVar165;
      auVar71._0_4_ = fVar86;
      auVar73._0_8_ = auVar71._0_8_;
      auVar73._8_4_ =
           (int)(CONCAT17(uVar53,CONCAT16((char)((uint)fVar40 >> 0x10),
                                          CONCAT15((char)((uint)fVar40 >> 8),
                                                   CONCAT14(SUB41(fVar40,0),fVar51)))) >> 0x20);
      auVar73._12_4_ = uVar165;
      auVar72._8_8_ = auVar73._8_8_;
      auVar72._0_8_ =
           CONCAT44((int)(CONCAT17(uVar54,CONCAT16((char)((uint)fVar39 >> 0x10),
                                                   CONCAT15((char)((uint)fVar39 >> 8),
                                                            CONCAT14(SUB41(fVar39,0),fVar52)))) >>
                         0x20),fVar86);
      auVar74._0_12_ = auVar72._0_12_;
      auVar74._12_4_ = auVar152._0_4_;
      auVar127 = NEON_ext(in_q16,in_q16,8,1);
      auVar172 = NEON_ext(auVar164,auVar164,8,1);
      *(ulong *)((long)pVar33 + 8) =
           CONCAT17(auVar123[3],
                    CONCAT16(auVar123[2],CONCAT15(auVar123[1],CONCAT14(auVar123[0],fVar51))));
      *(ulong *)pVar33 =
           CONCAT17((char)((uint)fVar52 >> 0x18),
                    CONCAT16((char)((uint)fVar52 >> 0x10),
                             CONCAT15((char)((uint)fVar52 >> 8),
                                      CONCAT14(SUB41(fVar52,0),fVar79 * fVar89 + fVar50))));
      *(long *)((long)pVar33 + 0x18) = auVar74._8_8_;
      *(undefined8 *)(pVar33 + 1) = auVar72._0_8_;
      *(ulong *)((long)pVar33 + 0x28) = CONCAT44(uVar141,uVar46);
      *(ulong *)(pVar33 + 2) = CONCAT44(uVar41,fVar87);
      *(ulong *)((long)pVar33 + 0x38) = CONCAT44(auVar172._4_4_,auVar127._4_4_);
      *(ulong *)(pVar33 + 3) = CONCAT44(auVar172._0_4_,auVar127._0_4_);
    }
    pVar33 = pVar33 + 4;
    if (pVar1 <= pVar33) goto LAB_0014842c;
    piVar25 = *(int **)(param_1 + 0x1c0);
    pauVar37 = pauVar37 + 4;
  } while( true );
}


