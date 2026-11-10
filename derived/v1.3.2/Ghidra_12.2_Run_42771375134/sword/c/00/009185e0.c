/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009185e0; name: FUN_009185e0
 */


uint FUN_009185e0(ulong *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1 >> 9 & 0xf;
  if ((*param_1 & 0xf) != 1) {
    uVar1 = 5;
  }
  return uVar1;
}


