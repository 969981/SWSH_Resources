/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a63350; name: FUN_00a63350
 */


void FUN_00a63350(long param_1,int param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 local_260;
  char *local_258;
  undefined8 local_250;
  long local_248;
  undefined8 local_240;
  char *local_238;
  undefined8 local_230;
  long local_228;
  undefined8 local_220;
  char *local_218;
  undefined8 local_210;
  long local_208;
  undefined8 local_200;
  char *local_1f8;
  undefined8 local_1f0;
  long local_1e8;
  undefined8 local_1e0;
  char *local_1d8;
  undefined8 local_1d0;
  long local_1c8;
  undefined8 local_1c0;
  char *local_1b8;
  undefined8 local_1b0;
  long local_1a8;
  undefined8 local_1a0;
  char *local_198;
  undefined8 local_190;
  long local_188;
  undefined8 local_180;
  char *local_178;
  undefined8 local_170;
  long local_168;
  undefined8 local_160;
  char *local_158;
  undefined8 local_150;
  long local_148;
  undefined1 *local_140;
  code *local_138;
  code *local_130;
  undefined1 *local_128;
  long local_120;
  undefined8 uStack_118;
  undefined8 local_b8;
  char *local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98 [2];
  undefined1 *local_88;
  long local_80;
  long local_78;
  undefined4 local_70;
  
  uVar7 = (ulong)*(byte *)(param_1 + 0x14c0);
  lVar8 = 0x160;
  if (uVar7 != 0) {
    lVar8 = 0x180;
  }
  uVar10 = *(undefined8 *)(param_1 + lVar8 + 0xb8);
  lVar8 = param_1 + uVar7 * 0x460;
  if ((*(long *)(lVar8 + 0xc28) != 0) || (*(long *)(param_1 + uVar7 * 0x460 + 0xd38) != 0)) {
    FUN_00a6d340(param_1,uVar7);
  }
  if (5 < param_2 - 1U) {
    return;
  }
  lVar5 = lVar8 + 0xe40;
  lVar8 = lVar8 + 0xf50;
  uStack_118 = uVar10;
  switch(param_2) {
  case 1:
    lVar6 = param_1 + uVar7 * 0x460;
    pcVar3 = *(code **)(lVar6 + 0xe58);
    if (pcVar3 == (code *)0x0) {
      plVar9 = (long *)(param_1 + uVar7 * 0x460 + 0xe70);
    }
    else {
      plVar9 = (long *)(param_1 + uVar7 * 0x460 + 0xe70);
      *(undefined8 *)(lVar6 + 0xe60) = 0;
      *(undefined8 *)(lVar6 + 0xe68) = 0;
      *(undefined8 *)(lVar6 + 0xe50) = 0;
      *(undefined8 *)(lVar6 + 0xe58) = 0;
      (*pcVar3)(plVar9);
    }
    lVar4 = param_1 + uVar7 * 0x460;
    *plVar9 = param_1;
    *(undefined8 *)(lVar4 + 0xe78) = uVar10;
    *(undefined8 *)(lVar6 + 0xe50) = &LAB_00a8da70;
    *(undefined1 **)(lVar6 + 0xe58) = &LAB_00a8dc60;
    *(undefined1 **)(lVar6 + 0xe60) = &LAB_00a8de20;
    *(undefined1 **)(lVar6 + 0xe68) = &LAB_00a8de30;
    lVar6 = *(long *)(lVar4 + 0xe48);
    if (lVar6 != 0) {
      plVar9 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_006e1e70(lVar6,lVar5,1);
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    local_b8 = 0x38f345ddd3f7fa32;
    local_b0 = "ee050_grs01";
    local_a8 = 0xb;
    local_a0 = 0;
    FUN_00a85c40(&local_140,"bin/archive/battle/effect/");
    FUN_00a85d70(local_98,&local_140,&local_b8,".gfpak");
    if ((local_128 != (undefined1 *)0x0) && (local_140 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)(local_140 + 0x48) + 0x18))();
    }
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0xcbf29ce484222645;
    local_130 = (code *)&DAT_01d38550;
    local_128 = (undefined1 *)0x0;
    if (local_120 != 0) {
      (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
      local_120 = 0;
    }
    puVar1 = PTR_DAT_02710788;
    FUN_006dccd0(&local_140,*(undefined8 *)PTR_DAT_02710788,1,local_98,0,
                 *(undefined8 *)(param_1 + 0xd8),0);
    lVar4 = param_1 + uVar7 * 0x460;
    lVar6 = *(long *)(lVar4 + 0xe48);
    plVar9 = (long *)(lVar4 + 0xe48);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
      *plVar9 = 0;
    }
    puVar2 = local_140;
    *plVar9 = (long)local_140;
    if (local_140 != (undefined1 *)0x0) {
      plVar9 = (long *)(local_140 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      if ((*(long *)(param_1 + uVar7 * 0x460 + 0xe50) != 0) ||
         (*(long *)(param_1 + uVar7 * 0x460 + 0xed0) != 0)) {
        FUN_006e1e70(puVar2,lVar5,1);
      }
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    if ((local_80 != 0) && (local_98[0] != 0)) {
      (**(code **)(*(long *)(local_98[0] + 0x48) + 0x18))();
    }
    local_98[0] = 0;
    local_98[1] = 0xcbf29ce484222645;
    local_88 = &DAT_01d38550;
    local_80 = 0;
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    }
    local_78 = 0;
    local_70 = 0;
    if (local_a0 != 0) {
      (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
      local_a0 = 0;
    }
    local_140 = &LAB_00a8de40;
    local_138 = FUN_00a8e030;
    local_130 = FUN_00a8e1f0;
    local_128 = &LAB_00a8e200;
    lVar5 = param_1 + uVar7 * 0x460;
    pcVar3 = *(code **)(lVar5 + 0xf68);
    if (pcVar3 == (code *)0x0) {
      lVar6 = param_1 + uVar7 * 0x460 + 0xf80;
      local_120 = param_1;
LAB_00a64418:
      (*local_130)(&local_120,lVar6);
      *(undefined1 **)(lVar5 + 0xf78) = local_128;
      *(code **)(lVar5 + 0xf68) = local_138;
      *(code **)(lVar5 + 0xf70) = local_130;
      *(undefined8 *)(lVar5 + 0xf60) = local_140;
    }
    else {
      lVar6 = param_1 + uVar7 * 0x460 + 0xf80;
      *(undefined8 *)(lVar5 + 0xf70) = 0;
      *(undefined8 *)(lVar5 + 0xf78) = 0;
      *(undefined8 *)(lVar5 + 0xf60) = 0;
      *(undefined8 *)(lVar5 + 0xf68) = 0;
      local_120 = param_1;
      (*pcVar3)(lVar6);
      if (local_130 != (code *)0x0) goto LAB_00a64418;
    }
    lVar5 = *(long *)(param_1 + uVar7 * 0x460 + 0xf58);
    if (lVar5 != 0) {
      plVar9 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_006e1e70(lVar5,lVar8,1);
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    pcVar3 = local_138;
    if (local_138 != (code *)0x0) {
      local_130 = (code *)0x0;
      local_128 = (undefined1 *)0x0;
      local_140 = (undefined1 *)0x0;
      local_138 = (code *)0x0;
      (*pcVar3)(&local_120);
    }
    local_160 = 0x5e52322f3095ad9e;
    local_158 = "ee050_grs01_cam";
    local_150 = 0xf;
    local_148 = 0;
    FUN_00a85c40(&local_140,"bin/archive/battle/effect/");
    FUN_00a85d70(local_98,&local_140,&local_160,".gfpak");
    if ((local_128 != (undefined1 *)0x0) && (local_140 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)(local_140 + 0x48) + 0x18))();
    }
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0xcbf29ce484222645;
    local_130 = (code *)&DAT_01d38550;
    local_128 = (undefined1 *)0x0;
    if (local_120 != 0) {
      (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
      local_120 = 0;
    }
    FUN_006dccd0(&local_140,*(undefined8 *)puVar1,1,local_98,0,*(undefined8 *)(param_1 + 0xd8),0);
    lVar6 = param_1 + uVar7 * 0x460;
    lVar5 = *(long *)(lVar6 + 0xf58);
    plVar9 = (long *)(lVar6 + 0xf58);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      *plVar9 = 0;
    }
    puVar2 = local_140;
    *plVar9 = (long)local_140;
    if (local_140 != (undefined1 *)0x0) {
      plVar9 = (long *)(local_140 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      if ((*(long *)(param_1 + uVar7 * 0x460 + 0xf60) != 0) ||
         (*(long *)(param_1 + uVar7 * 0x460 + 0xfe0) != 0)) {
        FUN_006e1e70(puVar2,lVar8,1);
      }
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    if ((local_80 != 0) && (local_98[0] != 0)) {
      (**(code **)(*(long *)(local_98[0] + 0x48) + 0x18))();
    }
    local_98[0] = 0;
    local_98[1] = 0xcbf29ce484222645;
    local_88 = &DAT_01d38550;
    local_80 = 0;
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    }
    local_78 = 0;
    local_70 = 0;
    if (local_148 != 0) {
      (**(code **)(*(long *)(local_148 + 0x48) + 0x18))();
    }
    break;
  case 2:
    lVar6 = param_1 + uVar7 * 0x460;
    pcVar3 = *(code **)(lVar6 + 0xe58);
    if (pcVar3 == (code *)0x0) {
      plVar9 = (long *)(param_1 + uVar7 * 0x460 + 0xe70);
    }
    else {
      plVar9 = (long *)(param_1 + uVar7 * 0x460 + 0xe70);
      *(undefined8 *)(lVar6 + 0xe60) = 0;
      *(undefined8 *)(lVar6 + 0xe68) = 0;
      *(undefined8 *)(lVar6 + 0xe50) = 0;
      *(undefined8 *)(lVar6 + 0xe58) = 0;
      (*pcVar3)(plVar9);
    }
    lVar4 = param_1 + uVar7 * 0x460;
    *plVar9 = param_1;
    *(undefined8 *)(lVar4 + 0xe78) = uVar10;
    *(undefined8 *)(lVar6 + 0xe50) = &LAB_00a8e210;
    *(undefined1 **)(lVar6 + 0xe58) = &LAB_00a8e400;
    *(undefined1 **)(lVar6 + 0xe60) = &LAB_00a8e410;
    *(undefined1 **)(lVar6 + 0xe68) = &LAB_00a8e420;
    lVar6 = *(long *)(lVar4 + 0xe48);
    if (lVar6 != 0) {
      plVar9 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_006e1e70(lVar6,lVar5,1);
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    local_180 = 0x850d918cfab7f5f;
    local_178 = "ee051_mst01";
    local_170 = 0xb;
    local_168 = 0;
    FUN_00a85c40(&local_140,"bin/archive/battle/effect/");
    FUN_00a85d70(local_98,&local_140,&local_180,".gfpak");
    if ((local_128 != (undefined1 *)0x0) && (local_140 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)(local_140 + 0x48) + 0x18))();
    }
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0xcbf29ce484222645;
    local_130 = (code *)&DAT_01d38550;
    local_128 = (undefined1 *)0x0;
    if (local_120 != 0) {
      (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
      local_120 = 0;
    }
    puVar1 = PTR_DAT_02710788;
    FUN_006dccd0(&local_140,*(undefined8 *)PTR_DAT_02710788,1,local_98,0,
                 *(undefined8 *)(param_1 + 0xd8),0);
    lVar4 = param_1 + uVar7 * 0x460;
    lVar6 = *(long *)(lVar4 + 0xe48);
    plVar9 = (long *)(lVar4 + 0xe48);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
      *plVar9 = 0;
    }
    puVar2 = local_140;
    *plVar9 = (long)local_140;
    if (local_140 != (undefined1 *)0x0) {
      plVar9 = (long *)(local_140 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      if ((*(long *)(param_1 + uVar7 * 0x460 + 0xe50) != 0) ||
         (*(long *)(param_1 + uVar7 * 0x460 + 0xed0) != 0)) {
        FUN_006e1e70(puVar2,lVar5,1);
      }
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    if ((local_80 != 0) && (local_98[0] != 0)) {
      (**(code **)(*(long *)(local_98[0] + 0x48) + 0x18))();
    }
    local_98[0] = 0;
    local_98[1] = 0xcbf29ce484222645;
    local_88 = &DAT_01d38550;
    local_80 = 0;
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    }
    local_78 = 0;
    local_70 = 0;
    if (local_168 != 0) {
      (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
      local_168 = 0;
    }
    local_140 = &LAB_00a8e430;
    local_138 = FUN_00a8e620;
    local_130 = FUN_00a8e630;
    local_128 = &LAB_00a8e640;
    lVar5 = param_1 + uVar7 * 0x460;
    pcVar3 = *(code **)(lVar5 + 0xf68);
    if (pcVar3 == (code *)0x0) {
      lVar6 = param_1 + uVar7 * 0x460 + 0xf80;
      local_120 = param_1;
LAB_00a64654:
      (*local_130)(&local_120,lVar6);
      *(undefined1 **)(lVar5 + 0xf78) = local_128;
      *(code **)(lVar5 + 0xf68) = local_138;
      *(code **)(lVar5 + 0xf70) = local_130;
      *(undefined8 *)(lVar5 + 0xf60) = local_140;
    }
    else {
      lVar6 = param_1 + uVar7 * 0x460 + 0xf80;
      *(undefined8 *)(lVar5 + 0xf70) = 0;
      *(undefined8 *)(lVar5 + 0xf78) = 0;
      *(undefined8 *)(lVar5 + 0xf60) = 0;
      *(undefined8 *)(lVar5 + 0xf68) = 0;
      local_120 = param_1;
      (*pcVar3)(lVar6);
      if (local_130 != (code *)0x0) goto LAB_00a64654;
    }
    lVar5 = *(long *)(param_1 + uVar7 * 0x460 + 0xf58);
    if (lVar5 != 0) {
      plVar9 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_006e1e70(lVar5,lVar8,1);
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    pcVar3 = local_138;
    if (local_138 != (code *)0x0) {
      local_130 = (code *)0x0;
      local_128 = (undefined1 *)0x0;
      local_140 = (undefined1 *)0x0;
      local_138 = (code *)0x0;
      (*pcVar3)(&local_120);
    }
    local_1a0 = 0x73c40abcc2788b1f;
    local_198 = "ee051_mst01_cam";
    local_190 = 0xf;
    local_188 = 0;
    FUN_00a85c40(&local_140,"bin/archive/battle/effect/");
    FUN_00a85d70(local_98,&local_140,&local_1a0,".gfpak");
    if ((local_128 != (undefined1 *)0x0) && (local_140 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)(local_140 + 0x48) + 0x18))();
    }
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0xcbf29ce484222645;
    local_130 = (code *)&DAT_01d38550;
    local_128 = (undefined1 *)0x0;
    if (local_120 != 0) {
      (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
      local_120 = 0;
    }
    FUN_006dccd0(&local_140,*(undefined8 *)puVar1,1,local_98,0,*(undefined8 *)(param_1 + 0xd8),0);
    lVar6 = param_1 + uVar7 * 0x460;
    lVar5 = *(long *)(lVar6 + 0xf58);
    plVar9 = (long *)(lVar6 + 0xf58);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      *plVar9 = 0;
    }
    puVar2 = local_140;
    *plVar9 = (long)local_140;
    if (local_140 != (undefined1 *)0x0) {
      plVar9 = (long *)(local_140 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      if ((*(long *)(param_1 + uVar7 * 0x460 + 0xf60) != 0) ||
         (*(long *)(param_1 + uVar7 * 0x460 + 0xfe0) != 0)) {
        FUN_006e1e70(puVar2,lVar8,1);
      }
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    if ((local_80 != 0) && (local_98[0] != 0)) {
      (**(code **)(*(long *)(local_98[0] + 0x48) + 0x18))();
    }
    local_98[0] = 0;
    local_98[1] = 0xcbf29ce484222645;
    local_88 = &DAT_01d38550;
    local_80 = 0;
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    }
    local_78 = 0;
    local_70 = 0;
    if (local_188 != 0) {
      (**(code **)(*(long *)(local_188 + 0x48) + 0x18))();
    }
    break;
  case 3:
    lVar6 = param_1 + uVar7 * 0x460;
    pcVar3 = *(code **)(lVar6 + 0xe58);
    if (pcVar3 == (code *)0x0) {
      plVar9 = (long *)(param_1 + uVar7 * 0x460 + 0xe70);
    }
    else {
      plVar9 = (long *)(param_1 + uVar7 * 0x460 + 0xe70);
      *(undefined8 *)(lVar6 + 0xe60) = 0;
      *(undefined8 *)(lVar6 + 0xe68) = 0;
      *(undefined8 *)(lVar6 + 0xe50) = 0;
      *(undefined8 *)(lVar6 + 0xe58) = 0;
      (*pcVar3)(plVar9);
    }
    lVar4 = param_1 + uVar7 * 0x460;
    *plVar9 = param_1;
    *(undefined8 *)(lVar4 + 0xe78) = uVar10;
    *(undefined8 *)(lVar6 + 0xe50) = &LAB_00a8e650;
    *(undefined1 **)(lVar6 + 0xe58) = &LAB_00a8e840;
    *(undefined1 **)(lVar6 + 0xe60) = &LAB_00a8e850;
    *(undefined1 **)(lVar6 + 0xe68) = &LAB_00a8e860;
    lVar6 = *(long *)(lVar4 + 0xe48);
    if (lVar6 != 0) {
      plVar9 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_006e1e70(lVar6,lVar5,1);
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    local_1c0 = 0x5f55f63523882e30;
    local_1b8 = "ee052_elc01";
    local_1b0 = 0xb;
    local_1a8 = 0;
    FUN_00a85c40(&local_140,"bin/archive/battle/effect/");
    FUN_00a85d70(local_98,&local_140,&local_1c0,".gfpak");
    if ((local_128 != (undefined1 *)0x0) && (local_140 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)(local_140 + 0x48) + 0x18))();
    }
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0xcbf29ce484222645;
    local_130 = (code *)&DAT_01d38550;
    local_128 = (undefined1 *)0x0;
    if (local_120 != 0) {
      (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
      local_120 = 0;
    }
    puVar1 = PTR_DAT_02710788;
    FUN_006dccd0(&local_140,*(undefined8 *)PTR_DAT_02710788,1,local_98,0,
                 *(undefined8 *)(param_1 + 0xd8),0);
    lVar4 = param_1 + uVar7 * 0x460;
    lVar6 = *(long *)(lVar4 + 0xe48);
    plVar9 = (long *)(lVar4 + 0xe48);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
      *plVar9 = 0;
    }
    puVar2 = local_140;
    *plVar9 = (long)local_140;
    if (local_140 != (undefined1 *)0x0) {
      plVar9 = (long *)(local_140 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      if ((*(long *)(param_1 + uVar7 * 0x460 + 0xe50) != 0) ||
         (*(long *)(param_1 + uVar7 * 0x460 + 0xed0) != 0)) {
        FUN_006e1e70(puVar2,lVar5,1);
      }
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    if ((local_80 != 0) && (local_98[0] != 0)) {
      (**(code **)(*(long *)(local_98[0] + 0x48) + 0x18))();
    }
    local_98[0] = 0;
    local_98[1] = 0xcbf29ce484222645;
    local_88 = &DAT_01d38550;
    local_80 = 0;
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    }
    local_78 = 0;
    local_70 = 0;
    if (local_1a8 != 0) {
      (**(code **)(*(long *)(local_1a8 + 0x48) + 0x18))();
      local_1a8 = 0;
    }
    local_140 = &LAB_00a8e870;
    local_138 = FUN_00a8ea60;
    local_130 = FUN_00a8ea70;
    local_128 = &LAB_00a8ea80;
    lVar5 = param_1 + uVar7 * 0x460;
    pcVar3 = *(code **)(lVar5 + 0xf68);
    if (pcVar3 == (code *)0x0) {
      lVar6 = param_1 + uVar7 * 0x460 + 0xf80;
      local_120 = param_1;
LAB_00a64890:
      (*local_130)(&local_120,lVar6);
      *(undefined1 **)(lVar5 + 0xf78) = local_128;
      *(code **)(lVar5 + 0xf68) = local_138;
      *(code **)(lVar5 + 0xf70) = local_130;
      *(undefined8 *)(lVar5 + 0xf60) = local_140;
    }
    else {
      lVar6 = param_1 + uVar7 * 0x460 + 0xf80;
      *(undefined8 *)(lVar5 + 0xf70) = 0;
      *(undefined8 *)(lVar5 + 0xf78) = 0;
      *(undefined8 *)(lVar5 + 0xf60) = 0;
      *(undefined8 *)(lVar5 + 0xf68) = 0;
      local_120 = param_1;
      (*pcVar3)(lVar6);
      if (local_130 != (code *)0x0) goto LAB_00a64890;
    }
    lVar5 = *(long *)(param_1 + uVar7 * 0x460 + 0xf58);
    if (lVar5 != 0) {
      plVar9 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_006e1e70(lVar5,lVar8,1);
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    pcVar3 = local_138;
    if (local_138 != (code *)0x0) {
      local_130 = (code *)0x0;
      local_128 = (undefined1 *)0x0;
      local_140 = (undefined1 *)0x0;
      local_138 = (code *)0x0;
      (*pcVar3)(&local_120);
    }
    local_1e0 = 0x21cb4875e6371804;
    local_1d8 = "ee052_elc01_cam";
    local_1d0 = 0xf;
    local_1c8 = 0;
    FUN_00a85c40(&local_140,"bin/archive/battle/effect/");
    FUN_00a85d70(local_98,&local_140,&local_1e0,".gfpak");
    if ((local_128 != (undefined1 *)0x0) && (local_140 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)(local_140 + 0x48) + 0x18))();
    }
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0xcbf29ce484222645;
    local_130 = (code *)&DAT_01d38550;
    local_128 = (undefined1 *)0x0;
    if (local_120 != 0) {
      (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
      local_120 = 0;
    }
    FUN_006dccd0(&local_140,*(undefined8 *)puVar1,1,local_98,0,*(undefined8 *)(param_1 + 0xd8),0);
    lVar6 = param_1 + uVar7 * 0x460;
    lVar5 = *(long *)(lVar6 + 0xf58);
    plVar9 = (long *)(lVar6 + 0xf58);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      *plVar9 = 0;
    }
    puVar2 = local_140;
    *plVar9 = (long)local_140;
    if (local_140 != (undefined1 *)0x0) {
      plVar9 = (long *)(local_140 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      if ((*(long *)(param_1 + uVar7 * 0x460 + 0xf60) != 0) ||
         (*(long *)(param_1 + uVar7 * 0x460 + 0xfe0) != 0)) {
        FUN_006e1e70(puVar2,lVar8,1);
      }
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    if ((local_80 != 0) && (local_98[0] != 0)) {
      (**(code **)(*(long *)(local_98[0] + 0x48) + 0x18))();
    }
    local_98[0] = 0;
    local_98[1] = 0xcbf29ce484222645;
    local_88 = &DAT_01d38550;
    local_80 = 0;
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    }
    local_78 = 0;
    local_70 = 0;
    if (local_1c8 != 0) {
      (**(code **)(*(long *)(local_1c8 + 0x48) + 0x18))();
    }
    break;
  case 4:
    lVar6 = param_1 + uVar7 * 0x460;
    pcVar3 = *(code **)(lVar6 + 0xe58);
    if (pcVar3 == (code *)0x0) {
      plVar9 = (long *)(param_1 + uVar7 * 0x460 + 0xe70);
    }
    else {
      plVar9 = (long *)(param_1 + uVar7 * 0x460 + 0xe70);
      *(undefined8 *)(lVar6 + 0xe60) = 0;
      *(undefined8 *)(lVar6 + 0xe68) = 0;
      *(undefined8 *)(lVar6 + 0xe50) = 0;
      *(undefined8 *)(lVar6 + 0xe58) = 0;
      (*pcVar3)(plVar9);
    }
    lVar4 = param_1 + uVar7 * 0x460;
    *plVar9 = param_1;
    *(undefined8 *)(lVar4 + 0xe78) = uVar10;
    *(undefined8 *)(lVar6 + 0xe50) = &LAB_00a8ea90;
    *(undefined1 **)(lVar6 + 0xe58) = &LAB_00a8ec80;
    *(undefined1 **)(lVar6 + 0xe60) = &LAB_00a8ec90;
    *(undefined1 **)(lVar6 + 0xe68) = &LAB_00a8eca0;
    lVar6 = *(long *)(lVar4 + 0xe48);
    if (lVar6 != 0) {
      plVar9 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_006e1e70(lVar6,lVar5,1);
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    local_200 = 0x2e17f82cfa45edbd;
    local_1f8 = "ee053_psy01";
    local_1f0 = 0xb;
    local_1e8 = 0;
    FUN_00a85c40(&local_140,"bin/archive/battle/effect/");
    FUN_00a85d70(local_98,&local_140,&local_200,".gfpak");
    if ((local_128 != (undefined1 *)0x0) && (local_140 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)(local_140 + 0x48) + 0x18))();
    }
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0xcbf29ce484222645;
    local_130 = (code *)&DAT_01d38550;
    local_128 = (undefined1 *)0x0;
    if (local_120 != 0) {
      (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
      local_120 = 0;
    }
    puVar1 = PTR_DAT_02710788;
    FUN_006dccd0(&local_140,*(undefined8 *)PTR_DAT_02710788,1,local_98,0,
                 *(undefined8 *)(param_1 + 0xd8),0);
    lVar4 = param_1 + uVar7 * 0x460;
    lVar6 = *(long *)(lVar4 + 0xe48);
    plVar9 = (long *)(lVar4 + 0xe48);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
      *plVar9 = 0;
    }
    puVar2 = local_140;
    *plVar9 = (long)local_140;
    if (local_140 != (undefined1 *)0x0) {
      plVar9 = (long *)(local_140 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      if ((*(long *)(param_1 + uVar7 * 0x460 + 0xe50) != 0) ||
         (*(long *)(param_1 + uVar7 * 0x460 + 0xed0) != 0)) {
        FUN_006e1e70(puVar2,lVar5,1);
      }
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    if ((local_80 != 0) && (local_98[0] != 0)) {
      (**(code **)(*(long *)(local_98[0] + 0x48) + 0x18))();
    }
    local_98[0] = 0;
    local_98[1] = 0xcbf29ce484222645;
    local_88 = &DAT_01d38550;
    local_80 = 0;
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    }
    local_78 = 0;
    local_70 = 0;
    if (local_1e8 != 0) {
      (**(code **)(*(long *)(local_1e8 + 0x48) + 0x18))();
      local_1e8 = 0;
    }
    local_140 = &LAB_00a8ecb0;
    local_138 = FUN_00a8eea0;
    local_130 = FUN_00a8eeb0;
    local_128 = &LAB_00a8eec0;
    lVar5 = param_1 + uVar7 * 0x460;
    pcVar3 = *(code **)(lVar5 + 0xf68);
    if (pcVar3 == (code *)0x0) {
      lVar6 = param_1 + uVar7 * 0x460 + 0xf80;
      local_120 = param_1;
LAB_00a64acc:
      (*local_130)(&local_120,lVar6);
      *(undefined1 **)(lVar5 + 0xf78) = local_128;
      *(code **)(lVar5 + 0xf68) = local_138;
      *(code **)(lVar5 + 0xf70) = local_130;
      *(undefined8 *)(lVar5 + 0xf60) = local_140;
    }
    else {
      lVar6 = param_1 + uVar7 * 0x460 + 0xf80;
      *(undefined8 *)(lVar5 + 0xf70) = 0;
      *(undefined8 *)(lVar5 + 0xf78) = 0;
      *(undefined8 *)(lVar5 + 0xf60) = 0;
      *(undefined8 *)(lVar5 + 0xf68) = 0;
      local_120 = param_1;
      (*pcVar3)(lVar6);
      if (local_130 != (code *)0x0) goto LAB_00a64acc;
    }
    lVar5 = *(long *)(param_1 + uVar7 * 0x460 + 0xf58);
    if (lVar5 != 0) {
      plVar9 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_006e1e70(lVar5,lVar8,1);
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    pcVar3 = local_138;
    if (local_138 != (code *)0x0) {
      local_130 = (code *)0x0;
      local_128 = (undefined1 *)0x0;
      local_140 = (undefined1 *)0x0;
      local_138 = (code *)0x0;
      (*pcVar3)(&local_120);
    }
    local_220 = 0xe6170abb1b4220b5;
    local_218 = "ee053_psy01_cam";
    local_210 = 0xf;
    local_208 = 0;
    FUN_00a85c40(&local_140,"bin/archive/battle/effect/");
    FUN_00a85d70(local_98,&local_140,&local_220,".gfpak");
    if ((local_128 != (undefined1 *)0x0) && (local_140 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)(local_140 + 0x48) + 0x18))();
    }
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0xcbf29ce484222645;
    local_130 = (code *)&DAT_01d38550;
    local_128 = (undefined1 *)0x0;
    if (local_120 != 0) {
      (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
      local_120 = 0;
    }
    FUN_006dccd0(&local_140,*(undefined8 *)puVar1,1,local_98,0,*(undefined8 *)(param_1 + 0xd8),0);
    lVar6 = param_1 + uVar7 * 0x460;
    lVar5 = *(long *)(lVar6 + 0xf58);
    plVar9 = (long *)(lVar6 + 0xf58);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      *plVar9 = 0;
    }
    puVar2 = local_140;
    *plVar9 = (long)local_140;
    if (local_140 != (undefined1 *)0x0) {
      plVar9 = (long *)(local_140 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      if ((*(long *)(param_1 + uVar7 * 0x460 + 0xf60) != 0) ||
         (*(long *)(param_1 + uVar7 * 0x460 + 0xfe0) != 0)) {
        FUN_006e1e70(puVar2,lVar8,1);
      }
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    if ((local_80 != 0) && (local_98[0] != 0)) {
      (**(code **)(*(long *)(local_98[0] + 0x48) + 0x18))();
    }
    local_98[0] = 0;
    local_98[1] = 0xcbf29ce484222645;
    local_88 = &DAT_01d38550;
    local_80 = 0;
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    }
    local_78 = 0;
    local_70 = 0;
    if (local_208 != 0) {
      (**(code **)(*(long *)(local_208 + 0x48) + 0x18))();
    }
    break;
  case 5:
    lVar8 = param_1 + uVar7 * 0x460;
    pcVar3 = *(code **)(lVar8 + 0xe58);
    if (pcVar3 == (code *)0x0) {
      plVar9 = (long *)(param_1 + uVar7 * 0x460 + 0xe70);
    }
    else {
      plVar9 = (long *)(param_1 + uVar7 * 0x460 + 0xe70);
      *(undefined8 *)(lVar8 + 0xe60) = 0;
      *(undefined8 *)(lVar8 + 0xe68) = 0;
      *(undefined8 *)(lVar8 + 0xe50) = 0;
      *(undefined8 *)(lVar8 + 0xe58) = 0;
      (*pcVar3)(plVar9);
    }
    lVar6 = param_1 + uVar7 * 0x460;
    *plVar9 = param_1;
    *(undefined8 *)(lVar6 + 0xe78) = uVar10;
    *(undefined8 *)(lVar8 + 0xe50) = &LAB_00a8eed0;
    *(undefined1 **)(lVar8 + 0xe58) = &LAB_00a8f0c0;
    *(undefined1 **)(lVar8 + 0xe60) = &LAB_00a8f0d0;
    *(undefined1 **)(lVar8 + 0xe68) = &LAB_00a8f0e0;
    lVar8 = *(long *)(lVar6 + 0xe48);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_006e1e70(lVar8,lVar5,1);
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    local_240 = 0xa86d00eebed73ff9;
    local_238 = "ee700_bg_fog_01";
    local_230 = 0xf;
    local_228 = 0;
    FUN_00a85c40(&local_140,"bin/archive/battle/effect/");
    FUN_00a85d70(local_98,&local_140,&local_240,".gfpak");
    if ((local_128 != (undefined1 *)0x0) && (local_140 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)(local_140 + 0x48) + 0x18))();
    }
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0xcbf29ce484222645;
    local_130 = (code *)&DAT_01d38550;
    local_128 = (undefined1 *)0x0;
    if (local_120 != 0) {
      (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
      local_120 = 0;
    }
    FUN_006dccd0(&local_140,*(undefined8 *)PTR_DAT_02710788,1,local_98,0,
                 *(undefined8 *)(param_1 + 0xd8),0);
    lVar6 = param_1 + uVar7 * 0x460;
    lVar8 = *(long *)(lVar6 + 0xe48);
    plVar9 = (long *)(lVar6 + 0xe48);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
      *plVar9 = 0;
    }
    puVar2 = local_140;
    *plVar9 = (long)local_140;
    if (local_140 != (undefined1 *)0x0) {
      plVar9 = (long *)(local_140 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      if ((*(long *)(param_1 + uVar7 * 0x460 + 0xe50) != 0) ||
         (*(long *)(param_1 + uVar7 * 0x460 + 0xed0) != 0)) {
        FUN_006e1e70(puVar2,lVar5,1);
      }
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    if ((local_80 != 0) && (local_98[0] != 0)) {
      (**(code **)(*(long *)(local_98[0] + 0x48) + 0x18))();
    }
    local_98[0] = 0;
    local_98[1] = 0xcbf29ce484222645;
    local_88 = &DAT_01d38550;
    local_80 = 0;
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    }
    local_78 = 0;
    local_70 = 0;
    if (local_228 != 0) {
      (**(code **)(*(long *)(local_228 + 0x48) + 0x18))();
    }
    break;
  case 6:
    lVar8 = param_1 + uVar7 * 0x460;
    pcVar3 = *(code **)(lVar8 + 0xe58);
    if (pcVar3 == (code *)0x0) {
      plVar9 = (long *)(param_1 + uVar7 * 0x460 + 0xe70);
    }
    else {
      plVar9 = (long *)(param_1 + uVar7 * 0x460 + 0xe70);
      *(undefined8 *)(lVar8 + 0xe60) = 0;
      *(undefined8 *)(lVar8 + 0xe68) = 0;
      *(undefined8 *)(lVar8 + 0xe50) = 0;
      *(undefined8 *)(lVar8 + 0xe58) = 0;
      (*pcVar3)(plVar9);
    }
    lVar6 = param_1 + uVar7 * 0x460;
    *plVar9 = param_1;
    *(undefined8 *)(lVar6 + 0xe78) = uVar10;
    *(undefined8 *)(lVar8 + 0xe50) = &LAB_00a8f0f0;
    *(undefined1 **)(lVar8 + 0xe58) = &LAB_00a8f2e0;
    *(undefined1 **)(lVar8 + 0xe60) = &LAB_00a8f2f0;
    *(undefined1 **)(lVar8 + 0xe68) = &LAB_00a8f300;
    lVar8 = *(long *)(lVar6 + 0xe48);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_006e1e70(lVar8,lVar5,1);
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    local_260 = 0xa86cfdeebed73ae0;
    local_258 = "ee700_bg_fog_02";
    local_250 = 0xf;
    local_248 = 0;
    FUN_00a85c40(&local_140,"bin/archive/battle/effect/");
    FUN_00a85d70(local_98,&local_140,&local_260,".gfpak");
    if ((local_128 != (undefined1 *)0x0) && (local_140 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)(local_140 + 0x48) + 0x18))();
    }
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0xcbf29ce484222645;
    local_130 = (code *)&DAT_01d38550;
    local_128 = (undefined1 *)0x0;
    if (local_120 != 0) {
      (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
      local_120 = 0;
    }
    FUN_006dccd0(&local_140,*(undefined8 *)PTR_DAT_02710788,1,local_98,0,
                 *(undefined8 *)(param_1 + 0xd8),0);
    lVar6 = param_1 + uVar7 * 0x460;
    lVar8 = *(long *)(lVar6 + 0xe48);
    plVar9 = (long *)(lVar6 + 0xe48);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
      *plVar9 = 0;
    }
    puVar2 = local_140;
    *plVar9 = (long)local_140;
    if (local_140 != (undefined1 *)0x0) {
      plVar9 = (long *)(local_140 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      if ((*(long *)(param_1 + uVar7 * 0x460 + 0xe50) != 0) ||
         (*(long *)(param_1 + uVar7 * 0x460 + 0xed0) != 0)) {
        FUN_006e1e70(puVar2,lVar5,1);
      }
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    if ((local_80 != 0) && (local_98[0] != 0)) {
      (**(code **)(*(long *)(local_98[0] + 0x48) + 0x18))();
    }
    local_98[0] = 0;
    local_98[1] = 0xcbf29ce484222645;
    local_88 = &DAT_01d38550;
    local_80 = 0;
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    }
    local_78 = 0;
    local_70 = 0;
    if (local_248 != 0) {
      (**(code **)(*(long *)(local_248 + 0x48) + 0x18))();
    }
  }
  return;
}


