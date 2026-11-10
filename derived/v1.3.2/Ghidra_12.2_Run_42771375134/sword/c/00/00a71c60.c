/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a71c60; name: FUN_00a71c60
 */


void FUN_00a71c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,int param_7,undefined4 param_8,long param_9)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_80 [2];
  undefined8 auStack_70 [2];
  long local_48;
  
  local_80[0] = param_2;
  auStack_70[0] = param_1;
  FUN_00a92a30(param_4,param_9);
  FUN_00a92a40(param_5,param_9);
  if (param_7 == 0) {
    FUN_00a929b0(param_9,auStack_70,local_80);
    FUN_00a92a50(param_3,param_9);
    FUN_00a929e0(0,param_9);
    if (*(int *)(param_9 + 0x28) == 0) {
      FUN_00a71ee0(param_6);
    }
  }
  else {
    plVar3 = *(long **)(param_6 + 0xd8);
    lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar3;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
    lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,0xf0,0x10);
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0xb8))(plVar3);
    }
    FUN_00ab0de0(param_3,lVar2,param_9,auStack_70,local_80,param_7,param_8);
    *(long **)(lVar2 + 8) = plVar3;
    *(long *)(lVar2 + 0x10) = lVar2;
    *(undefined8 *)(lVar2 + 0x18) = 0xf0;
    *(undefined8 *)(lVar2 + 0x20) = 0x10;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    FUN_00a929e0(0,param_9);
    lVar1 = *(long *)(param_6 + 0x530);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    local_48 = lVar2;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    FUN_015f6330(lVar1,&local_48,0x40);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
    }
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    }
  }
  *(undefined2 *)(param_9 + 0xc1) = 0x101;
  return;
}


