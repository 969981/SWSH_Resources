/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ee9810; name: FUN_00ee9810
 */


void FUN_00ee9810(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *local_218;
  char *pcStack_210;
  undefined8 local_208;
  long local_200;
  undefined8 local_1f8;
  undefined1 local_1f0 [2];
  undefined4 local_1ee;
  undefined2 local_1ea;
  undefined1 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
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
  undefined8 local_d8;
  undefined1 *puStack_d0;
  undefined8 local_c8;
  long local_c0;
  undefined2 local_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined4 local_aa;
  undefined8 local_a4;
  undefined1 local_9c;
  undefined1 *local_90;
  char *pcStack_88;
  undefined8 local_80;
  long local_78;
  long local_70 [2];
  
  puVar2 = PTR_DAT_02710848;
  uVar6 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68);
  local_1f0[0] = 0;
  local_d8 = 0xcbf29ce484222645;
  puStack_d0 = &DAT_01d38550;
  local_1e8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_1ea = 0;
  local_1ee = 0;
  local_1d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  lVar7 = *(long *)PTR_DAT_02710848;
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
  uStack_1b8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1e0 = 0;
  local_e0 = 0xcbf29ce484222645;
  if (((*PTR_DAT_02715198 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_02715198), puVar3 = PTR_DAT_027151a0, iVar4 != 0)) {
    *(undefined8 *)PTR_DAT_027151a0 = 0xcbf29ce484222645;
    *(undefined1 **)(puVar3 + 8) = &DAT_01d38550;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    FUN_001001c0(PTR_LAB_027151a8,puVar3,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_02715198);
  }
  local_d8 = *(undefined8 *)PTR_DAT_027151a0;
  puStack_d0 = *(undefined1 **)(PTR_DAT_027151a0 + 8);
  local_c8 = *(undefined8 *)(PTR_DAT_027151a0 + 0x10);
  lVar8 = *(long *)(PTR_DAT_027151a0 + 0x18);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  if (local_c0 != 0) {
    plVar5 = (long *)(local_c0 + 0x48);
    local_c0 = lVar8;
    (**(code **)(*plVar5 + 0x18))();
    lVar8 = local_c0;
  }
  local_c0 = lVar8;
  local_90 = &DAT_cc7b5e39ed4396ae;
  pcStack_88 = "NONE_NONE";
  local_b8 = 0;
  local_80 = 9;
  local_78 = 0;
  FUN_010011e0(&local_90,local_1f0);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  local_aa = 0;
  local_ac = 0;
  local_b0 = 0;
  local_a4 = 0;
  local_9c = 0;
  lVar8 = *(long *)(*(long *)puVar2 + 0x90);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  local_1f8 = FUN_00eea980();
  if (*(long *)(lVar8 + 0x578) == 0) {
    plVar5 = (long *)FUN_01028290();
    local_70[0] = *plVar5;
    if (local_70[0] != 0) {
      (**(code **)(*(long *)(local_70[0] + 0x48) + 0x10))();
    }
  }
  else {
    FUN_006e7120(local_70,*(long *)(lVar8 + 0x578),&local_1f8);
  }
  FUN_006cf0c0(&local_90,local_70);
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
    local_70[0] = 0;
  }
  local_218 = local_90;
  pcStack_210 = pcStack_88;
  local_208 = local_80;
  local_200 = local_78;
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
  }
  FUN_010011e0(&local_218,local_1f0);
  if (local_200 != 0) {
    (**(code **)(*(long *)(local_200 + 0x48) + 0x18))();
    local_200 = 0;
  }
  lVar9 = *(long *)(lVar7 + 0x90);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  lVar10 = *(long *)(lVar9 + 0x58);
  plVar5 = (long *)(lVar10 + 0x48);
  if (lVar10 != 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  FUN_008e73a0(param_2,lVar7,lVar10,*(undefined4 *)(param_1 + 8),local_1f0,0,uVar6);
  (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))(plVar5);
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  uVar1 = 0x6402200;
  if ((param_3 & 1) == 0) {
    uVar1 = 0x4402200;
  }
  *(uint *)(param_2 + 0xa70) = *(uint *)(param_2 + 0xa70) | uVar1 | 0x8000000;
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  if (local_c0 != 0) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
  }
  return;
}


