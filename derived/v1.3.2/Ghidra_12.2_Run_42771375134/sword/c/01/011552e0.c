/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011552e0; name: FUN_011552e0
 */


void FUN_011552e0(undefined4 *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  param_1[0xc] = 0xffffffff;
  *(undefined8 *)(param_1 + 6) = 0xffffffff;
  *(undefined8 *)(param_1 + 8) = 0x100000000;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x4a) = 0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  plVar1 = *(long **)(param_1 + 0x1c);
  *(undefined8 *)(param_1 + 0x1c) = 0;
  if ((long *)(param_1 + 0x14) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_01155344:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_01155344;
  }
  plVar1 = *(long **)(param_1 + 0x3c);
  param_1[0x20] = 999;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  if ((long *)(param_1 + 0x34) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_0115537c:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_0115537c;
  }
  plVar1 = *(long **)(param_1 + 0x48);
  param_1[0x21] = 999;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if ((long *)(param_1 + 0x40) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_011553b0:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_011553b0;
  }
  plVar1 = *(long **)(param_1 + 0x54);
  param_1[0x22] = 999;
  *(undefined8 *)(param_1 + 0x54) = 0;
  if ((long *)(param_1 + 0x4c) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_011553e4:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_011553e4;
  }
  plVar1 = *(long **)(param_1 + 0x60);
  param_1[0x23] = 999;
  *(undefined8 *)(param_1 + 0x60) = 0;
  if ((long *)(param_1 + 0x58) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_01155418:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_01155418;
  }
  plVar1 = *(long **)(param_1 + 0x6c);
  param_1[0x24] = 999;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  if ((long *)(param_1 + 100) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_01155450;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_01155450:
  plVar1 = *(long **)(param_1 + 0x78);
  param_1[0x25] = 999;
  *(undefined8 *)(param_1 + 0x78) = 0;
  if ((long *)(param_1 + 0x70) == plVar1) {
                    /* WARNING: Could not recover jumptable at 0x01155490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))();
    return;
  }
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0115547c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))();
  return;
}


