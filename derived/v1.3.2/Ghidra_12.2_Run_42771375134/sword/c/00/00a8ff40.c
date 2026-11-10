/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a8ff40; name: FUN_00a8ff40
 */


void FUN_00a8ff40(undefined8 param_1,undefined8 *param_2,char *param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  char *__dest;
  char acStack_b0 [128];
  
  __s = (char *)*param_2;
  sVar1 = strlen(__s);
  sVar2 = strlen(param_3);
  __dest = acStack_b0 + (0x80 - (sVar1 + sVar2 + 0x10 & 0xfffffffffffffff0));
  *__dest = '\0';
  strcat(__dest,__s);
  strcat(__dest,param_3);
  FUN_0010d170(param_1,__dest);
  return;
}


