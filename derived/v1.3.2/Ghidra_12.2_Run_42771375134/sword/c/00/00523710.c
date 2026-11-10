/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00523710; name: FUN_00523710
 */


undefined8 FUN_00523710(long param_1,byte param_2)

{
  if (*(char *)(param_1 + 0x1b9) != '\0') {
    *(byte *)(param_1 + 0xbe4) = param_2 & 1;
    return 0;
  }
  if (((param_2 & 1) != 0) && (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_027139c0 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: ",0x33e3);
    FUN_00517ae0(
                "CPostEffect::SetLensDistortionEnable(): Initialize() with PFXINIT_LENSDISTORTION flag for lens distortion.\n"
                );
  }
  *(undefined1 *)(param_1 + 0xbe4) = 0;
  return 1;
}


