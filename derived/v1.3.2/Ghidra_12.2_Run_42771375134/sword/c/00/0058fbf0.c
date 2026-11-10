/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0058fbf0; name: FUN_0058fbf0
 */


uint FUN_0058fbf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,float param_6,float param_7,undefined4 param_8,long param_9,
                 long param_10,long param_11,long param_12,long param_13,long param_14,byte param_15
                 ,undefined4 param_16,undefined8 param_17,undefined4 param_18,undefined8 param_19,
                 undefined8 param_20,undefined4 param_21,undefined4 param_22,undefined4 param_23,
                 float param_24,float *param_25,undefined8 param_26,byte param_27)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  uint in_stack_fffffffffffffdc0;
  undefined8 in_stack_fffffffffffffdd0;
  undefined4 uVar34;
  undefined8 in_stack_fffffffffffffdd8;
  undefined4 uVar35;
  undefined8 local_d8;
  undefined8 local_d0;
  float local_c8;
  float fStack_c4;
  float local_c0;
  undefined4 local_bc;
  long local_b8;
  long lStack_b0;
  
  uVar34 = (undefined4)((ulong)in_stack_fffffffffffffdd0 >> 0x20);
  uVar35 = (undefined4)((ulong)in_stack_fffffffffffffdd8 >> 0x20);
  uVar1 = 0xffffffff;
  if (*(long **)(param_9 + 0x20) != (long *)0x0) {
    if ((param_27 & 1) != 0) {
      (**(code **)(**(long **)(param_9 + 0x20) + 0x138))();
      (**(code **)(**(long **)(param_9 + 0x20) + 0x140))(*(long **)(param_9 + 0x20),0xffffffff);
      (**(code **)(**(long **)(param_9 + 0x20) + 0x150))(*(long **)(param_9 + 0x20),0);
    }
    fVar9 = param_6;
    if (param_7 <= param_6) {
      fVar9 = param_7;
    }
    if (1.0 <= fVar9) {
      local_d8 = 0x3f8000003f800000;
      local_d0 = 0x3f8000003f800000;
      local_b8 = 0;
      lStack_b0 = 0;
      uVar1 = FUN_0057da10(0,0,0,0x3f800000,param_9,param_11,param_10,0,0,&local_d8,0,0,
                           in_stack_fffffffffffffdc0 & 0xffffff00,1,&local_b8,0,0xffffffff);
    }
    else if (param_12 == 0) {
      local_d8 = CONCAT44(param_6,param_6);
      local_bc = 0;
      fVar9 = 1.0 - param_6;
      local_c8 = fVar9 * (*param_25 + (1.0 - *param_25) * param_6) * param_24;
      fStack_c4 = fVar9 * (param_25[1] + (1.0 - param_25[1]) * param_6) * param_24;
      local_c0 = fVar9 * (param_25[2] + (1.0 - param_25[2]) * param_6) * param_24;
      local_d0 = CONCAT44(0x3f800000,param_6);
      local_b8 = param_11;
      lStack_b0 = param_13;
      uVar1 = FUN_0058d2d0(0x3f800000,0x3f800000,param_9,param_10,2,&local_b8,&local_d8,0,0);
    }
    else {
      uVar8 = *(undefined4 *)(param_11 + 0x54);
      uVar31 = *(undefined4 *)(param_11 + 0x58);
      fVar9 = *(float *)(param_11 + 0x88);
      fVar10 = *(float *)(param_11 + 0x8c);
      fVar11 = *(float *)(param_11 + 0x90);
      fVar12 = *(float *)(param_11 + 0x94);
      fVar13 = *(float *)(param_12 + 0x88);
      uVar32 = *(undefined4 *)(param_12 + 0x54);
      uVar33 = *(undefined4 *)(param_12 + 0x58);
      fVar14 = *(float *)(param_12 + 0x8c);
      fVar15 = *(float *)(param_12 + 0x90);
      fVar16 = *(float *)(param_12 + 0x94);
      lVar6 = param_14;
      if (param_14 == 0) {
        lVar6 = param_11;
      }
      uVar17 = *(undefined4 *)(lVar6 + 0x54);
      uVar18 = *(undefined4 *)(lVar6 + 0x58);
      fVar19 = *(float *)(lVar6 + 0x88);
      fVar20 = *(float *)(lVar6 + 0x8c);
      fVar30 = *(float *)(lVar6 + 0x90);
      fVar21 = *(float *)(lVar6 + 0x94);
      uVar22 = *(undefined4 *)(param_10 + 0x54);
      uVar23 = *(undefined4 *)(param_10 + 0x58);
      uVar1 = FUN_0059d300(param_10,0,0,1,0,0);
      if (-1 < (int)uVar1) {
        fVar26 = (float)NEON_ucvtf(uVar31);
        fVar27 = (float)NEON_ucvtf(uVar32);
        fVar29 = (float)NEON_ucvtf(uVar33);
        fVar24 = (float)NEON_ucvtf(uVar8);
        fVar25 = (float)NEON_ucvtf(uVar17);
        fVar28 = (float)NEON_ucvtf(uVar18);
        uVar31 = NEON_ucvtf(uVar22);
        uVar8 = NEON_ucvtf(uVar23);
        FUN_0059d000(0,0);
        lVar6 = param_11;
        do {
          lVar5 = lVar6;
          lVar6 = *(long *)(lVar5 + 0x120);
        } while (lVar6 != 0);
        lVar6 = param_12;
        do {
          lVar7 = lVar6;
          lVar6 = *(long *)(lVar7 + 0x120);
        } while (lVar6 != 0);
        do {
          lVar6 = param_13;
          param_13 = *(long *)(lVar6 + 0x120);
        } while (param_13 != 0);
        if (param_14 == 0) {
          uVar2 = 0;
          param_14 = param_11;
        }
        else {
          lVar4 = param_14;
          do {
            lVar3 = lVar4;
            lVar4 = *(long *)(lVar3 + 0x120);
          } while (lVar4 != 0);
          uVar2 = *(undefined8 *)(lVar3 + 0xa8);
        }
        uVar1 = FUN_005900d0(0,0,uVar31,uVar8,0,0,fVar9 * fVar24 + fVar11,fVar10 * fVar26 + fVar12,
                             param_9,*(undefined8 *)(lVar5 + 0xa8),*(undefined8 *)(lVar7 + 0xa8),
                             *(undefined8 *)(lVar6 + 0xa8),uVar2,param_11 + 0x88,param_14 + 0x88,
                             param_12 + 0x88,0,0,CONCAT44(uVar34,fVar13 * fVar27 + fVar15),
                             CONCAT44(uVar35,fVar14 * fVar29 + fVar16),0,0,fVar19 * fVar25 + fVar30,
                             fVar20 * fVar28 + fVar21,param_1,param_2,param_15 & 1,param_3,param_4,
                             param_16,param_17,param_18,param_19,param_20,param_5,param_6,param_7,
                             param_8,param_21,param_22,param_23,param_24,param_25,param_26,0);
        return uVar1 & (int)uVar1 >> 0x1f;
      }
    }
  }
  return uVar1;
}


