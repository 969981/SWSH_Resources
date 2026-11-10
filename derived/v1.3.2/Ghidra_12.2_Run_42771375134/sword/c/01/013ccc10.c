/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013ccc10; name: FUN_013ccc10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013ccc10(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar23;
  code *pcVar24;
  long *plVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  ulong uVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  long lVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  byte bVar36;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  byte bVar37;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  byte bVar38;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  byte bVar39;
  undefined1 uVar40;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  byte bVar41;
  undefined1 uVar42;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  byte bVar43;
  undefined1 uVar44;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  byte bVar45;
  undefined1 uVar46;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  byte bVar47;
  undefined1 uVar48;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  byte bVar49;
  undefined1 uVar50;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  byte bVar51;
  undefined1 uVar52;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  byte bVar53;
  undefined1 uVar54;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  byte bVar55;
  undefined1 uVar56;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  byte bVar57;
  undefined1 uVar58;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  byte bVar59;
  undefined1 uVar60;
  undefined1 extraout_var_25;
  undefined1 extraout_var_26;
  byte bVar61;
  undefined1 uVar62;
  undefined1 extraout_var_27;
  undefined1 extraout_var_28;
  byte bVar63;
  float fVar64;
  int iVar65;
  float fVar66;
  float fVar67;
  undefined8 uVar68;
  int iVar78;
  undefined1 auVar69 [16];
  float fVar75;
  undefined1 auVar70 [16];
  int iVar76;
  int iVar80;
  undefined1 auVar71 [16];
  float fVar77;
  undefined1 auVar72 [16];
  int iVar79;
  int iVar81;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined8 uVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar94;
  undefined4 uVar95;
  undefined4 uVar96;
  undefined8 uVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined8 uVar102;
  undefined8 uVar103;
  undefined8 uVar104;
  undefined8 uVar105;
  undefined8 uVar106;
  float fStack_1cc;
  float fStack_1c4;
  float fStack_1ac;
  float fStack_1a4;
  undefined1 *local_1a0;
  code *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  undefined8 *local_180;
  undefined8 *local_178;
  long *local_170;
  long *plStack_168;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined *local_100;
  code *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined1 **local_e0;
  long *local_d8;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined1 *local_58;
  
  if ((*(long *)(param_2 + 0x68) != 0) &&
     (puVar30 = *(undefined8 **)(*(long *)(param_2 + 0x68) + 0x60), puVar30 != (undefined8 *)0x0)) {
    plVar25 = (long *)(**(code **)*puVar30)(puVar30);
    lVar26 = FUN_0132d9a0();
    for (; plVar25 != (long *)0x0; plVar25 = (long *)*plVar25) {
      if (plVar25 == (long *)lVar26) {
        puVar31 = puVar30 + -10;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        plVar25 = (long *)puVar30[0x60];
        goto joined_r0x013cd118;
      }
    }
  }
  puVar31 = (undefined8 *)0x0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  plVar25 = _DAT_00000350;
joined_r0x013cd118:
  if (plVar25 != (long *)0x0) {
    lVar26 = plVar25[0xb];
    if (*(long *)(lVar26 + 0x58) == 0) {
      uVar27 = (**(code **)**(undefined8 **)(lVar26 + 0x60))();
      *(undefined8 *)(lVar26 + 0x58) = uVar27;
    }
    piVar1 = (int *)(lVar26 + 0x54);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  auVar4 = *(undefined1 (*) [16])(plVar25 + 0x14);
  fVar75 = auVar4._0_4_;
  fVar35 = fVar75 * (float)_DAT_01d4ae80;
  fVar98 = auVar4._4_4_;
  fVar33 = fVar98 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
  uVar40 = SUB41(fVar33,0);
  uVar42 = (undefined1)((uint)fVar33 >> 8);
  uVar44 = (undefined1)((uint)fVar33 >> 0x10);
  uVar46 = (undefined1)((uint)fVar33 >> 0x18);
  fVar67 = auVar4._8_4_ * (float)_UNK_01d4ae88;
  uVar48 = SUB41(fVar67,0);
  uVar50 = (undefined1)((uint)fVar67 >> 8);
  uVar52 = (undefined1)((uint)fVar67 >> 0x10);
  uVar54 = (undefined1)((uint)fVar67 >> 0x18);
  fVar64 = auVar4._12_4_ * (float)((ulong)_UNK_01d4ae88 >> 0x20);
  uVar56 = SUB41(fVar64,0);
  uVar58 = (undefined1)((uint)fVar64 >> 8);
  uVar60 = (undefined1)((uint)fVar64 >> 0x10);
  uVar62 = (undefined1)((uint)fVar64 >> 0x18);
  uVar95 = (undefined4)_UNK_01d49df8;
  uVar96 = (undefined4)((ulong)_UNK_01d49df8 >> 0x20);
  auVar20._8_4_ = uVar95;
  auVar20._0_8_ = _DAT_01d49df0;
  auVar20._12_4_ = uVar96;
  uVar27 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd4f90);
  auVar21._8_4_ = uVar95;
  auVar21._0_8_ = _DAT_01d49df0;
  auVar21._12_4_ = uVar96;
  uVar97 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd50f8);
  auVar22._8_4_ = uVar95;
  auVar22._0_8_ = _DAT_01d49df0;
  auVar22._12_4_ = uVar96;
  uVar82 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd5418);
  fVar94 = (float)((ulong)uVar82 >> 0x20);
  auVar13[4] = uVar40;
  auVar13._0_4_ = fVar35;
  auVar13[5] = uVar42;
  auVar13[6] = uVar44;
  auVar13[7] = uVar46;
  auVar13[8] = uVar48;
  auVar13[9] = uVar50;
  auVar13[10] = uVar52;
  auVar13[0xb] = uVar54;
  auVar13[0xc] = uVar56;
  auVar13[0xd] = uVar58;
  auVar13[0xe] = uVar60;
  auVar13[0xf] = uVar62;
  uVar104 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd5120);
  auVar14[4] = uVar40;
  auVar14._0_4_ = fVar35;
  auVar14[5] = uVar42;
  auVar14[6] = uVar44;
  auVar14[7] = uVar46;
  auVar14[8] = uVar48;
  auVar14[9] = uVar50;
  auVar14[10] = uVar52;
  auVar14[0xb] = uVar54;
  auVar14[0xc] = uVar56;
  auVar14[0xd] = uVar58;
  auVar14[0xe] = uVar60;
  auVar14[0xf] = uVar62;
  uVar106 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd5270);
  fVar12 = (float)((ulong)uVar27 >> 0x20);
  auVar15[4] = uVar40;
  auVar15._0_4_ = fVar35;
  auVar15[5] = uVar42;
  auVar15[6] = uVar44;
  auVar15[7] = uVar46;
  auVar15[8] = uVar48;
  auVar15[9] = uVar50;
  auVar15[10] = uVar52;
  auVar15[0xb] = uVar54;
  auVar15[0xc] = uVar56;
  auVar15[0xd] = uVar58;
  auVar15[0xe] = uVar60;
  auVar15[0xf] = uVar62;
  uVar102 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd4f90);
  auVar16[4] = uVar40;
  auVar16._0_4_ = fVar35;
  auVar16[5] = uVar42;
  auVar16[6] = uVar44;
  auVar16[7] = uVar46;
  auVar16[8] = uVar48;
  auVar16[9] = uVar50;
  auVar16[10] = uVar52;
  auVar16[0xb] = uVar54;
  auVar16[0xc] = uVar56;
  auVar16[0xd] = uVar58;
  auVar16[0xe] = uVar60;
  auVar16[0xf] = uVar62;
  uVar105 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd5418);
  uVar23 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd50f8);
  fVar34 = (float)((ulong)uVar23 >> 0x20);
  fVar66 = (float)((ulong)uVar97 >> 0x20);
  auVar17[4] = uVar40;
  auVar17._0_4_ = fVar35;
  auVar17[5] = uVar42;
  auVar17[6] = uVar44;
  auVar17[7] = uVar46;
  auVar17[8] = uVar48;
  auVar17[9] = uVar50;
  auVar17[10] = uVar52;
  auVar17[0xb] = uVar54;
  auVar17[0xc] = uVar56;
  auVar17[0xd] = uVar58;
  auVar17[0xe] = uVar60;
  auVar17[0xf] = uVar62;
  uVar103 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd50f8);
  auVar18[4] = uVar40;
  auVar18._0_4_ = fVar35;
  auVar18[5] = uVar42;
  auVar18[6] = uVar44;
  auVar18[7] = uVar46;
  auVar18[8] = SUB41(fVar35,0);
  auVar18[9] = (char)((uint)fVar35 >> 8);
  auVar18[10] = (char)((uint)fVar35 >> 0x10);
  auVar18[0xb] = (char)((uint)fVar35 >> 0x18);
  auVar18[0xc] = uVar40;
  auVar18[0xd] = uVar42;
  auVar18[0xe] = uVar44;
  auVar18[0xf] = uVar46;
  uVar68 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd50b0);
  fVar77 = (float)_DAT_01d4ae90;
  fVar99 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  fVar100 = (float)_UNK_01d4ae98;
  fVar101 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  uVar19 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd4f90);
  fVar35 = (fVar35 * (float)uVar27 + fVar77 * (float)uVar102 * 0.0 +
           fVar77 * (float)uVar82 * (float)uVar103) - (float)uVar97 * (float)uVar105;
  fVar33 = (fVar33 * fVar12 + fVar99 * (float)((ulong)uVar102 >> 0x20) * 0.0 +
           fVar99 * fVar94 * (float)((ulong)uVar103 >> 0x20)) -
           fVar66 * (float)((ulong)uVar105 >> 0x20);
  uVar40 = SUB41(fVar33,0);
  uVar42 = (undefined1)((uint)fVar33 >> 8);
  uVar44 = (undefined1)((uint)fVar33 >> 0x10);
  uVar46 = (undefined1)((uint)fVar33 >> 0x18);
  fVar67 = (fVar67 * (float)uVar27 + fVar100 * (float)uVar97 * (float)uVar104 +
           fVar100 * (float)uVar68 * 0.0) - (float)uVar82 * (float)uVar106;
  uVar48 = SUB41(fVar67,0);
  uVar50 = (undefined1)((uint)fVar67 >> 8);
  uVar52 = (undefined1)((uint)fVar67 >> 0x10);
  uVar54 = (undefined1)((uint)fVar67 >> 0x18);
  fVar12 = (fVar64 * fVar12 + fVar101 * fVar66 * (float)((ulong)uVar104 >> 0x20) +
           fVar101 * (float)((ulong)uVar68 >> 0x20) * 0.0) -
           fVar94 * (float)((ulong)uVar106 >> 0x20);
  uVar56 = SUB41(fVar12,0);
  uVar58 = (undefined1)((uint)fVar12 >> 8);
  uVar60 = (undefined1)((uint)fVar12 >> 0x10);
  uVar62 = (undefined1)((uint)fVar12 >> 0x18);
  auVar83[4] = uVar40;
  auVar83._0_4_ = fVar35;
  auVar83[5] = uVar42;
  auVar83[6] = uVar44;
  auVar83[7] = uVar46;
  auVar83[8] = uVar48;
  auVar83[9] = uVar50;
  auVar83[10] = uVar52;
  auVar83[0xb] = uVar54;
  auVar83[0xc] = uVar56;
  auVar83[0xd] = uVar58;
  auVar83[0xe] = uVar60;
  auVar83[0xf] = uVar62;
  uVar97 = a64_TBL(ZEXT816(0),auVar83,DAT_01cd4f90);
  auVar88[4] = uVar40;
  auVar88._0_4_ = fVar35;
  auVar88[5] = uVar42;
  auVar88[6] = uVar44;
  auVar88[7] = uVar46;
  auVar88[8] = uVar48;
  auVar88[9] = uVar50;
  auVar88[10] = uVar52;
  auVar88[0xb] = uVar54;
  auVar88[0xc] = uVar56;
  auVar88[0xd] = uVar58;
  auVar88[0xe] = uVar60;
  auVar88[0xf] = uVar62;
  uVar104 = a64_TBL(ZEXT816(0),auVar88,DAT_01cd5120);
  fVar64 = (float)((ulong)uVar19 >> 0x20);
  uVar103 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5418);
  fVar94 = (float)((ulong)uVar103 >> 0x20);
  auVar4[4] = uVar40;
  auVar4._0_4_ = fVar35;
  auVar4[5] = uVar42;
  auVar4[6] = uVar44;
  auVar4[7] = uVar46;
  auVar4[8] = uVar48;
  auVar4[9] = uVar50;
  auVar4[10] = uVar52;
  auVar4[0xb] = uVar54;
  auVar4[0xc] = uVar56;
  auVar4[0xd] = uVar58;
  auVar4[0xe] = uVar60;
  auVar4[0xf] = uVar62;
  uVar68 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd50f8);
  auVar5[4] = uVar40;
  auVar5._0_4_ = fVar35;
  auVar5[5] = uVar42;
  auVar5[6] = uVar44;
  auVar5[7] = uVar46;
  auVar5[8] = uVar48;
  auVar5[9] = uVar50;
  auVar5[10] = uVar52;
  auVar5[0xb] = uVar54;
  auVar5[0xc] = uVar56;
  auVar5[0xd] = uVar58;
  auVar5[0xe] = uVar60;
  auVar5[0xf] = uVar62;
  uVar82 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5418);
  auVar6[4] = uVar40;
  auVar6._0_4_ = fVar35;
  auVar6[5] = uVar42;
  auVar6[6] = uVar44;
  auVar6[7] = uVar46;
  auVar6[8] = uVar48;
  auVar6[9] = uVar50;
  auVar6[10] = uVar52;
  auVar6[0xb] = uVar54;
  auVar6[0xc] = uVar56;
  auVar6[0xd] = uVar58;
  auVar6[0xe] = uVar60;
  auVar6[0xf] = uVar62;
  uVar102 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5270);
  auVar7[4] = uVar40;
  auVar7._0_4_ = fVar35;
  auVar7[5] = uVar42;
  auVar7[6] = uVar44;
  auVar7[7] = uVar46;
  auVar7[8] = SUB41(fVar35,0);
  auVar7[9] = (char)((uint)fVar35 >> 8);
  auVar7[10] = (char)((uint)fVar35 >> 0x10);
  auVar7[0xb] = (char)((uint)fVar35 >> 0x18);
  auVar7[0xc] = uVar40;
  auVar7[0xd] = uVar42;
  auVar7[0xe] = uVar44;
  auVar7[0xf] = uVar46;
  uVar27 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd50b0);
  fVar35 = ((float)uVar19 * fVar35 + fVar77 * fVar75 * (float)uVar97 +
           fVar77 * (float)uVar103 * (float)uVar68) - (float)uVar23 * (float)uVar82;
  fVar33 = (fVar64 * fVar33 + fVar99 * fVar98 * (float)((ulong)uVar97 >> 0x20) +
           fVar99 * fVar94 * (float)((ulong)uVar68 >> 0x20)) -
           fVar34 * (float)((ulong)uVar82 >> 0x20);
  fVar67 = ((float)uVar19 * fVar67 + fVar100 * (float)uVar23 * (float)uVar104 +
           fVar100 * fVar75 * (float)uVar27) - (float)uVar103 * (float)uVar102;
  fVar12 = (fVar64 * fVar12 + fVar101 * fVar34 * (float)((ulong)uVar104 >> 0x20) +
           fVar101 * fVar98 * (float)((ulong)uVar27 >> 0x20)) -
           fVar94 * (float)((ulong)uVar102 >> 0x20);
  uStack_108 = CONCAT17((byte)((uint)fVar12 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38),
                        CONCAT16((byte)((uint)fVar12 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x30),
                                 CONCAT15((byte)((uint)fVar12 >> 8) &
                                          (byte)((ulong)DAT_01d4ab58 >> 0x28),
                                          CONCAT14(SUB41(fVar12,0) &
                                                   (byte)((ulong)DAT_01d4ab58 >> 0x20),
                                                   CONCAT13((byte)((uint)fVar67 >> 0x18) &
                                                            (byte)((ulong)DAT_01d4ab58 >> 0x18),
                                                            CONCAT12((byte)((uint)fVar67 >> 0x10) &
                                                                     (byte)((ulong)DAT_01d4ab58 >>
                                                                           0x10),
                                                                     CONCAT11((byte)((uint)fVar67 >>
                                                                                    8) &
                                                                              (byte)((ulong)
                                                  DAT_01d4ab58 >> 8),
                                                  SUB41(fVar67,0) & (byte)DAT_01d4ab58)))))));
  local_110 = CONCAT17((byte)((uint)fVar33 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                       CONCAT16((byte)((uint)fVar33 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x30),
                                CONCAT15((byte)((uint)fVar33 >> 8) &
                                         (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                         CONCAT14(SUB41(fVar33,0) &
                                                  (byte)((ulong)DAT_01d4ab50 >> 0x20),
                                                  CONCAT13((byte)((uint)fVar35 >> 0x18) &
                                                           (byte)((ulong)DAT_01d4ab50 >> 0x18),
                                                           CONCAT12((byte)((uint)fVar35 >> 0x10) &
                                                                    (byte)((ulong)DAT_01d4ab50 >>
                                                                          0x10),
                                                                    CONCAT11((byte)((uint)fVar35 >>
                                                                                   8) &
                                                                             (byte)((ulong)
                                                  DAT_01d4ab50 >> 8),
                                                  SUB41(fVar35,0) & (byte)DAT_01d4ab50)))))));
  if (plVar25 != (long *)0x0) {
    lVar26 = plVar25[0xb];
    piVar1 = (int *)(lVar26 + 0x54);
    do {
      iVar65 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar65 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar65 + -1 == 0) {
      *(undefined8 *)(lVar26 + 0x60) = 0;
      (**(code **)(*plVar25 + 0x18))(plVar25);
    }
  }
  plVar25 = (long *)puVar31[0x6a];
  if (plVar25 == (long *)0x0) {
    uStack_118 = _DAT_000000b8;
    local_120 = _DAT_000000b0;
  }
  else {
    lVar26 = plVar25[0xb];
    if (*(long *)(lVar26 + 0x58) == 0) {
      uVar27 = (**(code **)**(undefined8 **)(lVar26 + 0x60))();
      *(undefined8 *)(lVar26 + 0x58) = uVar27;
    }
    piVar1 = (int *)(lVar26 + 0x54);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uStack_118 = plVar25[0x17];
    local_120 = plVar25[0x16];
    lVar26 = plVar25[0xb];
    piVar1 = (int *)(lVar26 + 0x54);
    do {
      iVar65 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar65 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar65 + -1 == 0) {
      *(undefined8 *)(lVar26 + 0x60) = 0;
      (**(code **)(*plVar25 + 0x18))(plVar25);
    }
  }
  local_60 = 0;
  local_58 = (undefined1 *)0x0;
  local_68 = 0;
  FUN_013a5170(&local_78);
  local_e0 = &local_58;
  local_d8 = &local_68;
  local_100 = &LAB_013d0bb0;
  local_f8 = FUN_013d0c50;
  local_f0 = &LAB_013d0c60;
  local_e8 = &LAB_013d0c70;
  FUN_0130a080(&local_70,local_78,&local_100);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  pcVar24 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (undefined1 *)0x0;
    local_e8 = (undefined1 *)0x0;
    local_100 = (undefined1 *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar24)(&local_e0);
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  if (local_58 != (undefined1 *)0x2) goto LAB_013cd238;
  lVar26 = FUN_00d3fd50(local_68,&local_78);
  lVar28 = FUN_00d3fd50(local_60,&local_78);
  uVar29 = FUN_012e7ca0(lVar26);
  if (((((uVar29 & 1) == 0) || (uVar29 = FUN_012e7ca0(lVar28), (uVar29 & 1) == 0)) ||
      (uVar29 = FUN_012e7c90(lVar26), (uVar29 & 1) != 0)) ||
     (((uVar29 = FUN_012e7c90(lVar28), (uVar29 & 1) != 0 ||
       (uVar29 = FUN_012e8f10(lVar26), (uVar29 & 1) != 0)) ||
      ((uVar29 = FUN_012e8f10(lVar28), (uVar29 & 1) != 0 ||
       ((uVar29 = FUN_012e8e40(lVar26), (uVar29 & 1) != 0 ||
        (uVar29 = FUN_012e8e40(lVar28), (uVar29 & 1) != 0)))))))) goto LAB_013cd238;
  FUN_012e4ed0(lVar26);
  fVar12 = (float)CONCAT13(extraout_var_03,
                           CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0))) -
           (float)local_120;
  fVar67 = (float)CONCAT13(extraout_var_11,
                           CONCAT12(extraout_var_09,CONCAT11(extraout_var_07,extraout_var_05))) -
           local_120._4_4_;
  fVar35 = (float)CONCAT13(extraout_var_19,
                           CONCAT12(extraout_var_17,CONCAT11(extraout_var_15,extraout_var_13))) -
           (float)uStack_118;
  fVar98 = (float)CONCAT13(extraout_var_27,
                           CONCAT12(extraout_var_25,CONCAT11(extraout_var_23,extraout_var_21))) -
           uStack_118._4_4_;
  auVar69._0_4_ = fVar12 * fVar12;
  auVar69._4_4_ = fVar67 * fVar67;
  auVar69._8_4_ = fVar35 * fVar35;
  auVar69._12_4_ = fVar98 * fVar98;
  auVar83 = NEON_ext(auVar69,auVar69,8,1);
  fVar64 = auVar83._0_4_ + auVar69._0_4_;
  fVar75 = auVar83._4_4_ + auVar69._4_4_;
  fVar33 = fVar64 + fVar75;
  fVar64 = fVar64 + fVar75;
  auVar70._8_8_ = CONCAT44(fVar64,fVar33);
  auVar70._0_8_ = CONCAT44(fVar64,fVar33);
  auVar83 = NEON_frsqrte(auVar70,4);
  auVar87._0_4_ = auVar83._0_4_ * fVar33;
  auVar87._4_4_ = auVar83._4_4_ * fVar64;
  auVar87._8_4_ = auVar83._8_4_ * fVar33;
  auVar87._12_4_ = auVar83._12_4_ * fVar64;
  auVar88 = NEON_frsqrts(auVar83,auVar87,4);
  auVar84._0_4_ = auVar83._0_4_ * auVar88._0_4_;
  auVar84._4_4_ = auVar83._4_4_ * auVar88._4_4_;
  auVar84._8_4_ = auVar83._8_4_ * auVar88._8_4_;
  auVar84._12_4_ = auVar83._12_4_ * auVar88._12_4_;
  auVar89._0_4_ = fVar33 * auVar84._0_4_;
  auVar89._4_4_ = fVar64 * auVar84._4_4_;
  auVar89._8_4_ = fVar33 * auVar84._8_4_;
  auVar89._12_4_ = fVar64 * auVar84._12_4_;
  iVar65 = -(uint)(fVar33 == 0.0);
  iVar76 = -(uint)(fVar64 == 0.0);
  iVar78 = -(uint)(fVar33 == 0.0);
  iVar80 = -(uint)(fVar64 == 0.0);
  auVar83 = NEON_frsqrts(auVar84,auVar89,4);
  fVar12 = fVar12 * auVar84._0_4_ * auVar83._0_4_;
  fVar67 = fVar67 * auVar84._4_4_ * auVar83._4_4_;
  fVar35 = fVar35 * auVar84._8_4_ * auVar83._8_4_;
  fVar98 = fVar98 * auVar84._12_4_ * auVar83._12_4_;
  fVar33 = (float)CONCAT13((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar78 >> 0x18),
                           CONCAT12((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar78 >> 0x10),
                                    CONCAT11((byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar78 >> 8),
                                             SUB41(fVar35,0) & ~(byte)iVar78)));
  fVar12 = (float)CONCAT13((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18),
                           CONCAT12((byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar65 >> 0x10),
                                    CONCAT11((byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar65 >> 8),
                                             SUB41(fVar12,0) & ~(byte)iVar65)));
  FUN_012e4ed0(lVar28);
  fVar35 = (float)CONCAT13(extraout_var_04,
                           CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00))) -
           (float)local_120;
  fVar64 = (float)CONCAT13(extraout_var_12,
                           CONCAT12(extraout_var_10,CONCAT11(extraout_var_08,extraout_var_06))) -
           local_120._4_4_;
  fVar75 = (float)CONCAT13(extraout_var_20,
                           CONCAT12(extraout_var_18,CONCAT11(extraout_var_16,extraout_var_14))) -
           (float)uStack_118;
  fVar94 = (float)CONCAT13(extraout_var_28,
                           CONCAT12(extraout_var_26,CONCAT11(extraout_var_24,extraout_var_22))) -
           uStack_118._4_4_;
  auVar71._0_4_ = fVar35 * fVar35;
  auVar71._4_4_ = fVar64 * fVar64;
  auVar71._8_4_ = fVar75 * fVar75;
  auVar71._12_4_ = fVar94 * fVar94;
  auVar83 = NEON_ext(auVar71,auVar71,8,1);
  fVar66 = auVar83._0_4_ + auVar71._0_4_;
  fVar77 = auVar83._4_4_ + auVar71._4_4_;
  fVar34 = fVar66 + fVar77;
  fVar66 = fVar66 + fVar77;
  plVar25 = (long *)puVar31[0x6a];
  auVar72._8_8_ = CONCAT44(fVar66,fVar34);
  auVar72._0_8_ = CONCAT44(fVar66,fVar34);
  auVar83 = NEON_frsqrte(auVar72,4);
  auVar90._0_4_ = auVar83._0_4_ * fVar34;
  auVar90._4_4_ = auVar83._4_4_ * fVar66;
  auVar90._8_4_ = auVar83._8_4_ * fVar34;
  auVar90._12_4_ = auVar83._12_4_ * fVar66;
  auVar88 = NEON_frsqrts(auVar83,auVar90,4);
  auVar85._0_4_ = auVar83._0_4_ * auVar88._0_4_;
  auVar85._4_4_ = auVar83._4_4_ * auVar88._4_4_;
  auVar85._8_4_ = auVar83._8_4_ * auVar88._8_4_;
  auVar85._12_4_ = auVar83._12_4_ * auVar88._12_4_;
  auVar91._0_4_ = fVar34 * auVar85._0_4_;
  auVar91._4_4_ = fVar66 * auVar85._4_4_;
  auVar91._8_4_ = fVar34 * auVar85._8_4_;
  auVar91._12_4_ = fVar66 * auVar85._12_4_;
  iVar65 = -(uint)(fVar34 == 0.0);
  iVar78 = -(uint)(fVar66 == 0.0);
  iVar79 = -(uint)(fVar34 == 0.0);
  iVar81 = -(uint)(fVar66 == 0.0);
  auVar83 = NEON_frsqrts(auVar85,auVar91,4);
  fVar35 = fVar35 * auVar85._0_4_ * auVar83._0_4_;
  fVar64 = fVar64 * auVar85._4_4_ * auVar83._4_4_;
  fVar75 = fVar75 * auVar85._8_4_ * auVar83._8_4_;
  fVar94 = fVar94 * auVar85._12_4_ * auVar83._12_4_;
  bVar36 = SUB41(fVar35,0) & ~(byte)iVar65;
  bVar37 = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar65 >> 8);
  bVar38 = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar65 >> 0x10);
  bVar39 = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18);
  bVar41 = SUB41(fVar64,0) & ~(byte)iVar78;
  bVar43 = (byte)((uint)fVar64 >> 8) & ~(byte)((uint)iVar78 >> 8);
  bVar45 = (byte)((uint)fVar64 >> 0x10) & ~(byte)((uint)iVar78 >> 0x10);
  bVar47 = (byte)((uint)fVar64 >> 0x18) & ~(byte)((uint)iVar78 >> 0x18);
  bVar49 = SUB41(fVar75,0) & ~(byte)iVar79;
  bVar51 = (byte)((uint)fVar75 >> 8) & ~(byte)((uint)iVar79 >> 8);
  bVar53 = (byte)((uint)fVar75 >> 0x10) & ~(byte)((uint)iVar79 >> 0x10);
  bVar55 = (byte)((uint)fVar75 >> 0x18) & ~(byte)((uint)iVar79 >> 0x18);
  bVar57 = SUB41(fVar94,0) & ~(byte)iVar81;
  bVar59 = (byte)((uint)fVar94 >> 8) & ~(byte)((uint)iVar81 >> 8);
  bVar61 = (byte)((uint)fVar94 >> 0x10) & ~(byte)((uint)iVar81 >> 0x10);
  bVar63 = (byte)((uint)fVar94 >> 0x18) & ~(byte)((uint)iVar81 >> 0x18);
  fStack_1ac = (float)(CONCAT17((byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar76 >> 0x18),
                                CONCAT16((byte)((uint)fVar67 >> 0x10) &
                                         ~(byte)((uint)iVar76 >> 0x10),
                                         CONCAT15((byte)((uint)fVar67 >> 8) &
                                                  ~(byte)((uint)iVar76 >> 8),
                                                  CONCAT14(SUB41(fVar67,0) & ~(byte)iVar76,fVar12)))
                               ) >> 0x20);
  fStack_1a4 = (float)(CONCAT17((byte)((uint)fVar98 >> 0x18) & ~(byte)((uint)iVar80 >> 0x18),
                                CONCAT16((byte)((uint)fVar98 >> 0x10) &
                                         ~(byte)((uint)iVar80 >> 0x10),
                                         CONCAT15((byte)((uint)fVar98 >> 8) &
                                                  ~(byte)((uint)iVar80 >> 8),
                                                  CONCAT14(SUB41(fVar98,0) & ~(byte)iVar80,fVar33)))
                               ) >> 0x20);
  fVar67 = (float)CONCAT13(bVar55,CONCAT12(bVar53,CONCAT11(bVar51,bVar49)));
  fVar35 = (float)CONCAT13(bVar39,CONCAT12(bVar38,CONCAT11(bVar37,bVar36)));
  fVar64 = fVar12 * (float)CONCAT13(bVar39,CONCAT12(bVar38,CONCAT11(bVar37,bVar36)));
  fVar75 = fStack_1ac * (float)CONCAT13(bVar47,CONCAT12(bVar45,CONCAT11(bVar43,bVar41)));
  uVar40 = (undefined1)((uint)fVar75 >> 8);
  uVar42 = (undefined1)((uint)fVar75 >> 0x10);
  uVar44 = (undefined1)((uint)fVar75 >> 0x18);
  fVar98 = fVar33 * (float)CONCAT13(bVar55,CONCAT12(bVar53,CONCAT11(bVar51,bVar49)));
  uVar46 = (undefined1)((uint)fVar98 >> 8);
  uVar48 = (undefined1)((uint)fVar98 >> 0x10);
  uVar50 = (undefined1)((uint)fVar98 >> 0x18);
  fVar94 = fStack_1a4 * (float)CONCAT13(bVar63,CONCAT12(bVar61,CONCAT11(bVar59,bVar57)));
  uVar52 = (undefined1)((uint)fVar94 >> 8);
  uVar54 = (undefined1)((uint)fVar94 >> 0x10);
  uVar56 = (undefined1)((uint)fVar94 >> 0x18);
  auVar8[4] = SUB41(fVar75,0);
  auVar8._0_4_ = fVar64;
  auVar8[5] = uVar40;
  auVar8[6] = uVar42;
  auVar8[7] = uVar44;
  auVar8[8] = SUB41(fVar98,0);
  auVar8[9] = uVar46;
  auVar8[10] = uVar48;
  auVar8[0xb] = uVar50;
  auVar8[0xc] = SUB41(fVar94,0);
  auVar8[0xd] = uVar52;
  auVar8[0xe] = uVar54;
  auVar8[0xf] = uVar56;
  auVar9[4] = SUB41(fVar75,0);
  auVar9._0_4_ = fVar64;
  auVar9[5] = uVar40;
  auVar9[6] = uVar42;
  auVar9[7] = uVar44;
  auVar9[8] = SUB41(fVar98,0);
  auVar9[9] = uVar46;
  auVar9[10] = uVar48;
  auVar9[0xb] = uVar50;
  auVar9[0xc] = SUB41(fVar94,0);
  auVar9[0xd] = uVar52;
  auVar9[0xe] = uVar54;
  auVar9[0xf] = uVar56;
  auVar83 = NEON_ext(auVar8,auVar9,8,1);
  if (plVar25 == (long *)0x0) {
    fVar98 = *(float *)(*(long *)(_DAT_000001a8 + 0xa0) + 0xd4);
LAB_013cd130:
    plVar25 = (long *)puVar31[0x6a];
  }
  else {
    lVar32 = plVar25[0xb];
    if (*(long *)(lVar32 + 0x58) == 0) {
      uVar27 = (**(code **)**(undefined8 **)(lVar32 + 0x60))();
      *(undefined8 *)(lVar32 + 0x58) = uVar27;
    }
    piVar1 = (int *)(lVar32 + 0x54);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    fVar98 = *(float *)(*(long *)(plVar25[0x35] + 0xa0) + 0xd4);
    lVar32 = plVar25[0xb];
    piVar1 = (int *)(lVar32 + 0x54);
    do {
      iVar65 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar65 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar65 + -1 != 0) goto LAB_013cd130;
    *(undefined8 *)(lVar32 + 0x60) = 0;
    (**(code **)(*plVar25 + 0x18))(plVar25);
    plVar25 = (long *)puVar31[0x6a];
  }
  if (plVar25 != (long *)0x0) {
    lVar32 = plVar25[0xb];
    if (*(long *)(lVar32 + 0x58) == 0) {
      uVar27 = (**(code **)**(undefined8 **)(lVar32 + 0x60))();
      *(undefined8 *)(lVar32 + 0x58) = uVar27;
    }
    piVar1 = (int *)(lVar32 + 0x54);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  fVar94 = *(float *)(*(long *)(plVar25[0x35] + 0xa0) + 0xd0);
  if (plVar25 != (long *)0x0) {
    lVar32 = plVar25[0xb];
    piVar1 = (int *)(lVar32 + 0x54);
    do {
      iVar65 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar65 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar65 + -1 == 0) {
      *(undefined8 *)(lVar32 + 0x60) = 0;
      (**(code **)(*plVar25 + 0x18))(plVar25);
    }
  }
  fVar98 = cosf(fVar98 * fVar94);
  if (fVar98 <= auVar83._0_4_ + fVar64 + auVar83._4_4_ + fVar75) {
    fStack_1cc = (float)(CONCAT17(bVar47,CONCAT16(bVar45,CONCAT15(bVar43,CONCAT14(bVar41,fVar35))))
                        >> 0x20);
    fStack_1c4 = (float)(CONCAT17(bVar63,CONCAT16(bVar61,CONCAT15(bVar59,CONCAT14(bVar57,fVar67))))
                        >> 0x20);
    fVar12 = fVar12 + fVar35;
    fStack_1ac = fStack_1ac + fStack_1cc;
    fVar33 = fVar33 + fVar67;
    fStack_1a4 = fStack_1a4 + fStack_1c4;
    auVar73._0_4_ = fVar12 * fVar12;
    auVar73._4_4_ = fStack_1ac * fStack_1ac;
    auVar73._8_4_ = fVar33 * fVar33;
    auVar73._12_4_ = fStack_1a4 * fStack_1a4;
    auVar83 = NEON_ext(auVar73,auVar73,8,1);
    fVar67 = auVar83._0_4_ + auVar73._0_4_;
    fVar64 = auVar83._4_4_ + auVar73._4_4_;
    fVar35 = fVar67 + fVar64;
    fVar67 = fVar67 + fVar64;
    auVar74._8_8_ = CONCAT44(fVar67,fVar35);
    auVar74._0_8_ = CONCAT44(fVar67,fVar35);
    auVar83 = NEON_frsqrte(auVar74,4);
    auVar92._0_4_ = auVar83._0_4_ * fVar35;
    auVar92._4_4_ = auVar83._4_4_ * fVar67;
    auVar92._8_4_ = auVar83._8_4_ * fVar35;
    auVar92._12_4_ = auVar83._12_4_ * fVar67;
    auVar88 = NEON_frsqrts(auVar83,auVar92,4);
    auVar86._0_4_ = auVar83._0_4_ * auVar88._0_4_;
    auVar86._4_4_ = auVar83._4_4_ * auVar88._4_4_;
    auVar86._8_4_ = auVar83._8_4_ * auVar88._8_4_;
    auVar86._12_4_ = auVar83._12_4_ * auVar88._12_4_;
    auVar93._0_4_ = fVar35 * auVar86._0_4_;
    auVar93._4_4_ = fVar67 * auVar86._4_4_;
    auVar93._8_4_ = fVar35 * auVar86._8_4_;
    auVar93._12_4_ = fVar67 * auVar86._12_4_;
    iVar65 = -(uint)(fVar35 == 0.0);
    iVar76 = -(uint)(fVar67 == 0.0);
    iVar78 = -(uint)(fVar35 == 0.0);
    iVar79 = -(uint)(fVar67 == 0.0);
    auVar83 = NEON_frsqrts(auVar86,auVar93,4);
    fVar12 = fVar12 * auVar86._0_4_ * auVar83._0_4_;
    fStack_1ac = fStack_1ac * auVar86._4_4_ * auVar83._4_4_;
    fVar33 = fVar33 * auVar86._8_4_ * auVar83._8_4_;
    fStack_1a4 = fStack_1a4 * auVar86._12_4_ * auVar83._12_4_;
    fVar12 = (float)local_110 *
             (float)CONCAT13((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18),
                             CONCAT12((byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar65 >> 0x10),
                                      CONCAT11((byte)((uint)fVar12 >> 8) &
                                               ~(byte)((uint)iVar65 >> 8),
                                               SUB41(fVar12,0) & ~(byte)iVar65)));
    fVar35 = local_110._4_4_ *
             (float)CONCAT13((byte)((uint)fStack_1ac >> 0x18) & ~(byte)((uint)iVar76 >> 0x18),
                             CONCAT12((byte)((uint)fStack_1ac >> 0x10) &
                                      ~(byte)((uint)iVar76 >> 0x10),
                                      CONCAT11((byte)((uint)fStack_1ac >> 8) &
                                               ~(byte)((uint)iVar76 >> 8),
                                               SUB41(fStack_1ac,0) & ~(byte)iVar76)));
    uVar40 = (undefined1)((uint)fVar35 >> 8);
    uVar42 = (undefined1)((uint)fVar35 >> 0x10);
    uVar44 = (undefined1)((uint)fVar35 >> 0x18);
    fVar33 = (float)uStack_108 *
             (float)CONCAT13((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar78 >> 0x18),
                             CONCAT12((byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar78 >> 0x10),
                                      CONCAT11((byte)((uint)fVar33 >> 8) &
                                               ~(byte)((uint)iVar78 >> 8),
                                               SUB41(fVar33,0) & ~(byte)iVar78)));
    uVar46 = (undefined1)((uint)fVar33 >> 8);
    uVar48 = (undefined1)((uint)fVar33 >> 0x10);
    uVar50 = (undefined1)((uint)fVar33 >> 0x18);
    fVar67 = uStack_108._4_4_ *
             (float)CONCAT13((byte)((uint)fStack_1a4 >> 0x18) & ~(byte)((uint)iVar79 >> 0x18),
                             CONCAT12((byte)((uint)fStack_1a4 >> 0x10) &
                                      ~(byte)((uint)iVar79 >> 0x10),
                                      CONCAT11((byte)((uint)fStack_1a4 >> 8) &
                                               ~(byte)((uint)iVar79 >> 8),
                                               SUB41(fStack_1a4,0) & ~(byte)iVar79)));
    uVar52 = (undefined1)((uint)fVar67 >> 8);
    uVar54 = (undefined1)((uint)fVar67 >> 0x10);
    uVar56 = (undefined1)((uint)fVar67 >> 0x18);
    auVar10[4] = SUB41(fVar35,0);
    auVar10._0_4_ = fVar12;
    auVar10[5] = uVar40;
    auVar10[6] = uVar42;
    auVar10[7] = uVar44;
    auVar10[8] = SUB41(fVar33,0);
    auVar10[9] = uVar46;
    auVar10[10] = uVar48;
    auVar10[0xb] = uVar50;
    auVar10[0xc] = SUB41(fVar67,0);
    auVar10[0xd] = uVar52;
    auVar10[0xe] = uVar54;
    auVar10[0xf] = uVar56;
    auVar11[4] = SUB41(fVar35,0);
    auVar11._0_4_ = fVar12;
    auVar11[5] = uVar40;
    auVar11[6] = uVar42;
    auVar11[7] = uVar44;
    auVar11[8] = SUB41(fVar33,0);
    auVar11[9] = uVar46;
    auVar11[10] = uVar48;
    auVar11[0xb] = uVar50;
    auVar11[0xc] = SUB41(fVar67,0);
    auVar11[0xd] = uVar52;
    auVar11[0xe] = uVar54;
    auVar11[0xf] = uVar56;
    auVar83 = NEON_ext(auVar10,auVar11,8,1);
    if (DAT_01d4c59c <= auVar83._0_4_ + fVar12 + auVar83._4_4_ + fVar35) {
      *param_1 = lVar26;
      param_1[1] = lVar28;
    }
  }
LAB_013cd238:
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (((*param_1 == 0) && (param_1[1] == 0)) && (param_1[2] == 0)) {
    local_68 = CONCAT44(local_68._4_4_,0x7f7fffff);
    lVar26 = puVar31[0x6b];
    if (lVar26 != 0) {
      (**(code **)(*(long *)(lVar26 + 0x48) + 0x10))();
    }
    local_180 = &local_120;
    local_178 = &local_110;
    local_170 = &local_68;
    local_1a0 = &LAB_013d3440;
    local_198 = FUN_013d3660;
    local_190 = &LAB_013d3670;
    local_188 = &LAB_013d3690;
    local_e0 = &local_1a0;
    local_100 = PTR_LAB_027276e8;
    local_f8 = (code *)PTR_FUN_027276f0;
    local_f0 = PTR_LAB_027276f8;
    local_e8 = PTR_LAB_02727700;
    plStack_168 = param_1;
    FUN_01306a00(lVar26,&local_100);
    pcVar24 = local_f8;
    if (local_f8 != (code *)0x0) {
      local_f0 = (undefined *)0x0;
      local_e8 = (undefined *)0x0;
      local_100 = (undefined *)0x0;
      local_f8 = (code *)0x0;
      (*pcVar24)(&local_e0);
    }
    pcVar24 = local_198;
    if (local_198 != (code *)0x0) {
      local_190 = (undefined1 *)0x0;
      local_188 = (undefined1 *)0x0;
      local_1a0 = (undefined1 *)0x0;
      local_198 = (code *)0x0;
      (*pcVar24)(&local_180);
    }
    if (lVar26 != 0) {
      (**(code **)(*(long *)(lVar26 + 0x48) + 0x18))((long *)(lVar26 + 0x48));
    }
  }
  return;
}


