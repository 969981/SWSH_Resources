/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a0fa0; name: FUN_007a0fa0
 */


char * FUN_007a0fa0(long param_1,long param_2,int param_3)

{
  char *__s;
  uint uVar1;
  
  *(int *)(param_1 + 0x34c) = param_3;
  __s = (char *)(param_1 + 0x30c);
  if ((param_2 == 0) || (param_3 == 2)) {
    *__s = '\0';
    return __s;
  }
  uVar1 = snprintf(__s,0x3f,"%s",param_2);
  return (char *)(ulong)uVar1;
}


