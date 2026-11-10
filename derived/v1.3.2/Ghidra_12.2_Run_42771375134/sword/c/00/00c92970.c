/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c92970; name: FUN_00c92970
 */


void FUN_00c92970(long param_1)

{
  if (*(int *)(param_1 + 0x3a4) == 5 || *(int *)(param_1 + 0x3a4) == 0) {
    FUN_00c929c0();
    *(undefined1 *)(param_1 + 0x39c) = 1;
    FUN_00c94080(param_1,1);
    return;
  }
  return;
}


