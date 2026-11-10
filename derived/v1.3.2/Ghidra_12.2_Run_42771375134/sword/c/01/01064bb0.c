/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01064bb0; name: FUN_01064bb0
 */


void FUN_01064bb0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined1 *local_c8;
  undefined1 auStack_c0 [104];
  undefined1 local_58;
  long local_38;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_02710848 + 0x88);
  if (lVar2 == 0) {
    uVar1 = FUN_01067470(0);
    FUN_01064d00(auStack_c0,uVar1);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar1 = FUN_01067470(lVar2);
    FUN_01064d00(auStack_c0,uVar1);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  local_58 = 1;
  FUN_010647a0(param_1,param_2,param_3,auStack_c0);
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + 0x140) = 0x51;
  FUN_01052f20(lVar2,0);
  FUN_01052d20(lVar2,0);
  FUN_01052de0(lVar2,2);
  local_38 = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))((long *)(lVar2 + 0x48));
  }
  local_c8 = &DAT_949e9be8ae703f72;
  FUN_00cc0c50(&local_38,&local_c8);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  FUN_01058eb0(auStack_c0);
  return;
}


