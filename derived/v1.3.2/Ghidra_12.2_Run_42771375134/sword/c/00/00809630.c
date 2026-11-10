/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00809630; name: FUN_00809630
 */


void FUN_00809630(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_00809630(param_1,*param_2);
  FUN_00809630(param_1,param_2[1]);
  operator_delete(param_2);
  return;
}


