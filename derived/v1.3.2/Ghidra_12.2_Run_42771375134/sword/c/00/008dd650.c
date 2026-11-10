/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dd650; name: FUN_008dd650
 */


bool FUN_008dd650(uint param_1)

{
  return (param_1 & 0xffff) - 0x12a < 0x10 || (param_1 & 0xffff) == 0x284;
}


