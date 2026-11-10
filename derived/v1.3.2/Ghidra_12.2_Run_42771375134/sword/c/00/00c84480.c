/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c84480; name: FUN_00c84480
 */


void FUN_00c84480(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = param_2[9];
  if (lVar3 != 0) {
    plVar4 = (long *)param_2[8];
    do {
      lVar2 = *plVar4;
      lVar3 = lVar3 + -1;
      *plVar4 = 0;
      if (lVar2 != 0) {
        FUN_00c84b40(lVar2);
        (**(code **)(*(long *)plVar4[1] + 0x18))((long *)plVar4[1],lVar2,plVar4[2],plVar4[3]);
      }
      plVar4 = plVar4 + 4;
    } while (lVar3 != 0);
  }
  if (param_2[10] != 0) {
    (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_2[8],param_2[10] << 5,8);
  }
  plVar4 = (long *)param_2[6];
  if (param_2 + 2 == plVar4) {
    pcVar1 = *(code **)(*plVar4 + 0x20);
  }
  else {
    if (plVar4 == (long *)0x0) goto LAB_00c84530;
    pcVar1 = *(code **)(*plVar4 + 0x28);
  }
  (*pcVar1)();
LAB_00c84530:
                    /* WARNING: Could not recover jumptable at 0x00c84554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_2,param_1[1],param_1[2]);
  return;
}


