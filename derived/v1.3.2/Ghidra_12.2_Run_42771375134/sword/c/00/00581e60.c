/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00581e60; name: FUN_00581e60
 */


ulong FUN_00581e60(float param_1,undefined4 param_2,undefined4 param_3,float param_4,float param_5,
                  undefined8 param_6,long param_7,long param_8,undefined8 param_9,
                  undefined4 param_10,undefined4 param_11)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  float local_b0;
  float fStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  float local_a0 [3];
  undefined4 local_94;
  
  fVar7 = *(float *)(param_7 + 0x90);
  uVar11 = *(undefined4 *)(param_7 + 0x54);
  uVar13 = *(undefined4 *)(param_7 + 0x58);
  fVar15 = *(float *)(param_7 + 0x88);
  fVar16 = *(float *)(param_7 + 0x8c);
  fVar8 = *(float *)(param_7 + 0x94);
  uVar9 = *(undefined4 *)(param_8 + 0x54);
  uVar10 = *(undefined4 *)(param_8 + 0x58);
  uVar3 = FUN_0059d300(param_8,0,0,1,0,0);
  if (-1 < (int)uVar3) {
    fVar12 = (float)NEON_ucvtf(uVar11);
    fVar14 = (float)NEON_ucvtf(uVar13);
    FUN_0059d000(0,0);
    local_a0[2] = param_5;
    if (param_5 <= 0.0) {
      local_a0[2] = fVar12 / fVar14;
    }
    local_a0[0] = -local_a0[2];
    local_a0[1] = -1.0;
    local_94 = 0x3f800000;
    local_b0 = tanf(param_4 * 0.5);
    fStack_ac = param_1 * 0.5;
    local_d0 = 0;
    uStack_c8 = 0xc77c000000000000;
    local_c0 = 0x477c0000;
    uStack_bc = 0x477c0000;
    local_b8 = 0x477c0000;
    uStack_b4 = 0x477c0000;
    if (*(int *)(param_7 + 0x54) == *(int *)(param_8 + 0x54)) {
      bVar1 = *(int *)(param_7 + 0x58) == *(int *)(param_8 + 0x58);
    }
    else {
      bVar1 = false;
    }
    uVar9 = NEON_ucvtf(uVar9);
    uVar10 = NEON_ucvtf(uVar10);
    lVar5 = param_7;
    do {
      lVar6 = lVar5;
      lVar5 = *(long *)(lVar6 + 0x120);
    } while (lVar5 != 0);
    local_a8 = param_2;
    uStack_a4 = param_3;
    uVar11 = (**(code **)(**(long **)(lVar6 + 0xa8) + 0x80))();
    lVar5 = param_7;
    do {
      lVar6 = lVar5;
      lVar5 = *(long *)(lVar6 + 0x120);
    } while (lVar5 != 0);
    plVar4 = *(long **)(lVar6 + 0xa8);
    (**(code **)(*plVar4 + 0x88))(plVar4,bVar1);
    local_e0 = 0;
    uStack_d8 = 0;
    lVar5 = param_7;
    do {
      lVar6 = lVar5;
      lVar5 = *(long *)(lVar6 + 0x120);
    } while (lVar5 != 0);
    uVar2 = FUN_00577490(0,0,uVar9,uVar10,0,0,fVar15 * fVar12 + fVar7,fVar16 * fVar14 + fVar8,
                         param_6,param_9,&local_e0,&local_d0,local_a0,1,&local_b0,
                         *(undefined8 *)(lVar6 + 0xa8),param_10,param_11);
    do {
      lVar5 = param_7;
      param_7 = *(long *)(lVar5 + 0x120);
    } while (param_7 != 0);
    plVar4 = *(long **)(lVar5 + 0xa8);
    (**(code **)(*plVar4 + 0x78))(plVar4,uVar11);
    uVar3 = (ulong)(uVar2 & (int)uVar2 >> 0x1f);
  }
  return uVar3;
}


