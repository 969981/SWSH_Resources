/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00524720; name: FUN_00524720
 */


undefined8 FUN_00524720(float param_1,long param_2)

{
  if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_027139f8 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: ",0x2ce4);
    FUN_00517ae0((double)param_1,"Frame: %d, View: %d, SetDeltaTime(fElapsedTimeInSeconds: %f);\n",
                 *(undefined4 *)(*(long *)(param_2 + 0x290) + (long)*(int *)(param_2 + 0x298) * 4));
  }
  *(float *)(param_2 + 0x7f4) = param_1;
  return 0;
}


