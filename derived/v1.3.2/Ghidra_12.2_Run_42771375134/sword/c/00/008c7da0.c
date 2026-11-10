/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c7da0; name: FUN_008c7da0
 */


void FUN_008c7da0(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long local_58;
  long local_48;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x208);
  if (lVar2 == 0) {
    uVar1 = FUN_01538ec0(0);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar1 = FUN_01538ec0(lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
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
  lVar5 = *(long *)(param_1 + 0x2b0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar5 + 0x2e0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  FUN_014ca220(lVar4,0,uVar1,7,1,1);
  local_58 = lVar2;
  if (lVar2 == 0) {
    FUN_008c4b40(param_1,0x79a008fbf0ed4bb0,0xe3bf5556fb33a90,&local_58,0);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_008c4b40(param_1,0x79a008fbf0ed4bb0,0xe3bf5556fb33a90,&local_58,0);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    local_58 = 0;
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}


