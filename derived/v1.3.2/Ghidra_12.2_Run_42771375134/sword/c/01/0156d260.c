/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0156d260; name: FUN_0156d260
 */


long FUN_0156d260(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_2;
  if (lVar1 == 0xe66c5c29c46135c) {
    lVar1 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar1 == 0) {
      lVar1 = FUN_0100be30(0);
      return lVar1;
    }
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = FUN_0100be30(lVar1);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  return lVar1;
}


