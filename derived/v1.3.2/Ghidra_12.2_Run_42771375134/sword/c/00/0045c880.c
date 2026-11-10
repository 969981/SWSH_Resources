/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045c880; name: FUN_0045c880
 */


void FUN_0045c880(long param_1,long param_2)

{
  *(long *)(param_1 + 0x50) = param_2;
  if (param_2 != 0) {
    *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
  }
  return;
}


