/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e8b200; name: FUN_00e8b200
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e8b200(long param_1)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
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
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  undefined8 uVar30;
  long lVar31;
  long *plVar32;
  int iVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined8 uVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  long local_40;
  long local_38;
  
  plVar32 = *(long **)(param_1 + 0x70);
  (**(code **)(*plVar32 + 0x10))(&local_40,plVar32);
  local_38 = local_40;
  local_40 = 0;
  uVar28 = FUN_00e7cb20(&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  if ((uVar28 & 1) == 0) {
    fVar35 = *(float *)PTR_DAT_0271ecc8;
    fVar34 = *(float *)(param_1 + 0x78);
    if (*(float *)(param_1 + 0x78) < fVar35) {
      *(float *)(param_1 + 0x78) = fVar35;
      fVar34 = fVar35;
    }
    fVar9 = *(float *)PTR_DAT_0271ecc0;
    if (fVar9 < fVar34) {
      *(float *)(param_1 + 0x78) = fVar9;
      fVar34 = fVar9;
    }
    if (0 < *(int *)(param_1 + 0x80)) {
      fVar34 = fVar35;
    }
    (**(code **)(*plVar32 + 0x180))(fVar34,plVar32,PTR_DAT_0271e870);
    iVar33 = *(int *)(param_1 + 0x7c);
    if (*(int *)(param_1 + 0x80) * 2 <= iVar33) goto LAB_00e8b330;
  }
  else {
    (**(code **)(*plVar32 + 0x180))(plVar32,PTR_DAT_0271e870);
    iVar33 = *(int *)(param_1 + 0x7c);
    if (*(int *)(param_1 + 0x80) * 2 <= iVar33) goto LAB_00e8b330;
  }
  iVar3 = iVar33;
  if (iVar33 < 0) {
    iVar3 = iVar33 + 1;
  }
  *(int *)(param_1 + 0x80) = iVar3 >> 1;
LAB_00e8b330:
  if (iVar33 < 1) {
    *(undefined4 *)(param_1 + 0x7c) = 1;
    fVar34 = *(float *)(param_1 + 0x84);
    *(undefined4 *)(param_1 + 0xb0) = 1;
  }
  else {
    fVar34 = *(float *)(param_1 + 0x84);
    *(int *)(param_1 + 0xb0) = iVar33;
  }
  if (fVar34 <= 0.0) {
    lVar31 = *(long *)(param_1 + 0x90);
    if ((lVar31 != 0) && (*(int *)(lVar31 + 0x54) != 0)) {
      piVar2 = (int *)(lVar31 + 0x54);
      iVar33 = *(int *)(lVar31 + 0x54);
      do {
        while( true ) {
          plVar32 = *(long **)(lVar31 + 0x58);
          lVar29 = FUN_00c781c0();
          while( true ) {
            if (plVar32 == (long *)0x0) goto LAB_00e8b5a4;
            if (plVar32 == (long *)lVar29) break;
            plVar32 = (long *)*plVar32;
          }
          iVar3 = *piVar2;
          if (iVar3 != iVar33) break;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar33 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar31 = *(long *)(lVar31 + 0x60);
            if (lVar31 != 0) {
              uVar30 = 1;
              goto LAB_00e8b58c;
            }
            goto LAB_00e8b5a4;
          }
          iVar33 = iVar3;
          if (iVar3 == 0) goto LAB_00e8b5a4;
        }
        ClearExclusiveLocal();
        iVar33 = iVar3;
      } while (iVar3 != 0);
    }
LAB_00e8b5a4:
    uVar30 = 1;
  }
  else {
    uVar55 = (undefined4)_UNK_01d49dc8;
    uVar56 = (undefined4)((ulong)_UNK_01d49dc8 >> 0x20);
    plVar1 = plVar32 + 0x14;
    lVar31 = plVar32[0x15];
    uVar37 = (undefined1)((ulong)lVar31 >> 8);
    uVar38 = (undefined1)((ulong)lVar31 >> 0x10);
    uVar39 = (undefined1)((ulong)lVar31 >> 0x18);
    uVar40 = (undefined1)((ulong)lVar31 >> 0x20);
    uVar41 = (undefined1)((ulong)lVar31 >> 0x28);
    uVar42 = (undefined1)((ulong)lVar31 >> 0x30);
    uVar43 = (undefined1)((ulong)lVar31 >> 0x38);
    auVar16._8_4_ = uVar55;
    auVar16._0_8_ = _DAT_01d49dc0;
    auVar16._12_4_ = uVar56;
    uVar45 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd4f90);
    fVar60 = (float)((ulong)uVar45 >> 0x20);
    fVar35 = (float)*plVar1;
    fVar46 = fVar35 * (float)_DAT_01d4ae80;
    fVar9 = (float)((ulong)*plVar1 >> 0x20);
    fVar48 = fVar9 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
    fVar50 = (float)lVar31 * (float)_UNK_01d4ae88;
    fVar52 = (float)((ulong)lVar31 >> 0x20) * (float)((ulong)_UNK_01d4ae88 >> 0x20);
    auVar10._4_4_ = fVar48;
    auVar10._0_4_ = fVar46;
    auVar10._8_4_ = fVar50;
    auVar10._12_4_ = fVar52;
    uVar63 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd4f90);
    auVar17._8_4_ = uVar55;
    auVar17._0_8_ = _DAT_01d49dc0;
    auVar17._12_4_ = uVar56;
    uVar62 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd50f8);
    auVar18._8_4_ = uVar55;
    auVar18._0_8_ = _DAT_01d49dc0;
    auVar18._12_4_ = uVar56;
    uVar36 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd5418);
    fVar54 = (float)((ulong)uVar36 >> 0x20);
    auVar11._4_4_ = fVar48;
    auVar11._0_4_ = fVar46;
    auVar11._8_4_ = fVar50;
    auVar11._12_4_ = fVar52;
    uVar64 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd5120);
    auVar12._4_4_ = fVar48;
    auVar12._0_4_ = fVar46;
    auVar12._8_4_ = fVar50;
    auVar12._12_4_ = fVar52;
    uVar66 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd50f8);
    auVar13._4_4_ = fVar48;
    auVar13._0_4_ = fVar46;
    auVar13._8_4_ = fVar50;
    auVar13._12_4_ = fVar52;
    uVar65 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd5270);
    auVar14._4_4_ = fVar48;
    auVar14._0_4_ = fVar46;
    auVar14._8_4_ = fVar50;
    auVar14._12_4_ = fVar52;
    uVar44 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd5418);
    auVar15._4_4_ = fVar48;
    auVar15._0_4_ = fVar46;
    auVar15._8_4_ = fVar46;
    auVar15._12_4_ = fVar48;
    uVar30 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd50b0);
    fVar58 = (float)((ulong)uVar62 >> 0x20);
    fVar51 = (float)_UNK_01d4ae98;
    fVar53 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    fVar47 = (float)_DAT_01d4ae90;
    fVar49 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    auVar6[9] = uVar37;
    auVar6._0_9_ = *(unkbyte9 *)plVar1;
    auVar6[10] = uVar38;
    auVar6[0xb] = uVar39;
    auVar6[0xc] = uVar40;
    auVar6[0xd] = uVar41;
    auVar6[0xe] = uVar42;
    auVar6[0xf] = uVar43;
    uVar57 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5418);
    fVar59 = (fVar46 * (float)uVar45 + fVar47 * (float)uVar63 * 0.0 +
             fVar47 * (float)uVar36 * (float)uVar66) - (float)uVar62 * (float)uVar44;
    fVar48 = (fVar48 * fVar60 + fVar49 * (float)((ulong)uVar63 >> 0x20) * 0.0 +
             fVar49 * fVar54 * (float)((ulong)uVar66 >> 0x20)) -
             fVar58 * (float)((ulong)uVar44 >> 0x20);
    fVar61 = (fVar50 * (float)uVar45 + fVar51 * (float)uVar62 * (float)uVar64 +
             fVar51 * (float)uVar30 * 0.0) - (float)uVar36 * (float)uVar65;
    fVar52 = (fVar52 * fVar60 + fVar53 * fVar58 * (float)((ulong)uVar64 >> 0x20) +
             fVar53 * (float)((ulong)uVar30 >> 0x20) * 0.0) -
             fVar54 * (float)((ulong)uVar65 >> 0x20);
    auVar7[9] = uVar37;
    auVar7._0_9_ = *(unkbyte9 *)plVar1;
    auVar7[10] = uVar38;
    auVar7[0xb] = uVar39;
    auVar7[0xc] = uVar40;
    auVar7[0xd] = uVar41;
    auVar7[0xe] = uVar42;
    auVar7[0xf] = uVar43;
    uVar65 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd50f8);
    auVar20._4_4_ = fVar48;
    auVar20._0_4_ = fVar59;
    auVar20._8_4_ = fVar61;
    auVar20._12_4_ = fVar52;
    uVar45 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd5120);
    auVar21._4_4_ = fVar48;
    auVar21._0_4_ = fVar59;
    auVar21._8_4_ = fVar61;
    auVar21._12_4_ = fVar52;
    uVar44 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd50f8);
    auVar22._4_4_ = fVar48;
    auVar22._0_4_ = fVar59;
    auVar22._8_4_ = fVar61;
    auVar22._12_4_ = fVar52;
    uVar64 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd5418);
    auVar8[9] = uVar37;
    auVar8._0_9_ = *(unkbyte9 *)plVar1;
    auVar8[10] = uVar38;
    auVar8[0xb] = uVar39;
    auVar8[0xc] = uVar40;
    auVar8[0xd] = uVar41;
    auVar8[0xe] = uVar42;
    auVar8[0xf] = uVar43;
    uVar30 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd4f90);
    auVar23._4_4_ = fVar48;
    auVar23._0_4_ = fVar59;
    auVar23._8_4_ = fVar61;
    auVar23._12_4_ = fVar52;
    uVar36 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd4f90);
    auVar19._4_4_ = fVar48;
    auVar19._0_4_ = fVar59;
    auVar19._8_4_ = fVar59;
    auVar19._12_4_ = fVar48;
    uVar62 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd50b0);
    fVar46 = (float)((ulong)uVar30 >> 0x20);
    fVar54 = (float)((ulong)uVar65 >> 0x20);
    auVar24._4_4_ = fVar48;
    auVar24._0_4_ = fVar59;
    auVar24._8_4_ = fVar61;
    auVar24._12_4_ = fVar52;
    uVar63 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd5270);
    fVar50 = (float)((ulong)uVar57 >> 0x20);
    fVar47 = ((float)uVar30 * fVar59 + fVar47 * fVar35 * (float)uVar36 +
             fVar47 * (float)uVar57 * (float)uVar44) - (float)uVar65 * (float)uVar64;
    fVar48 = (fVar46 * fVar48 + fVar49 * fVar9 * (float)((ulong)uVar36 >> 0x20) +
             fVar49 * fVar50 * (float)((ulong)uVar44 >> 0x20)) -
             fVar54 * (float)((ulong)uVar64 >> 0x20);
    fVar35 = ((float)uVar30 * fVar61 + fVar51 * (float)uVar65 * (float)uVar45 +
             fVar51 * fVar35 * (float)uVar62) - (float)uVar57 * (float)uVar63;
    fVar9 = (fVar46 * fVar52 + fVar53 * fVar54 * (float)((ulong)uVar45 >> 0x20) +
            fVar53 * fVar9 * (float)((ulong)uVar62 >> 0x20)) -
            fVar50 * (float)((ulong)uVar63 >> 0x20);
    fVar46 = (float)CONCAT13((byte)((uint)fVar47 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18),
                             CONCAT12((byte)((uint)fVar47 >> 0x10) &
                                      (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                      CONCAT11((byte)((uint)fVar47 >> 8) &
                                               (byte)((ulong)DAT_01d4ab50 >> 8),
                                               SUB41(fVar47,0) & (byte)DAT_01d4ab50)));
    uVar28 = (ulong)DAT_01d4ab50 >> 0x20;
    uVar25 = (ulong)DAT_01d4ab50 >> 0x28;
    uVar26 = (ulong)DAT_01d4ab50 >> 0x30;
    uVar27 = (ulong)DAT_01d4ab50 >> 0x38;
    fVar35 = (float)CONCAT13((byte)((uint)fVar35 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18),
                             CONCAT12((byte)((uint)fVar35 >> 0x10) &
                                      (byte)((ulong)DAT_01d4ab58 >> 0x10),
                                      CONCAT11((byte)((uint)fVar35 >> 8) &
                                               (byte)((ulong)DAT_01d4ab58 >> 8),
                                               SUB41(fVar35,0) & (byte)DAT_01d4ab58)));
    *(ulong *)(param_1 + 0xa8) =
         CONCAT44((float)(CONCAT17((byte)((uint)fVar9 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38)
                                   ,CONCAT16((byte)((uint)fVar9 >> 0x10) &
                                             (byte)((ulong)DAT_01d4ab58 >> 0x30),
                                             CONCAT15((byte)((uint)fVar9 >> 8) &
                                                      (byte)((ulong)DAT_01d4ab58 >> 0x28),
                                                      CONCAT14(SUB41(fVar9,0) &
                                                               (byte)((ulong)DAT_01d4ab58 >> 0x20),
                                                               fVar35)))) >> 0x20) * fVar34,
                  fVar35 * fVar34);
    *(ulong *)(param_1 + 0xa0) =
         CONCAT44((float)(CONCAT17((byte)((uint)fVar48 >> 0x18) & (byte)uVar27,
                                   CONCAT16((byte)((uint)fVar48 >> 0x10) & (byte)uVar26,
                                            CONCAT15((byte)((uint)fVar48 >> 8) & (byte)uVar25,
                                                     CONCAT14(SUB41(fVar48,0) & (byte)uVar28,fVar46)
                                                    ))) >> 0x20) * fVar34,fVar46 * fVar34);
    lVar31 = *(long *)(param_1 + 0x90);
    if ((lVar31 != 0) && (*(int *)(lVar31 + 0x54) != 0)) {
      piVar2 = (int *)(lVar31 + 0x54);
      iVar33 = *(int *)(lVar31 + 0x54);
      do {
        while( true ) {
          plVar32 = *(long **)(lVar31 + 0x58);
          lVar29 = FUN_00c781c0();
          while( true ) {
            if (plVar32 == (long *)0x0) goto LAB_00e8b570;
            if (plVar32 == (long *)lVar29) break;
            plVar32 = (long *)*plVar32;
          }
          iVar3 = *piVar2;
          if (iVar3 != iVar33) break;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar33 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar31 = *(long *)(lVar31 + 0x60);
            if (lVar31 != 0) {
              uVar30 = 0;
LAB_00e8b58c:
              FUN_0069c580(lVar31 + -0x50,uVar30);
              (**(code **)(*(long *)(lVar31 + -8) + 0x18))((long *)(lVar31 + -8));
              return;
            }
            goto LAB_00e8b570;
          }
          iVar33 = iVar3;
          if (iVar3 == 0) goto LAB_00e8b570;
        }
        ClearExclusiveLocal();
        iVar33 = iVar3;
      } while (iVar3 != 0);
    }
LAB_00e8b570:
    uVar30 = 0;
  }
  FUN_0069c580(0,uVar30);
  return;
}


