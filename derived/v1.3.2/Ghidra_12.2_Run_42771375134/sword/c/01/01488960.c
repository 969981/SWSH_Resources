/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01488960; name: FUN_01488960
 */


void FUN_01488960(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long local_38;
  long local_28;
  
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d8),0);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d8),1);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d8),2);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d8),3);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x5d8),4);
  lVar3 = *(long *)(param_1 + 0x2b0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(lVar3 + 0x2e8);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  FUN_00ff86a0(&local_28,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar3 = *(long *)(local_28 + 0x60);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  local_28 = -0x1cba71469b6888ec;
  FUN_0077eb10(lVar3,&local_28,lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x5d8);
  local_38 = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar2,0,1,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


