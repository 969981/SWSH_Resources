/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ee9400; name: FUN_00ee9400
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ee9400(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined1 *local_1f8;
  char *pcStack_1f0;
  undefined8 local_1e8;
  long local_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0 [2];
  undefined4 local_1ce;
  undefined2 local_1ca;
  undefined1 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
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
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 *puStack_b0;
  undefined8 local_a8;
  long local_a0;
  undefined2 local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined4 local_8a;
  undefined8 local_84;
  undefined1 local_7c;
  undefined1 *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long local_58;
  
  uVar5 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68);
  local_b8 = 0xcbf29ce484222645;
  puStack_b0 = &DAT_01d38550;
  local_a8 = 0;
  local_a0 = 0;
  local_1d0[0] = 0;
  local_1c8 = 0;
  local_1ca = 0;
  local_1ce = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_1b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
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
  uStack_158 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1c0 = 0;
  local_c0 = 0xcbf29ce484222645;
  if (((*PTR_DAT_02715198 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_02715198), puVar1 = PTR_DAT_027151a0, iVar3 != 0)) {
    *(undefined8 *)PTR_DAT_027151a0 = 0xcbf29ce484222645;
    *(undefined1 **)(puVar1 + 8) = &DAT_01d38550;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    FUN_001001c0(PTR_LAB_027151a8,puVar1,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_02715198);
  }
  local_b8 = *(undefined8 *)PTR_DAT_027151a0;
  puStack_b0 = *(undefined1 **)(PTR_DAT_027151a0 + 8);
  local_a8 = *(undefined8 *)(PTR_DAT_027151a0 + 0x10);
  lVar6 = *(long *)(PTR_DAT_027151a0 + 0x18);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (local_a0 != 0) {
    plVar4 = (long *)(local_a0 + 0x48);
    local_a0 = lVar6;
    (**(code **)(*plVar4 + 0x18))();
    lVar6 = local_a0;
  }
  local_a0 = lVar6;
  local_70 = &DAT_cc7b5e39ed4396ae;
  pcStack_68 = "NONE_NONE";
  local_98 = 0;
  local_60 = 9;
  local_58 = 0;
  FUN_010011e0(&local_70,local_1d0);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  puVar1 = PTR_DAT_02710848;
  local_8a = 0;
  local_8c = 0;
  local_90 = 0;
  local_84 = 0;
  local_7c = 0;
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  local_1d8 = FUN_00eea980();
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = local_1d8;
  }
  if (*(long *)(lVar6 + 0x578) == 0) {
    plVar4 = (long *)FUN_01028290();
    local_218 = *plVar4;
    if (local_218 != 0) {
      (**(code **)(*(long *)(local_218 + 0x48) + 0x10))();
    }
  }
  else {
    FUN_006e7120(&local_218,*(long *)(lVar6 + 0x578),&local_1d8);
  }
  FUN_006cf0c0(&local_70,&local_218);
  if (local_218 != 0) {
    (**(code **)(*(long *)(local_218 + 0x48) + 0x18))();
    local_218 = 0;
  }
  local_1f8 = local_70;
  pcStack_1f0 = pcStack_68;
  local_1e8 = local_60;
  local_1e0 = local_58;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  FUN_010011e0(&local_1f8,local_1d0);
  if (local_1e0 != 0) {
    (**(code **)(*(long *)(local_1e0 + 0x48) + 0x18))();
    local_1e0 = 0;
  }
  lVar7 = *(long *)(*(long *)puVar1 + 0x90);
  if (lVar7 == 0) {
    lVar7 = *(long *)(_DAT_00000060 + 0x780);
  }
  else {
    plVar4 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar7 = *(long *)(lVar7 + 0x60);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar7 = *(long *)(lVar7 + 0x780);
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(lVar7 + 0x60);
  bVar2 = *(int *)(lVar7 + 0xb0) == 1;
  if (lVar8 == 0) {
    FUN_008ea2c0(param_1,0,lVar7 + 0x78,local_1d0,bVar2,uVar5);
  }
  else {
    plVar4 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_008ea2c0(param_1,lVar8,lVar7 + 0x78,local_1d0,bVar2,uVar5);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  FUN_00df72c0(&local_218,lVar7);
  *(long *)(param_1 + 0x340) = local_218;
  *(undefined8 *)(param_1 + 0x348) = local_210;
  *(undefined8 *)(param_1 + 0x350) = local_208;
  if (*(long *)(param_1 + 0x358) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x358) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x358) = 0;
  }
  *(undefined8 *)(param_1 + 0x358) = local_200;
  *(uint *)(param_1 + 0xa70) = *(uint *)(param_1 + 0xa70) | 0x2200;
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
  }
  return;
}


