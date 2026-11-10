/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00518180; name: FUN_00518180
 */


int FUN_00518180(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar3 = PTR_DAT_02713990;
  puVar1 = PTR_DAT_02713970;
  iVar5 = *(int *)PTR_DAT_02713970;
  if (iVar5 != 0 && *(int *)PTR_DAT_02713990 != 0) {
    FUN_00517ae0("PPFX: ");
    FUN_00517ae0("==== IPfxBaseContext::Uninitialize() ====\n");
    iVar5 = *(int *)puVar1;
  }
  puVar2 = PTR_DAT_02713978;
  if (iVar5 != 0 && *(int *)PTR_DAT_02713978 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/ppfx.cpp(%d) : PPFX: ",0x4a1);
    FUN_00517ae0("==== IPfxBaseContext::Uninitialize() ====\n");
  }
  if (DAT_0275c0e0 != 0) {
    if (DAT_0275c0e8 != (long *)0x0) {
      (**(code **)(*DAT_0275c0e8 + 8))();
      DAT_0275c0e8 = (long *)0x0;
    }
    if (DAT_0275c0f0 != (long *)0x0) {
      (**(code **)(*DAT_0275c0f0 + 8))();
      DAT_0275c0f0 = (long *)0x0;
    }
    iVar5 = FUN_00519740(DAT_0275c0e0,0);
    if (iVar5 < 0) {
      if (*(int *)puVar1 == 0) {
        return iVar5;
      }
      if (*(int *)PTR_DAT_02713980 == 0) {
        return iVar5;
      }
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/ppfx.cpp(%d) : PPFX ERROR: ",0x4cc);
      uVar7 = FUN_00546ea0(iVar5);
      FUN_00517ae0("IPfxBaseContext::Uninitialize(): s_pSinglePostEffect->Uninitialize() failed (0x%x: %s).\n"
                   ,iVar5,uVar7);
      return iVar5;
    }
    if ((*(int *)puVar1 != 0) && (*(int *)puVar2 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/ppfx.cpp(%d) : PPFX: ",0x4d0);
      FUN_00517ae0(
                  "IPfxBaseContext::Uninitialize(): s_pSinglePostEffect->Uninitialize() succeeded.\n"
                  );
    }
    lVar4 = DAT_0275c0e0;
    if (DAT_0275c0e0 != 0) {
      uVar7 = *(undefined8 *)PTR_PTR_02713988;
      FUN_00519600(DAT_0275c0e0);
      FUN_005b9b10(uVar7,lVar4);
      DAT_0275c0e0 = 0;
    }
    puVar6 = (undefined8 *)FUN_005b98f0(param_1);
    *puVar6 = 0;
  }
  iVar5 = *(int *)puVar1;
  if ((iVar5 != 0) && (*(int *)puVar2 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/ppfx.cpp(%d) : PPFX: ",0x4de);
    FUN_00517ae0("==== IPfxBaseContext::Uninitialize() succeeded. ====\n");
    iVar5 = *(int *)puVar1;
  }
  if ((iVar5 != 0) && (*(int *)puVar3 != 0)) {
    FUN_00517ae0("PPFX: ");
    FUN_00517ae0("==== IPfxBaseContext::Uninitialize() succeeded. ====\n");
  }
  return 0;
}


