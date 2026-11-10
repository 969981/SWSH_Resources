/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c6e90; name: FUN_008c6e90
 */


void FUN_008c6e90(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long local_38;
  long local_28;
  
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5e0),0);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5e0),1);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5e0),2);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5e0),3);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5e0),4);
  FUN_00ff86a0(&local_28,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar1 = *(long *)(local_28 + 0x60);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  local_28 = -0x66eac26da4a18e5d;
  FUN_0077eb10(lVar1,&local_28,*(undefined8 *)(param_1 + 0x5d0));
  uVar2 = *(undefined8 *)(param_1 + 0x5e0);
  local_38 = *(long *)(param_1 + 0x5d0);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar2,2,1,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


