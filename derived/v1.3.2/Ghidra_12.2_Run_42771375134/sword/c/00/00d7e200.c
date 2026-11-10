/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7e200; name: FUN_00d7e200
 */


void FUN_00d7e200(long param_1)

{
  *(undefined4 *)(param_1 + 0x5d8) = 0;
  if (*(long *)(param_1 + 0x4c0) == 0) {
    return;
  }
  FUN_016d20d0();
  return;
}


