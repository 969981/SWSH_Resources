/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00432080; name: FUN_00432080
 */


void FUN_00432080(char *param_1,undefined8 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  size_t sVar5;
  size_t sVar6;
  long *plVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  char acStack_251 [49];
  undefined4 local_220;
  byte local_148 [4];
  uint local_144;
  undefined8 local_140;
  undefined1 local_138;
  undefined8 local_130;
  undefined1 *puStack_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  
  sVar5 = strlen(param_1);
  sVar6 = 0x103;
  if (sVar5 + 1 < 0x103) {
    sVar6 = sVar5 + 1;
  }
  strncpy(acStack_251 + 1,param_1,sVar6);
  acStack_251[sVar6 + 1] = '\0';
  sVar6 = strlen(acStack_251 + 1);
  if (0 < (int)sVar6) {
    lVar8 = (long)(int)sVar6;
    do {
      if (acStack_251[lVar8] == '.') {
        acStack_251[lVar8] = '\0';
        break;
      }
      bVar1 = 1 < lVar8;
      lVar8 = lVar8 + -1;
    } while (bVar1);
  }
  sVar5 = strlen(acStack_251 + 1);
  sVar6 = 0x103;
  if (sVar5 + 1 < 0x103) {
    sVar6 = sVar5 + 1;
  }
  strncpy((char *)local_148,acStack_251 + 1,sVar6);
  local_148[sVar6] = 0;
  sVar6 = strlen(acStack_251 + 1);
  puVar2 = PTR_DAT_02712ae0;
  if (sVar6 != 0) {
    pbVar9 = local_148;
    sVar5 = sVar6;
    do {
      if (*pbVar9 - 0x41 < 0x1a) {
        *pbVar9 = *pbVar9 + 0x20;
      }
      sVar5 = sVar5 - 1;
      pbVar9 = pbVar9 + 1;
    } while (sVar5 != 0);
  }
  uVar11 = 0x811c9dc5;
  if ((int)sVar6 != 0) {
    pbVar9 = local_148;
    do {
      pbVar10 = pbVar9 + 1;
      uVar11 = uVar11 * 0x1000193 ^ (uint)*pbVar9;
      pbVar9 = pbVar10;
    } while (pbVar10 < local_148 + (sVar6 & 0xffffffff));
  }
  iVar3 = (**(code **)(**(long **)PTR_DAT_02712ae0 + 0x28))
                    (*(long **)PTR_DAT_02712ae0,acStack_251 + 1);
  if (iVar3 == 1) {
    plVar7 = *(long **)puVar2;
    local_148[0] = 1;
    local_148[1] = 0;
    local_148[2] = 0;
    local_148[3] = 0;
    local_140 = 0;
    local_138 = 0;
    local_130 = *(undefined8 *)PTR_DAT_02712dd0;
    local_120 = 2;
    local_118 = 0xffffffff;
    local_108 = 0;
    local_144 = uVar11;
    puStack_128 = acStack_251 + 1;
    local_110 = param_2;
    uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7,local_148);
    plVar7 = *(long **)puVar2;
    (**(code **)(*plVar7 + 0x30))(plVar7,acStack_251 + 1,uVar4);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = local_220;
    }
  }
  return;
}


