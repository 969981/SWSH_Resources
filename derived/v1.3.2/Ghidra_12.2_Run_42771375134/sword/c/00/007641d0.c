/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007641d0; name: FUN_007641d0
 */


undefined8 FUN_007641d0(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x120) != 0) {
    FUN_00769130();
  }
  if (*(long *)(param_1 + 0x160) != 0) {
    FUN_007677f0();
  }
  if (*(long **)(param_1 + 0xd8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xd8) + 0x40))();
  }
  if (*(long **)(param_1 + 0xb0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xb0) + 0x40))();
  }
  plVar1 = *(long **)(param_1 + 0x90);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,0);
  }
  FUN_007651d0(*(undefined8 *)(param_1 + 0x348));
  if (*(long *)(param_1 + 0x120) != 0) {
    FUN_00768be0(*(long *)(param_1 + 0x120),*(undefined4 *)(param_1 + 0x194),
                 *(undefined4 *)(param_1 + 0x198));
  }
  if (*(long *)(param_1 + 0x160) != 0) {
    FUN_00766e60();
  }
  if (*(long **)(param_1 + 0xd8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xd8) + 0x28))();
  }
  if (*(long **)(param_1 + 0xb0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xb0) + 0x28))();
  }
  return 0x1000;
}


