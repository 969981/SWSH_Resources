/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01425590; name: FUN_01425590
 */


void FUN_01425590(long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 local_160;
  code *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  long local_48;
  
  FUN_01425c00();
  if (*(int *)(param_1 + 0x5d0) == 0x4f0) {
    FUN_01425e60(&local_58,&DAT_0269f5f8,&DAT_0269f5c8,&DAT_0269f610);
    plVar2 = (long *)PTR_DAT_02710920;
    plVar1 = (long *)PTR_DAT_02710920;
    if (local_58 != 0) {
      plVar1 = (long *)(local_58 + 0x58);
    }
    local_48 = *plVar1;
    FUN_00ffd010(param_1 + 0x100,&local_48);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    FUN_01425e60(&local_58,&DAT_0269f5f8,&DAT_0269f5e0,&DAT_0269f610);
    if (local_58 != 0) {
      plVar2 = (long *)(local_58 + 0x58);
    }
    local_48 = *plVar2;
    FUN_00ffd010(param_1 + 0x100,&local_48);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
      iVar4 = *(int *)(param_1 + 0x5d0);
      goto joined_r0x014259d0;
    }
  }
  else {
    FUN_01425e60(&local_48,&DAT_0269f5f8,&DAT_0269f5c8,&DAT_0269f628);
    plVar2 = (long *)PTR_DAT_02710920;
    plVar1 = (long *)PTR_DAT_02710920;
    if (local_48 != 0) {
      plVar1 = (long *)(local_48 + 0x58);
    }
    lVar7 = *plVar1;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
    lVar9 = param_1 + 0x100;
    local_48 = lVar7;
    FUN_00ffd510(0,lVar9,&local_48);
    FUN_01425e60(&local_48,&DAT_0269f5f8,&DAT_0269f5c8,&DAT_0269f640);
    plVar1 = plVar2;
    if (local_48 != 0) {
      plVar1 = (long *)(local_48 + 0x58);
    }
    lVar7 = *plVar1;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
    local_48 = lVar7;
    FUN_00ffd510(0x3f800000,lVar9,&local_48);
    FUN_01425e60(&local_48,&DAT_0269f5f8,&DAT_0269f5e0,&DAT_0269f628);
    plVar1 = plVar2;
    if (local_48 != 0) {
      plVar1 = (long *)(local_48 + 0x58);
    }
    lVar7 = *plVar1;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
    local_48 = lVar7;
    FUN_00ffd510((float)(*(int *)(param_1 + 0x5cc) + 1),lVar9,&local_48);
    FUN_01425e60(&local_48,&DAT_0269f5f8,&DAT_0269f5e0,&DAT_0269f640);
    plVar1 = plVar2;
    if (local_48 != 0) {
      plVar1 = (long *)(local_48 + 0x58);
    }
    lVar7 = *plVar1;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
    uVar10 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x5cc));
    local_48 = lVar7;
    FUN_00ffd510(uVar10,lVar9,&local_48);
    uVar6 = FUN_012c8f90(0x13);
    FUN_01425ef0(&local_48,&DAT_0269f658,&DAT_0269f5c8,&DAT_0269f670,&DAT_0269f688);
    plVar1 = plVar2;
    if (local_48 != 0) {
      plVar1 = (long *)(local_48 + 0x58);
    }
    lVar7 = *plVar1;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
    uVar8 = *(undefined8 *)(param_1 + 0x670);
    local_48 = lVar7;
    uVar5 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),&local_48);
    FUN_0168b110(uVar8,uVar6,uVar5,0);
    FUN_01425ef0(&local_48,&DAT_0269f658,&DAT_0269f5e0,&DAT_0269f670,
                 (ulong)*(uint *)(param_1 + 0x5cc) * 0x18 + 0x269f6a0);
    if (local_48 != 0) {
      plVar2 = (long *)(local_48 + 0x58);
    }
    lVar7 = *plVar2;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
    uVar8 = *(undefined8 *)(param_1 + 0x690);
    local_48 = lVar7;
    uVar5 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),&local_48);
    FUN_0168b110(uVar8,uVar6,uVar5,0);
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    FUN_0141b8a0(*(undefined8 *)(param_1 + 0x670),*(undefined4 *)(param_1 + 0x5d0),0,0,&local_e0);
    pcVar3 = local_d8;
    if (local_d8 != (code *)0x0) {
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      local_d8 = (code *)0x0;
      (*pcVar3)(&local_c0);
    }
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    FUN_0141b8a0(*(undefined8 *)(param_1 + 0x690),*(undefined4 *)(param_1 + 0x5d0),
                 *(int *)(param_1 + 0x5cc) + 1,0,&local_160);
    pcVar3 = local_158;
    if (local_158 != (code *)0x0) {
      local_150 = 0;
      uStack_148 = 0;
      local_160 = 0;
      local_158 = (code *)0x0;
      (*pcVar3)(&local_140);
    }
  }
  iVar4 = *(int *)(param_1 + 0x5d0);
joined_r0x014259d0:
  if (iVar4 == 0) {
    fVar11 = 0.0;
  }
  else {
    iVar4 = FUN_00888c50(iVar4,0x15);
    fVar11 = (float)(iVar4 + 1);
  }
  lVar7 = param_1 + 0x100;
  FUN_01425e60(&local_48,&DAT_0269f5f8,&DAT_0269f5c8,&DAT_0269f6e8);
  plVar2 = (long *)PTR_DAT_02710920;
  plVar1 = (long *)PTR_DAT_02710920;
  if (local_48 != 0) {
    plVar1 = (long *)(local_48 + 0x58);
  }
  lVar9 = *plVar1;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  local_48 = lVar9;
  FUN_00ffd510(fVar11,lVar7,&local_48);
  FUN_01425e60(&local_48,&DAT_0269f5f8,&DAT_0269f5c8,&DAT_0269f700);
  plVar1 = plVar2;
  if (local_48 != 0) {
    plVar1 = (long *)(local_48 + 0x58);
  }
  lVar9 = *plVar1;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  if (*(char *)(param_1 + 0x5d4) == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x3f800000;
  }
  local_48 = lVar9;
  FUN_00ffd510(uVar6,lVar7,&local_48);
  FUN_01425e60(&local_48,&DAT_0269f5f8,&DAT_0269f5e0,&DAT_0269f6e8);
  plVar1 = plVar2;
  if (local_48 != 0) {
    plVar1 = (long *)(local_48 + 0x58);
  }
  lVar9 = *plVar1;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  local_48 = lVar9;
  FUN_00ffd510(fVar11,lVar7,&local_48);
  FUN_01425e60(&local_48,&DAT_0269f5f8,&DAT_0269f5e0,&DAT_0269f700);
  plVar1 = plVar2;
  if (local_48 != 0) {
    plVar1 = (long *)(local_48 + 0x58);
  }
  lVar9 = *plVar1;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  local_48 = lVar9;
  FUN_00ffd510(0,lVar7,&local_48);
  if (*(long *)(param_1 + 0x5d8) != 0) {
    FUN_01425fa0(&local_48,&DAT_0269f658,&DAT_0269f718);
    if (local_48 != 0) {
      plVar2 = (long *)(local_48 + 0x58);
    }
    lVar9 = *plVar2;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
    local_48 = lVar9;
    uVar6 = FUN_0077d470(*(undefined8 *)(param_1 + 0x5d8));
    FUN_00ffd700(lVar7,&local_48,uVar6,10);
  }
  return;
}


