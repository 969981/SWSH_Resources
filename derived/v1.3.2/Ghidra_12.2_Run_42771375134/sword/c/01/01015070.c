/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01015070; name: FUN_01015070
 */


void FUN_01015070(long *param_1,long *param_2,char *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  size_t sVar3;
  long lVar4;
  char *__dest;
  long lVar5;
  char acStack_40 [8];
  long local_38;
  
  lVar5 = *param_2;
  if (lVar5 == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = *(long *)(lVar5 + 0x68) + 1;
  }
  sVar3 = strlen(param_3);
  __dest = acStack_40 + -(lVar4 + sVar3 + 0xf & 0xfffffffffffffff0);
  *__dest = '\0';
  puVar1 = (undefined8 *)PTR_PTR_02710928;
  if (lVar5 != 0) {
    puVar1 = (undefined8 *)(lVar5 + 0x60);
  }
  strcat(__dest,(char *)*puVar1);
  strcat(__dest,param_3);
  cVar2 = *__dest;
  *param_1 = 0;
  if (cVar2 == '\0') {
    lVar5 = FUN_006e5e60();
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    *param_1 = lVar5;
  }
  else {
    FUN_006cf520(&local_38,*(undefined8 *)PTR_DAT_02710440,__dest);
    *param_1 = local_38;
  }
  return;
}


