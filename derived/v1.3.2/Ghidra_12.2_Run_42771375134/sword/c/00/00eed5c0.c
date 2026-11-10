/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eed5c0; name: FUN_00eed5c0
 */


void FUN_00eed5c0(undefined8 param_1,undefined8 param_2)

{
  undefined2 local_98 [4];
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  long local_78;
  undefined1 auStack_70 [80];
  
  local_98[0] = 0x100;
  local_90 = 0xcbf29ce484222645;
  puStack_88 = &DAT_01d38550;
  local_80 = 0;
  local_78 = 0;
  FUN_0121cf00(auStack_70);
  FUN_00eed650(param_1,param_2,local_98);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
  }
  return;
}


