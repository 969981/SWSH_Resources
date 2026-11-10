/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dab850; name: FUN_00dab850
 */


void FUN_00dab850(undefined8 param_1,char *param_2,long param_3,char *param_4)

{
  size_t sVar1;
  size_t sVar2;
  char *__dest;
  long lVar3;
  char acStack_c0 [128];
  
  sVar1 = strlen(param_2);
  lVar3 = *(long *)(param_3 + 0x10);
  sVar2 = strlen(param_4);
  __dest = acStack_c0 + (0x80 - (sVar1 + lVar3 + sVar2 + 0x10 & 0xfffffffffffffff0));
  *__dest = '\0';
  strcat(__dest,param_2);
  strcat(__dest,*(char **)(param_3 + 8));
  strcat(__dest,param_4);
  FUN_0010d170(param_1,__dest);
  return;
}


