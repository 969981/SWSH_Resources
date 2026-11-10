/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005252f0; name: FUN_005252f0
 */


undefined8 FUN_005252f0(char *param_1,int param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  if (*param_1 == '\0') {
    *(int *)(param_1 + 0x6b0) = param_2;
    if (param_1[0x1d3] != '\0') {
      param_1[0x6b4] = '\0';
      param_1[0x6b5] = '\0';
      param_1[0x6b6] = '\0';
      param_1[0x6b7] = '\0';
      return 1;
    }
    lVar4 = *(long *)(param_1 + 400);
    if (*(int *)(*(long *)(lVar4 + 0x50) + 0x54) == 0) {
      bVar1 = *(int *)(*(long *)(lVar4 + 0x50) + 0x58) == 0;
    }
    else {
      bVar1 = false;
    }
    if (*(long *)(lVar4 + 0x58) == 0) {
      if (param_2 == 3) {
        iVar5 = 0;
        goto LAB_00525474;
      }
      if (param_2 == 1) {
        if (*(int *)PTR_DAT_02713970 == 0) {
          return 0xfffffffa;
        }
        if (*(int *)PTR_DAT_02713980 == 0) {
          return 0xfffffffa;
        }
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x3050)
        ;
        pcVar2 = 
        "CPostEffect::SetMultisampleMode(): Cannot set multisample mode to PFXMSM_SINGLESAMPLE.\n";
        goto LAB_00525448;
      }
    }
    if ((bool)(param_2 != 2 | bVar1 ^ 1U)) {
      iVar5 = 0;
      if (param_2 != 2) {
        iVar5 = param_2;
      }
      if (param_2 == 3) {
        iVar5 = 1;
      }
LAB_00525474:
      *(int *)(param_1 + 0x6b4) = iVar5;
      *(int *)(lVar4 + 0x94) = iVar5;
      return 0;
    }
    uVar3 = 0xfffffffa;
    if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x305c);
      pcVar2 = 
      "CPostEffect::SetMultisampleMode(): Cannot set multisample mode to PFXMSM_MULTISAMPLE.\n";
LAB_00525448:
      FUN_00517ae0(pcVar2);
      return 0xfffffffa;
    }
  }
  else {
    if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713980 == 0) {
      return 0xffffffff;
    }
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x301c);
    FUN_00517ae0(
                "CPostEffect::SetMultisampleMode(): Cannot be called between BeginPostEffectScene() and EndPostEffectScene().\n"
                );
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


