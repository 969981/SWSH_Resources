/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00beba00; name: FUN_00beba00
 */


void FUN_00beba00(undefined4 *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 6) = 0xffffffff0000000a;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[10] = 1;
  param_1[0xe] = 0xffffffff;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 0x52) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0x101;
  plVar1 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if ((long *)(param_1 + 0x18) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_00beba70:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_00beba70;
  }
  plVar1 = *(long **)(param_1 + 0x40);
  param_1[0x24] = 999;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if ((long *)(param_1 + 0x38) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_00bebaa8:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_00bebaa8;
  }
  plVar1 = *(long **)(param_1 + 0x4c);
  param_1[0x25] = 999;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  if ((long *)(param_1 + 0x44) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_00bebadc:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_00bebadc;
  }
  plVar1 = *(long **)(param_1 + 0x58);
  param_1[0x26] = 999;
  *(undefined8 *)(param_1 + 0x58) = 0;
  if ((long *)(param_1 + 0x50) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_00bebb10:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_00bebb10;
  }
  plVar1 = *(long **)(param_1 + 100);
  param_1[0x27] = 999;
  *(undefined8 *)(param_1 + 100) = 0;
  if ((long *)(param_1 + 0x5c) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_00bebb44:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_00bebb44;
  }
  plVar1 = *(long **)(param_1 + 0x70);
  param_1[0x28] = 999;
  *(undefined8 *)(param_1 + 0x70) = 0;
  if ((long *)(param_1 + 0x68) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00bebb7c;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00bebb7c:
  plVar1 = *(long **)(param_1 + 0x7c);
  param_1[0x29] = 999;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  if ((long *)(param_1 + 0x74) == plVar1) {
                    /* WARNING: Could not recover jumptable at 0x00bebbbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))();
    return;
  }
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00bebba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))();
  return;
}


