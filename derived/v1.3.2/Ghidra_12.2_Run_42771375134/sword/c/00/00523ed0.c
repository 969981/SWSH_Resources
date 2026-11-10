/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00523ed0; name: FUN_00523ed0
 */


undefined8 FUN_00523ed0(long param_1,byte param_2)

{
  if (*(char *)(param_1 + 0x1c6) != '\0') {
    *(byte *)(param_1 + 0xbce) = param_2 & 1;
    return 0;
  }
  if (((param_2 & 1) != 0) && (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_027139c0 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: ",0x419e);
    FUN_00517ae0(
                "CPostEffect::SetFeedbackEnable(): Initialize() with PFXINIT_FEEDBACK flag for feedback.\n"
                );
  }
  *(undefined1 *)(param_1 + 0xbce) = 0;
  return 1;
}


