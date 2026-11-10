/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a7f60; name: FUN_004a7f60
 */


void FUN_004a7f60(undefined4 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined1 auVar1 [12];
  
  if (*(long *)(param_1 + 4) == 0) {
    auVar1 = FUN_00448fc0(*(undefined8 *)PTR_DAT_02712ae0,*param_1,param_4);
    *param_3 = auVar1._8_4_;
    *param_2 = auVar1._0_8_;
    return;
  }
  *param_3 = param_1[2];
  *param_2 = *(undefined8 *)(param_1 + 4);
  return;
}


