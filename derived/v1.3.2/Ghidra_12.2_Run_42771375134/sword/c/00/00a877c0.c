/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a877c0; name: FUN_00a877c0
 */


void FUN_00a877c0(undefined8 param_1,char *param_2,long *param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  long lVar3;
  char *__dest;
  char acStack_b0 [128];
  
  sVar2 = strlen(param_2);
  lVar3 = 0;
  if (*param_3 != 0) {
    lVar3 = *(long *)(*param_3 + 0x68);
  }
  __dest = acStack_b0 + (0x80 - (sVar2 + lVar3 + 0x10 & 0xfffffffffffffff0));
  *__dest = '\0';
  strcat(__dest,param_2);
  puVar1 = (undefined8 *)PTR_PTR_02710928;
  if (*param_3 != 0) {
    puVar1 = (undefined8 *)(*param_3 + 0x60);
  }
  strcat(__dest,(char *)*puVar1);
  FUN_0010d170(param_1,__dest);
  return;
}


