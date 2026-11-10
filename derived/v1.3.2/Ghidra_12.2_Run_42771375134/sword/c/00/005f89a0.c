/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005f89a0; name: FUN_005f89a0
 */


void FUN_005f89a0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x250) != 0) {
    FUN_00639700();
  }
  FUN_005fb140(param_1);
  if (*(long **)(param_1 + 0x2d0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2d0) + 0x38))();
  }
  if (*(long **)(param_1 + 0x2d8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2d8) + 0x38))();
  }
  if (*(long **)(param_1 + 0x2e0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2e0) + 0x38))();
  }
  if (*(long **)(param_1 + 0x2e8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2e8) + 0x38))();
  }
  if (*(long **)(param_1 + 0x2f0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2f0) + 0x38))();
  }
  if (*(long **)(param_1 + 0x2f8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2f8) + 0x38))();
  }
  if (*(long **)(param_1 + 0x300) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x300) + 0x38))();
  }
  if (*(long **)(param_1 + 0x308) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x308) + 0x38))();
  }
  if (*(long **)(param_1 + 0x310) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x310) + 0x38))();
  }
  if (*(long **)(param_1 + 0x318) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x318) + 0x38))();
  }
  if (*(long **)(param_1 + 800) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 800) + 0x38))();
  }
  if (*(long **)(param_1 + 0x328) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x328) + 0x38))();
  }
  if (*(long **)(param_1 + 0x330) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x330) + 0x38))();
  }
  if (*(long **)(param_1 + 0x398) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x398) + 0x38))();
  }
  FUN_005fa640(param_1);
  if (*(long *)(param_1 + 0x378) != 0) {
    uVar1 = FUN_00659de0();
    *(undefined8 *)(param_1 + 0x648) = uVar1;
  }
  return;
}


