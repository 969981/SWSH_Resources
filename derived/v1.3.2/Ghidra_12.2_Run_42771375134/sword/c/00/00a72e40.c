/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a72e40; name: FUN_00a72e40
 */


void FUN_00a72e40(long param_1,undefined4 param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x1e18) + 0x400);
  if (lVar1 == 0) {
    FUN_00dab480(0,param_2);
    return;
  }
  plVar2 = (long *)(lVar1 + 0x48);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  FUN_00dab480(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00a72e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


