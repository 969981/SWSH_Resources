/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00432260; name: FUN_00432260
 */


void FUN_00432260(char *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  size_t sVar2;
  size_t sVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  char acStack_25d [261];
  byte local_158 [4];
  uint local_154;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined4 local_128;
  long local_120;
  undefined4 local_118;
  
  sVar2 = strlen(param_1);
  sVar3 = 0x103;
  if (sVar2 + 1 < 0x103) {
    sVar3 = sVar2 + 1;
  }
  strncpy(acStack_25d + 1,param_1,sVar3);
  acStack_25d[sVar3 + 1] = '\0';
  sVar3 = strlen(acStack_25d + 1);
  if (0 < (int)sVar3) {
    lVar4 = (long)(int)sVar3;
    do {
      if (acStack_25d[lVar4] == '.') {
        acStack_25d[lVar4] = '\0';
        break;
      }
      bVar1 = 1 < lVar4;
      lVar4 = lVar4 + -1;
    } while (bVar1);
  }
  sVar2 = strlen(acStack_25d + 1);
  sVar3 = 0x103;
  if (sVar2 + 1 < 0x103) {
    sVar3 = sVar2 + 1;
  }
  strncpy((char *)local_158,acStack_25d + 1,sVar3);
  local_158[sVar3] = 0;
  sVar3 = strlen(acStack_25d + 1);
  if (sVar3 != 0) {
    pbVar5 = local_158;
    sVar2 = sVar3;
    do {
      if (*pbVar5 - 0x41 < 0x1a) {
        *pbVar5 = *pbVar5 + 0x20;
      }
      sVar2 = sVar2 - 1;
      pbVar5 = pbVar5 + 1;
    } while (sVar2 != 0);
  }
  local_154 = 0x811c9dc5;
  if ((int)sVar3 != 0) {
    pbVar5 = local_158;
    do {
      pbVar6 = pbVar5 + 1;
      local_154 = local_154 * 0x1000193 ^ (uint)*pbVar5;
      pbVar5 = pbVar6;
    } while (pbVar6 < local_158 + (sVar3 & 0xffffffff));
  }
  local_158[0] = 1;
  local_158[1] = 0;
  local_158[2] = 0;
  local_158[3] = 0;
  local_150 = 0;
  local_148 = 0;
  local_130 = 0;
  if (param_2 != 0) {
    local_130 = 2;
  }
  local_128 = 0xffffffff;
  local_118 = 0;
  local_140 = param_3;
  uStack_138 = param_4;
  local_120 = param_2;
  (**(code **)(**(long **)PTR_DAT_02712ae0 + 0x20))(*(long **)PTR_DAT_02712ae0,local_158);
  return;
}


