/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00880780; name: FUN_00880780
 */


uint FUN_00880780(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 & 0x7fff) << 1;
  return (3 << (ulong)(uVar1 & 0x1f) & param_1 & 0xffff) >> (ulong)(uVar1 & 0x1f) & 0xffff;
}


