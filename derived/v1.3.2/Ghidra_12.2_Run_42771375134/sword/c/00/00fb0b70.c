/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb0b70; name: FUN_00fb0b70
 */


void FUN_00fb0b70(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long local_38;
  undefined1 auStack_28 [8];
  
  lVar1 = FUN_014a9340(auStack_28,*(undefined8 *)(param_1 + 400));
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  local_38 = lVar1;
  FUN_006d9640(param_1,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_1 + 0x188);
  *(long *)(param_1 + 0x188) = lVar1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    lVar1 = *(long *)(param_1 + 0x188);
  }
  FUN_007947e0(lVar1,1);
  FUN_00794790(*(undefined8 *)(param_1 + 0x188),*param_2);
  return;
}


