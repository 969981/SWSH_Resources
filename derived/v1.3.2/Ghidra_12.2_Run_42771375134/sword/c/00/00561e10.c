/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00561e10; name: FUN_00561e10
 */


undefined8 FUN_00561e10(uint param_1)

{
  if ((param_1 < 0x39) && ((1L << ((ulong)param_1 & 0x3f) & 0x180630000300000U) != 0)) {
    return 0;
  }
  if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_02713980 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX ERROR: ",0x1a5);
    FUN_00517ae0("FXDCT_GetDepthCastTypeFromDepthFormat(): eDepthFormat: 0x%x.\n",param_1);
  }
  return 0xffffffff;
}


