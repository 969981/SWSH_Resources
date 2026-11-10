/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a96a10; name: FUN_00a96a10
 */


undefined8 FUN_00a96a10(long param_1,undefined2 param_2,int param_3,int param_4,uint param_5)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  float fVar8;
  undefined8 local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined8 local_78;
  char *local_70;
  undefined8 local_68;
  
  local_78 = 0xb3236763c32e0e7d;
  local_70 = "g_table";
  local_68 = 7;
  FUN_012b4250(&local_e0,param_1 + 0x120,&local_78);
  FUN_012b4190(auStack_88,&local_e0,param_2);
  if (param_4 != -1) {
    local_78 = 0xdf42612101a4f23d;
    local_70 = "level";
    local_68 = 5;
    FUN_012b4250(&local_e0,auStack_88,&local_78);
    iVar2 = FUN_012b4420(&local_e0,0);
    if (iVar2 != param_4) {
      return 0;
    }
  }
  local_78 = 0x3408f31ec24ba210;
  local_70 = "isStadium";
  local_68 = 9;
  FUN_012b4250(&local_e0,auStack_88,&local_78);
  iVar2 = FUN_012b4420(&local_e0,0);
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(*(long *)(param_1 + 8) + 0x1f30) != '\0';
  }
  local_78 = 0xeee91f4544cd66a3;
  local_70 = "isRoseTower";
  local_68 = 0xb;
  FUN_012b4250(&local_e0,auStack_88,&local_78);
  iVar2 = FUN_012b4420(&local_e0,0);
  if (iVar2 != 0) {
    bVar1 = (bool)(bVar1 | *(char *)(*(long *)(param_1 + 8) + 0x1f31) != '\0');
  }
  local_78 = 0xc002e5246a20dc27;
  local_70 = "isOtherField";
  local_68 = 0xc;
  FUN_012b4250(&local_e0,auStack_88,&local_78);
  iVar2 = FUN_012b4420(&local_e0,0);
  if (iVar2 != 0) {
    bVar1 = (bool)(bVar1 | (*(char *)(*(long *)(param_1 + 8) + 0x1f31) == '\0' &&
                           *(char *)(*(long *)(param_1 + 8) + 0x1f30) == '\0'));
  }
  if (!bVar1) {
    return 0;
  }
  local_78 = 0xc67e400eabc9f521;
  local_70 = "isDistCamExcept";
  local_68 = 0xf;
  FUN_012b4250(&local_e0,auStack_88,&local_78);
  iVar2 = FUN_012b4420(&local_e0,0);
  if ((iVar2 != 0) && (*(char *)(*(long *)(param_1 + 8) + 0x1f33) != '\0')) {
    return 0;
  }
  local_78 = 0x846023c103658f33;
  local_70 = "isAudience";
  local_68 = 10;
  FUN_012b4250(&local_e0,auStack_88,&local_78);
  iVar2 = FUN_012b4420(&local_e0,0);
  if (iVar2 == 0) {
    lVar3 = FUN_009c5ff0(*(undefined8 *)(param_1 + 8));
    if (lVar3 != 0) goto LAB_00a96cd8;
LAB_00a96dcc:
    uVar4 = FUN_00a6f8d0(*(undefined8 *)(param_1 + 8));
    if ((uVar4 & 1) == 0) {
      iVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x870))();
      if (iVar2 == 1) {
        iVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x868))();
        if (iVar2 == 0) {
          local_78 = 0x9c624904529fd6c8;
          local_70 = "ruleArray";
          local_68 = 9;
          FUN_012b4250(auStack_98,auStack_88,&local_78);
          uVar6 = 4;
        }
        else {
          local_78 = 0x9c624904529fd6c8;
          local_70 = "ruleArray";
          local_68 = 9;
          FUN_012b4250(auStack_98,auStack_88,&local_78);
          uVar6 = 1;
        }
      }
      else if (iVar2 == 2) {
        local_78 = 0x9c624904529fd6c8;
        local_70 = "ruleArray";
        local_68 = 9;
        FUN_012b4250(auStack_98,auStack_88,&local_78);
        uVar6 = 2;
      }
      else {
        iVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x868))();
        if (iVar2 == 0) {
          local_78 = 0x9c624904529fd6c8;
          local_70 = "ruleArray";
          local_68 = 9;
          FUN_012b4250(auStack_98,auStack_88,&local_78);
          uVar6 = 3;
        }
        else {
          local_78 = 0x9c624904529fd6c8;
          local_70 = "ruleArray";
          local_68 = 9;
          FUN_012b4250(auStack_98,auStack_88,&local_78);
          uVar6 = 0;
        }
      }
    }
    else {
      iVar2 = FUN_00a6fb60();
      if (iVar2 == 1) {
        uVar4 = FUN_00a6fdc0(*(undefined8 *)(param_1 + 8),1);
        if ((uVar4 & 1) != 0) {
          local_78 = 0x9c624904529fd6c8;
          local_70 = "ruleArray";
          local_68 = 9;
          FUN_012b4250(auStack_98,auStack_88,&local_78);
          FUN_012b4190(&local_e0,auStack_98,5);
          fVar8 = (float)FUN_012b4630(0,&local_e0);
          if (fVar8 == 0.0) {
            return 0;
          }
        }
        uVar4 = FUN_00a6fdc0(*(undefined8 *)(param_1 + 8),0);
        if ((uVar4 & 1) == 0) goto LAB_00a97144;
        local_78 = 0x9c624904529fd6c8;
        local_70 = "ruleArray";
        local_68 = 9;
        FUN_012b4250(auStack_98,auStack_88,&local_78);
        uVar6 = 6;
      }
      else {
        local_78 = 0x9c624904529fd6c8;
        local_70 = "ruleArray";
        local_68 = 9;
        FUN_012b4250(auStack_98,auStack_88,&local_78);
        uVar6 = 7;
      }
    }
  }
  else {
    if (*(char *)(*(long *)(param_1 + 8) + 0xb98) == '\0') {
      return 0;
    }
    lVar3 = FUN_009c5ff0();
    if (lVar3 == 0) goto LAB_00a96dcc;
LAB_00a96cd8:
    uVar4 = FUN_008f35c0(lVar3,0x40000);
    if (((((uVar4 & 1) != 0) || (uVar4 = FUN_008f35c0(lVar3,0x80000), (uVar4 & 1) != 0)) ||
        (uVar4 = FUN_008f89c0(lVar3,0x10), (uVar4 & 1) != 0)) ||
       (uVar4 = FUN_008f89c0(lVar3,0x20), (uVar4 & 1) != 0)) {
      local_78 = 0x6a98a82bc5c48440;
      local_70 = "isRunaway";
      local_68 = 9;
      FUN_012b4250(&local_e0,auStack_88,&local_78);
      iVar2 = FUN_012b4420(&local_e0,0);
      if (iVar2 != 0) {
        return 0;
      }
    }
    uVar4 = FUN_008f35c0(lVar3,0x400);
    if ((uVar4 & 1) == 0) {
      uVar4 = FUN_008f35c0(lVar3,0x800);
      if ((uVar4 & 1) == 0) {
        uVar4 = FUN_008f35c0(lVar3,0x1000);
        if ((uVar4 & 1) == 0) goto LAB_00a96dcc;
        local_78 = 0x9c624904529fd6c8;
        local_70 = "ruleArray";
        local_68 = 9;
        FUN_012b4250(auStack_98,auStack_88,&local_78);
        uVar6 = 10;
      }
      else {
        local_78 = 0x9c624904529fd6c8;
        local_70 = "ruleArray";
        local_68 = 9;
        FUN_012b4250(auStack_98,auStack_88,&local_78);
        uVar6 = 9;
      }
    }
    else {
      local_78 = 0x9c624904529fd6c8;
      local_70 = "ruleArray";
      local_68 = 9;
      FUN_012b4250(auStack_98,auStack_88,&local_78);
      uVar6 = 8;
    }
  }
  FUN_012b4190(&local_e0,auStack_98,uVar6);
  fVar8 = (float)FUN_012b4630(0,&local_e0);
  if (fVar8 == 0.0) {
    return 0;
  }
LAB_00a97144:
  if (param_3 != -1) {
    local_68 = 0xf;
    local_78 = 0x926dd87c47140e03;
    local_70 = "forbidNextArray";
    FUN_012b4250(&local_e0,auStack_88,&local_78);
    lVar3 = FUN_012b40f0(&local_e0);
    if (lVar3 != 0) {
      uVar7 = 1;
      do {
        local_78 = 0x926dd87c47140e03;
        local_70 = "forbidNextArray";
        local_68 = 0xf;
        FUN_012b4250(auStack_a8,auStack_88,&local_78);
        FUN_012b4190(auStack_98,auStack_a8,(long)(int)(uVar7 - 1));
        iVar2 = FUN_012b4420(auStack_98,0);
        if (iVar2 != -1) {
          local_e0 = 0x926dd87c47140e03;
          pcStack_d8 = "forbidNextArray";
          local_d0 = 0xf;
          FUN_012b4250(auStack_c8,auStack_88,&local_e0);
          FUN_012b4190(auStack_b8,auStack_c8,(long)(int)(uVar7 - 1));
          iVar2 = FUN_012b4420(auStack_b8,0);
          if (iVar2 == param_3) {
            return 0;
          }
        }
        local_78 = 0x926dd87c47140e03;
        local_70 = "forbidNextArray";
        local_68 = 0xf;
        FUN_012b4250(&local_e0,auStack_88,&local_78);
        uVar5 = FUN_012b40f0(&local_e0);
        uVar4 = (ulong)uVar7;
        uVar7 = uVar7 + 1;
      } while (uVar4 < uVar5);
    }
  }
  uVar4 = FUN_00a974e0(param_1,param_2);
  if ((uVar4 & 1) != 0) {
    local_78 = 0x3322cc25fc3c128f;
    local_70 = "isSplitScreen";
    local_68 = 0xd;
    FUN_012b4250(&local_e0,auStack_88,&local_78);
    iVar2 = FUN_012b4420(&local_e0,0);
    if (iVar2 == 0) {
      return 1;
    }
    if ((param_5 & 1) == 0) {
      local_78 = 0x563729b991c94c76;
      local_70 = "subIndexId";
      local_68 = 10;
      FUN_012b4250(&local_e0,auStack_88,&local_78);
      iVar2 = FUN_012b4420(&local_e0,0);
      if ((iVar2 != -1) && (uVar4 = FUN_00a974e0(param_1,iVar2), (uVar4 & 1) != 0)) {
        return 1;
      }
    }
  }
  return 0;
}


