/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0150a5f0; name: FUN_0150a5f0
 */


long FUN_0150a5f0(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 < 6) {
    uVar1 = param_2;
  }
  return param_1 + (ulong)uVar1 * 0x16 + 0x4a0;
}


