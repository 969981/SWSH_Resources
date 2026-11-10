/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0083f540; name: FUN_0083f540
 */


long FUN_0083f540(long param_1,int param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  plVar1 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar1;
  if (plVar5 != (long *)0x0) {
    plVar4 = plVar1;
    do {
      if (param_2 <= (int)plVar5[4]) {
        plVar4 = plVar5;
      }
      plVar5 = (long *)plVar5[(int)plVar5[4] < param_2];
    } while (plVar5 != (long *)0x0);
    if (((plVar4 != plVar1) && ((int)plVar4[4] <= param_2)) &&
       ((*(byte *)((long)plVar4 + 0x32) & 1) == 0)) {
      if ((*(byte *)((long)plVar4 + 0x32) >> 4 & 1) == 0) {
        return plVar4[5];
      }
      plVar1 = (long *)plVar4[5];
      uVar2 = (**(code **)(*param_4 + 0x10))(param_4,param_3);
                    /* WARNING: Could not recover jumptable at 0x0083f5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar3 = (**(code **)(*plVar1 + 0x18))(plVar1,uVar2);
      return lVar3;
    }
  }
  lVar3 = (**(code **)(*param_4 + 0x10))(param_4,param_3);
  return lVar3;
}


