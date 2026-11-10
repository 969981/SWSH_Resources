/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e1d200; name: FUN_00e1d200
 */


void FUN_00e1d200(long *param_1,char *param_2,char *param_3)

{
  char cVar1;
  size_t sVar2;
  size_t sVar3;
  long lVar4;
  char *__dest;
  char acStack_40 [8];
  long local_38;
  
  sVar2 = strlen(param_2);
  sVar3 = strlen(param_3);
  __dest = acStack_40 + -(sVar2 + sVar3 + 0x10 & 0xfffffffffffffff0);
  *__dest = '\0';
  strcat(__dest,param_2);
  strcat(__dest,param_3);
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
    FUN_006cf520(&local_38,*(undefined8 *)PTR_DAT_02710440,__dest);
    *param_1 = local_38;
  }
  return;
}


