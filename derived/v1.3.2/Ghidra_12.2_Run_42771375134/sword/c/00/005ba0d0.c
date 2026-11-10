/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ba0d0; name: FUN_005ba0d0
 */


undefined8 FUN_005ba0d0(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  
  puVar3 = PTR_DAT_02713978;
  puVar2 = PTR_DAT_02713970;
  if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_02713978 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/ppfxRenderToTexture.cpp(%d) : PPFX: ",0xfb);
    FUN_00517ae0("==== IPfxBaseRenderToTexture::Initialize() ====\n");
  }
  if (param_2 == 0) {
    uVar6 = 0xfffffffa;
  }
  else {
    plVar4 = (long *)FUN_005b98f0(param_1);
    plVar5 = (long *)*plVar4;
    if (plVar5 != (long *)0x0) {
      iVar1 = (int)plVar5[1] + -1;
      *(int *)(plVar5 + 1) = iVar1;
      if (iVar1 == 0) {
        uVar6 = *(undefined8 *)PTR_PTR_02713988;
        (**(code **)(*plVar5 + 0x20))(plVar5);
        FUN_005b9b10(uVar6,plVar5);
      }
      *plVar4 = 0;
    }
    *(long *)(param_1 + 0x18) = param_2;
    *plVar4 = param_3;
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
    uVar6 = 0;
    if ((*(int *)puVar2 != 0) && (*(int *)puVar3 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/ppfxRenderToTexture.cpp(%d) : PPFX: ",0x10d);
      FUN_00517ae0("==== IPfxBaseRenderToTexture::Initialize() succeeded. ====\n");
      uVar6 = 0;
    }
  }
  return uVar6;
}


