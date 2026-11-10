/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00931ae0; name: FUN_00931ae0
 */


void FUN_00931ae0(long param_1,undefined2 param_2)

{
  if (*(short *)(param_1 + 0x310) == 0) {
    *(undefined2 *)(param_1 + 0x310) = param_2;
    *(undefined1 *)(param_1 + 0x312) = 1;
    return;
  }
  return;
}


