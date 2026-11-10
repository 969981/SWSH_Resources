/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00524ff0; name: FUN_00524ff0
 */


undefined4
FUN_00524ff0(float param_1,float param_2,float param_3,float param_4,long param_5,uint param_6)

{
  long lVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_027139f8 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: ",0x4a24);
    FUN_00517ae0((double)param_1,(double)param_2,(double)param_3,(double)param_4,
                 "Frame: %d, View: %d, SetAutoExposureMeteringArea(iEffectViewIndex: %d, fWidth: %f, fHeight: %f, fOffsetX: %f, fOffsetY: %f);\n"
                 ,*(undefined4 *)(*(long *)(param_5 + 0x290) + (long)*(int *)(param_5 + 0x298) * 4),
                 (long)*(int *)(param_5 + 0x298),param_6);
  }
  fVar8 = param_1 + param_3;
  fVar12 = -param_1;
  if (0.0 <= param_1) {
    fVar8 = param_3;
    fVar12 = param_1;
  }
  fVar10 = -param_2;
  fVar9 = param_2 + param_4;
  if (0.0 <= param_2) {
    fVar10 = param_2;
    fVar9 = param_4;
  }
  fVar13 = fVar8 - (fVar12 + fVar8);
  if (0.0 <= fVar12 + fVar8) {
    fVar13 = fVar8;
  }
  fVar11 = fVar12 + fVar13;
  fVar8 = fVar9 - (fVar10 + fVar9);
  if (0.0 <= fVar10 + fVar9) {
    fVar8 = fVar9;
  }
  bVar2 = 0.0 <= fVar13;
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  if (bVar2) {
    fVar11 = fVar12;
  }
  fVar12 = fVar8;
  if (fVar8 <= 0.0) {
    fVar12 = 0.0;
  }
  fVar9 = fVar10 + fVar8;
  if (0.0 <= fVar8) {
    fVar9 = fVar10;
  }
  if (1.0 <= fVar13) {
    fVar13 = 1.0;
  }
  if (1.0 <= fVar12) {
    fVar12 = 1.0;
  }
  fVar8 = fVar11 - (fVar11 + fVar13 + -1.0);
  if (fVar11 + fVar13 <= 1.0) {
    fVar8 = fVar11;
  }
  fVar10 = fVar9 - (fVar9 + fVar12 + -1.0);
  if (fVar9 + fVar12 <= 1.0) {
    fVar10 = fVar9;
  }
  if (param_6 == 0xffffffff) {
    param_6 = *(uint *)(param_5 + 0x298);
    iVar6 = *(int *)(param_5 + 0x400);
  }
  else {
    iVar6 = *(int *)(param_5 + 0x400);
  }
  if (iVar6 < 1) {
    uVar3 = 0;
  }
  else if (param_6 == 0x7fffffff) {
    lVar4 = 0;
    lVar7 = 0;
    uVar3 = 0;
    do {
      lVar1 = *(long *)(param_5 + 0x2a0) + lVar4;
      lVar4 = lVar4 + 0x78;
      *(float *)(lVar1 + 0xc) = fVar8;
      *(float *)(lVar1 + 0x10) = fVar10;
      *(float *)(lVar1 + 0x14) = fVar13;
      *(float *)(lVar1 + 0x18) = fVar12;
      lVar7 = lVar7 + 1;
      if (*(long *)(lVar1 + 0x70) == 0) {
        uVar3 = 1;
      }
    } while (lVar7 < *(int *)(param_5 + 0x400));
  }
  else {
    uVar5 = 0;
    uVar3 = 0;
    do {
      if (param_6 == uVar5) {
        lVar4 = *(long *)(param_5 + 0x2a0) + (ulong)param_6 * 0x78;
        *(float *)(lVar4 + 0xc) = fVar8;
        *(float *)(lVar4 + 0x10) = fVar10;
        *(float *)(lVar4 + 0x14) = fVar13;
        *(float *)(lVar4 + 0x18) = fVar12;
        iVar6 = *(int *)(param_5 + 0x400);
        if (*(long *)(lVar4 + 0x70) == 0) {
          uVar3 = 1;
        }
      }
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)iVar6);
  }
  return uVar3;
}


