/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7df20; name: FUN_00d7df20
 */


void FUN_00d7df20(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long local_50;
  long lStack_48;
  long local_40;
  long local_38;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x208);
  if (lVar2 == 0) {
    uVar1 = FUN_01538ec0(0);
  }
  else {
    plVar4 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar1 = FUN_01538ec0(lVar2);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  FUN_00d70930(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0));
  lVar2 = *(long *)(param_1 + 0x2b0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar2 + 0x2e0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  FUN_014ca220(lVar3,0,uVar1,7,1,1);
  local_40 = -0x2213727191f89fe9;
  local_50 = local_38;
  lStack_48 = 0xe3bf6556fb33c43;
  if (local_38 == 0) {
    FUN_00d7e0c0(param_1,&local_40,&lStack_48,&local_50);
  }
  else {
    plVar4 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_00d7e0c0(param_1,&local_40,&lStack_48,&local_50);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    local_50 = 0;
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


