/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b91f0; name: FUN_006b91f0
 */


bool FUN_006b91f0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return false;
  }
  return *(long *)(lVar1 + 0x90) != *(long *)(lVar1 + 0x98);
}


