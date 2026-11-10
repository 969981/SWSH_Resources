/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00edd250; name: FUN_00edd250
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00edd250(long param_1)

{
  undefined1 (*pauVar1) [12];
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
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
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  bool bVar41;
  bool bVar42;
  ulong uVar43;
  uint uVar44;
  long lVar45;
  uint uVar46;
  long *plVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 uVar51;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 uVar52;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 uVar53;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 uVar54;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 uVar55;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 uVar56;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 uVar57;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 uVar58;
  undefined1 extraout_var_16;
  undefined1 uVar59;
  undefined1 extraout_var_17;
  undefined1 uVar60;
  undefined1 extraout_var_18;
  undefined1 uVar61;
  undefined1 extraout_var_19;
  undefined1 uVar62;
  undefined1 extraout_var_20;
  undefined1 uVar63;
  undefined1 extraout_var_21;
  undefined1 uVar64;
  undefined1 extraout_var_22;
  undefined1 uVar65;
  undefined1 extraout_var_23;
  undefined1 uVar66;
  float fVar67;
  undefined1 auVar69 [12];
  float fVar74;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  int iVar68;
  int iVar75;
  int iVar76;
  int iVar77;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [12];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined8 uVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  undefined4 uVar96;
  undefined4 uVar97;
  undefined8 uVar98;
  undefined8 uVar99;
  undefined8 uVar100;
  undefined8 uVar101;
  undefined8 uVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar116;
  byte bVar117;
  undefined8 uVar109;
  float fVar115;
  undefined8 uVar110;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  float fVar126;
  float fVar127;
  undefined8 uVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  undefined8 uVar136;
  float fVar137;
  float fVar138;
  undefined8 uVar139;
  float fVar140;
  undefined8 uVar141;
  undefined8 uVar142;
  undefined8 uVar143;
  undefined8 uVar144;
  undefined8 uVar145;
  float fVar146;
  undefined8 uVar147;
  long local_50;
  long lStack_48;
  
  plVar47 = *(long **)(param_1 + 0x70);
  uVar43 = FUN_00dbfcc0(plVar47,&DAT_02a5deb0);
  if (((uVar43 & 1) == 0) && (uVar43 = FUN_00dbfcc0(plVar47,&DAT_02a5ded0), (uVar43 & 1) == 0)) {
    uVar43 = FUN_00dbfcc0(plVar47,&DAT_02a5def0);
    if ((uVar43 & 1) == 0) {
      uVar43 = FUN_00dbfcc0(plVar47,&DAT_02a5df10);
      if ((uVar43 & 1) == 0) {
        uVar44 = 0;
        *(undefined4 *)(param_1 + 0xb0) = 0;
        cVar2 = *(char *)(param_1 + 0xb4);
        goto joined_r0x00edd31c;
      }
      bVar42 = *(int *)(param_1 + 0xb0) == 2;
      uVar44 = 3;
      *(undefined4 *)(param_1 + 0xb0) = 3;
      cVar2 = *(char *)(param_1 + 0xb4);
    }
    else {
      bVar42 = *(int *)(param_1 + 0xb0) == 3;
      uVar44 = 2;
      *(undefined4 *)(param_1 + 0xb0) = 2;
      cVar2 = *(char *)(param_1 + 0xb4);
    }
joined_r0x00edd2b4:
    bVar41 = bVar42;
    if (cVar2 != '\0') goto LAB_00edd2b8;
LAB_00edd320:
    uVar46 = *(uint *)(param_1 + 0xac);
    if (uVar46 < 2) goto LAB_00edd2cc;
LAB_00edd32c:
    if (uVar46 - 2 < 2) {
      if (uVar44 == 1) {
        *(uint *)(param_1 + 0xa8) = uVar46;
        return;
      }
      return;
    }
  }
  else {
    uVar44 = 1;
    *(undefined4 *)(param_1 + 0xb0) = 1;
    if (*(char *)(param_1 + 0xb4) != '\0') {
      bVar42 = false;
      cVar2 = *(char *)(param_1 + 0xb4);
      goto joined_r0x00edd2b4;
    }
    *(undefined4 *)(param_1 + 0xa8) = 4;
    uVar44 = 1;
    cVar2 = *(char *)(param_1 + 0xb4);
joined_r0x00edd31c:
    bVar42 = false;
    bVar41 = false;
    if (cVar2 == '\0') goto LAB_00edd320;
LAB_00edd2b8:
    bVar42 = bVar41;
    if (uVar44 >> 1 == 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0xb4) = 0;
    uVar46 = *(uint *)(param_1 + 0xac);
    if (1 < uVar46) goto LAB_00edd32c;
LAB_00edd2cc:
    if (bVar42) {
      if (uVar46 == 1) {
        *(undefined8 *)(param_1 + 0xa8) = 0x400000001;
        (**(code **)(*plVar47 + 0x180))(0,plVar47,PTR_DAT_02720010);
        iVar68 = *(int *)(param_1 + 0xb8) + -1;
      }
      else {
        if (uVar46 != 0) goto LAB_00edd3f8;
        *(undefined8 *)(param_1 + 0xa8) = 0x400000000;
        (**(code **)(*plVar47 + 0x180))(0,plVar47,PTR_DAT_02720010);
        iVar68 = *(int *)(param_1 + 0xb8) + 1;
      }
      *(int *)(param_1 + 0xb8) = iVar68;
    }
LAB_00edd3f8:
    if ((*(uint *)(param_1 + 0xb0) & 0xfffffffe) == 2) {
      return;
    }
  }
  if (*(float *)(param_1 + 0x90) < *(float *)PTR_DAT_027204b0) {
                    /* WARNING: Could not recover jumptable at 0x00edd450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar47 + 0x180))(0,plVar47,PTR_DAT_02720010);
    return;
  }
  fVar50 = (float)*(undefined8 *)(param_1 + 0x80);
  auVar83._0_4_ = fVar50 * fVar50;
  fVar49 = (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20);
  auVar83._4_4_ = fVar49 * fVar49;
  fVar93 = (float)*(undefined8 *)(param_1 + 0x88);
  auVar83._8_4_ = fVar93 * fVar93;
  fVar94 = (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20);
  auVar83._12_4_ = fVar94 * fVar94;
  auVar78 = NEON_ext(auVar83,auVar83,8,1);
  fVar67 = auVar78._0_4_ + auVar83._0_4_;
  fVar74 = auVar78._4_4_ + auVar83._4_4_;
  fVar48 = fVar67 + fVar74;
  fVar67 = fVar67 + fVar74;
  auVar78._8_8_ = CONCAT44(fVar67,fVar48);
  auVar78._0_8_ = CONCAT44(fVar67,fVar48);
  auVar83 = NEON_frsqrte(auVar78,4);
  auVar86._0_4_ = auVar83._0_4_ * fVar48;
  auVar86._4_4_ = auVar83._4_4_ * fVar67;
  auVar86._8_4_ = auVar83._8_4_ * fVar48;
  auVar86._12_4_ = auVar83._12_4_ * fVar67;
  auVar87 = NEON_frsqrts(auVar83,auVar86,4);
  auVar84._0_4_ = auVar83._0_4_ * auVar87._0_4_;
  auVar84._4_4_ = auVar83._4_4_ * auVar87._4_4_;
  auVar84._8_4_ = auVar83._8_4_ * auVar87._8_4_;
  auVar84._12_4_ = auVar83._12_4_ * auVar87._12_4_;
  auVar88._0_4_ = fVar48 * auVar84._0_4_;
  auVar88._4_4_ = fVar67 * auVar84._4_4_;
  auVar88._8_4_ = fVar48 * auVar84._8_4_;
  auVar88._12_4_ = fVar67 * auVar84._12_4_;
  auVar83 = NEON_frsqrts(auVar84,auVar88,4);
  auVar87._0_4_ = fVar50 * auVar84._0_4_ * auVar83._0_4_;
  auVar87._4_4_ = fVar49 * auVar84._4_4_ * auVar83._4_4_;
  auVar87._8_4_ = fVar93 * auVar84._8_4_ * auVar83._8_4_;
  auVar87._12_4_ = fVar94 * auVar84._12_4_ * auVar83._12_4_;
  if (fVar48 == 0.0) {
    lVar45 = plVar47[0x15];
    uVar59 = (undefined1)lVar45;
    uVar60 = (undefined1)((ulong)lVar45 >> 8);
    uVar61 = (undefined1)((ulong)lVar45 >> 0x10);
    uVar62 = (undefined1)((ulong)lVar45 >> 0x18);
    uVar63 = (undefined1)((ulong)lVar45 >> 0x20);
    uVar64 = (undefined1)((ulong)lVar45 >> 0x28);
    uVar65 = (undefined1)((ulong)lVar45 >> 0x30);
    uVar66 = (undefined1)((ulong)lVar45 >> 0x38);
    lVar45 = plVar47[0x14];
    uVar51 = (undefined1)lVar45;
    uVar52 = (undefined1)((ulong)lVar45 >> 8);
    uVar53 = (undefined1)((ulong)lVar45 >> 0x10);
    uVar54 = (undefined1)((ulong)lVar45 >> 0x18);
    uVar55 = (undefined1)((ulong)lVar45 >> 0x20);
    uVar56 = (undefined1)((ulong)lVar45 >> 0x28);
    uVar57 = (undefined1)((ulong)lVar45 >> 0x30);
    uVar58 = (undefined1)((ulong)lVar45 >> 0x38);
  }
  else {
    iVar68 = -(uint)(fVar48 == 0.0);
    iVar75 = -(uint)(fVar67 == 0.0);
    iVar76 = -(uint)(fVar48 == 0.0);
    iVar77 = -(uint)(fVar67 == 0.0);
    fVar48 = (float)CONCAT13((byte)((uint)auVar87._0_4_ >> 0x18) & ~(byte)((uint)iVar68 >> 0x18),
                             CONCAT12((byte)((uint)auVar87._0_4_ >> 0x10) &
                                      ~(byte)((uint)iVar68 >> 0x10),
                                      CONCAT11((byte)((uint)auVar87._0_4_ >> 8) &
                                               ~(byte)((uint)iVar68 >> 8),
                                               SUB41(auVar87._0_4_,0) & ~(byte)iVar68)));
    auVar69._0_8_ =
         CONCAT17((byte)((uint)auVar87._4_4_ >> 0x18) & ~(byte)((uint)iVar75 >> 0x18),
                  CONCAT16((byte)((uint)auVar87._4_4_ >> 0x10) & ~(byte)((uint)iVar75 >> 0x10),
                           CONCAT15((byte)((uint)auVar87._4_4_ >> 8) & ~(byte)((uint)iVar75 >> 8),
                                    CONCAT14(SUB41(auVar87._4_4_,0) & ~(byte)iVar75,fVar48))));
    auVar69[8] = SUB41(auVar87._8_4_,0) & ~(byte)iVar76;
    auVar69[9] = (byte)((uint)auVar87._8_4_ >> 8) & ~(byte)((uint)iVar76 >> 8);
    auVar69[10] = (byte)((uint)auVar87._8_4_ >> 0x10) & ~(byte)((uint)iVar76 >> 0x10);
    auVar69[0xb] = (byte)((uint)auVar87._8_4_ >> 0x18) & ~(byte)((uint)iVar76 >> 0x18);
    auVar70[0xc] = SUB41(auVar87._12_4_,0) & ~(byte)iVar77;
    auVar70._0_12_ = auVar69;
    auVar70[0xd] = (byte)((uint)auVar87._12_4_ >> 8) & ~(byte)((uint)iVar77 >> 8);
    auVar70[0xe] = (byte)((uint)auVar87._12_4_ >> 0x10) & ~(byte)((uint)iVar77 >> 0x10);
    auVar70[0xf] = (byte)((uint)auVar87._12_4_ >> 0x18) & ~(byte)((uint)iVar77 >> 0x18);
    fVar50 = fVar48 * (float)_DAT_01d49dc0;
    fVar49 = (float)((ulong)auVar69._0_8_ >> 0x20) * (float)((ulong)_DAT_01d49dc0 >> 0x20);
    uVar51 = (undefined1)((uint)fVar49 >> 8);
    uVar52 = (undefined1)((uint)fVar49 >> 0x10);
    uVar53 = (undefined1)((uint)fVar49 >> 0x18);
    fVar93 = auVar69._8_4_ * (float)_UNK_01d49dc8;
    uVar54 = (undefined1)((uint)fVar93 >> 8);
    uVar55 = (undefined1)((uint)fVar93 >> 0x10);
    uVar56 = (undefined1)((uint)fVar93 >> 0x18);
    fVar94 = auVar70._12_4_ * (float)((ulong)_UNK_01d49dc8 >> 0x20);
    uVar57 = (undefined1)((uint)fVar94 >> 8);
    uVar58 = (undefined1)((uint)fVar94 >> 0x10);
    uVar59 = (undefined1)((uint)fVar94 >> 0x18);
    auVar3[4] = SUB41(fVar49,0);
    auVar3._0_4_ = fVar50;
    auVar3[5] = uVar51;
    auVar3[6] = uVar52;
    auVar3[7] = uVar53;
    auVar3[8] = SUB41(fVar93,0);
    auVar3[9] = uVar54;
    auVar3[10] = uVar55;
    auVar3[0xb] = uVar56;
    auVar3[0xc] = SUB41(fVar94,0);
    auVar3[0xd] = uVar57;
    auVar3[0xe] = uVar58;
    auVar3[0xf] = uVar59;
    auVar4[4] = SUB41(fVar49,0);
    auVar4._0_4_ = fVar50;
    auVar4[5] = uVar51;
    auVar4[6] = uVar52;
    auVar4[7] = uVar53;
    auVar4[8] = SUB41(fVar93,0);
    auVar4[9] = uVar54;
    auVar4[10] = uVar55;
    auVar4[0xb] = uVar56;
    auVar4[0xc] = SUB41(fVar94,0);
    auVar4[0xd] = uVar57;
    auVar4[0xe] = uVar58;
    auVar4[0xf] = uVar59;
    auVar83 = NEON_ext(auVar3,auVar4,8,1);
    fVar49 = auVar83._0_4_ + fVar50 + auVar83._4_4_ + fVar49;
    fVar50 = fVar49;
    if (1.0 < fVar49) {
      fVar50 = 0.0;
    }
    uVar51 = 0;
    if (-1.0 <= fVar49) {
      uVar51 = SUB41(fVar50,0);
    }
    FUN_01590400(uVar51);
    fVar50 = -(float)CONCAT13(extraout_var_05,
                              CONCAT12(extraout_var_02,CONCAT11(extraout_var,extraout_b0)));
    if (0.0 <= fVar48) {
      fVar50 = (float)CONCAT13(extraout_var_05,
                               CONCAT12(extraout_var_02,CONCAT11(extraout_var,extraout_b0)));
    }
    lStack_48 = plVar47[0xbb];
    local_50 = plVar47[0xba];
    FUN_00ac7ad0(&local_50);
    fVar50 = (fVar50 + (float)CONCAT13(extraout_var_14,
                                       CONCAT12(extraout_var_12,
                                                CONCAT11(extraout_var_10,extraout_var_08))) +
             DAT_01d4bb38) / DAT_01d4bdf4;
    fVar49 = 1.0;
    if (fVar50 < 0.0) {
      fVar49 = -1.0;
    }
    fVar50 = fVar50 - fVar49 * (float)(int)fVar50;
    fVar49 = fVar50 + 1.0;
    uVar51 = SUB41(fVar49,0);
    uVar52 = (char)((uint)fVar49 >> 8);
    uVar53 = (char)((uint)fVar49 >> 0x10);
    uVar54 = (char)((uint)fVar49 >> 0x18);
    if (0.0 <= fVar50) {
      uVar51 = SUB41(fVar50,0);
      uVar52 = (char)((uint)fVar50 >> 8);
      uVar53 = (char)((uint)fVar50 >> 0x10);
      uVar54 = (char)((uint)fVar50 >> 0x18);
    }
    FUN_00a92cd0(SUB41((float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) *
                       DAT_01d4bdf4 + DAT_01d4be68,0),ZEXT816(0),ZEXT816(0));
    fVar50 = *(float *)(param_1 + 0x80);
    fVar49 = *(float *)(param_1 + 0x84);
    fVar93 = *(float *)(param_1 + 0x88);
    fVar94 = *(float *)(param_1 + 0x8c);
    auVar71._0_4_ = fVar50 * fVar50;
    auVar71._4_4_ = fVar49 * fVar49;
    auVar71._8_4_ = fVar93 * fVar93;
    auVar71._12_4_ = fVar94 * fVar94;
    auVar83 = NEON_ext(auVar71,auVar71,8,1);
    fVar67 = auVar83._0_4_ + auVar71._0_4_;
    fVar74 = auVar83._4_4_ + auVar71._4_4_;
    fVar48 = fVar67 + fVar74;
    fVar67 = fVar67 + fVar74;
    auVar78._8_8_ = CONCAT44(fVar67,fVar48);
    auVar78._0_8_ = CONCAT44(fVar67,fVar48);
    auVar83 = NEON_frsqrte(auVar78,4);
    auVar89._0_4_ = auVar83._0_4_ * fVar48;
    auVar89._4_4_ = auVar83._4_4_ * fVar67;
    auVar89._8_4_ = auVar83._8_4_ * fVar48;
    auVar89._12_4_ = auVar83._12_4_ * fVar67;
    auVar87 = NEON_frsqrts(auVar83,auVar89,4);
    auVar85._0_4_ = auVar83._0_4_ * auVar87._0_4_;
    auVar85._4_4_ = auVar83._4_4_ * auVar87._4_4_;
    auVar85._8_4_ = auVar83._8_4_ * auVar87._8_4_;
    auVar85._12_4_ = auVar83._12_4_ * auVar87._12_4_;
    auVar90._0_4_ = fVar48 * auVar85._0_4_;
    auVar90._4_4_ = fVar67 * auVar85._4_4_;
    auVar90._8_4_ = fVar48 * auVar85._8_4_;
    auVar90._12_4_ = fVar67 * auVar85._12_4_;
    auVar83 = NEON_frsqrts(auVar85,auVar90,4);
    auVar87._0_4_ = fVar50 * auVar85._0_4_ * auVar83._0_4_;
    auVar87._4_4_ = fVar49 * auVar85._4_4_ * auVar83._4_4_;
    auVar87._8_4_ = fVar93 * auVar85._8_4_ * auVar83._8_4_;
    auVar87._12_4_ = fVar94 * auVar85._12_4_ * auVar83._12_4_;
    uVar51 = extraout_b0_00;
    uVar52 = extraout_var_00;
    uVar53 = extraout_var_03;
    uVar54 = extraout_var_06;
    uVar55 = extraout_var_09;
    uVar56 = extraout_var_11;
    uVar57 = extraout_var_13;
    uVar58 = extraout_var_15;
    uVar59 = extraout_var_16;
    uVar60 = extraout_var_17;
    uVar61 = extraout_var_18;
    uVar62 = extraout_var_19;
    uVar63 = extraout_var_20;
    uVar64 = extraout_var_21;
    uVar65 = extraout_var_22;
    uVar66 = extraout_var_23;
  }
  iVar68 = -(uint)(auVar78._0_4_ == 0.0);
  iVar75 = -(uint)(auVar78._4_4_ == 0.0);
  iVar76 = -(uint)(auVar78._8_4_ == 0.0);
  iVar77 = -(uint)(auVar78._12_4_ == 0.0);
  auVar72[0] = ~(byte)iVar68;
  auVar72[1] = ~(byte)((uint)iVar68 >> 8);
  auVar72[2] = ~(byte)((uint)iVar68 >> 0x10);
  auVar72[3] = ~(byte)((uint)iVar68 >> 0x18);
  auVar72[4] = ~(byte)iVar75;
  auVar72[5] = ~(byte)((uint)iVar75 >> 8);
  auVar72[6] = ~(byte)((uint)iVar75 >> 0x10);
  auVar72[7] = ~(byte)((uint)iVar75 >> 0x18);
  auVar72[8] = ~(byte)iVar76;
  auVar72[9] = ~(byte)((uint)iVar76 >> 8);
  auVar72[10] = ~(byte)((uint)iVar76 >> 0x10);
  auVar72[0xb] = ~(byte)((uint)iVar76 >> 0x18);
  auVar72[0xc] = ~(byte)iVar77;
  auVar72[0xd] = ~(byte)((uint)iVar77 >> 8);
  auVar72[0xe] = ~(byte)((uint)iVar77 >> 0x10);
  auVar72[0xf] = ~(byte)((uint)iVar77 >> 0x18);
  auVar79._0_4_ = auVar87._0_4_ * (float)_DAT_01d4b9f0;
  auVar79._4_4_ = auVar87._4_4_ * (float)((ulong)_DAT_01d4b9f0 >> 0x20);
  auVar79._8_4_ = auVar87._8_4_ * (float)_UNK_01d4b9f8;
  auVar79._12_4_ = auVar87._12_4_ * (float)((ulong)_UNK_01d4b9f8 >> 0x20);
  auVar73._8_4_ = 0x80000000;
  auVar73._0_8_ = 0x8000000080000000;
  auVar73._12_4_ = 0x80000000;
  auVar73 = auVar73 ^ (auVar73 ^ auVar79) & auVar72;
  auVar83 = NEON_ext(auVar73,auVar73,8,1);
  fVar50 = auVar83._0_4_ + auVar73._0_4_ + auVar83._4_4_ + auVar73._4_4_;
  if (fVar50 <= DAT_01d4bfe0) {
    if (ABS(fVar50) <= DAT_01d4bfe0) {
      fVar107 = (float)((ulong)_UNK_01d4ae88 >> 0x20);
      fVar67 = (float)((ulong)_DAT_01d4ae80 >> 0x20);
      uVar96 = (undefined4)_UNK_01d49dc8;
      uVar97 = (undefined4)((ulong)_UNK_01d49dc8 >> 0x20);
      fVar50 = (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) *
               (float)_DAT_01d4ae80;
      fVar93 = (float)CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55))) * fVar67;
      fVar94 = (float)CONCAT13(uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar59))) *
               (float)_UNK_01d4ae88;
      fVar48 = (float)CONCAT13(uVar66,CONCAT12(uVar65,CONCAT11(uVar64,uVar63))) * fVar107;
      auVar16._4_4_ = fVar93;
      auVar16._0_4_ = fVar50;
      auVar16._8_4_ = fVar94;
      auVar16._12_4_ = fVar48;
      uVar98 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd5120);
      auVar22._8_4_ = uVar96;
      auVar22._0_8_ = _DAT_01d49dc0;
      auVar22._12_4_ = uVar97;
      uVar101 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd5418);
      auVar23._8_4_ = uVar96;
      auVar23._0_8_ = _DAT_01d49dc0;
      auVar23._12_4_ = uVar97;
      uVar109 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd4f90);
      auVar24._8_4_ = uVar96;
      auVar24._0_8_ = _DAT_01d49dc0;
      auVar24._12_4_ = uVar97;
      uVar92 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd50f8);
      auVar17._4_4_ = fVar93;
      auVar17._0_4_ = fVar50;
      auVar17._8_4_ = fVar94;
      auVar17._12_4_ = fVar48;
      uVar25 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd4f90);
      auVar18._4_4_ = fVar93;
      auVar18._0_4_ = fVar50;
      auVar18._8_4_ = fVar94;
      auVar18._12_4_ = fVar48;
      uVar139 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd50f8);
      auVar19._4_4_ = fVar93;
      auVar19._0_4_ = fVar50;
      auVar19._8_4_ = fVar94;
      auVar19._12_4_ = fVar48;
      uVar141 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd5418);
      fVar108 = (float)uVar109;
      fVar115 = (float)((ulong)uVar109 >> 0x20);
      auVar5[1] = uVar52;
      auVar5[0] = uVar51;
      auVar5[2] = uVar53;
      auVar5[3] = uVar54;
      auVar5[4] = uVar55;
      auVar5[5] = uVar56;
      auVar5[6] = uVar57;
      auVar5[7] = uVar58;
      auVar5[8] = uVar59;
      auVar5[9] = uVar60;
      auVar5[10] = uVar61;
      auVar5[0xb] = uVar62;
      auVar5[0xc] = uVar63;
      auVar5[0xd] = uVar64;
      auVar5[0xe] = uVar65;
      auVar5[0xf] = uVar66;
      uVar102 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd4f90);
      fVar137 = (float)uVar92;
      fVar138 = (float)((ulong)uVar92 >> 0x20);
      auVar20._4_4_ = fVar93;
      auVar20._0_4_ = fVar50;
      auVar20._8_4_ = fVar94;
      auVar20._12_4_ = fVar48;
      uVar109 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd5270);
      auVar21._4_4_ = fVar93;
      auVar21._0_4_ = fVar50;
      auVar21._8_4_ = fVar50;
      auVar21._12_4_ = fVar93;
      uVar92 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd50b0);
      fVar105 = (float)_UNK_01d4ae98;
      fVar95 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
      fVar74 = (float)_DAT_01d4ae90;
      fVar104 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
      fVar126 = (float)uVar101;
      fVar127 = (float)((ulong)uVar101 >> 0x20);
      auVar6[1] = uVar52;
      auVar6[0] = uVar51;
      auVar6[2] = uVar53;
      auVar6[3] = uVar54;
      auVar6[4] = uVar55;
      auVar6[5] = uVar56;
      auVar6[6] = uVar57;
      auVar6[7] = uVar58;
      auVar6[8] = uVar59;
      auVar6[9] = uVar60;
      auVar6[10] = uVar61;
      auVar6[0xb] = uVar62;
      auVar6[0xc] = uVar63;
      auVar6[0xd] = uVar64;
      auVar6[0xe] = uVar65;
      auVar6[0xf] = uVar66;
      uVar128 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd50f8);
      fVar49 = (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51)));
      fVar129 = (fVar50 * fVar108 + fVar74 * (float)uVar25 * 0.0 + fVar74 * fVar126 * (float)uVar139
                ) - fVar137 * (float)uVar141;
      fVar131 = (fVar93 * fVar115 + fVar104 * (float)((ulong)uVar25 >> 0x20) * 0.0 +
                fVar104 * fVar127 * (float)((ulong)uVar139 >> 0x20)) -
                fVar138 * (float)((ulong)uVar141 >> 0x20);
      fVar133 = (fVar94 * fVar108 + fVar105 * fVar137 * (float)uVar98 +
                fVar105 * (float)uVar92 * 0.0) - fVar126 * (float)uVar109;
      fVar134 = (fVar48 * fVar115 + fVar95 * fVar138 * (float)((ulong)uVar98 >> 0x20) +
                fVar95 * (float)((ulong)uVar92 >> 0x20) * 0.0) -
                fVar127 * (float)((ulong)uVar109 >> 0x20);
      auVar31._4_4_ = fVar131;
      auVar31._0_4_ = fVar129;
      auVar31._8_4_ = fVar133;
      auVar31._12_4_ = fVar134;
      uVar142 = a64_TBL(ZEXT816(0),auVar31,DAT_01cd4f90);
      auVar32._4_4_ = fVar131;
      auVar32._0_4_ = fVar129;
      auVar32._8_4_ = fVar133;
      auVar32._12_4_ = fVar134;
      uVar144 = a64_TBL(ZEXT816(0),auVar32,DAT_01cd5120);
      fVar103 = (float)((ulong)uVar102 >> 0x20);
      lVar45 = *(long *)(param_1 + 0xa0);
      auVar7[1] = uVar52;
      auVar7[0] = uVar51;
      auVar7[2] = uVar53;
      auVar7[3] = uVar54;
      auVar7[4] = uVar55;
      auVar7[5] = uVar56;
      auVar7[6] = uVar57;
      auVar7[7] = uVar58;
      auVar7[8] = uVar59;
      auVar7[9] = uVar60;
      auVar7[10] = uVar61;
      auVar7[0xb] = uVar62;
      auVar7[0xc] = uVar63;
      auVar7[0xd] = uVar64;
      auVar7[0xe] = uVar65;
      auVar7[0xf] = uVar66;
      uVar145 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd5418);
      auVar39._4_4_ = fVar131;
      auVar39._0_4_ = fVar129;
      auVar39._8_4_ = fVar129;
      auVar39._12_4_ = fVar131;
      uVar141 = a64_TBL(ZEXT816(0),auVar39,DAT_01cd50b0);
      fVar140 = (float)((ulong)uVar128 >> 0x20);
      auVar33._4_4_ = fVar131;
      auVar33._0_4_ = fVar129;
      auVar33._8_4_ = fVar133;
      auVar33._12_4_ = fVar134;
      uVar143 = a64_TBL(ZEXT816(0),auVar33,DAT_01cd5418);
      fVar50 = (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51)));
      auVar34._4_4_ = fVar131;
      auVar34._0_4_ = fVar129;
      auVar34._8_4_ = fVar133;
      auVar34._12_4_ = fVar134;
      uVar92 = a64_TBL(ZEXT816(0),auVar34,DAT_01cd50f8);
      auVar35._4_4_ = fVar131;
      auVar35._0_4_ = fVar129;
      auVar35._8_4_ = fVar133;
      auVar35._12_4_ = fVar134;
      uVar139 = a64_TBL(ZEXT816(0),auVar35,DAT_01cd5270);
      pauVar1 = (undefined1 (*) [12])(lVar45 + 0xa0);
      fVar135 = (float)((ulong)*(undefined8 *)(lVar45 + 0xa8) >> 0x20);
      fVar130 = (float)*(undefined8 *)*pauVar1;
      fVar132 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      fVar93 = fVar130 * (float)_DAT_01d4ae80;
      fVar67 = fVar132 * fVar67;
      fVar48 = (float)*(undefined8 *)(lVar45 + 0xa8) * (float)_UNK_01d4ae88;
      fVar107 = fVar135 * fVar107;
      auVar26._4_4_ = fVar67;
      auVar26._0_4_ = fVar93;
      auVar26._8_4_ = fVar48;
      auVar26._12_4_ = fVar107;
      uVar98 = a64_TBL(ZEXT816(0),auVar26,DAT_01cd5120);
      fVar146 = (float)((ulong)uVar145 >> 0x20);
      auVar40._4_4_ = fVar67;
      auVar40._0_4_ = fVar93;
      auVar27._4_4_ = fVar67;
      auVar27._0_4_ = fVar93;
      auVar27._8_4_ = fVar48;
      auVar27._12_4_ = fVar107;
      uVar110 = a64_TBL(ZEXT816(0),auVar27,DAT_01cd4f90);
      auVar28._4_4_ = fVar67;
      auVar28._0_4_ = fVar93;
      auVar28._8_4_ = fVar48;
      auVar28._12_4_ = fVar107;
      uVar109 = a64_TBL(ZEXT816(0),auVar28,DAT_01cd5418);
      auVar40._12_4_ = fVar67;
      auVar40._8_4_ = fVar93;
      uVar147 = a64_TBL(ZEXT816(0),auVar40,DAT_01cd50b0);
      auVar29._4_4_ = fVar67;
      auVar29._0_4_ = fVar93;
      auVar29._8_4_ = fVar48;
      auVar29._12_4_ = fVar107;
      uVar136 = a64_TBL(ZEXT816(0),auVar29,DAT_01cd50f8);
      auVar30._4_4_ = fVar67;
      auVar30._0_4_ = fVar93;
      auVar30._8_4_ = fVar48;
      auVar30._12_4_ = fVar107;
      uVar25 = a64_TBL(ZEXT816(0),auVar30,DAT_01cd5270);
      auVar36._12_4_ = fVar135;
      auVar36._0_12_ = *pauVar1;
      uVar101 = a64_TBL(ZEXT816(0),auVar36,DAT_01cd4f90);
      fVar106 = (float)((ulong)uVar101 >> 0x20);
      fVar93 = (fVar108 * fVar93 + fVar74 * (float)uVar110 * 0.0 + fVar74 * fVar126 * (float)uVar136
               ) - fVar137 * (float)uVar109;
      fVar94 = (fVar115 * fVar67 + fVar104 * (float)((ulong)uVar110 >> 0x20) * 0.0 +
               fVar104 * fVar127 * (float)((ulong)uVar136 >> 0x20)) -
               fVar138 * (float)((ulong)uVar109 >> 0x20);
      uVar51 = SUB41(fVar94,0);
      uVar52 = (undefined1)((uint)fVar94 >> 8);
      uVar53 = (undefined1)((uint)fVar94 >> 0x10);
      uVar54 = (undefined1)((uint)fVar94 >> 0x18);
      fVar48 = (fVar108 * fVar48 + fVar105 * fVar137 * (float)uVar98 +
               fVar105 * (float)uVar147 * 0.0) - fVar126 * (float)uVar25;
      uVar59 = SUB41(fVar48,0);
      uVar60 = (undefined1)((uint)fVar48 >> 8);
      uVar61 = (undefined1)((uint)fVar48 >> 0x10);
      uVar62 = (undefined1)((uint)fVar48 >> 0x18);
      fVar67 = (fVar115 * fVar107 + fVar95 * fVar138 * (float)((ulong)uVar98 >> 0x20) +
               fVar95 * (float)((ulong)uVar147 >> 0x20) * 0.0) -
               fVar127 * (float)((ulong)uVar25 >> 0x20);
      uVar63 = SUB41(fVar67,0);
      uVar64 = (undefined1)((uint)fVar67 >> 8);
      uVar65 = (undefined1)((uint)fVar67 >> 0x10);
      uVar66 = (undefined1)((uint)fVar67 >> 0x18);
      auVar8[4] = uVar51;
      auVar8._0_4_ = fVar93;
      auVar8[5] = uVar52;
      auVar8[6] = uVar53;
      auVar8[7] = uVar54;
      auVar8[8] = uVar59;
      auVar8[9] = uVar60;
      auVar8[10] = uVar61;
      auVar8[0xb] = uVar62;
      auVar8[0xc] = uVar63;
      auVar8[0xd] = uVar64;
      auVar8[0xe] = uVar65;
      auVar8[0xf] = uVar66;
      uVar136 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd4f90);
      auVar9[4] = uVar51;
      auVar9._0_4_ = fVar93;
      auVar9[5] = uVar52;
      auVar9[6] = uVar53;
      auVar9[7] = uVar54;
      auVar9[8] = uVar59;
      auVar9[9] = uVar60;
      auVar9[10] = uVar61;
      auVar9[0xb] = uVar62;
      auVar9[0xc] = uVar63;
      auVar9[0xd] = uVar64;
      auVar9[0xe] = uVar65;
      auVar9[0xf] = uVar66;
      uVar99 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd5120);
      auVar37._12_4_ = fVar135;
      auVar37._0_12_ = *pauVar1;
      uVar109 = a64_TBL(ZEXT816(0),auVar37,DAT_01cd50f8);
      fVar107 = (float)((ulong)uVar109 >> 0x20);
      auVar10[4] = uVar51;
      auVar10._0_4_ = fVar93;
      auVar10[5] = uVar52;
      auVar10[6] = uVar53;
      auVar10[7] = uVar54;
      auVar10[8] = uVar59;
      auVar10[9] = uVar60;
      auVar10[10] = uVar61;
      auVar10[0xb] = uVar62;
      auVar10[0xc] = uVar63;
      auVar10[0xd] = uVar64;
      auVar10[0xe] = uVar65;
      auVar10[0xf] = uVar66;
      uVar110 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd50f8);
      auVar11[4] = uVar51;
      auVar11._0_4_ = fVar93;
      auVar11[5] = uVar52;
      auVar11[6] = uVar53;
      auVar11[7] = uVar54;
      auVar11[8] = uVar59;
      auVar11[9] = uVar60;
      auVar11[10] = uVar61;
      auVar11[0xb] = uVar62;
      auVar11[0xc] = uVar63;
      auVar11[0xd] = uVar64;
      auVar11[0xe] = uVar65;
      auVar11[0xf] = uVar66;
      uVar98 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd5270);
      auVar38._12_4_ = fVar135;
      auVar38._0_12_ = *pauVar1;
      uVar100 = a64_TBL(ZEXT816(0),auVar38,DAT_01cd5418);
      auVar12[4] = uVar51;
      auVar12._0_4_ = fVar93;
      auVar12[5] = uVar52;
      auVar12[6] = uVar53;
      auVar12[7] = uVar54;
      auVar12[8] = uVar59;
      auVar12[9] = uVar60;
      auVar12[10] = uVar61;
      auVar12[0xb] = uVar62;
      auVar12[0xc] = uVar63;
      auVar12[0xd] = uVar64;
      auVar12[0xe] = uVar65;
      auVar12[0xf] = uVar66;
      uVar147 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd5418);
      auVar13[4] = uVar51;
      auVar13._0_4_ = fVar93;
      auVar13[5] = uVar52;
      auVar13[6] = uVar53;
      auVar13[7] = uVar54;
      auVar13[8] = SUB41(fVar93,0);
      auVar13[9] = (char)((uint)fVar93 >> 8);
      auVar13[10] = (char)((uint)fVar93 >> 0x10);
      auVar13[0xb] = (char)((uint)fVar93 >> 0x18);
      auVar13[0xc] = uVar51;
      auVar13[0xd] = uVar52;
      auVar13[0xe] = uVar53;
      auVar13[0xf] = uVar54;
      uVar25 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd50b0);
      fVar108 = (float)((ulong)uVar100 >> 0x20);
      fVar93 = ((float)uVar101 * fVar93 + fVar74 * fVar130 * (float)uVar136 +
               fVar74 * (float)uVar100 * (float)uVar110) - (float)uVar109 * (float)uVar147;
      fVar94 = (fVar106 * fVar94 + fVar104 * fVar132 * (float)((ulong)uVar136 >> 0x20) +
               fVar104 * fVar108 * (float)((ulong)uVar110 >> 0x20)) -
               fVar107 * (float)((ulong)uVar147 >> 0x20);
      fVar48 = ((float)uVar101 * fVar48 + fVar105 * (float)uVar109 * (float)uVar99 +
               fVar105 * fVar130 * (float)uVar25) - (float)uVar100 * (float)uVar98;
      fVar67 = (fVar106 * fVar67 + fVar95 * fVar107 * (float)((ulong)uVar99 >> 0x20) +
               fVar95 * fVar132 * (float)((ulong)uVar25 >> 0x20)) -
               fVar108 * (float)((ulong)uVar98 >> 0x20);
      fVar74 = ((float)uVar102 * fVar129 + fVar74 * fVar49 * (float)uVar142 +
               fVar74 * (float)uVar145 * (float)uVar92) - (float)uVar128 * (float)uVar143;
      fVar49 = (fVar103 * fVar131 +
                fVar104 * (float)(CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar56,CONCAT14(uVar55,
                                                  fVar49)))) >> 0x20) *
                          (float)((ulong)uVar142 >> 0x20) +
               fVar104 * fVar146 * (float)((ulong)uVar92 >> 0x20)) -
               fVar140 * (float)((ulong)uVar143 >> 0x20);
      fVar104 = ((float)uVar102 * fVar133 + fVar105 * (float)uVar128 * (float)uVar144 +
                fVar105 * fVar50 * (float)uVar141) - (float)uVar145 * (float)uVar139;
      fVar105 = (fVar103 * fVar134 + fVar95 * fVar140 * (float)((ulong)uVar144 >> 0x20) +
                fVar95 * (float)(CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar56,CONCAT14(uVar55,
                                                  fVar50)))) >> 0x20) *
                         (float)((ulong)uVar141 >> 0x20)) -
                fVar146 * (float)((ulong)uVar139 >> 0x20);
      auVar80._0_4_ = -(uint)(*(int *)(lVar45 + 0x3e4) == 0);
      auVar80._4_4_ = auVar80._0_4_;
      auVar80._8_4_ = auVar80._0_4_;
      auVar80._12_4_ = auVar80._0_4_;
      bVar111 = (byte)((ulong)DAT_01d4ab50 >> 8);
      bVar112 = (byte)((ulong)DAT_01d4ab50 >> 0x10);
      bVar113 = (byte)((ulong)DAT_01d4ab50 >> 0x18);
      bVar114 = (byte)((ulong)DAT_01d4ab50 >> 0x20);
      bVar116 = (byte)((ulong)DAT_01d4ab50 >> 0x28);
      bVar117 = (byte)((ulong)DAT_01d4ab50 >> 0x30);
      bVar118 = (byte)((ulong)DAT_01d4ab50 >> 0x38);
      bVar119 = (byte)((ulong)DAT_01d4ab58 >> 8);
      bVar120 = (byte)((ulong)DAT_01d4ab58 >> 0x10);
      bVar121 = (byte)((ulong)DAT_01d4ab58 >> 0x18);
      bVar122 = (byte)((ulong)DAT_01d4ab58 >> 0x20);
      bVar123 = (byte)((ulong)DAT_01d4ab58 >> 0x28);
      bVar124 = (byte)((ulong)DAT_01d4ab58 >> 0x30);
      bVar125 = (byte)((ulong)DAT_01d4ab58 >> 0x38);
      fVar50 = (float)CONCAT13((byte)((uint)fVar93 >> 0x18) & bVar113,
                               CONCAT12((byte)((uint)fVar93 >> 0x10) & bVar112,
                                        CONCAT11((byte)((uint)fVar93 >> 8) & bVar111,
                                                 SUB41(fVar93,0) & (byte)DAT_01d4ab50)));
      auVar82._0_8_ =
           CONCAT17((byte)((uint)fVar94 >> 0x18) & bVar118,
                    CONCAT16((byte)((uint)fVar94 >> 0x10) & bVar117,
                             CONCAT15((byte)((uint)fVar94 >> 8) & bVar116,
                                      CONCAT14(SUB41(fVar94,0) & bVar114,fVar50))));
      auVar82[8] = SUB41(fVar48,0) & (byte)DAT_01d4ab58;
      auVar82[9] = (byte)((uint)fVar48 >> 8) & bVar119;
      auVar82[10] = (byte)((uint)fVar48 >> 0x10) & bVar120;
      auVar82[0xb] = (byte)((uint)fVar48 >> 0x18) & bVar121;
      auVar81[0xc] = SUB41(fVar67,0) & bVar122;
      auVar81._0_12_ = auVar82;
      auVar81[0xd] = (byte)((uint)fVar67 >> 8) & bVar123;
      auVar81[0xe] = (byte)((uint)fVar67 >> 0x10) & bVar124;
      auVar81[0xf] = (byte)((uint)fVar67 >> 0x18) & bVar125;
      auVar91._0_4_ = -fVar50;
      auVar91._4_4_ = -(float)((ulong)auVar82._0_8_ >> 0x20);
      auVar91._8_4_ = -auVar82._8_4_;
      auVar91._12_4_ = -auVar81._12_4_;
      auVar81 = auVar81 ^ (auVar81 ^ auVar91) & auVar80;
      fVar50 = auVar81._0_4_ *
               (float)CONCAT13((byte)((uint)fVar74 >> 0x18) & bVar113,
                               CONCAT12((byte)((uint)fVar74 >> 0x10) & bVar112,
                                        CONCAT11((byte)((uint)fVar74 >> 8) & bVar111,
                                                 SUB41(fVar74,0) & (byte)DAT_01d4ab50)));
      fVar49 = auVar81._4_4_ *
               (float)CONCAT13((byte)((uint)fVar49 >> 0x18) & bVar118,
                               CONCAT12((byte)((uint)fVar49 >> 0x10) & bVar117,
                                        CONCAT11((byte)((uint)fVar49 >> 8) & bVar116,
                                                 SUB41(fVar49,0) & bVar114)));
      uVar51 = (undefined1)((uint)fVar49 >> 8);
      uVar52 = (undefined1)((uint)fVar49 >> 0x10);
      uVar53 = (undefined1)((uint)fVar49 >> 0x18);
      fVar93 = auVar81._8_4_ *
               (float)CONCAT13((byte)((uint)fVar104 >> 0x18) & bVar121,
                               CONCAT12((byte)((uint)fVar104 >> 0x10) & bVar120,
                                        CONCAT11((byte)((uint)fVar104 >> 8) & bVar119,
                                                 SUB41(fVar104,0) & (byte)DAT_01d4ab58)));
      uVar54 = (undefined1)((uint)fVar93 >> 8);
      uVar55 = (undefined1)((uint)fVar93 >> 0x10);
      uVar56 = (undefined1)((uint)fVar93 >> 0x18);
      fVar94 = auVar81._12_4_ *
               (float)CONCAT13((byte)((uint)fVar105 >> 0x18) & bVar125,
                               CONCAT12((byte)((uint)fVar105 >> 0x10) & bVar124,
                                        CONCAT11((byte)((uint)fVar105 >> 8) & bVar123,
                                                 SUB41(fVar105,0) & bVar122)));
      uVar57 = (undefined1)((uint)fVar94 >> 8);
      uVar58 = (undefined1)((uint)fVar94 >> 0x10);
      uVar59 = (undefined1)((uint)fVar94 >> 0x18);
      auVar14[4] = SUB41(fVar49,0);
      auVar14._0_4_ = fVar50;
      auVar14[5] = uVar51;
      auVar14[6] = uVar52;
      auVar14[7] = uVar53;
      auVar14[8] = SUB41(fVar93,0);
      auVar14[9] = uVar54;
      auVar14[10] = uVar55;
      auVar14[0xb] = uVar56;
      auVar14[0xc] = SUB41(fVar94,0);
      auVar14[0xd] = uVar57;
      auVar14[0xe] = uVar58;
      auVar14[0xf] = uVar59;
      auVar15[4] = SUB41(fVar49,0);
      auVar15._0_4_ = fVar50;
      auVar15[5] = uVar51;
      auVar15[6] = uVar52;
      auVar15[7] = uVar53;
      auVar15[8] = SUB41(fVar93,0);
      auVar15[9] = uVar54;
      auVar15[10] = uVar55;
      auVar15[0xb] = uVar56;
      auVar15[0xc] = SUB41(fVar94,0);
      auVar15[0xd] = uVar57;
      auVar15[0xe] = uVar58;
      auVar15[0xf] = uVar59;
      auVar83 = NEON_ext(auVar14,auVar15,8,1);
      fVar50 = auVar83._0_4_ + fVar50 + auVar83._4_4_ + fVar49;
      if (DAT_01d4bfe0 < fVar50) goto LAB_00edd5d0;
      if (ABS(fVar50) <= DAT_01d4bfe0) {
        (**(code **)(*plVar47 + 0x180))(0,plVar47,PTR_DAT_02720010);
        return;
      }
    }
    iVar68 = 2;
  }
  else {
LAB_00edd5d0:
    iVar68 = 1;
  }
  (**(code **)(*plVar47 + 0x210))(plVar47);
  if (*(int *)(param_1 + 0xb0) == 3) {
    fVar50 = (float)CONCAT13(extraout_var_07,
                             CONCAT12(extraout_var_04,CONCAT11(extraout_var_01,extraout_b0_01))) +
             -0.5;
    fVar50 = fVar50 + fVar50;
    uVar51 = 0;
    uVar52 = 0;
    uVar53 = 0x80;
    uVar54 = 0x3f;
    if (NAN((float)CONCAT13(extraout_var_07,
                            CONCAT12(extraout_var_04,CONCAT11(extraout_var_01,extraout_b0_01)))) ||
        0.5 <= (float)CONCAT13(extraout_var_07,
                               CONCAT12(extraout_var_04,CONCAT11(extraout_var_01,extraout_b0_01))))
    {
      uVar51 = SUB41(fVar50,0);
      uVar52 = (undefined1)((uint)fVar50 >> 8);
      uVar53 = (undefined1)((uint)fVar50 >> 0x10);
      uVar54 = (undefined1)((uint)fVar50 >> 0x18);
    }
    iVar75 = *(int *)(param_1 + 0xa8);
    if ((float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) == 0.75 ||
        (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) < 0.75) goto LAB_00edd620;
  }
  else {
    uVar51 = extraout_b0_01;
    uVar52 = extraout_var_01;
    uVar53 = extraout_var_04;
    uVar54 = extraout_var_07;
    if (*(int *)(param_1 + 0xb0) == 2) {
      fVar50 = (float)CONCAT13(extraout_var_07,
                               CONCAT12(extraout_var_04,CONCAT11(extraout_var_01,extraout_b0_01))) +
               (float)CONCAT13(extraout_var_07,
                               CONCAT12(extraout_var_04,CONCAT11(extraout_var_01,extraout_b0_01)));
      uVar51 = SUB41(fVar50,0);
      uVar52 = (undefined1)((uint)fVar50 >> 8);
      uVar53 = (undefined1)((uint)fVar50 >> 0x10);
      uVar54 = (undefined1)((uint)fVar50 >> 0x18);
    }
    iVar75 = *(int *)(param_1 + 0xa8);
    if ((float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) == 0.75 ||
        (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) < 0.75) {
LAB_00edd620:
      if (iVar75 != 4) {
        return;
      }
      iVar75 = 4;
    }
  }
  if (iVar68 == 2) {
    if (*(int *)(param_1 + 0xb8) == 5) {
      (**(code **)(*plVar47 + 0x180))(0,plVar47,PTR_DAT_02720010);
      uVar96 = 3;
    }
    else {
      uVar96 = 1;
    }
  }
  else {
    if (iVar68 != 1) goto LAB_00edd914;
    if (*(int *)(param_1 + 0xb8) == *(int *)(*(long *)(param_1 + 0xa0) + 1000)) {
      (**(code **)(*plVar47 + 0x180))(0,plVar47,PTR_DAT_02720010);
      uVar96 = 2;
    }
    else {
      uVar96 = 0;
    }
  }
  *(undefined4 *)(param_1 + 0xac) = uVar96;
  iVar75 = *(int *)(param_1 + 0xa8);
LAB_00edd914:
  if (iVar75 == 4) {
    if (*(int *)(param_1 + 0xac) == 1) {
      *(undefined8 *)(param_1 + 0xa8) = 0x400000001;
      *(undefined1 *)(param_1 + 0xb4) = 1;
      (**(code **)(*plVar47 + 0x180))(0,plVar47,PTR_DAT_02720010);
      iVar68 = *(int *)(param_1 + 0xb8) + -1;
    }
    else {
      if (*(int *)(param_1 + 0xac) != 0) {
        return;
      }
      *(undefined8 *)(param_1 + 0xa8) = 0x400000000;
      *(undefined1 *)(param_1 + 0xb4) = 1;
      (**(code **)(*plVar47 + 0x180))(0,plVar47,PTR_DAT_02720010);
      iVar68 = *(int *)(param_1 + 0xb8) + 1;
    }
    *(int *)(param_1 + 0xb8) = iVar68;
  }
  return;
}


