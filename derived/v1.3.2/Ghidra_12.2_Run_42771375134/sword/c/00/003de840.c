/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003de840; name: FUN_003de840
 */


void FUN_003de840(undefined4 param_1,long param_2,long *param_3)

{
  long *plVar1;
  
  *(undefined4 *)(param_2 + 0x7b8) = param_1;
  FUN_003de1c0();
  FUN_003de560(param_2);
  FUN_0011e980(*(undefined8 *)(param_2 + 0x720));
  *(undefined4 *)(param_2 + 0x1e90) = 1;
  *(long **)(param_2 + 0x1e88) = param_3;
  if (param_3 == (long *)0x0) {
    plVar1 = *(long **)(param_2 + 0x1e80);
  }
  else {
    (**(code **)(*param_3 + 0x20))(param_3);
    plVar1 = *(long **)(*(long *)(param_2 + 0x1e88) + 0x10);
    *(long **)(param_2 + 0x1e80) = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x003de8c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xa0))(plVar1,param_2 + 0x1e70);
  return;
}


