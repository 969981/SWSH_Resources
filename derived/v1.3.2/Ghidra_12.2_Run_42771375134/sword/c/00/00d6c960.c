/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d6c960; name: FUN_00d6c960
 */


void FUN_00d6c960(long param_1,long *param_2,long *param_3,byte param_4,byte param_5,byte param_6)

{
  long lVar1;
  undefined8 local_48;
  
  (**(code **)(*param_2 + 0x10))(&local_48,param_2);
  if (*(long *)(param_1 + 0xf8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xf8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  *(undefined8 *)(param_1 + 0xf8) = local_48;
  (**(code **)(*param_3 + 0x10))(&local_48,param_3);
  if (*(long *)(param_1 + 0x100) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x100) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  lVar1 = *(long *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x100) = local_48;
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  *(byte *)(param_1 + 0x11d) = param_4 & 1;
  *(byte *)(param_1 + 0x11e) = param_5 & 1;
  *(byte *)(param_1 + 0x11f) = param_6 & 1;
  FUN_00d6ca70(param_1,param_2,param_3);
  return;
}


