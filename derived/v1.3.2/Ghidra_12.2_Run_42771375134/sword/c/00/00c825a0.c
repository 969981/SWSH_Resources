/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c825a0; name: FUN_00c825a0
 */


void FUN_00c825a0(long *param_1,long param_2)

{
  long lVar1;
  
  if (*(ulong *)(*(long *)(param_2 + 0x30) + 0x48) <= (ulong)(long)*(int *)(param_2 + 0x50)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar1 = *(long *)(*(long *)(*(long *)(param_2 + 0x30) + 0x40) +
                    (long)*(int *)(param_2 + 0x50) * 0x10 + 8);
  *param_1 = lVar1;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c825d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  return;
}


