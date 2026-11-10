/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c05270; name: FUN_00c05270
 */


void FUN_00c05270(long param_1)

{
  long *plVar1;
  code *pcVar2;
  
  plVar1 = *(long **)(param_1 + 0x1f0);
  if ((long *)(param_1 + 0x1d0) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_00c052a8:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_00c052a8;
  }
  plVar1 = *(long **)(param_1 + 0x1c0);
  if ((long *)(param_1 + 0x1a0) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_00c052d4:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_00c052d4;
  }
  plVar1 = *(long **)(param_1 + 400);
  if ((long *)(param_1 + 0x170) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_00c05300:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_00c05300;
  }
  plVar1 = *(long **)(param_1 + 0x160);
  if ((long *)(param_1 + 0x140) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_00c0532c:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_00c0532c;
  }
  plVar1 = *(long **)(param_1 + 0x130);
  if ((long *)(param_1 + 0x110) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_00c05358:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_00c05358;
  }
  plVar1 = *(long **)(param_1 + 0x100);
  if ((long *)(param_1 + 0xe0) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00c05388;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00c05388:
  if (*(long *)(param_1 + 0xd0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xd0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (*(long *)(param_1 + 200) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 200) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 200) = 0;
  }
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
  plVar1 = *(long **)(param_1 + 0x80);
  if ((long *)(param_1 + 0x60) == plVar1) {
                    /* WARNING: Could not recover jumptable at 0x00c05450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))();
    return;
  }
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c0543c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))();
  return;
}


