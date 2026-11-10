/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7b6b0; name: FUN_00e7b6b0
 */


undefined8 FUN_00e7b6b0(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (*param_1 == 0) {
    return 0;
  }
  if (*(int *)(*param_1 + 0x54) == 0) {
    return 0;
  }
  puVar3 = *(undefined8 **)(*param_1 + 0x60);
  plVar1 = (long *)(**(code **)*puVar3)(puVar3);
  lVar2 = FUN_0156b190();
  for (; plVar1 != (long *)lVar2; plVar1 = (long *)*plVar1) {
  }
  (**(code **)(puVar3[-10] + 0x1c8))(puVar3 + -10);
  return 1;
}


