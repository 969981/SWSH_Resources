/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eced50; name: FUN_00eced50
 */


bool FUN_00eced50(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x208);
  if (lVar2 == 0) {
    iVar1 = FUN_01539170(0);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    iVar1 = FUN_01539170(lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  return iVar1 != 0;
}


