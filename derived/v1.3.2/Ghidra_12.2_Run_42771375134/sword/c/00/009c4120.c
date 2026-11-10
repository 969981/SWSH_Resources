/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c4120; name: FUN_009c4120
 */


void FUN_009c4120(long param_1)

{
  if (*(long *)PTR_DAT_02710940 != 0) {
    FUN_011faf20();
  }
  if (((*(long *)(param_1 + 0xb0) != 0) && (*(int *)(*(long *)(param_1 + 0xb0) + 0x54) != 0)) &&
     (*(long **)(param_1 + 0xb8) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x28))();
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  FUN_007b5c70(*(undefined8 *)PTR_DAT_027104b0);
  *(undefined4 *)(param_1 + 0x70) = 8;
  return;
}


