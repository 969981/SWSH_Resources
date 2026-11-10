/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ea250; name: FUN_003ea250
 */


void FUN_003ea250(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long local_38;
  
  local_38 = param_2;
  FUN_003f7d40(param_1 + 0x8f0,&local_38);
  FUN_003ae360(param_2);
  FUN_003b91d0();
  plVar5 = *(long **)(param_2 + 0x20);
  lVar2 = (**(code **)(*plVar5 + 0x20))(plVar5);
  uVar1 = *(uint *)(lVar2 + 8);
  plVar3 = *(long **)(param_1 + (ulong)uVar1 * 8 + 0x928);
  (**(code **)(*plVar3 + 0x18))(plVar3,plVar5);
  if (uVar1 != 0) {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x948) + 0x28))(*(long **)(param_1 + 0x948),plVar5);
    FUN_003b1b50(param_2,uVar4);
  }
  plVar3 = (long *)FUN_003ae360(param_2);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return;
}


