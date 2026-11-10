/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131be40; name: FUN_0131be40
 */


undefined8 FUN_0131be40(long param_1,int param_2)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0xd) == '\0') && (*(char *)(param_1 + 0xe) == '\0')) {
    iVar1 = FUN_0131bab0(param_1);
    if ((iVar1 == param_2) && (*(int *)(param_1 + 8) == param_2)) {
      return 1;
    }
    FUN_0131b950(param_1,param_2);
  }
  return 0;
}


