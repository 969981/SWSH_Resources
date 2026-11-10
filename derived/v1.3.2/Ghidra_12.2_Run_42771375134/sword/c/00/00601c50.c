/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00601c50; name: FUN_00601c50
 */


void FUN_00601c50(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_00601c50();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_00601c50();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


