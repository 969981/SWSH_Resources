/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a881a0; name: FUN_00a881a0
 */


void FUN_00a881a0(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = *(long *)(param_2 + 0x88);
  if (lVar3 != 0) {
    plVar4 = *(long **)(param_2 + 0x80);
    do {
      lVar2 = *plVar4;
      lVar3 = lVar3 + -1;
      *plVar4 = 0;
      if (lVar2 != 0) {
        FUN_00d6f2e0(lVar2);
        (**(code **)(*(long *)plVar4[1] + 0x18))((long *)plVar4[1],lVar2,plVar4[2],plVar4[3]);
      }
      plVar4 = plVar4 + 4;
    } while (lVar3 != 0);
  }
  if (*(long *)(param_2 + 0x90) != 0) {
    (**(code **)(**(long **)(param_2 + 0x40) + 0x18))
              (*(long **)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x80),
               *(long *)(param_2 + 0x90) << 5,8);
  }
  plVar4 = *(long **)(param_2 + 0x70);
  if ((long *)(param_2 + 0x50) == plVar4) {
    pcVar1 = *(code **)(*plVar4 + 0x20);
LAB_00a8824c:
    (*pcVar1)();
  }
  else if (plVar4 != (long *)0x0) {
    pcVar1 = *(code **)(*plVar4 + 0x28);
    goto LAB_00a8824c;
  }
  plVar4 = *(long **)(param_2 + 0x30);
  if ((long *)(param_2 + 0x10) == plVar4) {
    pcVar1 = *(code **)(*plVar4 + 0x20);
  }
  else {
    if (plVar4 == (long *)0x0) goto LAB_00a8827c;
    pcVar1 = *(code **)(*plVar4 + 0x28);
  }
  (*pcVar1)();
LAB_00a8827c:
                    /* WARNING: Could not recover jumptable at 0x00a882a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_2,param_1[1],param_1[2]);
  return;
}


