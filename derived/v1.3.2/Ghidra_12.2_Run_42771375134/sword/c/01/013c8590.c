/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013c8590; name: FUN_013c8590
 */


void FUN_013c8590(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  
  (**(code **)(**(long **)(param_1 + 0x90) + 0x48))();
  plVar2 = (long *)*param_2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(plVar2[9] + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x90);
  *(long **)(param_1 + 0x90) = plVar2;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    plVar2 = *(long **)(param_1 + 0x90);
  }
                    /* WARNING: Could not recover jumptable at 0x013c8600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}


