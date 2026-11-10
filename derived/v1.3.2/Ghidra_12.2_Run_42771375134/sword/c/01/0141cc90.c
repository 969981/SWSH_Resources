/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0141cc90; name: FUN_0141cc90
 */


bool FUN_0141cc90(void)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x278);
  bVar2 = false;
  if (lVar3 != 0) {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    iVar1 = FUN_0152a8b0(lVar3);
    bVar2 = 0 < iVar1;
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  return bVar2;
}


