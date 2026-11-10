/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de0450; name: FUN_00de0450
 */


void FUN_00de0450(long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint *puVar1;
  ushort uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ushort *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar5 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar5 == 0)) {
    lVar4 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_4 + uVar5);
    lVar4 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00dbc9a0(param_1,param_2,param_3,lVar4);
  puVar3 = PTR_DAT_0271ec28;
  *param_1 = (long)(PTR_DAT_0271ec28 + 0x10);
  param_1[9] = (long)(puVar3 + 0x248);
  param_1[10] = (long)(puVar3 + 0x288);
  uVar7 = 0;
  uVar8 = 0;
  if (6 < *(ushort *)((long)param_4 - (long)*param_4)) {
    uVar5 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[3];
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = *(undefined4 *)((long)param_4 + uVar5);
    }
  }
  *(undefined4 *)(param_1 + 0x98) = uVar8;
  uVar8 = 0;
  if (8 < *(ushort *)((long)param_4 - (long)*param_4)) {
    uVar5 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[4];
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = *(undefined4 *)((long)param_4 + uVar5);
    }
  }
  *(undefined4 *)((long)param_1 + 0x4c4) = uVar8;
  puVar6 = (ushort *)((long)param_4 - (long)*param_4);
  uVar2 = *puVar6;
  uVar10 = 0;
  uVar8 = 0;
  uVar11 = 0;
  if (0x16 < uVar2) {
    uVar10 = 0;
    uVar8 = 0;
    if ((ulong)puVar6[0xb] != 0) {
      uVar8 = *(undefined4 *)((long)param_4 + (ulong)puVar6[0xb]);
    }
    if (uVar2 < 0x19) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      uVar10 = 0;
      if ((ulong)puVar6[0xc] != 0) {
        uVar10 = *(undefined4 *)((long)param_4 + (ulong)puVar6[0xc]);
      }
      if ((0x1a < uVar2) && ((ulong)puVar6[0xd] != 0)) {
        uVar11 = *(uint *)((long)param_4 + (ulong)puVar6[0xd]);
      }
    }
  }
  uVar9 = 0;
  param_1[0x9b] = (ulong)uVar11;
  param_1[0x9a] = CONCAT44(uVar10,uVar8);
  if (10 < *(ushort *)((long)param_4 - (long)*param_4)) {
    uVar5 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[5];
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = *(undefined4 *)((long)param_4 + uVar5);
    }
  }
  *(undefined4 *)(param_1 + 0x9c) = uVar9;
  puVar6 = (ushort *)((long)param_4 - (long)*param_4);
  uVar2 = *puVar6;
  uVar10 = 0;
  uVar8 = 0;
  uVar11 = 0;
  if (0x1c < uVar2) {
    uVar10 = 0;
    uVar8 = 0;
    if ((ulong)puVar6[0xe] != 0) {
      uVar8 = *(undefined4 *)((long)param_4 + (ulong)puVar6[0xe]);
    }
    if (uVar2 < 0x1f) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      uVar10 = 0;
      if ((ulong)puVar6[0xf] != 0) {
        uVar10 = *(undefined4 *)((long)param_4 + (ulong)puVar6[0xf]);
      }
      if ((0x20 < uVar2) && ((ulong)puVar6[0x10] != 0)) {
        uVar11 = *(uint *)((long)param_4 + (ulong)puVar6[0x10]);
      }
    }
  }
  uVar9 = 0;
  param_1[0x9f] = (ulong)uVar11;
  param_1[0x9e] = CONCAT44(uVar10,uVar8);
  if (0x12 < *(ushort *)((long)param_4 - (long)*param_4)) {
    uVar5 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[9];
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = *(undefined4 *)((long)param_4 + uVar5);
    }
  }
  *(undefined4 *)(param_1 + 0xa0) = uVar9;
  puVar6 = (ushort *)((long)param_4 - (long)*param_4);
  uVar2 = *puVar6;
  uVar8 = 0;
  uVar5 = 0;
  if (0xc < uVar2) {
    uVar7 = 0;
    uVar8 = 0;
    if ((ulong)puVar6[6] != 0) {
      uVar8 = *(undefined4 *)((long)param_4 + (ulong)puVar6[6]);
    }
    if (uVar2 < 0xf) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      uVar7 = 0;
      if ((ulong)puVar6[7] != 0) {
        uVar7 = *(undefined4 *)((long)param_4 + (ulong)puVar6[7]);
      }
      if ((0x10 < uVar2) && ((ulong)puVar6[8] != 0)) {
        uVar5 = (ulong)*(uint *)((long)param_4 + (ulong)puVar6[8]);
      }
    }
  }
  param_1[0xa3] = uVar5;
  param_1[0xa2] = CONCAT44(uVar7,uVar8);
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x15) {
    *(undefined4 *)(param_1 + 0xa4) = 0;
    return;
  }
  uVar5 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[10];
  uVar7 = 0;
  if (uVar5 != 0) {
    uVar7 = *(undefined4 *)((long)param_4 + uVar5);
  }
  *(undefined4 *)(param_1 + 0xa4) = uVar7;
  return;
}


