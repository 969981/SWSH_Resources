/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00877350; name: FUN_00877350
 */


bool FUN_00877350(uint param_1,uint param_2)

{
  return (param_1 & 0xfff0 ^ param_1 >> 0x10 ^ param_2 >> 0x10 ^ param_2 & 0xfff0) < 0x10;
}


