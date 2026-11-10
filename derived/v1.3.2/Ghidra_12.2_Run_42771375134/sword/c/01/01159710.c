/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01159710; name: FUN_01159710
 */


void FUN_01159710(long param_1)

{
  long *plVar1;
  code *pcVar2;
  
  FUN_016bbeb0(*(undefined8 *)(param_1 + 0x700));
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x700),0);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x700),1);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x700),2);
  FUN_016bbde0(*(undefined8 *)(param_1 + 0x700),3);
  plVar1 = *(long **)(param_1 + 0x630);
  *(undefined8 *)(param_1 + 0x630) = 0;
  if ((long *)(param_1 + 0x610) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_01159784:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_01159784;
  }
  plVar1 = *(long **)(param_1 + 0x670);
  *(undefined8 *)(param_1 + 0x670) = 0;
  if ((long *)(param_1 + 0x650) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_011597b4:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_011597b4;
  }
  plVar1 = *(long **)(param_1 + 0x6b0);
  *(undefined8 *)(param_1 + 0x6b0) = 0;
  if ((long *)(param_1 + 0x690) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_011597e8;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_011597e8:
  plVar1 = *(long **)(param_1 + 0x6f0);
  *(undefined8 *)(param_1 + 0x6f0) = 0;
  if ((long *)(param_1 + 0x6d0) == plVar1) {
                    /* WARNING: Could not recover jumptable at 0x01159824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))();
    return;
  }
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01159810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))();
  return;
}


