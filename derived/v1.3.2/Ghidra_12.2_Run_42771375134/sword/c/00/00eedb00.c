/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eedb00; name: FUN_00eedb00
 */


void FUN_00eedb00(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined2 local_98 [4];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  undefined1 auStack_70 [80];
  
  local_98[0] = 0;
  local_90 = *param_3;
  local_88 = param_3[1];
  local_80 = param_3[2];
  local_78 = param_3[3];
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
  }
  FUN_0121cf00(auStack_70);
  FUN_00eed650(param_1,param_2,local_98);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
  }
  return;
}


