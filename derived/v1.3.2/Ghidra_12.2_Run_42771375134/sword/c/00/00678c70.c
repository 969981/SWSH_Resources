/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00678c70; name: FUN_00678c70
 */


void FUN_00678c70(long param_1)

{
  if (*(long *)(param_1 + 0xb0) == 0) {
    return;
  }
  FUN_0066cad0(*(long *)(param_1 + 0xb0),param_1);
  return;
}


