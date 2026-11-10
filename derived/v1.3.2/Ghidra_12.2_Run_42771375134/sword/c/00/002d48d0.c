/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002d48d0; name: FUN_002d48d0
 */


long FUN_002d48d0(long param_1,long param_2,int param_3)

{
  if ((param_2 != 0) && (0 < param_3)) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
                    /* WARNING: Subroutine does not return */
    memset(*(void **)(param_1 + 0x20),0,0x1000);
  }
  return param_1;
}


