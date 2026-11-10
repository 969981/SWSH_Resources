/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005241b0; name: FUN_005241b0
 */


undefined8 FUN_005241b0(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  float in_s3;
  float in_s4;
  
  FUN_00527690();
  puVar4 = PTR_DAT_027139f8;
  puVar3 = PTR_DAT_02713970;
  iVar1 = *(int *)PTR_DAT_02713970;
  iVar2 = *(int *)PTR_DAT_027139f8;
  if (iVar1 == 0 || iVar2 == 0) {
    *(float *)(param_1 + 0x7f4) = in_s3;
    if (iVar1 == 0 || iVar2 == 0) goto joined_r0x00524290;
  }
  else {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: ",0x2ce4);
    FUN_00517ae0((double)in_s3,"Frame: %d, View: %d, SetDeltaTime(fElapsedTimeInSeconds: %f);\n",
                 *(undefined4 *)(*(long *)(param_1 + 0x290) + (long)*(int *)(param_1 + 0x298) * 4));
    iVar1 = *(int *)puVar3;
    iVar2 = *(int *)puVar4;
    *(float *)(param_1 + 0x7f4) = in_s3;
    if (iVar1 == 0 || iVar2 == 0) goto joined_r0x00524290;
  }
  FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: ",0x2e46);
  FUN_00517ae0((double)in_s4,
               "Frame: %d, View: %d, SetRenderSceneLuminanceScale(fSceneLuminanceScale: %f);\n",
               *(undefined4 *)(*(long *)(param_1 + 0x290) + (long)*(int *)(param_1 + 0x298) * 4));
joined_r0x00524290:
  if (in_s4 <= 0.0) {
    uVar5 = 0xfffffffa;
    if ((*(int *)puVar3 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x2e4e);
      FUN_00517ae0(
                  "CPostEffect::SetRenderSceneLuminanceScale(): SceneLuminanceScale mest be greater than zero.\n"
                  );
      uVar5 = 0xfffffffa;
    }
  }
  else {
    uVar5 = 0;
    *(float *)(param_1 + 0x7f8) = in_s4;
  }
  return uVar5;
}


