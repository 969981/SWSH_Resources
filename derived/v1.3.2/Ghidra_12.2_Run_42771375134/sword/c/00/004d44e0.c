/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d44e0; name: FUN_004d44e0
 */


void FUN_004d44e0(long param_1)

{
  FUN_004d4520();
                    /* WARNING: Subroutine does not return */
  memset(*(void **)(param_1 + 0x88),0,
         (ulong)*(ushort *)(param_1 + 0x98) * (ulong)*(byte *)(param_1 + 0x90) * 4);
}


