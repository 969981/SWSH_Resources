/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e24d0; name: FUN_003e24d0
 */


void FUN_003e24d0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long local_28;
  long local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = *(undefined4 *)(param_2 + 0x58);
  uStack_14 = *(undefined4 *)(param_3 + 0x58);
  if (*(uint *)(param_1 + 0x1180) < (*(uint *)(param_1 + 0x1184) & 0x7fffffff)) {
    plVar1 = (long *)(*(long *)(param_1 + 0x1178) + (ulong)*(uint *)(param_1 + 0x1180) * 0x18);
    plVar1[2] = CONCAT44(uStack_14,local_18);
    plVar1[1] = param_3;
    *plVar1 = param_2;
    *(int *)(param_1 + 0x1180) = *(int *)(param_1 + 0x1180) + 1;
    return;
  }
  local_28 = param_2;
  local_20 = param_3;
  FUN_003f75f0(param_1 + 0x1178,&local_28);
  return;
}


