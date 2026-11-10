/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0063b600; name: FUN_0063b600
 */


void FUN_0063b600(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)(PTR_DAT_02714738 + 0x10);
  if ((long *)param_1[0x7c0] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x7c0] + 0x18))();
    param_1[0x7c0] = 0;
  }
  FUN_00643780(param_1 + 0x6f0);
  FUN_00646bb0(param_1 + 0x58e);
  FUN_0063bb20(param_1);
  puVar1 = PTR_DAT_02714740 + 0x10;
  param_1[0x7d6] = (long)puVar1;
  FUN_00642d30(param_1 + 0x7d6);
  param_1[0x7cc] = (long)puVar1;
  FUN_00642d30(param_1 + 0x7cc);
  param_1[0x7c2] = (long)puVar1;
  FUN_00642d30(param_1 + 0x7c2);
  FUN_00643560(param_1 + 0x6f0);
  FUN_00646af0(param_1 + 0x58e);
  FUN_0065bad0(param_1 + 6);
  FUN_005bf750(param_1 + 1);
  return;
}


