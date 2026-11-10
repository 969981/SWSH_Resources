/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cd0e60; name: FUN_00cd0e60
 */


void FUN_00cd0e60(long param_1,long *param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long local_38;
  
  if ((param_3 != -0x340d631b7bddd9bb) && (param_3 != 0)) {
    lVar2 = *(long *)(*param_2 + 0x2e0);
    local_38 = param_3;
    if (lVar2 == 0) {
      FUN_014c84c0(0,0,*param_4);
    }
    else {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_014c84c0(lVar2,0,*param_4);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = *(long *)(*param_2 + 0x2e8);
    if (lVar2 == 0) {
      FUN_0077eb10(uVar1,param_1 + 200,0);
    }
    else {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_0077eb10(uVar1,param_1 + 200,lVar2);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    FUN_0167cce0(*param_2,&local_38,10);
  }
  return;
}


