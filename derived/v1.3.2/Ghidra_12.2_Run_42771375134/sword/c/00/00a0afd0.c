/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0afd0; name: FUN_00a0afd0
 */


bool FUN_00a0afd0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x180);
  if (lVar1 == 0) {
    return true;
  }
  return *(int *)(lVar1 + 0x54) == 0;
}


