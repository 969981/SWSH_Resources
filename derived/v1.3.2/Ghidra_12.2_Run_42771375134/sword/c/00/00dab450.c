/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dab450; name: FUN_00dab450
 */


void FUN_00dab450(long param_1,int param_2,byte param_3)

{
  if (param_2 < 5) {
    *(byte *)(param_1 + param_2 + 0xae18) = param_3 & 1;
  }
  if ((param_3 & 1) == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x82) = 1;
  return;
}


