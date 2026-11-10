/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003aa5c0; name: FUN_003aa5c0
 */


void FUN_003aa5c0(long *param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  
  iVar1 = (int)param_1[0x54];
  if (iVar1 != 0) {
    plVar3 = *(long **)(param_1[0x53] + (ulong)(iVar1 - 1) * 8);
    while( true ) {
      iVar1 = iVar1 + -1;
      if (plVar3 != (long *)0x0) {
        (**(code **)*plVar3)(plVar3);
        *(int *)((long)param_1 + 0x284) = *(int *)((long)param_1 + 0x284) + -1;
        *plVar3 = param_1[0x52];
        param_1[0x52] = (long)plVar3;
      }
      if (iVar1 == 0) break;
      plVar3 = *(long **)(param_1[0x53] + (ulong)((int)param_1[0x54] - 1) * 8);
    }
  }
  if (param_1[0xb] != 0) {
    uVar2 = (**(code **)(**(long **)(param_1[9] + 0x8a0) + 0x10))
                      (*(long **)(param_1[9] + 0x8a0),param_1[0xb],~param_2 & 1);
    if ((param_2 & 1) == 0) {
      FUN_003a99a0(param_1[10],uVar2);
    }
    *(undefined8 *)param_1[10] = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x003aa690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}


