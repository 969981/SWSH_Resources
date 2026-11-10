/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d4600; name: FUN_004d4600
 */


void FUN_004d4600(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x328) == 0) goto LAB_004d4634;
  plVar1 = *(long **)(*(long *)(param_1 + 0x328) + 0x60);
  if (plVar1 == (long *)0x0) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_004d4634;
    FUN_004d2100(param_1);
    plVar1 = *(long **)(*(long *)(param_1 + 0x328) + 0x60);
    if (plVar1 == (long *)0x0) goto LAB_004d4634;
  }
  (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
LAB_004d4634:
  *(int *)(param_1 + 0x34c) = *(int *)(param_1 + 0x34c) + 1;
  return;
}


