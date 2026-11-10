/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e78e0; name: FUN_003e78e0
 */


void FUN_003e78e0(undefined8 param_1,long param_2,long param_3,long param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_50;
  long local_48;
  
  lVar2 = *(long *)(param_2 + 0x38);
  while (local_48 = lVar2, lVar2 != 0) {
    while (lVar2 = *(long *)(local_48 + 8), (*(byte *)(local_48 + 0x1b) & 0x60) == 0) {
      uVar1 = *(uint *)(param_3 + 0x210);
      if (uVar1 < (*(uint *)(param_3 + 0x214) & 0x7fffffff)) {
        *(long *)(*(long *)(param_3 + 0x208) + (ulong)uVar1 * 8) = local_48;
        *(uint *)(param_3 + 0x210) = uVar1 + 1;
      }
      else {
        FUN_003f70e0(param_3,&local_48);
      }
      local_50 = *(undefined8 *)(local_48 + 0x40);
      uVar1 = *(uint *)(param_4 + 0x210);
      if (uVar1 < (*(uint *)(param_4 + 0x214) & 0x7fffffff)) {
        *(undefined8 *)(*(long *)(param_4 + 0x208) + (ulong)uVar1 * 8) = local_50;
        *(uint *)(param_4 + 0x210) = uVar1 + 1;
      }
      else {
        FUN_003f72b0(param_4,&local_50);
      }
      local_48 = lVar2;
      if (lVar2 == 0) goto LAB_003e79c0;
    }
  }
LAB_003e79c0:
  local_48 = 0;
  if (*(int *)(param_3 + 0x210) != 0) {
    uVar3 = 0;
    do {
      FUN_003e7a10(param_1,*(undefined8 *)(*(long *)(param_3 + 0x208) + uVar3 * 8),param_5 & 1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_3 + 0x210));
  }
  return;
}


