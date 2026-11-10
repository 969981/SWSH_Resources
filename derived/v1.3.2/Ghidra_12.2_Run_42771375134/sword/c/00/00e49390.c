/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e49390; name: FUN_00e49390
 */


void FUN_00e49390(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if (*(long **)(lVar1 + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(lVar1 + 0x68) + 0x50))();
  }
  if (*(long **)(lVar1 + 0x70) != (long *)0x0) {
    (**(code **)(**(long **)(lVar1 + 0x70) + 0x50))();
  }
  if (*(long **)(lVar1 + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(lVar1 + 0x78) + 0x50))();
  }
  if (*(long **)(lVar1 + 0x80) != (long *)0x0) {
    (**(code **)(**(long **)(lVar1 + 0x80) + 0x50))();
  }
  if (*(long **)(lVar1 + 0x88) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00e49408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 0x88) + 0x50))();
  return;
}


