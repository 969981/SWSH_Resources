/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e9a1c0; name: FUN_00e9a1c0
 */


bool FUN_00e9a1c0(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long local_48;
  undefined1 auStack_38 [4];
  undefined4 local_34;
  
  lVar3 = *(long *)(param_2 + 0x368);
  if (lVar3 == 0) {
    local_34 = 0xffffffff;
    lVar3 = FUN_00e62b10(auStack_38,*(undefined8 *)(param_2 + 8),param_2 + 0x358,&local_34);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    local_48 = lVar3;
    FUN_006d9640(param_2,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    *(long *)(param_2 + 0x368) = lVar3;
  }
  FUN_00dc7290(param_1,lVar3,param_3);
  FUN_00dc84d0(*(undefined8 *)(param_2 + 0x368),param_4);
  lVar3 = *(long *)(*(long *)(param_2 + 0x368) + 0x80);
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


