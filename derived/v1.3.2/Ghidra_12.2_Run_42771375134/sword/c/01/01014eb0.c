/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01014eb0; name: FUN_01014eb0
 */


void FUN_01014eb0(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  size_t sVar2;
  size_t sVar3;
  long lVar4;
  char *__dest;
  char *__s;
  char acStack_40 [8];
  long local_38;
  
  __s = (char *)*param_2;
  sVar2 = strlen(__s);
  sVar3 = strlen((char *)*param_3);
  __dest = acStack_40 + -(sVar2 + sVar3 + 0x10 & 0xfffffffffffffff0);
  *__dest = '\0';
  strcat(__dest,__s);
  strcat(__dest,(char *)*param_3);
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


