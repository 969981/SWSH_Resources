/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0058df00; name: FUN_0058df00
 */


ulong FUN_0058df00(float param_1,undefined1 param_2 [16],float param_3,float param_4,
                  undefined4 param_5,float param_6,undefined4 param_7,undefined4 param_8,
                  long param_9,long param_10,long param_11,long param_12,float *param_13,
                  undefined8 param_14,undefined8 param_15,ulong param_16,undefined4 param_17,
                  undefined4 param_18,undefined4 param_19)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_f8 [8];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  fVar10 = param_2._0_4_;
  if (*(long **)(param_9 + 0x20) == (long *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    if ((param_16 & 1) != 0) {
      (**(code **)(**(long **)(param_9 + 0x20) + 0x138))();
      (**(code **)(**(long **)(param_9 + 0x20) + 0x140))(*(long **)(param_9 + 0x20),0xffffffff);
      (**(code **)(**(long **)(param_9 + 0x20) + 0x150))(*(long **)(param_9 + 0x20),0);
    }
    fVar19 = 0.0;
    fVar20 = 0.0;
    if (param_11 != 0 && 0.0 < param_6) {
      fVar20 = param_6;
    }
    lVar6 = 0;
    if (param_11 != 0 && 0.0 < param_6) {
      lVar6 = param_11;
    }
    if (lVar6 == 0) {
      lVar5 = *(long *)(param_9 + 0x29a80);
    }
    else {
      lVar5 = lVar6;
      do {
        lVar4 = lVar5;
        lVar5 = *(long *)(lVar4 + 0x120);
      } while (lVar5 != 0);
      lVar5 = *(long *)(lVar4 + 0xa8);
    }
    if (param_1 == 0.0) {
      param_1 = (float)NEON_ucvtf(*(undefined4 *)(param_12 + 0x54));
    }
    if (fVar10 == 0.0) {
      param_1 = (float)NEON_ucvtf(*(undefined4 *)(param_12 + 0x58));
    }
    local_d8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = param_12;
    uVar3 = FUN_0059db20(0x3f800000,8,&local_e0,0,0,0,0,0,0,0);
    if (-1 < (int)uVar3) {
      FUN_0059d000(0,0);
      (**(code **)(**(long **)(param_9 + 0x20) + 0x88))(*(long **)(param_9 + 0x20),auStack_f8);
      fVar7 = param_1 + param_3;
      fVar8 = fVar10 + param_4;
      fVar13 = param_3;
      if (param_3 <= fVar7) {
        fVar13 = fVar7;
        fVar7 = param_3;
      }
      fVar9 = (float)NEON_ucvtf(local_f0);
      fVar21 = param_4;
      if (param_4 <= fVar8) {
        fVar21 = fVar8;
        fVar8 = param_4;
      }
      fVar12 = fVar9;
      if (fVar7 <= fVar9) {
        fVar12 = fVar7;
      }
      fVar11 = 0.0;
      if (0.0 <= fVar7) {
        fVar11 = fVar12;
      }
      local_e0._0_4_ = (int)fVar11;
      fVar12 = (float)NEON_ucvtf(local_ec);
      fVar7 = fVar12;
      if (fVar8 <= fVar12) {
        fVar7 = fVar8;
      }
      fVar17 = 0.0;
      if (0.0 <= fVar8) {
        fVar17 = fVar7;
      }
      local_e0._4_4_ = (int)fVar17;
      if (fVar13 <= fVar9) {
        fVar9 = fVar13;
      }
      fVar7 = 0.0;
      if (0.0 <= fVar13) {
        fVar7 = fVar9;
      }
      if (fVar21 <= fVar12) {
        fVar12 = fVar21;
      }
      fVar13 = 0.0;
      if (0.0 <= fVar21) {
        fVar13 = fVar12;
      }
      local_d8 = CONCAT44((int)(fVar13 - fVar17),(int)(fVar7 - fVar11));
      local_d0 = 0x3f80000000000000;
      (**(code **)(**(long **)(param_9 + 0x20) + 0x80))(*(long **)(param_9 + 0x20),&local_e0);
      fVar21 = 0.0;
      fVar13 = (float)NEON_ucvtf(*(undefined4 *)(param_10 + 0x58));
      fVar8 = 0.0;
      fVar7 = (float)NEON_ucvtf(*(undefined4 *)(param_10 + 0x54));
      if (lVar6 != 0) {
        fVar8 = (float)NEON_ucvtf(*(undefined4 *)(lVar6 + 0x58));
        fVar21 = (float)NEON_ucvtf(*(undefined4 *)(lVar6 + 0x54));
      }
      fVar9 = 0.0;
      if (lVar6 != 0) {
        fVar19 = fVar21 * *(float *)(lVar6 + 0x88) + *(float *)(lVar6 + 0x90);
        fVar9 = fVar8 * *(float *)(lVar6 + 0x8c) + *(float *)(lVar6 + 0x94);
      }
      fVar12 = (float)NEON_ucvtf((int)local_e0);
      fVar17 = *(float *)(param_10 + 0x88) * fVar7 + *(float *)(param_10 + 0x90);
      fVar11 = (float)NEON_ucvtf(local_e0._4_4_);
      fVar18 = *(float *)(param_10 + 0x8c) * fVar13 + *(float *)(param_10 + 0x94);
      bVar1 = param_13 == (float *)0x0;
      if (bVar1) {
        fVar14 = 0.0;
        fVar22 = 0.0;
        fVar16 = 0.0;
        fVar15 = 0.0;
      }
      else {
        fVar16 = fVar18 * param_13[3] + 0.0;
        fVar15 = fVar17 * param_13[2] + 0.0;
        fVar22 = fVar19 * param_13[2] + 0.0;
        fVar14 = fVar9 * param_13[3] + 0.0;
        fVar18 = fVar16 + fVar18 * param_13[1];
        fVar17 = fVar15 + fVar17 * *param_13;
        fVar19 = fVar22 + fVar19 * *param_13;
        fVar9 = fVar14 + fVar9 * param_13[1];
      }
      do {
        lVar6 = param_10;
        param_10 = *(long *)(lVar6 + 0x120);
      } while (param_10 != 0);
      uVar2 = FUN_0058db80(param_3 - fVar12,param_4 - fVar11,param_1,param_2._0_8_,fVar15,fVar16,
                           fVar17,fVar18,param_9,param_14,param_15,*(undefined8 *)(lVar6 + 0xa8),
                           lVar5,bVar1 && (param_1 == fVar7 && fVar13 == fVar10),
                           bVar1 && (param_1 == fVar21 && fVar8 == fVar10) ||
                           lVar5 == *(long *)(param_9 + 0x29a80),param_19,fVar22,fVar14,fVar19,fVar9
                           ,param_5,fVar20,param_7,param_8,param_17,param_18);
      uVar3 = (ulong)(uVar2 & (int)uVar2 >> 0x1f);
    }
  }
  return uVar3;
}


