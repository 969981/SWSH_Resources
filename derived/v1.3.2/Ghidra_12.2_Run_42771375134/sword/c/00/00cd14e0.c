/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cd14e0; name: FUN_00cd14e0
 */


void FUN_00cd14e0(long param_1,ulong param_2)

{
  long *plVar1;
  
  if (*(char *)(param_1 + 0x6f1) != '\0') {
    if ((param_2 & 1) == 0) {
      FUN_01038270(param_1,1);
    }
    else {
      FUN_010382c0(param_1,1);
    }
  }
  plVar1 = (long *)(*(long *)(param_1 + 0x5d0) + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00cd1530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 8))(plVar1,0);
  return;
}


