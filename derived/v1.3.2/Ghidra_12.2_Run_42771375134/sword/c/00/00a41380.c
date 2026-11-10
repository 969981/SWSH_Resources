/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a41380; name: FUN_00a41380
 */


void FUN_00a41380(long param_1,ulong param_2)

{
  if ((param_2 & 1) == 0) {
    FUN_016bff10(*(undefined8 *)(param_1 + 0xa0),0,0);
    return;
  }
  FUN_016bff10(*(undefined8 *)(param_1 + 0xa0),*(int *)(*(long *)(param_1 + 0xa8) + 0xe8) + -1,0);
  return;
}


