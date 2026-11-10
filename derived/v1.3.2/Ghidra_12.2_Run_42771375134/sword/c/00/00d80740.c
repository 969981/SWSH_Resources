/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d80740; name: FUN_00d80740
 */


void FUN_00d80740(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 long *param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_58;
  
  uVar2 = *param_4;
  lVar1 = *(long *)(param_1 + 0x2b0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar1 + 0x2e8);
  if (lVar3 == 0) {
    FUN_0077eb10(uVar2,param_2,0);
  }
  else {
    plVar5 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0077eb10(uVar2,param_2,lVar3);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  lVar1 = *(long *)(param_1 + 0x2b0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar1 + 0x2e0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  lVar1 = *(long *)(param_1 + 0x2b0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar1 + 0x2e8);
  plVar5 = (long *)(lVar4 + 0x48);
  if (lVar4 != 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  FUN_014c7a10(lVar3,0,lVar4,0,0);
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(plVar5);
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  local_58 = *param_5;
  if (local_58 == 0) {
    FUN_00d7e0c0(param_1,param_3,param_6,&local_58);
  }
  else {
    plVar5 = (long *)(local_58 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_00d7e0c0(param_1,param_3,param_6,&local_58);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    local_58 = 0;
  }
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d80904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


