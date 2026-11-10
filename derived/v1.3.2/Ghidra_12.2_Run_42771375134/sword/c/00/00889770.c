/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00889770; name: FUN_00889770
 */


void FUN_00889770(undefined8 param_1,long param_2,undefined8 *param_3,uint *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined2 uVar4;
  short sVar5;
  short sVar6;
  undefined2 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  undefined1 uVar17;
  ushort uVar18;
  undefined8 uVar19;
  code *pcVar20;
  undefined8 *puVar21;
  char *pcVar22;
  uint uVar23;
  char *pcVar24;
  undefined1 auStack_120 [192];
  
  *(ulong *)(param_2 + 0x20) = (ulong)*param_4;
  *(undefined2 *)(param_2 + 0x2e) = 1;
  puVar21 = param_3 + 1;
  iVar8 = FUN_008783b0(*puVar21);
  puVar2 = param_3;
  if (iVar8 != 0x84) {
    puVar2 = puVar21;
  }
  uVar19 = *puVar2;
  uVar9 = FUN_008783b0(uVar19);
  uVar10 = FUN_008783c0(uVar19);
  FUN_0087f4c0(auStack_120);
  FUN_0087f540(auStack_120,uVar9,uVar10);
  uVar9 = FUN_0087f680(auStack_120,0x31);
  FUN_0087f510(auStack_120);
  *(undefined4 *)(param_2 + 0x28) = uVar9;
  pcVar20 = *(code **)(param_4 + 6);
  iVar8 = FUN_008783b0(*puVar21);
  puVar2 = param_3;
  if (iVar8 != 0x84) {
    puVar2 = puVar21;
  }
  uVar16 = FUN_008783b0(*puVar2);
  if ((uint)uVar16 < 0x23 && (1L << (uVar16 & 0x3f) & 0x720000000U) != 0) {
    iVar8 = (*pcVar20)(2);
    uVar9 = 0x20;
    if (iVar8 != 0) {
      uVar9 = 0x1d;
    }
    *(undefined4 *)(param_2 + 0x28) = uVar9;
  }
  pcVar20 = *(code **)(param_4 + 6);
  iVar8 = FUN_008783b0(param_3[1]);
  puVar2 = param_3;
  if (iVar8 != 0x84) {
    puVar2 = param_3 + 1;
  }
  iVar8 = FUN_008783b0(*puVar2);
  if (iVar8 - 0x139U < 2) {
    iVar8 = (*pcVar20)(2);
    uVar9 = 0x139;
    if (iVar8 != 0) {
      uVar9 = 0x13a;
    }
    *(undefined4 *)(param_2 + 0x28) = uVar9;
  }
  iVar8 = FUN_008783b0(param_3[1]);
  puVar2 = param_3;
  if (iVar8 != 0x84) {
    puVar2 = param_3 + 1;
  }
  iVar8 = FUN_008783b0(*puVar2);
  if (iVar8 == 0x1ea) {
    *(undefined4 *)(param_2 + 0x28) = 0x1e9;
  }
  iVar8 = FUN_008783b0(param_3[1]);
  puVar2 = param_3;
  if (iVar8 != 0x84) {
    puVar2 = param_3 + 1;
  }
  uVar19 = *puVar2;
  uVar9 = FUN_008783b0(uVar19);
  uVar10 = FUN_008783c0(uVar19);
  FUN_0087f4c0(auStack_120);
  FUN_0087f540(auStack_120,uVar9,uVar10);
  uVar4 = FUN_0087f680(auStack_120,0x32);
  *(undefined2 *)(param_2 + 0x2c) = uVar4;
  FUN_0087f510(auStack_120);
  FUN_00889ff0(param_2,param_3);
  FUN_0088a1c0(param_2,param_3,param_4);
  FUN_0088a270(param_2,param_3,*(undefined8 *)(param_4 + 6));
  FUN_0088a320(param_2,param_3);
  pcVar20 = *(code **)(param_4 + 6);
  FUN_008649f0(*(undefined4 *)(param_2 + 0x28),*(undefined2 *)(param_2 + 0x2c));
  uVar11 = FUN_00864a10(0x14);
  if (uVar11 == 0) {
    uVar18 = 0;
  }
  else if (uVar11 == 0xff) {
    uVar18 = 2;
  }
  else if (uVar11 == 0xfe) {
    uVar18 = 1;
  }
  else {
    iVar8 = (*pcVar20)(0xfc);
    uVar18 = (ushort)(iVar8 + 1U < uVar11);
  }
  *(ushort *)(param_2 + 0x30) = uVar18;
  uVar4 = (**(code **)(param_4 + 6))(0x19);
  *(undefined2 *)(param_2 + 0x32) = uVar4;
  pcVar20 = *(code **)(param_4 + 6);
  sVar5 = FUN_008787f0(*param_3);
  sVar6 = FUN_008787f0(param_3[1]);
  uVar4 = FUN_0087cd00(*param_3);
  uVar7 = FUN_0087cd00(param_3[1]);
  if ((sVar5 == 0xe5) && (sVar6 == 0xe5)) {
    iVar8 = (*pcVar20)(2);
    if (iVar8 != 0) {
      uVar4 = uVar7;
    }
LAB_00889a58:
    *(undefined2 *)(param_2 + 0x32) = uVar4;
  }
  else if ((sVar5 == 0xe5) || (uVar4 = uVar7, sVar6 == 0xe5)) goto LAB_00889a58;
  uVar11 = (**(code **)(param_4 + 6))(100);
  iVar8 = FUN_008783b0(param_3[1]);
  puVar2 = param_3;
  if (iVar8 != 0x84) {
    puVar2 = param_3 + 1;
  }
  cVar3 = FUN_0087ce00(*puVar2);
  if (cVar3 == '\x02') {
    if (uVar11 < 0x14) goto LAB_00889acc;
    if (uVar11 < 0x28) goto LAB_00889adc;
    uVar17 = 2;
LAB_00889ae0:
    *(undefined1 *)(param_2 + 0x34) = uVar17;
  }
  else {
    if (cVar3 == '\x01') {
      if (0x13 < uVar11) goto LAB_00889adc;
    }
    else if (cVar3 == '\0') {
      if (0x4f < uVar11) {
LAB_00889adc:
        uVar17 = 1;
        goto LAB_00889ae0;
      }
    }
    else if (0x31 < uVar11) goto LAB_00889adc;
LAB_00889acc:
    *(undefined1 *)(param_2 + 0x34) = 0;
  }
  FUN_008649f0(*(undefined4 *)(param_2 + 0x28),*(undefined2 *)(param_2 + 0x2c));
  uVar9 = FUN_00864a10(0x15);
  *(undefined4 *)(param_2 + 0x44) = uVar9;
  sVar5 = FUN_008787f0(*param_3);
  sVar6 = FUN_008787f0(param_3[1]);
  uVar9 = 5;
  if (sVar6 != 0x118 && sVar5 != 0x118) {
    uVar9 = 3;
  }
  *(undefined4 *)(param_2 + 0x78) = uVar9;
  FUN_0088a520(param_2,param_3,*(undefined8 *)(param_4 + 6));
  pcVar20 = *(code **)(param_4 + 6);
  if (*(uint *)(param_2 + 0x74) < *(uint *)(param_2 + 0x78)) {
    do {
      while( true ) {
        uVar16 = (*pcVar20)(6);
        lVar1 = param_2 + (uVar16 & 0xffffffff);
        pcVar24 = (char *)(lVar1 + 0x68);
        if ((*pcVar24 == '\0') && (pcVar22 = (char *)(lVar1 + 0x6e), *pcVar22 == '\0')) break;
        if (*(uint *)(param_2 + 0x78) <= *(uint *)(param_2 + 0x74)) goto LAB_00889bb4;
      }
      iVar8 = (*pcVar20)(2);
      if (iVar8 != 0) {
        pcVar24 = pcVar22;
      }
      *pcVar24 = '\x01';
      *(int *)(param_2 + 0x74) = *(int *)(param_2 + 0x74) + 1;
    } while (*(uint *)(param_2 + 0x74) < *(uint *)(param_2 + 0x78));
LAB_00889bb4:
    pcVar20 = *(code **)(param_4 + 6);
  }
  uVar4 = (*pcVar20)(0x20);
  *(undefined2 *)(param_2 + 0x36) = uVar4;
  uVar4 = (*pcVar20)(0x20);
  *(undefined2 *)(param_2 + 0x38) = uVar4;
  uVar4 = (*pcVar20)(0x20);
  *(undefined2 *)(param_2 + 0x3a) = uVar4;
  uVar4 = (*pcVar20)(0x20);
  *(undefined2 *)(param_2 + 0x3c) = uVar4;
  uVar4 = (*pcVar20)(0x20);
  *(undefined2 *)(param_2 + 0x3e) = uVar4;
  uVar4 = (*pcVar20)(0x20);
  *(undefined2 *)(param_2 + 0x40) = uVar4;
  FUN_0088a630(param_2,param_3);
  uVar16 = (**(code **)(param_4 + 6))(0xffffffff);
  *(ulong *)(param_2 + 0x10) = uVar16 & 0xffffffff;
  uVar23 = param_4[4];
  pcVar20 = *(code **)(param_4 + 6);
  iVar8 = FUN_00878a50(*param_3);
  iVar12 = FUN_00878a50(param_3[1]);
  uVar11 = 0;
  if (iVar8 != iVar12) {
    uVar11 = 6;
  }
  if ((char)uVar23 != '\0') {
    uVar11 = uVar11 + 2;
  }
  if (uVar11 != 0) {
    uVar23 = 1;
    do {
      uVar13 = (*pcVar20)(0xffffffff);
      *(ulong *)(param_2 + 0x18) = (ulong)uVar13;
      uVar16 = FUN_00877350(*(undefined4 *)(param_2 + 0x20),uVar13);
      if (uVar11 <= uVar23) break;
      uVar23 = uVar23 + 1;
    } while ((uVar16 & 1) == 0);
  }
  FUN_0088a760(param_2);
  FUN_0088a830(param_2,param_3);
  FUN_00880350(auStack_120);
  FUN_008803b0(auStack_120,*(undefined4 *)(param_2 + 0x28),*(undefined2 *)(param_2 + 0x2c));
  FUN_0088a970(param_2,*param_3,auStack_120);
  FUN_0088a970(param_2,param_3[1],auStack_120);
  FUN_00880390(auStack_120);
  if ((*(int *)(param_2 + 0x28) == 0xac) &&
     ((sVar5 = FUN_008787f0(*param_3), sVar5 == 0xec ||
      (sVar5 = FUN_008787f0(param_3[1]), sVar5 == 0xec)))) {
    uVar11 = *(uint *)(param_2 + 0x50);
    if (uVar11 != 0) {
      uVar16 = 0;
      do {
        if (*(int *)(param_2 + uVar16 * 4 + 0x54) == 0x158) goto LAB_00889d74;
        uVar23 = (int)uVar16 + 1;
        uVar16 = (ulong)uVar23;
      } while (uVar23 < uVar11);
      if (3 < uVar11) {
        *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x58);
        *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_2 + 0x5c);
        *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_2 + 0x60);
        *(undefined4 *)(param_2 + 0x60) = 0x158;
        goto LAB_00889d74;
      }
    }
    *(undefined4 *)(param_2 + (ulong)uVar11 * 4 + 0x54) = 0x158;
    *(uint *)(param_2 + 0x50) = uVar11 + 1;
  }
LAB_00889d74:
  pcVar20 = *(code **)(param_4 + 6);
  iVar12 = FUN_008783b0(param_3[1]);
  iVar14 = FUN_008783b0(*param_3);
  iVar15 = FUN_00878e20(param_3[1],8);
  iVar8 = FUN_00878e20(*param_3,8);
  if (iVar12 == 0x84) {
    *(int *)(param_2 + 100) = iVar8;
  }
  else if (iVar12 == iVar14) {
    iVar12 = (*pcVar20)(100);
    if (iVar12 + 1U < 0x33) {
      iVar8 = iVar15;
    }
    *(int *)(param_2 + 100) = iVar8;
  }
  else {
    *(int *)(param_2 + 100) = iVar15;
    iVar8 = iVar15;
  }
  if ((iVar8 == 0x10) || (iVar8 == 1)) {
    *(undefined4 *)(param_2 + 100) = 4;
  }
  return;
}


