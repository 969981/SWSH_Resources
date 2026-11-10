/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c2f250; name: FUN_00c2f250
 */


uint FUN_00c2f250(void)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long local_150;
  char local_148 [12];
  undefined1 auStack_13c [276];
  long local_28;
  
  plVar5 = (long *)FUN_00c2cb20();
  uVar4 = 0;
  if (plVar5 != (long *)0x0) {
    iVar3 = (**(code **)(*plVar5 + 0x40))(plVar5);
    if ((iVar3 == 3) || (FUN_00bd9eb0(&local_28,plVar5), local_28 == 0)) {
      uVar4 = 0;
    }
    else {
      FUN_00bdaa80(local_148,plVar5);
      if (local_148[0] == '\0') {
        uVar4 = 0;
        lVar1 = local_150;
      }
      else {
        uVar2 = FUN_00bd9ee0(plVar5);
        local_150 = local_28;
        if (local_28 != 0) {
          (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
        }
        uVar4 = FUN_012aedc0(&local_150,uVar2,auStack_13c);
        lVar1 = 0;
        if (local_150 != 0) {
          (**(code **)(*(long *)(local_150 + 0x48) + 0x18))();
          local_150 = 0;
          lVar1 = local_150;
        }
      }
      local_150 = lVar1;
      local_148[0] = '\0';
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      }
    }
  }
  return uVar4 & 1;
}


