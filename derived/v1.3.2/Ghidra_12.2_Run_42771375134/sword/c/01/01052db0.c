/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01052db0; name: FUN_01052db0
 */


bool FUN_01052db0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x148) + 0x188);
  if (lVar1 == 0) {
    return false;
  }
  return *(int *)(lVar1 + 0x78) == -1;
}


