/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e73cb0; name: FUN_00e73cb0
 */


void FUN_00e73cb0(long param_1)

{
  if (*(int *)(param_1 + 0x90) == 1) {
    FUN_00e74de0();
    return;
  }
  if (*(int *)(param_1 + 0x90) == 0) {
    FUN_00e74840();
    return;
  }
  return;
}


