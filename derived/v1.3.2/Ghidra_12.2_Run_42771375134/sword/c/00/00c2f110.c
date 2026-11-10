/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c2f110; name: FUN_00c2f110
 */


uint FUN_00c2f110(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long local_40;
  long local_38;
  long local_28;
  
  plVar5 = (long *)FUN_00c2cb20();
  if (((plVar5 == (long *)0x0) || (iVar2 = (**(code **)(*plVar5 + 0x40))(), iVar2 != 3)) ||
     (FUN_00bd9eb0(&local_28,plVar5), local_28 == 0)) {
    uVar3 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x150) == 0) {
      uVar3 = 0;
    }
    else {
      uVar1 = FUN_00bd9ee0(plVar5);
      local_38 = *(long *)(param_1 + 0x150);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
      }
      uVar3 = FUN_012aedc0(&local_38,uVar1,param_1 + 0x158);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      local_40 = local_28;
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
      }
      uVar4 = FUN_012aedc0(&local_40,uVar1,param_1 + 0x158);
      if (local_40 != 0) {
        (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
        local_40 = 0;
      }
      uVar3 = uVar3 & uVar4;
      if (local_28 == 0) goto LAB_00c2f214;
    }
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
LAB_00c2f214:
  return uVar3 & 1;
}


