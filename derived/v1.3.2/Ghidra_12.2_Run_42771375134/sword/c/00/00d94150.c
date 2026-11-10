/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d94150; name: FUN_00d94150
 */


void FUN_00d94150(long param_1,ulong param_2,undefined4 param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + (param_2 & 0xffffffff) * 8 + 0x50);
  plVar1 = (long *)*plVar3;
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x30))();
    if ((uVar2 & 1) != 0) {
      plVar3 = (long *)*plVar3;
                    /* WARNING: Could not recover jumptable at 0x00d94194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x58))(plVar3,param_3);
      return;
    }
  }
  return;
}


