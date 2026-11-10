/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0058ae30; name: FUN_0058ae30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0058ae30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,byte param_10,long *param_11,int param_12,long param_13,int param_14,uint param_15,
            long param_16,float param_17,float param_18,float param_19,float *param_20,
            long *param_21,float *param_22,float *param_23,undefined8 param_24,undefined4 param_25,
            undefined8 param_26,undefined4 param_27)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  int *piVar4;
  uint uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  float local_b8;
  float fStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  uVar5 = *(uint *)((long)param_11 + 0x44);
  if ((param_10 & 1) == 0) {
    if ((0x37 < uVar5) || ((1L << ((ulong)uVar5 & 0x3f) & 0x80210000100000U) == 0)) {
      uVar6 = (ulong)param_15;
      if (3 < param_15) {
        uVar6 = 0xffffffffffffffff;
      }
      goto LAB_0058af48;
    }
  }
  else if ((0x38 < uVar5) || ((1L << ((ulong)uVar5 & 0x3f) & 0x180630000300000U) == 0)) {
    uVar6 = 0xffffffffffffffff;
    if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX ERROR: ",0x1a5);
      FUN_00517ae0("FXDCT_GetDepthCastTypeFromDepthFormat(): eDepthFormat: 0x%x.\n",uVar5);
      uVar6 = 0xffffffffffffffff;
    }
    goto LAB_0058af48;
  }
  uVar6 = 0;
LAB_0058af48:
  (**(code **)(*param_11 + 0x88))(param_11,1);
  if (param_13 == 0) {
    lVar3 = param_9 + uVar6 * 8;
    piVar4 = (int *)(lVar3 + 0x159b4);
    uVar5 = 0xc7c;
  }
  else {
    lVar3 = param_9 + uVar6 * 0x58 + (long)param_14 * 4;
    piVar4 = (int *)(lVar3 + 0x159ec);
    uVar5 = 0xcb4;
  }
  if (param_21 == (long *)0x0) {
    piVar4 = (int *)(lVar3 + (ulong)(uVar5 | 0x10000));
  }
  if (*piVar4 == 0) {
    uVar2 = 0xfffffffc;
  }
  else {
    (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))();
    fVar7 = 1.0;
    fVar8 = 0.0;
    fVar10 = 0.0;
    fVar9 = 1.0;
    local_b0 = 0x3f800000;
    uStack_a8 = 0x3f800000;
    if (param_16 != 0) {
      fVar9 = *(float *)(param_16 + 8);
      fVar10 = *(float *)(param_16 + 0xc);
      local_b0 = *(undefined8 *)(param_16 + 8);
      if ((param_10 & 1) != 0) {
        fVar11 = ((param_18 - param_17) * param_19) / (param_17 * param_18);
        fVar9 = fVar11 * fVar9;
        fVar10 = (1.0 - param_19 / param_17) + fVar11 * fVar10;
        local_b0 = CONCAT44(fVar10,fVar9);
      }
    }
    local_c0 = 0x3f800000;
    if (param_21 != (long *)0x0) {
      local_b0 = CONCAT44(*param_22 * fVar10 + param_22[1],fVar9 * *param_22);
      fVar7 = *param_23;
      fVar8 = param_23[1] + 0.0;
      local_c0 = CONCAT44(fVar8,fVar7);
    }
    if ((param_20 != (float *)0x0) && ((param_10 & 1) == 0)) {
      fVar7 = fVar7 * *param_20;
      fVar8 = *param_20 * fVar8 + param_20[1];
      local_c0 = CONCAT44(fVar8,fVar7);
    }
    if ((param_12 == 1 & param_10 & param_20 != (float *)0x0) != 0) {
      fVar7 = fVar7 * *param_20;
      fVar8 = *param_20 * fVar8 + param_20[1];
      local_c0 = CONCAT44(fVar8,fVar7);
    }
    _local_b8 = CONCAT44(-fVar8 / fVar7,1.0 / fVar7);
    (**(code **)(**(long **)(param_9 + 0x30) + 0xa0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xf0),&local_b0);
    (**(code **)(**(long **)(param_9 + 0x30) + 0xa0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xd8),&local_c0);
    local_d0 = 0x477fe000c77fe000;
    uStack_c8 = 0;
    (**(code **)(**(long **)(param_9 + 0x30) + 0xa0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xd4),&local_d0);
    if (param_21 != (long *)0x0) {
      DAT_02760c18 = param_25;
      _DAT_02760c1c = 0;
      DAT_02760c24 = 0;
      (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xf8),&DAT_02760c18,1);
    }
    uVar1 = (**(code **)(*param_11 + 0x98))(param_11);
    (**(code **)(*param_11 + 0x88))(param_11,1);
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x40),param_11);
    if (param_13 != 0) {
      (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x44),param_13);
    }
    if (param_21 != (long *)0x0) {
      (**(code **)(*param_21 + 0x78))(param_21,0xd);
      (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x48),param_21);
    }
    if (param_13 != 0) {
      (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),param_26,1);
    }
    uVar2 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_27);
    (**(code **)(*param_11 + 0x88))(param_11,uVar1);
  }
  return uVar2;
}


