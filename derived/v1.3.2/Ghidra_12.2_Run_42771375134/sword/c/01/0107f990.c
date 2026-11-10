/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0107f990; name: FUN_0107f990
 */


void FUN_0107f990(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  if (lVar2 == 0) {
    uVar1 = FUN_01524df0(0);
    FUN_00cc1760(uVar1,7);
    FUN_00cc1760(uVar1,10);
    return;
  }
  plVar3 = (long *)(lVar2 + 0x48);
  (**(code **)(*plVar3 + 0x10))(plVar3);
  uVar1 = FUN_01524df0(lVar2);
  FUN_00cc1760(uVar1,7);
  FUN_00cc1760(uVar1,10);
                    /* WARNING: Could not recover jumptable at 0x0107f9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3);
  return;
}


