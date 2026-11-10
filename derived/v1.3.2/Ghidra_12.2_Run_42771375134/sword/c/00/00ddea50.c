/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ddea50; name: FUN_00ddea50
 */


void FUN_00ddea50(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint *puVar1;
  int *piVar2;
  ushort uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ushort *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar6 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar6 == 0)) {
    lVar5 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_4 + uVar6);
    lVar5 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00db5850(param_1,param_2,param_3,lVar5);
  puVar4 = PTR_DAT_0271ec08;
  *param_1 = (long)(PTR_DAT_0271ec08 + 0x10);
  param_1[9] = (long)(puVar4 + 0x1a0);
  param_1[10] = (long)(puVar4 + 0x1e0);
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (6 - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
     (uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar6 == 0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined4 *)((long)piVar2 + uVar6);
  }
  *(undefined4 *)(param_1 + 0x74) = uVar11;
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (6 - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar7 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar8 = 0;
  uVar11 = 0;
  uVar9 = 0;
  uVar13 = 0;
  uVar3 = *puVar7;
  if (6 < uVar3) {
    uVar11 = 0;
    uVar9 = 0;
    if ((ulong)puVar7[3] != 0) {
      uVar9 = *(undefined4 *)((long)piVar2 + (ulong)puVar7[3]);
    }
    if (uVar3 < 9) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      uVar11 = 0;
      if ((ulong)puVar7[4] != 0) {
        uVar11 = *(undefined4 *)((long)piVar2 + (ulong)puVar7[4]);
      }
      if ((10 < uVar3) && ((ulong)puVar7[5] != 0)) {
        uVar13 = *(uint *)((long)piVar2 + (ulong)puVar7[5]);
      }
    }
  }
  fVar10 = 0.0;
  fVar12 = 0.0;
  fVar14 = 0.0;
  param_1[0x77] = (ulong)uVar13;
  param_1[0x76] = CONCAT44(uVar11,uVar9);
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (6 - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar7 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar3 = *puVar7;
  if (0xe < uVar3) {
    fVar10 = 0.0;
    fVar12 = 0.0;
    if ((ulong)puVar7[7] != 0) {
      fVar12 = *(float *)((long)piVar2 + (ulong)puVar7[7]) * DAT_01d4bb38;
    }
    fVar12 = fVar12 / DAT_01d4c284;
    if (uVar3 < 0x11) {
      fVar14 = 0.0;
    }
    else {
      fVar14 = 0.0;
      fVar10 = 0.0;
      if ((ulong)puVar7[8] != 0) {
        fVar10 = *(float *)((long)piVar2 + (ulong)puVar7[8]) * DAT_01d4bb38;
      }
      fVar10 = fVar10 / DAT_01d4c284;
      if ((0x12 < uVar3) && ((ulong)puVar7[9] != 0)) {
        fVar14 = *(float *)((long)piVar2 + (ulong)puVar7[9]) * DAT_01d4bb38;
      }
    }
  }
  uVar11 = 0;
  uVar6 = 0;
  uVar9 = 0;
  param_1[0x79] = (ulong)(uint)(fVar14 / DAT_01d4c284);
  param_1[0x78] = CONCAT44(fVar10,fVar12);
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (6 - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar7 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar3 = *puVar7;
  if (0x14 < uVar3) {
    uVar11 = 0;
    uVar9 = 0;
    if ((ulong)puVar7[10] != 0) {
      uVar9 = *(undefined4 *)((long)piVar2 + (ulong)puVar7[10]);
    }
    if (uVar3 < 0x17) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      uVar11 = 0;
      if ((ulong)puVar7[0xb] != 0) {
        uVar11 = *(undefined4 *)((long)piVar2 + (ulong)puVar7[0xb]);
      }
      if ((0x18 < uVar3) && ((ulong)puVar7[0xc] != 0)) {
        uVar6 = (ulong)*(uint *)((long)piVar2 + (ulong)puVar7[0xc]);
      }
    }
  }
  param_1[0x7b] = uVar6;
  param_1[0x7a] = CONCAT44(uVar11,uVar9);
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (6 - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  if ((0xc < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
     (uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[6], uVar6 != 0)) {
    uVar8 = *(undefined4 *)((long)piVar2 + uVar6);
  }
  *(undefined4 *)(param_1 + 0x7c) = uVar8;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 9) {
    uVar11 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[4];
    uVar11 = 0;
    if (uVar6 != 0) {
      uVar11 = *(undefined4 *)((long)param_4 + uVar6);
    }
  }
  *(undefined4 *)((long)param_1 + 0x3e4) = uVar11;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0xb) {
    *(undefined4 *)(param_1 + 0x7d) = 0;
    return;
  }
  uVar6 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[5];
  uVar11 = 0;
  if (uVar6 != 0) {
    uVar11 = *(undefined4 *)((long)param_4 + uVar6);
  }
  *(undefined4 *)(param_1 + 0x7d) = uVar11;
  return;
}


