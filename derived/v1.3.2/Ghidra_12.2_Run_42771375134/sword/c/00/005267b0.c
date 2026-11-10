/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005267b0; name: FUN_005267b0
 */


int FUN_005267b0(undefined8 param_1,undefined1 *param_2,uint param_3,undefined8 param_4,
                undefined4 param_5,int param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 uVar7;
  float fVar8;
  
  puVar1 = PTR_DAT_02713970;
  fVar8 = (float)param_1;
  if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_027139f8 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: ",0x2c34);
    FUN_00517ae0((double)fVar8,
                 "Frame: %d, View: %d, BeginPostEffectScene(uiClearFlags: %08x, pClearColor: %p, fClearDepth: %f, uiClearStencil: %d, iAuxiliaryRenderBufferIndex: %d);\n"
                 ,*(undefined4 *)(*(long *)(param_2 + 0x290) + (long)*(int *)(param_2 + 0x298) * 4),
                 (long)*(int *)(param_2 + 0x298),param_3,param_4,param_5,param_6);
  }
  FUN_00525d00(param_2);
  iVar3 = (**(code **)(**(long **)(param_2 + 0x18) + 0x1c0))();
  if (param_6 < 1) {
    iVar3 = FUN_00526b00(param_2);
  }
  *(uint *)(param_2 + 0x6b8) = param_3;
  *(float *)(param_2 + 0x6bc) = fVar8;
  *(undefined4 *)(param_2 + 0x6c0) = param_5;
  puVar2 = PTR_DAT_027139b0;
  if ((fVar8 < 0.0) && (param_1 = 0x3f800000, param_2[0x1014] != '\0')) {
    param_1 = 0;
  }
  iVar4 = *(int *)PTR_DAT_027139b0;
  if (iVar4 < 1) {
    plVar6 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                  "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar6,0);
    *(long **)PTR_DAT_027139b8 = plVar6;
    *(undefined4 *)puVar2 = 1;
joined_r0x005269e8:
    if (plVar6 == (long *)0x0) {
      *(undefined4 *)puVar2 = 0;
      iVar4 = *(int *)(param_2 + 0x5d8);
      *(int *)(param_2 + 0x5e8) = iVar4;
      goto joined_r0x005269fc;
    }
    uVar7 = *(undefined8 *)PTR_PTR_02713988;
    (**(code **)(*plVar6 + 0x20))(plVar6);
    FUN_005b9b10(uVar7,plVar6);
    iVar4 = 0;
    *(undefined8 *)PTR_DAT_027139b8 = 0;
  }
  else {
    plVar6 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar4 + 1;
    if (iVar4 + 1 < 2) goto joined_r0x005269e8;
  }
  *(int *)puVar2 = iVar4;
  iVar4 = *(int *)(param_2 + 0x5d8);
  *(int *)(param_2 + 0x5e8) = iVar4;
joined_r0x005269fc:
  if (-1 < param_6) {
    *(undefined8 *)PTR_DAT_02713a70 = 0;
    iVar3 = FUN_0059e450(0x3f800000,0x1f,0,0,0,0,0,0,0);
    iVar4 = *(int *)(param_2 + 0x5dc) + param_6;
    *(int *)(param_2 + 0x5e8) = iVar4;
  }
  *(int *)(*(long *)(param_2 + 400) + 0x90) = iVar4;
  FUN_005a60a0(*(undefined8 *)(param_2 + 400),*(undefined4 *)(param_2 + 0x6b4),0x7fffffff);
  if (param_2[0x1d3] == '\0') {
    uVar5 = 0x10000;
    if ((param_3 & 0xff0) != 0) {
      uVar5 = 0x30000;
    }
    iVar3 = FUN_005a6120(param_1,*(undefined8 *)(param_2 + 400),*(undefined4 *)(param_2 + 0x5e8),1,
                         param_3,param_4,param_5,0,0,uVar5);
  }
  else if (*(long *)(param_2 + 0x70) == 0) {
    if (*(int *)puVar1 == 0) {
      return -1;
    }
    if (*(int *)PTR_DAT_02713980 == 0) {
      return -1;
    }
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x2c85);
    FUN_00517ae0(
                "CPostEffect::BeginPostEffectScene(): At least SetEffectSource() must be called if Initialize() was called with PFXINIT_RENDERSCENE_EXTERNAL flag.\n"
                );
    return -1;
  }
  if (iVar3 < 0) {
    if ((*(int *)puVar1 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x2c99);
      uVar7 = FUN_00546ea0(iVar3);
      FUN_00517ae0("CPostEffect::BeginPostEffectScene(): m_pRenderBuffer->SetRenderTarget() failed (0x%x: %s).\n"
                   ,iVar3,uVar7);
    }
  }
  else {
    iVar3 = 0;
    *param_2 = 1;
  }
  return iVar3;
}


