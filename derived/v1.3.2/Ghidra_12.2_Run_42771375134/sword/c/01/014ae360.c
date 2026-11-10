/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ae360; name: FUN_014ae360
 */


int FUN_014ae360(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x208);
  if (lVar3 != 0) {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  uVar2 = FUN_01538f80(lVar3);
  iVar1 = 100;
  if ((uVar2 & 0xff) < 8) {
    iVar1 = uVar2 * 5 + 0x14;
  }
  return iVar1;
}


