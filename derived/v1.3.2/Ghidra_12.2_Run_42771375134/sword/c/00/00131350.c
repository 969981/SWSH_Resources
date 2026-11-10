/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00131350; name: FUN_00131350
 */


void FUN_00131350(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint *local_28;
  
  lVar2 = *(long *)(param_1 + 0xb0);
  puVar3 = (uint *)(lVar2 + (ulong)param_2 * 0x10 + 8);
  uVar6 = (ulong)param_2;
  if (*puVar3 == 0xffffffff) {
    uVar5 = (ulong)(param_2 >> 5);
    uVar1 = *(uint *)(*(long *)(param_1 + 0x50) + uVar5 * 4);
    uVar4 = 1 << (ulong)(param_2 & 0x1f);
    if ((uVar1 & uVar4) == 0) {
      *(uint *)(*(long *)(param_1 + 0x60) + uVar5 * 4) =
           *(uint *)(*(long *)(param_1 + 0x60) + uVar5 * 4) | uVar4;
    }
    else {
      *(uint *)(*(long *)(param_1 + 0x50) + uVar5 * 4) = uVar1 & (uVar4 ^ 0xffffffff);
    }
    *(undefined1 *)(param_1 + 0x1dd) = 1;
    goto LAB_0013150c;
  }
  local_28 = *(uint **)(*(long *)(param_1 + 0x1e8) + (ulong)(*puVar3 >> 1) * 8);
  uVar1 = local_28[4];
  if (uVar1 == 0) {
LAB_00131438:
    uVar5 = (ulong)(*local_28 >> 5);
    uVar1 = *(uint *)(*(long *)(param_1 + 0x50) + uVar5 * 4);
    uVar4 = 1 << ((ulong)*local_28 & 0x1f);
    if ((uVar1 & uVar4) == 0) {
      *(uint *)(*(long *)(param_1 + 0x60) + uVar5 * 4) =
           *(uint *)(*(long *)(param_1 + 0x60) + uVar5 * 4) | uVar4;
      uVar1 = local_28[8];
    }
    else {
      *(uint *)(*(long *)(param_1 + 0x50) + uVar5 * 4) = uVar1 & (uVar4 ^ 0xffffffff);
      uVar1 = local_28[8];
    }
    if (uVar1 != 0xffffffff) {
      uVar4 = *(int *)(param_1 + 0x200) - 1;
      *(uint *)(param_1 + 0x200) = uVar4;
      *(undefined8 *)(*(long *)(param_1 + 0x1f8) + (ulong)uVar1 * 8) =
           *(undefined8 *)(*(long *)(param_1 + 0x1f8) + (ulong)uVar4 * 8);
      if (uVar1 < uVar4) {
        *(uint *)(*(long *)(*(long *)(param_1 + 0x1f8) + (ulong)uVar1 * 8) + 0x20) = uVar1;
      }
      local_28[8] = 0xffffffff;
    }
  }
  else {
    lVar2 = *(long *)(local_28 + 2);
    uVar5 = 0;
    do {
      uVar4 = (uint)uVar5;
      if (*(uint *)(lVar2 + uVar5 * 4) == param_2) break;
      uVar4 = uVar4 + 1;
      uVar5 = (ulong)uVar4;
    } while (uVar4 < uVar1);
    if (uVar4 != uVar1) {
      local_28[4] = uVar1 - 1;
      *(undefined4 *)(lVar2 + (ulong)uVar4 * 4) = *(undefined4 *)(lVar2 + (ulong)(uVar1 - 1) * 4);
      if (local_28[4] == 0) goto LAB_00131438;
    }
    if (local_28[8] == 0xffffffff) {
      uVar1 = *(uint *)(param_1 + 0x200);
      local_28[8] = uVar1;
      if (uVar1 < (*(uint *)(param_1 + 0x204) & 0x7fffffff)) {
        *(uint **)(*(long *)(param_1 + 0x1f8) + (ulong)uVar1 * 8) = local_28;
        *(uint *)(param_1 + 0x200) = uVar1 + 1;
      }
      else {
        FUN_00134780(param_1 + 0x1f8,&local_28);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x1dd) = 1;
  lVar2 = *(long *)(param_1 + 0xb0);
  puVar3 = (uint *)(lVar2 + uVar6 * 0x10 + 8);
LAB_0013150c:
  *(undefined4 *)(*(long *)(param_1 + 0x98) + uVar6 * 4) = 0xffffffff;
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0xa8) + 8) + uVar6 * 4) = 0;
  *puVar3 = 0xffffffff;
  *(undefined8 *)(lVar2 + uVar6 * 0x10) = 0;
  return;
}


