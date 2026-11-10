/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0149d1a0; name: FUN_0149d1a0
 */


void FUN_0149d1a0(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_58;
  
  lVar4 = *(long *)(param_1 + 0x2b0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar4 + 0x2e0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  lVar4 = FUN_01485a70(*(undefined8 *)(param_1 + 0x5d8));
  FUN_00ff86a0(&local_e0,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar5 = *(long *)(local_e0 + 0x60);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (local_e0 != 0) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
  }
  local_70 = 0;
  local_68 = 0;
  local_148 = 0;
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_110 = 0;
  local_108 = 0;
  local_120 = 0;
  local_118 = 0;
  local_130 = 0;
  local_128 = 0;
  local_140 = 0;
  uStack_138 = 0;
  lVar8 = lVar5;
  if ((lVar5 != 0) && ((**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(), local_148 != 0)) {
    plVar2 = (long *)(local_148 + 0x48);
    local_148 = lVar5;
    (**(code **)(*plVar2 + 0x18))();
    lVar8 = local_148;
  }
  local_148 = lVar8;
  lVar8 = 0;
  puVar9 = &DAT_0216f5a8;
  do {
    lVar6 = *(long *)(param_1 + 0x2b0);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    if (local_e0 != 0) {
      (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
    }
    local_d8 = puVar9[-10];
    local_c0 = puVar9[-9];
    local_d0 = puVar9[-8];
    local_a0 = puVar9[-7];
    local_98 = puVar9[-6];
    local_90 = puVar9[-5];
    lVar1 = param_1 + lVar8 * 8;
    local_88 = puVar9[-4];
    local_80 = puVar9[-3];
    local_78 = puVar9[-2];
    local_70 = puVar9[-1];
    local_140 = *puVar9;
    uStack_138 = puVar9[1];
    local_128 = puVar9[2];
    local_120 = puVar9[3];
    local_118 = puVar9[4];
    local_110 = puVar9[5];
    local_108 = puVar9[6];
    local_100 = puVar9[7];
    local_f8 = puVar9[8];
    local_e8 = puVar9[9];
    local_f0 = puVar9[10];
    local_e0 = lVar6;
    local_68 = local_f0;
    FUN_016ab680(*(undefined8 *)(lVar1 + 0x5f0),&local_e0,&local_148,&local_f0);
    uVar7 = *(undefined8 *)(lVar1 + 0x5f0);
    local_58 = lVar4;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))((long *)(lVar4 + 0x48));
    }
    FUN_016ab860(uVar7,&local_58,(uint)lVar8 & 3,0);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    lVar8 = lVar8 + 1;
    puVar9 = puVar9 + 0x18;
  } while (lVar8 != 6);
  FUN_0149d470(param_1);
  if (local_148 != 0) {
    (**(code **)(*(long *)(local_148 + 0x48) + 0x18))();
    local_148 = 0;
  }
  if (local_e0 != 0) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
    local_e0 = 0;
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


