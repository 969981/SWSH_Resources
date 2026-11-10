/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01164c60; name: FUN_01164c60
 */


void FUN_01164c60(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x60) + 0x198);
  if (((lVar2 == 0) || (*(int *)(lVar2 + 0x54) == 0)) ||
     (plVar1 = *(long **)(*(long *)(param_1 + 0x60) + 0x1a0), plVar1 == (long *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01164c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))();
  return;
}


