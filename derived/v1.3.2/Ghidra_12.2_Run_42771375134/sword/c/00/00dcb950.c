/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dcb950; name: FUN_00dcb950
 */


undefined8 FUN_00dcb950(long param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  char *pcVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  undefined1 *local_130;
  code *local_128;
  code *local_120;
  undefined1 *local_118;
  long local_110;
  long *plStack_108;
  undefined8 local_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  long local_88;
  long local_80;
  long local_70;
  char *local_68;
  undefined8 local_60;
  long local_58;
  long local_48;
  
  *(undefined4 *)(param_1 + 0x184) = 1;
  uVar4 = (**(code **)(*param_2 + 0x98))(param_2);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  for (pcVar5 = *(char **)(param_1 + 0xa50); pcVar5 != *(char **)(param_1 + 0xa58);
      pcVar5 = pcVar5 + 0x230) {
    if (*pcVar5 != '\0') {
      if (*(long *)(pcVar5 + 0x88) == 0) {
        return 0;
      }
      if (*(char *)(*(long *)(pcVar5 + 0x88) + 0x170) == '\0') {
        return 0;
      }
    }
  }
  FUN_00dcbe80(param_1,param_2,param_3);
  FUN_00dcc020(param_1 + 0x1b0,param_2,0);
  pcVar6 = *(code **)(param_1 + 0x358);
  if (pcVar6 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x360) = 0;
    *(undefined8 *)(param_1 + 0x368) = 0;
    *(undefined8 *)(param_1 + 0x350) = 0;
    *(undefined8 *)(param_1 + 0x358) = 0;
    (*pcVar6)(param_1 + 0x370);
  }
  *(long *)(param_1 + 0x370) = param_1;
  *(long **)(param_1 + 0x378) = param_2;
  *(undefined8 *)(param_1 + 0x350) = &LAB_00dd11a0;
  *(undefined1 **)(param_1 + 0x358) = &LAB_00dd12b0;
  *(undefined1 **)(param_1 + 0x360) = &LAB_00dd14b0;
  *(undefined1 **)(param_1 + 0x368) = &LAB_00dd14c0;
  pcVar6 = *(code **)(param_1 + 0x248);
  if (pcVar6 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x250) = 0;
    *(undefined8 *)(param_1 + 600) = 0;
    *(undefined8 *)(param_1 + 0x240) = 0;
    *(undefined8 *)(param_1 + 0x248) = 0;
    (*pcVar6)(param_1 + 0x260);
  }
  puVar1 = PTR_LAB_0271e978;
  *(long *)(param_1 + 0x260) = param_1 + 0x1b0;
  puVar3 = PTR_LAB_0271e988;
  puVar2 = PTR_LAB_0271e980;
  *(undefined8 *)(param_1 + 0x240) = puVar1;
  *(undefined **)(param_1 + 0x248) = puVar2;
  puVar1 = PTR_LAB_0271e990;
  *(undefined **)(param_1 + 0x250) = puVar3;
  *(undefined **)(param_1 + 600) = puVar1;
  lVar7 = *(long *)(param_1 + 0x238);
  if (lVar7 != 0) {
    plVar8 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_006e1e70(lVar7,param_1 + 0x230,1);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  if (*(char *)(param_1 + 0x3d0) == '\0') goto LAB_00dcbddc;
  local_48 = param_1 + 0x3d0;
  FUN_00d43180(&local_130,&local_48);
  FUN_008d48d0(&local_a0,param_1 + 0x5f0);
  local_70 = -0x585ea44e514ca216;
  local_68 = "bin/archive/field/resident/instance_obj.gfpak";
  local_60 = 0x2d;
  local_58 = 0;
  local_a8 = FUN_00da09b0(*(undefined8 *)PTR_DAT_0271e770,&local_70);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  FUN_00dd14d0(&local_70,*(undefined8 *)PTR_DAT_02710788,1,&local_130,0,param_2,0,&local_a0,
               &local_a8);
  if (*(long *)(param_1 + 0x458) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x458) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x458) = 0;
  }
  lVar7 = local_70;
  *(long *)(param_1 + 0x458) = local_70;
  if (local_70 != 0) {
    plVar8 = (long *)(local_70 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    if ((*(long *)(param_1 + 0x460) != 0) || (*(long *)(param_1 + 0x4e0) != 0)) {
      FUN_006e1e70(lVar7,param_1 + 0x450,1);
    }
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  if ((local_88 != 0) && (local_a0 != 0)) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
  }
  local_a0 = 0;
  uStack_98 = 0xcbf29ce484222645;
  local_90 = &DAT_01d38550;
  local_88 = 0;
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  if ((local_118 != (undefined1 *)0x0) && (local_130 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)(local_130 + 0x48) + 0x18))();
  }
  local_130 = (undefined1 *)0x0;
  local_128 = (code *)0xcbf29ce484222645;
  local_120 = (code *)&DAT_01d38550;
  local_118 = (undefined1 *)0x0;
  if (local_110 != 0) {
    (**(code **)(*(long *)(local_110 + 0x48) + 0x18))();
  }
  local_130 = &LAB_00dd1e20;
  local_128 = FUN_00dd1f30;
  local_120 = FUN_00dd2230;
  local_118 = &LAB_00dd2240;
  pcVar6 = *(code **)(param_1 + 0x578);
  local_110 = param_1;
  plStack_108 = param_2;
  if (pcVar6 == (code *)0x0) {
LAB_00dcbd18:
    (*local_120)(&local_110,param_1 + 0x590);
    *(undefined1 **)(param_1 + 0x588) = local_118;
    *(code **)(param_1 + 0x578) = local_128;
    *(code **)(param_1 + 0x580) = local_120;
    *(undefined8 *)(param_1 + 0x570) = local_130;
    pcVar6 = *(code **)(param_1 + 0x468);
  }
  else {
    *(undefined8 *)(param_1 + 0x580) = 0;
    *(undefined8 *)(param_1 + 0x588) = 0;
    *(undefined8 *)(param_1 + 0x570) = 0;
    *(undefined8 *)(param_1 + 0x578) = 0;
    (*pcVar6)(param_1 + 0x590);
    if (local_120 != (code *)0x0) goto LAB_00dcbd18;
    pcVar6 = *(code **)(param_1 + 0x468);
  }
  if (pcVar6 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x470) = 0;
    *(undefined8 *)(param_1 + 0x478) = 0;
    *(undefined8 *)(param_1 + 0x460) = 0;
    *(undefined8 *)(param_1 + 0x468) = 0;
    (*pcVar6)(param_1 + 0x480);
  }
  puVar1 = PTR_LAB_0271e998;
  *(long *)(param_1 + 0x480) = param_1 + 0x3d0;
  puVar3 = PTR_LAB_0271e9a8;
  puVar2 = PTR_LAB_0271e9a0;
  *(undefined **)(param_1 + 0x460) = puVar1;
  *(undefined **)(param_1 + 0x468) = puVar2;
  puVar1 = PTR_LAB_0271e9b0;
  *(undefined **)(param_1 + 0x470) = puVar3;
  *(undefined **)(param_1 + 0x478) = puVar1;
  lVar7 = *(long *)(param_1 + 0x458);
  if (lVar7 != 0) {
    plVar8 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_006e1e70(lVar7,param_1 + 0x450,1);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  pcVar6 = local_128;
  if (local_128 != (code *)0x0) {
    local_120 = (code *)0x0;
    local_118 = (undefined1 *)0x0;
    local_130 = (undefined1 *)0x0;
    local_128 = (code *)0x0;
    (*pcVar6)(&local_110);
  }
LAB_00dcbddc:
  FUN_00dcc1a0(param_1 + 0x610,param_2,param_1 + 0xa88);
  FUN_00dcc320(param_1 + 0x830,param_2,param_1 + 0xa88);
  *(undefined4 *)(param_1 + 0x184) = 2;
  return 1;
}


