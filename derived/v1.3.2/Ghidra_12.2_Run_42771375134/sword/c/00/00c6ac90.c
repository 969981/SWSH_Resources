/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c6ac90; name: FUN_00c6ac90
 */


void FUN_00c6ac90(void *param_1)

{
  if (*(long *)((long)param_1 + 8) != 0) {
    (**(code **)(*(long *)(*(long *)((long)param_1 + 8) + 0x48) + 0x18))();
  }
  operator_delete(param_1);
  return;
}


