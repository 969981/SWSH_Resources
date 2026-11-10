/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005235a0; name: FUN_005235a0
 */


undefined8 FUN_005235a0(char *param_1,int param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02713970;
  if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_027139f8 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: ",0x2b15);
    FUN_00517ae0("Frame: %d, View: %d, SetActiveView(iEffectViewIndex: %d);\n",
                 *(undefined4 *)(*(long *)(param_1 + 0x290) + (long)*(int *)(param_1 + 0x298) * 4),
                 (long)*(int *)(param_1 + 0x298),param_2);
  }
  if (*param_1 != '\0') {
    if (*(int *)puVar1 == 0 || *(int *)PTR_DAT_02713980 == 0) {
      return 0xffffffff;
    }
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x2b1d);
    FUN_00517ae0(
                "CPostEffect::SetActiveView(): Cannot be called between BeginPostEffectScene() and EndPostEffectScene().\n"
                );
    return 0xffffffff;
  }
  if (param_2 < 0) {
    return 0xfffffffa;
  }
  if (*(int *)(param_1 + 0x400) < param_2) {
    return 0xfffffffa;
  }
  *(int *)(param_1 + 0x298) = param_2;
  if (*(long *)(param_1 + 0x198) == 0) {
    return 0;
  }
  *(int *)(*(long *)(param_1 + 0x198) + 0x2ec) = param_2;
  return 0;
}


