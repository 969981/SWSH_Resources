/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0102a200; name: FUN_0102a200
 */


void FUN_0102a200(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar1 == 0) {
    FUN_01511210(0,*(undefined8 *)PTR_DAT_02723840,0);
    return;
  }
  plVar2 = (long *)(lVar1 + 0x48);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  FUN_01511210(lVar1,*(undefined8 *)PTR_DAT_02723840,0);
                    /* WARNING: Could not recover jumptable at 0x0102a260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


