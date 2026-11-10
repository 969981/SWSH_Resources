/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c863f0; name: FUN_00c863f0
 */


void FUN_00c863f0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  long local_48;
  long local_38;
  
  (**(code **)(*param_1 + 0x88))();
  if (param_1[0xe] == 0) {
    local_48 = 0;
    lVar2 = param_1[0x1c];
    lVar1 = local_48;
  }
  else {
    FUN_00c62ba0(&local_48);
    lVar2 = param_1[0x1c];
    lVar1 = local_48;
  }
  local_48 = lVar1;
  if (lVar2 == 0) {
    uVar3 = (undefined4)param_1[0xf];
    local_38 = 0;
  }
  else {
    plVar4 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar3 = (undefined4)param_1[0xf];
    local_38 = lVar2;
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  FUN_00ca9590(lVar1,0,&local_38,uVar3);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (param_1[0x1d] != 0) {
    (**(code **)(*(long *)(param_1[0x1d] + 0x48) + 0x18))();
    param_1[0x1d] = 0;
  }
  return;
}


