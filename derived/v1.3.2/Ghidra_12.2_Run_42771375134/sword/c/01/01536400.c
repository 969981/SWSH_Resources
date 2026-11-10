/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01536400; name: FUN_01536400
 */


undefined8 FUN_01536400(long param_1,int param_2)

{
  if ((((*(int *)(param_1 + 0x9a58) == param_2) || (*(int *)(param_1 + 0x9a78) == param_2)) ||
      (*(int *)(param_1 + 0x9a98) == param_2)) || (*(int *)(param_1 + 0x9ab8) == param_2)) {
    return 1;
  }
  return 0;
}


