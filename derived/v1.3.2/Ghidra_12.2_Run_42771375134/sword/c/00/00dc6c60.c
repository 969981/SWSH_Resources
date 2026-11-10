/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc6c60; name: FUN_00dc6c60
 */


void FUN_00dc6c60(long *param_1,char *param_2,long param_3,char *param_4,long param_5,char *param_6)

{
  char cVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  char *__dest;
  long lVar5;
  long lVar6;
  char acStack_70 [8];
  long local_68;
  
  sVar2 = strlen(param_2);
  lVar5 = *(long *)(param_3 + 0x10);
  sVar3 = strlen(param_4);
  lVar6 = *(long *)(param_5 + 0x10);
  sVar4 = strlen(param_6);
  __dest = acStack_70 + -(sVar2 + lVar5 + sVar3 + lVar6 + sVar4 + 0x10 & 0xfffffffffffffff0);
  *__dest = '\0';
  strcat(__dest,param_2);
  strcat(__dest,*(char **)(param_3 + 8));
  strcat(__dest,param_4);
  strcat(__dest,*(char **)(param_5 + 8));
  strcat(__dest,param_6);
  cVar1 = *__dest;
  *param_1 = 0;
  if (cVar1 == '\0') {
    lVar5 = FUN_006e5e60();
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    *param_1 = lVar5;
  }
  else {
    FUN_006cf520(&local_68,*(undefined8 *)PTR_DAT_02710440,__dest);
    *param_1 = local_68;
  }
  return;
}


