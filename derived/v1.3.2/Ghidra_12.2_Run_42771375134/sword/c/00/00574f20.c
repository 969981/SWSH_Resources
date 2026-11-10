/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00574f20; name: FUN_00574f20
 */


ulong FUN_00574f20(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                  long param_5,long param_6,long param_7,long param_8,undefined4 param_9,
                  long param_10,uint param_11,undefined8 param_12,undefined4 param_13,long param_14,
                  undefined8 param_15,undefined8 param_16,undefined4 param_17,byte param_18)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  
  if ((param_5 != 0) == (param_6 != 0)) {
    return 0xfffffffa;
  }
  if ((param_18 & 1) != 0) {
    (**(code **)(**(long **)(param_4 + 0x20) + 0x138))();
    (**(code **)(**(long **)(param_4 + 0x20) + 0x140))(*(long **)(param_4 + 0x20),0xffffffff);
    (**(code **)(**(long **)(param_4 + 0x20) + 0x150))(*(long **)(param_4 + 0x20),0);
  }
  puVar1 = (undefined4 *)(param_6 + 0x4c);
  if (param_6 == 0) {
    puVar1 = (undefined4 *)(param_5 + 0x54);
  }
  uVar13 = *puVar1;
  puVar1 = (undefined4 *)(param_6 + 0x50);
  if (param_6 == 0) {
    puVar1 = (undefined4 *)(param_5 + 0x58);
  }
  uVar14 = *puVar1;
  if (param_6 == 0) {
    FUN_0059d300(param_5,0,0,1,0,0);
    uVar4 = FUN_0059d000(0,0);
    iVar2 = (int)uVar4;
  }
  else {
    (**(code **)(**(long **)(param_4 + 0x20) + 0x40))(*(long **)(param_4 + 0x20),0);
    uVar4 = (**(code **)(**(long **)(param_4 + 0x20) + 0x38))
                      (*(long **)(param_4 + 0x20),0,param_6,0);
    iVar2 = (int)uVar4;
  }
  if (iVar2 < 0) {
    return uVar4;
  }
  fVar12 = (float)NEON_ucvtf(*(undefined4 *)(param_8 + 0x58));
  fVar11 = (float)NEON_ucvtf(*(undefined4 *)(param_8 + 0x54));
  local_a8 = *(float *)(param_8 + 0x88) * fVar11 + *(float *)(param_8 + 0x90);
  local_b0 = *(float *)(param_8 + 0x88) + *(float *)(param_8 + 0x90);
  fStack_9c = *(float *)(param_8 + 0x8c) + *(float *)(param_8 + 0x94);
  fStack_94 = *(float *)(param_8 + 0x8c) * fVar12 + *(float *)(param_8 + 0x94);
  fVar12 = (float)NEON_ucvtf(uVar14);
  fStack_b4 = fStack_94 - fStack_9c;
  uVar13 = NEON_ucvtf(uVar13);
  local_c0 = -local_b0;
  fStack_bc = -fStack_9c;
  local_b8 = local_a8 - local_b0;
  local_a8 = local_a8 + local_b0;
  fStack_94 = fStack_94 + fStack_9c;
  fVar11 = (float)NEON_ucvtf(*(undefined4 *)(param_7 + 0x58));
  fVar11 = fVar11 / fVar12 + -0.5;
  if (fVar11 <= 0.0) {
    fVar11 = -fVar11;
  }
  do {
    lVar10 = param_7;
    param_7 = *(long *)(lVar10 + 0x120);
  } while (param_7 != 0);
  do {
    lVar9 = param_8;
    param_8 = *(long *)(lVar9 + 0x120);
  } while (param_8 != 0);
  if (param_10 == 0) {
    uVar5 = 0;
  }
  else {
    lVar8 = param_10;
    do {
      lVar7 = lVar8;
      lVar8 = *(long *)(lVar7 + 0x120);
    } while (lVar8 != 0);
    uVar5 = *(undefined8 *)(lVar7 + 0xa8);
  }
  if (param_14 == 0) {
    uVar6 = 0;
  }
  else {
    do {
      lVar8 = param_14;
      param_14 = *(long *)(lVar8 + 0x120);
    } while (param_14 != 0);
    uVar6 = *(undefined8 *)(lVar8 + 0xa8);
  }
  fStack_ac = fStack_bc;
  fStack_a4 = fStack_b4;
  local_a0 = local_c0;
  local_98 = local_b8;
  local_90 = local_b0;
  fStack_8c = fStack_9c;
  local_88 = local_a8;
  fStack_84 = fStack_94;
  uVar3 = FUN_00574620(0,0,uVar13,fVar12,0,0,param_4,&local_c0,*(undefined8 *)(lVar10 + 0xa8),
                       *(undefined8 *)(lVar9 + 0xa8),uVar5,uVar6,param_10 != 0,param_11 & 1,param_1,
                       param_2,param_3,param_12,param_9,param_13,param_15,param_16,param_17,
                       fVar11 <= DAT_01d4c6b4,0);
  return (ulong)(uVar3 & (int)uVar3 >> 0x1f);
}


