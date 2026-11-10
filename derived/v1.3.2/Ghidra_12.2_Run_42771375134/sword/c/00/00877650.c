/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00877650; name: FUN_00877650
 */


undefined4 FUN_00877650(ulong param_1,uint param_2)

{
  return *(undefined4 *)(&UNK_02143b84 + (ulong)param_2 * 4 + (param_1 & 0xffffffff) * 0x14);
}


