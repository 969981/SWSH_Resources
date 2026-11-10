/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00da52f0; name: FUN_00da52f0
 */


void FUN_00da52f0(undefined8 param_1,undefined8 *param_2,char *param_3,char *param_4)

{
  size_t sVar1;
  size_t sVar2;
  size_t sVar3;
  char *__s;
  char *__dest;
  char acStack_c0 [128];
  
  __s = (char *)*param_2;
  sVar1 = strlen(__s);
  sVar2 = strlen(param_3);
  sVar3 = strlen(param_4);
  __dest = acStack_c0 + (0x80 - (sVar1 + sVar2 + sVar3 + 0x10 & 0xfffffffffffffff0));
  *__dest = '\0';
  strcat(__dest,__s);
  strcat(__dest,param_3);
  strcat(__dest,param_4);
  FUN_0010d170(param_1,__dest);
  return;
}


