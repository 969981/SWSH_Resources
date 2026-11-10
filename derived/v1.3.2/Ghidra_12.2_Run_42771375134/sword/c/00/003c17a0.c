/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c17a0; name: FUN_003c17a0
 */


void FUN_003c17a0(long param_1,long param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x40);
    *(long *)(param_2 + 0x40) = param_1;
    *(long *)(param_1 + 0x38) = param_2;
  }
  return;
}


