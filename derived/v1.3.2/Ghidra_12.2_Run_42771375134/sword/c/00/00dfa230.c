/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dfa230; name: FUN_00dfa230
 */


void FUN_00dfa230(long param_1)

{
  if ((((*(long *)(param_1 + 0x50) != 0) && (*(int *)(*(long *)(param_1 + 0x50) + 0x54) != 0)) &&
      (*(long *)(param_1 + 0x58) != 0)) &&
     ((*(int *)(*(long *)(param_1 + 0x58) + 0x54) != 0 && (*(char *)(param_1 + 0x68) != '\0')))) {
    FUN_00dfe9d0(param_1);
  }
  FUN_00dfa2a0(param_1);
  FUN_00dfa430(param_1,0);
  return;
}


