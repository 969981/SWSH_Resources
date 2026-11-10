/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00207fc0; name: FUN_00207fc0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00207fc0(long *param_1,long param_2,long *param_3,long *param_4)

{
  uint uVar1;
  float *pfVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  byte bVar13;
  char cVar14;
  byte bVar15;
  ushort uVar16;
  short sVar17;
  uint uVar18;
  uint uVar19;
  float *pfVar20;
  undefined8 uVar21;
  long *plVar22;
  long lVar23;
  int iVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  float *pfVar28;
  ulong uVar29;
  undefined4 *puVar30;
  ulong uVar31;
  uint uVar32;
  float *pfVar33;
  short *psVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  undefined4 *puVar37;
  undefined8 *puVar38;
  undefined8 uVar39;
  undefined4 *puVar40;
  undefined4 *puVar41;
  uint uVar42;
  uint uVar43;
  long lVar44;
  ulong uVar45;
  undefined8 *puVar46;
  ulong uVar47;
  uint uVar48;
  int iVar49;
  uint uVar50;
  byte *pbVar51;
  long lVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  uint local_23c;
  undefined4 *local_218;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float fStack_1ec;
  float local_1e8;
  float local_1e4;
  float fStack_1e0;
  float local_1dc;
  float local_1d8;
  float fStack_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float fStack_1c4;
  float local_1c0;
  float local_1b8;
  float fStack_1b4;
  float local_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float local_1a0;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float fStack_184;
  float local_180;
  float local_17c;
  float local_178;
  undefined4 *local_170;
  uint local_168;
  uint local_164;
  undefined8 local_160;
  undefined1 local_158;
  undefined8 local_150;
  float local_148;
  float local_144;
  float fStack_140;
  float local_13c;
  undefined8 local_138;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  undefined8 local_110;
  undefined8 local_108;
  float local_100;
  float fStack_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  
  fVar53 = (float)(**(code **)(*param_3 + 0x268))(param_3,0);
  if (fVar53 == 0.0) {
    return;
  }
  uVar16 = *(ushort *)(param_1 + 1);
  if (((ulong)uVar16 == 1) || (param_1 = (long *)*param_1, uVar16 == 0)) {
    local_23c = 0;
    cVar14 = (char)param_3[0x485];
  }
  else {
    fVar54 = (float)(**(code **)(*param_3 + 0x268))(param_3,0xf);
    local_23c = (uint)(fVar54 != 0.0);
    cVar14 = (char)param_3[0x485];
  }
  if (cVar14 < '\0') {
    pfVar20 = (float *)((long)param_3 + 0x22e4);
  }
  else {
    pfVar20 = (float *)FUN_003e9410(param_3 + 4);
  }
  fVar54 = (float)(**(code **)(*param_3 + 0x268))(param_3,0xc);
  fVar55 = (float)(**(code **)(*param_3 + 0x268))(param_3,0xd);
  fVar56 = (float)(**(code **)(*param_3 + 0x268))(param_3,0x11);
  fVar57 = (float)(**(code **)(*param_3 + 0x268))(param_3,0x10);
  fVar65 = *pfVar20;
  fVar58 = pfVar20[3];
  fVar59 = (float)(**(code **)(*param_3 + 0x268))(param_3,0xe);
  (**(code **)(*param_4 + 0xa8))(&local_1b8,param_4);
  if (uVar16 != 0) {
    fVar59 = fVar53 * fVar59;
    fVar53 = fVar53 * fVar57;
    uVar47 = 0;
    local_200 = DAT_01d4c6a4;
    local_1fc = DAT_01d4c150;
    local_1f8 = DAT_01d4c6a4;
    local_1f4 = DAT_01d4c150;
    fVar64 = DAT_01d4c6a4;
    fVar63 = DAT_01d4c150;
    do {
      lVar25 = *(long *)((long)param_1 + uVar47 * 8);
      uVar43 = *(uint *)(lVar25 + 0x38);
      pfVar33 = *(float **)(lVar25 + 0x40);
      pfVar28 = (float *)(lVar25 + 0x70);
      if ((uVar43 & 4) != 0) {
        pfVar28 = pfVar33;
      }
      fVar66 = pfVar28[5] + pfVar28[5];
      fVar61 = pfVar28[4] + pfVar28[4];
      fVar68 = pfVar28[6] + pfVar28[6];
      fVar78 = fStack_1ac * fStack_1ac + -0.5;
      fVar69 = fVar61 * local_1b8 + fVar66 * fStack_1b4 + fVar68 * local_1b0;
      fVar71 = *pfVar28;
      fVar74 = pfVar28[1];
      local_1c8 = local_1a8 +
                  local_1b8 * fVar69 +
                  fVar61 * fVar78 + fStack_1ac * (fVar68 * fStack_1b4 - fVar66 * local_1b0);
      fStack_1c4 = fStack_1a4 +
                   fStack_1b4 * fVar69 +
                   fVar66 * fVar78 + fStack_1ac * (fVar61 * local_1b0 - fVar68 * local_1b8);
      fVar62 = pfVar28[2];
      fVar67 = pfVar28[3];
      local_1c0 = local_1a0 +
                  fVar68 * fVar78 + fStack_1ac * (fVar66 * local_1b8 - fVar61 * fStack_1b4) +
                  local_1b0 * fVar69;
      local_1d8 = (fStack_1ac * fVar71 + local_1b8 * fVar67 + fStack_1b4 * fVar62) -
                  local_1b0 * fVar74;
      fStack_1d4 = (local_1b0 * fVar71 + fStack_1b4 * fVar67 + fStack_1ac * fVar74) -
                   local_1b8 * fVar62;
      local_1d0 = (local_1b8 * fVar74 + local_1b0 * fVar67 + fStack_1ac * fVar62) -
                  fStack_1b4 * fVar71;
      local_1cc = ((fStack_1ac * fVar67 - local_1b8 * fVar71) - fStack_1b4 * fVar74) -
                  local_1b0 * fVar62;
      pfVar28 = (float *)(lVar25 + 0x98);
      if ((uVar43 & 1) != 0) {
        pfVar28 = pfVar33 + 0xe;
      }
      pfVar2 = (float *)(lVar25 + 0x90);
      if ((uVar43 & 0x40) != 0) {
        pfVar2 = pfVar33 + 0xd;
      }
      bVar13 = *(byte *)pfVar2;
      if ((local_23c | ((fVar56 != 0.0 || (fVar55 != 0.0 || fVar57 != 0.0)) && fVar65 <= fVar58) |
          (uint)(fVar54 != 0.0) & (bVar13 & 8) >> 3) != 1) {
        local_1e4 = -8.5070587e+37;
        fStack_1e0 = -8.5070587e+37;
        local_1f0 = 8.5070587e+37;
        fStack_1ec = 8.5070587e+37;
        local_1e8 = 8.5070587e+37;
        local_1dc = -8.5070587e+37;
        if ((bVar13 >> 3 & 1) != 0) goto LAB_002084d4;
        goto switchD_00208650_default;
      }
      FUN_002938e0(0,0x3f800000,&local_1f0,pfVar28,&local_1d8,0,*PTR_DAT_02710c00 == '\0');
      if ((bVar13 >> 3 & 1) == 0) goto switchD_00208650_default;
LAB_002084d4:
      if (fVar54 != 0.0) {
        uVar21 = FUN_00218580(param_2,0xffffff00);
        local_e0 = 0x3f800000;
        local_d8 = 0;
        local_d0 = 0x3f80000000000000;
        local_c8 = 0;
        local_c0 = 0;
        local_b8 = 0x3f800000;
        local_b0 = 0;
        local_a8 = 0x3f80000000000000;
        uVar21 = FUN_00218590(uVar21,&local_e0);
        local_150 = CONCAT44(fStack_1ec,local_1f0);
        local_148 = local_1e8;
        local_144 = local_1e4;
        local_13c = local_1dc;
        fStack_140 = fStack_1e0;
        local_138 = CONCAT71(local_138._1_7_,1);
        FUN_00218ad0(uVar21,&local_150);
      }
      if (fVar59 != 0.0) {
        fVar66 = fStack_1d4 + fStack_1d4;
        fVar62 = local_1d8 + local_1d8;
        fVar68 = local_1d0 * (local_1d0 + local_1d0);
        fVar67 = (local_1d0 + local_1d0) * local_1cc;
        fVar61 = 1.0 - local_1d8 * fVar62;
        local_b0 = CONCAT44(fStack_1c4,local_1c8);
        local_d0 = CONCAT44(fVar61 - fVar68,fVar62 * fStack_1d4 - fVar67);
        local_e0 = CONCAT44(fVar62 * fStack_1d4 + fVar67,(1.0 - fStack_1d4 * fVar66) - fVar68);
        local_d8 = (ulong)(uint)(fVar62 * local_1d0 - fVar66 * local_1cc);
        local_c8 = (ulong)(uint)(fVar66 * local_1d0 + fVar62 * local_1cc);
        local_b8 = (ulong)(uint)(fVar61 - fStack_1d4 * fVar66);
        local_a8 = CONCAT44(0x3f800000,local_1c0);
        local_c0 = CONCAT44(fVar66 * local_1d0 - fVar62 * local_1cc,
                            fVar62 * local_1d0 + fVar66 * local_1cc);
        uVar21 = FUN_00218590(param_2,&local_e0);
        local_150 = CONCAT44(fVar59,fVar59);
        local_144 = 1.9009948e-38;
        fStack_140 = 7.42576e-41;
        local_13c = 2.90069e-43;
        local_148 = fVar59;
        FUN_002190d0(uVar21,&local_150);
      }
      if ((fVar56 == 0.0 && (fVar55 == 0.0 && fVar57 == 0.0)) ||
         ((fVar65 <= fVar58 &&
          (((((pfVar20[3] < local_1f0 || (local_1e4 < *pfVar20)) || (pfVar20[4] < fStack_1ec)) ||
            ((fStack_1e0 < pfVar20[1] || (pfVar20[5] < local_1e8)))) || (local_1dc < pfVar20[2])))))
         ) goto switchD_00208650_default;
      if (fVar55 == 0.0) {
        if (*pfVar28 == 7.00649e-45) goto switchD_00208650_caseD_5;
        goto switchD_00208650_default;
      }
      switch(*pfVar28) {
      case 0.0:
        FUN_00218580(param_2,0xffff00ff);
        uVar21 = FUN_00218620(param_2,&local_1d8);
        local_e0 = CONCAT44(pfVar28[1],100);
        FUN_002191b0(uVar21,&local_e0);
        fVar66 = local_1d8 + local_1d8;
        fVar67 = fStack_1d4 + fStack_1d4;
        fVar68 = local_1d0 * (local_1d0 + local_1d0);
        fVar62 = (local_1d0 + local_1d0) * local_1cc;
        fVar61 = 1.0 - local_1d8 * fVar66;
        local_c0._0_4_ = fVar66 * fStack_1d4 - fVar62;
        local_c0._4_4_ = fVar61 - fVar68;
        local_b0 = CONCAT44(fStack_1c4,local_1c8);
        local_e0 = CONCAT44(fVar66 * fStack_1d4 + fVar62,(1.0 - fStack_1d4 * fVar67) - fVar68);
        local_a8 = CONCAT44(0x3f800000,local_1c0);
        local_d8 = (ulong)(uint)(fVar66 * local_1d0 - fVar67 * local_1cc);
        local_b8 = (ulong)(uint)(fVar67 * local_1d0 + fVar66 * local_1cc);
        local_d0 = CONCAT44(-(fVar67 * local_1d0 - fVar66 * local_1cc),
                            -(fVar66 * local_1d0 + fVar67 * local_1cc));
        local_c8 = CONCAT44(0x80000000,-(fVar61 - fStack_1d4 * fVar67));
        uVar21 = FUN_00218590(param_2,&local_e0);
        local_150 = CONCAT44(pfVar28[1],100);
        FUN_002191b0(uVar21,&local_150);
        fVar61 = -(float)local_c0;
        fVar62 = -local_c0._4_4_;
        local_c0 = local_e0;
        uVar26 = local_d8;
        local_e0 = CONCAT44(fVar62,fVar61);
        local_d8 = CONCAT44(-local_b8._4_4_,-(float)local_b8);
        local_b8 = uVar26;
        uVar21 = FUN_00218590(param_2,&local_e0);
        local_150 = CONCAT44(pfVar28[1],100);
        FUN_002191b0(uVar21,&local_150);
        break;
      case 1.4013e-45:
        fVar67 = local_1d8 + local_1d8;
        fVar66 = fStack_1d4 + fStack_1d4;
        fVar68 = local_1d0 * (local_1d0 + local_1d0);
        fVar62 = (local_1d0 + local_1d0) * local_1cc;
        fVar61 = 1.0 - local_1d8 * fVar67;
        local_d0 = CONCAT44(-(fVar66 * local_1d0 - fVar67 * local_1cc),
                            -(fVar67 * local_1d0 + fVar66 * local_1cc));
        local_b0 = CONCAT44(fStack_1c4,local_1c8);
        local_a8 = CONCAT44(0x3f800000,local_1c0);
        local_c8 = CONCAT44(0x80000000,-(fVar61 - fStack_1d4 * fVar66));
        local_e0 = CONCAT44(-(fVar61 - fVar68),-(fVar67 * fStack_1d4 - fVar62));
        local_c0 = CONCAT44(fVar67 * fStack_1d4 + fVar62,(1.0 - fStack_1d4 * fVar66) - fVar68);
        local_b8 = (ulong)(uint)(fVar67 * local_1d0 - fVar66 * local_1cc);
        local_d8 = CONCAT44(0x80000000,-(fVar66 * local_1d0 + fVar67 * local_1cc));
        uVar21 = FUN_00218590(param_2,&local_e0);
        FUN_00218580(uVar21,0xffff00ff);
        local_150 = 0x4080000000000064;
        FUN_002191b0(param_2,&local_150);
        local_150 = 0x4180000000000064;
        FUN_002191b0(param_2,&local_150);
        local_150 = 0x4210000000000064;
        FUN_002191b0(param_2,&local_150);
        local_150 = 0x4280000000000064;
        FUN_002191b0(param_2,&local_150);
        local_150 = 0x42c8000000000064;
        FUN_002191b0(param_2,&local_150);
        local_150 = 0x4310000000000064;
        FUN_002191b0(param_2,&local_150);
        local_150 = 0x4344000000000064;
        FUN_002191b0(param_2,&local_150);
        local_150 = 0x4380000000000064;
        FUN_002191b0(param_2,&local_150);
        local_150 = 0x43a2000000000064;
        FUN_002191b0(param_2,&local_150);
        break;
      case 2.8026e-45:
        FUN_00218580(param_2,0xffff00ff);
        fVar66 = fStack_1d4 + fStack_1d4;
        fVar62 = local_1d8 + local_1d8;
        fVar68 = local_1d0 * (local_1d0 + local_1d0);
        fVar67 = (local_1d0 + local_1d0) * local_1cc;
        fVar61 = 1.0 - local_1d8 * fVar62;
        local_b0 = CONCAT44(fStack_1c4,local_1c8);
        local_a8 = CONCAT44(0x3f800000,local_1c0);
        local_d0 = CONCAT44(fVar61 - fVar68,fVar62 * fStack_1d4 - fVar67);
        local_e0 = CONCAT44(fVar62 * fStack_1d4 + fVar67,(1.0 - fStack_1d4 * fVar66) - fVar68);
        local_d8 = (ulong)(uint)(fVar62 * local_1d0 - fVar66 * local_1cc);
        local_c8 = (ulong)(uint)(fVar66 * local_1d0 + fVar62 * local_1cc);
        local_b8 = (ulong)(uint)(fVar61 - fStack_1d4 * fVar66);
        local_c0 = CONCAT44(fVar66 * local_1d0 - fVar62 * local_1cc,
                            fVar62 * local_1d0 + fVar66 * local_1cc);
        FUN_00219280(pfVar28[1],pfVar28[2],param_2,&local_e0);
        break;
      case 4.2039e-45:
        FUN_00218580(param_2,0xffff00ff);
        uVar21 = FUN_00218620(param_2,&local_1d8);
        local_d0 = *(undefined8 *)(pfVar28 + 2);
        local_e0 = CONCAT44(-pfVar28[2],-pfVar28[1]);
        local_d8 = CONCAT44(pfVar28[1],-pfVar28[3]);
        local_c8 = CONCAT71(local_c8._1_7_,1);
        FUN_00218ad0(uVar21,&local_e0);
        break;
      case 5.60519e-45:
        fVar76 = pfVar28[3];
        fVar66 = pfVar28[4];
        fVar61 = local_1d8 + local_1d8;
        fVar78 = fVar66 + fVar66;
        fVar62 = fStack_1d4 + fStack_1d4;
        fVar84 = pfVar28[5];
        fVar75 = pfVar28[6];
        fVar72 = pfVar28[1];
        fVar79 = pfVar28[2];
        fVar60 = local_1d0 * (local_1d0 + local_1d0);
        fVar87 = fVar84 + fVar84;
        fVar81 = pfVar28[7];
        fVar69 = (local_1d0 + local_1d0) * local_1cc;
        fVar70 = 1.0 - fVar66 * fVar78;
        fVar80 = fVar75 * (fVar75 + fVar75);
        fVar77 = (fVar75 + fVar75) * fVar81;
        fVar74 = 1.0 - local_1d8 * fVar61;
        fVar82 = fVar61 * local_1d0 - fVar62 * local_1cc;
        fVar66 = fVar61 * fStack_1d4 + fVar69;
        fVar69 = fVar61 * fStack_1d4 - fVar69;
        fVar67 = fVar62 * local_1d0 + fVar61 * local_1cc;
        fVar71 = fVar61 * local_1d0 + fVar62 * local_1cc;
        fVar68 = fVar62 * local_1d0 - fVar61 * local_1cc;
        fVar88 = fVar78 * fVar75 - fVar87 * fVar81;
        fVar93 = fVar78 * fVar75 + fVar87 * fVar81;
        fVar86 = fVar78 * fVar84 + fVar77;
        fVar77 = fVar78 * fVar84 - fVar77;
        fVar85 = (1.0 - fStack_1d4 * fVar62) - fVar60;
        fVar73 = fVar87 * fVar75 - fVar78 * fVar81;
        fVar91 = fVar87 * fVar75 + fVar78 * fVar81;
        fVar60 = fVar74 - fVar60;
        fVar74 = fVar74 - fStack_1d4 * fVar62;
        fVar61 = fVar70 - fVar80;
        fVar80 = (1.0 - fVar84 * fVar87) - fVar80;
        fVar83 = fVar72 * fVar93;
        fVar90 = fVar73 * fVar79;
        fVar70 = fVar70 - fVar84 * fVar87;
        fVar92 = fVar86 * fVar79;
        fVar79 = fVar61 * fVar79;
        fVar81 = fVar72 * fVar77;
        fVar72 = fVar72 * fVar80;
        fVar78 = fVar88 * fVar76;
        fVar62 = fVar91 * fVar76;
        fVar76 = fVar70 * fVar76;
        fVar75 = fVar80 * fVar72 + fVar86 * fVar92 + fVar88 * fVar78;
        fVar89 = fVar80 * fVar83 + fVar86 * fVar90 + fVar88 * fVar76;
        fVar80 = fVar80 * fVar81 + fVar86 * fVar79 + fVar88 * fVar62;
        fVar84 = fVar77 * fVar72 + fVar61 * fVar92 + fVar91 * fVar78;
        fVar87 = fVar77 * fVar81 + fVar61 * fVar79 + fVar91 * fVar62;
        fVar61 = fVar77 * fVar83 + fVar61 * fVar90 + fVar91 * fVar76;
        fVar72 = fVar93 * fVar72 + fVar73 * fVar92 + fVar70 * fVar78;
        lVar25 = *(long *)(pfVar28 + 8);
        lVar52 = *(long *)(lVar25 + 0x48);
        uVar26 = (ulong)*(byte *)(lVar25 + 0x47);
        bVar13 = *(byte *)(lVar25 + 0x46);
        sVar17 = *(short *)(lVar25 + 0x44);
        local_d8 = (ulong)(uint)(fVar74 * fVar89 + fVar82 * fVar75 + fVar67 * fVar80);
        local_e0 = CONCAT44(fVar68 * fVar89 + fVar66 * fVar75 + fVar60 * fVar80,
                            fVar71 * fVar89 + fVar85 * fVar75 + fVar69 * fVar80);
        fVar78 = fVar93 * fVar83 + fVar73 * fVar90 + fVar70 * fVar76;
        fVar62 = fVar93 * fVar81 + fVar73 * fVar79 + fVar70 * fVar62;
        local_c0 = CONCAT44(fVar68 * fVar78 + fVar66 * fVar72 + fVar60 * fVar62,
                            fVar71 * fVar78 + fVar85 * fVar72 + fVar69 * fVar62);
        local_b0 = CONCAT44(fStack_1c4,local_1c8);
        local_a8 = CONCAT44(0x3f800000,local_1c0);
        local_d0 = CONCAT44(fVar68 * fVar61 + fVar66 * fVar84 + fVar60 * fVar87,
                            fVar71 * fVar61 + fVar85 * fVar84 + fVar69 * fVar87);
        local_c8 = (ulong)(uint)(fVar74 * fVar61 + fVar82 * fVar84 + fVar67 * fVar87);
        local_b8 = (ulong)(uint)(fVar74 * fVar78 + fVar82 * fVar72 + fVar67 * fVar62);
        uVar21 = FUN_00218590(param_2,&local_e0);
        FUN_00218580(uVar21,0xffff00ff);
        if (uVar26 != 0) {
          lVar52 = lVar52 + uVar26 * 0x14;
          pbVar51 = (byte *)(lVar52 + (ulong)bVar13 * 0xf +
                            ((ulong)(uint)((int)sVar17 << 1) & 0xfffe));
          uVar45 = 0;
          if (sVar17 < 0) {
            pbVar51 = pbVar51 + ((long)sVar17 & 0x7fffU) * 4;
          }
          do {
            uVar31 = (ulong)*(byte *)(*(long *)(lVar25 + 0x48) + uVar45 * 0x14 + 0x12);
            pfVar28 = (float *)(lVar52 + (ulong)*pbVar51 * 0xc);
            fVar61 = *pfVar28;
            fVar62 = pfVar28[1];
            fVar68 = pfVar28[2];
            fVar67 = fVar61 * local_e0._4_4_ + fVar62 * local_d0._4_4_ + fVar68 * local_c0._4_4_ +
                     local_b0._4_4_;
            fVar66 = fVar61 * (float)local_e0 + fVar62 * (float)local_d0 + fVar68 * (float)local_c0
                     + (float)local_b0;
            fVar61 = fVar61 * (float)local_d8 + fVar62 * (float)local_c8 + fVar68 * (float)local_b8
                     + (float)local_a8;
            if (uVar31 < 2) {
              fVar62 = fVar66;
              fVar68 = fVar67;
              fVar69 = fVar61;
            }
            else {
              lVar44 = 0;
              fVar62 = fVar66;
              fVar68 = fVar67;
              fVar69 = fVar61;
              while( true ) {
                pfVar28 = (float *)(lVar52 + (ulong)pbVar51[lVar44 + 1] * 0xc);
                fVar61 = *pfVar28;
                fVar71 = pfVar28[1];
                fVar74 = pfVar28[2];
                lVar23 = *(long *)(param_2 + 0x68);
                uVar29 = (ulong)*(uint *)(lVar23 + 0x20);
                uVar42 = *(uint *)(lVar23 + 0x24) & 0x7fffffff;
                uVar43 = *(uint *)(lVar23 + 0x20) + 1;
                fVar66 = (float)local_b0 +
                         (float)local_e0 * fVar61 + (float)local_d0 * fVar71 +
                         (float)local_c0 * fVar74;
                fVar67 = local_b0._4_4_ +
                         local_e0._4_4_ * fVar61 + local_d0._4_4_ * fVar71 + local_c0._4_4_ * fVar74
                ;
                fVar61 = (float)local_a8 +
                         (float)local_d8 * fVar61 + (float)local_c8 * fVar71 +
                         (float)local_b8 * fVar74;
                if (uVar42 < uVar43) {
                  uVar19 = 2;
                  if (uVar42 != 0) {
                    uVar19 = *(uint *)(lVar23 + 0x24) << 1;
                  }
                  if (uVar19 <= uVar43) {
                    uVar19 = uVar43;
                  }
                  if (uVar42 < uVar19) {
                    FUN_001df120(lVar23 + 0x18);
                    uVar29 = (ulong)*(uint *)(lVar23 + 0x20);
                  }
                }
                pfVar28 = (float *)(*(long *)(lVar23 + 0x18) + uVar29 * 0x20);
                *(uint *)(lVar23 + 0x20) = uVar43;
                *pfVar28 = fVar62;
                pfVar28[1] = fVar68;
                pfVar28[2] = fVar69;
                pfVar28[4] = fVar66;
                pfVar28[5] = fVar67;
                pfVar28[6] = fVar61;
                fVar62 = *(float *)(param_2 + 4);
                pfVar28[7] = fVar62;
                pfVar28[3] = fVar62;
                if (uVar31 - 2 == lVar44) break;
                lVar44 = lVar44 + 1;
                fVar62 = fVar66;
                fVar68 = fVar67;
                fVar69 = fVar61;
              }
              pfVar28 = (float *)(lVar52 + (ulong)*pbVar51 * 0xc);
              fVar69 = *pfVar28;
              fVar71 = pfVar28[1];
              fVar74 = pfVar28[2];
              fVar62 = fVar69 * (float)local_e0 + fVar71 * (float)local_d0 +
                       fVar74 * (float)local_c0 + (float)local_b0;
              fVar68 = fVar69 * local_e0._4_4_ + fVar71 * local_d0._4_4_ + fVar74 * local_c0._4_4_ +
                       local_b0._4_4_;
              fVar69 = fVar69 * (float)local_d8 + fVar71 * (float)local_c8 +
                       fVar74 * (float)local_b8 + (float)local_a8;
            }
            lVar44 = *(long *)(param_2 + 0x68);
            uVar29 = (ulong)*(uint *)(lVar44 + 0x20);
            uVar42 = *(uint *)(lVar44 + 0x24) & 0x7fffffff;
            uVar43 = *(uint *)(lVar44 + 0x20) + 1;
            if (uVar42 < uVar43) {
              uVar19 = 2;
              if (uVar42 != 0) {
                uVar19 = *(uint *)(lVar44 + 0x24) << 1;
              }
              if (uVar19 <= uVar43) {
                uVar19 = uVar43;
              }
              if (uVar42 < uVar19) {
                FUN_001df120(lVar44 + 0x18);
                uVar29 = (ulong)*(uint *)(lVar44 + 0x20);
              }
            }
            pfVar28 = (float *)(*(long *)(lVar44 + 0x18) + uVar29 * 0x20);
            *(uint *)(lVar44 + 0x20) = uVar43;
            *pfVar28 = fVar66;
            pfVar28[1] = fVar67;
            pfVar28[2] = fVar61;
            pfVar28[4] = fVar62;
            pfVar28[5] = fVar68;
            pfVar28[6] = fVar69;
            fVar61 = *(float *)(param_2 + 4);
            pfVar28[7] = fVar61;
            pfVar28[3] = fVar61;
            uVar45 = uVar45 + 1;
            pbVar51 = pbVar51 + uVar31;
          } while (uVar45 != uVar26);
        }
        break;
      case 7.00649e-45:
switchD_00208650_caseD_5:
        fVar69 = fStack_1d4 + fStack_1d4;
        fVar62 = local_1d8 + local_1d8;
        lVar44 = *(long *)(pfVar28 + 10);
        local_e0 = 0x3f800000;
        local_d8 = 0;
        local_d0 = 0x3f80000000000000;
        local_c8 = 0;
        fVar72 = local_1d0 * (local_1d0 + local_1d0);
        local_c0 = 0;
        local_b8 = 0x3f800000;
        local_b0 = 0;
        local_a8 = 0x3f80000000000000;
        fVar76 = pfVar28[1];
        fVar66 = (local_1d0 + local_1d0) * local_1cc;
        fVar74 = pfVar28[4];
        fVar79 = pfVar28[5];
        fVar85 = pfVar28[6];
        fVar87 = pfVar28[7];
        fVar84 = fVar79 + fVar79;
        fVar82 = fVar74 + fVar74;
        fVar61 = fVar62 * local_1d0 - fVar69 * local_1cc;
        fVar68 = fVar62 * fStack_1d4 + fVar66;
        fVar66 = fVar62 * fStack_1d4 - fVar66;
        fVar78 = 1.0 - local_1d8 * fVar62;
        fVar67 = fVar69 * local_1d0 + fVar62 * local_1cc;
        fVar71 = fVar62 * local_1d0 + fVar69 * local_1cc;
        fVar62 = fVar69 * local_1d0 - fVar62 * local_1cc;
        fVar92 = fVar85 * (fVar85 + fVar85);
        fVar60 = fVar78 - fVar72;
        fVar72 = (1.0 - fStack_1d4 * fVar69) - fVar72;
        fVar78 = fVar78 - fStack_1d4 * fVar69;
        fVar86 = fVar82 * fVar85 - fVar84 * fVar87;
        fVar73 = 1.0 - fVar74 * fVar82;
        fVar75 = (fVar85 + fVar85) * fVar87;
        fVar88 = fVar82 * fVar79 - fVar75;
        fVar70 = (1.0 - fVar79 * fVar84) - fVar92;
        fVar92 = fVar73 - fVar92;
        fVar90 = pfVar28[2];
        fVar93 = pfVar28[3];
        fVar75 = fVar82 * fVar79 + fVar75;
        fVar80 = fVar84 * fVar85 - fVar82 * fVar87;
        fVar83 = fVar82 * fVar85 + fVar84 * fVar87;
        fVar89 = fVar84 * fVar85 + fVar82 * fVar87;
        fVar73 = fVar73 - fVar79 * fVar84;
        fVar85 = fVar76 * fVar88;
        fVar69 = fVar80 * fVar90;
        fVar74 = fVar76 * fVar70;
        fVar76 = fVar76 * fVar83;
        fVar94 = fVar75 * fVar90;
        fVar90 = fVar92 * fVar90;
        fVar91 = fVar73 * fVar93;
        fVar79 = fVar86 * fVar93;
        fVar93 = fVar89 * fVar93;
        fVar82 = fVar70 * fVar74 + fVar75 * fVar94 + fVar86 * fVar79;
        fVar87 = fVar70 * fVar85 + fVar75 * fVar90 + fVar86 * fVar93;
        fVar84 = fVar83 * fVar76 + fVar80 * fVar69 + fVar73 * fVar91;
        fVar77 = fVar88 * fVar74 + fVar92 * fVar94 + fVar89 * fVar79;
        fVar81 = fVar88 * fVar85 + fVar92 * fVar90 + fVar89 * fVar93;
        fVar79 = fVar83 * fVar74 + fVar80 * fVar94 + fVar73 * fVar79;
        fVar74 = fVar83 * fVar85 + fVar80 * fVar90 + fVar73 * fVar93;
        fVar70 = fVar70 * fVar76 + fVar75 * fVar69 + fVar86 * fVar91;
        fVar69 = fVar88 * fVar76 + fVar92 * fVar69 + fVar89 * fVar91;
        local_f8 = fVar71 * fVar84 + fVar72 * fVar79 + fVar66 * fVar74;
        local_f0 = fVar78 * fVar84 + fVar61 * fVar79 + fVar67 * fVar74;
        local_ec = local_1c8;
        local_100 = fVar62 * fVar69 + fVar68 * fVar77 + fVar60 * fVar81;
        fStack_fc = fVar78 * fVar69 + fVar61 * fVar77 + fVar67 * fVar81;
        local_e8 = fStack_1c4;
        local_110 = CONCAT44(fVar62 * fVar70 + fVar68 * fVar82 + fVar60 * fVar87,
                             fVar71 * fVar70 + fVar72 * fVar82 + fVar66 * fVar87);
        local_108 = CONCAT44(fVar71 * fVar69 + fVar72 * fVar77 + fVar66 * fVar81,
                             fVar78 * fVar70 + fVar61 * fVar82 + fVar67 * fVar87);
        local_f4 = fVar62 * fVar84 + fVar68 * fVar79 + fVar60 * fVar74;
        local_e4 = local_1c0;
        uVar43 = *(uint *)(lVar44 + 0x20);
        uVar26 = (ulong)uVar43;
        lVar25 = *(long *)(lVar44 + 0x28);
        lVar52 = *(long *)(lVar44 + 0x30);
        bVar13 = *(byte *)(lVar44 + 0x5c);
        if (fVar65 <= fVar58) {
          local_150 = 0x3f800000;
          local_148 = 0.0;
          local_144 = 0.0;
          fStack_140 = 1.0;
          local_13c = 0.0;
          local_138 = 0;
          local_12c = (pfVar20[3] + *pfVar20) * 0.5;
          local_128 = (pfVar20[4] + pfVar20[1]) * 0.5;
          local_124 = (pfVar20[5] + pfVar20[2]) * 0.5;
          local_120 = (pfVar20[3] - *pfVar20) * 0.5;
          local_11c = (pfVar20[4] - pfVar20[1]) * 0.5;
          local_118 = (pfVar20[5] - pfVar20[2]) * 0.5;
          local_130 = 1.0;
          if (uVar43 == 0) {
            local_218 = (undefined4 *)0x0;
          }
          else {
                    /* try { // try from 00208c78 to 00208c9f has its CatchHandler @ 0020a30c */
            plVar22 = (long *)FUN_00400d30();
            local_218 = (undefined4 *)
                        (**(code **)(*plVar22 + 0x10))
                                  (plVar22,uVar26 << 2,"NonTrackedAlloc",
                                   "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpShapeManager.cpp"
                                   ,0x1e2);
          }
          local_160 = 0;
          local_168 = 0;
          local_158 = 0;
                    /* try { // try from 002098f4 to 0020990b has its CatchHandler @ 0020a304 */
          local_170 = local_218;
          local_164 = uVar43;
          (*(code *)(&PTR_LAB_025e3830)[*(ushort *)(lVar44 + 8) - 3])
                    (&local_150,lVar44,&local_1d8,pfVar28 + 1,&local_170);
          uVar43 = local_168;
          uVar26 = (ulong)local_168;
          if (fVar55 != 0.0) {
                    /* try { // try from 00209918 to 0020992b has its CatchHandler @ 0020a308 */
            uVar21 = FUN_00218590(param_2,&local_e0);
            FUN_00218580(uVar21,0xffff00ff);
            lVar23 = *(long *)(param_2 + 0x68);
            uVar45 = (ulong)*(uint *)(lVar23 + 0x20);
            uVar19 = *(uint *)(lVar23 + 0x24) & 0x7fffffff;
            uVar42 = *(uint *)(lVar23 + 0x20) + uVar43 * 3;
            if (uVar19 < uVar42) {
              uVar18 = 2;
              if (uVar19 != 0) {
                uVar18 = *(uint *)(lVar23 + 0x24) << 1;
              }
              if (uVar18 <= uVar42) {
                uVar18 = uVar42;
              }
              if (uVar19 < uVar18) {
                    /* try { // try from 0020996c to 0020996f has its CatchHandler @ 0020a300 */
                FUN_001df120(lVar23 + 0x18);
                uVar45 = (ulong)*(uint *)(lVar23 + 0x20);
              }
            }
            *(uint *)(lVar23 + 0x20) = uVar42;
            if (uVar43 != 0) {
              pfVar28 = (float *)(*(long *)(lVar23 + 0x18) + uVar45 * 0x20);
              uVar45 = 0;
              do {
                    /* try { // try from 00209998 to 002099ab has its CatchHandler @ 0020a314 */
                FUN_0020a730(local_218[uVar45],&local_198,lVar25,lVar52,&local_110,bVar13 >> 1 & 1);
                uVar45 = uVar45 + 1;
                *pfVar28 = local_198;
                pfVar28[1] = local_194;
                pfVar28[2] = local_190;
                pfVar28[3] = -NAN;
                pfVar28[4] = local_18c;
                pfVar28[5] = local_188;
                pfVar28[6] = fStack_184;
                pfVar28[7] = -NAN;
                pfVar28[8] = local_18c;
                pfVar28[9] = local_188;
                pfVar28[10] = fStack_184;
                pfVar28[0xb] = -NAN;
                pfVar28[0xc] = local_180;
                pfVar28[0xd] = local_17c;
                pfVar28[0xe] = local_178;
                pfVar28[0xf] = -NAN;
                pfVar28[0x10] = local_180;
                pfVar28[0x11] = local_17c;
                pfVar28[0x12] = local_178;
                pfVar28[0x13] = -NAN;
                pfVar28[0x14] = local_198;
                pfVar28[0x15] = local_194;
                pfVar28[0x16] = local_190;
                pfVar28[0x17] = -NAN;
                pfVar28 = pfVar28 + 0x18;
              } while (uVar45 < uVar26);
            }
          }
        }
        else {
          if (fVar55 != 0.0) {
            uVar42 = *(uint *)(lVar44 + 0x1c);
            uVar45 = (ulong)uVar42;
            uVar21 = FUN_00218590(param_2,&local_e0);
            FUN_00218580(uVar21,0xffff00ff);
            if (uVar42 == 0) {
              lVar23 = 0;
            }
            else {
              plVar22 = (long *)FUN_00400d30();
              lVar23 = (**(code **)(*plVar22 + 0x10))
                                 (plVar22,uVar45 * 0xc,"NonTrackedAlloc",
                                  "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpShapeManager.cpp"
                                  ,0x200);
              lVar27 = 0;
              do {
                pfVar28 = (float *)(lVar25 + lVar27);
                uVar45 = uVar45 - 1;
                fVar61 = *pfVar28;
                fVar62 = pfVar28[1];
                fVar66 = pfVar28[2];
                pfVar28 = (float *)(lVar23 + lVar27);
                lVar27 = lVar27 + 0xc;
                *pfVar28 = fVar61 * (float)local_110 + fVar62 * local_108._4_4_ + fVar66 * local_f8
                           + local_ec;
                pfVar28[1] = fVar61 * local_110._4_4_ + fVar62 * local_100 + fVar66 * local_f4 +
                             local_e8;
                pfVar28[2] = fVar61 * (float)local_108 + fVar62 * fStack_fc + fVar66 * local_f0 +
                             local_e4;
              } while (uVar45 != 0);
            }
            lVar27 = *(long *)(param_2 + 0x68);
            uVar45 = (ulong)*(uint *)(lVar27 + 0x20);
            uVar19 = *(uint *)(lVar27 + 0x24) & 0x7fffffff;
            uVar42 = *(uint *)(lVar27 + 0x20) + uVar43 * 3;
            if (uVar19 < uVar42) {
              uVar18 = 2;
              if (uVar19 != 0) {
                uVar18 = *(uint *)(lVar27 + 0x24) << 1;
              }
              if (uVar18 <= uVar42) {
                uVar18 = uVar42;
              }
              if (uVar19 < uVar18) {
                FUN_001df120(lVar27 + 0x18);
                uVar45 = (ulong)*(uint *)(lVar27 + 0x20);
              }
            }
            *(uint *)(lVar27 + 0x20) = uVar42;
            if (uVar43 != 0) {
              puVar30 = (undefined4 *)(*(long *)(lVar27 + 0x18) + uVar45 * 0x20);
              uVar43 = 2;
              if ((bVar13 >> 1 & 1) == 0) {
                uVar45 = uVar26;
                do {
                  uVar45 = uVar45 - 1;
                  puVar37 = (undefined4 *)
                            (lVar23 + (ulong)*(uint *)(lVar52 + (ulong)uVar43 * 4) * 0xc);
                  puVar40 = (undefined4 *)
                            (lVar23 + (ulong)*(uint *)(lVar52 + (ulong)(uVar43 - 2) * 4) * 0xc);
                  puVar41 = (undefined4 *)
                            (lVar23 + (ulong)*(uint *)(lVar52 + (ulong)(uVar43 - 1) * 4) * 0xc);
                  uVar4 = *puVar37;
                  uVar7 = puVar37[1];
                  uVar10 = puVar37[2];
                  uVar5 = *puVar40;
                  uVar8 = puVar40[1];
                  uVar11 = puVar40[2];
                  uVar6 = *puVar41;
                  uVar9 = puVar41[1];
                  uVar12 = puVar41[2];
                  puVar30[0xc] = uVar4;
                  puVar30[0xd] = uVar7;
                  *puVar30 = uVar5;
                  puVar30[1] = uVar8;
                  puVar30[2] = uVar11;
                  puVar30[3] = 0xffff00ff;
                  puVar30[4] = uVar6;
                  puVar30[5] = uVar9;
                  puVar30[6] = uVar12;
                  puVar30[7] = 0xffff00ff;
                  puVar30[8] = uVar6;
                  puVar30[9] = uVar9;
                  puVar30[10] = uVar12;
                  puVar30[0xb] = 0xffff00ff;
                  puVar30[0xe] = uVar10;
                  puVar30[0xf] = 0xffff00ff;
                  puVar30[0x10] = uVar4;
                  puVar30[0x11] = uVar7;
                  puVar30[0x12] = uVar10;
                  puVar30[0x13] = 0xffff00ff;
                  puVar30[0x14] = uVar5;
                  puVar30[0x15] = uVar8;
                  uVar43 = uVar43 + 3;
                  puVar30[0x16] = uVar11;
                  puVar30[0x17] = 0xffff00ff;
                  puVar30 = puVar30 + 0x18;
                } while (uVar45 != 0);
              }
              else {
                uVar45 = uVar26;
                do {
                  uVar45 = uVar45 - 1;
                  puVar37 = (undefined4 *)
                            (lVar23 + (ulong)*(ushort *)(lVar52 + (ulong)uVar43 * 2) * 0xc);
                  puVar40 = (undefined4 *)
                            (lVar23 + (ulong)*(ushort *)(lVar52 + (ulong)(uVar43 - 2) * 2) * 0xc);
                  puVar41 = (undefined4 *)
                            (lVar23 + (ulong)*(ushort *)(lVar52 + (ulong)(uVar43 - 1) * 2) * 0xc);
                  uVar4 = *puVar37;
                  uVar7 = puVar37[1];
                  uVar10 = puVar37[2];
                  uVar5 = *puVar40;
                  uVar8 = puVar40[1];
                  uVar11 = puVar40[2];
                  uVar6 = *puVar41;
                  uVar9 = puVar41[1];
                  uVar12 = puVar41[2];
                  puVar30[0xc] = uVar4;
                  puVar30[0xd] = uVar7;
                  puVar30[0xe] = uVar10;
                  puVar30[0xf] = 0xffff00ff;
                  *puVar30 = uVar5;
                  puVar30[1] = uVar8;
                  puVar30[2] = uVar11;
                  puVar30[3] = 0xffff00ff;
                  puVar30[4] = uVar6;
                  puVar30[5] = uVar9;
                  puVar30[6] = uVar12;
                  puVar30[7] = 0xffff00ff;
                  puVar30[8] = uVar6;
                  puVar30[9] = uVar9;
                  puVar30[10] = uVar12;
                  puVar30[0xb] = 0xffff00ff;
                  puVar30[0x10] = uVar4;
                  puVar30[0x11] = uVar7;
                  puVar30[0x12] = uVar10;
                  puVar30[0x13] = 0xffff00ff;
                  puVar30[0x14] = uVar5;
                  puVar30[0x15] = uVar8;
                  uVar43 = uVar43 + 3;
                  puVar30[0x16] = uVar11;
                  puVar30[0x17] = 0xffff00ff;
                  puVar30 = puVar30 + 0x18;
                } while (uVar45 != 0);
              }
            }
            if (lVar23 != 0) {
              plVar22 = (long *)FUN_00400d30();
              (**(code **)(*plVar22 + 0x18))(plVar22,lVar23);
            }
          }
          local_218 = (undefined4 *)0x0;
        }
        iVar24 = (int)uVar26;
        if (fVar53 != 0.0) {
          uVar21 = FUN_00218590(param_2,&local_e0);
          FUN_00218580(uVar21,0x88880000);
          if (iVar24 != 0) {
            if (local_218 == (undefined4 *)0x0) {
              iVar49 = 0;
              do {
                FUN_0020a730(iVar49,&local_150,lVar25,lVar52,&local_110,bVar13 >> 1 & 1);
                fVar68 = ((float)local_150 + local_144 + (float)local_138) * DAT_01d4bd24;
                fVar69 = (local_150._4_4_ + fStack_140 + local_138._4_4_) * DAT_01d4bd24;
                fVar74 = (local_150._4_4_ - fStack_140) * (local_148 - local_130) -
                         (local_148 - local_13c) * (local_150._4_4_ - local_138._4_4_);
                fVar78 = (local_148 - local_13c) * ((float)local_150 - (float)local_138) -
                         ((float)local_150 - local_144) * (local_148 - local_130);
                fVar60 = ((float)local_150 - local_144) * (local_150._4_4_ - local_138._4_4_) -
                         (local_150._4_4_ - fStack_140) * ((float)local_150 - (float)local_138);
                fVar66 = 0.0;
                fVar61 = 0.0;
                fVar71 = (local_148 + local_13c + local_130) * DAT_01d4bd24;
                fVar62 = fVar60 * fVar60 + fVar74 * fVar74 + fVar78 * fVar78;
                fVar67 = 0.0;
                if (0.0 < fVar62) {
                  fVar61 = sqrtf(fVar62);
                  fVar61 = 1.0 / fVar61;
                  fVar66 = fVar74 * fVar61;
                  fVar67 = fVar78 * fVar61;
                  fVar61 = fVar60 * fVar61;
                }
                fVar66 = fVar53 * fVar66;
                fVar67 = fVar53 * fVar67;
                fVar61 = fVar53 * fVar61;
                local_18c = fVar68 + fVar66;
                local_188 = fVar69 + fVar67;
                fStack_184 = fVar71 + fVar61;
                local_198 = fVar68;
                local_194 = fVar69;
                local_190 = fVar71;
                local_180 = sqrtf(fVar66 * fVar66 + fVar67 * fVar67 + fVar61 * fVar61);
                local_180 = local_180 * DAT_01d4bacc;
                FUN_00218e10(param_2,&local_198);
                iVar49 = iVar49 + 1;
              } while (iVar24 != iVar49);
            }
            else {
              uVar45 = uVar26;
              puVar30 = local_218;
              do {
                FUN_0020a730(*puVar30,&local_150,lVar25,lVar52,&local_110,bVar13 >> 1 & 1);
                fVar68 = ((float)local_150 + local_144 + (float)local_138) * DAT_01d4bd24;
                fVar69 = (local_150._4_4_ + fStack_140 + local_138._4_4_) * DAT_01d4bd24;
                fVar74 = (local_150._4_4_ - fStack_140) * (local_148 - local_130) -
                         (local_148 - local_13c) * (local_150._4_4_ - local_138._4_4_);
                fVar78 = (local_148 - local_13c) * ((float)local_150 - (float)local_138) -
                         ((float)local_150 - local_144) * (local_148 - local_130);
                fVar60 = ((float)local_150 - local_144) * (local_150._4_4_ - local_138._4_4_) -
                         (local_150._4_4_ - fStack_140) * ((float)local_150 - (float)local_138);
                fVar66 = 0.0;
                fVar61 = 0.0;
                fVar71 = (local_148 + local_13c + local_130) * DAT_01d4bd24;
                fVar62 = fVar60 * fVar60 + fVar74 * fVar74 + fVar78 * fVar78;
                fVar67 = 0.0;
                if (0.0 < fVar62) {
                  fVar61 = sqrtf(fVar62);
                  fVar61 = 1.0 / fVar61;
                  fVar66 = fVar74 * fVar61;
                  fVar67 = fVar78 * fVar61;
                  fVar61 = fVar60 * fVar61;
                }
                fVar66 = fVar53 * fVar66;
                fVar67 = fVar53 * fVar67;
                fVar61 = fVar53 * fVar61;
                local_18c = fVar68 + fVar66;
                local_188 = fVar69 + fVar67;
                fStack_184 = fVar71 + fVar61;
                local_198 = fVar68;
                local_194 = fVar69;
                local_190 = fVar71;
                local_180 = sqrtf(fVar66 * fVar66 + fVar67 * fVar67 + fVar61 * fVar61);
                local_180 = local_180 * DAT_01d4bacc;
                FUN_00218e10(param_2,&local_198);
                uVar45 = uVar45 - 1;
                puVar30 = puVar30 + 1;
              } while (uVar45 != 0);
            }
          }
        }
        if ((fVar56 != 0.0) && (lVar25 = *(long *)(lVar44 + 0x50), lVar25 != 0)) {
          uVar21 = *(undefined8 *)(lVar44 + 0x28);
          uVar39 = *(undefined8 *)(lVar44 + 0x30);
          FUN_00218580(param_2,0xffffff00);
          if (iVar24 != 0) {
            uVar45 = 0;
            bVar13 = *(byte *)(lVar44 + 0x5c);
            do {
              while( true ) {
                if (local_218 == (undefined4 *)0x0) {
                  uVar43 = (uint)uVar45;
                }
                else {
                  uVar43 = local_218[uVar45];
                }
                FUN_0020a730(uVar43,&local_150,uVar21,uVar39,&local_110,bVar13 >> 1 & 1);
                bVar15 = *(byte *)(lVar25 + (ulong)uVar43);
                if ((bVar15 >> 3 & 1) != 0) break;
                if ((bVar15 >> 4 & 1) == 0) goto LAB_00209fcc;
LAB_0020a078:
                lVar52 = *(long *)(param_2 + 0x68);
                uVar31 = (ulong)*(uint *)(lVar52 + 0x20);
                uVar42 = *(uint *)(lVar52 + 0x24) & 0x7fffffff;
                uVar43 = *(uint *)(lVar52 + 0x20) + 1;
                if (uVar42 < uVar43) {
                  uVar19 = 2;
                  if (uVar42 != 0) {
                    uVar19 = *(uint *)(lVar52 + 0x24) << 1;
                  }
                  if (uVar19 <= uVar43) {
                    uVar19 = uVar43;
                  }
                  if (uVar42 < uVar19) {
                    FUN_001df120(lVar52 + 0x18);
                    uVar31 = (ulong)*(uint *)(lVar52 + 0x20);
                  }
                }
                *(uint *)(lVar52 + 0x20) = uVar43;
                pfVar28 = (float *)(*(long *)(lVar52 + 0x18) + uVar31 * 0x20);
                *pfVar28 = local_144;
                pfVar28[1] = fStack_140;
                pfVar28[2] = local_13c;
                pfVar28[4] = (float)local_138;
                pfVar28[5] = local_138._4_4_;
                pfVar28[6] = local_130;
                fVar61 = *(float *)(param_2 + 4);
                pfVar28[7] = fVar61;
                pfVar28[3] = fVar61;
                if ((bVar15 >> 5 & 1) != 0) goto LAB_0020a110;
LAB_00209fd0:
                uVar45 = uVar45 + 1;
                if (uVar26 == uVar45) goto LAB_0020a1b0;
              }
              lVar52 = *(long *)(param_2 + 0x68);
              uVar31 = (ulong)*(uint *)(lVar52 + 0x20);
              uVar42 = *(uint *)(lVar52 + 0x24) & 0x7fffffff;
              uVar43 = *(uint *)(lVar52 + 0x20) + 1;
              if (uVar42 < uVar43) {
                uVar19 = 2;
                if (uVar42 != 0) {
                  uVar19 = *(uint *)(lVar52 + 0x24) << 1;
                }
                if (uVar19 <= uVar43) {
                  uVar19 = uVar43;
                }
                if (uVar42 < uVar19) {
                  FUN_001df120(lVar52 + 0x18);
                  uVar31 = (ulong)*(uint *)(lVar52 + 0x20);
                }
              }
              *(uint *)(lVar52 + 0x20) = uVar43;
              puVar30 = (undefined4 *)(*(long *)(lVar52 + 0x18) + uVar31 * 0x20);
              *puVar30 = (float)local_150;
              puVar30[1] = local_150._4_4_;
              puVar30[2] = local_148;
              puVar30[4] = local_144;
              puVar30[5] = fStack_140;
              puVar30[6] = local_13c;
              uVar4 = *(undefined4 *)(param_2 + 4);
              puVar30[7] = uVar4;
              puVar30[3] = uVar4;
              if ((bVar15 >> 4 & 1) != 0) goto LAB_0020a078;
LAB_00209fcc:
              if ((bVar15 >> 5 & 1) == 0) goto LAB_00209fd0;
LAB_0020a110:
              lVar52 = *(long *)(param_2 + 0x68);
              uVar31 = (ulong)*(uint *)(lVar52 + 0x20);
              uVar42 = *(uint *)(lVar52 + 0x24) & 0x7fffffff;
              uVar43 = *(uint *)(lVar52 + 0x20) + 1;
              if (uVar42 < uVar43) {
                uVar19 = 2;
                if (uVar42 != 0) {
                  uVar19 = *(uint *)(lVar52 + 0x24) << 1;
                }
                if (uVar19 <= uVar43) {
                  uVar19 = uVar43;
                }
                if (uVar42 < uVar19) {
                  FUN_001df120(lVar52 + 0x18);
                  uVar31 = (ulong)*(uint *)(lVar52 + 0x20);
                }
              }
              *(uint *)(lVar52 + 0x20) = uVar43;
              puVar30 = (undefined4 *)(*(long *)(lVar52 + 0x18) + uVar31 * 0x20);
              *puVar30 = (float)local_150;
              puVar30[1] = local_150._4_4_;
              puVar30[2] = local_148;
              puVar30[4] = (float)local_138;
              puVar30[5] = local_138._4_4_;
              puVar30[6] = local_130;
              uVar4 = *(undefined4 *)(param_2 + 4);
              puVar30[7] = uVar4;
              puVar30[3] = uVar4;
              uVar45 = uVar45 + 1;
            } while (uVar26 != uVar45);
          }
        }
LAB_0020a1b0:
        if ((local_218 != (undefined4 *)0x0) && (local_218 != (undefined4 *)0x0)) {
          plVar22 = (long *)FUN_00400d30();
          (**(code **)(*plVar22 + 0x18))(plVar22,local_218);
        }
      default:
switchD_00208650_default:
        break;
      case 8.40779e-45:
        lVar25 = *(long *)(pfVar28 + 2);
        local_e0 = 0x3f800000;
        local_d8 = 0;
        local_d0 = 0x3f80000000000000;
        local_c8 = 0;
        local_c0 = 0;
        local_b8 = 0x3f800000;
        local_b0 = 0;
        local_a8 = 0x3f80000000000000;
        fabsf(pfVar28[5]);
        fabsf(pfVar28[6]);
        uVar42 = *(int *)(lVar25 + 0x3c) * *(int *)(lVar25 + 0x38);
        uVar43 = uVar42 * 2;
        uVar21 = FUN_00218590(param_2,&local_e0);
        FUN_00218580(uVar21,0xffff00ff);
        if (fVar65 <= fVar58) {
          local_110 = 0;
          local_108 = 0x3f80000000000000;
          local_100 = (pfVar20[3] + *pfVar20) * 0.5;
          fStack_fc = (pfVar20[4] + pfVar20[1]) * 0.5;
          local_f8 = (pfVar20[5] + pfVar20[2]) * 0.5;
          local_194 = (pfVar20[3] - *pfVar20) * 0.5;
          local_190 = (pfVar20[4] - pfVar20[1]) * 0.5;
          local_18c = (pfVar20[5] - pfVar20[2]) * 0.5;
          local_198 = 4.2039e-45;
          if (uVar43 == 0) {
            lVar25 = 0;
          }
          else {
            plVar22 = (long *)FUN_00400d30();
            lVar25 = (**(code **)(*plVar22 + 0x10))
                               (plVar22,(ulong)uVar43 << 2,"NonTrackedAlloc",
                                "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpShapeManager.cpp"
                                ,0x230);
          }
          local_170 = (undefined4 *)((ulong)local_170 & 0xffffffffffffff00);
          uVar19 = FUN_0023b410(&local_198,&local_110,pfVar28,&local_1d8,lVar25,uVar43,0,&local_170)
          ;
          lVar52 = *(long *)(param_2 + 0x68);
          uVar26 = (ulong)*(uint *)(lVar52 + 0x20);
          uVar42 = *(uint *)(lVar52 + 0x24) & 0x7fffffff;
          uVar43 = *(uint *)(lVar52 + 0x20) + uVar19 * 3;
          if (uVar42 < uVar43) {
            uVar18 = 2;
            if (uVar42 != 0) {
              uVar18 = *(uint *)(lVar52 + 0x24) << 1;
            }
            if (uVar18 <= uVar43) {
              uVar18 = uVar43;
            }
            if (uVar42 < uVar18) {
              FUN_001df120(lVar52 + 0x18);
              uVar26 = (ulong)*(uint *)(lVar52 + 0x20);
            }
          }
          *(uint *)(lVar52 + 0x20) = uVar43;
          if (uVar19 == 0) {
            if (lVar25 == 0) break;
          }
          else {
            puVar46 = (undefined8 *)(*(long *)(lVar52 + 0x18) + uVar26 * 0x20);
            uVar26 = 0;
            do {
                    /* try { // try from 0020824c to 00208263 has its CatchHandler @ 0020a310 */
              FUN_0023b360(pfVar28,&local_1d8,*(undefined4 *)(lVar25 + uVar26 * 4),&local_150,0,0);
              uVar26 = uVar26 + 1;
              *puVar46 = local_150;
              *(float *)(puVar46 + 1) = local_148;
              *(undefined4 *)((long)puVar46 + 0xc) = 0xffff00ff;
              puVar46[2] = CONCAT44(fStack_140,local_144);
              *(float *)(puVar46 + 3) = local_13c;
              *(undefined4 *)((long)puVar46 + 0x1c) = 0xffff00ff;
              puVar46[4] = CONCAT44(fStack_140,local_144);
              *(float *)(puVar46 + 5) = local_13c;
              *(undefined4 *)((long)puVar46 + 0x2c) = 0xffff00ff;
              *(float *)(puVar46 + 6) = (float)local_138;
              *(float *)((long)puVar46 + 0x34) = local_138._4_4_;
              *(float *)(puVar46 + 7) = local_130;
              *(undefined4 *)((long)puVar46 + 0x3c) = 0xffff00ff;
              *(float *)(puVar46 + 8) = (float)local_138;
              *(float *)((long)puVar46 + 0x44) = local_138._4_4_;
              *(float *)(puVar46 + 9) = local_130;
              *(undefined4 *)((long)puVar46 + 0x4c) = 0xffff00ff;
              puVar46[10] = local_150;
              *(float *)(puVar46 + 0xb) = local_148;
              *(undefined4 *)((long)puVar46 + 0x5c) = 0xffff00ff;
              puVar46 = puVar46 + 0xc;
            } while (uVar26 < uVar19);
          }
          plVar22 = (long *)FUN_00400d30();
          (**(code **)(*plVar22 + 0x18))(plVar22,lVar25);
        }
        else if (uVar42 != 0) {
          plVar22 = (long *)FUN_00400d30();
          lVar52 = (**(code **)(*plVar22 + 0x10))
                             (plVar22,((ulong)uVar42 + (ulong)uVar42 * 2) * 4,"NonTrackedAlloc",
                              "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpShapeManager.cpp"
                              ,0x249);
          fVar61 = pfVar28[4];
          fVar62 = pfVar28[5];
          fVar66 = pfVar28[6];
          pfVar28 = (float *)(lVar52 + 8);
          fVar67 = local_1cc * local_1cc + -0.5;
          uVar19 = *(uint *)(lVar25 + 0x3c);
          uVar26 = 0;
          psVar34 = *(short **)(lVar25 + 0x50);
          do {
            uVar18 = 0;
            uVar32 = (uint)uVar26;
            if (uVar19 != 0) {
              uVar18 = uVar32 / uVar19;
            }
            fVar68 = fVar61 * (float)(int)*psVar34 + fVar61 * (float)(int)*psVar34;
            uVar26 = uVar26 + 1;
            fVar71 = fVar66 * (float)(uVar32 - uVar18 * uVar19);
            fVar69 = fVar62 * (float)uVar18 + fVar62 * (float)uVar18;
            fVar71 = fVar71 + fVar71;
            fVar74 = local_1d0 * fVar71 + local_1d8 * fVar69 + fStack_1d4 * fVar68;
            pfVar28[-1] = fStack_1c4 +
                          fVar67 * fVar68 + local_1cc * (local_1d0 * fVar69 - local_1d8 * fVar71) +
                          fStack_1d4 * fVar74;
            *pfVar28 = local_1c0 +
                       fVar67 * fVar71 + local_1cc * (local_1d8 * fVar68 - fStack_1d4 * fVar69) +
                       local_1d0 * fVar74;
            pfVar28[-2] = local_1c8 +
                          local_1d8 * fVar74 +
                          fVar67 * fVar69 + local_1cc * (fStack_1d4 * fVar71 - local_1d0 * fVar68);
            pfVar28 = pfVar28 + 3;
            psVar34 = psVar34 + 2;
          } while (uVar42 != uVar26);
          if (uVar43 != 0) {
            uVar42 = 0;
            while( true ) {
              uVar18 = uVar42 >> 1;
              uVar32 = 0;
              if (uVar19 != 0) {
                uVar32 = uVar18 / uVar19;
              }
              if ((uVar32 < *(int *)(lVar25 + 0x38) - 1U) && (uVar18 - uVar32 * uVar19 < uVar19 - 1)
                 ) {
                lVar44 = *(long *)(lVar25 + 0x50) + (ulong)uVar18 * 4;
                pbVar51 = (byte *)(lVar44 + 2);
                pbVar3 = pbVar51;
                if ((uVar42 & 1) != 0) {
                  pbVar3 = (byte *)(lVar44 + 3);
                }
                if ((~*pbVar3 & 0x7f) != 0) {
                  if ((char)*pbVar51 < '\0') {
                    if ((uVar42 & 1) == 0) {
                      uVar48 = uVar18 + uVar19;
                      uVar50 = uVar48 + 1;
                      uVar32 = uVar18;
                    }
                    else {
                      uVar48 = uVar18 + 1;
                      uVar32 = uVar48 + uVar19;
                      uVar50 = uVar18;
                    }
                  }
                  else {
                    uVar32 = uVar18 + 1;
                    if ((uVar42 & 1) == 0) {
                      uVar48 = uVar18;
                      uVar50 = uVar18 + uVar19;
                    }
                    else {
                      uVar48 = uVar32 + uVar19;
                      uVar50 = uVar32;
                      uVar32 = uVar18 + uVar19;
                    }
                  }
                  lVar44 = *(long *)(param_2 + 0x68);
                  uVar26 = (ulong)*(uint *)(lVar44 + 0x20);
                  uVar18 = *(uint *)(lVar44 + 0x24) & 0x7fffffff;
                  uVar19 = *(uint *)(lVar44 + 0x20) + 3;
                  if (uVar18 < uVar19) {
                    uVar1 = 2;
                    if (uVar18 != 0) {
                      uVar1 = *(uint *)(lVar44 + 0x24) << 1;
                    }
                    if (uVar1 <= uVar19) {
                      uVar1 = uVar19;
                    }
                    if (uVar18 < uVar1) {
                      FUN_001df120(lVar44 + 0x18);
                      uVar26 = (ulong)*(uint *)(lVar44 + 0x20);
                    }
                  }
                  puVar35 = (undefined8 *)(lVar52 + (ulong)uVar48 * 0xc);
                  *(uint *)(lVar44 + 0x20) = uVar19;
                  puVar36 = (undefined8 *)(lVar52 + (ulong)uVar32 * 0xc);
                  uVar4 = *(undefined4 *)(puVar35 + 1);
                  uVar21 = *puVar36;
                  puVar46 = (undefined8 *)(*(long *)(lVar44 + 0x18) + uVar26 * 0x20);
                  uVar5 = *(undefined4 *)(puVar36 + 1);
                  *puVar46 = *puVar35;
                  puVar38 = (undefined8 *)(lVar52 + (ulong)uVar50 * 0xc);
                  *(undefined4 *)(puVar46 + 1) = uVar4;
                  *(undefined4 *)((long)puVar46 + 0xc) = 0xffff00ff;
                  puVar46[2] = uVar21;
                  *(undefined4 *)(puVar46 + 3) = uVar5;
                  *(undefined4 *)((long)puVar46 + 0x1c) = 0xffff00ff;
                  uVar4 = *(undefined4 *)(puVar36 + 1);
                  uVar21 = *puVar38;
                  uVar5 = *(undefined4 *)(puVar38 + 1);
                  puVar46[4] = *puVar36;
                  *(undefined4 *)(puVar46 + 5) = uVar4;
                  *(undefined4 *)((long)puVar46 + 0x2c) = 0xffff00ff;
                  puVar46[6] = uVar21;
                  *(undefined4 *)(puVar46 + 7) = uVar5;
                  *(undefined4 *)((long)puVar46 + 0x3c) = 0xffff00ff;
                  uVar21 = *puVar38;
                  uVar39 = *puVar35;
                  uVar4 = *(undefined4 *)(puVar35 + 1);
                  *(undefined4 *)(puVar46 + 9) = *(undefined4 *)(puVar38 + 1);
                  *(undefined4 *)((long)puVar46 + 0x4c) = 0xffff00ff;
                  *(undefined4 *)(puVar46 + 0xb) = uVar4;
                  *(undefined4 *)((long)puVar46 + 0x5c) = 0xffff00ff;
                  puVar46[8] = uVar21;
                  puVar46[10] = uVar39;
                }
              }
              if (uVar43 - 1 == uVar42) break;
              uVar19 = *(uint *)(lVar25 + 0x3c);
              uVar42 = uVar42 + 1;
            }
            if (lVar52 == 0) break;
          }
          plVar22 = (long *)FUN_00400d30();
          (**(code **)(*plVar22 + 0x18))(plVar22,lVar52);
        }
      }
      if (local_23c != 0) {
        if (local_1f0 <= local_1f8) {
          local_1f8 = local_1f0;
        }
        if (fStack_1ec <= local_200) {
          local_200 = fStack_1ec;
        }
        if (local_1e8 <= fVar64) {
          fVar64 = local_1e8;
        }
        if (local_1f4 <= local_1e4) {
          local_1f4 = local_1e4;
        }
        if (local_1fc <= fStack_1e0) {
          local_1fc = fStack_1e0;
        }
        if (fVar63 <= local_1dc) {
          fVar63 = local_1dc;
        }
      }
      uVar47 = uVar47 + 1;
    } while (uVar47 < uVar16);
    if ((local_1f8 <= local_1f4) && (local_23c == 1)) {
      uVar21 = FUN_00218580(param_2,0xffff00ff);
      local_e0 = 0x3f800000;
      local_d8 = 0;
      local_d0 = 0x3f80000000000000;
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0x3f800000;
      local_b0 = 0;
      local_a8 = 0x3f80000000000000;
      uVar21 = FUN_00218590(uVar21,&local_e0);
      local_150 = CONCAT44(local_200,local_1f8);
      local_144 = local_1f4;
      local_138 = CONCAT71(local_138._1_7_,1);
      fStack_140 = local_1fc;
      local_148 = fVar64;
      local_13c = fVar63;
      FUN_00218ad0(uVar21,&local_150);
    }
  }
  return;
}


