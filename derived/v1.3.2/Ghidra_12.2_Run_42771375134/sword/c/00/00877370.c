/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00877370; name: FUN_00877370
 */


uint FUN_00877370(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 ^ 0x10000000;
  if (0xf < (param_1 & 0xfff0 ^ param_1 >> 0x10 ^ param_2 >> 0x10 ^ param_2 & 0xfff0)) {
    uVar1 = param_2;
  }
  return uVar1;
}


