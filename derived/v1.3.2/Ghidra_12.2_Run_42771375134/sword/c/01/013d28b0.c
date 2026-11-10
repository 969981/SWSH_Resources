/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013d28b0; name: FUN_013d28b0
 */


void FUN_013d28b0(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}


