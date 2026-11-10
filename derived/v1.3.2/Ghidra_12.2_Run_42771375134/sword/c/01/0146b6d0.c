/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0146b6d0; name: FUN_0146b6d0
 */


void FUN_0146b6d0(long param_1,long *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long local_e0;
  long local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  FUN_0146ba60(param_1 + 8);
  memcpy((void *)(param_1 + 0x48),param_3,0x180);
  lVar16 = *param_2;
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  lVar17 = param_2[3];
  if (lVar17 != 0) {
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
  }
  uVar7 = *(undefined8 *)((long)param_3 + 0x18);
  uVar8 = *(undefined8 *)((long)param_3 + 0x20);
  uVar9 = *(undefined8 *)((long)param_3 + 0x28);
  uVar10 = *(undefined8 *)((long)param_3 + 0x30);
  uVar11 = *(undefined8 *)((long)param_3 + 0x38);
  uVar12 = *(undefined8 *)((long)param_3 + 0x40);
  uVar13 = *(undefined8 *)((long)param_3 + 0x130);
  uVar14 = *(undefined8 *)((long)param_3 + 0x138);
  uVar15 = *(undefined8 *)((long)param_3 + 0xf0);
  lVar18 = param_2[4];
  if (lVar18 != 0) {
    (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
  }
  uVar1 = *(undefined8 *)((long)param_3 + 0x118);
  uVar3 = *(undefined8 *)((long)param_3 + 0x120);
  lVar19 = *(long *)(param_1 + 0x1c8);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(lVar19 + 8);
  *(long *)(lVar19 + 8) = lVar16;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  if (lVar18 != 0) {
    (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(lVar19 + 0x10);
  *(long *)(lVar19 + 0x10) = lVar18;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  if (lVar17 != 0) {
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(lVar19 + 0x18);
  *(long *)(lVar19 + 0x18) = lVar17;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  *(undefined8 *)(lVar19 + 0x20) = uVar7;
  *(undefined8 *)(lVar19 + 0x28) = uVar8;
  *(undefined8 *)(lVar19 + 0x30) = uVar9;
  *(undefined8 *)(lVar19 + 0x38) = uVar10;
  *(undefined8 *)(lVar19 + 0x40) = uVar11;
  *(undefined8 *)(lVar19 + 0x48) = uVar12;
  *(undefined8 *)(lVar19 + 0x50) = uVar3;
  *(undefined8 *)(lVar19 + 0x58) = uVar1;
  *(undefined8 *)(lVar19 + 0x60) = uVar13;
  *(undefined8 *)(lVar19 + 0x68) = uVar14;
  *(undefined8 *)(lVar19 + 0x70) = uVar15;
  *(undefined8 *)(lVar19 + 0x78) = uVar2;
  *(undefined8 *)(lVar19 + 0x80) = uVar4;
  if (lVar17 != 0) {
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))((long *)(lVar17 + 0x48));
  }
  if (lVar18 != 0) {
    (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))((long *)(lVar18 + 0x48));
  }
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
  }
  local_78 = 0;
  local_70 = 0;
  local_e0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  lVar16 = param_2[2];
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  lVar17 = *param_2;
  local_e0 = lVar16;
  if (lVar17 != 0) {
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
  }
  lVar16 = param_2[3];
  local_d8 = lVar17;
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  local_c8 = *(undefined8 *)((long)param_3 + 0x98);
  local_c0 = *(undefined8 *)((long)param_3 + 0xa0);
  local_70 = *(undefined8 *)((long)param_3 + 0x150);
  local_b8 = *(undefined8 *)((long)param_3 + 0xa8);
  local_b0 = *(undefined8 *)((long)param_3 + 0xb0);
  local_a8 = *(undefined8 *)((long)param_3 + 0xb8);
  local_a0 = *(undefined8 *)((long)param_3 + 0xc0);
  local_98 = *(undefined8 *)((long)param_3 + 200);
  local_90 = *(undefined8 *)((long)param_3 + 0xd0);
  local_80 = *(undefined8 *)((long)param_3 + 0x140);
  local_78 = *(undefined8 *)((long)param_3 + 0x148);
  local_d0 = lVar16;
  FUN_016a84e0(*(undefined8 *)(param_1 + 0x1e8),&local_e0);
  if (local_d0 != 0) {
    (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
    local_d0 = 0;
  }
  if (local_d8 != 0) {
    (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
    local_d8 = 0;
  }
  if (local_e0 != 0) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
    local_e0 = 0;
  }
  lVar16 = *param_2;
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  uVar7 = *(undefined8 *)((long)param_3 + 0xe0);
  uVar8 = *(undefined8 *)((long)param_3 + 0xe8);
  lVar17 = *(long *)(param_1 + 0x1f0);
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  lVar18 = *(long *)(lVar17 + 0x58);
  *(long *)(lVar17 + 0x58) = lVar16;
  if (lVar18 != 0) {
    (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))();
  }
  *(undefined8 *)(lVar17 + 0x60) = uVar7;
  *(undefined8 *)(lVar17 + 0x68) = uVar8;
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
  }
  FUN_0146bb90(param_1);
  uVar5 = FUN_0087afd0(param_2[2]);
  *(undefined4 *)(param_1 + 0x210) = uVar5;
  return;
}


