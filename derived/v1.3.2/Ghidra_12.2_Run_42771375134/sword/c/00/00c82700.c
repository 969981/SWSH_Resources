/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c82700; name: FUN_00c82700
 */


void FUN_00c82700(long param_1)

{
  long lVar1;
  long *plVar2;
  
  if (*(ulong *)(*(long *)(param_1 + 0x30) + 0x48) <= (ulong)(long)*(int *)(param_1 + 0x50)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar2 = (long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x40) +
                    (long)*(int *)(param_1 + 0x50) * 0x10 + 8);
  lVar1 = *plVar2;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    *plVar2 = 0;
  }
  return;
}


