/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a72ec0; name: FUN_00a72ec0
 */


void FUN_00a72ec0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x1e18) + 0x400);
  if (*(int *)(param_1 + 0x1f34) != 5) {
    if (lVar1 == 0) {
      FUN_00dab480(0);
      return;
    }
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_00dab480(lVar1,*(undefined4 *)(param_1 + 0x1f34));
                    /* WARNING: Could not recover jumptable at 0x00a72f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2);
    return;
  }
  if (lVar1 == 0) {
    FUN_00dab530(0);
    return;
  }
  plVar2 = (long *)(lVar1 + 0x48);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  FUN_00dab530(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00a72f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


