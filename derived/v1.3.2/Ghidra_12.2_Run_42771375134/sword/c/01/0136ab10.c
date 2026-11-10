/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0136ab10; name: FUN_0136ab10
 */


undefined4 FUN_0136ab10(void)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_02710798;
  lVar3 = *(long *)(lVar5 + 0x1d8);
  if (lVar3 == 0) {
    iVar1 = FUN_01521090(0,4);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    iVar1 = FUN_01521090(lVar3,4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  uVar2 = 4;
  if (iVar1 == 0) {
    lVar3 = *(long *)(lVar5 + 0x1d8);
    if (lVar3 == 0) {
      iVar1 = FUN_01521090(0,3);
    }
    else {
      plVar4 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      iVar1 = FUN_01521090(lVar3,3);
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      lVar3 = *(long *)(lVar5 + 0x1d8);
      if (lVar3 == 0) {
        iVar1 = FUN_01521090(0,2);
      }
      else {
        plVar4 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar4 + 0x10))(plVar4);
        iVar1 = FUN_01521090(lVar3,2);
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = 2;
      }
    }
  }
  return uVar2;
}


