/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d09d80; name: FUN_00d09d80
 */


void FUN_00d09d80(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long local_48;
  long local_40 [2];
  
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar1 = (long *)(**(code **)*puVar3)(puVar3);
  lVar2 = FUN_00cf3e00();
  for (; plVar1 != (long *)lVar2; plVar1 = (long *)*plVar1) {
  }
  lVar2 = puVar3[0xb];
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar2 + 0x60);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  lVar2 = *(long *)(*(long *)(param_1 + 0x88) + 0x2b0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar2 + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  FUN_01036e20(*(undefined8 *)(param_1 + 0x88));
  local_40[1] = 0x5d226075f73f5fe9;
  FUN_0077eb10(lVar4,local_40 + 1,lVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x88);
  local_40[0] = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN_01036db0(uVar6,0,0,local_40);
  if (local_40[0] != 0) {
    (**(code **)(*(long *)(local_40[0] + 0x48) + 0x18))();
    local_40[0] = 0;
  }
  local_40[1] = 0x5d225d75f73f5ad0;
  FUN_0077eb10(lVar4,local_40 + 1,lVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x88);
  local_48 = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN_01036db0(uVar6,1,1,&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


