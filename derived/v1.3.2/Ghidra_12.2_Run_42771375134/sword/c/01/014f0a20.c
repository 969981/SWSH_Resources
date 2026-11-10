/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014f0a20; name: FUN_014f0a20
 */


void FUN_014f0a20(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = *param_3;
  lVar2 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x2e8);
  if (lVar2 == 0) {
    FUN_0077eb10(uVar1,param_4,0);
    lVar2 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x2e0);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0077eb10(uVar1,param_4,lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar2 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x2e0);
  }
  if (lVar2 == 0) {
    FUN_014ca220(0,param_5,param_6,3,0,1);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_014ca220(lVar2,param_5,param_6,3,0,1);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  FUN_0167cce0(*(undefined8 *)(param_1 + 0x1b0),param_2,10);
  return;
}


