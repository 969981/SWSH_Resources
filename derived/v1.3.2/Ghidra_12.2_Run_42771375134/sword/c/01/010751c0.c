/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010751c0; name: FUN_010751c0
 */


void FUN_010751c0(long param_1)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 local_420;
  uint local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined4 local_3e0;
  uint local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined4 local_2a0;
  undefined1 local_198 [4];
  undefined8 local_194;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160;
  long local_58;
  
  lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  if (lVar5 == 0) {
    lVar5 = FUN_01524df0(0);
  }
  else {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    lVar5 = FUN_01524df0(lVar5);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x78);
  if (lVar7 == 0) {
    FUN_00c58c10(&local_58,0);
  }
  else {
    plVar6 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_00c58c10(&local_58,lVar7);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  lVar7 = *(long *)(param_1 + 0x5d0);
  if (**(int **)(lVar7 + 0x60) == 1) {
    local_198[0] = 0;
    local_194 = 0x3ff00000000;
    local_160 = 0;
    local_168 = 0;
    local_170 = 0;
    local_178 = 0;
    local_180 = 0;
    local_188 = 0;
    local_2d8 = (uint)*(undefined8 *)(lVar5 + 0x18);
    uStack_2d4 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x18) >> 0x20);
    FUN_00cc4490(local_58,*(undefined1 *)(*(long *)(lVar7 + 0x1f8) + 0x58),2,&local_2d8,local_198);
    uVar3 = FUN_0106ff80(3,local_198);
    uVar4 = FUN_0106f510(3,*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
    *(undefined8 *)(param_1 + 0x638 + (uVar4 & 0xff) * 8) = uVar3;
    uVar3 = FUN_0106ff80(4,local_198);
    uVar4 = FUN_0106f510(4,*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
    *(undefined8 *)(param_1 + 0x638 + (uVar4 & 0xff) * 8) = uVar3;
    cVar2 = *(char *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58);
    if (cVar2 == '\x01') {
      local_2d8 = local_2d8 & 0xffffff00;
      uStack_2d4 = 0;
      uStack_2d0 = 0x3ff;
      local_2a0 = 0;
      local_2b0 = 0;
      uStack_2a8 = 0;
      local_2c8 = 0;
      local_2c0 = 0;
      uStack_2b8 = 0;
      local_418 = (uint)*(undefined8 *)(lVar5 + 0x20);
      uStack_414 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x20) >> 0x20);
      FUN_00cc4490(local_58,1,3,&local_418,&local_2d8);
      uVar3 = FUN_0106ff80(5,&local_2d8);
      bVar1 = FUN_0106f510(5,*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
      *(undefined8 *)(param_1 + (ulong)bVar1 * 8 + 0x638) = uVar3;
      cVar2 = *(char *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58);
    }
    local_2d8 = local_2d8 & 0xffffff00;
    uStack_2d4 = 0;
    uStack_2d0 = 0x3ff;
    local_2a0 = 0;
    local_2b0 = 0;
    uStack_2a8 = 0;
    local_2c8 = 0;
    local_2c0 = 0;
    uStack_2b8 = 0;
    local_418 = (uint)*(undefined8 *)(lVar5 + 0x28);
    uStack_414 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x28) >> 0x20);
    FUN_00cc4490(local_58,cVar2,4,&local_418,&local_2d8);
    uVar3 = FUN_0106ff80(6,&local_2d8);
    bVar1 = FUN_0106f510(6,*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
    *(undefined8 *)(param_1 + (ulong)bVar1 * 8 + 0x638) = uVar3;
    if (*(char *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58) == '\x01') {
      lVar8 = *(long *)(lVar5 + 0x30);
      lVar7 = FUN_00cc1430(lVar5 + 0x88,lVar5,5);
      if (lVar8 == lVar7) {
        uVar3 = 0x67c6affac77e74ab;
      }
      else {
        local_418 = local_418 & 0xffffff00;
        local_3e0 = 0;
        uStack_414 = 0;
        uStack_410 = 0x3ff;
        local_3f0 = 0;
        uStack_3e8 = 0;
        local_408 = 0;
        local_400 = 0;
        uStack_3f8 = 0;
        local_420 = *(undefined8 *)(lVar5 + 0x30);
        FUN_00cc4490(local_58,*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58),
                     5,&local_420,&local_418);
        uVar3 = FUN_0106ff80(7,&local_418);
      }
      bVar1 = FUN_0106f510(7,*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
      *(undefined8 *)(param_1 + (ulong)bVar1 * 8 + 0x638) = uVar3;
    }
  }
  else if (**(int **)(lVar7 + 0x60) == 0) {
    local_198[0] = 0;
    local_194 = 0x3ff00000000;
    local_160 = 0;
    local_168 = 0;
    local_170 = 0;
    local_178 = 0;
    local_180 = 0;
    local_188 = 0;
    local_2d8 = (uint)*(undefined8 *)(lVar5 + 0x10);
    uStack_2d4 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x10) >> 0x20);
    FUN_00cc4490(local_58,*(undefined1 *)(*(long *)(lVar7 + 0x1f8) + 0x58),1,&local_2d8,local_198);
    uVar3 = FUN_0106ff80(0,local_198);
    bVar1 = FUN_0106f510(0,*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
    *(undefined8 *)(param_1 + (ulong)bVar1 * 8 + 0x638) = uVar3;
    if (*(char *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58) == '\x01') {
      uVar3 = FUN_0106ff80(1,local_198);
      bVar1 = FUN_0106f510(1,*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
      *(undefined8 *)(param_1 + (ulong)bVar1 * 8 + 0x638) = uVar3;
    }
    uVar3 = FUN_0106ff80(2,local_198);
    bVar1 = FUN_0106f510(2,*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
    *(undefined8 *)(param_1 + (ulong)bVar1 * 8 + 0x638) = uVar3;
    uVar4 = FUN_0106f400(*(undefined8 *)(*(long *)(param_1 + 0x5d0) + 0x60),1);
    if ((uVar4 & 1) != 0) {
      lVar5 = FUN_0106ff80(1,local_198);
      *(bool *)(param_1 + 0x690) = lVar5 == -0x2ff60d54f2674d29;
    }
    lVar5 = FUN_0106ff80(1,local_198);
    if (lVar5 != -0x2ff60d54f2674d29) {
      *(long *)(param_1 + 0x698) = lVar5;
    }
  }
  cVar2 = FUN_0106f4c0(**(undefined4 **)(*(long *)(param_1 + 0x5d0) + 0x60),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
  if (cVar2 != '\0') {
    uVar4 = 0;
    do {
      lVar5 = param_1 + uVar4 * 8;
      uVar4 = uVar4 + 1;
      *(undefined8 *)(lVar5 + 0x660) = *(undefined8 *)(lVar5 + 0x638);
      bVar1 = FUN_0106f4c0(**(undefined4 **)(*(long *)(param_1 + 0x5d0) + 0x60),
                           *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
    } while (uVar4 < bVar1);
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  return;
}


