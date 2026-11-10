/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002f62a0; name: FUN_002f62a0
 */


void FUN_002f62a0(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 local_18;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (uVar1 < (*(uint *)(param_1 + 0x8c) & 0x7fffffff)) {
    *(undefined8 *)(*(long *)(param_1 + 0x80) + (ulong)uVar1 * 8) = param_2;
    *(uint *)(param_1 + 0x88) = uVar1 + 1;
    return;
  }
  local_18 = param_2;
  FUN_002f6de0(param_1 + 0x80,&local_18);
  return;
}


