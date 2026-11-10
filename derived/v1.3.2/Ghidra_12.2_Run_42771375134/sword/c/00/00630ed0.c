/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00630ed0; name: FUN_00630ed0
 */


void FUN_00630ed0(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1 + 0x3a;
  *param_1 = (long)(PTR_DAT_02714598 + 0x10);
  FUN_006322d0(plVar1);
  param_1[0x5f] = 0;
  FUN_005f33e0(param_1 + 8);
  if ((long *)param_1[7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0x18))();
    param_1[7] = 0;
  }
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 0x18))();
    param_1[6] = 0;
  }
  param_1[0x38] = (long)(PTR_DAT_027145a0 + 0x10);
  FUN_006322d0(plVar1);
  param_1[0x5f] = 0;
  FUN_00631cd0(plVar1);
  FUN_005f1470(param_1 + 8);
  FUN_005bf750(param_1 + 1);
  return;
}


