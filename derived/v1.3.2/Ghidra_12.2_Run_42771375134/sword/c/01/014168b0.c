/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014168b0; name: FUN_014168b0
 */


void FUN_014168b0(long param_1)

{
  if (*(int *)(param_1 + 0x10) == 1) {
    FUN_01038270(*(undefined8 *)(param_1 + 0x20),1);
    return;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_01038270(*(undefined8 *)(param_1 + 0x18),1);
    return;
  }
  FUN_01038270(0,1);
  return;
}


