/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dde190; name: FUN_00dde190
 */


void FUN_00dde190(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint *puVar1;
  int *piVar2;
  ushort uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ushort *puVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar5 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar5 == 0)) {
    lVar6 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_4 + uVar5);
    lVar6 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00db5850(param_1,param_2,param_3,lVar6);
  puVar4 = PTR_DAT_0271ebf0;
  *param_1 = (long)(PTR_DAT_0271ebf0 + 0x10);
  param_1[9] = (long)(puVar4 + 0x1a0);
  param_1[10] = (long)(puVar4 + 0x1e0);
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (10 - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
     (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar5 == 0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined4 *)((long)piVar2 + uVar5);
  }
  *(undefined4 *)(param_1 + 0x74) = uVar9;
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (10 - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  fVar8 = 0.0;
  uVar9 = 0;
  if (0xc < *(ushort *)((long)piVar2 - (long)*piVar2)) {
    uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[6];
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = *(undefined4 *)((long)piVar2 + uVar5);
    }
  }
  *(undefined4 *)((long)param_1 + 0x3a4) = uVar9;
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (10 - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar7 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar3 = *puVar7;
  uVar12 = 0;
  uVar9 = 0;
  uVar15 = 0;
  if (6 < uVar3) {
    uVar12 = 0;
    uVar9 = 0;
    if ((ulong)puVar7[3] != 0) {
      uVar9 = *(undefined4 *)((long)piVar2 + (ulong)puVar7[3]);
    }
    if (uVar3 < 9) {
      uVar15 = 0;
    }
    else {
      uVar15 = 0;
      uVar12 = 0;
      if ((ulong)puVar7[4] != 0) {
        uVar12 = *(undefined4 *)((long)piVar2 + (ulong)puVar7[4]);
      }
      if ((10 < uVar3) && ((ulong)puVar7[5] != 0)) {
        uVar15 = *(uint *)((long)piVar2 + (ulong)puVar7[5]);
      }
    }
  }
  uVar10 = 0;
  uVar13 = 0;
  uVar16 = 0;
  param_1[0x77] = (ulong)uVar15;
  param_1[0x76] = CONCAT44(uVar12,uVar9);
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (10 - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar7 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar3 = *puVar7;
  if (0x14 < uVar3) {
    uVar13 = 0;
    uVar10 = 0;
    if ((ulong)puVar7[10] != 0) {
      uVar10 = *(undefined4 *)((long)piVar2 + (ulong)puVar7[10]);
    }
    if (uVar3 < 0x17) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      uVar13 = 0;
      if ((ulong)puVar7[0xb] != 0) {
        uVar13 = *(undefined4 *)((long)piVar2 + (ulong)puVar7[0xb]);
      }
      if ((0x18 < uVar3) && ((ulong)puVar7[0xc] != 0)) {
        uVar16 = *(uint *)((long)piVar2 + (ulong)puVar7[0xc]);
      }
    }
  }
  fVar11 = 0.0;
  fVar14 = 0.0;
  param_1[0x79] = (ulong)uVar16;
  param_1[0x78] = CONCAT44(uVar13,uVar10);
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (10 - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar7 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar3 = *puVar7;
  if (0xe < uVar3) {
    fVar8 = 0.0;
    fVar11 = 0.0;
    if ((ulong)puVar7[7] != 0) {
      fVar11 = *(float *)((long)piVar2 + (ulong)puVar7[7]) * DAT_01d4bb38;
    }
    fVar11 = fVar11 / DAT_01d4c284;
    if (uVar3 < 0x11) {
      fVar14 = 0.0;
    }
    else {
      fVar14 = 0.0;
      fVar8 = 0.0;
      if ((ulong)puVar7[8] != 0) {
        fVar8 = *(float *)((long)piVar2 + (ulong)puVar7[8]) * DAT_01d4bb38;
      }
      fVar8 = fVar8 / DAT_01d4c284;
      if ((0x12 < uVar3) && ((ulong)puVar7[9] != 0)) {
        fVar14 = *(float *)((long)piVar2 + (ulong)puVar7[9]) * DAT_01d4bb38;
      }
    }
  }
  param_1[0x7b] = (ulong)(uint)(fVar14 / DAT_01d4c284);
  param_1[0x7a] = CONCAT44(fVar8,fVar11);
  if (*(ushort *)((long)param_4 - (long)*param_4) < 7) {
    lVar6 = 0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[3];
    lVar6 = 0;
    if (uVar5 != 0) {
      lVar6 = *(long *)((long)param_4 + uVar5);
    }
  }
  param_1[0x7c] = lVar6;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 9) {
    *(undefined4 *)(param_1 + 0x7d) = 0;
    return;
  }
  uVar5 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[4];
  uVar9 = 0;
  if (uVar5 != 0) {
    uVar9 = *(undefined4 *)((long)param_4 + uVar5);
  }
  *(undefined4 *)(param_1 + 0x7d) = uVar9;
  return;
}


