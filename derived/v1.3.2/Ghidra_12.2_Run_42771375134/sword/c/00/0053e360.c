/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053e360; name: FUN_0053e360
 */


undefined8 FUN_0053e360(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x14f00);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
    *(long *)(param_1 + 0x14f00) = 0;
  }
  plVar1 = *(long **)(param_1 + 0x14f08);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
    *(long *)(param_1 + 0x14f08) = 0;
  }
  if (*(long **)(param_1 + 0x14f10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x14f10) + 8))();
    *(undefined8 *)(param_1 + 0x14f10) = 0;
  }
  if (*(long **)(param_1 + 0x14f18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x14f18) + 8))();
    *(undefined8 *)(param_1 + 0x14f18) = 0;
  }
  if (*(long **)(param_1 + 0x14f20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x14f20) + 8))();
    *(undefined8 *)(param_1 + 0x14f20) = 0;
  }
  if (*(long **)(param_1 + 0x14f28) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x14f28) + 8))();
    *(undefined8 *)(param_1 + 0x14f28) = 0;
  }
  if (*(long **)(param_1 + 0x14f30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x14f30) + 8))();
    *(undefined8 *)(param_1 + 0x14f30) = 0;
  }
  if (*(long **)(param_1 + 0x14f38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x14f38) + 8))();
    *(undefined8 *)(param_1 + 0x14f38) = 0;
  }
  if (*(long **)(param_1 + 0x14f40) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x14f40) + 8))();
    *(undefined8 *)(param_1 + 0x14f40) = 0;
  }
  if (*(long **)(param_1 + 0x14fc8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x14fc8) + 8))();
    *(undefined8 *)(param_1 + 0x14fc8) = 0;
  }
  if (*(long **)(param_1 + 86000) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 86000) + 8))();
    *(undefined8 *)(param_1 + 86000) = 0;
  }
  if (*(long **)(param_1 + 0x14ff8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x14ff8) + 8))();
    *(undefined8 *)(param_1 + 0x14ff8) = 0;
  }
  return 0;
}


