/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a7b90; name: FUN_014a7b90
 */


void FUN_014a7b90(undefined8 param_1,char *param_2,undefined8 *param_3,char *param_4,
                 undefined8 *param_5)

{
  size_t sVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  char *__dest;
  char acStack_d0 [128];
  
  sVar1 = strlen(param_2);
  sVar2 = strlen((char *)*param_3);
  sVar3 = strlen(param_4);
  sVar4 = strlen((char *)*param_5);
  __dest = acStack_d0 + (0x80 - (sVar1 + sVar2 + sVar3 + sVar4 + 0x10 & 0xfffffffffffffff0));
  *__dest = '\0';
  strcat(__dest,param_2);
  strcat(__dest,(char *)*param_3);
  strcat(__dest,param_4);
  strcat(__dest,(char *)*param_5);
  FUN_0010d170(param_1,__dest);
  return;
}


