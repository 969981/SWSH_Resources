/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00523db0; name: FUN_00523db0
 */


undefined8 FUN_00523db0(long param_1,byte param_2)

{
  *(undefined1 *)(param_1 + 0x895) = 1;
  if (*(char *)(param_1 + 0x1bc) != '\0') {
    *(byte *)(param_1 + 0xce5) = param_2 & 1;
    return 0;
  }
  if (((param_2 & 1) != 0) && (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_027139c0 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: ",13999);
    FUN_00517ae0(
                "CPostEffect::SetMotionBlurEnable(): Initialize() with PFXINIT_MOTIONBLUR flag for motion blur.\n"
                );
  }
  *(undefined1 *)(param_1 + 0xce5) = 0;
  return 1;
}


