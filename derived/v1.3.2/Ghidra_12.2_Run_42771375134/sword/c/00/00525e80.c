/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00525e80; name: FUN_00525e80
 */


void FUN_00525e80(undefined8 param_1,float param_2,long param_3,uint param_4)

{
  undefined8 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  
  fVar14 = (float)param_1;
  if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_027139f8 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: ",0x47ce);
    FUN_00517ae0((double)fVar14,(double)param_2,
                 "Frame: %d, View: %d, InitializeAutoExposure(iEffectViewIndex: %d, fSceneLuminance: %f, fCurrentAutoExposureAdjusted: %f);\n"
                 ,*(undefined4 *)(*(long *)(param_3 + 0x290) + (long)*(int *)(param_3 + 0x298) * 4),
                 (long)*(int *)(param_3 + 0x298),param_4);
  }
  if (param_4 == 0xffffffff) {
    param_4 = *(uint *)(param_3 + 0x298);
  }
  FUN_00525d00(param_3);
  fVar4 = DAT_01d4c6ac;
  fVar3 = DAT_01d4c4dc;
  iVar5 = *(int *)(param_3 + 0x400);
  if (0 < iVar5) {
    if (param_4 == 0x7fffffff) {
      lVar6 = 0;
      lVar8 = 0x70;
      do {
        lVar10 = *(long *)(param_3 + 0x2a0);
        if (*(long *)(lVar10 + lVar8) != 0) {
          puVar1 = (undefined8 *)(lVar10 + lVar8);
          pfVar2 = (float *)(puVar1 + -6);
          if (*(float *)(puVar1 + -7) <= param_2) {
            pfVar2 = (float *)((long)puVar1 + -0x24);
          }
          fVar15 = *pfVar2;
          fVar12 = logf(param_2);
          fVar13 = logf(*(float *)(puVar1 + -7));
          if (fVar15 <= fVar4) {
            fVar15 = fVar4;
          }
          fVar15 = exp2f(fVar13 / fVar3 + (fVar12 / fVar3 - fVar13 / fVar3) / fVar15);
          local_a0 = fVar14;
          fStack_9c = fVar14;
          local_98 = fVar14;
          fStack_94 = fVar14;
          FUN_005b91f0(param_1,fVar15,0x3f800000,*(undefined4 *)(param_3 + 0x6c4),
                       *(undefined4 *)(param_3 + 0x6c8),*puVar1,&local_a0,1);
        }
        lVar10 = lVar10 + lVar8;
        lVar8 = lVar8 + 0x78;
        *(float *)(lVar10 + -0x14) = fVar14;
        *(float *)(lVar10 + -0x10) = param_2;
        *(undefined8 *)(lVar10 + -0x1c) = 0;
        *(undefined1 *)(lVar10 + -0xc) = 0;
        lVar6 = lVar6 + 1;
        *(undefined4 *)(lVar10 + -8) = 5;
      } while (lVar6 < *(int *)(param_3 + 0x400));
    }
    else {
      uVar9 = 0;
      uVar7 = (ulong)param_4;
      do {
        if (uVar7 == uVar9) {
          lVar8 = *(long *)(param_3 + 0x2a0);
          plVar11 = (long *)(lVar8 + uVar7 * 0x78 + 0x70);
          if (*plVar11 != 0) {
            lVar6 = lVar8 + uVar7 * 0x78;
            pfVar2 = (float *)(lVar6 + 0x40);
            if (*(float *)(lVar6 + 0x38) <= param_2) {
              pfVar2 = (float *)(lVar6 + 0x4c);
            }
            fVar15 = *pfVar2;
            fVar12 = logf(param_2);
            fVar13 = logf(*(float *)(lVar6 + 0x38));
            if (fVar15 <= fVar4) {
              fVar15 = fVar4;
            }
            fVar15 = exp2f(fVar13 / fVar3 + (fVar12 / fVar3 - fVar13 / fVar3) / fVar15);
            local_a0 = fVar14;
            fStack_9c = fVar14;
            local_98 = fVar14;
            fStack_94 = fVar14;
            FUN_005b91f0(param_1,fVar15,0x3f800000,*(undefined4 *)(param_3 + 0x6c4),
                         *(undefined4 *)(param_3 + 0x6c8),*plVar11,&local_a0,1);
          }
          lVar8 = lVar8 + uVar7 * 0x78;
          *(float *)(lVar8 + 0x5c) = fVar14;
          *(float *)(lVar8 + 0x60) = param_2;
          *(undefined8 *)(lVar8 + 0x54) = 0;
          *(undefined1 *)(lVar8 + 100) = 0;
          *(undefined4 *)(lVar8 + 0x68) = 5;
          iVar5 = *(int *)(param_3 + 0x400);
        }
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)iVar5);
    }
  }
  FUN_005262c0(param_3);
  return;
}


