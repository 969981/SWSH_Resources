/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01524bd0; name: FUN_01524bd0
 */


void FUN_01524bd0(long param_1,char param_2)

{
  *(char *)(param_1 + 0x105) = param_2;
  *(bool *)(param_1 + 0x60) = param_2 == '\x01';
  return;
}


