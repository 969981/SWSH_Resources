/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db2d00; name: FUN_00db2d00
 */


void FUN_00db2d00(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint *puVar1;
  int *piVar2;
  ushort uVar3;
  float fVar4;
  float fVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ushort *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar7 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar7 == 0)) {
    lVar8 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_4 + uVar7);
    lVar8 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00dbc9a0(param_1,param_2,param_3,lVar8);
  puVar6 = PTR_DAT_0271e7c0;
  *(undefined4 *)((long)param_1 + 0x4dc) = 0;
  param_1[0x9c] = 0;
  *(undefined1 *)((long)param_1 + 0x4da) = 0;
  *param_1 = (long)(puVar6 + 0x10);
  param_1[9] = (long)(puVar6 + 0x270);
  param_1[10] = (long)(puVar6 + 0x2b0);
  *(undefined2 *)(param_1 + 0x9b) = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  uVar10 = 0;
  param_1[0x98] = 0;
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (0x12 - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  if ((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
     (uVar7 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar10 = 0, uVar7 != 0)) {
    uVar10 = *(undefined4 *)((long)piVar2 + uVar7);
  }
  *(undefined4 *)(param_1 + 0x9d) = uVar10;
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (0x12 - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  fVar15 = 0.0;
  uVar10 = 0;
  if (0xc < *(ushort *)((long)piVar2 - (long)*piVar2)) {
    uVar7 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[6];
    uVar10 = 0;
    if (uVar7 != 0) {
      uVar10 = *(undefined4 *)((long)piVar2 + uVar7);
    }
  }
  *(undefined4 *)((long)param_1 + 0x4ec) = uVar10;
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (0x12 - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar9 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar3 = *puVar9;
  uVar13 = 0;
  uVar10 = 0;
  uVar16 = 0;
  if (6 < uVar3) {
    uVar13 = 0;
    uVar10 = 0;
    if ((ulong)puVar9[3] != 0) {
      uVar10 = *(undefined4 *)((long)piVar2 + (ulong)puVar9[3]);
    }
    if (uVar3 < 9) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      uVar13 = 0;
      if ((ulong)puVar9[4] != 0) {
        uVar13 = *(undefined4 *)((long)piVar2 + (ulong)puVar9[4]);
      }
      if ((10 < uVar3) && ((ulong)puVar9[5] != 0)) {
        uVar16 = *(uint *)((long)piVar2 + (ulong)puVar9[5]);
      }
    }
  }
  uVar11 = 0;
  uVar14 = 0;
  uVar17 = 0;
  param_1[0x9f] = (ulong)uVar16;
  param_1[0x9e] = CONCAT44(uVar13,uVar10);
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (0x12 - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar9 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar3 = *puVar9;
  if (0x14 < uVar3) {
    uVar14 = 0;
    uVar11 = 0;
    if ((ulong)puVar9[10] != 0) {
      uVar11 = *(undefined4 *)((long)piVar2 + (ulong)puVar9[10]);
    }
    if (uVar3 < 0x17) {
      uVar17 = 0;
    }
    else {
      uVar17 = 0;
      uVar14 = 0;
      if ((ulong)puVar9[0xb] != 0) {
        uVar14 = *(undefined4 *)((long)piVar2 + (ulong)puVar9[0xb]);
      }
      if ((0x18 < uVar3) && ((ulong)puVar9[0xc] != 0)) {
        uVar17 = *(uint *)((long)piVar2 + (ulong)puVar9[0xc]);
      }
    }
  }
  fVar12 = 0.0;
  fVar18 = 0.0;
  param_1[0xa1] = (ulong)uVar17;
  param_1[0xa0] = CONCAT44(uVar14,uVar11);
  fVar5 = DAT_01d4c284;
  fVar4 = DAT_01d4bb38;
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (0x12 - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar9 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar3 = *puVar9;
  if (0xe < uVar3) {
    fVar15 = 0.0;
    fVar12 = 0.0;
    if ((ulong)puVar9[7] != 0) {
      fVar12 = *(float *)((long)piVar2 + (ulong)puVar9[7]);
    }
    fVar12 = (fVar12 * DAT_01d4bb38) / DAT_01d4c284;
    if (uVar3 < 0x11) {
      fVar18 = 0.0;
    }
    else {
      fVar18 = 0.0;
      fVar15 = 0.0;
      if ((ulong)puVar9[8] != 0) {
        fVar15 = *(float *)((long)piVar2 + (ulong)puVar9[8]);
      }
      fVar15 = (fVar15 * DAT_01d4bb38) / DAT_01d4c284;
      if ((0x12 < uVar3) && ((ulong)puVar9[9] != 0)) {
        fVar18 = *(float *)((long)piVar2 + (ulong)puVar9[9]);
      }
    }
  }
  param_1[0xa3] = (ulong)(uint)((fVar18 * DAT_01d4bb38) / DAT_01d4c284);
  param_1[0xa2] = CONCAT44(fVar15,fVar12);
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (0xc - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
     (uVar7 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar7 == 0)) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined4 *)((long)piVar2 + uVar7);
  }
  *(undefined4 *)(param_1 + 0xa4) = uVar10;
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (0xc - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  fVar15 = 0.0;
  uVar10 = 0;
  if (0xc < *(ushort *)((long)piVar2 - (long)*piVar2)) {
    uVar7 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[6];
    uVar10 = 0;
    if (uVar7 != 0) {
      uVar10 = *(undefined4 *)((long)piVar2 + uVar7);
    }
  }
  *(undefined4 *)((long)param_1 + 0x524) = uVar10;
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (0xc - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar9 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar3 = *puVar9;
  uVar13 = 0;
  uVar10 = 0;
  uVar16 = 0;
  if (6 < uVar3) {
    uVar13 = 0;
    uVar10 = 0;
    if ((ulong)puVar9[3] != 0) {
      uVar10 = *(undefined4 *)((long)piVar2 + (ulong)puVar9[3]);
    }
    if (uVar3 < 9) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      uVar13 = 0;
      if ((ulong)puVar9[4] != 0) {
        uVar13 = *(undefined4 *)((long)piVar2 + (ulong)puVar9[4]);
      }
      if ((10 < uVar3) && ((ulong)puVar9[5] != 0)) {
        uVar16 = *(uint *)((long)piVar2 + (ulong)puVar9[5]);
      }
    }
  }
  uVar11 = 0;
  uVar14 = 0;
  uVar17 = 0;
  param_1[0xa7] = (ulong)uVar16;
  param_1[0xa6] = CONCAT44(uVar13,uVar10);
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (0xc - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar9 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar3 = *puVar9;
  if (0x14 < uVar3) {
    uVar14 = 0;
    uVar11 = 0;
    if ((ulong)puVar9[10] != 0) {
      uVar11 = *(undefined4 *)((long)piVar2 + (ulong)puVar9[10]);
    }
    if (uVar3 < 0x17) {
      uVar17 = 0;
    }
    else {
      uVar17 = 0;
      uVar14 = 0;
      if ((ulong)puVar9[0xb] != 0) {
        uVar14 = *(undefined4 *)((long)piVar2 + (ulong)puVar9[0xb]);
      }
      if ((0x18 < uVar3) && ((ulong)puVar9[0xc] != 0)) {
        uVar17 = *(uint *)((long)piVar2 + (ulong)puVar9[0xc]);
      }
    }
  }
  fVar12 = 0.0;
  fVar18 = 0.0;
  param_1[0xa9] = (ulong)uVar17;
  param_1[0xa8] = CONCAT44(uVar14,uVar11);
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (0xc - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar9 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar3 = *puVar9;
  if (0xe < uVar3) {
    fVar15 = 0.0;
    fVar12 = 0.0;
    if ((ulong)puVar9[7] != 0) {
      fVar12 = *(float *)((long)piVar2 + (ulong)puVar9[7]) * fVar4;
    }
    fVar12 = fVar12 / fVar5;
    if (uVar3 < 0x11) {
      fVar18 = 0.0;
    }
    else {
      fVar18 = 0.0;
      fVar15 = 0.0;
      if ((ulong)puVar9[8] != 0) {
        fVar15 = *(float *)((long)piVar2 + (ulong)puVar9[8]) * fVar4;
      }
      fVar15 = fVar15 / fVar5;
      if ((0x12 < uVar3) && ((ulong)puVar9[9] != 0)) {
        fVar18 = *(float *)((long)piVar2 + (ulong)puVar9[9]) * fVar4;
      }
    }
  }
  param_1[0xac] = 0;
  lVar8 = 0;
  param_1[0xab] = (ulong)(uint)(fVar18 / fVar5);
  param_1[0xaa] = CONCAT44(fVar15,fVar12);
  if ((6 < *(ushort *)((long)param_4 - (long)*param_4)) &&
     (uVar7 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[3], lVar8 = 0, uVar7 != 0)) {
    lVar8 = *(long *)((long)param_4 + uVar7);
  }
  param_1[0x99] = lVar8;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 9) {
    lVar8 = 0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[4];
    lVar8 = 0;
    if (uVar7 != 0) {
      lVar8 = *(long *)((long)param_4 + uVar7);
    }
  }
  param_1[0x9a] = lVar8;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x11) {
    lVar8 = 0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[8];
    lVar8 = 0;
    if (uVar7 != 0) {
      lVar8 = *(long *)((long)param_4 + uVar7);
    }
  }
  param_1[0xac] = lVar8;
  *(ulong *)(param_1[0x2e] + 0x138) = *(ulong *)(param_1[0x2e] + 0x138) | 1;
  *(ulong *)(param_1[0x2f] + 0x138) = *(ulong *)(param_1[0x2f] + 0x138) | 1;
  return;
}


