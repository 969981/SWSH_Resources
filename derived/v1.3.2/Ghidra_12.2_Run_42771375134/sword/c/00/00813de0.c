/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00813de0; name: FUN_00813de0
 */


undefined8 FUN_00813de0(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
  if (*(int *)(param_1 + 0x40) == 3) {
    (**(code **)(*plVar2 + 0x30))(plVar2,param_2,param_1);
    iVar1 = *(int *)(param_1 + 0x3c);
  }
  else {
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2,param_1);
    iVar1 = *(int *)(param_1 + 0x3c);
  }
  if (iVar1 - 1U < 0x12) {
                    /* WARNING: Could not recover jumptable at 0x00813e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(&DAT_02140920 + *(int *)(&DAT_02140920 + (ulong)(iVar1 - 1U) * 4)))();
    return uVar3;
  }
  return 0;
}


