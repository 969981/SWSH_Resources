/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b8c6f0; name: FUN_00b8c6f0
 */


void FUN_00b8c6f0(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(ulong *)(param_1 + 0x20) = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffe;
  return;
}


