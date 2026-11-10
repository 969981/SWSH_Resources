/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eba8a0; name: FUN_00eba8a0
 */


void FUN_00eba8a0(long *param_1,char *param_2,long param_3,char *param_4)

{
  char cVar1;
  size_t sVar2;
  size_t sVar3;
  char *__dest;
  long lVar4;
  char acStack_50 [8];
  long local_48;
  
  sVar2 = strlen(param_2);
  lVar4 = *(long *)(param_3 + 0x10);
  sVar3 = strlen(param_4);
  __dest = acStack_50 + -(sVar2 + lVar4 + sVar3 + 0x10 & 0xfffffffffffffff0);
  *__dest = '\0';
  strcat(__dest,param_2);
  strcat(__dest,*(char **)(param_3 + 8));
  strcat(__dest,param_4);
  cVar1 = *__dest;
  *param_1 = 0;
  if (cVar1 == '\0') {
    lVar4 = FUN_006e5e60();
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    *param_1 = lVar4;
  }
  else {
    FUN_006cf520(&local_48,*(undefined8 *)PTR_DAT_02710440,__dest);
    *param_1 = local_48;
  }
  return;
}


