/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de5840; name: FUN_00de5840
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00de5840(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  undefined1 (*pauVar1) [12];
  uint *puVar2;
  int *piVar3;
  long lVar4;
  ushort uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  undefined *puVar33;
  size_t sVar34;
  char *pcVar35;
  ulong uVar36;
  long lVar37;
  ushort *puVar38;
  ulong uVar39;
  long *plVar40;
  int *piVar41;
  ushort *puVar42;
  byte *pbVar43;
  byte *pbVar44;
  ulong uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined1 uVar48;
  byte bVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined4 uVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  uint uVar66;
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
  undefined8 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  ulong local_80;
  byte *pbStack_78;
  size_t local_70;
  long local_68;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar36 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar36 == 0)) {
    lVar37 = 0;
  }
  else {
    puVar2 = (uint *)((long)param_4 + uVar36);
    lVar37 = (long)puVar2 + (ulong)*puVar2;
  }
  FUN_00dbc9a0(param_1,param_2,param_3,lVar37);
  puVar33 = PTR_DAT_0271eca8;
  param_1[0x98] = 0;
  *param_1 = (long)(puVar33 + 0x10);
  param_1[9] = (long)(puVar33 + 0x250);
  param_1[10] = (long)(puVar33 + 0x290);
  lVar37 = 0;
  if (6 < *(ushort *)((long)param_4 - (long)*param_4)) {
    uVar36 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[3];
    lVar37 = 0;
    if (uVar36 != 0) {
      lVar37 = *(long *)((long)param_4 + uVar36);
    }
  }
  param_1[0x99] = lVar37;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x17) {
    piVar41 = (int *)0x0;
  }
  else {
    uVar36 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0xb];
    piVar41 = (int *)0x0;
    if (uVar36 != 0) {
      puVar2 = (uint *)((long)param_4 + uVar36);
      piVar41 = (int *)((long)puVar2 + (ulong)*puVar2);
    }
  }
  if ((*(ushort *)((long)piVar41 - (long)*piVar41) < 5) ||
     (uVar36 = (ulong)((ushort *)((long)piVar41 - (long)*piVar41))[2], uVar36 == 0)) {
    uVar61 = 0;
  }
  else {
    uVar61 = *(undefined4 *)((long)piVar41 + uVar36);
  }
  *(undefined4 *)(param_1 + 0x9a) = uVar61;
  puVar38 = (ushort *)((long)param_4 - (long)*param_4);
  uVar5 = *puVar38;
  if (uVar5 < 0x17) {
    piVar41 = (int *)0x0;
  }
  else {
    piVar41 = (int *)0x0;
    if ((ulong)puVar38[0xb] != 0) {
      puVar2 = (uint *)((long)param_4 + (ulong)puVar38[0xb]);
      piVar41 = (int *)((long)puVar2 + (ulong)*puVar2);
    }
  }
  uVar48 = 0;
  uVar50 = 0;
  uVar51 = 0;
  uVar52 = 0;
  if ((0x14 < *(ushort *)((long)piVar41 - (long)*piVar41)) &&
     (uVar36 = (ulong)((ushort *)((long)piVar41 - (long)*piVar41))[10], uVar36 != 0)) {
    uVar61 = *(undefined4 *)((long)piVar41 + uVar36);
    uVar48 = (undefined1)uVar61;
    uVar50 = (undefined1)((uint)uVar61 >> 8);
    uVar51 = (undefined1)((uint)uVar61 >> 0x10);
    uVar52 = (undefined1)((uint)uVar61 >> 0x18);
  }
  if (uVar5 < 0x17) {
    piVar41 = (int *)0x0;
  }
  else {
    piVar41 = (int *)0x0;
    if ((ulong)puVar38[0xb] != 0) {
      puVar2 = (uint *)((long)param_4 + (ulong)puVar38[0xb]);
      piVar41 = (int *)((long)puVar2 + (ulong)*puVar2);
    }
  }
  uVar61 = 0;
  if ((0x16 < *(ushort *)((long)piVar41 - (long)*piVar41)) &&
     (uVar36 = (ulong)((ushort *)((long)piVar41 - (long)*piVar41))[0xb], uVar36 != 0)) {
    uVar61 = *(undefined4 *)((long)piVar41 + uVar36);
  }
  if (uVar5 < 0x17) {
    piVar41 = (int *)0x0;
  }
  else {
    piVar41 = (int *)0x0;
    if ((ulong)puVar38[0xb] != 0) {
      puVar2 = (uint *)((long)param_4 + (ulong)puVar38[0xb]);
      piVar41 = (int *)((long)puVar2 + (ulong)*puVar2);
    }
  }
  uVar66 = 0;
  if ((0x18 < *(ushort *)((long)piVar41 - (long)*piVar41)) &&
     (uVar36 = (ulong)((ushort *)((long)piVar41 - (long)*piVar41))[0xc], uVar36 != 0)) {
    uVar66 = *(uint *)((long)piVar41 + uVar36);
  }
  param_1[0x9f] = (ulong)uVar66;
  param_1[0x9e] = CONCAT44(uVar61,CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar48))));
  puVar38 = (ushort *)((long)param_4 - (long)*param_4);
  uVar5 = *puVar38;
  if (uVar5 < 5) {
    piVar41 = (int *)0x0;
  }
  else {
    piVar41 = (int *)0x0;
    if ((ulong)puVar38[2] != 0) {
      puVar2 = (uint *)((long)param_4 + (ulong)puVar38[2]);
      piVar41 = (int *)((long)puVar2 + (ulong)*puVar2);
    }
  }
  fVar62 = 0.0;
  if ((10 < *(ushort *)((long)piVar41 - (long)*piVar41)) &&
     (uVar36 = (ulong)((ushort *)((long)piVar41 - (long)*piVar41))[5], uVar36 != 0)) {
    fVar62 = *(float *)((long)piVar41 + uVar36);
  }
  if (uVar5 < 0x17) {
    piVar41 = (int *)0x0;
  }
  else {
    piVar41 = (int *)0x0;
    if ((ulong)puVar38[0xb] != 0) {
      puVar2 = (uint *)((long)param_4 + (ulong)puVar38[0xb]);
      piVar41 = (int *)((long)puVar2 + (ulong)*puVar2);
    }
  }
  fVar67 = 0.0;
  if ((0xe < *(ushort *)((long)piVar41 - (long)*piVar41)) &&
     (uVar36 = (ulong)((ushort *)((long)piVar41 - (long)*piVar41))[7], uVar36 != 0)) {
    fVar67 = *(float *)((long)piVar41 + uVar36);
  }
  if (uVar5 < 5) {
    piVar41 = (int *)0x0;
  }
  else {
    piVar41 = (int *)0x0;
    if ((ulong)puVar38[2] != 0) {
      puVar2 = (uint *)((long)param_4 + (ulong)puVar38[2]);
      piVar41 = (int *)((long)puVar2 + (ulong)*puVar2);
    }
  }
  uVar48 = 0;
  uVar50 = 0;
  uVar51 = 0;
  uVar52 = 0;
  fVar68 = 0.0;
  if (0xc < *(ushort *)((long)piVar41 - (long)*piVar41)) {
    uVar36 = (ulong)((ushort *)((long)piVar41 - (long)*piVar41))[6];
    fVar68 = 0.0;
    if (uVar36 != 0) {
      fVar68 = *(float *)((long)piVar41 + uVar36);
    }
  }
  piVar41 = (int *)((long)((long)param_4 + (ulong)puVar38[0xb]) +
                   (ulong)*(uint *)((long)param_4 + (ulong)puVar38[0xb]));
  puVar42 = (ushort *)((long)piVar41 - (long)*piVar41);
  fVar69 = 0.0;
  if (0x10 < *puVar42) {
    fVar69 = 0.0;
    if ((ulong)puVar42[8] != 0) {
      fVar69 = *(float *)((long)piVar41 + (ulong)puVar42[8]);
    }
  }
  piVar3 = (int *)((long)((long)param_4 + (ulong)puVar38[2]) +
                  (ulong)*(uint *)((long)param_4 + (ulong)puVar38[2]));
  fVar70 = 0.0;
  if (0xe < *(ushort *)((long)piVar3 - (long)*piVar3)) {
    uVar36 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[7];
    fVar70 = 0.0;
    if (uVar36 != 0) {
      fVar70 = *(float *)((long)piVar3 + uVar36);
    }
  }
  fVar67 = ((fVar62 + fVar67) * DAT_01d4bb38) / DAT_01d4c284;
  fVar77 = 0.0;
  fVar62 = ((fVar68 + fVar69) * DAT_01d4bb38) / DAT_01d4c284;
  if (0xe < *puVar42) {
    fVar77 = 0.0;
    if ((ulong)puVar42[7] != 0) {
      fVar77 = *(float *)((long)piVar41 + (ulong)puVar42[7]);
    }
  }
  param_1[0xa1] = (ulong)(uint)(((fVar70 + fVar77) * DAT_01d4bb38) / DAT_01d4c284);
  param_1[0xa0] = CONCAT44(fVar62,fVar67);
  puVar2 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (0x16 - (long)*param_4)));
  piVar41 = (int *)((long)puVar2 + (ulong)*puVar2);
  if ((0xc < *(ushort *)((long)piVar41 - (long)*piVar41)) &&
     (uVar36 = (ulong)((ushort *)((long)piVar41 - (long)*piVar41))[6], uVar36 != 0)) {
    uVar61 = *(undefined4 *)((long)piVar41 + uVar36);
    uVar48 = (undefined1)uVar61;
    uVar50 = (undefined1)((uint)uVar61 >> 8);
    uVar51 = (undefined1)((uint)uVar61 >> 0x10);
    uVar52 = (undefined1)((uint)uVar61 >> 0x18);
  }
  *(uint *)(param_1 + 0xa2) = CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar48)));
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0xf) {
    uVar61 = 0;
  }
  else {
    uVar36 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[7];
    uVar61 = 0;
    if (uVar36 != 0) {
      uVar61 = *(undefined4 *)((long)param_4 + uVar36);
    }
  }
  uVar36 = 0xcbf29ce484222645;
  *(undefined4 *)((long)param_1 + 0x514) = uVar61;
  *(undefined4 *)(param_1 + 0xa3) = 0;
  *(undefined1 *)((long)param_1 + 0x51c) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0xa5] = -0x340d631b7bddd9bb;
  param_1[0xa6] = (long)&DAT_01d38550;
  param_1[0xa8] = 0;
  param_1[0xa7] = 0;
  lVar37 = -(long)*param_4;
  puVar38 = (ushort *)((long)param_4 - (long)*param_4);
  if (((8 < *puVar38) && (uVar39 = (ulong)puVar38[4], uVar39 != 0)) &&
     (puVar2 = (uint *)((long)param_4 + uVar39), lVar4 = (long)puVar2 + (ulong)*puVar2, lVar4 != 0))
  {
    pcVar35 = (char *)(lVar4 + 4);
    sVar34 = strlen(pcVar35);
    if (1 < sVar34) {
      FUN_0010d170(&local_80,pcVar35);
      uVar39 = local_80;
      if (local_80 != 0) {
        (**(code **)(*(long *)(local_80 + 0x48) + 0x10))();
      }
      lVar37 = param_1[0x98];
      param_1[0x98] = uVar39;
      if (lVar37 != 0) {
        (**(code **)(*(long *)(lVar37 + 0x48) + 0x18))();
      }
      if (local_80 != 0) {
        (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
        local_80 = 0;
      }
      lVar37 = -(long)*param_4;
    }
  }
  puVar2 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + lVar37 + 0x16));
  piVar41 = (int *)((long)puVar2 + (ulong)*puVar2);
  puVar38 = (ushort *)((long)piVar41 - (long)*piVar41);
  uVar5 = *puVar38;
  if (uVar5 < 7) {
    fVar62 = 0.0;
LAB_00de5db0:
    uVar52 = 0;
    uVar51 = 0;
    uVar50 = 0;
    uVar48 = 0;
    uVar61 = 0;
  }
  else {
    fVar62 = 0.0;
    if ((ulong)puVar38[3] != 0) {
      fVar62 = *(float *)((long)piVar41 + (ulong)puVar38[3]);
    }
    if (uVar5 < 9) goto LAB_00de5db0;
    uVar61 = 0;
    uVar48 = 0;
    uVar50 = 0;
    uVar51 = 0;
    uVar52 = 0;
    if ((ulong)puVar38[4] != 0) {
      uVar12 = *(undefined4 *)((long)piVar41 + (ulong)puVar38[4]);
      uVar48 = (undefined1)uVar12;
      uVar50 = (undefined1)((uint)uVar12 >> 8);
      uVar51 = (undefined1)((uint)uVar12 >> 0x10);
      uVar52 = (undefined1)((uint)uVar12 >> 0x18);
    }
    if ((10 < uVar5) && ((ulong)puVar38[5] != 0)) {
      uVar61 = *(undefined4 *)((long)piVar41 + (ulong)puVar38[5]);
    }
  }
  fVar67 = (float)CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar48)));
  pauVar1 = (undefined1 (*) [12])(param_1 + 0x14);
  fVar65 = (float)((ulong)param_1[0x15] >> 0x20);
  fVar63 = (float)*(long *)*pauVar1;
  fVar64 = (float)((ulong)*(long *)*pauVar1 >> 0x20);
  fVar69 = fVar63 * (float)_DAT_01d4ae80;
  fVar70 = fVar64 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
  fVar73 = (float)param_1[0x15] * (float)_UNK_01d4ae88;
  fVar75 = fVar65 * (float)((ulong)_UNK_01d4ae88 >> 0x20);
  auVar17._4_4_ = fVar70;
  auVar17._0_4_ = fVar69;
  auVar17._8_4_ = fVar73;
  auVar17._12_4_ = fVar75;
  uVar81 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd5120);
  auVar24._4_4_ = fVar67;
  auVar24._0_4_ = fVar62;
  auVar24._8_4_ = uVar61;
  auVar24._12_4_ = 0;
  uVar79 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd50f8);
  auVar18._4_4_ = fVar70;
  auVar18._0_4_ = fVar69;
  auVar18._8_4_ = fVar73;
  auVar18._12_4_ = fVar75;
  uVar80 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd4f90);
  auVar25._4_4_ = fVar67;
  auVar25._0_4_ = fVar62;
  auVar25._8_4_ = uVar61;
  auVar25._12_4_ = 0;
  uVar13 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd4f90);
  fVar77 = (float)((ulong)uVar79 >> 0x20);
  fVar68 = (float)((ulong)uVar13 >> 0x20);
  auVar26._4_4_ = fVar67;
  auVar26._0_4_ = fVar62;
  auVar26._8_4_ = uVar61;
  auVar26._12_4_ = 0;
  uVar27 = a64_TBL(ZEXT816(0),auVar26,DAT_01cd5418);
  fVar78 = (float)((ulong)uVar27 >> 0x20);
  auVar19._4_4_ = fVar70;
  auVar19._0_4_ = fVar69;
  auVar19._8_4_ = fVar73;
  auVar19._12_4_ = fVar75;
  uVar46 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd50f8);
  auVar20._4_4_ = fVar70;
  auVar20._0_4_ = fVar69;
  auVar20._8_4_ = fVar73;
  auVar20._12_4_ = fVar75;
  uVar82 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd5418);
  auVar21._4_4_ = fVar70;
  auVar21._0_4_ = fVar69;
  auVar21._8_4_ = fVar73;
  auVar21._12_4_ = fVar75;
  uVar83 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd5270);
  auVar22._4_4_ = fVar70;
  auVar22._0_4_ = fVar69;
  auVar22._8_4_ = fVar69;
  auVar22._12_4_ = fVar70;
  uVar23 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd50b0);
  fVar74 = (float)_UNK_01d4ae98;
  fVar76 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  fVar71 = (float)_DAT_01d4ae90;
  fVar72 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  auVar14._12_4_ = fVar65;
  auVar14._0_12_ = *pauVar1;
  uVar47 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd4f90);
  fVar69 = (fVar69 * (float)uVar13 + fVar71 * fVar62 * (float)uVar80 +
           fVar71 * (float)uVar27 * (float)uVar46) - (float)uVar79 * (float)uVar82;
  fVar70 = (fVar70 * fVar68 + fVar72 * fVar67 * (float)((ulong)uVar80 >> 0x20) +
           fVar72 * fVar78 * (float)((ulong)uVar46 >> 0x20)) -
           fVar77 * (float)((ulong)uVar82 >> 0x20);
  uVar48 = SUB41(fVar70,0);
  uVar50 = (undefined1)((uint)fVar70 >> 8);
  uVar51 = (undefined1)((uint)fVar70 >> 0x10);
  uVar52 = (undefined1)((uint)fVar70 >> 0x18);
  fVar62 = (fVar73 * (float)uVar13 + fVar74 * (float)uVar79 * (float)uVar81 +
           fVar74 * fVar62 * (float)uVar23) - (float)uVar27 * (float)uVar83;
  uVar53 = SUB41(fVar62,0);
  uVar54 = (undefined1)((uint)fVar62 >> 8);
  uVar55 = (undefined1)((uint)fVar62 >> 0x10);
  uVar56 = (undefined1)((uint)fVar62 >> 0x18);
  fVar67 = (fVar75 * fVar68 + fVar76 * fVar77 * (float)((ulong)uVar81 >> 0x20) +
           fVar76 * fVar67 * (float)((ulong)uVar23 >> 0x20)) -
           fVar78 * (float)((ulong)uVar83 >> 0x20);
  uVar57 = SUB41(fVar67,0);
  uVar58 = (undefined1)((uint)fVar67 >> 8);
  uVar59 = (undefined1)((uint)fVar67 >> 0x10);
  uVar60 = (undefined1)((uint)fVar67 >> 0x18);
  auVar15._12_4_ = fVar65;
  auVar15._0_12_ = *pauVar1;
  uVar27 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd50f8);
  fVar73 = (float)((ulong)uVar27 >> 0x20);
  auVar6[4] = uVar48;
  auVar6._0_4_ = fVar69;
  auVar6[5] = uVar50;
  auVar6[6] = uVar51;
  auVar6[7] = uVar52;
  auVar6[8] = uVar53;
  auVar6[9] = uVar54;
  auVar6[10] = uVar55;
  auVar6[0xb] = uVar56;
  auVar6[0xc] = uVar57;
  auVar6[0xd] = uVar58;
  auVar6[0xe] = uVar59;
  auVar6[0xf] = uVar60;
  uVar82 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5120);
  auVar7[4] = uVar48;
  auVar7._0_4_ = fVar69;
  auVar7[5] = uVar50;
  auVar7[6] = uVar51;
  auVar7[7] = uVar52;
  auVar7[8] = uVar53;
  auVar7[9] = uVar54;
  auVar7[10] = uVar55;
  auVar7[0xb] = uVar56;
  auVar7[0xc] = uVar57;
  auVar7[0xd] = uVar58;
  auVar7[0xe] = uVar59;
  auVar7[0xf] = uVar60;
  uVar79 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd4f90);
  fVar77 = (float)((ulong)uVar47 >> 0x20);
  auVar16._12_4_ = fVar65;
  auVar16._0_12_ = *pauVar1;
  uVar81 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd5418);
  fVar65 = (float)((ulong)uVar81 >> 0x20);
  auVar8[4] = uVar48;
  auVar8._0_4_ = fVar69;
  auVar8[5] = uVar50;
  auVar8[6] = uVar51;
  auVar8[7] = uVar52;
  auVar8[8] = uVar53;
  auVar8[9] = uVar54;
  auVar8[10] = uVar55;
  auVar8[0xb] = uVar56;
  auVar8[0xc] = uVar57;
  auVar8[0xd] = uVar58;
  auVar8[0xe] = uVar59;
  auVar8[0xf] = uVar60;
  uVar23 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd50f8);
  auVar9[4] = uVar48;
  auVar9._0_4_ = fVar69;
  auVar9[5] = uVar50;
  auVar9[6] = uVar51;
  auVar9[7] = uVar52;
  auVar9[8] = uVar53;
  auVar9[9] = uVar54;
  auVar9[10] = uVar55;
  auVar9[0xb] = uVar56;
  auVar9[0xc] = uVar57;
  auVar9[0xd] = uVar58;
  auVar9[0xe] = uVar59;
  auVar9[0xf] = uVar60;
  uVar46 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd5418);
  auVar10[4] = uVar48;
  auVar10._0_4_ = fVar69;
  auVar10[5] = uVar50;
  auVar10[6] = uVar51;
  auVar10[7] = uVar52;
  auVar10[8] = uVar53;
  auVar10[9] = uVar54;
  auVar10[10] = uVar55;
  auVar10[0xb] = uVar56;
  auVar10[0xc] = uVar57;
  auVar10[0xd] = uVar58;
  auVar10[0xe] = uVar59;
  auVar10[0xf] = uVar60;
  uVar80 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd5270);
  auVar11[4] = uVar48;
  auVar11._0_4_ = fVar69;
  auVar11[5] = uVar50;
  auVar11[6] = uVar51;
  auVar11[7] = uVar52;
  auVar11[8] = SUB41(fVar69,0);
  auVar11[9] = (char)((uint)fVar69 >> 8);
  auVar11[10] = (char)((uint)fVar69 >> 0x10);
  auVar11[0xb] = (char)((uint)fVar69 >> 0x18);
  auVar11[0xc] = uVar48;
  auVar11[0xd] = uVar50;
  auVar11[0xe] = uVar51;
  auVar11[0xf] = uVar52;
  uVar13 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd50b0);
  bVar49 = (byte)DAT_01d4ab50;
  uVar39 = (ulong)DAT_01d4ab50 >> 8;
  uVar45 = (ulong)DAT_01d4ab50 >> 0x10;
  uVar28 = (ulong)DAT_01d4ab50 >> 0x18;
  uVar29 = (ulong)DAT_01d4ab50 >> 0x20;
  uVar30 = (ulong)DAT_01d4ab50 >> 0x28;
  uVar31 = (ulong)DAT_01d4ab50 >> 0x30;
  uVar32 = (ulong)DAT_01d4ab50 >> 0x38;
  fVar68 = ((float)uVar47 * fVar69 + fVar71 * fVar63 * (float)uVar79 +
           fVar71 * (float)uVar81 * (float)uVar23) - (float)uVar27 * (float)uVar46;
  fVar69 = (fVar77 * fVar70 + fVar72 * fVar64 * (float)((ulong)uVar79 >> 0x20) +
           fVar72 * fVar65 * (float)((ulong)uVar23 >> 0x20)) -
           fVar73 * (float)((ulong)uVar46 >> 0x20);
  fVar62 = ((float)uVar47 * fVar62 + fVar74 * (float)uVar27 * (float)uVar82 +
           fVar74 * fVar63 * (float)uVar13) - (float)uVar81 * (float)uVar80;
  fVar67 = (fVar77 * fVar67 + fVar76 * fVar73 * (float)((ulong)uVar82 >> 0x20) +
           fVar76 * fVar64 * (float)((ulong)uVar13 >> 0x20)) -
           fVar65 * (float)((ulong)uVar80 >> 0x20);
  param_1[0x9d] =
       CONCAT17((byte)((uint)fVar67 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38),
                CONCAT16((byte)((uint)fVar67 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x30),
                         CONCAT15((byte)((uint)fVar67 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 0x28),
                                  CONCAT14(SUB41(fVar67,0) & (byte)((ulong)DAT_01d4ab58 >> 0x20),
                                           CONCAT13((byte)((uint)fVar62 >> 0x18) &
                                                    (byte)((ulong)DAT_01d4ab58 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar62 >> 0x10) &
                                                             (byte)((ulong)DAT_01d4ab58 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar62 >> 8) &
                                                                      (byte)((ulong)DAT_01d4ab58 >>
                                                                            8),SUB41(fVar62,0) &
                                                                               (byte)DAT_01d4ab58)))
                                          ))));
  param_1[0x9c] =
       CONCAT17((byte)((uint)fVar69 >> 0x18) & (byte)uVar32,
                CONCAT16((byte)((uint)fVar69 >> 0x10) & (byte)uVar31,
                         CONCAT15((byte)((uint)fVar69 >> 8) & (byte)uVar30,
                                  CONCAT14(SUB41(fVar69,0) & (byte)uVar29,
                                           CONCAT13((byte)((uint)fVar68 >> 0x18) & (byte)uVar28,
                                                    CONCAT12((byte)((uint)fVar68 >> 0x10) &
                                                             (byte)uVar45,
                                                             CONCAT11((byte)((uint)fVar68 >> 8) &
                                                                      (byte)uVar39,
                                                                      SUB41(fVar68,0) & bVar49))))))
               );
  puVar38 = (ushort *)((long)param_4 - (long)*param_4);
  if (10 < *puVar38) {
    uVar39 = (ulong)puVar38[5];
    lVar37 = -(long)*param_4;
    if (uVar39 != 0) {
      uVar45 = (ulong)*(uint *)((long)param_4 + uVar39);
      lVar4 = (long)((long)param_4 + uVar39) + uVar45;
      if (lVar4 != 0) {
        pbVar44 = (byte *)(lVar4 + 4);
        sVar34 = strlen((char *)pbVar44);
        if (1 < sVar34) {
          local_70 = strlen((char *)pbVar44);
          bVar49 = *(byte *)(lVar4 + 4);
          local_80 = 0xcbf29ce484222645;
          if (bVar49 != 0) {
            local_80 = 0xcbf29ce484222645;
            pbVar43 = (byte *)((long)param_4 + uVar45 + uVar39 + 5);
            do {
              local_80 = (local_80 ^ bVar49) * 0x100000001b3;
              bVar49 = *pbVar43;
              pbVar43 = pbVar43 + 1;
            } while (bVar49 != 0);
          }
          local_68 = 0;
          param_1[0x80] = local_70;
          lVar37 = param_1[0x81];
          param_1[0x7e] = local_80;
          param_1[0x7f] = (long)pbVar44;
          param_1[0x81] = 0;
          pbStack_78 = pbVar44;
          if (lVar37 != 0) {
            (**(code **)(*(long *)(lVar37 + 0x48) + 0x18))();
          }
          FUN_00dd8640(param_1,&local_80,0);
          if (local_68 != 0) {
            (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
            local_68 = 0;
          }
          lVar37 = -(long)*param_4;
          puVar38 = (ushort *)((long)param_4 - (long)*param_4);
        }
      }
    }
    if ((0xc < *puVar38) && (uVar39 = (ulong)*(ushort *)((long)param_4 + lVar37 + 0xc), uVar39 != 0)
       ) {
      uVar45 = (ulong)*(uint *)((long)param_4 + uVar39);
      lVar37 = (long)((long)param_4 + uVar39) + uVar45;
      if (lVar37 != 0) {
        pbVar44 = (byte *)(lVar37 + 4);
        sVar34 = strlen((char *)pbVar44);
        if (1 < sVar34) {
          pcVar35 = strstr((char *)pbVar44,".gfbanmcfg");
          if (pcVar35 == (char *)0x0) {
            pcVar35 = strstr((char *)pbVar44,".gfbanm");
            if (pcVar35 == (char *)0x0) goto LAB_00de60fc;
            local_70 = strlen((char *)pbVar44);
            bVar49 = *pbVar44;
            local_80 = 0xcbf29ce484222645;
            if (bVar49 != 0) {
              local_80 = 0xcbf29ce484222645;
              pbVar43 = (byte *)((long)param_4 + uVar45 + uVar39 + 5);
              do {
                local_80 = (local_80 ^ bVar49) * 0x100000001b3;
                bVar49 = *pbVar43;
                pbVar43 = pbVar43 + 1;
              } while (bVar49 != 0);
            }
            local_68 = 0;
            pbStack_78 = pbVar44;
            FUN_00dda040(param_1,&local_80,0);
          }
          else {
            local_70 = strlen((char *)pbVar44);
            bVar49 = *pbVar44;
            local_80 = 0xcbf29ce484222645;
            if (bVar49 != 0) {
              local_80 = 0xcbf29ce484222645;
              pbVar43 = (byte *)((long)param_4 + uVar45 + uVar39 + 5);
              do {
                local_80 = (local_80 ^ bVar49) * 0x100000001b3;
                bVar49 = *pbVar43;
                pbVar43 = pbVar43 + 1;
              } while (bVar49 != 0);
            }
            local_68 = 0;
            pbStack_78 = pbVar44;
            FUN_00dd9600(param_1,&local_80,0);
          }
          if (local_68 != 0) {
            (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
            local_68 = 0;
          }
        }
      }
    }
  }
LAB_00de60fc:
  if ((0x18 < *(ushort *)((long)param_4 - (long)*param_4)) &&
     (uVar39 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0xc], uVar39 != 0)) {
    uVar45 = (ulong)*(uint *)((long)param_4 + uVar39);
    lVar37 = (long)((long)param_4 + uVar39) + uVar45;
    if (lVar37 != 0) {
      pcVar35 = (char *)(lVar37 + 4);
      sVar34 = strlen(pcVar35);
      if (1 < sVar34) {
        sVar34 = strlen(pcVar35);
        bVar49 = *(byte *)(lVar37 + 4);
        if (bVar49 != 0) {
          pbVar44 = (byte *)((long)param_4 + uVar45 + uVar39 + 5);
          do {
            uVar36 = (uVar36 ^ bVar49) * 0x100000001b3;
            bVar49 = *pbVar44;
            pbVar44 = pbVar44 + 1;
          } while (bVar49 != 0);
        }
        param_1[0xa5] = uVar36;
        param_1[0xa6] = (long)pcVar35;
        param_1[0xa7] = sVar34;
        if (param_1[0xa8] != 0) {
          plVar40 = (long *)(param_1[0xa8] + 0x48);
          (**(code **)(*plVar40 + 0x18))(plVar40);
          param_1[0xa8] = 0;
        }
        param_1[0xa8] = 0;
      }
    }
  }
  return;
}


