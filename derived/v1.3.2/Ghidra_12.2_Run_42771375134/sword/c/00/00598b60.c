/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00598b60; name: FUN_00598b60
 */


undefined8
FUN_00598b60(ulong param_1,ulong param_2,float param_3,float param_4,float param_5,
            undefined4 param_6,long param_7,long param_8,ulong param_9,long param_10,long param_11,
            long param_12,int param_13,int param_14,long param_15,long param_16,long param_17,
            undefined4 param_18,byte param_19,undefined4 param_20)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  ulong uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 local_100;
  float local_f8;
  float fStack_f4;
  undefined8 local_f0;
  float local_e8;
  float fStack_e4;
  undefined8 local_e0;
  float local_d8;
  float fStack_d4;
  undefined8 local_d0;
  float local_c8;
  float fStack_c4;
  undefined1 auStack_c0 [8];
  undefined4 local_b8;
  undefined4 local_b4;
  
  fVar36 = 0.0;
  if (param_11 == 0) {
    param_5 = 0.0;
    param_14 = 0;
    param_12 = 0;
  }
  lVar1 = param_12;
  if (param_5 == 0.0) {
    lVar1 = 0;
  }
  lVar2 = 0;
  if (param_13 != 0) {
    lVar2 = param_16;
  }
  lVar3 = 0;
  if (param_14 != 0) {
    lVar3 = param_17;
  }
  lVar4 = 0;
  if (param_14 != 0 || param_13 != 0) {
    lVar4 = param_15;
  }
  if ((param_19 & 1) != 0) {
    (**(code **)(**(long **)(param_7 + 0x20) + 0x138))();
    (**(code **)(**(long **)(param_7 + 0x20) + 0x140))(*(long **)(param_7 + 0x20),0xffffffff);
    (**(code **)(**(long **)(param_7 + 0x20) + 0x150))(*(long **)(param_7 + 0x20),0);
  }
  uVar33 = param_2;
  if ((param_9 & 1) == 0) {
    if (param_8 == 0) goto LAB_00598ca4;
  }
  else {
    (**(code **)(**(long **)(param_7 + 0x20) + 0x40))(*(long **)(param_7 + 0x20),0);
    if (param_8 == 0) goto LAB_00598ca4;
    (**(code **)(**(long **)(param_7 + 0x20) + 0x38))(*(long **)(param_7 + 0x20),0,param_8,0);
  }
  uVar26 = NEON_ucvtf(*(undefined4 *)(param_8 + 0x50));
  fVar22 = (float)NEON_ucvtf(*(undefined4 *)(param_8 + 0x4c));
  if ((float)param_1 != 0.0) {
    fVar22 = (float)param_1;
  }
  param_1 = (ulong)(uint)fVar22;
  uVar33 = (ulong)uVar26;
  if ((float)param_2 != 0.0) {
    uVar33 = param_2 & 0xffffffff;
  }
LAB_00598ca4:
  (**(code **)(**(long **)(param_7 + 0x20) + 0x88))(*(long **)(param_7 + 0x20),auStack_c0);
  fVar34 = (float)param_1;
  fVar23 = fVar34 + param_3;
  fVar32 = (float)uVar33;
  fVar24 = fVar32 + param_4;
  fVar22 = param_3;
  if (param_3 <= fVar23) {
    fVar22 = fVar23;
    fVar23 = param_3;
  }
  fVar25 = (float)NEON_ucvtf(local_b8);
  fVar27 = param_4;
  if (param_4 <= fVar24) {
    fVar27 = fVar24;
    fVar24 = param_4;
  }
  fVar39 = fVar25;
  if (fVar23 <= fVar25) {
    fVar39 = fVar23;
  }
  fVar31 = 0.0;
  if (0.0 <= fVar23) {
    fVar31 = fVar39;
  }
  local_100._0_4_ = (int)fVar31;
  fVar23 = (float)NEON_ucvtf(local_b4);
  fVar39 = fVar23;
  if (fVar24 <= fVar23) {
    fVar39 = fVar24;
  }
  fVar38 = 0.0;
  if (0.0 <= fVar24) {
    fVar38 = fVar39;
  }
  local_100._4_4_ = (int)fVar38;
  if (fVar22 <= fVar25) {
    fVar25 = fVar22;
  }
  fVar24 = 0.0;
  if (0.0 <= fVar22) {
    fVar24 = fVar25;
  }
  if (fVar27 <= fVar23) {
    fVar23 = fVar27;
  }
  fVar22 = 0.0;
  if (0.0 <= fVar27) {
    fVar22 = fVar23;
  }
  local_f8 = (float)(int)(fVar24 - fVar31);
  fStack_f4 = (float)(int)(fVar22 - fVar38);
  local_f0 = 0x3f80000000000000;
  (**(code **)(**(long **)(param_7 + 0x20) + 0x80))(*(long **)(param_7 + 0x20),&local_100);
  fVar22 = 0.0;
  fVar23 = 0.0;
  if (param_11 != 0) {
    fVar23 = (float)NEON_ucvtf(*(undefined4 *)(param_11 + 0x58));
    fVar22 = (float)NEON_ucvtf(*(undefined4 *)(param_11 + 0x54));
  }
  fVar27 = 0.0;
  fVar24 = 0.0;
  if (lVar1 != 0) {
    fVar27 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0x54));
    fVar24 = (float)NEON_ucvtf(*(undefined4 *)(lVar1 + 0x58));
  }
  fVar25 = 0.0;
  fVar39 = 0.0;
  if (lVar4 != 0) {
    fVar39 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x58));
    fVar25 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x54));
  }
  fVar38 = 0.0;
  fVar31 = 0.0;
  if (lVar2 != 0) {
    fVar31 = (float)NEON_ucvtf(*(undefined4 *)(lVar2 + 0x58));
    fVar38 = (float)NEON_ucvtf(*(undefined4 *)(lVar2 + 0x54));
  }
  fVar28 = (float)NEON_ucvtf((int)local_100);
  fVar29 = (float)NEON_ucvtf(local_100._4_4_);
  fVar37 = (float)NEON_ucvtf(*(undefined4 *)(param_10 + 0x54));
  fVar30 = 0.0;
  fVar35 = (float)NEON_ucvtf(*(undefined4 *)(param_10 + 0x58));
  puVar13 = (undefined8 *)(param_7 + 0x29a80);
  if (lVar3 != 0) {
    fVar30 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 0x58));
    fVar36 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 0x54));
  }
  bVar5 = false;
  if ((fVar32 == fVar35) && (bVar5 = false, !NAN(fVar34) && !NAN(fVar37))) {
    bVar5 = fVar34 == fVar37;
  }
  uVar12 = 4;
  if (bVar5) {
    uVar12 = 5;
  }
  lVar16 = param_10;
  do {
    lVar14 = lVar16;
    lVar16 = *(long *)(lVar14 + 0x120);
  } while (lVar16 != 0);
  plVar17 = *(long **)(lVar14 + 0xa8);
  if (param_11 == 0) {
    plVar18 = (long *)*puVar13;
  }
  else {
    lVar16 = param_11;
    do {
      lVar14 = lVar16;
      lVar16 = *(long *)(lVar14 + 0x120);
    } while (lVar16 != 0);
    plVar18 = *(long **)(lVar14 + 0xa8);
  }
  if (lVar1 == 0) {
    plVar19 = (long *)*puVar13;
  }
  else {
    do {
      lVar16 = param_12;
      param_12 = *(long *)(lVar16 + 0x120);
    } while (param_12 != 0);
    plVar19 = *(long **)(lVar16 + 0xa8);
  }
  if (lVar4 == 0) {
    plVar20 = (long *)*puVar13;
  }
  else {
    lVar16 = lVar4;
    do {
      lVar14 = lVar16;
      lVar16 = *(long *)(lVar14 + 0x120);
    } while (lVar16 != 0);
    plVar20 = *(long **)(lVar14 + 0xa8);
  }
  if (lVar2 == 0) {
    puVar13 = (undefined8 *)(param_7 + 0x29a90);
  }
  else {
    lVar16 = lVar2;
    do {
      lVar14 = lVar16;
      lVar16 = *(long *)(lVar14 + 0x120);
    } while (lVar16 != 0);
    puVar13 = (undefined8 *)(lVar14 + 0xa8);
  }
  plVar21 = (long *)*puVar13;
  if (lVar3 == 0) {
    puVar13 = (undefined8 *)(param_7 + 0x29a90);
  }
  else {
    lVar16 = lVar3;
    do {
      lVar14 = lVar16;
      lVar16 = *(long *)(lVar14 + 0x120);
    } while (lVar16 != 0);
    puVar13 = (undefined8 *)(lVar14 + 0xa8);
  }
  plVar15 = (long *)*puVar13;
  uVar6 = (**(code **)(*plVar17 + 0x80))(plVar17);
  uVar7 = (**(code **)(*plVar18 + 0x80))(plVar18);
  uVar8 = (**(code **)(*plVar19 + 0x80))(plVar19);
  uVar9 = (**(code **)(*plVar20 + 0x80))(plVar20);
  uVar10 = (**(code **)(*plVar21 + 0x80))(plVar21);
  uVar11 = (**(code **)(*plVar15 + 0x80))(plVar15);
  (**(code **)(*plVar17 + 0x78))(plVar17,uVar12);
  uVar12 = 4;
  if (fVar34 == fVar22 && fVar32 == fVar23 || param_11 == 0) {
    uVar12 = 5;
  }
  (**(code **)(*plVar18 + 0x78))(plVar18,uVar12);
  uVar12 = 4;
  if (fVar34 == fVar27 && fVar32 == fVar24 || lVar1 == 0) {
    uVar12 = 5;
  }
  (**(code **)(*plVar19 + 0x78))(plVar19,uVar12);
  uVar12 = 4;
  if (fVar34 == fVar25 && fVar32 == fVar39 || lVar4 == 0) {
    uVar12 = 5;
  }
  (**(code **)(*plVar20 + 0x78))(plVar20,uVar12);
  uVar12 = 4;
  if (fVar34 == fVar38 && fVar32 == fVar31 || lVar2 == 0) {
    uVar12 = 5;
  }
  (**(code **)(*plVar21 + 0x78))(plVar21,uVar12);
  uVar12 = 4;
  if (fVar34 == fVar36 && fVar32 == fVar30 || lVar3 == 0) {
    uVar12 = 5;
  }
  (**(code **)(*plVar15 + 0x78))(plVar15,uVar12);
  (**(code **)(**(long **)(param_7 + 0x20) + 0x160))(*(long **)(param_7 + 0x20),param_18);
  local_100 = 0;
  fStack_f4 = *(float *)(param_10 + 0x8c) * fVar35 + *(float *)(param_10 + 0x94);
  local_f8 = *(float *)(param_10 + 0x88) * fVar37 + *(float *)(param_10 + 0x90);
  if (lVar4 == 0) {
    local_e8 = 0.0;
    fStack_e4 = 0.0;
  }
  else {
    local_e8 = fVar25 * *(float *)(lVar4 + 0x88) + *(float *)(lVar4 + 0x90);
    fStack_e4 = fVar39 * *(float *)(lVar4 + 0x8c) + *(float *)(lVar4 + 0x94);
  }
  local_f0 = 0;
  if (lVar2 == 0) {
    local_d8 = 0.0;
    fStack_d4 = 0.0;
  }
  else {
    local_d8 = fVar38 * *(float *)(lVar2 + 0x88) + *(float *)(lVar2 + 0x90);
    fStack_d4 = fVar31 * *(float *)(lVar2 + 0x8c) + *(float *)(lVar2 + 0x94);
  }
  if (lVar3 == 0) {
    local_c8 = 0.0;
    fStack_c4 = 0.0;
  }
  else {
    local_c8 = fVar36 * *(float *)(lVar3 + 0x88) + *(float *)(lVar3 + 0x90);
    fStack_c4 = fVar30 * *(float *)(lVar3 + 0x8c) + *(float *)(lVar3 + 0x94);
  }
  local_e0 = 0;
  local_d0 = 0;
  FUN_005988b0(param_3 - fVar28,param_4 - fVar29,param_1,uVar33,param_5,param_6,param_7,&local_100,
               plVar17,param_11 != 0,plVar18,plVar19,param_13,param_14,plVar20,plVar21,plVar15,
               param_20);
  (**(code **)(*plVar17 + 0x78))(plVar17,uVar6);
  (**(code **)(*plVar18 + 0x78))(plVar18,uVar7);
  (**(code **)(*plVar19 + 0x78))(plVar19,uVar8);
  (**(code **)(*plVar20 + 0x78))(plVar20,uVar9);
  (**(code **)(*plVar21 + 0x78))(plVar21,uVar10);
  (**(code **)(*plVar15 + 0x78))(plVar15,uVar11);
  return 0;
}


