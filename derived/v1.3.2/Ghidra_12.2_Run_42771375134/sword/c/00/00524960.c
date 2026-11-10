/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00524960; name: FUN_00524960
 */


undefined4
FUN_00524960(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,long param_8,uint param_9)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  
  if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_027139f8 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: ",0x4afa);
    FUN_00517ae0((double)param_1,(double)param_2,(double)param_3,(double)param_4,(double)param_5,
                 (double)param_6,(double)param_7,
                 "Frame: %d, View: %d, SetAutoExposureAdjustment(iEffectViewIndex: %d, fAdaptationSensitivity: %f, fAdaptationScale: %f, fAdaptationSpeedLimit: %f, fDarkAdaptationSensitivity: %f, fDarkAdaptationScale: %f, fDarkAdaptationSpeedLimit: %f, fLightDarkExposureBorder: %f);\n"
                 ,*(undefined4 *)(*(long *)(param_8 + 0x290) + (long)*(int *)(param_8 + 0x298) * 4),
                 (long)*(int *)(param_8 + 0x298),param_9);
  }
  fVar10 = param_1;
  if (1.0 < param_1) {
    fVar10 = 1.0;
  }
  fVar9 = 0.0;
  if (0.0 <= param_1) {
    fVar9 = fVar10;
  }
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  fVar10 = fVar9;
  if (0.0 <= param_4) {
    fVar10 = param_4;
  }
  fVar3 = param_2;
  if (0.0 <= param_5) {
    fVar3 = param_5;
  }
  fVar2 = param_3;
  if (0.0 <= param_6) {
    fVar2 = param_6;
  }
  fVar10 = fVar10 * fVar10 * (3.0 - (fVar10 + fVar10));
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  uVar4 = 0xfffffffa;
  if ((((fVar10 <= 1.0) && (0.0 <= fVar9)) && (0.0 <= fVar10)) &&
     (((uVar4 = 0xfffffffa, 0.0 <= param_3 && (0.0 <= fVar2)) &&
      ((uVar4 = 0xfffffffa, 0.0 <= param_2 && (0.0 <= fVar3)))))) {
    *(undefined4 *)(param_8 + 0xf6c) = 0x3f800000;
    if (param_9 == 0xffffffff) {
      param_9 = *(uint *)(param_8 + 0x298);
    }
    iVar8 = *(int *)(param_8 + 0x400);
    if (iVar8 < 1) {
      uVar4 = 0;
    }
    else if (param_9 == 0x7fffffff) {
      lVar5 = 0;
      lVar7 = 0;
      uVar4 = 0;
      do {
        lVar1 = *(long *)(param_8 + 0x2a0) + lVar5;
        lVar5 = lVar5 + 0x78;
        *(float *)(lVar1 + 0x38) = param_7;
        *(float *)(lVar1 + 0x3c) = fVar9;
        *(float *)(lVar1 + 0x40) = param_2;
        *(float *)(lVar1 + 0x44) = param_3;
        *(float *)(lVar1 + 0x48) = fVar10;
        *(float *)(lVar1 + 0x4c) = fVar3;
        *(float *)(lVar1 + 0x50) = fVar2;
        lVar7 = lVar7 + 1;
        if (*(long *)(lVar1 + 0x70) == 0) {
          uVar4 = 1;
        }
      } while (lVar7 < *(int *)(param_8 + 0x400));
    }
    else {
      uVar6 = 0;
      uVar4 = 0;
      do {
        if (param_9 == uVar6) {
          lVar5 = *(long *)(param_8 + 0x2a0) + (ulong)param_9 * 0x78;
          *(float *)(lVar5 + 0x38) = param_7;
          *(float *)(lVar5 + 0x3c) = fVar9;
          *(float *)(lVar5 + 0x40) = param_2;
          *(float *)(lVar5 + 0x44) = param_3;
          *(float *)(lVar5 + 0x48) = fVar10;
          *(float *)(lVar5 + 0x4c) = fVar3;
          *(float *)(lVar5 + 0x50) = fVar2;
          iVar8 = *(int *)(param_8 + 0x400);
          if (*(long *)(lVar5 + 0x70) == 0) {
            uVar4 = 1;
          }
        }
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)iVar8);
    }
  }
  return uVar4;
}


