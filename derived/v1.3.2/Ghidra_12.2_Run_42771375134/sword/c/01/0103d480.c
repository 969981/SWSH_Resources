/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103d480; name: FUN_0103d480
 */


void FUN_0103d480(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  iVar1 = FUN_0103c3b0(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x58));
  if (iVar1 == -1) {
    return;
  }
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x208);
  if (lVar2 == 0) {
    FUN_01539370(0,iVar1,param_2 & 1);
    return;
  }
  plVar3 = (long *)(lVar2 + 0x48);
  (**(code **)(*plVar3 + 0x10))(plVar3);
  FUN_01539370(lVar2,iVar1,param_2 & 1);
                    /* WARNING: Could not recover jumptable at 0x0103d4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3);
  return;
}


