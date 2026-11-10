/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00523860; name: FUN_00523860
 */


undefined8 FUN_00523860(long param_1,byte param_2,uint param_3)

{
  undefined8 uVar1;
  byte bVar2;
  
  if (*(char *)(param_1 + 0x1c8) == '\0') {
    uVar1 = 1;
    bVar2 = 0;
    if (((param_2 & 1) != 0) && ((param_3 & 1) == 0)) {
      bVar2 = 0;
      uVar1 = 1;
      if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_027139c0 != 0)) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: ",
                     0x35da);
        FUN_00517ae0(
                    "CPostEffect::SetAntialiasEnable(): Initialize() with PFXINIT_ANTIALIAS flag for post-process antialias.\n"
                    );
        *(undefined1 *)(param_1 + 0xf38) = 0;
        return 1;
      }
    }
  }
  else {
    uVar1 = 0;
    bVar2 = param_2 & 1;
  }
  *(byte *)(param_1 + 0xf38) = bVar2;
  return uVar1;
}


