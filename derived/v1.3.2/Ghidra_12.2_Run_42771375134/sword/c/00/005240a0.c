/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005240a0; name: FUN_005240a0
 */


undefined8 FUN_005240a0(long param_1,uint param_2,undefined8 param_3)

{
  if (4 < param_2) {
    if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713980 == 0) {
      return 0xfffffffa;
    }
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x998a);
    FUN_00517ae0(
                "CPostEffect::SetEffectMaskColorSource(): Argument eEffectMaskColorSource is invalid.\n"
                );
    return 0xfffffffa;
  }
  *(uint *)(param_1 + 0x5c8) = param_2;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x5b8) = 0;
    return 0;
  }
  if (*(char *)(param_1 + 0x1cd) != '\0') {
    *(undefined8 *)(param_1 + 0x5b8) = param_3;
    return 0;
  }
  if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_027139c0 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: ",0x99a1);
    FUN_00517ae0(
                "CPostEffect::SetEffectMaskColorSource(): Initialize() with PFXINIT_EFFECTMASK flag for effect mask.\n"
                );
  }
  *(undefined4 *)(param_1 + 0x5c8) = 0;
  *(undefined8 *)(param_1 + 0x5b8) = 0;
  return 1;
}


