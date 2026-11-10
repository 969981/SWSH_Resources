/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fa360; name: FUN_004fa360
 */


void FUN_004fa360(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_004ffc90();
  FUN_004fe580(param_1 + 0x54);
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  uVar1 = *(undefined4 *)PTR_DAT_027137c8;
  (**(code **)*param_1)(param_1);
  FUN_00404870(uVar1,param_1);
  return;
}


