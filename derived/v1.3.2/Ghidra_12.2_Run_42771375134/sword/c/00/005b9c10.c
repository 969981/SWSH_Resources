/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b9c10; name: FUN_005b9c10
 */


void FUN_005b9c10(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  undefined8 uVar8;
  
  *param_1 = (long)(PTR_DAT_02713dd8 + 0x10);
  puVar3 = PTR_DAT_02713978;
  puVar2 = PTR_DAT_02713970;
  if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_02713978 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/ppfxRenderToTexture.cpp(%d) : PPFX: ",0x3a);
    FUN_00517ae0("==== IPfxBaseRenderToTexture::~IPfxBaseRenderToTexture() ====\n");
  }
  if (param_1[3] == 0) {
    pcVar7 = (char *)0x0;
    plVar5 = (long *)FUN_005b98f0(param_1);
    plVar6 = (long *)*plVar5;
  }
  else {
    puVar4 = (undefined8 *)FUN_005b98f0();
    pcVar7 = (char *)*puVar4;
    plVar5 = (long *)FUN_005b98f0(param_1);
    plVar6 = (long *)*plVar5;
  }
  if (plVar6 != (long *)0x0) {
    if (((*pcVar7 != '\0') && (*(int *)puVar2 != 0)) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/ppfxRenderToTexture.cpp(%d) : PPFX ERROR: ",0x45);
      FUN_00517ae0(
                  "IPfxBaseRenderToTexture::~IPfxBaseRenderToTexture(): IPfxBaseRenderToTexture::Uninitialize() implicitly called while BeginPostEffectScene() and EndPostEffectScene().\n"
                  );
      plVar6 = (long *)*plVar5;
      if (plVar6 == (long *)0x0) goto LAB_005b9d1c;
    }
    iVar1 = (int)plVar6[1] + -1;
    *(int *)(plVar6 + 1) = iVar1;
    if (iVar1 == 0) {
      uVar8 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar6 + 0x20))(plVar6);
      FUN_005b9b10(uVar8,plVar6);
    }
    *plVar5 = 0;
  }
LAB_005b9d1c:
  if ((*(int *)puVar2 != 0) && (*(int *)puVar3 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/ppfxRenderToTexture.cpp(%d) : PPFX: ",0x69);
    FUN_00517ae0("==== IPfxBaseRenderToTexture::~IPfxBaseRenderToTexture() succeeded. ====\n");
  }
  FUN_005b98a0(param_1);
  return;
}


