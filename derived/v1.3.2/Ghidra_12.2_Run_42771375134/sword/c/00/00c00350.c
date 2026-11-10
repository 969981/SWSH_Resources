/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c00350; name: FUN_00c00350
 */


void FUN_00c00350(long param_1,undefined4 param_2,undefined1 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e0);
  if (lVar2 == 0) {
    FUN_014ca220(0,0,param_2,param_3,1,1);
    lVar2 = *(long *)(param_1 + 0x5f8);
    lVar1 = *(long *)(lVar2 + 0x2e0);
  }
  else {
    plVar4 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_014ca220(lVar2,0,param_2,param_3,1,1);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar2 = *(long *)(param_1 + 0x5f8);
    lVar1 = *(long *)(lVar2 + 0x2e0);
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    lVar2 = *(long *)(param_1 + 0x5f8);
  }
  lVar3 = *(long *)(lVar2 + 0x2f0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    lVar2 = *(long *)(param_1 + 0x5f8);
  }
  lVar2 = *(long *)(lVar2 + 0x2e8);
  plVar4 = (long *)(lVar2 + 0x48);
  if (lVar2 != 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  FUN_014c62d0(lVar1,lVar3,lVar2);
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(plVar4);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c00468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


