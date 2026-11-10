/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dab430; name: FUN_00dab430
 */


void FUN_00dab430(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0xad70) = param_2 & 1;
  *(undefined1 *)(param_1 + 0x82) = 1;
  return;
}


