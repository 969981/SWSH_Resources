/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e45b90; name: FUN_00e45b90
 */


void FUN_00e45b90(long *param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_00db5d20(param_1,param_2 & 1);
  uVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
  if ((uVar3 & 1) == 0) {
    if ((param_2 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x1e0);
LAB_00e45c10:
                    /* WARNING: Could not recover jumptable at 0x00e45c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1);
      return;
    }
    plVar1 = (long *)param_1[0x3e];
    plVar2 = (long *)param_1[0x3d];
    do {
      if (plVar2 == plVar1) {
        UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x1d8);
        goto LAB_00e45c10;
      }
      uVar3 = FUN_00e47d30(*plVar2 + 0x50);
      plVar2 = plVar2 + 1;
    } while ((uVar3 & 1) == 0);
  }
  return;
}


