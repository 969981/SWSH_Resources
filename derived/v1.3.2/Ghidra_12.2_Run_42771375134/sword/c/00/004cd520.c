/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cd520; name: FUN_004cd520
 */


void FUN_004cd520(long param_1)

{
  if (*(long *)(param_1 + 0xb0) != 0) {
    (**(code **)(*(long *)PTR_PTR_02713088 + 0x18))();
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  if (*(long *)(param_1 + 0x160) != 0) {
    (**(code **)(*(long *)PTR_PTR_02713088 + 0x18))();
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  return;
}


