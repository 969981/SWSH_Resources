/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00441d90; name: FUN_00441d90
 */


void FUN_00441d90(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0xb0) == param_2) {
    *(undefined8 *)(param_1 + 0xb0) = 0;
    return;
  }
  return;
}


