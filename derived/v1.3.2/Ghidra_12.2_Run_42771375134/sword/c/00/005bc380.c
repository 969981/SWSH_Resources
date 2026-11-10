/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005bc380; name: FUN_005bc380
 */


void FUN_005bc380(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_005bc380(param_1,*param_2);
  FUN_005bc380(param_1,param_2[1]);
  FUN_00551380(param_2 + 6);
  FUN_00551380(param_2 + 4);
  FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,param_2);
  return;
}


