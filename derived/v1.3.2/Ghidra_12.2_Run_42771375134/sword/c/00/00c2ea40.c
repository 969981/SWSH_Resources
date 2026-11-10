/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c2ea40; name: FUN_00c2ea40
 */


undefined8 FUN_00c2ea40(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  int local_40 [4];
  undefined8 local_28;
  
  lVar3 = *(long *)PTR_DAT_027104b0;
  lVar2 = *(long *)PTR_DAT_027185f8;
  if ((lVar3 != 0 && lVar2 != 0) && *(long *)PTR_DAT_02716710 != 0) {
    plVar1 = (long *)FUN_01962a40();
    if (plVar1 == (long *)0x0) {
      return 0;
    }
    lVar3 = FUN_007b5710(lVar3);
    lVar2 = FUN_0120e640(lVar2);
    if (*(long *)(lVar3 + 0x48) != 2) {
      return 0;
    }
    puVar4 = *(undefined8 **)(lVar3 + 0x40);
    lVar3 = (**(code **)(*plVar1 + 0x38))(plVar1,*puVar4);
    if (*(long *)(lVar3 + 0x40) != lVar2 && *(long *)(lVar3 + 0x40) != 0) {
      local_28 = 0;
      FUN_018c4620(local_40,lVar3,&local_28);
      if (local_40[0] == 0) {
        return 1;
      }
    }
    lVar3 = (**(code **)(*plVar1 + 0x38))(plVar1,puVar4[1]);
    if (*(long *)(lVar3 + 0x40) != lVar2 && *(long *)(lVar3 + 0x40) != 0) {
      local_28 = 0;
      FUN_018c4620(local_40,lVar3,&local_28);
      if (local_40[0] == 0) {
        return 1;
      }
    }
  }
  return 0;
}


