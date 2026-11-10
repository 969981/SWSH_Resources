/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b8fbb0; name: FUN_00b8fbb0
 */


void FUN_00b8fbb0(long param_1,undefined8 param_2,undefined8 *param_3,long *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long local_58;
  
  local_58 = *param_4;
  if (local_58 == 0) {
    FUN_00b8fae0(param_1,param_2,&local_58,param_5);
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    lVar1 = *param_4;
  }
  else {
    plVar3 = (long *)(local_58 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_00b8fae0(param_1,param_2,&local_58,param_5);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    local_58 = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    lVar1 = *param_4;
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN_0077eb10(lVar1,param_6,*(undefined8 *)(param_1 + 0x78));
  FUN_014c62d0(*(undefined8 *)(param_1 + 0x88),uVar2,*(undefined8 *)(param_1 + 0x78));
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  lVar1 = *param_4;
  if (lVar1 == 0) {
    FUN_0077eb10(0,param_7,*(undefined8 *)(param_1 + 0x78));
    FUN_014c62d0(*(undefined8 *)(param_1 + 0x88),uVar2,*(undefined8 *)(param_1 + 0x78));
  }
  else {
    plVar3 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0077eb10(lVar1,param_7,*(undefined8 *)(param_1 + 0x78));
    FUN_014c62d0(*(undefined8 *)(param_1 + 0x88),uVar2,*(undefined8 *)(param_1 + 0x78));
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  *param_3 = 0;
  *(undefined2 *)((long)param_3 + 0x3c) = 0;
  *(undefined4 *)(param_3 + 7) = 0xffff0001;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = *(undefined8 *)(param_1 + 0x68);
  param_3[1] = *(undefined8 *)(param_1 + 0x70);
  return;
}


