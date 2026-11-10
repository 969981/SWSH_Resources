/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00517920; name: FUN_00517920
 */


void FUN_00517920(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  *param_1 = (long)(PTR_DAT_02713968 + 0x10);
  puVar4 = PTR_DAT_02713978;
  puVar3 = PTR_DAT_02713970;
  if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_02713978 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/ppfx.cpp(%d) : PPFX: ",0x2c8);
    FUN_00517ae0("==== IPfxBaseContext::~IPfxBaseContext() ====\n");
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
    iVar1 = *(int *)puVar3;
    lVar2 = DAT_0275c0e0;
    if (iVar5 < 0) {
      if ((iVar1 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/ppfx.cpp(%d) : PPFX ERROR: ",0x2da);
        uVar7 = FUN_00546ea0(iVar5);
        FUN_00517ae0("IPfxBaseContext::~IPfxBaseContext(): s_pSinglePostEffect->Uninitialize() failed (0x%x: %s).\n"
                     ,iVar5,uVar7);
        lVar2 = DAT_0275c0e0;
      }
    }
    else if ((iVar1 != 0) && (*(int *)puVar4 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/ppfx.cpp(%d) : PPFX: ",0x2de);
      FUN_00517ae0(
                  "IPfxBaseContext::~IPfxBaseContext(): s_pSinglePostEffect->Uninitialize() succeeded.\n"
                  );
      lVar2 = DAT_0275c0e0;
    }
    DAT_0275c0e0 = lVar2;
    if (lVar2 != 0) {
      uVar7 = *(undefined8 *)PTR_PTR_02713988;
      FUN_00519600(lVar2);
      FUN_005b9b10(uVar7,lVar2);
      DAT_0275c0e0 = 0;
    }
    puVar6 = (undefined8 *)FUN_005b98f0(param_1);
    *puVar6 = 0;
    if (iVar5 < 0) goto LAB_00517ac4;
  }
  if ((*(int *)puVar3 != 0) && (*(int *)puVar4 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/ppfx.cpp(%d) : PPFX: ",0x2e8);
    FUN_00517ae0("==== IPfxBaseContext::~IPfxBaseContext() succeeded. ====\n");
  }
LAB_00517ac4:
  FUN_005b98a0(param_1);
  return;
}


