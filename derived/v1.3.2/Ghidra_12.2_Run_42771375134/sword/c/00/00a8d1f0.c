/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a8d1f0; name: FUN_00a8d1f0
 */


void FUN_00a8d1f0(undefined8 param_1,char *param_2,long *param_3)

{
  size_t sVar1;
  long *plVar2;
  char *__dest;
  char acStack_b0 [128];
  
  sVar1 = strlen(param_2);
  __dest = acStack_b0 + (0x80 - (sVar1 + param_3[3] + 0x10 & 0xfffffffffffffff0));
  *__dest = '\0';
  strcat(__dest,param_2);
  if (param_3[3] == 0) {
    plVar2 = param_3 + 2;
  }
  else {
    plVar2 = (long *)PTR_PTR_02710928;
    if (*param_3 != 0) {
      plVar2 = (long *)(*param_3 + 0x60);
    }
  }
  strcat(__dest,(char *)*plVar2);
  FUN_0010d170(param_1,__dest);
  return;
}


