/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001691f0; name: FUN_001691f0
 */


void FUN_001691f0(undefined8 *param_1,char *param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  ushort uVar5;
  float *pfVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  ulong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  undefined8 *puVar28;
  ulong uVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  ulong uVar32;
  undefined1 (*pauVar33) [12];
  undefined4 *puVar34;
  undefined1 (*pauVar35) [12];
  undefined4 *puVar36;
  undefined1 (*pauVar37) [12];
  undefined8 *puVar38;
  ulong uVar39;
  float *pfVar40;
  undefined1 (*pauVar41) [12];
  undefined8 *puVar42;
  undefined8 *puVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined4 uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined1 auVar62 [16];
  undefined1 auVar66 [16];
  undefined1 auVar65 [16];
  undefined1 auVar64 [16];
  undefined1 auVar63 [16];
  undefined1 auVar70 [16];
  undefined1 auVar74 [16];
  undefined1 auVar73 [16];
  undefined1 auVar72 [16];
  undefined1 auVar71 [16];
  float fVar84;
  float fVar86;
  undefined1 in_q6 [16];
  undefined1 auVar75 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar77 [16];
  undefined1 auVar76 [16];
  float fVar85;
  float fVar87;
  float fVar88;
  undefined1 auVar83 [16];
  undefined1 auVar82 [16];
  undefined1 auVar81 [16];
  undefined1 auVar80 [16];
  float fVar97;
  float fVar98;
  undefined1 in_q7 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar90 [16];
  undefined1 auVar89 [16];
  float fVar99;
  undefined1 auVar96 [16];
  undefined1 auVar95 [16];
  undefined1 auVar94 [16];
  undefined1 auVar93 [16];
  undefined1 auVar100 [16];
  float fVar101;
  float fVar109;
  float fVar110;
  undefined1 auVar104 [16];
  undefined1 auVar103 [16];
  undefined1 auVar102 [16];
  float fVar111;
  undefined1 auVar108 [16];
  undefined1 auVar107 [16];
  undefined1 auVar106 [16];
  undefined1 auVar105 [16];
  undefined1 auVar115 [16];
  undefined1 auVar114 [16];
  undefined1 auVar113 [16];
  undefined1 auVar112 [16];
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  undefined8 uVar124;
  float fVar125;
  undefined8 uVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  undefined8 uVar130;
  undefined8 uVar131;
  undefined8 uVar132;
  undefined8 uVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar138;
  undefined8 uVar137;
  float fVar139;
  float fVar141;
  undefined8 uVar140;
  float fVar142;
  float fVar144;
  undefined8 uVar143;
  float fVar145;
  float fVar146;
  float fVar148;
  undefined8 uVar147;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  float fVar153;
  float fVar154;
  float fVar155;
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar162;
  float fVar163;
  float fVar164;
  byte bVar168;
  byte bVar169;
  int iVar165;
  byte bVar170;
  byte bVar172;
  byte bVar173;
  int iVar171;
  byte bVar174;
  byte bVar176;
  byte bVar177;
  int iVar175;
  byte bVar178;
  byte bVar180;
  byte bVar181;
  int iVar179;
  byte bVar182;
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  float fVar183;
  float fVar184;
  float fVar185;
  float fVar186;
  
  pauVar37 = (undefined1 (*) [12])*param_1;
  pauVar33 = (undefined1 (*) [12])param_1[6];
  puVar36 = (undefined4 *)param_1[0xc];
  puVar34 = (undefined4 *)param_1[0x12];
  puVar30 = (undefined8 *)param_1[4];
  uVar5 = *(ushort *)((long)param_1 + 0x1e);
  pauVar35 = (undefined1 (*) [12])(pauVar37[1] + 4);
  uVar50 = (undefined4)((ulong)*(undefined8 *)(*pauVar37 + 8) >> 0x20);
  uVar55 = (undefined4)((ulong)*(undefined8 *)pauVar37[2] >> 0x20);
  uVar11 = *(undefined8 *)(*pauVar33 + 8);
  fVar53 = *(float *)(pauVar33[1] + 4);
  fVar48 = *(float *)(pauVar33[1] + 8);
  fVar58 = *(float *)pauVar33[2];
  uVar19 = *(undefined4 *)(pauVar33[2] + 4);
  fVar68 = (float)puVar36[1];
  uVar20 = puVar36[3];
  uVar44 = SUB124(*pauVar37,0);
  fVar61 = SUB124(*pauVar37,4);
  auVar62 = *(undefined1 (*) [16])(puVar36 + 4);
  fVar69 = (float)puVar34[1];
  uVar21 = puVar34[3];
  uVar45 = SUB124(*pauVar33,0);
  auVar75._4_12_ = in_q6._4_12_;
  auVar75._0_4_ = uVar45;
  fVar67 = SUB124(*pauVar33,4);
  auVar70._12_4_ = in_q6._12_4_;
  auVar70._0_8_ = auVar75._0_8_;
  auVar70._8_4_ = fVar67;
  auVar157._8_8_ = auVar70._8_8_;
  auVar157._4_4_ = *puVar34;
  auVar157._0_4_ = uVar45;
  auVar100._0_12_ = auVar157._0_12_;
  auVar100._12_4_ = fVar69;
  auVar70 = *(undefined1 (*) [16])(puVar34 + 4);
  auVar76._4_12_ = auVar100._4_12_;
  auVar76._0_4_ = uVar44;
  auVar78._0_8_ = auVar76._0_8_;
  auVar78._8_4_ = *puVar36;
  auVar78._12_4_ = fVar69;
  auVar77._8_8_ = auVar78._8_8_;
  auVar77._4_4_ = uVar45;
  auVar77._0_4_ = uVar44;
  auVar79._0_12_ = auVar77._0_12_;
  auVar79._12_4_ = (float)*puVar34;
  auVar89._4_12_ = in_q7._4_12_;
  auVar89._0_4_ = SUB124(*pauVar37,8);
  auVar91._12_4_ = in_q7._12_4_;
  auVar91._0_8_ = auVar89._0_8_;
  auVar91._8_4_ = puVar36[2];
  auVar90._8_8_ = auVar91._8_8_;
  auVar90._4_4_ = SUB124(*pauVar33,8);
  auVar90._0_4_ = SUB124(*pauVar37,8);
  auVar92._0_12_ = auVar90._0_12_;
  auVar92._12_4_ = (float)puVar34[2];
  fVar52 = SUB124(*pauVar35,0);
  fVar47 = SUB124(*pauVar35,4);
  fVar54 = auVar62._0_4_;
  fVar49 = auVar62._4_4_;
  fVar57 = SUB124(*pauVar35,8);
  auVar102._4_12_ = auVar62._4_12_;
  auVar102._0_4_ = fVar57;
  auVar104._12_4_ = auVar62._12_4_;
  auVar104._0_8_ = auVar102._0_8_;
  auVar104._8_4_ = uVar55;
  fVar59 = auVar62._8_4_;
  auVar103._8_8_ = auVar104._8_8_;
  auVar103._4_4_ = fVar59;
  auVar103._0_4_ = fVar57;
  auVar62._0_12_ = auVar103._0_12_;
  auVar62._12_4_ = auVar104._12_4_;
  fVar56 = auVar70._0_4_;
  fVar51 = auVar70._4_4_;
  fVar60 = auVar70._8_4_;
  uVar44 = auVar70._12_4_;
  if ((ulong)uVar5 != 0) {
    auVar62 = *(undefined1 (*) [16])(puVar30 + 8);
    auVar70 = ZEXT816(0);
    puVar38 = puVar30 + 0x28;
    puVar31 = puVar30;
    do {
      bVar168 = *(byte *)((long)puVar31 + 1);
      uVar39 = (ulong)bVar168;
      puVar2 = puVar31 + 0x1a;
      bVar4 = *(byte *)((long)puVar31 + 2);
      uVar29 = (ulong)bVar4;
      fVar128 = (float)puVar31[0x13];
      fVar129 = (float)((ulong)puVar31[0x13] >> 0x20);
      fVar125 = (float)puVar31[0x12];
      fVar127 = (float)((ulong)puVar31[0x12] >> 0x20);
      puVar28 = puVar2 + uVar39 * 0x10;
      fVar122 = (float)puVar31[0x15];
      fVar123 = (float)((ulong)puVar31[0x15] >> 0x20);
      fVar120 = (float)puVar31[0x14];
      fVar121 = (float)((ulong)puVar31[0x14] >> 0x20);
      puVar3 = puVar28 + 0x12;
      if (bVar4 == 0) {
        puVar3 = puVar28;
      }
      fVar98 = (float)puVar31[0x10];
      fVar99 = (float)((ulong)puVar31[0x10] >> 0x20);
      fVar134 = (float)puVar31[0x11];
      fVar135 = (float)((ulong)puVar31[0x11] >> 0x20);
      uVar131 = 0;
      uVar133 = 0;
      fVar116 = (float)puVar31[0xc];
      fVar117 = (float)((ulong)puVar31[0xc] >> 0x20);
      fVar118 = (float)puVar31[0xd];
      fVar119 = (float)((ulong)puVar31[0xd] >> 0x20);
      fVar101 = auVar62._0_4_;
      fVar109 = auVar62._4_4_;
      fVar110 = auVar62._8_4_;
      fVar111 = auVar62._12_4_;
      fVar84 = auVar79._4_4_;
      fVar87 = auVar92._4_4_;
      fVar85 = auVar79._12_4_;
      fVar97 = auVar92._12_4_;
      fVar86 = auVar79._8_4_;
      fVar88 = auVar92._8_4_;
      uVar126 = uVar133;
      uVar130 = uVar133;
      if (uVar39 == 0) {
        uVar124 = uVar131;
        uVar132 = uVar131;
      }
      else {
        fVar136 = auVar92._0_4_ * fVar120 + auVar79._0_4_ * fVar98 + fVar61 * fVar125;
        fVar138 = fVar87 * fVar121 + fVar84 * fVar99 + fVar67 * fVar127;
        fVar139 = fVar88 * fVar122 + fVar86 * fVar134 + fVar68 * fVar128;
        fVar141 = fVar97 * fVar123 + fVar85 * fVar135 + fVar69 * fVar129;
        pauVar41 = (undefined1 (*) [12])(puVar31 + uVar39 * 2 + 0x26);
        uVar32 = uVar39;
        puVar43 = puVar2;
        uVar124 = 0;
        uVar132 = 0;
        puVar42 = puVar38;
        do {
          Hint_Prefetch(puVar42 + 8,0,0,0);
          Hint_Prefetch(puVar42 + 0x10,0,0,0);
          uVar32 = uVar32 - 1;
          Hint_Prefetch(puVar42 + 0x18,0,0,0);
          fVar152 = (float)*(undefined8 *)(pauVar41[-7] + 4);
          fVar153 = (float)((ulong)*(undefined8 *)(pauVar41[-7] + 4) >> 0x20);
          fVar154 = (float)*(undefined8 *)pauVar41[-6];
          fVar155 = (float)((ulong)*(undefined8 *)pauVar41[-6] >> 0x20);
          fVar146 = (float)*(undefined8 *)pauVar41[-8];
          fVar149 = (float)((ulong)*(undefined8 *)pauVar41[-8] >> 0x20);
          fVar150 = (float)*(undefined8 *)(pauVar41[-8] + 8);
          fVar151 = (float)((ulong)*(undefined8 *)(pauVar41[-8] + 8) >> 0x20);
          auVar100 = *(undefined1 (*) [16])(pauVar41[-6] + 8);
          auVar156._0_4_ =
               (float)*(undefined8 *)(pauVar41[-2] + 8) -
               *(float *)pauVar41[-4] *
               (fVar57 * auVar100._0_4_ + fVar47 * fVar152 + fVar136 + fVar52 * fVar146);
          auVar156._4_4_ =
               (float)((ulong)*(undefined8 *)(pauVar41[-2] + 8) >> 0x20) -
               *(float *)(pauVar41[-4] + 4) *
               (fVar58 * auVar100._4_4_ + fVar48 * fVar153 + fVar138 + fVar53 * fVar149);
          auVar156._8_4_ =
               (float)*(undefined8 *)(pauVar41[-1] + 4) -
               *(float *)(pauVar41[-4] + 8) *
               (fVar59 * auVar100._8_4_ + fVar49 * fVar154 + fVar139 + fVar54 * fVar150);
          auVar156._12_4_ =
               (float)((ulong)*(undefined8 *)(pauVar41[-1] + 4) >> 0x20) -
               *(float *)pauVar41[-3] *
               (fVar60 * auVar100._12_4_ + fVar51 * fVar155 + fVar141 + fVar56 * fVar151);
          fVar142 = (float)*puVar43;
          fVar144 = (float)((ulong)*puVar43 >> 0x20);
          fVar145 = (float)puVar43[1];
          fVar148 = (float)((ulong)puVar43[1] >> 0x20);
          auVar14._4_4_ = -fVar144;
          auVar14._0_4_ = -fVar142;
          auVar14._8_4_ = -fVar145;
          auVar14._12_4_ = -fVar148;
          auVar157 = NEON_fmax(auVar156,auVar14,4);
          auVar158._0_4_ = fVar142 + auVar157._0_4_;
          auVar158._4_4_ = fVar144 + auVar157._4_4_;
          auVar158._8_4_ = fVar145 + auVar157._8_4_;
          auVar158._12_4_ = fVar148 + auVar157._12_4_;
          auVar15._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar41 + 8) >> 0x20);
          auVar15._0_12_ = *pauVar41;
          auVar157 = NEON_fmin(auVar158,auVar15,4);
          fVar142 = auVar157._0_4_ - fVar142;
          fVar144 = auVar157._4_4_ - fVar144;
          fVar145 = auVar157._8_4_ - fVar145;
          fVar148 = auVar157._12_4_ - fVar148;
          fVar159 = fVar116 * fVar142;
          fVar160 = fVar117 * fVar144;
          fVar161 = fVar118 * fVar145;
          fVar163 = fVar119 * fVar148;
          uVar132 = CONCAT44((float)((ulong)uVar132 >> 0x20) + fVar144,(float)uVar132 + fVar142);
          uVar130 = CONCAT44((float)((ulong)uVar130 >> 0x20) + fVar148,(float)uVar130 + fVar145);
          uVar124 = CONCAT44((float)((ulong)uVar124 >> 0x20) + auVar157._4_4_,
                             (float)uVar124 + auVar157._0_4_);
          uVar126 = CONCAT44((float)((ulong)uVar126 >> 0x20) + auVar157._12_4_,
                             (float)uVar126 + auVar157._8_4_);
          puVar43[1] = auVar157._8_8_;
          *puVar43 = auVar157._0_8_;
          fVar136 = fVar136 + fVar101 * fVar142;
          fVar138 = fVar138 + fVar109 * fVar144;
          fVar139 = fVar139 + fVar110 * fVar145;
          fVar141 = fVar141 + fVar111 * fVar148;
          fVar52 = fVar52 + fVar146 * fVar159;
          fVar53 = fVar53 + fVar149 * fVar160;
          fVar54 = fVar54 + fVar150 * fVar161;
          fVar56 = fVar56 + fVar151 * fVar163;
          fVar47 = fVar47 + fVar152 * fVar159;
          fVar48 = fVar48 + fVar153 * fVar160;
          fVar49 = fVar49 + fVar154 * fVar161;
          fVar51 = fVar51 + fVar155 * fVar163;
          fVar57 = fVar57 + auVar100._0_4_ * fVar159;
          fVar58 = fVar58 + auVar100._4_4_ * fVar160;
          fVar59 = fVar59 + auVar100._8_4_ * fVar161;
          fVar60 = fVar60 + auVar100._12_4_ * fVar163;
          pauVar41 = (undefined1 (*) [12])(pauVar41[9] + 4);
          puVar43 = puVar43 + 2;
          puVar42 = puVar42 + 0x18;
        } while (uVar32 != 0);
        puVar38 = puVar38 + (ulong)(bVar168 - 1) * 0x18 + 0x18;
      }
      fVar136 = fVar101 * (float)uVar132;
      fVar138 = fVar109 * (float)((ulong)uVar132 >> 0x20);
      fVar139 = fVar110 * (float)uVar130;
      fVar141 = fVar111 * (float)((ulong)uVar130 >> 0x20);
      auVar79._0_4_ = auVar79._0_4_ + fVar98 * fVar136;
      auVar79._4_4_ = fVar84 + fVar99 * fVar138;
      auVar79._8_4_ = fVar86 + fVar134 * fVar139;
      auVar79._12_4_ = fVar85 + fVar135 * fVar141;
      fVar61 = fVar61 + fVar125 * fVar136;
      fVar67 = fVar67 + fVar127 * fVar138;
      fVar68 = fVar68 + fVar128 * fVar139;
      fVar69 = fVar69 + fVar129 * fVar141;
      auVar92._0_4_ = auVar92._0_4_ + fVar120 * fVar136;
      auVar92._4_4_ = fVar87 + fVar121 * fVar138;
      auVar92._8_4_ = fVar88 + fVar122 * fVar139;
      auVar92._12_4_ = fVar97 + fVar123 * fVar141;
      if ((bVar4 != 0) && (*param_2 != '\0')) {
        uVar132 = puVar31[5];
        uVar130 = puVar31[4];
        fVar120 = (float)uVar124 * (float)puVar31[6];
        fVar125 = (float)((ulong)uVar124 >> 0x20);
        fVar121 = fVar125 * (float)((ulong)puVar31[6] >> 0x20);
        fVar122 = (float)uVar126 * (float)puVar31[7];
        fVar127 = (float)((ulong)uVar126 >> 0x20);
        fVar123 = fVar127 * (float)((ulong)puVar31[7] >> 0x20);
        if (param_2[1] != '\0') {
          Hint_Prefetch(puVar2[uVar39 * 0x10 + 2],0,0,0);
          Hint_Prefetch(puVar2[uVar39 * 0x10 + 3],0,0,0);
          Hint_Prefetch(puVar2[uVar39 * 0x10 + 4],0,0,0);
          Hint_Prefetch(puVar2[uVar39 * 0x10 + 5],0,0,0);
        }
        uVar32 = 0;
        pfVar40 = (float *)(puVar3 + uVar29 * 2 + 4);
        puVar42 = puVar3;
        puVar31 = puVar38;
        do {
          uVar18 = uVar32 & 1;
          Hint_Prefetch(puVar31 + 8,0,0,0);
          Hint_Prefetch(puVar31 + 0x10,0,0,0);
          Hint_Prefetch(puVar31 + 0x18,0,0,0);
          uVar32 = uVar32 + 1;
          uVar140 = (puVar2 + uVar39 * 0x10 + uVar18 * 2 + 6)[1];
          uVar137 = puVar2[uVar39 * 0x10 + uVar18 * 2 + 6];
          uVar147 = (puVar2 + uVar39 * 0x10 + uVar18 * 2 + 10)[1];
          uVar143 = puVar2[uVar39 * 0x10 + uVar18 * 2 + 10];
          fVar128 = pfVar40[-4];
          fVar129 = pfVar40[-3];
          fVar84 = pfVar40[-2];
          fVar86 = pfVar40[-1];
          fVar154 = (float)*(undefined8 *)(pfVar40 + -8);
          fVar155 = (float)((ulong)*(undefined8 *)(pfVar40 + -8) >> 0x20);
          fVar159 = (float)*(undefined8 *)(pfVar40 + -6);
          fVar160 = (float)((ulong)*(undefined8 *)(pfVar40 + -6) >> 0x20);
          fVar139 = (float)uVar137;
          fVar85 = auVar79._4_4_;
          fVar141 = (float)((ulong)uVar137 >> 0x20);
          fVar87 = auVar79._8_4_;
          fVar142 = (float)uVar140;
          fVar88 = auVar79._12_4_;
          fVar144 = (float)((ulong)uVar140 >> 0x20);
          fVar145 = (float)uVar143;
          fVar148 = (float)((ulong)uVar143 >> 0x20);
          fVar146 = (float)uVar147;
          fVar149 = (float)((ulong)uVar147 >> 0x20);
          uVar140 = (puVar28 + uVar18 * 2 + 0xe)[1];
          uVar137 = puVar28[uVar18 * 2 + 0xe];
          fVar183 = *pfVar40;
          fVar184 = pfVar40[1];
          fVar185 = pfVar40[2];
          fVar186 = pfVar40[3];
          pfVar6 = pfVar40 + 4;
          pfVar22 = pfVar40 + 5;
          pfVar23 = pfVar40 + 6;
          pfVar24 = pfVar40 + 7;
          fVar134 = (float)*puVar42;
          fVar135 = (float)((ulong)*puVar42 >> 0x20);
          fVar136 = (float)puVar42[1];
          fVar138 = (float)((ulong)puVar42[1] >> 0x20);
          fVar150 = (float)uVar137;
          fVar97 = auVar92._4_4_;
          fVar151 = (float)((ulong)uVar137 >> 0x20);
          fVar98 = auVar92._8_4_;
          fVar152 = (float)uVar140;
          fVar99 = auVar92._12_4_;
          fVar153 = (float)((ulong)uVar140 >> 0x20);
          pfVar1 = pfVar40 + 8;
          pfVar25 = pfVar40 + 9;
          pfVar26 = pfVar40 + 10;
          pfVar27 = pfVar40 + 0xb;
          pfVar40 = pfVar40 + 0x18;
          fVar161 = (fVar134 - *pfVar6) -
                    *pfVar1 * (auVar92._0_4_ * fVar150 + auVar79._0_4_ * fVar139 + fVar61 * fVar145
                              + fVar57 * fVar183 + fVar52 * fVar154 + fVar47 * fVar128);
          fVar163 = (fVar135 - *pfVar22) -
                    *pfVar25 *
                    (fVar97 * fVar151 + fVar85 * fVar141 + fVar67 * fVar148 +
                    fVar58 * fVar184 + fVar53 * fVar155 + fVar48 * fVar129);
          fVar162 = (fVar136 - *pfVar23) -
                    *pfVar26 *
                    (fVar98 * fVar152 + fVar87 * fVar142 + fVar68 * fVar146 +
                    fVar59 * fVar185 + fVar54 * fVar159 + fVar49 * fVar84);
          fVar164 = (fVar138 - *pfVar24) -
                    *pfVar27 *
                    (fVar99 * fVar153 + fVar88 * fVar144 + fVar69 * fVar149 +
                    fVar60 * fVar186 + fVar56 * fVar160 + fVar51 * fVar86);
          auVar13._4_4_ = -fVar121;
          auVar13._0_4_ = -fVar120;
          auVar13._8_4_ = -fVar122;
          auVar13._12_4_ = -fVar123;
          auVar16._4_4_ = fVar163;
          auVar16._0_4_ = fVar161;
          auVar16._8_4_ = fVar162;
          auVar16._12_4_ = fVar164;
          auVar100 = NEON_fmax(auVar13,auVar16,4);
          iVar165 = -(uint)((float)uVar124 * (float)uVar130 < ABS(fVar161));
          iVar171 = -(uint)(fVar125 * (float)((ulong)uVar130 >> 0x20) < ABS(fVar163));
          iVar175 = -(uint)((float)uVar126 * (float)uVar132 < ABS(fVar162));
          iVar179 = -(uint)(fVar127 * (float)((ulong)uVar132 >> 0x20) < ABS(fVar164));
          bVar168 = (byte)((uint)iVar165 >> 8);
          bVar169 = (byte)((uint)iVar165 >> 0x10);
          bVar170 = (byte)((uint)iVar165 >> 0x18);
          bVar172 = (byte)((uint)iVar171 >> 8);
          bVar173 = (byte)((uint)iVar171 >> 0x10);
          bVar174 = (byte)((uint)iVar171 >> 0x18);
          bVar176 = (byte)((uint)iVar175 >> 8);
          bVar177 = (byte)((uint)iVar175 >> 0x10);
          bVar178 = (byte)((uint)iVar175 >> 0x18);
          bVar180 = (byte)((uint)iVar179 >> 8);
          bVar181 = (byte)((uint)iVar179 >> 0x10);
          bVar182 = (byte)((uint)iVar179 >> 0x18);
          auVar12._4_4_ = fVar121;
          auVar12._0_4_ = fVar120;
          auVar12._8_4_ = fVar122;
          auVar12._12_4_ = fVar123;
          auVar100 = NEON_fmin(auVar12,auVar100,4);
          uVar131 = CONCAT17(bVar174 | (byte)((ulong)uVar131 >> 0x38) & ~bVar174,
                             CONCAT16(bVar173 | (byte)((ulong)uVar131 >> 0x30) & ~bVar173,
                                      CONCAT15(bVar172 | (byte)((ulong)uVar131 >> 0x28) & ~bVar172,
                                               CONCAT14((byte)iVar171 |
                                                        (byte)((ulong)uVar131 >> 0x20) &
                                                        ~(byte)iVar171,
                                                        CONCAT13(bVar170 | (byte)((ulong)uVar131 >>
                                                                                 0x18) & ~bVar170,
                                                                 CONCAT12(bVar169 | (byte)((ulong)
                                                  uVar131 >> 0x10) & ~bVar169,
                                                  CONCAT11(bVar168 | (byte)((ulong)uVar131 >> 8) &
                                                                     ~bVar168,
                                                           (byte)iVar165 |
                                                           (byte)uVar131 & ~(byte)iVar165)))))));
          uVar133 = CONCAT17(bVar182 | (byte)((ulong)uVar133 >> 0x38) & ~bVar182,
                             CONCAT16(bVar181 | (byte)((ulong)uVar133 >> 0x30) & ~bVar181,
                                      CONCAT15(bVar180 | (byte)((ulong)uVar133 >> 0x28) & ~bVar180,
                                               CONCAT14((byte)iVar179 |
                                                        (byte)((ulong)uVar133 >> 0x20) &
                                                        ~(byte)iVar179,
                                                        CONCAT13(bVar178 | (byte)((ulong)uVar133 >>
                                                                                 0x18) & ~bVar178,
                                                                 CONCAT12(bVar177 | (byte)((ulong)
                                                  uVar133 >> 0x10) & ~bVar177,
                                                  CONCAT11(bVar176 | (byte)((ulong)uVar133 >> 8) &
                                                                     ~bVar176,
                                                           (byte)iVar175 |
                                                           (byte)uVar133 & ~(byte)iVar175)))))));
          auVar166._8_8_ = uVar133;
          auVar166._0_8_ = uVar131;
          auVar17._4_4_ = fVar163;
          auVar17._0_4_ = fVar161;
          auVar17._8_4_ = fVar162;
          auVar17._12_4_ = fVar164;
          auVar167._4_4_ = fVar163;
          auVar167._0_4_ = fVar161;
          auVar167._8_4_ = fVar162;
          auVar167._12_4_ = fVar164;
          auVar167 = auVar167 ^ (auVar17 ^ auVar100) & auVar166;
          fVar134 = auVar167._0_4_ - fVar134;
          fVar135 = auVar167._4_4_ - fVar135;
          fVar136 = auVar167._8_4_ - fVar136;
          fVar138 = auVar167._12_4_ - fVar138;
          puVar42[1] = auVar167._8_8_;
          *puVar42 = auVar167._0_8_;
          fVar161 = fVar101 * fVar134;
          fVar163 = fVar109 * fVar135;
          fVar162 = fVar110 * fVar136;
          fVar164 = fVar111 * fVar138;
          fVar134 = fVar116 * fVar134;
          fVar135 = fVar117 * fVar135;
          fVar136 = fVar118 * fVar136;
          fVar138 = fVar119 * fVar138;
          auVar79._0_4_ = auVar79._0_4_ + fVar139 * fVar161;
          auVar79._4_4_ = fVar85 + fVar141 * fVar163;
          auVar79._8_4_ = fVar87 + fVar142 * fVar162;
          auVar79._12_4_ = fVar88 + fVar144 * fVar164;
          fVar52 = fVar52 + fVar154 * fVar134;
          fVar53 = fVar53 + fVar155 * fVar135;
          fVar54 = fVar54 + fVar159 * fVar136;
          fVar56 = fVar56 + fVar160 * fVar138;
          fVar61 = fVar61 + fVar145 * fVar161;
          fVar67 = fVar67 + fVar148 * fVar163;
          fVar68 = fVar68 + fVar146 * fVar162;
          fVar69 = fVar69 + fVar149 * fVar164;
          fVar47 = fVar47 + fVar128 * fVar134;
          fVar48 = fVar48 + fVar129 * fVar135;
          fVar49 = fVar49 + fVar84 * fVar136;
          fVar51 = fVar51 + fVar86 * fVar138;
          auVar92._0_4_ = auVar92._0_4_ + fVar150 * fVar161;
          auVar92._4_4_ = fVar97 + fVar151 * fVar163;
          auVar92._8_4_ = fVar98 + fVar152 * fVar162;
          auVar92._12_4_ = fVar99 + fVar153 * fVar164;
          fVar57 = fVar57 + fVar183 * fVar134;
          fVar58 = fVar58 + fVar184 * fVar135;
          fVar59 = fVar59 + fVar185 * fVar136;
          fVar60 = fVar60 + fVar186 * fVar138;
          puVar42 = puVar42 + 2;
          puVar31 = puVar31 + 0x18;
        } while (uVar29 != uVar32);
        puVar38 = puVar38 + (ulong)(bVar4 - 1) * 0x18 + 0x18;
        puVar28[1] = uVar133;
        *puVar28 = uVar131;
      }
      puVar31 = puVar3 + uVar29 * 0xe;
    } while (puVar3 + uVar29 * 0xe < puVar30 + (ulong)uVar5 * 2);
  }
  uVar45 = auVar79._0_4_;
  auVar105._4_12_ = auVar62._4_12_;
  auVar105._0_4_ = uVar45;
  auVar107._12_4_ = auVar62._12_4_;
  auVar107._0_8_ = auVar105._0_8_;
  auVar107._8_4_ = auVar79._4_4_;
  auVar106._8_8_ = auVar107._8_8_;
  auVar106._4_4_ = auVar92._0_4_;
  auVar106._0_4_ = uVar45;
  auVar108._0_12_ = auVar106._0_12_;
  auVar108._12_4_ = auVar92._4_4_;
  uVar46 = auVar79._8_4_;
  auVar80._4_12_ = auVar79._4_12_;
  auVar80._0_4_ = uVar46;
  auVar82._0_8_ = auVar80._0_8_;
  auVar82._8_4_ = auVar79._12_4_;
  auVar82._12_4_ = auVar79._12_4_;
  auVar81._8_8_ = auVar82._8_8_;
  auVar81._4_4_ = auVar92._8_4_;
  auVar81._0_4_ = uVar46;
  auVar83._0_12_ = auVar81._0_12_;
  auVar83._12_4_ = auVar92._12_4_;
  auVar112._4_12_ = auVar70._4_12_;
  auVar112._0_4_ = fVar61;
  auVar114._12_4_ = auVar70._12_4_;
  auVar114._0_8_ = auVar112._0_8_;
  auVar114._8_4_ = fVar67;
  auVar113._8_8_ = auVar114._8_8_;
  auVar113._4_4_ = uVar50;
  auVar113._0_4_ = fVar61;
  auVar115._0_12_ = auVar113._0_12_;
  auVar115._12_4_ = (int)((ulong)uVar11 >> 0x20);
  auVar93._4_12_ = auVar92._4_12_;
  auVar93._0_4_ = fVar68;
  auVar95._0_8_ = auVar93._0_8_;
  auVar95._8_4_ = fVar69;
  auVar95._12_4_ = auVar92._12_4_;
  auVar94._8_8_ = auVar95._8_8_;
  auVar94._4_4_ = uVar20;
  auVar94._0_4_ = fVar68;
  auVar96._0_12_ = auVar94._0_12_;
  auVar96._12_4_ = uVar21;
  auVar62 = NEON_ext(auVar108,auVar108,8,1);
  auVar70 = NEON_ext(auVar115,auVar115,8,1);
  *(undefined4 *)*pauVar37 = uVar45;
  *(float *)(*pauVar37 + 4) = fVar61;
  *(int *)(*pauVar37 + 8) = auVar92._0_4_;
  *(undefined4 *)pauVar37[1] = uVar50;
  *(int *)*pauVar33 = auVar62._0_4_;
  *(int *)(*pauVar33 + 4) = auVar70._0_4_;
  *(int *)(*pauVar33 + 8) = auVar62._4_4_;
  *(int *)pauVar33[1] = auVar70._4_4_;
  auVar63._4_12_ = auVar62._4_12_;
  auVar63._0_4_ = fVar52;
  auVar65._12_4_ = auVar62._12_4_;
  auVar65._0_8_ = auVar63._0_8_;
  auVar65._8_4_ = fVar53;
  auVar64._8_8_ = auVar65._8_8_;
  auVar64._4_4_ = fVar57;
  auVar64._0_4_ = fVar52;
  auVar66._0_12_ = auVar64._0_12_;
  auVar66._12_4_ = fVar58;
  auVar62 = NEON_ext(auVar83,auVar83,8,1);
  auVar100 = NEON_ext(auVar96,auVar96,8,1);
  *puVar36 = uVar46;
  puVar36[1] = fVar68;
  puVar36[2] = auVar92._8_4_;
  puVar36[3] = uVar20;
  *puVar34 = auVar62._0_4_;
  puVar34[1] = auVar100._0_4_;
  puVar34[2] = auVar62._4_4_;
  puVar34[3] = auVar100._4_4_;
  auVar71._4_12_ = auVar70._4_12_;
  auVar71._0_4_ = fVar47;
  auVar73._12_4_ = auVar70._12_4_;
  auVar73._0_8_ = auVar71._0_8_;
  auVar73._8_4_ = fVar48;
  auVar72._8_8_ = auVar73._8_8_;
  auVar72._4_4_ = uVar55;
  auVar72._0_4_ = fVar47;
  auVar74._0_12_ = auVar72._0_12_;
  auVar74._12_4_ = uVar19;
  auVar100 = NEON_ext(auVar66,auVar66,8,1);
  auVar157 = NEON_ext(auVar74,auVar74,8,1);
  *(float *)*pauVar35 = fVar52;
  *(float *)(pauVar37[1] + 8) = fVar47;
  *(float *)pauVar37[2] = fVar57;
  *(undefined4 *)(pauVar37[2] + 4) = uVar55;
  auVar7._4_4_ = fVar59;
  auVar7._0_4_ = fVar54;
  auVar7._8_4_ = fVar56;
  auVar7._12_4_ = fVar60;
  auVar8._4_4_ = fVar59;
  auVar8._0_4_ = fVar54;
  auVar8._8_4_ = fVar56;
  auVar8._12_4_ = fVar60;
  auVar62 = NEON_ext(auVar7,auVar8,8,1);
  auVar9._4_4_ = auVar104._12_4_;
  auVar9._0_4_ = fVar49;
  auVar9._8_4_ = fVar51;
  auVar9._12_4_ = uVar44;
  auVar10._4_4_ = auVar104._12_4_;
  auVar10._0_4_ = fVar49;
  auVar10._8_4_ = fVar51;
  auVar10._12_4_ = uVar44;
  auVar70 = NEON_ext(auVar9,auVar10,8,1);
  *(float *)(pauVar33[1] + 4) = auVar100._0_4_;
  *(int *)(pauVar33[1] + 8) = auVar157._0_4_;
  *(int *)pauVar33[2] = auVar100._4_4_;
  *(int *)(pauVar33[2] + 4) = auVar157._4_4_;
  *(float *)*(undefined1 (*) [16])(puVar36 + 4) = fVar54;
  puVar36[5] = fVar49;
  puVar36[6] = fVar59;
  puVar36[7] = auVar104._12_4_;
  *(int *)*(undefined1 (*) [16])(puVar34 + 4) = auVar62._0_4_;
  puVar34[5] = auVar70._0_4_;
  puVar34[6] = auVar62._4_4_;
  puVar34[7] = auVar70._4_4_;
  return;
}


