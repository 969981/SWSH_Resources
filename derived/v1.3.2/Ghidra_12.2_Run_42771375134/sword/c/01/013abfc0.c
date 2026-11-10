/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013abfc0; name: FUN_013abfc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013abfc0(long param_1)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  int *piVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
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
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uVar21;
  long *plVar22;
  long *plVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  undefined1 auVar34 [12];
  float fVar40;
  float fVar41;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined4 uVar60;
  float fVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar26 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar26 == (undefined8 *)0x0)) {
    puVar27 = (undefined8 *)0x0;
  }
  else {
    plVar22 = (long *)(**(code **)*puVar26)(puVar26);
    plVar23 = (long *)FUN_0132d9a0();
    puVar27 = (undefined8 *)0x0;
    if (plVar22 != (long *)0x0) {
      do {
        if (plVar22 == plVar23) {
          puVar27 = puVar26 + -10;
          goto LAB_013ac01c;
        }
        plVar22 = (long *)*plVar22;
      } while (plVar22 != (long *)0x0);
      puVar27 = (undefined8 *)0x0;
    }
  }
LAB_013ac01c:
  lVar25 = *(long *)(param_1 + 0x98);
  pauVar1 = (undefined1 (*) [12])(param_1 + 0xa0);
  uVar60 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20);
  fVar57 = (float)*(undefined8 *)*pauVar1;
  fVar58 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  plVar22 = (long *)puVar27[0x6a];
  pauVar2 = (undefined1 (*) [12])(lVar25 + 0xa0);
  fVar44 = (float)((ulong)*(undefined8 *)(lVar25 + 0xa8) >> 0x20);
  fVar42 = (float)*(undefined8 *)*pauVar2;
  fVar43 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
  fVar28 = fVar42 * (float)_DAT_01d4ae80;
  fVar29 = fVar43 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
  uVar45 = SUB41(fVar29,0);
  uVar46 = (undefined1)((uint)fVar29 >> 8);
  uVar47 = (undefined1)((uint)fVar29 >> 0x10);
  uVar48 = (undefined1)((uint)fVar29 >> 0x18);
  fVar30 = (float)*(undefined8 *)(lVar25 + 0xa8) * (float)_UNK_01d4ae88;
  uVar49 = SUB41(fVar30,0);
  uVar50 = (undefined1)((uint)fVar30 >> 8);
  uVar51 = (undefined1)((uint)fVar30 >> 0x10);
  uVar52 = (undefined1)((uint)fVar30 >> 0x18);
  fVar31 = fVar44 * (float)((ulong)_UNK_01d4ae88 >> 0x20);
  uVar53 = SUB41(fVar31,0);
  uVar54 = (undefined1)((uint)fVar31 >> 8);
  uVar55 = (undefined1)((uint)fVar31 >> 0x10);
  uVar56 = (undefined1)((uint)fVar31 >> 0x18);
  auVar18._12_4_ = uVar60;
  auVar18._0_12_ = *pauVar1;
  uVar33 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd4f90);
  auVar19._12_4_ = uVar60;
  auVar19._0_12_ = *pauVar1;
  uVar63 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd5418);
  auVar20._12_4_ = uVar60;
  auVar20._0_12_ = *pauVar1;
  uVar62 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd50f8);
  auVar11[4] = uVar45;
  auVar11._0_4_ = fVar28;
  auVar11[5] = uVar46;
  auVar11[6] = uVar47;
  auVar11[7] = uVar48;
  auVar11[8] = uVar49;
  auVar11[9] = uVar50;
  auVar11[10] = uVar51;
  auVar11[0xb] = uVar52;
  auVar11[0xc] = uVar53;
  auVar11[0xd] = uVar54;
  auVar11[0xe] = uVar55;
  auVar11[0xf] = uVar56;
  uVar71 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd5120);
  auVar12[4] = uVar45;
  auVar12._0_4_ = fVar28;
  auVar12[5] = uVar46;
  auVar12[6] = uVar47;
  auVar12[7] = uVar48;
  auVar12[8] = uVar49;
  auVar12[9] = uVar50;
  auVar12[10] = uVar51;
  auVar12[0xb] = uVar52;
  auVar12[0xc] = uVar53;
  auVar12[0xd] = uVar54;
  auVar12[0xe] = uVar55;
  auVar12[0xf] = uVar56;
  uVar69 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd4f90);
  auVar13[4] = uVar45;
  auVar13._0_4_ = fVar28;
  auVar13[5] = uVar46;
  auVar13[6] = uVar47;
  auVar13[7] = uVar48;
  auVar13[8] = uVar49;
  auVar13[9] = uVar50;
  auVar13[10] = uVar51;
  auVar13[0xb] = uVar52;
  auVar13[0xc] = uVar53;
  auVar13[0xd] = uVar54;
  auVar13[0xe] = uVar55;
  auVar13[0xf] = uVar56;
  uVar72 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd5418);
  fVar61 = (float)((ulong)uVar62 >> 0x20);
  auVar14[4] = uVar45;
  auVar14._0_4_ = fVar28;
  auVar14[5] = uVar46;
  auVar14[6] = uVar47;
  auVar14[7] = uVar48;
  auVar14[8] = uVar49;
  auVar14[9] = uVar50;
  auVar14[10] = uVar51;
  auVar14[0xb] = uVar52;
  auVar14[0xc] = uVar53;
  auVar14[0xd] = uVar54;
  auVar14[0xe] = uVar55;
  auVar14[0xf] = uVar56;
  uVar73 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd5270);
  fVar40 = (float)((ulong)uVar33 >> 0x20);
  auVar15[4] = uVar45;
  auVar15._0_4_ = fVar28;
  auVar15[5] = uVar46;
  auVar15[6] = uVar47;
  auVar15[7] = uVar48;
  auVar15[8] = uVar49;
  auVar15[9] = uVar50;
  auVar15[10] = uVar51;
  auVar15[0xb] = uVar52;
  auVar15[0xc] = uVar53;
  auVar15[0xd] = uVar54;
  auVar15[0xe] = uVar55;
  auVar15[0xf] = uVar56;
  uVar70 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd50f8);
  auVar16[4] = uVar45;
  auVar16._0_4_ = fVar28;
  auVar16[5] = uVar46;
  auVar16[6] = uVar47;
  auVar16[7] = uVar48;
  auVar16[8] = SUB41(fVar28,0);
  auVar16[9] = (char)((uint)fVar28 >> 8);
  auVar16[10] = (char)((uint)fVar28 >> 0x10);
  auVar16[0xb] = (char)((uint)fVar28 >> 0x18);
  auVar16[0xc] = uVar45;
  auVar16[0xd] = uVar46;
  auVar16[0xe] = uVar47;
  auVar16[0xf] = uVar48;
  uVar24 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd50b0);
  fVar65 = (float)((ulong)uVar63 >> 0x20);
  fVar64 = (float)_DAT_01d4ae90;
  fVar66 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  fVar67 = (float)_UNK_01d4ae98;
  fVar68 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  auVar39._12_4_ = fVar44;
  auVar39._0_12_ = *pauVar2;
  uVar21 = a64_TBL(ZEXT816(0),auVar39,DAT_01cd50f8);
  fVar59 = (float)((ulong)uVar21 >> 0x20);
  auVar9._12_4_ = fVar44;
  auVar9._0_12_ = *pauVar2;
  uVar17 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd4f90);
  fVar32 = (fVar28 * (float)uVar33 + fVar64 * fVar57 * (float)uVar69 +
           fVar64 * (float)uVar63 * (float)uVar70) - (float)uVar62 * (float)uVar72;
  fVar41 = (fVar29 * fVar40 + fVar66 * fVar58 * (float)((ulong)uVar69 >> 0x20) +
           fVar66 * fVar65 * (float)((ulong)uVar70 >> 0x20)) -
           fVar61 * (float)((ulong)uVar72 >> 0x20);
  auVar35._0_8_ = CONCAT44(fVar41,fVar32);
  auVar35._8_4_ =
       (fVar30 * (float)uVar33 + fVar67 * (float)uVar62 * (float)uVar71 +
       fVar67 * fVar57 * (float)uVar24) - (float)uVar63 * (float)uVar73;
  auVar35._12_4_ =
       (fVar31 * fVar40 + fVar68 * fVar61 * (float)((ulong)uVar71 >> 0x20) +
       fVar68 * fVar58 * (float)((ulong)uVar24 >> 0x20)) - fVar65 * (float)((ulong)uVar73 >> 0x20);
  uVar63 = a64_TBL(ZEXT816(0),auVar35,DAT_01cd4f90);
  uVar71 = a64_TBL(ZEXT816(0),auVar35,DAT_01cd5120);
  fVar28 = (float)((ulong)uVar17 >> 0x20);
  auVar10._12_4_ = fVar44;
  auVar10._0_12_ = *pauVar2;
  uVar70 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd5418);
  fVar40 = (float)((ulong)uVar70 >> 0x20);
  uVar24 = a64_TBL(ZEXT816(0),auVar35,DAT_01cd50f8);
  uVar62 = a64_TBL(ZEXT816(0),auVar35,DAT_01cd5418);
  uVar69 = a64_TBL(ZEXT816(0),auVar35,DAT_01cd5270);
  auVar36._8_8_ = auVar35._0_8_;
  auVar36._0_8_ = auVar35._0_8_;
  uVar33 = a64_TBL(ZEXT816(0),auVar36,DAT_01cd50b0);
  fVar29 = ((float)uVar17 * fVar32 + fVar64 * fVar42 * (float)uVar63 +
           fVar64 * (float)uVar70 * (float)uVar24) - (float)uVar21 * (float)uVar62;
  fVar30 = (fVar28 * fVar41 + fVar66 * fVar43 * (float)((ulong)uVar63 >> 0x20) +
           fVar66 * fVar40 * (float)((ulong)uVar24 >> 0x20)) -
           fVar59 * (float)((ulong)uVar62 >> 0x20);
  fVar31 = ((float)uVar17 * auVar35._8_4_ + fVar67 * (float)uVar21 * (float)uVar71 +
           fVar67 * fVar42 * (float)uVar33) - (float)uVar70 * (float)uVar69;
  fVar28 = (fVar28 * auVar35._12_4_ + fVar68 * fVar59 * (float)((ulong)uVar71 >> 0x20) +
           fVar68 * fVar43 * (float)((ulong)uVar33 >> 0x20)) -
           fVar40 * (float)((ulong)uVar69 >> 0x20);
  fVar29 = (float)CONCAT13((byte)((uint)fVar29 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18),
                           CONCAT12((byte)((uint)fVar29 >> 0x10) &
                                    (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                    CONCAT11((byte)((uint)fVar29 >> 8) &
                                             (byte)((ulong)DAT_01d4ab50 >> 8),
                                             SUB41(fVar29,0) & (byte)DAT_01d4ab50)));
  auVar34._0_8_ =
       CONCAT17((byte)((uint)fVar30 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                CONCAT16((byte)((uint)fVar30 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x30),
                         CONCAT15((byte)((uint)fVar30 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                  CONCAT14(SUB41(fVar30,0) & (byte)((ulong)DAT_01d4ab50 >> 0x20),
                                           fVar29))));
  auVar34[8] = SUB41(fVar31,0) & (byte)DAT_01d4ab58;
  auVar34[9] = (byte)((uint)fVar31 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 8);
  auVar34[10] = (byte)((uint)fVar31 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x10);
  auVar34[0xb] = (byte)((uint)fVar31 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18);
  auVar37[0xc] = SUB41(fVar28,0) & (byte)((ulong)DAT_01d4ab58 >> 0x20);
  auVar37._0_12_ = auVar34;
  auVar37[0xd] = (byte)((uint)fVar28 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 0x28);
  auVar37[0xe] = (byte)((uint)fVar28 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x30);
  auVar37[0xf] = (byte)((uint)fVar28 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38);
  auVar38._0_8_ =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar25 + 0xb0) >> 0x20) +
                (float)((ulong)auVar34._0_8_ >> 0x20),(float)*(undefined8 *)(lVar25 + 0xb0) + fVar29
               );
  auVar38._8_4_ = (float)*(undefined8 *)(lVar25 + 0xb8) + auVar34._8_4_;
  auVar38._12_4_ = (float)((ulong)*(undefined8 *)(lVar25 + 0xb8) >> 0x20) + auVar37._12_4_;
  if (plVar22 != (long *)0x0) {
    lVar25 = plVar22[0xb];
    if (*(long *)(lVar25 + 0x58) == 0) {
      uVar24 = (**(code **)**(undefined8 **)(lVar25 + 0x60))();
      auVar38._8_8_ = auVar38._8_8_;
      *(undefined8 *)(lVar25 + 0x58) = uVar24;
    }
    piVar3 = (int *)(lVar25 + 0x54);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = *piVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  fVar28 = auVar38._0_4_ - (float)plVar22[0x16];
  fVar29 = auVar38._4_4_ - (float)((ulong)plVar22[0x16] >> 0x20);
  fVar30 = auVar38._8_4_ - (float)plVar22[0x17];
  fVar31 = auVar38._12_4_ - (float)((ulong)plVar22[0x17] >> 0x20);
  fVar28 = fVar28 * fVar28;
  fVar29 = fVar29 * fVar29;
  fVar30 = fVar30 * fVar30;
  fVar31 = fVar31 * fVar31;
  auVar7._4_4_ = fVar29;
  auVar7._0_4_ = fVar28;
  auVar7._8_4_ = fVar30;
  auVar7._12_4_ = fVar31;
  auVar8._4_4_ = fVar29;
  auVar8._0_4_ = fVar28;
  auVar8._8_4_ = fVar30;
  auVar8._12_4_ = fVar31;
  auVar39 = NEON_ext(auVar7,auVar8,8,1);
  if (plVar22 != (long *)0x0) {
    lVar25 = plVar22[0xb];
    piVar3 = (int *)(lVar25 + 0x54);
    do {
      iVar4 = *piVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x60) = 0;
      (**(code **)(*plVar22 + 0x18))(plVar22);
    }
  }
  fVar30 = *(float *)(param_1 + 0x630) * 0.5;
  if (1.0 < fVar30) {
    fVar30 = 1.0;
  }
  fVar30 = (float)(**(code **)PTR_PTR_02718e90)(fVar30);
  fVar30 = fVar30 * DAT_01d4c598;
  *(float *)(param_1 + 0x40c) = SQRT(auVar39._0_4_ + fVar28 + auVar39._4_4_ + fVar29);
  *(float *)(param_1 + 0x408) = fVar30 + 20.0;
  lVar25 = puVar27[0x68];
  if (lVar25 == 0) {
    FUN_01052cc0(0,param_1 + 0x370);
  }
  else {
    plVar22 = (long *)(lVar25 + 0x48);
    (**(code **)(*plVar22 + 0x10))(plVar22);
    FUN_01052cc0(lVar25,param_1 + 0x370);
    (**(code **)(*plVar22 + 0x18))(plVar22);
  }
  *(float *)(param_1 + 0x630) = *(float *)(param_1 + 0x630) + DAT_01d4bfc8;
  return;
}


