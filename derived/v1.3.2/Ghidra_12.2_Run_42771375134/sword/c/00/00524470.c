/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00524470; name: FUN_00524470
 */


undefined8
FUN_00524470(undefined4 param_1,undefined4 param_2,float param_3,long param_4,undefined4 param_5)

{
  float *pfVar1;
  float local_18;
  float local_14;
  
  local_14 = param_3;
  if (0.0 < param_3) {
    *(undefined4 *)(param_4 + 0x848) = param_1;
    *(undefined4 *)(param_4 + 0x844) = param_2;
    *(undefined4 *)(param_4 + 0xf78) = param_5;
    local_18 = 0.001;
    pfVar1 = &local_14;
    if (param_3 <= DAT_01d4c6ac) {
      pfVar1 = &local_18;
    }
    *(float *)(param_4 + 0xf7c) = *pfVar1;
    return 0;
  }
  if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713980 == 0) {
    return 0xffffffff;
  }
  FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x2f97);
  FUN_00517ae0("CPostEffect::SetGlareParameters(): GlareRemapFactor must be greater than 0.0.\n");
  return 0xffffffff;
}


