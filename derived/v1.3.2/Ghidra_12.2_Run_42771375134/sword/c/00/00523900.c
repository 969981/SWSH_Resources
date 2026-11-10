/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00523900; name: FUN_00523900
 */


undefined8 FUN_00523900(long param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 < 0) {
    param_2 = 1;
    if ((*(uint *)(param_1 + 0x544) & 1) == 0) {
      param_2 = 1;
      if ((*(uint *)(param_1 + 0x544) & 2) != 0) {
        param_2 = 2;
      }
      if (1 < param_2 - 1U) goto LAB_00523920;
    }
LAB_00523980:
    if ((*(char *)(param_1 + 0x1ca) != '\0') || (*(int *)(param_1 + 0xf44) != 2)) {
      *(int *)(param_1 + 0xf44) = param_2;
      return 0;
    }
    if ((*(int *)PTR_DAT_02713970 == 0) || (*(int *)PTR_DAT_027139c0 == 0)) goto LAB_005239d0;
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: ",0x3626);
    pcVar1 = 
    "CPostEffect::SetAntialiasType(): Initialize with PFX_INITPARAM::m_uiAntialiasFlags |= PFXAA_SMAA.\n"
    ;
  }
  else {
    if (param_2 - 1U < 2) goto LAB_00523980;
LAB_00523920:
    if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_027139c0 == 0) goto LAB_005239d0;
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: ",0x361c);
    pcVar1 = "CPostEffect::SetAntialiasType(): invalid argument.\n";
  }
  FUN_00517ae0(pcVar1);
LAB_005239d0:
  *(undefined4 *)(param_1 + 0xf44) = 1;
  return 1;
}


