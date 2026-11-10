/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0141cc10; name: FUN_0141cc10
 */


bool FUN_0141cc10(void)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
  bVar1 = false;
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar2 = FUN_00888c50(0x95,0xe);
    iVar3 = FUN_01520330(lVar4,uVar2);
    bVar1 = iVar3 != 0;
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  return bVar1;
}


