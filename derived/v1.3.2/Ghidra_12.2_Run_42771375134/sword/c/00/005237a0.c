/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005237a0; name: FUN_005237a0
 */


undefined8 FUN_005237a0(long param_1,byte param_2)

{
  if (*(char *)(param_1 + 0x1c0) != '\0') {
    *(byte *)(param_1 + 0xc7a) = param_2 & 1;
    return 0;
  }
  if (((param_2 & 1) != 0) && (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_027139c0 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: ",0x3544);
    FUN_00517ae0(
                "CPostEffect::SetGaussianBlurEnable(): Initialize() with PFXINIT_GAUSSIANBLUR flag for feedback.\n"
                );
  }
  *(undefined1 *)(param_1 + 0xc7a) = 0;
  return 1;
}


