/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01196fd0; name: FUN_01196fd0
 */


void FUN_01196fd0(long param_1,byte param_2)

{
  param_2 = param_2 & 1;
  *(byte *)(param_1 + 0x83) = param_2;
  if (*(char *)(param_1 + 0x80) == '\0') {
    *(undefined1 *)(param_1 + 0x81) = 0;
    *(undefined1 *)(param_1 + 0x82) = 1;
    FUN_01195ee0();
    return;
  }
  *(byte *)(param_1 + 0x81) = param_2;
  *(byte *)(param_1 + 0x82) = param_2 ^ 1;
  FUN_01195ee0();
  return;
}


