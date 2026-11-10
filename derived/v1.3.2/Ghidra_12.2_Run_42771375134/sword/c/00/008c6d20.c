/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c6d20; name: FUN_008c6d20
 */


void FUN_008c6d20(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long local_48;
  long local_38;
  
  lVar1 = *(long *)(param_1 + 0x2b0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar1 + 0x2e0);
  if (lVar3 == 0) {
    FUN_014c9c20(0,0,param_2);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_014c9c20(lVar3,0,param_2);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  uVar2 = *(undefined8 *)(PTR_DAT_02717af8 + 8);
  FUN_00ff86a0(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  local_38 = *(long *)(local_48 + 0x60);
  if (local_38 == 0) {
    FUN_008c4b40(param_1,0xbc664d90b65bf5b9,uVar2,&local_38,0);
  }
  else {
    plVar4 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_008c4b40(param_1,0xbc664d90b65bf5b9,uVar2,&local_38,0);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    local_38 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


