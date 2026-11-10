/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0115f250; name: FUN_0115f250
 */


void FUN_0115f250(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long local_40;
  ulong local_38;
  
  if (param_2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x5d0);
    local_38 = 0xa607141d8e1f;
  }
  else {
    if (param_2 != 1) goto LAB_0115f2f4;
    uVar1 = *(undefined8 *)(param_1 + 0x5d0);
    local_38 = 0xa507141d8c6c;
  }
  local_38 = local_38 | 0x4cd3000000000000;
  lVar2 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2e8);
  if (lVar2 == 0) {
    FUN_0077eb10(uVar1,&local_38,0);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0077eb10(uVar1,&local_38,lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
LAB_0115f2f4:
  uVar1 = FUN_01159370(param_1);
  local_40 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2e8);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
  }
  FUN_016bbe20(uVar1,&local_40);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  return;
}


