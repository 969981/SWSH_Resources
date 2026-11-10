/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cd580; name: FUN_004cd580
 */


void FUN_004cd580(long param_1)

{
  *(undefined1 *)(param_1 + 0x17c) = 1;
  if (*(void **)(param_1 + 0xb0) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    memset(*(void **)(param_1 + 0xb0),0,(ulong)*(uint *)(param_1 + 0xb8));
  }
  *(undefined1 *)(param_1 + 0x18c) = 1;
  if (*(void **)(param_1 + 0x160) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    memset(*(void **)(param_1 + 0x160),0,(ulong)*(uint *)(param_1 + 0x168));
  }
  return;
}


