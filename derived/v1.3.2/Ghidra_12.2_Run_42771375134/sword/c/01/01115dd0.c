/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01115dd0; name: FUN_01115dd0
 */


void FUN_01115dd0(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if (*(char *)(param_1 + 0xc) != '\x03') {
    return;
  }
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x208);
  if (lVar2 == 0) {
    iVar1 = FUN_015390b0(0);
    FUN_015390c0(0,*(int *)(param_1 + 0x88) + iVar1);
    return;
  }
  plVar3 = (long *)(lVar2 + 0x48);
  (**(code **)(*plVar3 + 0x10))(plVar3);
  iVar1 = FUN_015390b0(lVar2);
  FUN_015390c0(lVar2,*(int *)(param_1 + 0x88) + iVar1);
                    /* WARNING: Could not recover jumptable at 0x01115e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3);
  return;
}


