/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c0940; name: FUN_008c0940
 */


void FUN_008c0940(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(*(long *)PTR_DAT_02710798 + 0x208);
  if (lVar1 == 0) {
    FUN_01538ef0(0,*(int *)(param_1 + 0x640) * *(int *)(param_1 + 0x648));
    return;
  }
  plVar2 = (long *)(lVar1 + 0x48);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  FUN_01538ef0(lVar1,*(int *)(param_1 + 0x640) * *(int *)(param_1 + 0x648));
                    /* WARNING: Could not recover jumptable at 0x008c09a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


