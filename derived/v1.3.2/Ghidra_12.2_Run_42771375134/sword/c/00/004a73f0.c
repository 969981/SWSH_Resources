/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a73f0; name: FUN_004a73f0
 */


void FUN_004a73f0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(*(long *)(param_1 + 0x70) + 0x10); lVar1 != 0;
      lVar1 = *(long *)(lVar1 + 0x48)) {
    FUN_0048bf10(lVar1 + -0x18,param_2);
  }
  return;
}


