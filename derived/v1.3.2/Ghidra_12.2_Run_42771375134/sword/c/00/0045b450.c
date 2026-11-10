/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045b450; name: FUN_0045b450
 */


long * FUN_0045b450(long *param_1,long *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  
  if (param_2 != param_1) {
    plVar4 = (long *)*param_2;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    plVar2 = (long *)*param_1;
    *param_1 = (long)plVar4;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))();
    }
    plVar4 = (long *)param_2[1];
    if (plVar4 == (long *)0x0) {
      lVar3 = 0;
    }
    else {
      pcVar5 = *(code **)(*plVar4 + 0x20);
      uVar1 = FUN_00493760(*param_1);
      lVar3 = (*pcVar5)(plVar4,uVar1);
    }
    param_1[1] = lVar3;
    *(undefined1 *)((long)param_1 + 0x12) = *(undefined1 *)((long)param_2 + 0x12);
    *(short *)(param_1 + 2) = (short)param_2[2];
    plVar4 = (long *)param_2[3];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    plVar2 = (long *)param_1[3];
    param_1[3] = (long)plVar4;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))();
    }
    param_1[4] = param_2[4];
  }
  return param_1;
}


