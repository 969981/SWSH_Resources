/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0120e710; name: FUN_0120e710
 */


long FUN_0120e710(long param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined4 local_38;
  byte local_34;
  
  *(undefined8 *)(param_1 + 0xd8) = 0;
  lVar2 = *(long *)PTR_DAT_027104b0;
  param_1 = param_1 + 0x90;
  if (lVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = (long *)FUN_007b5700(lVar2,uVar3);
      if (plVar1 == (long *)0x0) {
        return param_1;
      }
      local_48 = uVar3;
      local_44 = (**(code **)(*plVar1 + 0x18))();
      local_40 = (**(code **)(*plVar1 + 0x20))(plVar1);
      local_3e = (**(code **)(*plVar1 + 0x28))(plVar1);
      local_3c = (**(code **)(*plVar1 + 0x30))(plVar1);
      local_38 = (**(code **)(*plVar1 + 0x10))(plVar1);
      local_34 = (**(code **)(*plVar1 + 0x38))(plVar1);
      local_34 = local_34 & 1;
      FUN_0120ea20(param_1,&local_48);
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x20);
  }
  return param_1;
}


