/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eb8880; name: FUN_00eb8880
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00eb8880(long param_1,uint param_2)

{
  bool bVar1;
  unkbyte9 *pVar2;
  int *piVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined2 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uVar24;
  undefined8 uVar25;
  undefined *puVar26;
  byte *pbVar27;
  long *plVar28;
  long lVar29;
  float fVar30;
  float fVar31;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  float fVar41;
  float fVar44;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined1 auVar49 [12];
  undefined1 auVar50 [12];
  undefined1 auVar51 [16];
  float fVar56;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar57;
  float fVar58;
  undefined1 auVar55 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  int iVar62;
  int iVar66;
  int iVar67;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  int iVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  undefined8 uVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  undefined8 uVar93;
  undefined8 uVar94;
  float local_50;
  float fStack_48;
  float fStack_44;
  
  if ((*(long *)(param_1 + 0x2c0) != 0) && (*(int *)(*(long *)(param_1 + 0x2c0) + 0x54) != 0)) {
    fVar79 = *(float *)PTR_DAT_0271fcf0;
    (**(code **)(**(long **)(param_1 + 0x78) + 0x130))();
    fVar79 = fVar79 + (float)CONCAT13(extraout_var_01,
                                      CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
    lVar29 = *(long *)(param_1 + 0x2c0);
    if ((lVar29 != 0) && (*(int *)(lVar29 + 0x54) != 0)) {
      piVar3 = (int *)(lVar29 + 0x54);
      puVar26 = PTR_DAT_0271edc0;
      pbVar27 = PTR_DAT_0271edb8;
      iVar62 = *(int *)(lVar29 + 0x54);
      do {
        while( true ) {
          plVar28 = *(long **)(lVar29 + 0x58);
          if (((*pbVar27 & 1) == 0) &&
             (iVar66 = __cxa_guard_acquire(PTR_DAT_0271edb8), pbVar27 = PTR_DAT_0271edb8,
             puVar26 = PTR_DAT_0271edc0, iVar66 != 0)) {
            if (((*PTR_DAT_0271ed78 & 1) == 0) &&
               (iVar66 = __cxa_guard_acquire(PTR_DAT_0271ed78), iVar66 != 0)) {
              uVar25 = FUN_01577390();
              *(undefined8 *)PTR_DAT_0271ed80 = uVar25;
              __cxa_guard_release(PTR_DAT_0271ed78);
            }
            puVar26 = PTR_DAT_0271edc0;
            *(undefined **)PTR_DAT_0271edc0 = PTR_DAT_0271ed80;
            pbVar27 = PTR_DAT_0271edb8;
            __cxa_guard_release(PTR_DAT_0271edb8);
          }
          while( true ) {
            if (plVar28 == (long *)0x0) goto LAB_00eb8a3c;
            if (plVar28 == (long *)puVar26) break;
            plVar28 = (long *)*plVar28;
          }
          iVar66 = *piVar3;
          if (iVar66 == iVar62) break;
          ClearExclusiveLocal();
          iVar62 = iVar66;
          if (iVar66 == 0) goto LAB_00eb8a3c;
        }
        cVar4 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar1) {
          *piVar3 = iVar62 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar29 = *(long *)(lVar29 + 0x60);
          if (lVar29 != 0) {
            uVar19 = *(undefined8 *)(lVar29 + 0x68);
            uVar25 = *(undefined8 *)(lVar29 + 0x60);
            (**(code **)(*(long *)(lVar29 + -8) + 0x18))();
            local_50 = (float)uVar25;
            fStack_48 = (float)uVar19;
            fStack_44 = (float)((ulong)uVar19 >> 0x20);
            goto LAB_00eb8a44;
          }
          break;
        }
        iVar62 = iVar66;
      } while (iVar66 != 0);
    }
LAB_00eb8a3c:
    local_50 = _DAT_000000b0;
    fStack_48 = _DAT_000000b8;
    fStack_44 = fRam00000000000000bc;
LAB_00eb8a44:
    lVar29 = *(long *)(param_1 + 0x78);
    local_50 = local_50 - *(float *)(lVar29 + 0xb0);
    fStack_48 = fStack_48 - *(float *)(lVar29 + 0xb8);
    fStack_44 = fStack_44 - *(float *)(lVar29 + 0xbc);
    auVar59._0_4_ = local_50 * local_50;
    auVar59._4_4_ = 0;
    auVar59._8_4_ = fStack_48 * fStack_48;
    auVar59._12_4_ = fStack_44 * fStack_44;
    auVar51 = NEON_ext(auVar59,auVar59,8,1);
    fVar41 = auVar51._0_4_ + auVar59._0_4_;
    fVar44 = auVar51._4_4_ + 0.0;
    fVar30 = fVar41 + fVar44;
    fVar41 = fVar41 + fVar44;
    fVar79 = fVar79 * fVar79;
    bVar1 = fVar79 > fVar30 || fVar30 == fVar79;
    if (fVar79 <= fVar30 && fVar30 != fVar79) {
      return bVar1;
    }
    if ((param_2 & 1) == 0) {
      return bVar1;
    }
    pVar2 = (unkbyte9 *)(lVar29 + 0xa0);
    uVar25 = *(undefined8 *)(lVar29 + 0xa8);
    uVar32 = (undefined1)((ulong)uVar25 >> 8);
    uVar33 = (undefined1)((ulong)uVar25 >> 0x10);
    uVar34 = (undefined1)((ulong)uVar25 >> 0x18);
    uVar35 = (undefined1)((ulong)uVar25 >> 0x20);
    uVar36 = (undefined1)((ulong)uVar25 >> 0x28);
    uVar37 = (undefined1)((ulong)uVar25 >> 0x30);
    uVar38 = (undefined1)((ulong)uVar25 >> 0x38);
    uVar82 = (undefined4)_UNK_01d49dc8;
    uVar83 = (undefined4)((ulong)_UNK_01d49dc8 >> 0x20);
    fVar79 = (float)*(undefined8 *)pVar2;
    fVar31 = fVar79 * (float)_DAT_01d4ae80;
    fVar44 = (float)((ulong)*(undefined8 *)pVar2 >> 0x20);
    fVar20 = fVar44 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
    uVar39 = SUB41(fVar20,0);
    uVar40 = (undefined1)((uint)fVar20 >> 8);
    uVar69 = (undefined1)((uint)fVar20 >> 0x10);
    uVar70 = (undefined1)((uint)fVar20 >> 0x18);
    fVar57 = (float)uVar25 * (float)_UNK_01d4ae88;
    uVar71 = SUB41(fVar57,0);
    uVar72 = (undefined1)((uint)fVar57 >> 8);
    uVar73 = (undefined1)((uint)fVar57 >> 0x10);
    uVar74 = (undefined1)((uint)fVar57 >> 0x18);
    fVar46 = (float)((ulong)uVar25 >> 0x20) * (float)((ulong)_UNK_01d4ae88 >> 0x20);
    uVar75 = SUB41(fVar46,0);
    uVar76 = (undefined1)((uint)fVar46 >> 8);
    uVar77 = (undefined1)((uint)fVar46 >> 0x10);
    uVar78 = (undefined1)((uint)fVar46 >> 0x18);
    auVar21._8_4_ = uVar82;
    auVar21._0_8_ = _DAT_01d49dc0;
    auVar21._12_4_ = uVar83;
    uVar47 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd4f90);
    auVar13[4] = uVar39;
    auVar13._0_4_ = fVar31;
    auVar13[5] = uVar40;
    auVar13[6] = uVar69;
    auVar13[7] = uVar70;
    auVar13[8] = uVar71;
    auVar13[9] = uVar72;
    auVar13[10] = uVar73;
    auVar13[0xb] = uVar74;
    auVar13[0xc] = uVar75;
    auVar13[0xd] = uVar76;
    auVar13[0xe] = uVar77;
    auVar13[0xf] = uVar78;
    uVar90 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd4f90);
    auVar22._8_4_ = uVar82;
    auVar22._0_8_ = _DAT_01d49dc0;
    auVar22._12_4_ = uVar83;
    uVar84 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd50f8);
    auVar23._8_4_ = uVar82;
    auVar23._0_8_ = _DAT_01d49dc0;
    auVar23._12_4_ = uVar83;
    uVar48 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd5418);
    fVar80 = (float)((ulong)uVar48 >> 0x20);
    auVar14[4] = uVar39;
    auVar14._0_4_ = fVar31;
    auVar14[5] = uVar40;
    auVar14[6] = uVar69;
    auVar14[7] = uVar70;
    auVar14[8] = uVar71;
    auVar14[9] = uVar72;
    auVar14[10] = uVar73;
    auVar14[0xb] = uVar74;
    auVar14[0xc] = uVar75;
    auVar14[0xd] = uVar76;
    auVar14[0xe] = uVar77;
    auVar14[0xf] = uVar78;
    uVar92 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd5120);
    auVar15[4] = uVar39;
    auVar15._0_4_ = fVar31;
    auVar15[5] = uVar40;
    auVar15[6] = uVar69;
    auVar15[7] = uVar70;
    auVar15[8] = uVar71;
    auVar15[9] = uVar72;
    auVar15[10] = uVar73;
    auVar15[0xb] = uVar74;
    auVar15[0xc] = uVar75;
    auVar15[0xd] = uVar76;
    auVar15[0xe] = uVar77;
    auVar15[0xf] = uVar78;
    uVar93 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd5418);
    auVar16[4] = uVar39;
    auVar16._0_4_ = fVar31;
    auVar16[5] = uVar40;
    auVar16[6] = uVar69;
    auVar16[7] = uVar70;
    auVar16[8] = uVar71;
    auVar16[9] = uVar72;
    auVar16[10] = uVar73;
    auVar16[0xb] = uVar74;
    auVar16[0xc] = uVar75;
    auVar16[0xd] = uVar76;
    auVar16[0xe] = uVar77;
    auVar16[0xf] = uVar78;
    uVar94 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd5270);
    auVar51[9] = uVar32;
    auVar51._0_9_ = *pVar2;
    auVar51[10] = uVar33;
    auVar51[0xb] = uVar34;
    auVar51[0xc] = uVar35;
    auVar51[0xd] = uVar36;
    auVar51[0xe] = uVar37;
    auVar51[0xf] = uVar38;
    uVar24 = a64_TBL(ZEXT816(0),auVar51,DAT_01cd50f8);
    fVar81 = (float)((ulong)uVar24 >> 0x20);
    fVar58 = (float)((ulong)uVar47 >> 0x20);
    fVar85 = (float)((ulong)uVar84 >> 0x20);
    auVar17[4] = uVar39;
    auVar17._0_4_ = fVar31;
    auVar17[5] = uVar40;
    auVar17[6] = uVar69;
    auVar17[7] = uVar70;
    auVar17[8] = uVar71;
    auVar17[9] = uVar72;
    auVar17[10] = uVar73;
    auVar17[0xb] = uVar74;
    auVar17[0xc] = uVar75;
    auVar17[0xd] = uVar76;
    auVar17[0xe] = uVar77;
    auVar17[0xf] = uVar78;
    uVar91 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd50f8);
    auVar18[4] = uVar39;
    auVar18._0_4_ = fVar31;
    auVar18[5] = uVar40;
    auVar18[6] = uVar69;
    auVar18[7] = uVar70;
    auVar18[8] = SUB41(fVar31,0);
    auVar18[9] = (char)((uint)fVar31 >> 8);
    auVar18[10] = (char)((uint)fVar31 >> 0x10);
    auVar18[0xb] = (char)((uint)fVar31 >> 0x18);
    auVar18[0xc] = uVar39;
    auVar18[0xd] = uVar40;
    auVar18[0xe] = uVar69;
    auVar18[0xf] = uVar70;
    uVar25 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd50b0);
    fVar86 = (float)_DAT_01d4ae90;
    fVar87 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    fVar88 = (float)_UNK_01d4ae98;
    fVar89 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    auVar7[9] = uVar32;
    auVar7._0_9_ = *pVar2;
    auVar7[10] = uVar33;
    auVar7[0xb] = uVar34;
    auVar7[0xc] = uVar35;
    auVar7[0xd] = uVar36;
    auVar7[0xe] = uVar37;
    auVar7[0xf] = uVar38;
    uVar19 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd4f90);
    fVar45 = (fVar31 * (float)uVar47 + fVar86 * (float)uVar90 * 0.0 +
             fVar86 * (float)uVar48 * (float)uVar91) - (float)uVar84 * (float)uVar93;
    fVar56 = (fVar20 * fVar58 + fVar87 * (float)((ulong)uVar90 >> 0x20) * 0.0 +
             fVar87 * fVar80 * (float)((ulong)uVar91 >> 0x20)) -
             fVar85 * (float)((ulong)uVar93 >> 0x20);
    auVar52._0_8_ = CONCAT44(fVar56,fVar45);
    auVar52._8_4_ =
         (fVar57 * (float)uVar47 + fVar88 * (float)uVar84 * (float)uVar92 +
         fVar88 * (float)uVar25 * 0.0) - (float)uVar48 * (float)uVar94;
    auVar52._12_4_ =
         (fVar46 * fVar58 + fVar89 * fVar85 * (float)((ulong)uVar92 >> 0x20) +
         fVar89 * (float)((ulong)uVar25 >> 0x20) * 0.0) - fVar80 * (float)((ulong)uVar94 >> 0x20);
    uVar84 = a64_TBL(ZEXT816(0),auVar52,DAT_01cd4f90);
    uVar92 = a64_TBL(ZEXT816(0),auVar52,DAT_01cd5120);
    fVar31 = (float)((ulong)uVar19 >> 0x20);
    auVar8[9] = uVar32;
    auVar8._0_9_ = *pVar2;
    auVar8[10] = uVar33;
    auVar8[0xb] = uVar34;
    auVar8[0xc] = uVar35;
    auVar8[0xd] = uVar36;
    auVar8[0xe] = uVar37;
    auVar8[0xf] = uVar38;
    uVar91 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5418);
    fVar46 = (float)((ulong)uVar91 >> 0x20);
    uVar25 = a64_TBL(ZEXT816(0),auVar52,DAT_01cd50f8);
    uVar47 = a64_TBL(ZEXT816(0),auVar52,DAT_01cd5418);
    uVar90 = a64_TBL(ZEXT816(0),auVar52,DAT_01cd5270);
    auVar53._8_8_ = auVar52._0_8_;
    auVar53._0_8_ = auVar52._0_8_;
    uVar48 = a64_TBL(ZEXT816(0),auVar53,DAT_01cd50b0);
    fVar20 = ((float)uVar19 * fVar45 + fVar86 * fVar79 * (float)uVar84 +
             fVar86 * (float)uVar91 * (float)uVar25) - (float)uVar24 * (float)uVar47;
    fVar57 = (fVar31 * fVar56 + fVar87 * fVar44 * (float)((ulong)uVar84 >> 0x20) +
             fVar87 * fVar46 * (float)((ulong)uVar25 >> 0x20)) -
             fVar81 * (float)((ulong)uVar47 >> 0x20);
    fVar79 = ((float)uVar19 * auVar52._8_4_ + fVar88 * (float)uVar24 * (float)uVar92 +
             fVar88 * fVar79 * (float)uVar48) - (float)uVar91 * (float)uVar90;
    fVar44 = (fVar31 * auVar52._12_4_ + fVar89 * fVar81 * (float)((ulong)uVar92 >> 0x20) +
             fVar89 * fVar44 * (float)((ulong)uVar48 >> 0x20)) -
             fVar46 * (float)((ulong)uVar90 >> 0x20);
    fVar46 = (float)CONCAT13((byte)((uint)fVar20 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18),
                             CONCAT12((byte)((uint)fVar20 >> 0x10) &
                                      (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                      CONCAT11((byte)((uint)fVar20 >> 8) &
                                               (byte)((ulong)DAT_01d4ab50 >> 8),
                                               SUB41(fVar20,0) & (byte)DAT_01d4ab50)));
    auVar49._0_8_ =
         CONCAT17((byte)((uint)fVar57 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                  CONCAT16((byte)((uint)fVar57 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x30),
                           CONCAT15((byte)((uint)fVar57 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                    CONCAT14(SUB41(fVar57,0) & (byte)((ulong)DAT_01d4ab50 >> 0x20),
                                             fVar46))));
    auVar49[8] = SUB41(fVar79,0) & (byte)DAT_01d4ab58;
    auVar49[9] = (byte)((uint)fVar79 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 8);
    auVar49[10] = (byte)((uint)fVar79 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x10);
    auVar49[0xb] = (byte)((uint)fVar79 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18);
    auVar54[0xc] = SUB41(fVar44,0) & (byte)((ulong)DAT_01d4ab58 >> 0x20);
    auVar54._0_12_ = auVar49;
    auVar54[0xd] = (byte)((uint)fVar44 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 0x28);
    auVar54[0xe] = (byte)((uint)fVar44 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x30);
    auVar54[0xf] = (byte)((uint)fVar44 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38);
    fVar79 = fVar46 * fVar46;
    fVar57 = (float)((ulong)auVar49._0_8_ >> 0x20);
    fVar44 = fVar57 * fVar57;
    uVar32 = (undefined1)((uint)fVar44 >> 8);
    uVar33 = (undefined1)((uint)fVar44 >> 0x10);
    uVar34 = (undefined1)((uint)fVar44 >> 0x18);
    fVar45 = auVar49._8_4_;
    fVar31 = fVar45 * fVar45;
    uVar35 = (undefined1)((uint)fVar31 >> 8);
    uVar36 = (undefined1)((uint)fVar31 >> 0x10);
    uVar37 = (undefined1)((uint)fVar31 >> 0x18);
    fVar58 = auVar54._12_4_;
    fVar20 = fVar58 * fVar58;
    uVar38 = (undefined1)((uint)fVar20 >> 8);
    uVar39 = (undefined1)((uint)fVar20 >> 0x10);
    uVar40 = (undefined1)((uint)fVar20 >> 0x18);
    auVar9[4] = SUB41(fVar44,0);
    auVar9._0_4_ = fVar79;
    auVar9[5] = uVar32;
    auVar9[6] = uVar33;
    auVar9[7] = uVar34;
    auVar9[8] = SUB41(fVar31,0);
    auVar9[9] = uVar35;
    auVar9[10] = uVar36;
    auVar9[0xb] = uVar37;
    auVar9[0xc] = SUB41(fVar20,0);
    auVar9[0xd] = uVar38;
    auVar9[0xe] = uVar39;
    auVar9[0xf] = uVar40;
    auVar10[4] = SUB41(fVar44,0);
    auVar10._0_4_ = fVar79;
    auVar10[5] = uVar32;
    auVar10[6] = uVar33;
    auVar10[7] = uVar34;
    auVar10[8] = SUB41(fVar31,0);
    auVar10[9] = uVar35;
    auVar10[10] = uVar36;
    auVar10[0xb] = uVar37;
    auVar10[0xc] = SUB41(fVar20,0);
    auVar10[0xd] = uVar38;
    auVar10[0xe] = uVar39;
    auVar10[0xf] = uVar40;
    auVar59 = NEON_ext(auVar9,auVar10,8,1);
    fVar79 = auVar59._0_4_ + fVar79;
    fVar44 = auVar59._4_4_ + fVar44;
    fVar31 = fVar79 + fVar44;
    fVar79 = fVar79 + fVar44;
    uVar32 = SUB41(fVar79,0);
    uVar33 = (undefined1)((uint)fVar79 >> 8);
    uVar34 = (undefined1)((uint)fVar79 >> 0x10);
    uVar35 = (undefined1)((uint)fVar79 >> 0x18);
    if ((fVar31 != 0.0) && (fVar30 != 0.0)) {
      auVar42._8_8_ = CONCAT44(fVar41,fVar30);
      auVar42._0_8_ = CONCAT44(fVar41,fVar30);
      auVar11[4] = uVar32;
      auVar11._0_4_ = fVar31;
      auVar11[5] = uVar33;
      auVar11[6] = uVar34;
      auVar11[7] = uVar35;
      auVar11[8] = SUB41(fVar31,0);
      auVar11[9] = (char)((uint)fVar31 >> 8);
      auVar11[10] = (char)((uint)fVar31 >> 0x10);
      auVar11[0xb] = (char)((uint)fVar31 >> 0x18);
      auVar11[0xc] = uVar32;
      auVar11[0xd] = uVar33;
      auVar11[0xe] = uVar34;
      auVar11[0xf] = uVar35;
      auVar59 = NEON_frsqrte(auVar11,4);
      auVar63._0_4_ = auVar59._0_4_ * fVar31;
      auVar63._4_4_ = auVar59._4_4_ * fVar79;
      auVar63._8_4_ = auVar59._8_4_ * fVar31;
      uVar12 = (undefined2)(CONCAT15(uVar33,CONCAT14(uVar32,fVar31)) >> 0x20);
      auVar63._12_4_ = auVar59._12_4_ * (float)CONCAT13(uVar35,CONCAT12(uVar34,uVar12));
      auVar51 = NEON_frsqrts(auVar59,auVar63,4);
      auVar60._0_4_ = auVar59._0_4_ * auVar51._0_4_;
      auVar60._4_4_ = auVar59._4_4_ * auVar51._4_4_;
      auVar60._8_4_ = auVar59._8_4_ * auVar51._8_4_;
      auVar60._12_4_ = auVar59._12_4_ * auVar51._12_4_;
      auVar64._0_4_ = fVar31 * auVar60._0_4_;
      auVar64._4_4_ = fVar79 * auVar60._4_4_;
      auVar64._8_4_ = fVar31 * auVar60._8_4_;
      auVar64._12_4_ = (float)CONCAT13(uVar35,CONCAT12(uVar34,uVar12)) * auVar60._12_4_;
      iVar62 = -(uint)(fVar31 == 0.0);
      iVar66 = -(uint)(fVar79 == 0.0);
      iVar67 = -(uint)(fVar31 == 0.0);
      iVar68 = -(uint)((float)CONCAT13(uVar35,CONCAT12(uVar34,uVar12)) == 0.0);
      auVar59 = NEON_frsqrts(auVar60,auVar64,4);
      fVar46 = auVar60._0_4_ * auVar59._0_4_ * fVar46;
      fVar57 = auVar60._4_4_ * auVar59._4_4_ * fVar57;
      fVar45 = auVar60._8_4_ * auVar59._8_4_ * fVar45;
      fVar58 = auVar60._12_4_ * auVar59._12_4_ * fVar58;
      fVar79 = (float)CONCAT13((byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar62 >> 0x18),
                               CONCAT12((byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar62 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar46 >> 8) &
                                                  ~(byte)((uint)iVar62 >> 8),
                                                  SUB41(fVar46,0) & ~(byte)iVar62)));
      auVar50._0_8_ =
           CONCAT17((byte)((uint)fVar57 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                    CONCAT16((byte)((uint)fVar57 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10),
                             CONCAT15((byte)((uint)fVar57 >> 8) & ~(byte)((uint)iVar66 >> 8),
                                      CONCAT14(SUB41(fVar57,0) & ~(byte)iVar66,fVar79))));
      auVar50[8] = SUB41(fVar45,0) & ~(byte)iVar67;
      auVar50[9] = (byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar67 >> 8);
      auVar50[10] = (byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar67 >> 0x10);
      auVar50[0xb] = (byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18);
      auVar55[0xc] = SUB41(fVar58,0) & ~(byte)iVar68;
      auVar55._0_12_ = auVar50;
      auVar55[0xd] = (byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar68 >> 8);
      auVar55[0xe] = (byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10);
      auVar55[0xf] = (byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18);
      auVar59 = NEON_frsqrte(auVar42,4);
      auVar65._0_4_ = fVar30 * auVar59._0_4_;
      auVar65._4_4_ = fVar41 * auVar59._4_4_;
      auVar65._8_4_ = fVar30 * auVar59._8_4_;
      auVar65._12_4_ = fVar41 * auVar59._12_4_;
      auVar51 = NEON_frsqrts(auVar59,auVar65,4);
      auVar61._0_4_ = auVar59._0_4_ * auVar51._0_4_;
      auVar61._4_4_ = auVar59._4_4_ * auVar51._4_4_;
      auVar61._8_4_ = auVar59._8_4_ * auVar51._8_4_;
      auVar61._12_4_ = auVar59._12_4_ * auVar51._12_4_;
      iVar62 = -(uint)(fVar30 == 0.0);
      iVar66 = -(uint)(fVar41 == 0.0);
      iVar67 = -(uint)(fVar30 == 0.0);
      iVar68 = -(uint)(fVar41 == 0.0);
      auVar43._0_4_ = fVar30 * auVar61._0_4_;
      auVar43._4_4_ = fVar41 * auVar61._4_4_;
      auVar43._8_4_ = fVar30 * auVar61._8_4_;
      auVar43._12_4_ = fVar41 * auVar61._12_4_;
      auVar59 = NEON_frsqrts(auVar61,auVar43,4);
      local_50 = local_50 * auVar61._0_4_ * auVar59._0_4_;
      fVar30 = auVar61._4_4_ * auVar59._4_4_ * 0.0;
      fStack_48 = fStack_48 * auVar61._8_4_ * auVar59._8_4_;
      fStack_44 = fStack_44 * auVar61._12_4_ * auVar59._12_4_;
      fVar79 = fVar79 * (float)CONCAT13((byte)((uint)local_50 >> 0x18) &
                                        ~(byte)((uint)iVar62 >> 0x18),
                                        CONCAT12((byte)((uint)local_50 >> 0x10) &
                                                 ~(byte)((uint)iVar62 >> 0x10),
                                                 CONCAT11((byte)((uint)local_50 >> 8) &
                                                          ~(byte)((uint)iVar62 >> 8),
                                                          SUB41(local_50,0) & ~(byte)iVar62)));
      fVar30 = (float)((ulong)auVar50._0_8_ >> 0x20) *
               (float)CONCAT13((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                               CONCAT12((byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar30 >> 8) &
                                                  ~(byte)((uint)iVar66 >> 8),
                                                  SUB41(fVar30,0) & ~(byte)iVar66)));
      uVar32 = (undefined1)((uint)fVar30 >> 8);
      uVar33 = (undefined1)((uint)fVar30 >> 0x10);
      uVar34 = (undefined1)((uint)fVar30 >> 0x18);
      fVar41 = auVar50._8_4_ *
               (float)CONCAT13((byte)((uint)fStack_48 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18),
                               CONCAT12((byte)((uint)fStack_48 >> 0x10) &
                                        ~(byte)((uint)iVar67 >> 0x10),
                                        CONCAT11((byte)((uint)fStack_48 >> 8) &
                                                 ~(byte)((uint)iVar67 >> 8),
                                                 SUB41(fStack_48,0) & ~(byte)iVar67)));
      uVar35 = (undefined1)((uint)fVar41 >> 8);
      uVar36 = (undefined1)((uint)fVar41 >> 0x10);
      uVar37 = (undefined1)((uint)fVar41 >> 0x18);
      fVar44 = auVar55._12_4_ *
               (float)CONCAT13((byte)((uint)fStack_44 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18),
                               CONCAT12((byte)((uint)fStack_44 >> 0x10) &
                                        ~(byte)((uint)iVar68 >> 0x10),
                                        CONCAT11((byte)((uint)fStack_44 >> 8) &
                                                 ~(byte)((uint)iVar68 >> 8),
                                                 SUB41(fStack_44,0) & ~(byte)iVar68)));
      uVar38 = (undefined1)((uint)fVar44 >> 8);
      uVar39 = (undefined1)((uint)fVar44 >> 0x10);
      uVar40 = (undefined1)((uint)fVar44 >> 0x18);
      auVar5[4] = SUB41(fVar30,0);
      auVar5._0_4_ = fVar79;
      auVar5[5] = uVar32;
      auVar5[6] = uVar33;
      auVar5[7] = uVar34;
      auVar5[8] = SUB41(fVar41,0);
      auVar5[9] = uVar35;
      auVar5[10] = uVar36;
      auVar5[0xb] = uVar37;
      auVar5[0xc] = SUB41(fVar44,0);
      auVar5[0xd] = uVar38;
      auVar5[0xe] = uVar39;
      auVar5[0xf] = uVar40;
      auVar6[4] = SUB41(fVar30,0);
      auVar6._0_4_ = fVar79;
      auVar6[5] = uVar32;
      auVar6[6] = uVar33;
      auVar6[7] = uVar34;
      auVar6[8] = SUB41(fVar41,0);
      auVar6[9] = uVar35;
      auVar6[10] = uVar36;
      auVar6[0xb] = uVar37;
      auVar6[0xc] = SUB41(fVar44,0);
      auVar6[0xd] = uVar38;
      auVar6[0xe] = uVar39;
      auVar6[0xf] = uVar40;
      auVar59 = NEON_ext(auVar5,auVar6,8,1);
      return 0.0 < auVar59._0_4_ + fVar79 + auVar59._4_4_ + fVar30;
    }
  }
  return false;
}


