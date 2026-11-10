/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dfdf50; name: FUN_00dfdf50
 */


/* WARNING: Removing unreachable block (ram,0x00dfe2c4) */
/* WARNING: Removing unreachable block (ram,0x00dfe3ac) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00dfdf50(float param_1,long param_2,ulong param_3,undefined4 param_4)

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
  undefined2 uVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined8 uVar17;
  long *plVar18;
  undefined *puVar19;
  code *pcVar20;
  undefined *puVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  undefined1 uVar27;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_var;
  undefined1 uVar28;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 uVar29;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 uVar30;
  undefined1 extraout_var_04;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 extraout_var_05;
  undefined1 uVar35;
  undefined1 extraout_var_06;
  undefined1 uVar36;
  undefined1 extraout_var_07;
  undefined1 uVar37;
  undefined1 extraout_var_08;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  float fVar43;
  undefined1 auVar44 [12];
  undefined1 auVar45 [12];
  undefined1 auVar46 [12];
  float fVar52;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar54;
  float fVar55;
  undefined1 auVar49 [16];
  float fVar53;
  float fVar56;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  int iVar57;
  int iVar64;
  int iVar65;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  int iVar66;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar67;
  int iVar68;
  float fVar78;
  int iVar79;
  int iVar80;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  int iVar81;
  float fVar82;
  float fVar85;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined8 local_120;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  long local_100;
  ulong uStack_f8;
  ulong local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  long local_b0;
  ulong uStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  long *local_68;
  long local_48;
  
  if (*(int *)(param_2 + 0x6c) == 0) {
    return;
  }
  FUN_00a658b0(&local_68,param_2 + 0x50);
  puVar21 = PTR_DAT_0271ee50;
  lVar24 = *(long *)(param_2 + 0x58);
  if (lVar24 == 0) {
LAB_00dfe070:
    plVar22 = (long *)0x0;
    lVar24 = *(long *)(param_2 + 0x60);
    puVar19 = PTR_DAT_0271ee60;
    puVar21 = PTR_DAT_0271ee68;
  }
  else {
    if (*(int *)(lVar24 + 0x54) != 0) {
      piVar1 = (int *)(lVar24 + 0x54);
      puVar19 = PTR_DAT_0271ee58;
      iVar68 = *(int *)(lVar24 + 0x54);
      do {
        while( true ) {
          plVar22 = *(long **)(lVar24 + 0x58);
          if ((*puVar21 & 1) == 0) {
            iVar79 = __cxa_guard_acquire(puVar21);
            puVar19 = PTR_DAT_0271ee58;
            if (iVar79 != 0) {
              uVar17 = FUN_00a89c30();
              *(undefined8 *)PTR_DAT_0271ee58 = uVar17;
              __cxa_guard_release(puVar21);
              puVar19 = PTR_DAT_0271ee58;
            }
          }
          while( true ) {
            if (plVar22 == (long *)0x0) goto LAB_00dfe070;
            if (plVar22 == (long *)puVar19) break;
            plVar22 = (long *)*plVar22;
          }
          iVar79 = *piVar1;
          if (iVar79 == iVar68) break;
          ClearExclusiveLocal();
          iVar68 = iVar79;
          if (iVar79 == 0) goto LAB_00dfe070;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar68 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          plVar22 = (long *)0x0;
          if (*(long *)(lVar24 + 0x60) != 0) {
            plVar22 = (long *)(*(long *)(lVar24 + 0x60) + -0x50);
          }
          lVar24 = *(long *)(param_2 + 0x60);
          puVar19 = PTR_DAT_0271ee60;
          puVar21 = PTR_DAT_0271ee68;
          goto joined_r0x00dfe838;
        }
        iVar68 = iVar79;
      } while (iVar79 != 0);
      goto LAB_00dfe070;
    }
    plVar22 = (long *)0x0;
    lVar24 = *(long *)(param_2 + 0x60);
    puVar19 = PTR_DAT_0271ee60;
    puVar21 = PTR_DAT_0271ee68;
  }
joined_r0x00dfe838:
  PTR_DAT_0271ee60 = puVar19;
  PTR_DAT_0271ee68 = puVar21;
  if (lVar24 != 0) {
    if (*(int *)(lVar24 + 0x54) == 0) {
      plVar23 = (long *)0x0;
      cVar2 = *(char *)(param_2 + 0x68);
      goto joined_r0x00dfe188;
    }
    piVar1 = (int *)(lVar24 + 0x54);
    iVar68 = *(int *)(lVar24 + 0x54);
    do {
      while( true ) {
        plVar23 = *(long **)(lVar24 + 0x58);
        if ((*puVar19 & 1) == 0) {
          iVar79 = __cxa_guard_acquire(puVar19);
          puVar21 = PTR_DAT_0271ee68;
          if (iVar79 != 0) {
            uVar17 = FUN_00a89c30();
            *(undefined8 *)PTR_DAT_0271ee68 = uVar17;
            __cxa_guard_release(puVar19);
            puVar21 = PTR_DAT_0271ee68;
          }
        }
        while( true ) {
          if (plVar23 == (long *)0x0) goto LAB_00dfe164;
          if (plVar23 == (long *)puVar21) break;
          plVar23 = (long *)*plVar23;
        }
        iVar79 = *piVar1;
        if (iVar79 != iVar68) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar68 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          plVar23 = (long *)0x0;
          if (*(long *)(lVar24 + 0x60) != 0) {
            plVar23 = (long *)(*(long *)(lVar24 + 0x60) + -0x50);
          }
          cVar2 = *(char *)(param_2 + 0x68);
          goto joined_r0x00dfe188;
        }
        iVar68 = iVar79;
        if (iVar79 == 0) goto LAB_00dfe164;
      }
      ClearExclusiveLocal();
      iVar68 = iVar79;
    } while (iVar79 != 0);
  }
LAB_00dfe164:
  plVar23 = (long *)0x0;
  cVar2 = *(char *)(param_2 + 0x68);
joined_r0x00dfe188:
  if (cVar2 == '\0') {
    pcVar20 = *(code **)(*local_68 + 0x180);
    plVar18 = local_68;
  }
  else {
    pcVar20 = *(code **)(*plVar22 + 0x180);
    plVar18 = plVar22;
  }
  (*pcVar20)(plVar18,1);
  (**(code **)(*plVar23 + 0x180))(plVar23,0);
  *(undefined4 *)(param_2 + 0x6c) = 0;
  auVar51 = ZEXT816(0);
  if ((local_68[0x75] != 0) && (auVar51 = ZEXT816(0), *(int *)(local_68[0x75] + 0x54) != 0)) {
    FUN_00deff50(&local_b0,local_68 + 0x75);
    auVar51 = *(undefined1 (*) [16])(local_b0 + 0xb0);
    if (local_b0 != 0) {
      (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
      local_b0 = 0;
    }
  }
  lVar24 = *(long *)((long)plVar23 + 0x3c0);
  uVar27 = (undefined1)lVar24;
  fVar15 = (float)((ulong)lVar24 >> 0x20);
  fVar14 = (float)*(long *)((long)plVar23 + 0x3c8);
  fVar12 = (float)((ulong)*(long *)((long)plVar23 + 0x3c8) >> 0x20);
  auVar75 = *(undefined1 (*) [16])((long)plVar23 + 0x3b0);
  fVar82 = auVar75._0_4_ - (float)lVar24;
  fVar85 = auVar75._4_4_ - fVar15;
  auVar83._0_8_ = CONCAT44(fVar85,fVar82);
  auVar83._8_4_ = auVar75._8_4_ - fVar14;
  auVar83._12_4_ = auVar75._12_4_ - fVar12;
  uStack_f8 = auVar83._8_8_;
  if ((fVar82 == 0.0) && (fVar85 == 0.0)) {
    local_120 = 0;
    local_100 = auVar83._0_8_;
  }
  else {
    fVar52 = 0.0;
    auVar75._0_4_ = fVar82 * fVar82;
    auVar75._4_4_ = 0;
    auVar75._8_4_ = auVar83._8_4_ * auVar83._8_4_;
    auVar75._12_4_ = auVar83._12_4_ * auVar83._12_4_;
    auVar58 = NEON_ext(auVar75,auVar75,8,1);
    fVar67 = auVar58._0_4_ + auVar75._0_4_;
    fVar43 = auVar58._4_4_ + 0.0;
    fVar26 = fVar67 + fVar43;
    fVar67 = fVar67 + fVar43;
    if (fVar26 != 0.0) {
      auVar47._8_8_ = CONCAT44(fVar67,fVar26);
      auVar47._0_8_ = CONCAT44(fVar67,fVar26);
      auVar75 = NEON_frsqrte(auVar47,4);
      auVar69._0_4_ = auVar75._0_4_ * fVar26;
      auVar69._4_4_ = auVar75._4_4_ * fVar67;
      auVar69._8_4_ = auVar75._8_4_ * fVar26;
      auVar69._12_4_ = auVar75._12_4_ * fVar67;
      auVar58 = NEON_frsqrts(auVar75,auVar69,4);
      auVar59._0_4_ = auVar75._0_4_ * auVar58._0_4_;
      auVar59._4_4_ = auVar75._4_4_ * auVar58._4_4_;
      auVar59._8_4_ = auVar75._8_4_ * auVar58._8_4_;
      auVar59._12_4_ = auVar75._12_4_ * auVar58._12_4_;
      auVar70._0_4_ = fVar26 * auVar59._0_4_;
      auVar70._4_4_ = fVar67 * auVar59._4_4_;
      auVar70._8_4_ = fVar26 * auVar59._8_4_;
      auVar70._12_4_ = fVar67 * auVar59._12_4_;
      iVar68 = -(uint)(fVar26 == 0.0);
      iVar79 = -(uint)(fVar67 == 0.0);
      iVar80 = -(uint)(fVar26 == 0.0);
      iVar81 = -(uint)(fVar67 == 0.0);
      auVar75 = NEON_frsqrts(auVar59,auVar70,4);
      fVar82 = fVar82 * auVar59._0_4_ * auVar75._0_4_;
      fVar26 = auVar59._4_4_ * auVar75._4_4_ * 0.0;
      fVar67 = auVar83._8_4_ * auVar59._8_4_ * auVar75._8_4_;
      fVar43 = auVar83._12_4_ * auVar59._12_4_ * auVar75._12_4_;
      fVar52 = (float)CONCAT13((byte)((uint)fVar82 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18),
                               CONCAT12((byte)((uint)fVar82 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar82 >> 8) &
                                                  ~(byte)((uint)iVar68 >> 8),
                                                  SUB41(fVar82,0) & ~(byte)iVar68)));
      auVar44._0_8_ =
           CONCAT17((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar79 >> 0x18),
                    CONCAT16((byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar79 >> 0x10),
                             CONCAT15((byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar79 >> 8),
                                      CONCAT14(SUB41(fVar26,0) & ~(byte)iVar79,fVar52))));
      auVar44[8] = SUB41(fVar67,0) & ~(byte)iVar80;
      auVar44[9] = (byte)((uint)fVar67 >> 8) & ~(byte)((uint)iVar80 >> 8);
      auVar44[10] = (byte)((uint)fVar67 >> 0x10) & ~(byte)((uint)iVar80 >> 0x10);
      auVar44[0xb] = (byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar80 >> 0x18);
      auVar48[0xc] = SUB41(fVar43,0) & ~(byte)iVar81;
      auVar48._0_12_ = auVar44;
      auVar48[0xd] = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar81 >> 8);
      auVar48[0xe] = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar81 >> 0x10);
      auVar48[0xf] = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar81 >> 0x18);
      fVar82 = fVar52 * (float)_DAT_01d49dc0;
      fVar26 = (float)((ulong)auVar44._0_8_ >> 0x20) * (float)((ulong)_DAT_01d49dc0 >> 0x20);
      uVar27 = (undefined1)((uint)fVar26 >> 8);
      uVar28 = (undefined1)((uint)fVar26 >> 0x10);
      uVar29 = (undefined1)((uint)fVar26 >> 0x18);
      fVar67 = auVar44._8_4_ * (float)_UNK_01d49dc8;
      uVar30 = (undefined1)((uint)fVar67 >> 8);
      uVar31 = (undefined1)((uint)fVar67 >> 0x10);
      uVar32 = (undefined1)((uint)fVar67 >> 0x18);
      fVar43 = auVar48._12_4_ * (float)((ulong)_UNK_01d49dc8 >> 0x20);
      uVar33 = (undefined1)((uint)fVar43 >> 8);
      uVar34 = (undefined1)((uint)fVar43 >> 0x10);
      uVar35 = (undefined1)((uint)fVar43 >> 0x18);
      auVar58[4] = SUB41(fVar26,0);
      auVar58._0_4_ = fVar82;
      auVar58[5] = uVar27;
      auVar58[6] = uVar28;
      auVar58[7] = uVar29;
      auVar58[8] = SUB41(fVar67,0);
      auVar58[9] = uVar30;
      auVar58[10] = uVar31;
      auVar58[0xb] = uVar32;
      auVar58[0xc] = SUB41(fVar43,0);
      auVar58[0xd] = uVar33;
      auVar58[0xe] = uVar34;
      auVar58[0xf] = uVar35;
      auVar4[4] = SUB41(fVar26,0);
      auVar4._0_4_ = fVar82;
      auVar4[5] = uVar27;
      auVar4[6] = uVar28;
      auVar4[7] = uVar29;
      auVar4[8] = SUB41(fVar67,0);
      auVar4[9] = uVar30;
      auVar4[10] = uVar31;
      auVar4[0xb] = uVar32;
      auVar4[0xc] = SUB41(fVar43,0);
      auVar4[0xd] = uVar33;
      auVar4[0xe] = uVar34;
      auVar4[0xf] = uVar35;
      auVar75 = NEON_ext(auVar58,auVar4,8,1);
      fVar82 = auVar75._0_4_ + fVar82 + auVar75._4_4_ + fVar26;
      uVar27 = 0;
      if (-1.0 <= fVar82) {
        uVar27 = SUB41(fVar82,0);
      }
      FUN_01590400(uVar27);
      fVar82 = -(float)CONCAT13(extraout_var_03,
                                CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0)));
      uVar27 = SUB41(fVar82,0);
      uVar28 = (undefined1)((uint)fVar82 >> 8);
      uVar29 = (undefined1)((uint)fVar82 >> 0x10);
      uVar30 = (undefined1)((uint)fVar82 >> 0x18);
      if (0.0 <= fVar52) {
        uVar27 = extraout_b0;
        uVar28 = extraout_var;
        uVar29 = extraout_var_01;
        uVar30 = extraout_var_03;
      }
      auVar83._8_8_ = uStack_f8;
      fVar52 = (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27))) + 0.0;
    }
    fVar53 = auVar83._0_4_;
    fVar82 = fVar53 * fVar53;
    fVar56 = auVar83._4_4_;
    fVar26 = fVar56 * fVar56;
    uVar27 = (undefined1)((uint)fVar26 >> 8);
    uVar28 = (undefined1)((uint)fVar26 >> 0x10);
    uVar29 = (undefined1)((uint)fVar26 >> 0x18);
    fVar78 = auVar83._8_4_;
    fVar67 = fVar78 * fVar78;
    uVar30 = (undefined1)((uint)fVar67 >> 8);
    uVar31 = (undefined1)((uint)fVar67 >> 0x10);
    uVar32 = (undefined1)((uint)fVar67 >> 0x18);
    fVar55 = auVar83._12_4_;
    fVar43 = fVar55 * fVar55;
    uVar33 = (undefined1)((uint)fVar43 >> 8);
    uVar34 = (undefined1)((uint)fVar43 >> 0x10);
    uVar35 = (undefined1)((uint)fVar43 >> 0x18);
    auVar5[4] = SUB41(fVar26,0);
    auVar5._0_4_ = fVar82;
    auVar5[5] = uVar27;
    auVar5[6] = uVar28;
    auVar5[7] = uVar29;
    auVar5[8] = SUB41(fVar67,0);
    auVar5[9] = uVar30;
    auVar5[10] = uVar31;
    auVar5[0xb] = uVar32;
    auVar5[0xc] = SUB41(fVar43,0);
    auVar5[0xd] = uVar33;
    auVar5[0xe] = uVar34;
    auVar5[0xf] = uVar35;
    auVar6[4] = SUB41(fVar26,0);
    auVar6._0_4_ = fVar82;
    auVar6[5] = uVar27;
    auVar6[6] = uVar28;
    auVar6[7] = uVar29;
    auVar6[8] = SUB41(fVar67,0);
    auVar6[9] = uVar30;
    auVar6[10] = uVar31;
    auVar6[0xb] = uVar32;
    auVar6[0xc] = SUB41(fVar43,0);
    auVar6[0xd] = uVar33;
    auVar6[0xe] = uVar34;
    auVar6[0xf] = uVar35;
    auVar75 = NEON_ext(auVar5,auVar6,8,1);
    fVar82 = auVar75._0_4_ + fVar82;
    fVar26 = auVar75._4_4_ + fVar26;
    fVar67 = fVar82 + fVar26;
    fVar82 = fVar82 + fVar26;
    if (fVar67 == 0.0) {
      uVar28 = 0;
      uVar29 = 0;
      uVar30 = 0;
      uVar31 = 0;
    }
    else {
      auVar86._8_8_ = CONCAT44(fVar82,fVar67);
      auVar86._0_8_ = CONCAT44(fVar82,fVar67);
      fVar26 = fVar53 * fVar53;
      fVar43 = fVar78 * fVar78;
      uVar27 = (undefined1)((uint)fVar43 >> 8);
      uVar28 = (undefined1)((uint)fVar43 >> 0x10);
      uVar29 = (undefined1)((uint)fVar43 >> 0x18);
      auVar7._4_4_ = 0;
      auVar7._0_4_ = fVar26;
      auVar7[8] = SUB41(fVar43,0);
      auVar7[9] = uVar27;
      auVar7[10] = uVar28;
      auVar7[0xb] = uVar29;
      auVar7._12_4_ = 0;
      auVar8._4_4_ = 0;
      auVar8._0_4_ = fVar26;
      auVar8[8] = SUB41(fVar43,0);
      auVar8[9] = uVar27;
      auVar8[10] = uVar28;
      auVar8[0xb] = uVar29;
      auVar8._12_4_ = 0;
      auVar75 = NEON_ext(auVar7,auVar8,8,1);
      fVar26 = auVar75._0_4_ + fVar26;
      fVar43 = auVar75._4_4_ + 0.0;
      fVar25 = fVar26 + fVar43;
      fVar26 = fVar26 + fVar43;
      uVar27 = SUB41(fVar26,0);
      uVar28 = (undefined1)((uint)fVar26 >> 8);
      uVar29 = (undefined1)((uint)fVar26 >> 0x10);
      uVar30 = (undefined1)((uint)fVar26 >> 0x18);
      auVar9[4] = uVar27;
      auVar9._0_4_ = fVar25;
      auVar9[5] = uVar28;
      auVar9[6] = uVar29;
      auVar9[7] = uVar30;
      auVar9[8] = SUB41(fVar25,0);
      auVar9[9] = (char)((uint)fVar25 >> 8);
      auVar9[10] = (char)((uint)fVar25 >> 0x10);
      auVar9[0xb] = (char)((uint)fVar25 >> 0x18);
      auVar9[0xc] = uVar27;
      auVar9[0xd] = uVar28;
      auVar9[0xe] = uVar29;
      auVar9[0xf] = uVar30;
      auVar75 = NEON_frsqrte(auVar9,4);
      auVar71._0_4_ = auVar75._0_4_ * fVar25;
      auVar71._4_4_ = auVar75._4_4_ * fVar26;
      auVar71._8_4_ = auVar75._8_4_ * fVar25;
      uVar13 = (undefined2)(CONCAT15(uVar28,CONCAT14(uVar27,fVar25)) >> 0x20);
      auVar71._12_4_ = auVar75._12_4_ * (float)CONCAT13(uVar30,CONCAT12(uVar29,uVar13));
      auVar83 = NEON_frsqrts(auVar75,auVar71,4);
      auVar60._0_4_ = auVar75._0_4_ * auVar83._0_4_;
      auVar60._4_4_ = auVar75._4_4_ * auVar83._4_4_;
      auVar60._8_4_ = auVar75._8_4_ * auVar83._8_4_;
      auVar60._12_4_ = auVar75._12_4_ * auVar83._12_4_;
      auVar72._0_4_ = fVar25 * auVar60._0_4_;
      auVar72._4_4_ = fVar26 * auVar60._4_4_;
      auVar72._8_4_ = fVar25 * auVar60._8_4_;
      auVar72._12_4_ = (float)CONCAT13(uVar30,CONCAT12(uVar29,uVar13)) * auVar60._12_4_;
      iVar68 = -(uint)(fVar25 == 0.0);
      iVar79 = -(uint)(fVar26 == 0.0);
      iVar80 = -(uint)(fVar25 == 0.0);
      iVar81 = -(uint)((float)CONCAT13(uVar30,CONCAT12(uVar29,uVar13)) == 0.0);
      auVar75 = NEON_frsqrts(auVar60,auVar72,4);
      fVar26 = fVar53 * auVar60._0_4_ * auVar75._0_4_;
      fVar43 = auVar60._4_4_ * auVar75._4_4_ * 0.0;
      fVar25 = fVar78 * auVar60._8_4_ * auVar75._8_4_;
      fVar54 = auVar60._12_4_ * auVar75._12_4_ * 0.0;
      auVar75 = NEON_frsqrte(auVar86,4);
      auVar73._0_4_ = fVar67 * auVar75._0_4_;
      auVar73._4_4_ = fVar82 * auVar75._4_4_;
      auVar73._8_4_ = fVar67 * auVar75._8_4_;
      auVar73._12_4_ = fVar82 * auVar75._12_4_;
      auVar83 = NEON_frsqrts(auVar75,auVar73,4);
      auVar61._0_4_ = auVar75._0_4_ * auVar83._0_4_;
      auVar61._4_4_ = auVar75._4_4_ * auVar83._4_4_;
      auVar61._8_4_ = auVar75._8_4_ * auVar83._8_4_;
      auVar61._12_4_ = auVar75._12_4_ * auVar83._12_4_;
      auVar74._0_4_ = fVar67 * auVar61._0_4_;
      auVar74._4_4_ = fVar82 * auVar61._4_4_;
      auVar74._8_4_ = fVar67 * auVar61._8_4_;
      auVar74._12_4_ = fVar82 * auVar61._12_4_;
      auVar75 = NEON_frsqrts(auVar61,auVar74,4);
      fVar53 = fVar53 * auVar61._0_4_ * auVar75._0_4_;
      fVar56 = fVar56 * auVar61._4_4_ * auVar75._4_4_;
      fVar78 = fVar78 * auVar61._8_4_ * auVar75._8_4_;
      fVar55 = fVar55 * auVar61._12_4_ * auVar75._12_4_;
      iVar57 = -(uint)(fVar67 == 0.0);
      iVar64 = -(uint)(fVar82 == 0.0);
      iVar65 = -(uint)(fVar67 == 0.0);
      iVar66 = -(uint)(fVar82 == 0.0);
      fVar82 = (float)CONCAT13((byte)((uint)fVar53 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18),
                               CONCAT12((byte)((uint)fVar53 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar53 >> 8) &
                                                  ~(byte)((uint)iVar57 >> 8),
                                                  SUB41(fVar53,0) & ~(byte)iVar57)));
      auVar45._0_8_ =
           CONCAT17((byte)((uint)fVar56 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18),
                    CONCAT16((byte)((uint)fVar56 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10),
                             CONCAT15((byte)((uint)fVar56 >> 8) & ~(byte)((uint)iVar64 >> 8),
                                      CONCAT14(SUB41(fVar56,0) & ~(byte)iVar64,fVar82))));
      auVar45[8] = SUB41(fVar78,0) & ~(byte)iVar65;
      auVar45[9] = (byte)((uint)fVar78 >> 8) & ~(byte)((uint)iVar65 >> 8);
      auVar45[10] = (byte)((uint)fVar78 >> 0x10) & ~(byte)((uint)iVar65 >> 0x10);
      auVar45[0xb] = (byte)((uint)fVar78 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18);
      auVar49[0xc] = SUB41(fVar55,0) & ~(byte)iVar66;
      auVar49._0_12_ = auVar45;
      auVar49[0xd] = (byte)((uint)fVar55 >> 8) & ~(byte)((uint)iVar66 >> 8);
      auVar49[0xe] = (byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10);
      auVar49[0xf] = (byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18);
      fVar82 = (float)CONCAT13((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18),
                               CONCAT12((byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar26 >> 8) &
                                                  ~(byte)((uint)iVar68 >> 8),
                                                  SUB41(fVar26,0) & ~(byte)iVar68))) * fVar82;
      fVar26 = (float)CONCAT13((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar79 >> 0x18),
                               CONCAT12((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar79 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar43 >> 8) &
                                                  ~(byte)((uint)iVar79 >> 8),
                                                  SUB41(fVar43,0) & ~(byte)iVar79))) *
               (float)((ulong)auVar45._0_8_ >> 0x20);
      uVar27 = (undefined1)((uint)fVar26 >> 8);
      uVar28 = (undefined1)((uint)fVar26 >> 0x10);
      uVar29 = (undefined1)((uint)fVar26 >> 0x18);
      fVar43 = (float)CONCAT13((byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar80 >> 0x18),
                               CONCAT12((byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar80 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar25 >> 8) &
                                                  ~(byte)((uint)iVar80 >> 8),
                                                  SUB41(fVar25,0) & ~(byte)iVar80))) * auVar45._8_4_
      ;
      uVar30 = (undefined1)((uint)fVar43 >> 8);
      uVar31 = (undefined1)((uint)fVar43 >> 0x10);
      uVar32 = (undefined1)((uint)fVar43 >> 0x18);
      fVar53 = (float)CONCAT13((byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar81 >> 0x18),
                               CONCAT12((byte)((uint)fVar54 >> 0x10) & ~(byte)((uint)iVar81 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar54 >> 8) &
                                                  ~(byte)((uint)iVar81 >> 8),
                                                  SUB41(fVar54,0) & ~(byte)iVar81))) *
               auVar49._12_4_;
      uVar33 = (undefined1)((uint)fVar53 >> 8);
      uVar34 = (undefined1)((uint)fVar53 >> 0x10);
      uVar35 = (undefined1)((uint)fVar53 >> 0x18);
      auVar10[4] = SUB41(fVar26,0);
      auVar10._0_4_ = fVar82;
      auVar10[5] = uVar27;
      auVar10[6] = uVar28;
      auVar10[7] = uVar29;
      auVar10[8] = SUB41(fVar43,0);
      auVar10[9] = uVar30;
      auVar10[10] = uVar31;
      auVar10[0xb] = uVar32;
      auVar10[0xc] = SUB41(fVar53,0);
      auVar10[0xd] = uVar33;
      auVar10[0xe] = uVar34;
      auVar10[0xf] = uVar35;
      auVar11[4] = SUB41(fVar26,0);
      auVar11._0_4_ = fVar82;
      auVar11[5] = uVar27;
      auVar11[6] = uVar28;
      auVar11[7] = uVar29;
      auVar11[8] = SUB41(fVar43,0);
      auVar11[9] = uVar30;
      auVar11[10] = uVar31;
      auVar11[0xb] = uVar32;
      auVar11[0xc] = SUB41(fVar53,0);
      auVar11[0xd] = uVar33;
      auVar11[0xe] = uVar34;
      auVar11[0xf] = uVar35;
      auVar75 = NEON_ext(auVar10,auVar11,8,1);
      fVar82 = auVar75._0_4_ + fVar82 + auVar75._4_4_ + fVar26;
      uVar27 = 0;
      if (-1.0 <= fVar82) {
        uVar27 = SUB41(fVar82,0);
      }
      FUN_01590400(uVar27);
      fVar82 = -(float)CONCAT13(extraout_var_04,
                                CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00)));
      uVar28 = SUB41(fVar82,0);
      uVar29 = (undefined1)((uint)fVar82 >> 8);
      uVar30 = (undefined1)((uint)fVar82 >> 0x10);
      uVar31 = (undefined1)((uint)fVar82 >> 0x18);
      if (0.0 <= fVar85) {
        uVar28 = extraout_b0_00;
        uVar29 = extraout_var_00;
        uVar30 = extraout_var_02;
        uVar31 = extraout_var_04;
      }
    }
    uVar27 = SUB41(SQRT(fVar67),0);
    local_120 = CONCAT44(fVar52,0.0 - (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28)
                                                                     )));
    uStack_f8 = (ulong)(uint)SQRT(fVar67);
    local_100 = 0;
  }
  FUN_007101c0(uVar27,(long *)((long)plVar23 + 0xa0));
  plVar18 = local_68;
  local_90 = NEON_rev64(local_120,4);
  uStack_a8 = uStack_f8;
  local_b0 = local_100;
  local_a0 = CONCAT44(fVar15 - auVar51._4_4_,(float)lVar24 - auVar51._0_4_);
  auVar16._8_4_ = fVar14 - auVar51._8_4_;
  auVar16._0_8_ = local_a0;
  auVar16._12_4_ = fVar12 - auVar51._12_4_;
  lStack_98 = auVar16._8_8_;
  local_88 = CONCAT13(extraout_var_08,
                      CONCAT12(extraout_var_07,CONCAT11(extraout_var_06,extraout_var_05)));
  uStack_84 = *(undefined4 *)((long)plVar23 + 0x3dc);
  local_80 = *(undefined4 *)((long)plVar23 + 0x3e0);
  if (*(char *)(param_2 + 0x68) == '\0') {
    fVar15 = (float)*(long *)((long)plVar23 + 0x3b0);
    fVar43 = *(float *)((long)plVar23 + 0x3c0) - fVar15;
    fVar14 = (float)((ulong)*(long *)((long)plVar23 + 0x3b0) >> 0x20);
    fVar52 = *(float *)((long)plVar23 + 0x3c4) - fVar14;
    fVar12 = (float)*(long *)((long)plVar23 + 0x3b8);
    fVar53 = *(float *)((long)plVar23 + 0x3c8) - fVar12;
    fVar82 = (float)((ulong)*(long *)((long)plVar23 + 0x3b8) >> 0x20);
    fVar56 = *(float *)((long)plVar23 + 0x3cc) - fVar82;
    auVar62._0_4_ = *(float *)(local_68 + 0xc0) * *(float *)(local_68 + 0xc0);
    auVar62._4_4_ = *(float *)((long)local_68 + 0x604) * *(float *)((long)local_68 + 0x604);
    auVar62._8_4_ = *(float *)(local_68 + 0xc1) * *(float *)(local_68 + 0xc1);
    auVar62._12_4_ = *(float *)((long)local_68 + 0x60c) * *(float *)((long)local_68 + 0x60c);
    auVar75 = NEON_ext(auVar62,auVar62,8,1);
    auVar76._0_4_ = fVar43 * fVar43;
    auVar76._4_4_ = fVar52 * fVar52;
    auVar76._8_4_ = fVar53 * fVar53;
    auVar76._12_4_ = fVar56 * fVar56;
    auVar83 = NEON_ext(auVar76,auVar76,8,1);
    fVar67 = auVar83._0_4_ + auVar76._0_4_;
    fVar78 = auVar83._4_4_ + auVar76._4_4_;
    fVar85 = auVar75._0_4_ + auVar62._0_4_ + auVar75._4_4_ + auVar62._4_4_;
    fVar26 = fVar67 + fVar78;
    fVar67 = fVar67 + fVar78;
    if (1.0 <= ABS(fVar85 - fVar26)) {
      auVar77._8_8_ = CONCAT44(fVar67,fVar26);
      auVar77._0_8_ = CONCAT44(fVar67,fVar26);
      auVar75 = NEON_frsqrte(auVar77,4);
      fVar85 = SQRT(fVar85);
      auVar87._0_4_ = fVar26 * auVar75._0_4_;
      auVar87._4_4_ = fVar67 * auVar75._4_4_;
      auVar87._8_4_ = fVar26 * auVar75._8_4_;
      auVar87._12_4_ = fVar67 * auVar75._12_4_;
      auVar83 = NEON_frsqrts(auVar75,auVar87,4);
      auVar84._0_4_ = auVar75._0_4_ * auVar83._0_4_;
      auVar84._4_4_ = auVar75._4_4_ * auVar83._4_4_;
      auVar84._8_4_ = auVar75._8_4_ * auVar83._8_4_;
      auVar84._12_4_ = auVar75._12_4_ * auVar83._12_4_;
      auVar88._0_4_ = fVar26 * auVar84._0_4_;
      auVar88._4_4_ = fVar67 * auVar84._4_4_;
      auVar88._8_4_ = fVar26 * auVar84._8_4_;
      auVar88._12_4_ = fVar67 * auVar84._12_4_;
      iVar68 = -(uint)(fVar26 == 0.0);
      iVar79 = -(uint)(fVar67 == 0.0);
      iVar80 = -(uint)(fVar26 == 0.0);
      iVar81 = -(uint)(fVar67 == 0.0);
      auVar75 = NEON_frsqrts(auVar84,auVar88,4);
      fVar43 = fVar43 * auVar84._0_4_ * auVar75._0_4_;
      fVar52 = fVar52 * auVar84._4_4_ * auVar75._4_4_;
      fVar53 = fVar53 * auVar84._8_4_ * auVar75._8_4_;
      fVar56 = fVar56 * auVar84._12_4_ * auVar75._12_4_;
      fVar26 = (float)CONCAT13((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18),
                               CONCAT12((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar43 >> 8) &
                                                  ~(byte)((uint)iVar68 >> 8),
                                                  SUB41(fVar43,0) & ~(byte)iVar68)));
      auVar46._0_8_ =
           CONCAT17((byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar79 >> 0x18),
                    CONCAT16((byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar79 >> 0x10),
                             CONCAT15((byte)((uint)fVar52 >> 8) & ~(byte)((uint)iVar79 >> 8),
                                      CONCAT14(SUB41(fVar52,0) & ~(byte)iVar79,fVar26))));
      auVar46[8] = SUB41(fVar53,0) & ~(byte)iVar80;
      auVar46[9] = (byte)((uint)fVar53 >> 8) & ~(byte)((uint)iVar80 >> 8);
      auVar46[10] = (byte)((uint)fVar53 >> 0x10) & ~(byte)((uint)iVar80 >> 0x10);
      auVar46[0xb] = (byte)((uint)fVar53 >> 0x18) & ~(byte)((uint)iVar80 >> 0x18);
      auVar50[0xc] = SUB41(fVar56,0) & ~(byte)iVar81;
      auVar50._0_12_ = auVar46;
      auVar50[0xd] = (byte)((uint)fVar56 >> 8) & ~(byte)((uint)iVar81 >> 8);
      auVar50[0xe] = (byte)((uint)fVar56 >> 0x10) & ~(byte)((uint)iVar81 >> 0x10);
      auVar50[0xf] = (byte)((uint)fVar56 >> 0x18) & ~(byte)((uint)iVar81 >> 0x18);
      fVar26 = fVar26 * fVar85;
      fVar67 = (float)((ulong)auVar46._0_8_ >> 0x20) * fVar85;
      fVar43 = auVar46._8_4_ * fVar85;
      fVar85 = auVar50._12_4_ * fVar85;
      auVar63._0_4_ = fVar26 * fVar26;
      auVar63._4_4_ = fVar67 * fVar67;
      auVar63._8_4_ = fVar43 * fVar43;
      auVar63._12_4_ = fVar85 * fVar85;
      auVar75 = NEON_ext(auVar63,auVar63,8,1);
      fVar14 = (fVar14 + fVar67) - auVar51._4_4_;
      fVar82 = (fVar82 + fVar85) - auVar51._12_4_;
      uStack_a8 = (ulong)(uint)SQRT(auVar75._0_4_ + auVar63._0_4_ + auVar75._4_4_ + auVar63._4_4_);
      local_b0 = 0;
      lStack_98 = CONCAT17((char)((uint)fVar82 >> 0x18),
                           CONCAT16((char)((uint)fVar82 >> 0x10),
                                    CONCAT15((char)((uint)fVar82 >> 8),
                                             CONCAT14(SUB41(fVar82,0),
                                                      (fVar12 + fVar43) - auVar51._8_4_))));
      local_a0 = CONCAT17((char)((uint)fVar14 >> 0x18),
                          CONCAT16((char)((uint)fVar14 >> 0x10),
                                   CONCAT15((char)((uint)fVar14 >> 8),
                                            CONCAT14(SUB41(fVar14,0),
                                                     (fVar15 + fVar26) - auVar51._0_4_))));
    }
    local_68[0xb2] = local_a0;
    local_68[0xb1] = uStack_a8;
    local_68[0xb0] = local_b0;
    *(undefined4 *)(local_68 + 0xb6) = local_80;
    local_68[0xb5] = CONCAT44(uStack_84,local_88);
    local_68[0xb4] = local_90;
    local_68[0xb3] = lStack_98;
    uVar27 = 0;
    uVar28 = 0;
    uVar29 = 0;
    uVar30 = 0;
    uVar31 = 0;
    uVar32 = 0;
    uVar33 = 0;
    uVar34 = 0;
    uVar35 = 0;
    uVar36 = 0;
    uVar37 = 0;
    uVar38 = 0;
    uVar39 = 0;
    uVar40 = 0;
    uVar41 = 0;
    uVar42 = 0;
    *(undefined4 *)(local_68 + 0xbe) = local_80;
    uStack_f8 = 0;
    local_100 = 0;
    local_68[0xb9] = uStack_a8;
    local_68[0xbb] = lStack_98;
    local_68[0xbc] = local_90;
    local_68[0xbd] = CONCAT44(uStack_84,local_88);
    local_68[0xba] = local_a0;
    local_68[0xb8] = local_b0;
    local_68[0xc2] = local_a0;
    local_68[0xc1] = uStack_a8;
    local_68[0xc0] = local_b0;
    local_68[0xc3] = lStack_98;
    *(undefined4 *)(local_68 + 0xc6) = local_80;
    local_68[0xc5] = CONCAT44(uStack_84,local_88);
    local_68[0xc4] = local_90;
    if (local_68[0x75] != 0) {
      uVar27 = 0;
      uVar28 = 0;
      uVar29 = 0;
      uVar30 = 0;
      uVar31 = 0;
      uVar32 = 0;
      uVar33 = 0;
      uVar34 = 0;
      uVar35 = 0;
      uVar36 = 0;
      uVar37 = 0;
      uVar38 = 0;
      uVar39 = 0;
      uVar40 = 0;
      uVar41 = 0;
      uVar42 = 0;
      if (*(int *)(local_68[0x75] + 0x54) != 0) {
        FUN_00deff50(&local_f0,local_68 + 0x75);
        uVar17 = *(undefined8 *)(local_f0 + 0xb8);
        uVar35 = (undefined1)uVar17;
        uVar36 = (undefined1)((ulong)uVar17 >> 8);
        uVar37 = (undefined1)((ulong)uVar17 >> 0x10);
        uVar38 = (undefined1)((ulong)uVar17 >> 0x18);
        uVar39 = (undefined1)((ulong)uVar17 >> 0x20);
        uVar40 = (undefined1)((ulong)uVar17 >> 0x28);
        uVar41 = (undefined1)((ulong)uVar17 >> 0x30);
        uVar42 = (undefined1)((ulong)uVar17 >> 0x38);
        uVar17 = *(undefined8 *)(local_f0 + 0xb0);
        uVar27 = (undefined1)uVar17;
        uVar28 = (undefined1)((ulong)uVar17 >> 8);
        uVar29 = (undefined1)((ulong)uVar17 >> 0x10);
        uVar30 = (undefined1)((ulong)uVar17 >> 0x18);
        uVar31 = (undefined1)((ulong)uVar17 >> 0x20);
        uVar32 = (undefined1)((ulong)uVar17 >> 0x28);
        uVar33 = (undefined1)((ulong)uVar17 >> 0x30);
        uVar34 = (undefined1)((ulong)uVar17 >> 0x38);
        if (local_f0 != 0) {
          (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
        }
      }
    }
    uStack_e8 = CONCAT17(uVar42,CONCAT16(uVar41,CONCAT15(uVar40,CONCAT14(uVar39,CONCAT13(uVar38,
                                                  CONCAT12(uVar37,CONCAT11(uVar36,uVar35)))))));
    local_f0 = CONCAT17(uVar34,CONCAT16(uVar33,CONCAT15(uVar32,CONCAT14(uVar31,CONCAT13(uVar30,
                                                  CONCAT12(uVar29,CONCAT11(uVar28,uVar27)))))));
    FUN_00e8fe90(plVar18,&local_f0,&local_b0);
    local_68[0x9e] = local_a0;
    local_68[0x9c] = local_b0;
    *(undefined4 *)(local_68 + 0xa2) = local_80;
    local_68[0xa0] = local_90;
    local_68[0xa1] = CONCAT44(uStack_84,local_88);
    local_68[0x9f] = lStack_98;
    local_68[0x9d] = uStack_a8;
    local_68[0x78] = local_a0;
    local_68[0x76] = local_b0;
    local_68[0x77] = uStack_a8;
    local_68[0x79] = lStack_98;
    *(undefined4 *)(local_68 + 0x7c) = local_80;
    local_68[0x7a] = local_90;
    local_68[0x7b] = CONCAT44(uStack_84,local_88);
    FUN_00dfaab0(param_2,1);
    auVar51 = *(undefined1 (*) [16])(local_68[0x98] + 0xb0);
    local_110 = auVar51._0_4_;
    fStack_10c = auVar51._4_4_;
    fStack_108 = auVar51._8_4_;
    fStack_104 = auVar51._12_4_;
    if ((local_68[0x75] != 0) && (*(int *)(local_68[0x75] + 0x54) != 0)) {
      FUN_00deff50(&local_f0,local_68 + 0x75);
      uStack_f8 = *(undefined8 *)(local_f0 + 0xb8);
      local_100 = *(undefined8 *)(local_f0 + 0xb0);
      if (local_f0 != 0) {
        (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
        local_f0 = 0;
      }
    }
    fStack_10c = fStack_10c + (float)((ulong)local_100 >> 0x20);
    fStack_104 = fStack_104 + (float)(uStack_f8 >> 0x20);
    *(ulong *)(param_2 + 0xb8) =
         CONCAT17((char)((uint)fStack_104 >> 0x18),
                  CONCAT16((char)((uint)fStack_104 >> 0x10),
                           CONCAT15((char)((uint)fStack_104 >> 8),
                                    CONCAT14(SUB41(fStack_104,0),fStack_108 + (float)uStack_f8))));
    *(ulong *)(param_2 + 0xb0) =
         CONCAT17((char)((uint)fStack_10c >> 0x18),
                  CONCAT16((char)((uint)fStack_10c >> 0x10),
                           CONCAT15((char)((uint)fStack_10c >> 8),
                                    CONCAT14(SUB41(fStack_10c,0),local_110 + (float)local_100))));
    FUN_00dfb690(param_2,1);
    if ((0.0 < param_1) && ((param_3 & 1) != 0)) {
      if ((char)local_68[0xa4] == '\0') {
        FUN_00e901a0(SUB41(1.0 / param_1,0),local_68,&local_b0,param_4);
      }
      else {
        FUN_00e8fec0();
        local_b8 = 3;
        local_f0 = local_f0 & 0xffffffffffff0000;
        local_c0 = 0;
        auVar51 = ZEXT816(0);
        if ((local_68[0x75] != 0) && (*(int *)(local_68[0x75] + 0x54) != 0)) {
          FUN_00deff50(&local_48,local_68 + 0x75);
          auVar51 = *(undefined1 (*) [16])(local_48 + 0xb0);
          if (local_48 != 0) {
            (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
            local_48 = 0;
          }
        }
        fVar15 = auVar51._4_4_ + (float)((ulong)local_a0 >> 0x20);
        fVar14 = auVar51._12_4_ + (float)((ulong)lStack_98 >> 0x20);
        uStack_d8 = CONCAT17((char)((uint)fVar14 >> 0x18),
                             CONCAT16((char)((uint)fVar14 >> 0x10),
                                      CONCAT15((char)((uint)fVar14 >> 8),
                                               CONCAT14(SUB41(fVar14,0),
                                                        auVar51._8_4_ + (float)lStack_98))));
        local_e0 = CONCAT17((char)((uint)fVar15 >> 0x18),
                            CONCAT16((char)((uint)fVar15 >> 0x10),
                                     CONCAT15((char)((uint)fVar15 >> 8),
                                              CONCAT14(SUB41(fVar15,0),
                                                       auVar51._0_4_ + (float)local_a0))));
        lStack_c8 = local_68[0xad];
        local_d0 = local_68[0xac];
        local_c0 = CONCAT44(1.0 / param_1,(undefined4)local_c0);
        local_b8 = param_4;
        FUN_00e8ff50(local_68,&local_f0);
      }
    }
  }
  else if ((0.0 < param_1) && ((param_3 & 1) != 0)) {
    FUN_00e3d590(SUB41(1.0 / param_1,0),plVar22,&local_b0,param_4);
  }
  FUN_00e65a70(plVar23,0);
  FUN_00e653b0(plVar23,0);
  (**(code **)(*(long *)((long)plVar23 + 0x48U) + 0x18))((long *)((long)plVar23 + 0x48U));
  if (plVar22 != (long *)0x0) {
    (**(code **)(*(long *)((long)plVar22 + 0x48U) + 0x18))((long *)((long)plVar22 + 0x48U));
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(local_68[9] + 0x18))();
  }
  return;
}


