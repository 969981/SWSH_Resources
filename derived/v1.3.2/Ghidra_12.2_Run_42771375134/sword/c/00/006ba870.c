/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006ba870; name: FUN_006ba870
 */


void FUN_006ba870(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  
  for (plVar1 = *(long **)(param_1 + 0x30); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_006bbf00(plVar1[6],param_2,param_3,param_4);
  }
  for (plVar1 = *(long **)(param_1 + 0x88); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_006bbf00(plVar1[6],param_2,param_3,param_4);
  }
  return;
}


