/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006bfa60; name: FUN_006bfa60
 */


void FUN_006bfa60(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[5];
  while (plVar1 != (long *)0x0) {
    lVar2 = plVar1[6];
    lVar3 = *plVar1;
    plVar1[6] = 0;
    if (lVar2 != 0) {
      FUN_006bfb40(lVar2);
      (**(code **)(*(long *)plVar1[7] + 0x18))((long *)plVar1[7],lVar2,plVar1[8],plVar1[9]);
    }
    if (plVar1[5] != 0) {
      (**(code **)(*(long *)(plVar1[5] + 0x48) + 0x18))();
      plVar1[5] = 0;
    }
    (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],plVar1,0x50,8);
    plVar1 = (long *)lVar3;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006bfb20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],lVar2,param_1[1] << 3,8);
  return;
}


