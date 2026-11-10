/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e64e90; name: FUN_00e64e90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e64e90(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  undefined1 (*pauVar1) [12];
  int *piVar2;
  uint *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  undefined *puVar46;
  undefined8 uVar47;
  ulong uVar48;
  long *plVar49;
  long lVar50;
  long *plVar51;
  byte bVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  byte bVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined8 uVar69;
  float fVar70;
  float fVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined8 uVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar48 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar48 == 0)) {
    lVar50 = 0;
  }
  else {
    puVar3 = (uint *)((long)param_4 + uVar48);
    lVar50 = (long)puVar3 + (ulong)*puVar3;
  }
  FUN_00ddb420(param_1,param_2,param_3,lVar50,0x7f00);
  puVar46 = PTR_DAT_0271fce0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[9] = (long)(puVar46 + 0x1b0);
  param_1[10] = (long)(puVar46 + 0x1f0);
  *param_1 = (long)(puVar46 + 0x10);
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  param_1[0x8d] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8e) = 0;
  *(undefined1 *)(param_1 + 0x96) = 0;
  *(undefined1 *)(param_1 + 0x9e) = 0;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  *(undefined8 *)((long)param_1 + 0x4fc) = 0;
  *(undefined8 *)((long)param_1 + 0x4f4) = 0;
  plVar49 = (long *)param_1[0x74];
  *(undefined4 *)((long)param_1 + 0x504) = 0;
  if (plVar49 != (long *)0x0) {
    lVar50 = plVar49[0xb];
    if (*(long *)(lVar50 + 0x58) == 0) {
      uVar47 = (**(code **)**(undefined8 **)(lVar50 + 0x60))();
      *(undefined8 *)(lVar50 + 0x58) = uVar47;
    }
    piVar2 = (int *)(lVar50 + 0x54);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uVar72 = (undefined4)_UNK_01d4b588;
  uVar73 = (undefined4)((ulong)_UNK_01d4b588 >> 0x20);
  pauVar1 = (undefined1 (*) [12])(plVar49 + 0x22);
  fVar68 = (float)((ulong)plVar49[0x23] >> 0x20);
  fVar66 = (float)*(undefined8 *)*pauVar1;
  fVar67 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  fVar23 = fVar66 * (float)_DAT_01d4ae80;
  fVar26 = fVar67 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
  uVar53 = SUB41(fVar26,0);
  uVar54 = (undefined1)((uint)fVar26 >> 8);
  uVar55 = (undefined1)((uint)fVar26 >> 0x10);
  uVar56 = (undefined1)((uint)fVar26 >> 0x18);
  fVar27 = (float)plVar49[0x23] * (float)_UNK_01d4ae88;
  uVar57 = SUB41(fVar27,0);
  uVar59 = (undefined1)((uint)fVar27 >> 8);
  uVar60 = (undefined1)((uint)fVar27 >> 0x10);
  uVar61 = (undefined1)((uint)fVar27 >> 0x18);
  fVar28 = fVar68 * (float)((ulong)_UNK_01d4ae88 >> 0x20);
  uVar62 = SUB41(fVar28,0);
  uVar63 = (undefined1)((uint)fVar28 >> 8);
  uVar64 = (undefined1)((uint)fVar28 >> 0x10);
  uVar65 = (undefined1)((uint)fVar28 >> 0x18);
  auVar29._8_4_ = uVar72;
  auVar29._0_8_ = _DAT_01d4b580;
  auVar29._12_4_ = uVar73;
  uVar47 = a64_TBL(ZEXT816(0),auVar29,DAT_01cd4f90);
  auVar30._8_4_ = uVar72;
  auVar30._0_8_ = _DAT_01d4b580;
  auVar30._12_4_ = uVar73;
  uVar74 = a64_TBL(ZEXT816(0),auVar30,DAT_01cd50f8);
  auVar31._8_4_ = uVar72;
  auVar31._0_8_ = _DAT_01d4b580;
  auVar31._12_4_ = uVar73;
  uVar69 = a64_TBL(ZEXT816(0),auVar31,DAT_01cd5418);
  fVar70 = (float)((ulong)uVar69 >> 0x20);
  auVar17[4] = uVar53;
  auVar17._0_4_ = fVar23;
  auVar17[5] = uVar54;
  auVar17[6] = uVar55;
  auVar17[7] = uVar56;
  auVar17[8] = uVar57;
  auVar17[9] = uVar59;
  auVar17[10] = uVar60;
  auVar17[0xb] = uVar61;
  auVar17[0xc] = uVar62;
  auVar17[0xd] = uVar63;
  auVar17[0xe] = uVar64;
  auVar17[0xf] = uVar65;
  uVar83 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd5120);
  auVar18[4] = uVar53;
  auVar18._0_4_ = fVar23;
  auVar18[5] = uVar54;
  auVar18[6] = uVar55;
  auVar18[7] = uVar56;
  auVar18[8] = uVar57;
  auVar18[9] = uVar59;
  auVar18[10] = uVar60;
  auVar18[0xb] = uVar61;
  auVar18[0xc] = uVar62;
  auVar18[0xd] = uVar63;
  auVar18[0xe] = uVar64;
  auVar18[0xf] = uVar65;
  uVar85 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd5270);
  auVar19[4] = uVar53;
  auVar19._0_4_ = fVar23;
  auVar19[5] = uVar54;
  auVar19[6] = uVar55;
  auVar19[7] = uVar56;
  auVar19[8] = uVar57;
  auVar19[9] = uVar59;
  auVar19[10] = uVar60;
  auVar19[0xb] = uVar61;
  auVar19[0xc] = uVar62;
  auVar19[0xd] = uVar63;
  auVar19[0xe] = uVar64;
  auVar19[0xf] = uVar65;
  uVar81 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd4f90);
  auVar20[4] = uVar53;
  auVar20._0_4_ = fVar23;
  auVar20[5] = uVar54;
  auVar20[6] = uVar55;
  auVar20[7] = uVar56;
  auVar20[8] = uVar57;
  auVar20[9] = uVar59;
  auVar20[10] = uVar60;
  auVar20[0xb] = uVar61;
  auVar20[0xc] = uVar62;
  auVar20[0xd] = uVar63;
  auVar20[0xe] = uVar64;
  auVar20[0xf] = uVar65;
  uVar84 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd5418);
  auVar14._12_4_ = fVar68;
  auVar14._0_12_ = *pauVar1;
  uVar32 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd50f8);
  fVar71 = (float)((ulong)uVar32 >> 0x20);
  fVar13 = (float)((ulong)uVar47 >> 0x20);
  fVar75 = (float)((ulong)DAT_01cd52f0 >> 0x20);
  fVar76 = (float)((ulong)uVar74 >> 0x20);
  auVar21[4] = uVar53;
  auVar21._0_4_ = fVar23;
  auVar21[5] = uVar54;
  auVar21[6] = uVar55;
  auVar21[7] = uVar56;
  auVar21[8] = uVar57;
  auVar21[9] = uVar59;
  auVar21[10] = uVar60;
  auVar21[0xb] = uVar61;
  auVar21[0xc] = uVar62;
  auVar21[0xd] = uVar63;
  auVar21[0xe] = uVar64;
  auVar21[0xf] = uVar65;
  uVar82 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd50f8);
  auVar22[4] = uVar53;
  auVar22._0_4_ = fVar23;
  auVar22[5] = uVar54;
  auVar22[6] = uVar55;
  auVar22[7] = uVar56;
  auVar22[8] = SUB41(fVar23,0);
  auVar22[9] = (char)((uint)fVar23 >> 8);
  auVar22[10] = (char)((uint)fVar23 >> 0x10);
  auVar22[0xb] = (char)((uint)fVar23 >> 0x18);
  auVar22[0xc] = uVar53;
  auVar22[0xd] = uVar54;
  auVar22[0xe] = uVar55;
  auVar22[0xf] = uVar56;
  uVar24 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd50b0);
  fVar77 = (float)_DAT_01d4ae90;
  fVar78 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  fVar79 = (float)_UNK_01d4ae98;
  fVar80 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  auVar15._12_4_ = fVar68;
  auVar15._0_12_ = *pauVar1;
  uVar25 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd4f90);
  fVar23 = (fVar23 * (float)uVar47 + fVar77 * (float)DAT_01cd52f0 * (float)uVar81 +
           fVar77 * (float)uVar69 * (float)uVar82) - (float)uVar74 * (float)uVar84;
  fVar26 = (fVar26 * fVar13 + fVar78 * fVar75 * (float)((ulong)uVar81 >> 0x20) +
           fVar78 * fVar70 * (float)((ulong)uVar82 >> 0x20)) -
           fVar76 * (float)((ulong)uVar84 >> 0x20);
  uVar53 = SUB41(fVar26,0);
  uVar54 = (undefined1)((uint)fVar26 >> 8);
  uVar55 = (undefined1)((uint)fVar26 >> 0x10);
  uVar56 = (undefined1)((uint)fVar26 >> 0x18);
  fVar27 = (fVar27 * (float)uVar47 + fVar79 * (float)uVar74 * (float)uVar83 +
           fVar79 * (float)DAT_01cd52f0 * (float)uVar24) - (float)uVar69 * (float)uVar85;
  uVar57 = SUB41(fVar27,0);
  uVar59 = (undefined1)((uint)fVar27 >> 8);
  uVar60 = (undefined1)((uint)fVar27 >> 0x10);
  uVar61 = (undefined1)((uint)fVar27 >> 0x18);
  fVar13 = (fVar28 * fVar13 + fVar80 * fVar76 * (float)((ulong)uVar83 >> 0x20) +
           fVar80 * fVar75 * (float)((ulong)uVar24 >> 0x20)) -
           fVar70 * (float)((ulong)uVar85 >> 0x20);
  uVar62 = SUB41(fVar13,0);
  uVar63 = (undefined1)((uint)fVar13 >> 8);
  uVar64 = (undefined1)((uint)fVar13 >> 0x10);
  uVar65 = (undefined1)((uint)fVar13 >> 0x18);
  auVar7[4] = uVar53;
  auVar7._0_4_ = fVar23;
  auVar7[5] = uVar54;
  auVar7[6] = uVar55;
  auVar7[7] = uVar56;
  auVar7[8] = uVar57;
  auVar7[9] = uVar59;
  auVar7[10] = uVar60;
  auVar7[0xb] = uVar61;
  auVar7[0xc] = uVar62;
  auVar7[0xd] = uVar63;
  auVar7[0xe] = uVar64;
  auVar7[0xf] = uVar65;
  uVar74 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd4f90);
  auVar8[4] = uVar53;
  auVar8._0_4_ = fVar23;
  auVar8[5] = uVar54;
  auVar8[6] = uVar55;
  auVar8[7] = uVar56;
  auVar8[8] = uVar57;
  auVar8[9] = uVar59;
  auVar8[10] = uVar60;
  auVar8[0xb] = uVar61;
  auVar8[0xc] = uVar62;
  auVar8[0xd] = uVar63;
  auVar8[0xe] = uVar64;
  auVar8[0xf] = uVar65;
  uVar83 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5120);
  fVar28 = (float)((ulong)uVar25 >> 0x20);
  auVar16._12_4_ = fVar68;
  auVar16._0_12_ = *pauVar1;
  uVar82 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd5418);
  fVar68 = (float)((ulong)uVar82 >> 0x20);
  auVar9[4] = uVar53;
  auVar9._0_4_ = fVar23;
  auVar9[5] = uVar54;
  auVar9[6] = uVar55;
  auVar9[7] = uVar56;
  auVar9[8] = uVar57;
  auVar9[9] = uVar59;
  auVar9[10] = uVar60;
  auVar9[0xb] = uVar61;
  auVar9[0xc] = uVar62;
  auVar9[0xd] = uVar63;
  auVar9[0xe] = uVar64;
  auVar9[0xf] = uVar65;
  uVar24 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd50f8);
  auVar10[4] = uVar53;
  auVar10._0_4_ = fVar23;
  auVar10[5] = uVar54;
  auVar10[6] = uVar55;
  auVar10[7] = uVar56;
  auVar10[8] = uVar57;
  auVar10[9] = uVar59;
  auVar10[10] = uVar60;
  auVar10[0xb] = uVar61;
  auVar10[0xc] = uVar62;
  auVar10[0xd] = uVar63;
  auVar10[0xe] = uVar64;
  auVar10[0xf] = uVar65;
  uVar69 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd5418);
  auVar11[4] = uVar53;
  auVar11._0_4_ = fVar23;
  auVar11[5] = uVar54;
  auVar11[6] = uVar55;
  auVar11[7] = uVar56;
  auVar11[8] = uVar57;
  auVar11[9] = uVar59;
  auVar11[10] = uVar60;
  auVar11[0xb] = uVar61;
  auVar11[0xc] = uVar62;
  auVar11[0xd] = uVar63;
  auVar11[0xe] = uVar64;
  auVar11[0xf] = uVar65;
  uVar81 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd5270);
  auVar12[4] = uVar53;
  auVar12._0_4_ = fVar23;
  auVar12[5] = uVar54;
  auVar12[6] = uVar55;
  auVar12[7] = uVar56;
  auVar12[8] = SUB41(fVar23,0);
  auVar12[9] = (char)((uint)fVar23 >> 8);
  auVar12[10] = (char)((uint)fVar23 >> 0x10);
  auVar12[0xb] = (char)((uint)fVar23 >> 0x18);
  auVar12[0xc] = uVar53;
  auVar12[0xd] = uVar54;
  auVar12[0xe] = uVar55;
  auVar12[0xf] = uVar56;
  uVar47 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd50b0);
  bVar58 = (byte)DAT_01d4ab58;
  uVar39 = (ulong)DAT_01d4ab58 >> 8;
  uVar40 = (ulong)DAT_01d4ab58 >> 0x10;
  uVar41 = (ulong)DAT_01d4ab58 >> 0x18;
  uVar42 = (ulong)DAT_01d4ab58 >> 0x20;
  uVar43 = (ulong)DAT_01d4ab58 >> 0x28;
  uVar44 = (ulong)DAT_01d4ab58 >> 0x30;
  uVar45 = (ulong)DAT_01d4ab58 >> 0x38;
  bVar52 = (byte)DAT_01d4ab50;
  uVar48 = (ulong)DAT_01d4ab50 >> 8;
  uVar33 = (ulong)DAT_01d4ab50 >> 0x10;
  uVar34 = (ulong)DAT_01d4ab50 >> 0x18;
  uVar35 = (ulong)DAT_01d4ab50 >> 0x20;
  uVar36 = (ulong)DAT_01d4ab50 >> 0x28;
  uVar37 = (ulong)DAT_01d4ab50 >> 0x30;
  uVar38 = (ulong)DAT_01d4ab50 >> 0x38;
  fVar23 = ((float)uVar25 * fVar23 + fVar77 * fVar66 * (float)uVar74 +
           fVar77 * (float)uVar82 * (float)uVar24) - (float)uVar32 * (float)uVar69;
  fVar26 = (fVar28 * fVar26 + fVar78 * fVar67 * (float)((ulong)uVar74 >> 0x20) +
           fVar78 * fVar68 * (float)((ulong)uVar24 >> 0x20)) -
           fVar71 * (float)((ulong)uVar69 >> 0x20);
  fVar27 = ((float)uVar25 * fVar27 + fVar79 * (float)uVar32 * (float)uVar83 +
           fVar79 * fVar66 * (float)uVar47) - (float)uVar82 * (float)uVar81;
  fVar13 = (fVar28 * fVar13 + fVar80 * fVar71 * (float)((ulong)uVar83 >> 0x20) +
           fVar80 * fVar67 * (float)((ulong)uVar47 >> 0x20)) -
           fVar68 * (float)((ulong)uVar81 >> 0x20);
  plVar49[0x27] = plVar49[0x27] & 0xffffffffffffffe0U | 5;
  plVar49[0x1b] =
       CONCAT17((byte)((uint)fVar13 >> 0x18) & (byte)uVar45,
                CONCAT16((byte)((uint)fVar13 >> 0x10) & (byte)uVar44,
                         CONCAT15((byte)((uint)fVar13 >> 8) & (byte)uVar43,
                                  CONCAT14(SUB41(fVar13,0) & (byte)uVar42,
                                           CONCAT13((byte)((uint)fVar27 >> 0x18) & (byte)uVar41,
                                                    CONCAT12((byte)((uint)fVar27 >> 0x10) &
                                                             (byte)uVar40,
                                                             CONCAT11((byte)((uint)fVar27 >> 8) &
                                                                      (byte)uVar39,
                                                                      SUB41(fVar27,0) & bVar58))))))
               );
  plVar49[0x1a] =
       CONCAT17((byte)((uint)fVar26 >> 0x18) & (byte)uVar38,
                CONCAT16((byte)((uint)fVar26 >> 0x10) & (byte)uVar37,
                         CONCAT15((byte)((uint)fVar26 >> 8) & (byte)uVar36,
                                  CONCAT14(SUB41(fVar26,0) & (byte)uVar35,
                                           CONCAT13((byte)((uint)fVar23 >> 0x18) & (byte)uVar34,
                                                    CONCAT12((byte)((uint)fVar23 >> 0x10) &
                                                             (byte)uVar33,
                                                             CONCAT11((byte)((uint)fVar23 >> 8) &
                                                                      (byte)uVar48,
                                                                      SUB41(fVar23,0) & bVar52))))))
               );
  plVar51 = plVar49 + 0x12;
  (**(code **)(*plVar51 + 0x10))(plVar51);
  (**(code **)(*plVar51 + 0x18))(plVar51);
  if (plVar49 != (long *)0x0) {
    lVar50 = plVar49[0xb];
    piVar2 = (int *)(lVar50 + 0x54);
    do {
      iVar4 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar50 + 0x60) = 0;
      (**(code **)(*plVar49 + 0x18))(plVar49);
    }
  }
  plVar49 = (long *)param_1[0x74];
  if (plVar49 == (long *)0x0) {
    _DAT_00000138 = _DAT_00000138 & 0xfffffffffffffff3 | 8;
  }
  else {
    lVar50 = plVar49[0xb];
    if (*(long *)(lVar50 + 0x58) == 0) {
      uVar47 = (**(code **)**(undefined8 **)(lVar50 + 0x60))();
      *(undefined8 *)(lVar50 + 0x58) = uVar47;
    }
    piVar2 = (int *)(lVar50 + 0x54);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar49[0x27] = plVar49[0x27] & 0xfffffffffffffff3U | 8;
    lVar50 = plVar49[0xb];
    piVar2 = (int *)(lVar50 + 0x54);
    do {
      iVar4 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar50 + 0x60) = 0;
      (**(code **)(*plVar49 + 0x18))(plVar49);
    }
  }
  param_1[0x81] = param_1[0x79];
  param_1[0x7f] = param_1[0x77];
  param_1[0x80] = param_1[0x78];
  param_1[0x7e] = param_1[0x76];
  *(int *)(param_1 + 0x82) = (int)param_1[0x7a];
  *(undefined4 *)((long)param_1 + 0x414) = *(undefined4 *)((long)param_1 + 0x3d4);
  *(int *)(param_1 + 0x83) = (int)param_1[0x7b];
  *(undefined4 *)((long)param_1 + 0x41c) = *(undefined4 *)((long)param_1 + 0x3dc);
  *(int *)(param_1 + 0x84) = (int)param_1[0x7c];
  *(undefined4 *)(param_1 + 0x8e) = 0;
  param_1[0x86] = param_1[0x76];
  param_1[0x87] = param_1[0x77];
  *(int *)(param_1 + 0x8a) = (int)param_1[0x7a];
  *(undefined4 *)((long)param_1 + 0x454) = *(undefined4 *)((long)param_1 + 0x3d4);
  *(int *)(param_1 + 0x8b) = (int)param_1[0x7b];
  *(undefined4 *)((long)param_1 + 0x45c) = *(undefined4 *)((long)param_1 + 0x3dc);
  *(int *)(param_1 + 0x8c) = (int)param_1[0x7c];
  *(undefined4 *)((long)param_1 + 0x46c) = 0;
  param_1[0x89] = param_1[0x79];
  param_1[0x88] = param_1[0x78];
  *(undefined8 *)((long)param_1 + 0x464) = 0xffffffff00000000;
  FUN_00e65730(param_1);
  (**(code **)(*param_1 + 0x180))(param_1,0);
  param_1[0xae] = 0x3f800000;
  param_1[0xb0] = 0x3f8000003f800000;
  param_1[0xa3] = 0;
  param_1[0xa2] = 0;
  *(undefined4 *)(param_1 + 0xa5) = 0xffffffff;
  param_1[0xa9] = 0;
  param_1[0xa8] = 0;
  param_1[0xa7] = 0;
  param_1[0xa6] = 0;
  param_1[0xaf] = 0;
  *(undefined1 *)(param_1 + 0xb1) = 0;
  *(undefined8 *)((long)param_1 + 0x58c) = 0;
  param_1[0xa4] = 0;
  return;
}


