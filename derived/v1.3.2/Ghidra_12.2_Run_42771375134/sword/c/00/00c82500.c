/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c82500; name: FUN_00c82500
 */


void FUN_00c82500(long param_1,int param_2,long param_3)

{
  long *plVar1;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 8))) {
    if (*(ulong *)(*(long *)(param_1 + 0x30) + 0x48) <= (ulong)(long)param_2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar1 = (long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x40) + (long)param_2 * 0x10);
    if (*plVar1 == 0) {
      *plVar1 = param_3;
      return;
    }
  }
  return;
}


