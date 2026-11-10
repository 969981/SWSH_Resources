/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e640f0; name: FUN_00e640f0
 */


bool FUN_00e640f0(long param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x70) + 0x1f8))();
  if ((uVar1 & 1) == 0) {
    return false;
  }
  return *(int *)(param_1 + 0x60) != 1;
}


