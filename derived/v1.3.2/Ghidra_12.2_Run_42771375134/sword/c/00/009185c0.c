/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009185c0; name: FUN_009185c0
 */


uint FUN_009185c0(ulong *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1 >> 0xd & 0xffff;
  if ((*param_1 & 0xf) != 1) {
    uVar1 = 0;
  }
  return uVar1;
}


