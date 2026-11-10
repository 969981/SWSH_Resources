/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014881d0; name: FUN_014881d0
 */


void FUN_014881d0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long local_40;
  long local_38;
  
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d8),0);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d8),1);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d8),2);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d8),3);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d8),4);
  lVar2 = *(long *)(param_1 + 0x2b0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(lVar2 + 0x2e8);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  FUN_00ff86a0(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar2 = *(long *)(local_38 + 0x60);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  local_38 = -0x1cba71469b6888ec;
  FUN_0077eb10(lVar2,&local_38,lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x5d8);
  local_40 = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar3,0,1,&local_40);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x5d8),1);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


