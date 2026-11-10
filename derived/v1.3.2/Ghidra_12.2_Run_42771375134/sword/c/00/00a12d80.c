/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a12d80; name: FUN_00a12d80
 */


void FUN_00a12d80(long param_1)

{
  if (*(char *)(param_1 + 0x5cb) != '\0') {
    FUN_00ffd620(param_1 + 0x100);
    FUN_00ffd430(param_1 + 0x100,&DAT_02154620);
    FUN_010364c0(param_1,3);
    *(undefined1 *)(param_1 + 0x5cb) = 0;
  }
  return;
}


