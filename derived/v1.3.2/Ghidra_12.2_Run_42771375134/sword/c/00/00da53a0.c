/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00da53a0; name: FUN_00da53a0
 */


void FUN_00da53a0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 local_b0;
  long local_a8;
  long local_a0 [2];
  undefined1 *local_90;
  long local_88;
  long local_80;
  undefined4 local_78;
  char local_70 [8];
  long local_68;
  
  uVar3 = FUN_00da0ab0(*(undefined8 *)PTR_DAT_0271e770,1);
  lVar4 = 0;
  uVar5 = 0;
  local_70[0] = '\0';
  local_70[1] = '\0';
  local_70[2] = '\0';
  local_70[3] = '\0';
  local_70[4] = '\0';
  local_70[5] = '\0';
  local_70[6] = '\0';
  local_70[7] = '\0';
  do {
    snprintf(local_70,8,"%02d",uVar5);
    local_a8 = *(long *)(param_2 + 8);
    FUN_00dab750(&local_68,"bin/field/draw_env/lightpreset/",&local_a8,&DAT_01d0730f,local_70,
                 ".gfblt");
    FUN_00a83620(local_a0,&local_68);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    FUN_00d633a0(&local_68,*(undefined8 *)PTR_DAT_02710788,1,local_a0,0,param_1,uVar3);
    lVar1 = param_3 + lVar4;
    if (*(long *)(lVar1 + 8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 8) + 0x48) + 0x18))();
      *(undefined8 *)(lVar1 + 8) = 0;
    }
    lVar2 = local_68;
    *(long *)(lVar1 + 8) = local_68;
    if (local_68 != 0) {
      plVar6 = (long *)(local_68 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      if ((*(long *)(lVar1 + 0x10) != 0) || (*(long *)(lVar1 + 0x90) != 0)) {
        FUN_006e1e70(lVar2,lVar1,1);
      }
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    if ((local_88 != 0) && (local_a0[0] != 0)) {
      (**(code **)(*(long *)(local_a0[0] + 0x48) + 0x18))();
    }
    local_a0[0] = 0;
    local_a0[1] = 0xcbf29ce484222645;
    local_90 = &DAT_01d38550;
    local_88 = 0;
    if (local_80 != 0) {
      (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
      local_80 = 0;
    }
    local_a8 = *(long *)(param_2 + 8);
    FUN_00dab750(&local_68,"bin/field/draw_env/lightpreset/",&local_a8,&DAT_01cd75d4,local_70,
                 ".gfblt");
    FUN_00a83620(local_a0,&local_68);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    FUN_00d633a0(&local_68,*(undefined8 *)PTR_DAT_02710788,1,local_a0,0,param_1,uVar3);
    if (*(long *)(lVar1 + 0x338) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 0x338) + 0x48) + 0x18))();
      *(undefined8 *)(lVar1 + 0x338) = 0;
    }
    lVar2 = local_68;
    *(long *)(lVar1 + 0x338) = local_68;
    if (local_68 != 0) {
      plVar6 = (long *)(local_68 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      if ((*(long *)(lVar1 + 0x340) != 0) || (*(long *)(lVar1 + 0x3c0) != 0)) {
        FUN_006e1e70(lVar2,lVar1 + 0x330,1);
      }
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    if ((local_88 != 0) && (local_a0[0] != 0)) {
      (**(code **)(*(long *)(local_a0[0] + 0x48) + 0x18))();
    }
    local_a0[0] = 0;
    local_a0[1] = 0xcbf29ce484222645;
    local_90 = &DAT_01d38550;
    local_88 = 0;
    if (local_80 != 0) {
      (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
      local_80 = 0;
    }
    lVar4 = lVar4 + 0x110;
    uVar5 = (ulong)((int)uVar5 + 1);
  } while (lVar4 != 0x330);
  FUN_00dab850(&local_a8,"bin/field/draw_env/lightpreset/",param_2,".gfbpfx");
  FUN_00a83620(local_a0,&local_a8);
  FUN_00daf9f0(&local_68,*(undefined8 *)PTR_DAT_02710788,1,local_a0,0,param_1,uVar3);
  if (*(long *)(param_3 + 0x668) != 0) {
    (**(code **)(*(long *)(*(long *)(param_3 + 0x668) + 0x48) + 0x18))();
    *(undefined8 *)(param_3 + 0x668) = 0;
  }
  lVar4 = local_68;
  *(long *)(param_3 + 0x668) = local_68;
  if (local_68 != 0) {
    plVar6 = (long *)(local_68 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    if ((*(long *)(param_3 + 0x670) != 0) || (*(long *)(param_3 + 0x6f0) != 0)) {
      FUN_006e1e70(lVar4,param_3 + 0x660,1);
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if ((local_88 != 0) && (local_a0[0] != 0)) {
    (**(code **)(*(long *)(local_a0[0] + 0x48) + 0x18))();
  }
  local_a0[0] = 0;
  local_a0[1] = 0xcbf29ce484222645;
  local_90 = &DAT_01d38550;
  local_88 = 0;
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
  }
  local_80 = 0;
  local_78 = 0;
  if (local_a8 != 0) {
    (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
    local_a8 = 0;
  }
  FUN_00dab850(&local_a8,"bin/field/draw_env/lightpreset/",param_2,".gfbfog");
  FUN_00a83620(local_a0,&local_a8);
  FUN_00db02f0(&local_68,*(undefined8 *)PTR_DAT_02710788,1,local_a0,0,param_1,uVar3);
  if (*(long *)(param_3 + 0xee8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_3 + 0xee8) + 0x48) + 0x18))();
    *(undefined8 *)(param_3 + 0xee8) = 0;
  }
  lVar4 = local_68;
  *(long *)(param_3 + 0xee8) = local_68;
  if (local_68 != 0) {
    plVar6 = (long *)(local_68 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    if ((*(long *)(param_3 + 0xef0) != 0) || (*(long *)(param_3 + 0xf70) != 0)) {
      FUN_006e1e70(lVar4,param_3 + 0xee0,1);
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if ((local_88 != 0) && (local_a0[0] != 0)) {
    (**(code **)(*(long *)(local_a0[0] + 0x48) + 0x18))();
  }
  local_a0[0] = 0;
  local_a0[1] = 0xcbf29ce484222645;
  local_90 = &DAT_01d38550;
  local_88 = 0;
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
  }
  local_80 = 0;
  local_78 = 0;
  if (local_a8 != 0) {
    (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
    local_a8 = 0;
  }
  lVar4 = 0;
  param_3 = param_3 + 0x770;
  do {
    local_b0 = *(undefined8 *)(param_2 + 8);
    FUN_00dab8f0(&local_a8,"bin/field/draw_env/lightpreset/",&local_b0,
                 (long)&PTR_s__bg_gfbmad_0264f1e0 + lVar4);
    FUN_00a83620(local_a0,&local_a8);
    FUN_006dccd0(&local_68,*(undefined8 *)PTR_DAT_02710788,1,local_a0,0,param_1,uVar3);
    if (*(long *)(param_3 + 8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_3 + 8) + 0x48) + 0x18))();
      *(undefined8 *)(param_3 + 8) = 0;
    }
    lVar1 = local_68;
    *(long *)(param_3 + 8) = local_68;
    if (local_68 != 0) {
      plVar6 = (long *)(local_68 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      if ((*(long *)(param_3 + 0x10) != 0) || (*(long *)(param_3 + 0x90) != 0)) {
        FUN_006e1e70(lVar1,param_3,1);
      }
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    if ((local_88 != 0) && (local_a0[0] != 0)) {
      (**(code **)(*(long *)(local_a0[0] + 0x48) + 0x18))();
    }
    local_a0[0] = 0;
    local_a0[1] = 0xcbf29ce484222645;
    local_90 = &DAT_01d38550;
    local_88 = 0;
    if (local_80 != 0) {
      (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    }
    local_80 = 0;
    local_78 = 0;
    if (local_a8 != 0) {
      (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
      local_a8 = 0;
    }
    lVar4 = lVar4 + 8;
    param_3 = param_3 + 0x110;
  } while (lVar4 != 0x38);
  return;
}


