/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00527890; name: FUN_00527890
 */


undefined8
FUN_00527890(float param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            long param_6,byte param_7,byte param_8)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_6 + 0x918) = 0;
  *(undefined1 *)(*(long *)(param_6 + 0x1a0) + 0x3a8) = 0;
  *(float *)(param_6 + 0x938) = param_1;
  *(float *)(param_6 + 0x950) = param_2;
  *(undefined4 *)(param_6 + 0x954) = param_3;
  *(undefined4 *)(param_6 + 0x920) = param_4;
  *(undefined4 *)(param_6 + 0x958) = param_5;
  *(byte *)(param_6 + 0x94d) = param_7 & 1;
  if ((0.0 < param_1) || (uVar1 = 0, 0.0 < param_2)) {
    if (*(char *)(param_6 + 0x1ba) == '\0') {
      if ((param_1 <= 0.0) && (param_2 <= 0.0)) {
        return 1;
      }
      uVar1 = 1;
      if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_027139c0 != 0)) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: ",
                     0x2f4d);
        FUN_00517ae0(
                    "CPostEffect::SetVignetteByOpticsImageCircle(): Initialize() with PFXINIT_OPTICALVIGNETTING flag for optical vignetting.\n"
                    );
        return 1;
      }
    }
    else {
      if (*(long *)(param_6 + 0x1a0) != 0) {
        *(byte *)(*(long *)(param_6 + 0x1a0) + 0x3a8) = param_8 & 1;
      }
      uVar1 = 0;
      *(undefined4 *)(param_6 + 0x918) = 3;
    }
  }
  return uVar1;
}


