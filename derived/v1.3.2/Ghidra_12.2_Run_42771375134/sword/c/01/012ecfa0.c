/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ecfa0; name: FUN_012ecfa0
 */


void FUN_012ecfa0(long param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  
  if (4 < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar1 = 1L << ((long)(int)param_2 & 0x3fU);
  if ((param_3 & 1) == 0) {
    *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) & (uVar1 ^ 0xffffffffffffffff);
    return;
  }
  *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) | uVar1;
  return;
}


