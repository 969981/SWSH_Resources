/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009f4fe0; name: FUN_009f4fe0
 */


void FUN_009f4fe0(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long local_50;
  undefined8 local_48;
  
  lVar5 = *param_1;
  local_48 = param_2;
  FUN_00ff86a0(&local_50,*(undefined8 *)(*(long *)(lVar5 + 0x60) + 0xb0),0);
  lVar1 = *(long *)(local_50 + 0x60);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  lVar3 = *(long *)(lVar5 + 0x2b0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar3 + 0x2e8);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  lVar3 = *(long *)(lVar5 + 0x2b0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar3 + 0x2e0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  FUN_0077eb10(lVar1,&local_48,lVar2);
  lVar5 = *(long *)(lVar5 + 0x2b0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar5 + 0x2f0);
  if (lVar3 == 0) {
    FUN_014c62d0(lVar4,0,lVar2);
  }
  else {
    plVar6 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_014c62d0(lVar4,lVar3,lVar2);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


