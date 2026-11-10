/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077c480; name: FUN_0077c480
 */


undefined8 FUN_0077c480(long param_1,uint param_2,uint *param_3,undefined8 param_4,char *param_5)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  ulong uVar5;
  
  if ((param_3 != (uint *)0x0) && (*param_3 < 2)) {
    sVar2 = strlen((char *)(param_1 + 8));
    sVar3 = 0x103;
    if (sVar2 + 1 < 0x103) {
      sVar3 = sVar2 + 1;
    }
    strncpy(param_5,(char *)(param_1 + 8),sVar3);
    param_5[sVar3] = '\0';
    if (param_3[1] == 0) {
      pcVar4 = (char *)(param_1 + 0x10c);
    }
    else {
      pcVar4 = (char *)(param_1 + 0x210);
    }
    sVar3 = strlen(pcVar4);
    uVar5 = sVar3 + sVar2;
    if (uVar5 < 0x104) {
      sVar2 = strlen(param_5);
      sVar2 = (long)((sVar2 << 0x20 ^ 0xffffffff00000000) + 0x10400000000) >> 0x20;
      if ((ulong)(long)(int)sVar3 <= sVar2) {
        sVar2 = (long)(int)sVar3;
      }
      strncat(param_5,pcVar4,sVar2);
      if ((char)param_3[6] != '\0') {
        pcVar4 = (char *)FUN_004f8460();
        sVar3 = strlen(pcVar4);
        if (sVar3 != 0) {
          uVar5 = uVar5 + sVar3 + 1;
          if (0x103 < uVar5) {
            return 2;
          }
          pcVar4 = (char *)FUN_004f8460();
          sVar3 = strlen(param_5);
          sVar3 = (long)((sVar3 << 0x20 ^ 0xffffffff00000000) + 0x10400000000) >> 0x20;
          sVar2 = strlen(pcVar4);
          if ((ulong)(long)(int)sVar2 <= sVar3) {
            sVar3 = (long)(int)sVar2;
          }
          strncat(param_5,pcVar4,sVar3);
          sVar3 = strlen(param_5);
          lVar1 = (sVar3 << 0x20 ^ 0xffffffff00000000) + 0x10400000000;
          sVar3 = lVar1 >> 0x20;
          if (lVar1 != 0) {
            sVar3 = 1;
          }
          strncat(param_5,"/",sVar3);
        }
      }
      if (uVar5 + 0xf < 0x105) {
        if (param_3[1] == 0) {
          pcVar4 = "%u.bnk";
        }
        else {
          pcVar4 = "%u.wem";
        }
        snprintf(param_5 + uVar5,0xf,pcVar4,(ulong)param_2);
        return 1;
      }
    }
  }
  return 2;
}


