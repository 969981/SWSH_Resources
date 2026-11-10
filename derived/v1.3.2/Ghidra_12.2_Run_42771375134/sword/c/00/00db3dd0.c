/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db3dd0; name: FUN_00db3dd0
 */


bool FUN_00db3dd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined4 local_54;
  long local_50;
  undefined1 auStack_48 [8];
  
  lVar3 = *(long *)(param_1 + 0x290);
  if (lVar3 == 0) {
    local_54 = 0xffffffff;
    lVar3 = FUN_00db4870(auStack_48,*(undefined8 *)(param_1 + 8),param_1 + 0x288,&local_54);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    local_50 = lVar3;
    FUN_006d9640(param_1,&local_50);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    *(long *)(param_1 + 0x290) = lVar3;
  }
  FUN_00db4990(lVar3,param_2,param_3,param_4);
  FUN_012c4020(*(undefined8 *)(param_1 + 0x290),param_5);
  lVar3 = *(long *)(*(long *)(param_1 + 0x290) + 0x80);
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    plVar2 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    bVar1 = *(int *)(lVar3 + 0x54) != 0;
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  return bVar1;
}


