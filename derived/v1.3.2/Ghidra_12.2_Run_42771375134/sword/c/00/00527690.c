/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00527690; name: FUN_00527690
 */


undefined8 FUN_00527690(float param_1,float param_2,float param_3,long param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_027139f8 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: ",0x2cf4);
    FUN_00517ae0((double)param_1,(double)param_2,(double)param_3,
                 "Frame: %d, View: %d, SetRenderScenePerspective(fNear: %f, fFar: %f, fVerticalFov: %f);\n"
                 ,*(undefined4 *)(*(long *)(param_4 + 0x290) + (long)*(int *)(param_4 + 0x298) * 4))
    ;
  }
  fVar3 = tanf(param_3 * 0.5);
  *(undefined1 *)(param_4 + 0x895) = 1;
  fVar2 = DAT_01d4bec0;
  fVar1 = DAT_01d4bc70;
  if (param_1 <= 0.0) {
    param_1 = 1.0;
  }
  *(float *)(param_4 + 0x6c4) = param_1;
  if (param_2 <= 0.0) {
    param_2 = fVar2;
  }
  if (fVar3 <= 0.0) {
    fVar3 = fVar1;
  }
  *(float *)(param_4 + 0x6c8) = param_2;
  *(float *)(param_4 + 0x6d0) = fVar3;
  *(undefined8 *)(param_4 + 0x6d4) = 0;
  fVar3 = atanf(fVar3);
  *(float *)(param_4 + 0x6cc) = fVar3 + fVar3;
  return 0;
}


