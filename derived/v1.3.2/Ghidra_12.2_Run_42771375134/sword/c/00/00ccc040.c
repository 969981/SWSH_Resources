/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ccc040; name: FUN_00ccc040
 */


void FUN_00ccc040(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long local_48;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x6c8);
  uStack_38 = 0xf8524e49ac310b0f;
  lVar2 = *(long *)(param_1 + 0x2b0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar2 + 0x2e8);
  if (lVar3 == 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    FUN_0077eb10(uVar1,&uStack_38,0);
    uVar1 = *(undefined8 *)(param_1 + 0x5f0);
    lVar2 = *(long *)(param_1 + 0x2b0);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    FUN_0077eb10(uVar1,&uStack_38,lVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    uVar1 = *(undefined8 *)(param_1 + 0x5f0);
    lVar2 = *(long *)(param_1 + 0x2b0);
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_48 = *(long *)(lVar2 + 0x2e8);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  FUN_016bb930(uVar1,0,4,&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


