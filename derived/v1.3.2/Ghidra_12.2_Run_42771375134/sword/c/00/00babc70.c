/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00babc70; name: FUN_00babc70
 */


void FUN_00babc70(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  short sVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  long *plVar8;
  short *psVar9;
  long lVar10;
  undefined8 local_48;
  
  if (*(int *)(param_1 + 0x600) == 0xb) {
    *(undefined1 *)(*(long *)(param_1 + 0x5d0) + 0x28) = 0;
    local_48 = 0x81a47cc98377713f;
    uVar7 = FUN_00ffdef0(param_1 + 0x100,&local_48);
    FUN_016b2da0(uVar7,0);
    local_48 = 0xc72ea1416f28d65c;
    uVar7 = FUN_00ffdef0(param_1 + 0x100,&local_48);
    FUN_016b2da0(uVar7,0);
    FUN_00ffa160(param_1,0,1);
    *(undefined4 *)(param_1 + 0x5cc) = 1;
  }
  else {
    lVar1 = param_1 + 0x100;
    local_48 = 0x8810f6ba0b0e64ea;
    uVar7 = FUN_00ffde30(lVar1,&local_48);
    FUN_016b2d70(uVar7,0);
    FUN_016b2eb0(uVar7);
    puVar5 = PTR_DAT_02710828;
    lVar10 = *(long *)(param_1 + 0x608);
    uVar6 = FUN_008d4030(*(undefined8 *)PTR_DAT_02710828);
    if (uVar6 < 2) {
      sVar4 = *(short *)(lVar10 + 4);
    }
    else if (uVar6 == 7) {
      sVar4 = *(short *)(lVar10 + 8);
    }
    else {
      sVar4 = *(short *)(lVar10 + 0xc);
    }
    if (sVar4 == -1) {
      if (*(int *)(param_1 + 0x600) == 9) {
        FUN_00bac0b0(param_1,1);
      }
      *(undefined4 *)(param_1 + 0x600) = 0xb;
      local_48 = 0xc72ea1416f28d65c;
      uVar7 = FUN_00ffdef0(lVar1,&local_48);
      FUN_016b2da0(uVar7,0);
      FUN_00ffd3a0(lVar1,"anime_search_list_sub");
      FUN_00ffcf80(lVar1,"anime_sub_to_main");
      FUN_00ffa160(param_1,0,1);
      FUN_00bae160(param_1,0,0x7c9b0cb1f86179bd,0x7dc9fc953a6a55f2);
      *(undefined4 *)(param_1 + 0x5cc) = 2;
    }
    else {
      lVar10 = *(long *)(param_1 + 0x608);
      uVar6 = FUN_008d4030(*(undefined8 *)puVar5);
      if (uVar6 < 2) {
        sVar4 = *(short *)(lVar10 + 4);
      }
      else if (uVar6 == 7) {
        sVar4 = *(short *)(lVar10 + 8);
      }
      else {
        sVar4 = *(short *)(lVar10 + 0xc);
      }
      if (((long)sVar4 - 0xbU < 3) && (*(short *)(param_1 + 0x610) == 0)) {
        lVar10 = *(long *)(param_1 + 0x608);
        uVar6 = FUN_008d4030(*(undefined8 *)puVar5);
        if (uVar6 < 2) {
          psVar9 = (short *)(lVar10 + 4);
        }
        else if (uVar6 == 7) {
          psVar9 = (short *)(lVar10 + 8);
        }
        else {
          psVar9 = (short *)(lVar10 + 0xc);
        }
        puVar2 = PTR_DAT_0271b628 + (long)*psVar9 * 0x10;
        *(undefined **)(param_1 + 0x608) = puVar2;
        uVar6 = FUN_008d4030(*(undefined8 *)puVar5);
        if (uVar6 < 2) {
          sVar4 = *(short *)(puVar2 + 4);
        }
        else if (uVar6 == 7) {
          sVar4 = *(short *)(puVar2 + 8);
        }
        else {
          sVar4 = *(short *)(puVar2 + 0xc);
        }
        if (sVar4 == -1) {
          *(long *)(param_1 + 0x608) = lVar10;
        }
      }
      lVar10 = *(long *)(param_1 + 0x608);
      uVar6 = FUN_008d4030(*(undefined8 *)puVar5);
      if (uVar6 < 2) {
        psVar9 = (short *)(lVar10 + 4);
      }
      else {
        psVar9 = (short *)(lVar10 + 8);
        if (uVar6 != 7) {
          psVar9 = (short *)(lVar10 + 0xc);
        }
      }
      puVar3 = (undefined4 *)(PTR_DAT_0271b628 + (long)*psVar9 * 0x10);
      *(undefined4 **)(param_1 + 0x608) = puVar3;
      FUN_00bac8f0(param_1,*puVar3);
      FUN_00bad440(param_1);
      local_48 = 0x8810f6ba0b0e64ea;
      plVar8 = (long *)FUN_00ffde30(lVar1,&local_48);
      FUN_016b2d70(plVar8,1);
      (**(code **)(*plVar8 + 0x50))(plVar8);
      local_48 = 0xc72ea1416f28d65c;
      uVar7 = FUN_00ffdef0(lVar1,&local_48);
      FUN_016b2da0(uVar7,1);
      if (*(long *)(param_1 + 0x4c0) != 0) {
        FUN_016d2080();
      }
    }
  }
  return;
}


