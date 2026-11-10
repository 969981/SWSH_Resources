/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ddd9c0; name: FUN_00ddd9c0
 */


void FUN_00ddd9c0(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint *puVar1;
  int *piVar2;
  ushort uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ushort *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  uint uVar12;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar5 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar5 == 0)) {
    lVar6 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_4 + uVar5);
    lVar6 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00db5850(param_1,param_2,param_3,lVar6);
  puVar4 = PTR_DAT_0271ebd8;
  *param_1 = (long)(PTR_DAT_0271ebd8 + 0x10);
  param_1[9] = (long)(puVar4 + 0x1a0);
  param_1[10] = (long)(puVar4 + 0x1e0);
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
  param_1[0x74] = lVar6;
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (8 - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
     (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar5 == 0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined4 *)((long)piVar2 + uVar5);
  }
  *(undefined4 *)(param_1 + 0x75) = uVar11;
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (8 - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar7 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar8 = 0;
  uVar11 = 0;
  uVar9 = 0;
  uVar12 = 0;
  uVar3 = *puVar7;
  if (6 < uVar3) {
    uVar11 = 0;
    uVar9 = 0;
    if ((ulong)puVar7[3] != 0) {
      uVar9 = *(undefined4 *)((long)piVar2 + (ulong)puVar7[3]);
    }
    if (uVar3 < 9) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      uVar11 = 0;
      if ((ulong)puVar7[4] != 0) {
        uVar11 = *(undefined4 *)((long)piVar2 + (ulong)puVar7[4]);
      }
      if ((10 < uVar3) && ((ulong)puVar7[5] != 0)) {
        uVar12 = *(uint *)((long)piVar2 + (ulong)puVar7[5]);
      }
    }
  }
  fVar10 = 0.0;
  param_1[0x77] = (ulong)uVar12;
  param_1[0x76] = CONCAT44(uVar11,uVar9);
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (8 - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  if (0x10 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
    uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[8];
    fVar10 = 0.0;
    if (uVar5 != 0) {
      fVar10 = *(float *)((long)piVar2 + uVar5) * DAT_01d4bb38;
    }
  }
  fVar10 = fVar10 / DAT_01d4c284;
  uVar11 = 0;
  uVar5 = 0;
  param_1[0x79] = 0;
  param_1[0x78] = (ulong)(uint)fVar10 << 0x20;
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (8 - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar7 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar3 = *puVar7;
  uVar9 = 0;
  if (0x14 < uVar3) {
    uVar9 = 0;
    uVar11 = 0;
    if ((ulong)puVar7[10] != 0) {
      uVar11 = *(undefined4 *)((long)piVar2 + (ulong)puVar7[10]);
    }
    if (uVar3 < 0x17) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      uVar9 = 0;
      if ((ulong)puVar7[0xb] != 0) {
        uVar9 = *(undefined4 *)((long)piVar2 + (ulong)puVar7[0xb]);
      }
      if ((0x18 < uVar3) && ((ulong)puVar7[0xc] != 0)) {
        uVar5 = (ulong)*(uint *)((long)piVar2 + (ulong)puVar7[0xc]);
      }
    }
  }
  param_1[0x7b] = uVar5;
  param_1[0x7a] = CONCAT44(uVar9,uVar11);
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (8 - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  if ((0xc < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
     (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[6], uVar5 != 0)) {
    uVar8 = *(undefined4 *)((long)piVar2 + uVar5);
  }
  *(undefined4 *)(param_1 + 0x7c) = uVar8;
  return;
}


