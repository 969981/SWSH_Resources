/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00428a30; name: FUN_00428a30
 */


void FUN_00428a30(uint *param_1)

{
  if (*(void **)(param_1 + 2) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    memset(*(void **)(param_1 + 2),0,(ulong)*param_1 << 2);
  }
  return;
}


