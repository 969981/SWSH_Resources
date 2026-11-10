/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015391d0; name: FUN_015391d0
 */


short FUN_015391d0(long param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x27e);
  if (sVar1 == 0) {
    return 0;
  }
  *(short *)(param_1 + 0x27e) = sVar1 + -1;
  return sVar1 + -1;
}


