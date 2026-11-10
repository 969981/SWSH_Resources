/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004556f0; name: FUN_004556f0
 */


void FUN_004556f0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x100);
  while( true ) {
    if (plVar1 == (long *)0x0) {
      for (plVar1 = *(long **)(param_1 + 0x128);
          (plVar1 != (long *)0x0 && (DAT_01d4bfa0 <= *(float *)(plVar1 + 5)));
          plVar1 = (long *)*plVar1) {
      }
      return;
    }
    if (*(float *)(plVar1 + 5) < DAT_01d4bfa0) break;
    plVar1 = (long *)*plVar1;
  }
  return;
}


