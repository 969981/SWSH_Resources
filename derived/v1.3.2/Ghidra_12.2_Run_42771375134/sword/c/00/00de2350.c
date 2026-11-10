/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de2350; name: FUN_00de2350
 */


void FUN_00de2350(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ushort *puVar10;
  ushort *puVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  ulong uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar9 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar9 == 0)) {
    lVar8 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_4 + uVar9);
    lVar8 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00ddb420(param_1,param_2,param_3,lVar8,0x7f00);
  puVar7 = PTR_DAT_0271ec58;
  *param_1 = (long)(PTR_DAT_0271ec58 + 0x10);
  param_1[9] = (long)(puVar7 + 0x1b0);
  param_1[10] = (long)(puVar7 + 0x1f0);
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (4 - (long)*param_4)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar10 = (ushort *)((long)piVar2 - (long)*piVar2);
  piVar3 = (int *)((long)((long)piVar2 + (ulong)puVar10[2]) +
                  (ulong)*(uint *)((long)piVar2 + (ulong)puVar10[2]));
  puVar11 = (ushort *)((long)piVar3 - (long)*piVar3);
  uVar12 = 0;
  uVar17 = 0;
  uVar14 = 0;
  uVar9 = 0;
  uVar4 = *puVar11;
  if (4 < uVar4) {
    uVar17 = 0;
    uVar14 = 0;
    if ((ulong)puVar11[2] != 0) {
      uVar14 = *(undefined4 *)((long)piVar3 + (ulong)puVar11[2]);
    }
    if (uVar4 < 7) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      uVar17 = 0;
      if ((ulong)puVar11[3] != 0) {
        uVar17 = *(undefined4 *)((long)piVar3 + (ulong)puVar11[3]);
      }
      if ((8 < uVar4) && ((ulong)puVar11[4] != 0)) {
        uVar9 = (ulong)*(uint *)((long)piVar3 + (ulong)puVar11[4]);
      }
    }
  }
  uVar5 = *puVar10;
  uVar19 = 0;
  uVar16 = 0;
  if (10 < uVar5) {
    uVar12 = 0;
    uVar19 = 0;
    if ((ulong)puVar10[5] != 0) {
      uVar19 = *(undefined4 *)((long)piVar2 + (ulong)puVar10[5]);
    }
    if (uVar5 < 0xd) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      uVar12 = 0;
      if ((ulong)puVar10[6] != 0) {
        uVar12 = *(undefined4 *)((long)piVar2 + (ulong)puVar10[6]);
      }
      if ((0xe < uVar5) && ((ulong)puVar10[7] != 0)) {
        uVar16 = (ulong)*(uint *)((long)piVar2 + (ulong)puVar10[7]);
      }
    }
  }
  if (uVar4 < 0xd) {
    fVar13 = 0.0;
    fVar18 = 0.0;
    fVar20 = 0.0;
    if (uVar4 < 0xb) goto LAB_00de2558;
    uVar6 = puVar11[5];
    fVar13 = 0.0;
  }
  else {
    if ((ulong)puVar11[6] == 0) {
      fVar13 = 0.0;
    }
    else {
      fVar13 = *(float *)((long)piVar3 + (ulong)puVar11[6]) * DAT_01d4bb38;
    }
    fVar13 = fVar13 / DAT_01d4c284;
    uVar6 = puVar11[5];
  }
  fVar18 = 0.0;
  if ((ulong)uVar6 != 0) {
    fVar18 = *(float *)((long)piVar3 + (ulong)uVar6) * DAT_01d4bb38;
  }
  fVar20 = 0.0;
  fVar18 = fVar18 / DAT_01d4c284;
  if ((0xe < uVar4) && ((ulong)puVar11[7] != 0)) {
    fVar20 = *(float *)((long)piVar3 + (ulong)puVar11[7]) * DAT_01d4bb38;
  }
LAB_00de2558:
  fVar20 = fVar20 / DAT_01d4c284;
  if (uVar5 < 7) {
    uVar15 = 0;
    uVar21 = 0;
  }
  else {
    uVar21 = 0;
    uVar15 = 0;
    if ((ulong)puVar10[3] != 0) {
      uVar15 = *(undefined4 *)((long)piVar2 + (ulong)puVar10[3]);
    }
    if ((8 < uVar5) && ((ulong)puVar10[4] != 0)) {
      uVar21 = *(undefined4 *)((long)piVar2 + (ulong)puVar10[4]);
    }
  }
  *(float *)(param_1 + 0x7a) = fVar13;
  *(float *)((long)param_1 + 0x3d4) = fVar18;
  *(float *)(param_1 + 0x7b) = fVar20;
  *(undefined4 *)((long)param_1 + 0x3dc) = uVar15;
  *(undefined4 *)(param_1 + 0x7c) = uVar21;
  param_1[0x77] = uVar9;
  param_1[0x76] = CONCAT44(uVar17,uVar14);
  param_1[0x79] = uVar16;
  param_1[0x78] = CONCAT44(uVar12,uVar19);
  return;
}


