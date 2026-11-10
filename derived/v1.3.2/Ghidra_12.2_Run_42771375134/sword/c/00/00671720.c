/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00671720; name: FUN_00671720
 */


void FUN_00671720(undefined8 *param_1,long param_2,undefined4 param_3,long param_4,long param_5,
                 undefined4 param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar1 = PTR_DAT_02714600 + 0x10;
  param_1[2] = puVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = puVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar1 = PTR_DAT_02714328 + 0x10;
  *(undefined4 *)(param_1 + 8) = param_6;
  *(undefined4 *)((long)param_1 + 0x44) = param_3;
  param_1[10] = puVar1;
  param_1[0xb] = param_2;
  param_1[0xc] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 1;
  if (param_2 == 0) {
    uVar2 = FUN_005bc6f0();
    param_1[0xb] = uVar2;
  }
  param_1[0x14] = puVar1;
  param_1[0x15] = param_2;
  param_1[0x17] = 0;
  param_1[0x18] = 1;
  param_1[0x16] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  if (param_2 == 0) {
    uVar2 = FUN_005bc6f0();
    param_1[0x15] = uVar2;
  }
  param_1[0x1e] = PTR_DAT_02713f98 + 0x10;
  param_1[0x1f] = param_2;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0x30;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  if (param_2 == 0) {
    uVar2 = FUN_005bc6f0();
    param_1[0x1f] = uVar2;
  }
  param_1[9] = 0;
  iVar4 = *(int *)(param_4 + 0xc);
  if (iVar4 < 5) {
    *(int *)((long)param_1 + 0x1c) = iVar4;
    param_1[4] = param_1 + 9;
    iVar5 = *(int *)(param_5 + 0xc);
    if (iVar5 < 5) goto LAB_00671964;
LAB_00671884:
    uVar8 = (ulong)iVar5;
    if (param_1[0x16] != uVar8) {
      if ((uVar8 < (ulong)param_1[0x17]) ||
         (uVar3 = FUN_005ea2b0(param_1 + 0x14,uVar8,1), (uVar3 & 1) != 0)) {
        param_1[0x16] = uVar8;
        param_1[0x1a] = param_1[0x19];
        param_1[0x1b] = param_1[0x19] + uVar8;
      }
      else {
        param_1[0x16] = 0;
        param_1[0x1a] = 0;
        param_1[0x1b] = 0;
      }
    }
    iVar5 = *(int *)(param_5 + 0xc);
    param_1[7] = param_1[0x19];
    iVar4 = *(int *)((long)param_1 + 0x1c);
    *(int *)((long)param_1 + 0x34) = iVar5;
  }
  else {
    uVar8 = (ulong)iVar4;
    if (param_1[0xc] != uVar8) {
      if ((uVar8 < (ulong)param_1[0xd]) ||
         (uVar3 = FUN_005ea2b0(param_1 + 10,uVar8,1), (uVar3 & 1) != 0)) {
        param_1[0xc] = uVar8;
        param_1[0x10] = param_1[0xf];
        param_1[0x11] = param_1[0xf] + uVar8;
      }
      else {
        param_1[0xc] = 0;
        param_1[0x10] = 0;
        param_1[0x11] = 0;
      }
    }
    iVar4 = *(int *)(param_4 + 0xc);
    *(int *)((long)param_1 + 0x1c) = iVar4;
    param_1[4] = param_1[0xf];
    iVar5 = *(int *)(param_5 + 0xc);
    if (4 < iVar5) goto LAB_00671884;
LAB_00671964:
    *(int *)((long)param_1 + 0x34) = iVar5;
    param_1[7] = (long)param_1 + 0x4c;
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_4 + 8);
  if (0 < iVar4) {
    memcpy((void *)param_1[4],*(void **)(param_4 + 0x10),(long)iVar4);
    iVar5 = *(int *)((long)param_1 + 0x34);
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_5 + 8);
  if (0 < iVar5) {
    memcpy((void *)param_1[7],*(void **)(param_5 + 0x10),(long)iVar5);
  }
  if (param_7 == 0) {
    return;
  }
  uVar8 = *(ulong *)(param_7 + 0x10);
  if (uVar8 == 0) {
    return;
  }
  if (param_1[0x20] != uVar8) {
    if (((ulong)param_1[0x21] <= uVar8) &&
       (uVar3 = FUN_005d04d0(param_1 + 0x1e,uVar8,1), (uVar3 & 1) == 0)) {
      param_1[0x20] = 0;
      param_1[0x24] = 0;
      param_1[0x25] = 0;
      iVar4 = *(int *)(param_7 + 0x10);
      goto joined_r0x00671a10;
    }
    param_1[0x20] = uVar8;
    param_1[0x24] = param_1[0x23];
    param_1[0x25] = param_1[0x23] + uVar8 * 0x30;
  }
  iVar4 = *(int *)(param_7 + 0x10);
joined_r0x00671a10:
  if (0 < iVar4) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      FUN_005c80d0(param_1[0x23] + lVar6,*(long *)(param_7 + 0x28) + lVar6);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x30;
    } while (lVar7 < *(int *)(param_7 + 0x10));
  }
  return;
}


