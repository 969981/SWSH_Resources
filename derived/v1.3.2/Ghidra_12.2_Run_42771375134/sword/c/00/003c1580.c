/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c1580; name: FUN_003c1580
 */


void FUN_003c1580(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x4c) = param_1;
  if (*(long *)(param_2 + 0x50) != 0) {
    *(undefined4 *)(*(long *)(param_2 + 0x50) + 0x50) = param_1;
  }
  return;
}


