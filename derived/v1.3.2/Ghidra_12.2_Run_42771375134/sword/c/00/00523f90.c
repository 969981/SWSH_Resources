/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00523f90; name: FUN_00523f90
 */


undefined8 FUN_00523f90(long param_1,uint param_2,undefined8 param_3)

{
  if (5 < param_2) {
    if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713980 == 0) {
      return 0xfffffffa;
    }
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x98e1);
    FUN_00517ae0(
                "CPostEffect::SetGlareModulatorSource(): Argument eGlareModulatorSource is invalid.\n"
                );
    return 0xfffffffa;
  }
  *(uint *)(param_1 + 0xc0) = param_2;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    return 0;
  }
  if (*(char *)(param_1 + 0x1cc) != '\0') {
    *(undefined8 *)(param_1 + 0xb8) = param_3;
    return 0;
  }
  if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_027139c0 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: ",0x98f9);
    FUN_00517ae0(
                "CPostEffect::SetGlareModulatorSource(): Initialize() with PFXINIT_GLAREMODULATOR flag for glare modulation.\n"
                );
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  return 1;
}


