/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007adbe0; name: FUN_007adbe0
 */


void FUN_007adbe0(long param_1)

{
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 8) + 8))();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}


