/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ac860; name: FUN_012ac860
 */


void FUN_012ac860(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)param_1[6];
  *param_1 = (long)(PTR_DAT_02727370 + 0x10);
  param_1[6] = 0;
  if (plVar3 != (long *)0x0) {
    if (plVar3[2] != 0) {
      lVar1 = *plVar3;
      plVar2 = (long *)plVar3[1];
      *(undefined8 *)(*plVar2 + 8) = *(undefined8 *)(lVar1 + 8);
      **(long **)(lVar1 + 8) = *plVar2;
      plVar3[2] = 0;
      while (plVar2 != plVar3) {
        plVar4 = (long *)plVar2[1];
        (**(code **)plVar2[2])();
        FUN_017cd7a0(plVar2);
        plVar2 = plVar4;
      }
    }
    (**(code **)(*(long *)param_1[7] + 0x18))((long *)param_1[7],plVar3,param_1[8],param_1[9]);
  }
  plVar3 = (long *)param_1[2];
  param_1[2] = 0;
  if (plVar3 == (long *)0x0) {
    return;
  }
  if (plVar3[2] != 0) {
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(undefined8 *)(*plVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = *plVar2;
    plVar3[2] = 0;
    while (plVar2 != plVar3) {
      plVar4 = (long *)plVar2[1];
      (**(code **)plVar2[2])();
      FUN_017cd7a0(plVar2);
      plVar2 = plVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x012ac984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar3,param_1[4],param_1[5]);
  return;
}


