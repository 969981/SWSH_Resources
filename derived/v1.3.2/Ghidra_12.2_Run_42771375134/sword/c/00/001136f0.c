/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001136f0; name: FUN_001136f0
 */


void FUN_001136f0(long param_1,undefined4 param_2)

{
  undefined4 local_18 [2];
  
  if (*(uint *)(param_1 + 0x38) < (*(uint *)(param_1 + 0x3c) & 0x7fffffff)) {
    *(undefined4 *)(*(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x38) * 4) = param_2;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    return;
  }
  local_18[0] = param_2;
  FUN_00114650(param_1 + 0x30,local_18);
  return;
}


