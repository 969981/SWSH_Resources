/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013db660; name: FUN_013db660
 */


void FUN_013db660(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long local_1c8;
  undefined4 local_1c0 [2];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined4 local_188;
  long local_180;
  long local_178;
  long lStack_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
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
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined4 local_60;
  undefined1 local_5c;
  long local_58;
  long local_48;
  
  lVar5 = FUN_00ad95d0(local_1c0,*(undefined8 *)(param_1 + 8));
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x558) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x558) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x558) = 0;
  }
  puVar1 = PTR_DAT_02710848;
  *(long *)(param_1 + 0x558) = lVar5;
  FUN_00c58c00(&local_48,*(undefined8 *)(*(long *)puVar1 + 0x78));
  puVar6 = (undefined8 *)FUN_00c79e90(local_48,0x18);
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  uVar9 = *puVar6;
  plVar7 = (long *)(**(code **)*puVar8)(puVar8);
  if (((*PTR_DAT_02717528 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_02717528), iVar4 != 0))
  {
    uVar11 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar11;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar7 != (long *)PTR_DAT_02717530; plVar7 = (long *)*plVar7) {
  }
  lVar5 = puVar8[4];
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar10 = puVar8[5];
  if (lVar10 != 0) {
    plVar7 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  lVar3 = local_48;
  uVar11 = *(undefined8 *)(param_1 + 8);
  (**(code **)(**(long **)(param_1 + 0x558) + 0x10))(&local_1c8);
  lVar2 = local_1c8;
  uStack_1b0 = 0x68c3754f4bf8081a;
  local_1a8 = 0xa268019c38e3bc16;
  local_1c8 = 0;
  local_1c0[0] = 0;
  local_188 = 1;
  local_1a0 = 0xcbf29ce484222645;
  uStack_198 = 0xcbf29ce484222645;
  local_180 = lVar2;
  local_1b8 = uVar11;
  local_190 = uVar9;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_168 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_160 = 0;
  local_140 = *(undefined8 *)PTR_DAT_02719748;
  local_78 = 0;
  uStack_70 = 0;
  local_148 = 1;
  local_62 = 0;
  local_60 = 0;
  local_5c = 0;
  local_80 = 0;
  local_64 = 0x101;
  local_68 = 0x1010101;
  local_178 = lVar5;
  lStack_170 = lVar10;
  uStack_138 = local_140;
  local_130 = local_140;
  uStack_128 = local_140;
  local_120 = local_140;
  uStack_118 = local_140;
  local_110 = local_140;
  uStack_108 = local_140;
  local_100 = local_140;
  uStack_f8 = local_140;
  local_f0 = local_140;
  uStack_e8 = local_140;
  local_e0 = local_140;
  uStack_d8 = local_140;
  local_d0 = local_140;
  uStack_c8 = local_140;
  local_c0 = local_140;
  uStack_b8 = local_140;
  local_b0 = local_140;
  uStack_a8 = local_140;
  local_a0 = local_140;
  uStack_98 = local_140;
  local_90 = local_140;
  uStack_88 = local_140;
  FUN_00c79eb0(&local_58,lVar3,1,local_1c0);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (local_180 != 0) {
    (**(code **)(*(long *)(local_180 + 0x48) + 0x18))();
    local_180 = 0;
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  if (local_1c8 != 0) {
    (**(code **)(*(long *)(local_1c8 + 0x48) + 0x18))();
    local_1c8 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


