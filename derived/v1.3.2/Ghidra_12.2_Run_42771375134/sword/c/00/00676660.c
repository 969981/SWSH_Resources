/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00676660; name: FUN_00676660
 */


void FUN_00676660(long param_1)

{
  long *plVar1;
  
  FUN_00676830();
  if (*(long *)(param_1 + 0x170) != 0) {
    plVar1 = (long *)FUN_005cbff0();
    plVar1 = (long *)(**(code **)(*plVar1 + 0x60))();
    if ((plVar1 != (long *)0x0) &&
       (plVar1 = (long *)(**(code **)(*plVar1 + 0x88))(), plVar1 != (long *)0x0)) {
      (**(code **)(*plVar1 + 0x70))(plVar1,*(undefined8 *)(param_1 + 0x170));
    }
    if (*(long **)(param_1 + 0x170) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x170) + 0x18))();
      *(undefined8 *)(param_1 + 0x170) = 0;
    }
  }
  FUN_00676a90(param_1);
  if (*(long *)(param_1 + 0xb0) == 0) {
    return;
  }
  FUN_0066d0f0(*(long *)(param_1 + 0xb0),param_1);
  return;
}


