/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014bc110; name: FUN_014bc110
 */


void FUN_014bc110(undefined8 param_1,char *param_2,long param_3)

{
  size_t sVar1;
  char *__dest;
  char acStack_b0 [128];
  
  sVar1 = strlen(param_2);
  __dest = acStack_b0 + (0x80 - (sVar1 + *(long *)(param_3 + 0x10) + 0x10 & 0xfffffffffffffff0));
  *__dest = '\0';
  strcat(__dest,param_2);
  strcat(__dest,*(char **)(param_3 + 8));
  FUN_0010d170(param_1,__dest);
  return;
}


