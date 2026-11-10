/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ddc380; name: FUN_00ddc380
 */


void FUN_00ddc380(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint *puVar1;
  ushort uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  ushort *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  undefined1 local_50 [16];
  undefined8 local_40;
  ulong uStack_38;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar4 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar4 == 0)) {
    lVar5 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_4 + uVar4);
    lVar5 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00dbc9a0(param_1,param_2,param_3,lVar5);
  puVar3 = PTR_DAT_0271ebc8;
  *param_1 = (long)(PTR_DAT_0271ebc8 + 0x10);
  param_1[9] = (long)(puVar3 + 0x250);
  param_1[10] = (long)(puVar3 + 0x290);
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (0x10 - (long)*param_4)));
  piVar6 = (int *)((long)puVar1 + (ulong)*puVar1);
  if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 5) ||
     (uVar4 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2], uVar4 == 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)((long)piVar6 + uVar4);
  }
  *(undefined4 *)(param_1 + 0x98) = uVar8;
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (0x10 - (long)*param_4)));
  piVar6 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar7 = (ushort *)((long)piVar6 - (long)*piVar6);
  uVar8 = 0;
  uVar12 = 0;
  uVar9 = 0;
  uVar15 = 0;
  uVar2 = *puVar7;
  if (6 < uVar2) {
    uVar12 = 0;
    uVar9 = 0;
    if ((ulong)puVar7[3] != 0) {
      uVar9 = *(undefined4 *)((long)piVar6 + (ulong)puVar7[3]);
    }
    if (uVar2 < 9) {
      uVar15 = 0;
    }
    else {
      uVar15 = 0;
      uVar12 = 0;
      if ((ulong)puVar7[4] != 0) {
        uVar12 = *(undefined4 *)((long)piVar6 + (ulong)puVar7[4]);
      }
      if ((10 < uVar2) && ((ulong)puVar7[5] != 0)) {
        uVar15 = *(uint *)((long)piVar6 + (ulong)puVar7[5]);
      }
    }
  }
  uVar10 = 0;
  uVar13 = 0;
  uVar16 = 0;
  param_1[0x9b] = (ulong)uVar15;
  param_1[0x9a] = CONCAT44(uVar12,uVar9);
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (0x10 - (long)*param_4)));
  piVar6 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar7 = (ushort *)((long)piVar6 - (long)*piVar6);
  uVar2 = *puVar7;
  if (0x14 < uVar2) {
    uVar13 = 0;
    uVar10 = 0;
    if ((ulong)puVar7[10] != 0) {
      uVar10 = *(undefined4 *)((long)piVar6 + (ulong)puVar7[10]);
    }
    if (uVar2 < 0x17) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      uVar13 = 0;
      if ((ulong)puVar7[0xb] != 0) {
        uVar13 = *(undefined4 *)((long)piVar6 + (ulong)puVar7[0xb]);
      }
      if ((0x18 < uVar2) && ((ulong)puVar7[0xc] != 0)) {
        uVar16 = *(uint *)((long)piVar6 + (ulong)puVar7[0xc]);
      }
    }
  }
  fVar11 = 0.0;
  fVar14 = 0.0;
  fVar17 = 0.0;
  param_1[0x9d] = (ulong)uVar16;
  param_1[0x9c] = CONCAT44(uVar13,uVar10);
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (0x10 - (long)*param_4)));
  piVar6 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar7 = (ushort *)((long)piVar6 - (long)*piVar6);
  uVar2 = *puVar7;
  if (0xe < uVar2) {
    fVar11 = 0.0;
    fVar14 = 0.0;
    if ((ulong)puVar7[7] != 0) {
      fVar14 = *(float *)((long)piVar6 + (ulong)puVar7[7]);
    }
    fVar14 = (fVar14 * DAT_01d4bb38) / DAT_01d4c284;
    if (uVar2 < 0x11) {
      fVar17 = 0.0;
    }
    else {
      fVar17 = 0.0;
      fVar11 = 0.0;
      if ((ulong)puVar7[8] != 0) {
        fVar11 = *(float *)((long)piVar6 + (ulong)puVar7[8]);
      }
      fVar11 = (fVar11 * DAT_01d4bb38) / DAT_01d4c284;
      if ((0x12 < uVar2) && ((ulong)puVar7[9] != 0)) {
        fVar17 = *(float *)((long)piVar6 + (ulong)puVar7[9]);
      }
    }
  }
  uVar12 = 0;
  uVar4 = 0;
  uVar9 = 0;
  param_1[0x9f] = (ulong)(uint)((fVar17 * DAT_01d4bb38) / DAT_01d4c284);
  param_1[0x9e] = CONCAT44(fVar11,fVar14);
  puVar7 = (ushort *)((long)param_4 - (long)*param_4);
  uVar2 = *puVar7;
  if (6 < uVar2) {
    uVar12 = 0;
    uVar9 = 0;
    if ((ulong)puVar7[3] != 0) {
      uVar9 = *(undefined4 *)((long)param_4 + (ulong)puVar7[3]);
    }
    if (uVar2 < 9) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      uVar12 = 0;
      if ((ulong)puVar7[4] != 0) {
        uVar12 = *(undefined4 *)((long)param_4 + (ulong)puVar7[4]);
      }
      if ((10 < uVar2) && ((ulong)puVar7[5] != 0)) {
        uVar4 = (ulong)*(uint *)((long)param_4 + (ulong)puVar7[5]);
      }
    }
  }
  uVar10 = 0;
  param_1[0xa1] = uVar4;
  param_1[0xa0] = CONCAT44(uVar12,uVar9);
  puVar1 = (uint *)((long)param_4 + (ulong)*(ushort *)((long)param_4 + (0x10 - (long)*param_4)));
  piVar6 = (int *)((long)puVar1 + (ulong)*puVar1);
  if (0xc < *(ushort *)((long)piVar6 - (long)*piVar6)) {
    uVar4 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[6];
    uVar10 = 0;
    if (uVar4 != 0) {
      uVar10 = *(undefined4 *)((long)piVar6 + uVar4);
    }
  }
  *(undefined4 *)(param_1 + 0xa2) = uVar10;
  if ((0xc < *(ushort *)((long)param_4 - (long)*param_4)) &&
     (uVar4 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[6], uVar4 != 0)) {
    uVar8 = *(undefined4 *)((long)param_4 + uVar4);
  }
  *(undefined4 *)((long)param_1 + 0x514) = uVar8;
  param_1[0xa3] = 0;
  FUN_00dc9c00(param_1 + 0xa4);
  lVar5 = 0;
  if ((0xe < *(ushort *)((long)param_4 - (long)*param_4)) &&
     (uVar4 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[7], lVar5 = 0, uVar4 != 0)) {
    lVar5 = *(long *)((long)param_4 + uVar4);
  }
  param_1[0xa3] = lVar5;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x13) {
    piVar6 = (int *)0x0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[9];
    piVar6 = (int *)0x0;
    if (uVar4 != 0) {
      puVar1 = (uint *)((long)param_4 + uVar4);
      piVar6 = (int *)((long)puVar1 + (ulong)*puVar1);
    }
  }
  uVar4 = (ulong)*(ushort *)((long)piVar6 + (4 - (long)*piVar6));
  local_50[0] = false;
  if (uVar4 != 0) {
    local_50[0] = *(char *)((long)piVar6 + uVar4) != '\0';
  }
  puVar1 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (6 - (long)*piVar6)));
  piVar6 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar7 = (ushort *)((long)piVar6 - (long)*piVar6);
  uVar2 = *puVar7;
  if (uVar2 < 5) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if ((ulong)puVar7[2] != 0) {
      uVar8 = *(undefined4 *)((long)piVar6 + (ulong)puVar7[2]);
    }
    if (6 < uVar2) {
      uVar4 = 0;
      if ((ulong)puVar7[3] != 0) {
        uVar4 = (ulong)*(uint *)((long)piVar6 + (ulong)puVar7[3]);
      }
      uStack_38 = 0;
      if ((8 < uVar2) && ((ulong)puVar7[4] != 0)) {
        uStack_38 = (ulong)*(uint *)((long)piVar6 + (ulong)puVar7[4]);
      }
      goto LAB_00ddc830;
    }
  }
  uVar4 = 0;
  uStack_38 = uVar4;
LAB_00ddc830:
  local_40 = CONCAT44((int)uVar4,uVar8);
  FUN_00dc9c40(param_1 + 0xa4,local_50);
  return;
}


