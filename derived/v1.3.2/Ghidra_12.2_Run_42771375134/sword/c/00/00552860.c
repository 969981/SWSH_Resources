/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00552860; name: FUN_00552860
 */


bool FUN_00552860(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)(param_1 + 8),*(char **)(param_2 + 8));
  return iVar1 != 0;
}


