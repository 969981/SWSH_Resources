/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb8ff0; name: FUN_00bb8ff0
 */


void FUN_00bb8ff0(undefined8 param_1,char *param_2,undefined8 *param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__dest;
  char acStack_b0 [128];
  
  sVar1 = strlen(param_2);
  sVar2 = strlen((char *)*param_3);
  __dest = acStack_b0 + (0x80 - (sVar1 + sVar2 + 0x10 & 0xfffffffffffffff0));
  *__dest = '\0';
  strcat(__dest,param_2);
  strcat(__dest,(char *)*param_3);
  FUN_0010d170(param_1,__dest);
  return;
}


