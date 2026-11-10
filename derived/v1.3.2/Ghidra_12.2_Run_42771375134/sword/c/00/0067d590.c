/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0067d590; name: FUN_0067d590
 */


void FUN_0067d590(long param_1)

{
  long *plVar1;
  
  if ((*(int *)(param_1 + 0x20) != 0) &&
     (*(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1, *(int *)(param_1 + 0x20) == 0)) {
    if (*(long **)(param_1 + 0x48) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    if (*(long **)(param_1 + 0x40) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x40) + 0x18))();
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    plVar1 = (long *)FUN_005bf860();
    (**(code **)(*plVar1 + 0xd8))(plVar1,*(undefined8 *)(param_1 + 0x30));
    if (*(long **)(param_1 + 0x30) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    if (*(long **)(param_1 + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
  }
  return;
}


