/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00431780; name: FUN_00431780
 */


undefined8 FUN_00431780(char *param_1,undefined4 param_2,uint *param_3)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  size_t sVar5;
  size_t sVar6;
  undefined8 uVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 local_260;
  undefined1 local_258;
  char acStack_251 [265];
  byte local_148 [4];
  uint local_144;
  undefined8 local_140;
  undefined1 local_138;
  undefined8 local_130;
  char *pcStack_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  
  local_260 = 0;
  local_258 = 0;
  iVar3 = FUN_004421c0(&local_260,param_1,&DAT_01d43b31);
  if (iVar3 == 1) {
    sVar5 = strlen(param_1);
    sVar6 = 0x103;
    if (sVar5 + 1 < 0x103) {
      sVar6 = sVar5 + 1;
    }
    strncpy(acStack_251 + 1,param_1,sVar6);
    acStack_251[sVar6 + 1] = '\0';
    sVar6 = strlen(acStack_251 + 1);
    if (0 < (int)sVar6) {
      lVar10 = (long)(int)sVar6;
      do {
        if (acStack_251[lVar10] == '.') {
          acStack_251[lVar10] = '\0';
          break;
        }
        bVar1 = 1 < lVar10;
        lVar10 = lVar10 + -1;
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
    if (sVar6 != 0) {
      pbVar11 = local_148;
      sVar5 = sVar6;
      do {
        if (*pbVar11 - 0x41 < 0x1a) {
          *pbVar11 = *pbVar11 + 0x20;
        }
        sVar5 = sVar5 - 1;
        pbVar11 = pbVar11 + 1;
      } while (sVar5 != 0);
    }
    uVar9 = 0x811c9dc5;
    if ((int)sVar6 != 0) {
      pbVar11 = local_148;
      do {
        pbVar12 = pbVar11 + 1;
        uVar9 = uVar9 * 0x1000193 ^ (uint)*pbVar11;
        pbVar11 = pbVar12;
      } while (pbVar12 < local_148 + (sVar6 & 0xffffffff));
    }
    *param_3 = uVar9;
    puVar2 = PTR_DAT_02712ae0;
    uVar7 = (**(code **)(**(long **)PTR_DAT_02712ae0 + 0x28))
                      (*(long **)PTR_DAT_02712ae0,acStack_251 + 1);
    if ((int)uVar7 == 1) {
      plVar8 = *(long **)puVar2;
      local_144 = *param_3;
      local_148[0] = 0;
      local_148[1] = 0;
      local_148[2] = 0;
      local_148[3] = 0;
      local_140 = local_260;
      local_138 = local_258;
      local_130 = *(undefined8 *)PTR_DAT_02712dd0;
      local_120 = 0;
      local_110 = 0;
      local_108 = 0;
      pcStack_128 = acStack_251 + 1;
      local_118 = param_2;
      uVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,local_148);
      plVar8 = *(long **)puVar2;
      uVar7 = (**(code **)(*plVar8 + 0x30))(plVar8,acStack_251 + 1,uVar4);
    }
  }
  else {
    uVar7 = 0x34;
  }
  return uVar7;
}


