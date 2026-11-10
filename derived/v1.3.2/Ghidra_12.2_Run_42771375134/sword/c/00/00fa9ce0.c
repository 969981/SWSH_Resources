/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa9ce0; name: FUN_00fa9ce0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fa9ce0(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar1 == 0) {
    lVar1 = *(long *)(_DAT_00000060 + 0x630);
  }
  else {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = *(long *)(*(long *)(lVar1 + 0x60) + 0x630);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if (lVar1 == 0) {
    return;
  }
  FUN_016b0910(lVar1);
  return;
}


