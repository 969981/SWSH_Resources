/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077c290; name: FUN_0077c290
 */


undefined8 FUN_0077c290(long param_1,char *param_2,int *param_3,int param_4,char *param_5)

{
  long lVar1;
  ulong uVar2;
  size_t sVar3;
  size_t sVar4;
  char *pcVar5;
  
  if ((param_2 == (char *)0x0) || (uVar2 = strlen(param_2), 0x103 < uVar2)) {
    return 0x1f;
  }
  sVar3 = strlen((char *)(param_1 + 8));
  sVar4 = 0x103;
  if (sVar3 + 1 < 0x103) {
    sVar4 = sVar3 + 1;
  }
  strncpy(param_5,(char *)(param_1 + 8),sVar4);
  param_5[sVar4] = '\0';
  if ((((param_3 != (int *)0x0) && (param_4 == 0)) && (*param_3 == 0)) && (param_3[1] == 0)) {
    sVar4 = strlen((char *)(param_1 + 0x10c));
    uVar2 = sVar4 + uVar2;
    if (0x103 < uVar2) {
      return 2;
    }
    sVar3 = strlen(param_5);
    sVar3 = (long)((sVar3 << 0x20 ^ 0xffffffff00000000) + 0x10400000000) >> 0x20;
    if ((ulong)(long)(int)sVar4 <= sVar3) {
      sVar3 = (long)(int)sVar4;
    }
    strncat(param_5,(char *)(param_1 + 0x10c),sVar3);
  }
  if ((param_3 != (int *)0x0) && ((char)param_3[6] != '\0')) {
    pcVar5 = (char *)FUN_004f8460();
    sVar4 = strlen(pcVar5);
    if (sVar4 != 0) {
      uVar2 = uVar2 + sVar4 + 1;
      if (0x103 < uVar2) {
        return 2;
      }
      pcVar5 = (char *)FUN_004f8460();
      sVar4 = strlen(param_5);
      sVar4 = (long)((sVar4 << 0x20 ^ 0xffffffff00000000) + 0x10400000000) >> 0x20;
      sVar3 = strlen(pcVar5);
      if ((ulong)(long)(int)sVar3 <= sVar4) {
        sVar4 = (long)(int)sVar3;
      }
      strncat(param_5,pcVar5,sVar4);
      sVar4 = strlen(param_5);
      lVar1 = (sVar4 << 0x20 ^ 0xffffffff00000000) + 0x10400000000;
      sVar4 = lVar1 >> 0x20;
      if (lVar1 != 0) {
        sVar4 = 1;
      }
      strncat(param_5,"/",sVar4);
    }
  }
  sVar4 = strlen(param_5);
  if (0x103 < sVar4 + uVar2) {
    return 2;
  }
  sVar4 = (long)((sVar4 << 0x20 ^ 0xffffffff00000000) + 0x10400000000) >> 0x20;
  sVar3 = strlen(param_2);
  if ((ulong)(long)(int)sVar3 <= sVar4) {
    sVar4 = (long)(int)sVar3;
  }
  strncat(param_5,param_2,sVar4);
  return 1;
}


