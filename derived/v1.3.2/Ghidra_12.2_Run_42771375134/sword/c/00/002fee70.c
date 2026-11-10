/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002fee70; name: FUN_002fee70
 */


long * FUN_002fee70(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  
  if (param_2 == 0) {
    plVar1 = (long *)0x0;
  }
  else {
    plVar1 = (long *)(**(code **)*param_1)(param_1,0x80000000,param_2);
  }
  (**(code **)(*plVar1 + 0xa0))(plVar1,param_3,param_4);
  return plVar1;
}


