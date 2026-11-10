/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e74840; name: FUN_00e74840
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e74840(long *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
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
  undefined2 uVar17;
  undefined8 uVar18;
  int iVar19;
  long lVar20;
  int iVar21;
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
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  bool bVar37;
  ulong uVar38;
  long lVar39;
  long lVar40;
  long *plVar41;
  int iVar42;
  float fVar43;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  byte bVar44;
  undefined1 extraout_b0_01;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  byte bVar45;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  byte bVar46;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  byte bVar47;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 uVar48;
  byte bVar49;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 uVar50;
  byte bVar51;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 uVar52;
  byte bVar53;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 uVar54;
  byte bVar55;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  byte bVar56;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  byte bVar57;
  undefined1 extraout_var_19;
  undefined1 uVar58;
  undefined1 extraout_var_20;
  undefined1 uVar59;
  byte bVar60;
  undefined1 extraout_var_21;
  undefined1 uVar61;
  undefined1 extraout_var_22;
  undefined1 uVar62;
  byte bVar63;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  byte bVar64;
  undefined1 extraout_var_25;
  undefined1 extraout_var_26;
  undefined1 uVar65;
  byte bVar66;
  undefined1 extraout_var_27;
  undefined1 extraout_var_28;
  undefined1 uVar67;
  byte bVar68;
  undefined1 extraout_var_29;
  undefined1 uVar69;
  undefined1 extraout_var_30;
  undefined1 uVar70;
  byte bVar71;
  undefined1 extraout_var_31;
  float fVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  float fVar77;
  undefined8 uVar75;
  float fVar79;
  float fVar78;
  float fVar80;
  undefined1 auVar76 [16];
  undefined8 uVar81;
  undefined1 auVar82 [12];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined8 uVar89;
  undefined8 uVar90;
  float fVar91;
  float fVar92;
  undefined4 uVar93;
  undefined4 uVar94;
  float fVar95;
  undefined8 uVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  undefined8 uVar103;
  undefined8 uVar104;
  undefined8 uVar105;
  float local_90;
  float fStack_88;
  float fStack_84;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  lVar40 = param_1[0x11];
  if ((lVar40 != 0) && (*(int *)(lVar40 + 0x54) != 0)) {
    piVar1 = (int *)(lVar40 + 0x54);
    iVar42 = *(int *)(lVar40 + 0x54);
    do {
      while( true ) {
        uVar38 = FUN_00e75e30(*(undefined8 *)(lVar40 + 0x58));
        if ((uVar38 & 1) == 0) goto LAB_00e74dc8;
        iVar4 = *piVar1;
        if (iVar4 != iVar42) break;
        cVar5 = '\x01';
        bVar37 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar37) {
          *piVar1 = iVar42 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          lVar40 = *(long *)(lVar40 + 0x60);
          if (lVar40 != 0) {
            uVar2 = *(undefined8 *)(param_1[0xf] + 0xb0);
            uVar3 = *(undefined8 *)(param_1[0xf] + 0xb8);
            local_50 = (float)uVar2;
            fStack_4c = (float)((ulong)uVar2 >> 0x20);
            fStack_48 = (float)uVar3;
            fStack_44 = (float)((ulong)uVar3 >> 0x20);
            auVar86 = *(undefined1 (*) [16])(param_1 + 0x14);
            local_70 = 0;
            uStack_68 = 0;
            fVar95 = local_50 - auVar86._0_4_;
            fVar72 = fStack_4c - auVar86._4_4_;
            uVar48 = (undefined1)((uint)fVar72 >> 8);
            uVar50 = (undefined1)((uint)fVar72 >> 0x10);
            uVar52 = (undefined1)((uint)fVar72 >> 0x18);
            fVar43 = fStack_48 - auVar86._8_4_;
            fVar78 = fStack_44 - auVar86._12_4_;
            uVar54 = (undefined1)((uint)fVar78 >> 8);
            uVar58 = (undefined1)((uint)fVar78 >> 0x10);
            uVar61 = (undefined1)((uint)fVar78 >> 0x18);
            uVar3 = CONCAT17(uVar61,CONCAT16(uVar58,CONCAT15(uVar54,CONCAT14(SUB41(fVar78,0),fVar43)
                                                            )));
            uVar2 = CONCAT17(uVar52,CONCAT16(uVar50,CONCAT15(uVar48,CONCAT14(SUB41(fVar72,0),fVar95)
                                                            )));
            uStack_58 = CONCAT17(uVar61,CONCAT16(uVar58,CONCAT15(uVar54,CONCAT14(SUB41(fVar78,0),
                                                                                 fVar43))));
            local_60 = CONCAT17(uVar52,CONCAT16(uVar50,CONCAT15(uVar48,CONCAT14(SUB41(fVar72,0),
                                                                                fVar95))));
            FUN_00dd5de0(param_1 + 0x16,(undefined1 (*) [16])(param_1 + 0x14),&local_50,&local_70);
            fVar72 = (float)local_70 - (float)param_1[0x16];
            fVar79 = (float)param_1[0x17];
            fVar78 = (float)uStack_68 - fVar79;
            fVar80 = uStack_68._4_4_ - (float)((ulong)param_1[0x17] >> 0x20);
            auVar86._0_4_ = fVar72 * fVar72;
            auVar86._4_4_ = (local_70._4_4_ - 0.0) * (local_70._4_4_ - 0.0);
            auVar86._8_4_ = fVar78 * fVar78;
            auVar86._12_4_ = fVar80 * fVar80;
            auVar83 = NEON_ext(auVar86,auVar86,8,1);
            fVar72 = auVar83._0_4_ + auVar86._0_4_ + auVar83._4_4_ + auVar86._4_4_;
            if ((*(char *)((long)param_1 + 0xd4) == '\0') || (fVar72 <= DAT_01d4c6b8)) {
              auVar83._8_8_ = uVar3;
              auVar83._0_8_ = uVar2;
              auVar82 = auVar83._0_12_;
              if (DAT_01d4c6b8 < fVar72) goto LAB_00e74d00;
            }
            else {
              fVar72 = *(float *)(param_1 + 0x18);
              fVar78 = *(float *)(param_1 + 0x19);
              auVar84._0_4_ = fVar72 * fVar72;
              auVar84._4_4_ = *(float *)((long)param_1 + 0xc4) * *(float *)((long)param_1 + 0xc4);
              auVar84._8_4_ = fVar78 * fVar78;
              auVar84._12_4_ = *(float *)((long)param_1 + 0xcc) * *(float *)((long)param_1 + 0xcc);
              auVar86 = NEON_ext(auVar84,auVar84,8,1);
              if (auVar86._0_4_ + auVar84._0_4_ + auVar86._4_4_ + auVar84._4_4_ <= 0.0)
              goto LAB_00e74cfc;
              auVar35._8_8_ = uVar3;
              auVar35._0_8_ = uVar2;
              auVar82 = auVar35._0_12_;
              if (0.0 < fVar72 * (fStack_48 - fVar79) - fVar78 * (local_50 - (float)param_1[0x16]))
              goto LAB_00e74d00;
            }
            lVar39 = param_1[0x11];
            if ((lVar39 != 0) && (*(int *)(lVar39 + 0x54) != 0)) {
              fVar95 = fVar95 * fVar95;
              fVar72 = (float)((ulong)uVar2 >> 0x20);
              fVar72 = fVar72 * fVar72;
              uVar48 = (undefined1)((uint)fVar72 >> 8);
              uVar50 = (undefined1)((uint)fVar72 >> 0x10);
              uVar52 = (undefined1)((uint)fVar72 >> 0x18);
              fVar43 = fVar43 * fVar43;
              uVar54 = (undefined1)((uint)fVar43 >> 8);
              uVar58 = (undefined1)((uint)fVar43 >> 0x10);
              uVar61 = (undefined1)((uint)fVar43 >> 0x18);
              fVar78 = (float)((ulong)uVar3 >> 0x20);
              fVar78 = fVar78 * fVar78;
              uVar59 = (undefined1)((uint)fVar78 >> 8);
              uVar62 = (undefined1)((uint)fVar78 >> 0x10);
              uVar69 = (undefined1)((uint)fVar78 >> 0x18);
              auVar6[4] = SUB41(fVar72,0);
              auVar6._0_4_ = fVar95;
              auVar6[5] = uVar48;
              auVar6[6] = uVar50;
              auVar6[7] = uVar52;
              auVar6[8] = SUB41(fVar43,0);
              auVar6[9] = uVar54;
              auVar6[10] = uVar58;
              auVar6[0xb] = uVar61;
              auVar6[0xc] = SUB41(fVar78,0);
              auVar6[0xd] = uVar59;
              auVar6[0xe] = uVar62;
              auVar6[0xf] = uVar69;
              auVar7[4] = SUB41(fVar72,0);
              auVar7._0_4_ = fVar95;
              auVar7[5] = uVar48;
              auVar7[6] = uVar50;
              auVar7[7] = uVar52;
              auVar7[8] = SUB41(fVar43,0);
              auVar7[9] = uVar54;
              auVar7[10] = uVar58;
              auVar7[0xb] = uVar61;
              auVar7[0xc] = SUB41(fVar78,0);
              auVar7[0xd] = uVar59;
              auVar7[0xe] = uVar62;
              auVar7[0xf] = uVar69;
              auVar86 = NEON_ext(auVar6,auVar7,8,1);
              piVar1 = (int *)(lVar39 + 0x54);
              iVar42 = *(int *)(lVar39 + 0x54);
              goto LAB_00e749c0;
            }
          }
          goto LAB_00e74dc8;
        }
        iVar42 = iVar4;
        if (iVar4 == 0) goto LAB_00e74dc8;
      }
      ClearExclusiveLocal();
      iVar42 = iVar4;
    } while (iVar4 != 0);
  }
  goto LAB_00e74dc8;
  while (ClearExclusiveLocal(), iVar42 = iVar4, iVar4 != 0) {
LAB_00e749c0:
    uVar38 = FUN_00e75e30(*(undefined8 *)(lVar39 + 0x58));
    if ((uVar38 & 1) == 0) break;
    iVar4 = *piVar1;
    if (iVar4 == iVar42) {
      cVar5 = '\x01';
      bVar37 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar37) {
        *piVar1 = iVar42 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        lVar39 = *(long *)(lVar39 + 0x60);
        if (lVar39 != 0) {
          if (*(int *)(lVar39 + 0x358) == 0) {
            if (*(char *)((long)param_1 + 0x9c) == '\0') {
              bVar37 = *(float *)(lVar39 + 0x3e0) <= *(float *)(param_1 + 0x13);
              (**(code **)(*(long *)(lVar39 + -8) + 0x18))();
LAB_00e74a50:
              if (!bVar37) {
                lVar39 = param_1[0x11];
                goto joined_r0x00e74a20;
              }
            }
            else {
              fVar43 = *(float *)(lVar39 + 0x3e0);
              bVar37 = false;
              (**(code **)(*(long *)(lVar39 + -8) + 0x18))();
              if (0.0 < fVar43) goto LAB_00e74a50;
            }
            FUN_0069c580(param_1[0x10],0);
            *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)((long)param_1 + 0x94);
            *(undefined4 *)(param_1 + 0xc) = 3;
            *(undefined1 *)((long)param_1 + 0x6a) = 0;
            goto LAB_00e74cfc;
          }
          (**(code **)(*(long *)(lVar39 + -8) + 0x18))();
          lVar39 = param_1[0x11];
joined_r0x00e74a20:
          if ((lVar39 != 0) && (*(int *)(lVar39 + 0x54) != 0)) {
            fVar95 = SQRT(auVar86._0_4_ + fVar95 + auVar86._4_4_ + fVar72) * 3.0;
            piVar1 = (int *)(lVar39 + 0x54);
            iVar42 = *(int *)(lVar39 + 0x54);
            goto LAB_00e74a74;
          }
        }
        break;
      }
      iVar42 = iVar4;
      if (iVar4 == 0) break;
      goto LAB_00e749c0;
    }
  }
  goto LAB_00e74dc8;
  while (ClearExclusiveLocal(), iVar42 = iVar4, iVar4 != 0) {
LAB_00e74a74:
    uVar38 = FUN_00e75e30(*(undefined8 *)(lVar39 + 0x58));
    if ((uVar38 & 1) == 0) break;
    iVar4 = *piVar1;
    if (iVar4 == iVar42) {
      cVar5 = '\x01';
      bVar37 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar37) {
        *piVar1 = iVar42 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        lVar39 = *(long *)(lVar39 + 0x60);
        if (lVar39 != 0) {
          fVar72 = -fVar95;
          uVar48 = SUB41(fVar95,0);
          uVar50 = (char)((uint)fVar95 >> 8);
          uVar52 = (char)((uint)fVar95 >> 0x10);
          uVar54 = (char)((uint)fVar95 >> 0x18);
          if (*(char *)((long)param_1 + 0x9c) != '\0') {
            uVar48 = SUB41(fVar72,0);
            uVar50 = (char)((uint)fVar72 >> 8);
            uVar52 = (char)((uint)fVar72 >> 0x10);
            uVar54 = (char)((uint)fVar72 >> 0x18);
          }
          *(float *)(param_1 + 0x13) =
               *(float *)(param_1 + 0x13) +
               (float)CONCAT13(uVar54,CONCAT12(uVar52,CONCAT11(uVar50,uVar48)));
          FUN_00e75650(param_1);
          *(uint *)(param_1 + 0x13) =
               CONCAT13(extraout_var_05,CONCAT12(extraout_var_02,CONCAT11(extraout_var,extraout_b0))
                       );
          plVar41 = (long *)(lVar39 + -8);
          (**(code **)(*plVar41 + 0x18))(plVar41);
          lVar20 = param_1[0x17];
          lVar39 = param_1[0x16];
          (**(code **)(*param_1 + 0xa0))((char)param_1[0x13],param_1);
          local_90 = (float)lVar39;
          fStack_88 = (float)lVar20;
          fStack_84 = (float)((ulong)lVar20 >> 0x20);
          local_90 = (float)CONCAT13(extraout_var_06,
                                     CONCAT12(extraout_var_03,
                                              CONCAT11(extraout_var_00,extraout_b0_00))) - local_90;
          fStack_88 = (float)CONCAT13(extraout_var_22,
                                      CONCAT12(extraout_var_20,
                                               CONCAT11(extraout_var_18,extraout_var_16))) -
                      fStack_88;
          fStack_84 = (float)CONCAT13(extraout_var_30,
                                      CONCAT12(extraout_var_28,
                                               CONCAT11(extraout_var_26,extraout_var_24))) -
                      fStack_84;
          param_1[0x17] =
               CONCAT17(extraout_var_30,
                        CONCAT16(extraout_var_28,
                                 CONCAT15(extraout_var_26,
                                          CONCAT14(extraout_var_24,
                                                   CONCAT13(extraout_var_22,
                                                            CONCAT12(extraout_var_20,
                                                                     CONCAT11(extraout_var_18,
                                                                              extraout_var_16)))))))
          ;
          param_1[0x16] =
               CONCAT17(extraout_var_14,
                        CONCAT16(extraout_var_12,
                                 CONCAT15(extraout_var_10,
                                          CONCAT14(extraout_var_08,
                                                   CONCAT13(extraout_var_06,
                                                            CONCAT12(extraout_var_03,
                                                                     CONCAT11(extraout_var_00,
                                                                              extraout_b0_00)))))));
          fVar95 = local_90 * local_90;
          fVar72 = fStack_88 * fStack_88;
          uVar48 = (undefined1)((uint)fVar72 >> 8);
          uVar50 = (undefined1)((uint)fVar72 >> 0x10);
          uVar52 = (undefined1)((uint)fVar72 >> 0x18);
          fVar43 = fStack_84 * fStack_84;
          uVar54 = (undefined1)((uint)fVar43 >> 8);
          uVar58 = (undefined1)((uint)fVar43 >> 0x10);
          uVar61 = (undefined1)((uint)fVar43 >> 0x18);
          auVar8._4_4_ = 0;
          auVar8._0_4_ = fVar95;
          auVar8[8] = SUB41(fVar72,0);
          auVar8[9] = uVar48;
          auVar8[10] = uVar50;
          auVar8[0xb] = uVar52;
          auVar8[0xc] = SUB41(fVar43,0);
          auVar8[0xd] = uVar54;
          auVar8[0xe] = uVar58;
          auVar8[0xf] = uVar61;
          auVar9._4_4_ = 0;
          auVar9._0_4_ = fVar95;
          auVar9[8] = SUB41(fVar72,0);
          auVar9[9] = uVar48;
          auVar9[10] = uVar50;
          auVar9[0xb] = uVar52;
          auVar9[0xc] = SUB41(fVar43,0);
          auVar9[0xd] = uVar54;
          auVar9[0xe] = uVar58;
          auVar9[0xf] = uVar61;
          auVar86 = NEON_ext(auVar8,auVar9,8,1);
          fVar95 = auVar86._0_4_ + fVar95;
          fVar72 = auVar86._4_4_ + 0.0;
          fVar43 = fVar95 + fVar72;
          fVar95 = fVar95 + fVar72;
          uVar48 = SUB41(fVar95,0);
          uVar50 = (undefined1)((uint)fVar95 >> 8);
          uVar52 = (undefined1)((uint)fVar95 >> 0x10);
          uVar54 = (undefined1)((uint)fVar95 >> 0x18);
          if (fVar43 == 0.0) {
            auVar86 = *(undefined1 (*) [16])(param_1[0xf] + 0xa0);
            uVar93 = (undefined4)_UNK_01d4ae58;
            uVar94 = (undefined4)((ulong)_UNK_01d4ae58 >> 0x20);
            fVar80 = auVar86._0_4_;
            fVar72 = fVar80 * (float)_DAT_01d4ae80;
            fVar77 = auVar86._4_4_;
            fVar43 = fVar77 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
            uVar48 = SUB41(fVar43,0);
            uVar50 = (undefined1)((uint)fVar43 >> 8);
            uVar52 = (undefined1)((uint)fVar43 >> 0x10);
            uVar54 = (undefined1)((uint)fVar43 >> 0x18);
            fVar78 = auVar86._8_4_ * (float)_UNK_01d4ae88;
            uVar58 = SUB41(fVar78,0);
            uVar61 = (undefined1)((uint)fVar78 >> 8);
            uVar59 = (undefined1)((uint)fVar78 >> 0x10);
            uVar62 = (undefined1)((uint)fVar78 >> 0x18);
            fVar79 = auVar86._12_4_ * (float)((ulong)_UNK_01d4ae88 >> 0x20);
            uVar69 = SUB41(fVar79,0);
            uVar65 = (undefined1)((uint)fVar79 >> 8);
            uVar67 = (undefined1)((uint)fVar79 >> 0x10);
            uVar70 = (undefined1)((uint)fVar79 >> 0x18);
            auVar32._8_4_ = uVar93;
            auVar32._0_8_ = _DAT_01d4ae50;
            auVar32._12_4_ = uVar94;
            uVar18 = a64_TBL(ZEXT816(0),auVar32,DAT_01cd4f90);
            auVar26[4] = uVar48;
            auVar26._0_4_ = fVar72;
            auVar26[5] = uVar50;
            auVar26[6] = uVar52;
            auVar26[7] = uVar54;
            auVar26[8] = uVar58;
            auVar26[9] = uVar61;
            auVar26[10] = uVar59;
            auVar26[0xb] = uVar62;
            auVar26[0xc] = uVar69;
            auVar26[0xd] = uVar65;
            auVar26[0xe] = uVar67;
            auVar26[0xf] = uVar70;
            uVar90 = a64_TBL(ZEXT816(0),auVar26,DAT_01cd4f90);
            auVar33._8_4_ = uVar93;
            auVar33._0_8_ = _DAT_01d4ae50;
            auVar33._12_4_ = uVar94;
            uVar89 = a64_TBL(ZEXT816(0),auVar33,DAT_01cd50f8);
            auVar34._8_4_ = uVar93;
            auVar34._0_8_ = _DAT_01d4ae50;
            auVar34._12_4_ = uVar94;
            uVar74 = a64_TBL(ZEXT816(0),auVar34,DAT_01cd5418);
            fVar91 = (float)((ulong)uVar74 >> 0x20);
            auVar27[4] = uVar48;
            auVar27._0_4_ = fVar72;
            auVar27[5] = uVar50;
            auVar27[6] = uVar52;
            auVar27[7] = uVar54;
            auVar27[8] = uVar58;
            auVar27[9] = uVar61;
            auVar27[10] = uVar59;
            auVar27[0xb] = uVar62;
            auVar27[0xc] = uVar69;
            auVar27[0xd] = uVar65;
            auVar27[0xe] = uVar67;
            auVar27[0xf] = uVar70;
            uVar103 = a64_TBL(ZEXT816(0),auVar27,DAT_01cd5120);
            auVar28[4] = uVar48;
            auVar28._0_4_ = fVar72;
            auVar28[5] = uVar50;
            auVar28[6] = uVar52;
            auVar28[7] = uVar54;
            auVar28[8] = uVar58;
            auVar28[9] = uVar61;
            auVar28[10] = uVar59;
            auVar28[0xb] = uVar62;
            auVar28[0xc] = uVar69;
            auVar28[0xd] = uVar65;
            auVar28[0xe] = uVar67;
            auVar28[0xf] = uVar70;
            uVar104 = a64_TBL(ZEXT816(0),auVar28,DAT_01cd5418);
            auVar29[4] = uVar48;
            auVar29._0_4_ = fVar72;
            auVar29[5] = uVar50;
            auVar29[6] = uVar52;
            auVar29[7] = uVar54;
            auVar29[8] = uVar58;
            auVar29[9] = uVar61;
            auVar29[10] = uVar59;
            auVar29[0xb] = uVar62;
            auVar29[0xc] = uVar69;
            auVar29[0xd] = uVar65;
            auVar29[0xe] = uVar67;
            auVar29[0xf] = uVar70;
            uVar105 = a64_TBL(ZEXT816(0),auVar29,DAT_01cd5270);
            fVar95 = (float)((ulong)uVar18 >> 0x20);
            fVar97 = (float)((ulong)DAT_01cd5070 >> 0x20);
            fVar98 = (float)((ulong)uVar89 >> 0x20);
            auVar30[4] = uVar48;
            auVar30._0_4_ = fVar72;
            auVar30[5] = uVar50;
            auVar30[6] = uVar52;
            auVar30[7] = uVar54;
            auVar30[8] = uVar58;
            auVar30[9] = uVar61;
            auVar30[10] = uVar59;
            auVar30[0xb] = uVar62;
            auVar30[0xc] = uVar69;
            auVar30[0xd] = uVar65;
            auVar30[0xe] = uVar67;
            auVar30[0xf] = uVar70;
            uVar96 = a64_TBL(ZEXT816(0),auVar30,DAT_01cd50f8);
            auVar31[4] = uVar48;
            auVar31._0_4_ = fVar72;
            auVar31[5] = uVar50;
            auVar31[6] = uVar52;
            auVar31[7] = uVar54;
            auVar31[8] = SUB41(fVar72,0);
            auVar31[9] = (char)((uint)fVar72 >> 8);
            auVar31[10] = (char)((uint)fVar72 >> 0x10);
            auVar31[0xb] = (char)((uint)fVar72 >> 0x18);
            auVar31[0xc] = uVar48;
            auVar31[0xd] = uVar50;
            auVar31[0xe] = uVar52;
            auVar31[0xf] = uVar54;
            uVar75 = a64_TBL(ZEXT816(0),auVar31,DAT_01cd50b0);
            uVar81 = a64_TBL(ZEXT816(0),auVar86,DAT_01cd50f8);
            fVar92 = (float)((ulong)uVar81 >> 0x20);
            fVar99 = (float)_DAT_01d4ae90;
            fVar100 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
            fVar101 = (float)_UNK_01d4ae98;
            fVar102 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
            uVar73 = a64_TBL(ZEXT816(0),auVar86,DAT_01cd4f90);
            fVar72 = (fVar72 * (float)uVar18 + fVar99 * (float)DAT_01cd5070 * (float)uVar90 +
                     fVar99 * (float)uVar74 * (float)uVar96) - (float)uVar89 * (float)uVar104;
            fVar43 = (fVar43 * fVar95 + fVar100 * fVar97 * (float)((ulong)uVar90 >> 0x20) +
                     fVar100 * fVar91 * (float)((ulong)uVar96 >> 0x20)) -
                     fVar98 * (float)((ulong)uVar104 >> 0x20);
            uVar48 = SUB41(fVar43,0);
            uVar50 = (undefined1)((uint)fVar43 >> 8);
            uVar52 = (undefined1)((uint)fVar43 >> 0x10);
            uVar54 = (undefined1)((uint)fVar43 >> 0x18);
            fVar78 = (fVar78 * (float)uVar18 + fVar101 * (float)uVar89 * (float)uVar103 +
                     fVar101 * (float)DAT_01cd5070 * (float)uVar75) - (float)uVar74 * (float)uVar105
            ;
            uVar58 = SUB41(fVar78,0);
            uVar61 = (undefined1)((uint)fVar78 >> 8);
            uVar59 = (undefined1)((uint)fVar78 >> 0x10);
            uVar62 = (undefined1)((uint)fVar78 >> 0x18);
            fVar95 = (fVar79 * fVar95 + fVar102 * fVar98 * (float)((ulong)uVar103 >> 0x20) +
                     fVar102 * fVar97 * (float)((ulong)uVar75 >> 0x20)) -
                     fVar91 * (float)((ulong)uVar105 >> 0x20);
            uVar69 = SUB41(fVar95,0);
            uVar65 = (undefined1)((uint)fVar95 >> 8);
            uVar67 = (undefined1)((uint)fVar95 >> 0x10);
            uVar70 = (undefined1)((uint)fVar95 >> 0x18);
            auVar11[4] = uVar48;
            auVar11._0_4_ = fVar72;
            auVar11[5] = uVar50;
            auVar11[6] = uVar52;
            auVar11[7] = uVar54;
            auVar11[8] = uVar58;
            auVar11[9] = uVar61;
            auVar11[10] = uVar59;
            auVar11[0xb] = uVar62;
            auVar11[0xc] = uVar69;
            auVar11[0xd] = uVar65;
            auVar11[0xe] = uVar67;
            auVar11[0xf] = uVar70;
            uVar89 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd4f90);
            auVar12[4] = uVar48;
            auVar12._0_4_ = fVar72;
            auVar12[5] = uVar50;
            auVar12[6] = uVar52;
            auVar12[7] = uVar54;
            auVar12[8] = uVar58;
            auVar12[9] = uVar61;
            auVar12[10] = uVar59;
            auVar12[0xb] = uVar62;
            auVar12[0xc] = uVar69;
            auVar12[0xd] = uVar65;
            auVar12[0xe] = uVar67;
            auVar12[0xf] = uVar70;
            uVar103 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd5120);
            fVar79 = (float)((ulong)uVar73 >> 0x20);
            uVar96 = a64_TBL(ZEXT816(0),auVar86,DAT_01cd5418);
            fVar91 = (float)((ulong)uVar96 >> 0x20);
            auVar13[4] = uVar48;
            auVar13._0_4_ = fVar72;
            auVar13[5] = uVar50;
            auVar13[6] = uVar52;
            auVar13[7] = uVar54;
            auVar13[8] = uVar58;
            auVar13[9] = uVar61;
            auVar13[10] = uVar59;
            auVar13[0xb] = uVar62;
            auVar13[0xc] = uVar69;
            auVar13[0xd] = uVar65;
            auVar13[0xe] = uVar67;
            auVar13[0xf] = uVar70;
            uVar75 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd50f8);
            auVar14[4] = uVar48;
            auVar14._0_4_ = fVar72;
            auVar14[5] = uVar50;
            auVar14[6] = uVar52;
            auVar14[7] = uVar54;
            auVar14[8] = uVar58;
            auVar14[9] = uVar61;
            auVar14[10] = uVar59;
            auVar14[0xb] = uVar62;
            auVar14[0xc] = uVar69;
            auVar14[0xd] = uVar65;
            auVar14[0xe] = uVar67;
            auVar14[0xf] = uVar70;
            uVar74 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd5418);
            auVar15[4] = uVar48;
            auVar15._0_4_ = fVar72;
            auVar15[5] = uVar50;
            auVar15[6] = uVar52;
            auVar15[7] = uVar54;
            auVar15[8] = uVar58;
            auVar15[9] = uVar61;
            auVar15[10] = uVar59;
            auVar15[0xb] = uVar62;
            auVar15[0xc] = uVar69;
            auVar15[0xd] = uVar65;
            auVar15[0xe] = uVar67;
            auVar15[0xf] = uVar70;
            uVar90 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd5270);
            auVar16[4] = uVar48;
            auVar16._0_4_ = fVar72;
            auVar16[5] = uVar50;
            auVar16[6] = uVar52;
            auVar16[7] = uVar54;
            auVar16[8] = SUB41(fVar72,0);
            auVar16[9] = (char)((uint)fVar72 >> 8);
            auVar16[10] = (char)((uint)fVar72 >> 0x10);
            auVar16[0xb] = (char)((uint)fVar72 >> 0x18);
            auVar16[0xc] = uVar48;
            auVar16[0xd] = uVar50;
            auVar16[0xe] = uVar52;
            auVar16[0xf] = uVar54;
            uVar18 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd50b0);
            fVar72 = ((float)uVar73 * fVar72 + fVar99 * fVar80 * (float)uVar89 +
                     fVar99 * (float)uVar96 * (float)uVar75) - (float)uVar81 * (float)uVar74;
            fVar43 = (fVar79 * fVar43 + fVar100 * fVar77 * (float)((ulong)uVar89 >> 0x20) +
                     fVar100 * fVar91 * (float)((ulong)uVar75 >> 0x20)) -
                     fVar92 * (float)((ulong)uVar74 >> 0x20);
            fVar78 = ((float)uVar73 * fVar78 + fVar101 * (float)uVar81 * (float)uVar103 +
                     fVar101 * fVar80 * (float)uVar18) - (float)uVar96 * (float)uVar90;
            fVar95 = (fVar79 * fVar95 + fVar102 * fVar92 * (float)((ulong)uVar103 >> 0x20) +
                     fVar102 * fVar77 * (float)((ulong)uVar18 >> 0x20)) -
                     fVar91 * (float)((ulong)uVar90 >> 0x20);
            bVar44 = SUB41(fVar72,0) & (byte)DAT_01d4ab50;
            bVar45 = (byte)((uint)fVar72 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 8);
            bVar46 = (byte)((uint)fVar72 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x10);
            bVar47 = (byte)((uint)fVar72 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18);
            bVar49 = SUB41(fVar43,0) & (byte)((ulong)DAT_01d4ab50 >> 0x20);
            bVar51 = (byte)((uint)fVar43 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 0x28);
            bVar53 = (byte)((uint)fVar43 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x30);
            bVar55 = (byte)((uint)fVar43 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38);
            bVar56 = SUB41(fVar78,0) & (byte)DAT_01d4ab58;
            bVar57 = (byte)((uint)fVar78 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 8);
            bVar60 = (byte)((uint)fVar78 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x10);
            bVar63 = (byte)((uint)fVar78 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18);
            bVar64 = SUB41(fVar95,0) & (byte)((ulong)DAT_01d4ab58 >> 0x20);
            bVar66 = (byte)((uint)fVar95 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 0x28);
            bVar68 = (byte)((uint)fVar95 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x30);
            bVar71 = (byte)((uint)fVar95 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38);
          }
          else {
            auVar10[4] = uVar48;
            auVar10._0_4_ = fVar43;
            auVar10[5] = uVar50;
            auVar10[6] = uVar52;
            auVar10[7] = uVar54;
            auVar10[8] = SUB41(fVar43,0);
            auVar10[9] = (char)((uint)fVar43 >> 8);
            auVar10[10] = (char)((uint)fVar43 >> 0x10);
            auVar10[0xb] = (char)((uint)fVar43 >> 0x18);
            auVar10[0xc] = uVar48;
            auVar10[0xd] = uVar50;
            auVar10[0xe] = uVar52;
            auVar10[0xf] = uVar54;
            auVar86 = NEON_frsqrte(auVar10,4);
            auVar87._0_4_ = auVar86._0_4_ * fVar43;
            auVar87._4_4_ = auVar86._4_4_ * fVar95;
            auVar87._8_4_ = auVar86._8_4_ * fVar43;
            uVar17 = (undefined2)(CONCAT15(uVar50,CONCAT14(uVar48,fVar43)) >> 0x20);
            auVar87._12_4_ = auVar86._12_4_ * (float)CONCAT13(uVar54,CONCAT12(uVar52,uVar17));
            auVar83 = NEON_frsqrts(auVar86,auVar87,4);
            auVar85._0_4_ = auVar86._0_4_ * auVar83._0_4_;
            auVar85._4_4_ = auVar86._4_4_ * auVar83._4_4_;
            auVar85._8_4_ = auVar86._8_4_ * auVar83._8_4_;
            auVar85._12_4_ = auVar86._12_4_ * auVar83._12_4_;
            auVar88._0_4_ = fVar43 * auVar85._0_4_;
            auVar88._4_4_ = fVar95 * auVar85._4_4_;
            auVar88._8_4_ = fVar43 * auVar85._8_4_;
            auVar88._12_4_ = (float)CONCAT13(uVar54,CONCAT12(uVar52,uVar17)) * auVar85._12_4_;
            iVar42 = -(uint)(fVar43 == 0.0);
            iVar4 = -(uint)(fVar95 == 0.0);
            iVar19 = -(uint)(fVar43 == 0.0);
            iVar21 = -(uint)((float)CONCAT13(uVar54,CONCAT12(uVar52,uVar17)) == 0.0);
            auVar86 = NEON_frsqrts(auVar85,auVar88,4);
            local_90 = local_90 * auVar85._0_4_ * auVar86._0_4_;
            fVar95 = auVar85._4_4_ * auVar86._4_4_ * 0.0;
            fStack_88 = fStack_88 * auVar85._8_4_ * auVar86._8_4_;
            fStack_84 = fStack_84 * auVar85._12_4_ * auVar86._12_4_;
            auVar76[0] = SUB41(local_90,0) & ~(byte)iVar42;
            auVar76[1] = (byte)((uint)local_90 >> 8) & ~(byte)((uint)iVar42 >> 8);
            auVar76[2] = (byte)((uint)local_90 >> 0x10) & ~(byte)((uint)iVar42 >> 0x10);
            auVar76[3] = (byte)((uint)local_90 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18);
            auVar76[4] = SUB41(fVar95,0) & ~(byte)iVar4;
            auVar76[5] = (byte)((uint)fVar95 >> 8) & ~(byte)((uint)iVar4 >> 8);
            auVar76[6] = (byte)((uint)fVar95 >> 0x10) & ~(byte)((uint)iVar4 >> 0x10);
            auVar76[7] = (byte)((uint)fVar95 >> 0x18) & ~(byte)((uint)iVar4 >> 0x18);
            auVar76[8] = SUB41(fStack_88,0) & ~(byte)iVar19;
            auVar76[9] = (byte)((uint)fStack_88 >> 8) & ~(byte)((uint)iVar19 >> 8);
            auVar76[10] = (byte)((uint)fStack_88 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10);
            auVar76[0xb] = (byte)((uint)fStack_88 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18);
            auVar76[0xc] = SUB41(fStack_84,0) & ~(byte)iVar21;
            auVar76[0xd] = (byte)((uint)fStack_84 >> 8) & ~(byte)((uint)iVar21 >> 8);
            auVar76[0xe] = (byte)((uint)fStack_84 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10);
            auVar76[0xf] = (byte)((uint)fStack_84 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18);
            uVar18 = a64_TBL(ZEXT816(0),auVar76,DAT_01cd5418);
            uVar89 = a64_TBL(ZEXT816(0),auVar76,DAT_01cd5188);
            uVar48 = (undefined1)_UNK_01d4b588;
            uVar50 = (undefined1)((ulong)_UNK_01d4b588 >> 8);
            uVar52 = (undefined1)((ulong)_UNK_01d4b588 >> 0x10);
            uVar54 = (undefined1)((ulong)_UNK_01d4b588 >> 0x18);
            uVar58 = (undefined1)((ulong)_UNK_01d4b588 >> 0x20);
            uVar61 = (undefined1)((ulong)_UNK_01d4b588 >> 0x28);
            uVar59 = (undefined1)((ulong)_UNK_01d4b588 >> 0x30);
            uVar62 = (undefined1)((ulong)_UNK_01d4b588 >> 0x38);
            auVar22[8] = uVar48;
            auVar22._0_8_ = _DAT_01d4b580;
            auVar22[9] = uVar50;
            auVar22[10] = uVar52;
            auVar22[0xb] = uVar54;
            auVar22[0xc] = uVar58;
            auVar22[0xd] = uVar61;
            auVar22[0xe] = uVar59;
            auVar22[0xf] = uVar62;
            uVar75 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd50f8);
            uVar90 = a64_TBL(ZEXT816(0),auVar76,DAT_01cd50f8);
            auVar23[8] = uVar48;
            auVar23._0_8_ = _DAT_01d4b580;
            auVar23[9] = uVar50;
            auVar23[10] = uVar52;
            auVar23[0xb] = uVar54;
            auVar23[0xc] = uVar58;
            auVar23[0xd] = uVar61;
            auVar23[0xe] = uVar59;
            auVar23[0xf] = uVar62;
            uVar96 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd5158);
            uVar73 = a64_TBL(ZEXT816(0),auVar76,DAT_01cd5158);
            auVar24[8] = uVar48;
            auVar24._0_8_ = _DAT_01d4b580;
            auVar24[9] = uVar50;
            auVar24[10] = uVar52;
            auVar24[0xb] = uVar54;
            auVar24[0xc] = uVar58;
            auVar24[0xd] = uVar61;
            auVar24[0xe] = uVar59;
            auVar24[0xf] = uVar62;
            uVar74 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd5418);
            auVar25[8] = uVar48;
            auVar25._0_8_ = _DAT_01d4b580;
            auVar25[9] = uVar50;
            auVar25[10] = uVar52;
            auVar25[0xb] = uVar54;
            auVar25[0xc] = uVar58;
            auVar25[0xd] = uVar61;
            auVar25[0xe] = uVar59;
            auVar25[0xf] = uVar62;
            uVar81 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd5188);
            fVar95 = (float)uVar18 * (float)uVar75 - (float)uVar90 * (float)uVar74;
            bVar44 = SUB41(fVar95,0);
            bVar45 = (byte)((uint)fVar95 >> 8);
            bVar46 = (byte)((uint)fVar95 >> 0x10);
            bVar47 = (byte)((uint)fVar95 >> 0x18);
            fVar95 = (float)((ulong)uVar18 >> 0x20) * (float)((ulong)uVar75 >> 0x20) -
                     (float)((ulong)uVar90 >> 0x20) * (float)((ulong)uVar74 >> 0x20);
            bVar49 = SUB41(fVar95,0);
            bVar51 = (byte)((uint)fVar95 >> 8);
            bVar53 = (byte)((uint)fVar95 >> 0x10);
            bVar55 = (byte)((uint)fVar95 >> 0x18);
            fVar95 = (float)uVar89 * (float)uVar96 - (float)uVar73 * (float)uVar81;
            bVar56 = SUB41(fVar95,0);
            bVar57 = (byte)((uint)fVar95 >> 8);
            bVar60 = (byte)((uint)fVar95 >> 0x10);
            bVar63 = (byte)((uint)fVar95 >> 0x18);
            fVar95 = (float)((ulong)uVar89 >> 0x20) * (float)((ulong)uVar96 >> 0x20) -
                     (float)((ulong)uVar73 >> 0x20) * (float)((ulong)uVar81 >> 0x20);
            bVar64 = SUB41(fVar95,0);
            bVar66 = (byte)((uint)fVar95 >> 8);
            bVar68 = (byte)((uint)fVar95 >> 0x10);
            bVar71 = (byte)((uint)fVar95 >> 0x18);
          }
          param_1[0x19] =
               CONCAT17(bVar71,CONCAT16(bVar68,CONCAT15(bVar66,CONCAT14(bVar64,CONCAT13(bVar63,
                                                  CONCAT12(bVar60,CONCAT11(bVar57,bVar56)))))));
          param_1[0x18] =
               CONCAT17(bVar55,CONCAT16(bVar53,CONCAT15(bVar51,CONCAT14(bVar49,CONCAT13(bVar47,
                                                  CONCAT12(bVar46,CONCAT11(bVar45,bVar44)))))));
LAB_00e74cfc:
          auVar36._8_8_ = uVar3;
          auVar36._0_8_ = uVar2;
          auVar82 = auVar36._0_12_;
LAB_00e74d00:
          if ((DAT_01d4c708 < ABS(auVar82._0_4_)) || (DAT_01d4c708 < ABS(auVar82._8_4_))) {
            fVar95 = (float)((ulong)param_1[0x16] >> 0x20) - fStack_4c;
            fVar72 = (float)((ulong)param_1[0x17] >> 0x20) - fStack_44;
            uStack_58 = CONCAT17((char)((uint)fVar72 >> 0x18),
                                 CONCAT16((char)((uint)fVar72 >> 0x10),
                                          CONCAT15((char)((uint)fVar72 >> 8),
                                                   CONCAT14(SUB41(fVar72,0),
                                                            (float)param_1[0x17] - fStack_48))));
            local_60 = CONCAT17((char)((uint)fVar95 >> 0x18),
                                CONCAT16((char)((uint)fVar95 >> 0x10),
                                         CONCAT15((char)((uint)fVar95 >> 8),
                                                  CONCAT14(SUB41(fVar95,0),
                                                           (float)param_1[0x16] - local_50))));
            FUN_00e75140((char)param_1[0x1a],param_1,&local_60);
            lVar39 = param_1[0xf];
            *(undefined1 *)(lVar39 + 0xc0) = 1;
            *(ulong *)(lVar39 + 0xa8) =
                 CONCAT17(extraout_var_31,
                          CONCAT16(extraout_var_29,
                                   CONCAT15(extraout_var_27,
                                            CONCAT14(extraout_var_25,
                                                     CONCAT13(extraout_var_23,
                                                              CONCAT12(extraout_var_21,
                                                                       CONCAT11(extraout_var_19,
                                                                                extraout_var_17)))))
                                  ));
            *(ulong *)(lVar39 + 0xa0) =
                 CONCAT17(extraout_var_15,
                          CONCAT16(extraout_var_13,
                                   CONCAT15(extraout_var_11,
                                            CONCAT14(extraout_var_09,
                                                     CONCAT13(extraout_var_07,
                                                              CONCAT12(extraout_var_04,
                                                                       CONCAT11(extraout_var_01,
                                                                                extraout_b0_01))))))
                         );
          }
          plVar41 = (long *)(lVar40 + -8);
          (**(code **)(*plVar41 + 0x18))(plVar41);
          return;
        }
        break;
      }
      iVar42 = iVar4;
      if (iVar4 == 0) break;
      goto LAB_00e74a74;
    }
  }
LAB_00e74dc8:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


