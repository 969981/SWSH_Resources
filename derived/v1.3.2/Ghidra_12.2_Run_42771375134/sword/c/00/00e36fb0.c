/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e36fb0; name: FUN_00e36fb0
 */


void FUN_00e36fb0(long *param_1,long param_2,undefined8 param_3,int *param_4)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  ushort uVar4;
  undefined *puVar5;
  bool bVar6;
  size_t sVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ushort *puVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  long *plVar16;
  ulong uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 0xd) ||
     (uVar9 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[6], uVar9 == 0)) {
    lVar11 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_4 + uVar9);
    lVar11 = (long)puVar1 + (ulong)*puVar1;
  }
  uVar9 = 0xcbf29ce484222645;
  FUN_00db5850(param_1,param_2,param_3,lVar11);
  puVar5 = PTR_DAT_0271f750;
  param_1[0x74] = -0x340d631b7bddd9bb;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[9] = (long)(puVar5 + 0x198);
  param_1[10] = (long)(puVar5 + 0x1d8);
  if (*(ushort *)((long)param_4 - (long)*param_4) < 7) {
    lVar11 = 0;
  }
  else {
    uVar10 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[3];
    lVar11 = 0;
    if (uVar10 != 0) {
      lVar11 = *(long *)((long)param_4 + uVar10);
    }
  }
  param_1[0x75] = lVar11;
  *(undefined4 *)(param_1 + 0x76) = 0;
  param_1[0x77] = 0;
  param_1[0x78] = -0x340d631b7bddd9bb;
  param_1[0x79] = (long)&DAT_01d38550;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x7c] = -0x340d631b7bddd9bb;
  param_1[0x7d] = (long)&DAT_01d38550;
  puVar5 = PTR_DAT_02710848;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  lVar11 = *(long *)(*(long *)puVar5 + 0x90);
  if (lVar11 == 0) {
    FUN_01009f60(param_1 + 0x80,0);
  }
  else {
    plVar16 = (long *)(lVar11 + 0x48);
    (**(code **)(*plVar16 + 0x10))(plVar16);
    FUN_01009f60(param_1 + 0x80,lVar11);
    (**(code **)(*plVar16 + 0x18))(plVar16);
  }
  uVar18 = 0;
  uVar19 = 0;
  if (0x30 < *(ushort *)((long)param_4 - (long)*param_4)) {
    uVar10 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0x18];
    uVar19 = 0;
    if (uVar10 != 0) {
      uVar19 = *(undefined4 *)((long)param_4 + uVar10);
    }
  }
  *(undefined4 *)((long)param_1 + 0x40c) = uVar19;
  if ((0x32 < *(ushort *)((long)param_4 - (long)*param_4)) &&
     (uVar10 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0x19], uVar10 != 0)) {
    uVar18 = *(undefined4 *)((long)param_4 + uVar10);
  }
  *(undefined4 *)(param_1 + 0x82) = uVar18;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x8b] = param_2;
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  param_1[0x96] = 0;
  puVar12 = (ushort *)((long)param_4 - (long)*param_4);
  if (*puVar12 < 9) {
    lVar11 = 0;
    pbVar15 = &DAT_00000004;
  }
  else {
    lVar11 = 0;
    if ((ulong)puVar12[4] != 0) {
      puVar1 = (uint *)((long)param_4 + (ulong)puVar12[4]);
      lVar11 = (long)puVar1 + (ulong)*puVar1;
    }
    pbVar15 = (byte *)(lVar11 + 4);
    if ((*puVar12 < 0xb) || ((ulong)puVar12[5] == 0)) {
      lVar11 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_4 + (ulong)puVar12[5]);
      lVar11 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  bVar3 = *pbVar15;
  pbVar14 = (byte *)(lVar11 + 4);
  if (bVar3 != 0) {
    sVar7 = strlen((char *)pbVar15);
    lVar13 = 1;
    uVar10 = 0xcbf29ce484222645;
    do {
      uVar17 = (ulong)bVar3;
      bVar3 = pbVar15[lVar13];
      uVar10 = (uVar10 ^ uVar17) * 0x100000001b3;
      lVar13 = lVar13 + 1;
    } while (bVar3 != 0);
    param_1[0x78] = uVar10;
    param_1[0x79] = (long)pbVar15;
    param_1[0x7a] = sVar7;
    if (param_1[0x7b] != 0) {
      plVar16 = (long *)(param_1[0x7b] + 0x48);
      (**(code **)(*plVar16 + 0x18))(plVar16);
      param_1[0x7b] = 0;
    }
    param_1[0x7b] = 0;
  }
  bVar3 = *pbVar14;
  if (bVar3 == 0) {
    sVar7 = strlen((char *)pbVar15);
    bVar3 = *pbVar15;
    pbVar14 = pbVar15;
    while (bVar3 != 0) {
      pbVar14 = pbVar14 + 1;
      uVar9 = (uVar9 ^ bVar3) * 0x100000001b3;
      bVar3 = *pbVar14;
    }
    param_1[0x7c] = uVar9;
    param_1[0x7d] = (long)pbVar15;
    lVar11 = param_1[0x7f];
    param_1[0x7e] = sVar7;
  }
  else {
    sVar7 = strlen((char *)pbVar14);
    pbVar15 = (byte *)(lVar11 + 5);
    do {
      uVar10 = (ulong)bVar3;
      bVar3 = *pbVar15;
      uVar9 = (uVar9 ^ uVar10) * 0x100000001b3;
      pbVar15 = pbVar15 + 1;
    } while (bVar3 != 0);
    param_1[0x7c] = uVar9;
    param_1[0x7d] = (long)pbVar14;
    lVar11 = param_1[0x7f];
    param_1[0x7e] = sVar7;
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
    param_1[0x7f] = 0;
  }
  param_1[0x7f] = 0;
  puVar12 = (ushort *)((long)param_4 - (long)*param_4);
  uVar18 = 0;
  uVar22 = 0;
  uVar19 = 0;
  uVar9 = 0;
  uVar4 = *puVar12;
  if (0x1c < uVar4) {
    uVar22 = 0;
    uVar19 = 0;
    if ((ulong)puVar12[0xe] != 0) {
      uVar19 = *(undefined4 *)((long)param_4 + (ulong)puVar12[0xe]);
    }
    if (uVar4 < 0x1f) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      uVar22 = 0;
      if ((ulong)puVar12[0xf] != 0) {
        uVar22 = *(undefined4 *)((long)param_4 + (ulong)puVar12[0xf]);
      }
      if ((0x20 < uVar4) && ((ulong)puVar12[0x10] != 0)) {
        uVar9 = (ulong)*(uint *)((long)param_4 + (ulong)puVar12[0x10]);
      }
    }
  }
  uVar20 = 0;
  uVar10 = 0;
  param_1[0x85] = uVar9;
  param_1[0x84] = CONCAT44(uVar22,uVar19);
  puVar12 = (ushort *)((long)param_4 - (long)*param_4);
  uVar4 = *puVar12;
  if (0x22 < uVar4) {
    uVar18 = 0;
    uVar20 = 0;
    if ((ulong)puVar12[0x11] != 0) {
      uVar20 = *(undefined4 *)((long)param_4 + (ulong)puVar12[0x11]);
    }
    if (uVar4 < 0x25) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      uVar18 = 0;
      if ((ulong)puVar12[0x12] != 0) {
        uVar18 = *(undefined4 *)((long)param_4 + (ulong)puVar12[0x12]);
      }
      if ((0x26 < uVar4) && ((ulong)puVar12[0x13] != 0)) {
        uVar10 = (ulong)*(uint *)((long)param_4 + (ulong)puVar12[0x13]);
      }
    }
  }
  param_1[0x87] = uVar10;
  param_1[0x86] = CONCAT44(uVar18,uVar20);
  lVar13 = *(long *)PTR_DAT_027194d8;
  lVar11 = *(long *)(param_1[0x80] + 0x58);
  if (lVar11 != 0) {
    plVar16 = (long *)(lVar11 + 0x48);
    (**(code **)(*plVar16 + 0x10))(plVar16);
    (**(code **)(*plVar16 + 0x10))(plVar16);
  }
  lVar8 = *(long *)(lVar13 + 0x110);
  *(long *)(lVar13 + 0x110) = lVar11;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  *(undefined4 *)(param_1 + 0x81) = 0;
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (0x34 - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  bVar6 = false;
  if (4 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
    uVar9 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
    bVar6 = false;
    if (uVar9 != 0) {
      bVar6 = *(char *)((long)piVar2 + uVar9) != '\0';
    }
  }
  *(bool *)(param_1 + 0x8e) = bVar6;
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (0x34 - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar1 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (6 - (long)*piVar2)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  uVar18 = 0;
  uVar19 = 0;
  if (4 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
    uVar9 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
    uVar19 = 0;
    if (uVar9 != 0) {
      uVar19 = *(undefined4 *)((long)piVar2 + uVar9);
    }
  }
  lVar11 = param_1[0x91];
  uVar22 = 0;
  param_1[0x91] = lVar11;
  param_1[0x90] = CONCAT44((int)((ulong)param_1[0x90] >> 0x20),uVar19);
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (0x34 - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar1 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (6 - (long)*piVar2)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  if (6 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
    uVar9 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3];
    uVar22 = 0;
    if (uVar9 != 0) {
      uVar22 = *(undefined4 *)((long)piVar2 + uVar9);
    }
  }
  uVar21 = 0;
  param_1[0x91] = lVar11;
  param_1[0x90] = CONCAT44(uVar22,uVar19);
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (0x34 - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar1 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (6 - (long)*piVar2)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  if (8 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
    uVar9 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4];
    uVar21 = 0;
    if (uVar9 != 0) {
      uVar21 = *(uint *)((long)piVar2 + uVar9);
    }
  }
  param_1[0x91] = (ulong)uVar21;
  param_1[0x90] = CONCAT44(uVar22,uVar19);
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (0x34 - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  if ((8 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
     (uVar9 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar9 != 0)) {
    uVar18 = *(undefined4 *)((long)piVar2 + uVar9);
  }
  *(undefined4 *)(param_1 + 0x92) = uVar18;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x37) {
    uVar18 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0x1b];
    uVar18 = 0;
    if (uVar9 != 0) {
      uVar18 = *(undefined4 *)((long)param_4 + uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x94) = uVar18;
  uVar18 = 0;
  if ((0x38 < *(ushort *)((long)param_4 - (long)*param_4)) &&
     (uVar9 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0x1c], uVar9 != 0)) {
    uVar18 = *(undefined4 *)((long)param_4 + uVar9);
  }
  *(undefined4 *)((long)param_1 + 0x4a4) = uVar18;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x3b) {
    bVar6 = false;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0x1d];
    bVar6 = false;
    if (uVar9 != 0) {
      bVar6 = *(char *)((long)param_4 + uVar9) != '\0';
    }
  }
  *(bool *)(param_1 + 0x95) = bVar6;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x3d) {
    bVar6 = false;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0x1e];
    bVar6 = false;
    if (uVar9 != 0) {
      bVar6 = *(char *)((long)param_4 + uVar9) != '\0';
    }
  }
  *(bool *)((long)param_1 + 0x4a9) = bVar6;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x41) {
    bVar6 = false;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0x20];
    bVar6 = false;
    if (uVar9 != 0) {
      bVar6 = *(char *)((long)param_4 + uVar9) != '\0';
    }
  }
  *(bool *)((long)param_1 + 0x4aa) = bVar6;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x3f) {
    bVar6 = false;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0x1f];
    bVar6 = false;
    if (uVar9 != 0) {
      bVar6 = *(char *)((long)param_4 + uVar9) != '\0';
    }
  }
  *(bool *)((long)param_1 + 0x4ab) = bVar6;
  return;
}


