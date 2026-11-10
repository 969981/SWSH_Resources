/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00524550; name: FUN_00524550
 */


undefined8
FUN_00524550(float param_1,float param_2,float param_3,float param_4,long param_5,undefined4 param_6
            )

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  float fVar5;
  
  puVar3 = PTR_DAT_027139f8;
  puVar2 = PTR_DAT_02713970;
  if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_027139f8 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: ",0x44d4);
    FUN_00517ae0((double)param_1,"Frame: %d, View: %d, SetTonemapExposure(fExposure: %f);\n",
                 *(undefined4 *)(*(long *)(param_5 + 0x290) + (long)*(int *)(param_5 + 0x298) * 4));
  }
  if (param_1 <= DAT_01d4c104) {
    param_1 = 1.1754944e-38;
  }
  if (0.0 <= param_1) {
    *(float *)(param_5 + 0x8c0) = param_1;
  }
  if (*(int *)puVar2 != 0 && *(int *)puVar3 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: ",0x4508);
    FUN_00517ae0((double)param_3,
                 "Frame: %d, View: %d, SetTonemapFunction(eTonemap: %d, fMappingFactor: %f);\n",
                 *(undefined4 *)(*(long *)(param_5 + 0x290) + (long)*(int *)(param_5 + 0x298) * 4),
                 (long)*(int *)(param_5 + 0x298),param_6);
  }
  *(undefined4 *)(param_5 + 0x8c8) = param_6;
  if (*(char *)(param_5 + 0x59c) == '\0') {
    *(float *)(param_5 + 0x8cc) = param_3;
    *(undefined4 *)(param_5 + 0x8d0) = 0x3f800000;
    iVar1 = *(int *)puVar2;
  }
  else {
    *(undefined4 *)(param_5 + 0x8cc) = 0x3f800000;
    *(float *)(param_5 + 0x8d0) = 1.0 / param_3;
    iVar1 = *(int *)puVar2;
  }
  if ((iVar1 != 0) && (*(int *)puVar3 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: ",0x45b4);
    FUN_00517ae0((double)param_2,(double)param_4,
                 "Frame: %d, View: %d, SetTonemapBackend(fGamma: %f, fDitherOffsetScale: %f);\n",
                 *(undefined4 *)(*(long *)(param_5 + 0x290) + (long)*(int *)(param_5 + 0x298) * 4));
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  if (0.0 <= param_2) {
    fVar5 = DAT_01d4c308;
    if (param_4 != DAT_01d4c18c) {
      fVar5 = param_4;
    }
    uVar4 = 0;
    *(float *)(param_5 + 0x8c4) = param_2;
    *(float *)(param_5 + 0x968) = fVar5;
  }
  else {
    uVar4 = 0xfffffffa;
  }
  return uVar4;
}


