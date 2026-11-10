/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011625a0; name: FUN_011625a0
 */


void FUN_011625a0(long param_1)

{
  long *plVar1;
  code *pcVar2;
  
  plVar1 = *(long **)(param_1 + 0x1e0);
  if ((long *)(param_1 + 0x1c0) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_011625d8:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_011625d8;
  }
  plVar1 = *(long **)(param_1 + 0x1b0);
  if ((long *)(param_1 + 400) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_01162604:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_01162604;
  }
  plVar1 = *(long **)(param_1 + 0x180);
  if ((long *)(param_1 + 0x160) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_01162630:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_01162630;
  }
  plVar1 = *(long **)(param_1 + 0x150);
  if ((long *)(param_1 + 0x130) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_0116265c:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_0116265c;
  }
  plVar1 = *(long **)(param_1 + 0x120);
  if ((long *)(param_1 + 0x100) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_01162688:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_01162688;
  }
  plVar1 = *(long **)(param_1 + 0xf0);
  if ((long *)(param_1 + 0xd0) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_011626b8;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_011626b8:
  if (*(long *)(param_1 + 0xc0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xc0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xb8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xa8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xa0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x98) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  plVar1 = *(long **)(param_1 + 0x70);
  if ((long *)(param_1 + 0x50) == plVar1) {
                    /* WARNING: Could not recover jumptable at 0x01162780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))();
    return;
  }
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0116276c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))();
  return;
}


