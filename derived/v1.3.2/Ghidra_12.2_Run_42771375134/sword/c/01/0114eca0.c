/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0114eca0; name: FUN_0114eca0
 */


void FUN_0114eca0(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined1 local_2c [4];
  undefined8 local_28;
  
  lVar1 = *(long *)(param_2 + 0x68);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  local_2c[0] = 1;
  FUN_0114eb80(&local_28,lVar1,local_2c);
  *param_1 = local_28;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


