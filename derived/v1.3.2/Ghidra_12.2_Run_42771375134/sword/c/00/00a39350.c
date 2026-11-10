/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a39350; name: FUN_00a39350
 */


void FUN_00a39350(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  uVar2 = *param_3;
  lVar3 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x2e8);
  if (lVar3 == 0) {
    FUN_0077eb10(uVar2,param_4,0);
    lVar3 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x2e0);
    if (param_7 < 0) goto LAB_00a39428;
LAB_00a393d4:
    if (lVar3 == 0) {
      FUN_014c97b0(0,param_5,param_7);
      goto LAB_00a39488;
    }
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_014c97b0(lVar3,param_5,param_7);
    pcVar1 = *(code **)(*plVar4 + 0x18);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0077eb10(uVar2,param_4,lVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar3 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x2e0);
    if (-1 < param_7) goto LAB_00a393d4;
LAB_00a39428:
    if (lVar3 == 0) {
      FUN_014c9660(0,param_5,param_6);
      goto LAB_00a39488;
    }
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_014c9660(lVar3,param_5,param_6);
    pcVar1 = *(code **)(*plVar4 + 0x18);
  }
  (*pcVar1)(plVar4);
LAB_00a39488:
  FUN_0167cce0(*(undefined8 *)(param_1 + 0x1b0),param_2,10);
  return;
}


