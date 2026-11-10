/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd4810; name: FUN_00bd4810
 */


void FUN_00bd4810(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x2b0);
  local_40 = param_3;
  uStack_38 = param_2;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN_00ff86a0(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar2 = *(long *)(local_48 + 0x60);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  lVar3 = *(long *)(lVar1 + 0x2e8);
  if (lVar3 == 0) {
    FUN_0077eb10(lVar2,&uStack_38,0);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0077eb10(lVar2,&uStack_38,lVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  FUN_0167cce0(lVar1,&local_40,10);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


