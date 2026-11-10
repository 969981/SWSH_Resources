/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff01a0; name: FUN_00ff01a0
 */


void FUN_00ff01a0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_48;
  
  lVar1 = *(long *)(param_1 + 0x2b0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN_00ff86a0(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),
               *(undefined4 *)(param_1 + 0x5cc));
  lVar2 = *(long *)(local_48 + 0x60);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar1 + 0x2e0);
  if (lVar4 == 0) {
    FUN_014c9030(0,1,lVar3);
    lVar4 = *(long *)(lVar1 + 0x2e8);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_014c9030(lVar4,1,lVar3);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar4 = *(long *)(lVar1 + 0x2e8);
  }
  if (lVar4 == 0) {
    FUN_0077eb10(lVar2,param_1 + 0x5d0,0);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0077eb10(lVar2,param_1 + 0x5d0,lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  local_48 = -0x7047ea5b1a3f80b5;
  FUN_0167cce0(lVar1,&local_48,10);
  FUN_010364c0(param_1,2);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


