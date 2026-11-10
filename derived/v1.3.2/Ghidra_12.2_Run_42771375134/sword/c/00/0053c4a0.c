/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053c4a0; name: FUN_0053c4a0
 */


void FUN_0053c4a0(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_0053c4a0(param_1,*param_2);
  FUN_0053c4a0(param_1,param_2[1]);
  FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,param_2);
  return;
}


