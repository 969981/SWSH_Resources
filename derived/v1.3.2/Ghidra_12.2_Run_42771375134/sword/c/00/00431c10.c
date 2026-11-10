/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00431c10; name: FUN_00431c10
 */


undefined8
FUN_00431c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            uint *param_5)

{
  bool bVar1;
  undefined *puVar2;
  char *__src;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  undefined8 uVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  char *local_270;
  undefined1 local_268;
  char acStack_25d [261];
  byte local_158 [4];
  uint local_154;
  char *local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  
  local_270 = (char *)0x0;
  local_268 = 0;
  iVar3 = FUN_00442070(&local_270,param_1,&DAT_01d43b31);
  __src = local_270;
  if (iVar3 == 1) {
    sVar4 = strlen(local_270);
    sVar5 = 0x103;
    if (sVar4 + 1 < 0x103) {
      sVar5 = sVar4 + 1;
    }
    strncpy(acStack_25d + 1,__src,sVar5);
    acStack_25d[sVar5 + 1] = '\0';
    sVar5 = strlen(acStack_25d + 1);
    if (0 < (int)sVar5) {
      lVar7 = (long)(int)sVar5;
      do {
        if (acStack_25d[lVar7] == '.') {
          acStack_25d[lVar7] = '\0';
          break;
        }
        bVar1 = 1 < lVar7;
        lVar7 = lVar7 + -1;
      } while (bVar1);
    }
    sVar4 = strlen(acStack_25d + 1);
    sVar5 = 0x103;
    if (sVar4 + 1 < 0x103) {
      sVar5 = sVar4 + 1;
    }
    strncpy((char *)local_158,acStack_25d + 1,sVar5);
    local_158[sVar5] = 0;
    sVar5 = strlen(acStack_25d + 1);
    puVar2 = PTR_DAT_02712ae0;
    if (sVar5 != 0) {
      pbVar8 = local_158;
      sVar4 = sVar5;
      do {
        if (*pbVar8 - 0x41 < 0x1a) {
          *pbVar8 = *pbVar8 + 0x20;
        }
        sVar4 = sVar4 - 1;
        pbVar8 = pbVar8 + 1;
      } while (sVar4 != 0);
    }
    local_154 = 0x811c9dc5;
    if ((int)sVar5 != 0) {
      pbVar8 = local_158;
      do {
        pbVar9 = pbVar8 + 1;
        local_154 = local_154 * 0x1000193 ^ (uint)*pbVar8;
        pbVar8 = pbVar9;
      } while (pbVar9 < local_158 + (sVar5 & 0xffffffff));
    }
    *param_5 = local_154;
    local_158[0] = 0;
    local_158[1] = 0;
    local_158[2] = 0;
    local_158[3] = 0;
    local_150 = local_270;
    local_130 = 0;
    local_120 = 0;
    local_118 = 0;
    local_148 = local_268;
    local_140 = param_2;
    uStack_138 = param_3;
    local_128 = param_4;
    uVar6 = (**(code **)(**(long **)puVar2 + 0x20))(*(long **)puVar2,local_158);
  }
  else {
    uVar6 = 0x34;
  }
  return uVar6;
}


