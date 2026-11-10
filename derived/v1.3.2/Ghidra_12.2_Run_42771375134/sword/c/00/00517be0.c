/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00517be0; name: FUN_00517be0
 */


int FUN_00517be0(long *param_1,long param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                ,undefined8 param_6)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  int iVar9;
  float *pfVar10;
  uint uVar11;
  ulong uVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  puVar3 = PTR_DAT_02713970;
  iVar5 = *(int *)PTR_DAT_02713970;
  if (iVar5 != 0 && *(int *)PTR_DAT_02713990 != 0) {
    FUN_00517ae0("PPFX: ");
    FUN_00517ae0("==== IPfxBaseContext::Initialize() ====\n");
    iVar5 = *(int *)puVar3;
  }
  if (iVar5 != 0 && *(int *)PTR_DAT_02713978 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/ppfx.cpp(%d) : PPFX: ",0x357);
    FUN_00517ae0("==== IPfxBaseContext::Initialize() ====\n");
  }
  if (DAT_025fa230 < 0) {
    return DAT_025fa230;
  }
  if (DAT_0275c0e8 != (long *)0x0) {
    (**(code **)(*DAT_0275c0e8 + 8))();
    DAT_0275c0e8 = (long *)0x0;
  }
  if (DAT_0275c0f0 != (long *)0x0) {
    (**(code **)(*DAT_0275c0f0 + 8))();
    DAT_0275c0f0 = (long *)0x0;
  }
  if (DAT_0275c0e0 == 0) {
    lVar6 = FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x1240,
                         "C:/workspace/YEBIS_draft/src/ppfx.cpp",0x37b,0);
    FUN_005191a0();
    DAT_0275c0e0 = lVar6;
    plVar7 = (long *)FUN_005b98f0(param_1);
    *plVar7 = lVar6;
  }
  iVar5 = (**(code **)(*param_1 + 0x28))(param_1);
  if (iVar5 == 0) {
    uVar11 = 0;
    pfVar13 = (float *)0x0;
  }
  else {
    uVar11 = *(uint *)(DAT_0275c0e0 + 0x400);
    plVar7 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,(long)(int)uVar11 << 4 | 8,
                                  "C:/workspace/YEBIS_draft/src/ppfx.cpp",0x393,0);
    if (plVar7 == (long *)0x0) {
      pfVar13 = (float *)0x0;
      fVar15 = DAT_01d4bae8;
      fVar16 = DAT_01d4c1a8;
    }
    else {
      pfVar13 = (float *)(plVar7 + 1);
      *plVar7 = (long)(int)uVar11;
      fVar15 = DAT_01d4bae8;
      fVar16 = DAT_01d4c1a8;
    }
    DAT_01d4bae8 = fVar15;
    DAT_01d4c1a8 = fVar16;
    if (0 < (int)uVar11) {
      uVar12 = 0;
      pfVar10 = pfVar13;
      do {
        fVar14 = (float)FUN_00529e50(DAT_0275c0e0,uVar12 & 0xffffffff);
        *pfVar10 = fVar14;
        fVar14 = (float)FUN_00529f30(DAT_0275c0e0,uVar12 & 0xffffffff);
        pfVar10[1] = fVar14;
        if ((((fVar14 <= 0.0) || (fVar15 < fVar14)) || (*pfVar10 <= 0.0)) || (fVar16 < *pfVar10)) {
          pfVar10[0] = 1.0;
          pfVar10[1] = 0.18;
        }
        fVar14 = (float)FUN_00529f10(DAT_0275c0e0,uVar12 & 0xffffffff);
        pfVar10[2] = fVar14;
        fVar14 = (float)FUN_00529f80(DAT_0275c0e0,uVar12 & 0xffffffff);
        uVar12 = uVar12 + 1;
        pfVar10[3] = fVar14;
        pfVar10 = pfVar10 + 4;
      } while (uVar11 != uVar12);
    }
  }
  uVar8 = FUN_0053ba70(DAT_0275c0e0);
  bVar1 = *(long *)(param_2 + 0x70) == 0;
  if (!bVar1) {
    FUN_0053ba60(DAT_0275c0e0);
  }
  FUN_0053b630(DAT_0275c0e0,bVar1);
  iVar5 = FUN_0051b060(DAT_0275c0e0,param_2,param_3,param_4,param_5,param_6);
  if ((uVar11 == 0) || (iVar5 < 0)) {
LAB_00517f14:
    if (pfVar13 == (float *)0x0) goto LAB_00517f44;
  }
  else {
    uVar2 = *(uint *)(DAT_0275c0e0 + 0x400);
    if ((int)uVar11 <= (int)*(uint *)(DAT_0275c0e0 + 0x400)) {
      uVar2 = uVar11;
    }
    if ((int)uVar2 < 1) goto LAB_00517f14;
    uVar12 = 0;
    pfVar10 = pfVar13 + 1;
    while( true ) {
      FUN_00525e80(*pfVar10,pfVar10[-1],DAT_0275c0e0,uVar12 & 0xffffffff);
      FUN_00526120(pfVar10[1],DAT_0275c0e0,uVar12 & 0xffffffff);
      uVar12 = uVar12 + 1;
      if ((long)(int)uVar2 <= (long)uVar12) break;
      pfVar10 = pfVar10 + 4;
    }
  }
  pfVar10 = pfVar13 + *(long *)(pfVar13 + -2) * 4;
  do {
    pfVar10 = pfVar10 + -4;
  } while (pfVar13 <= pfVar10);
  FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
LAB_00517f44:
  FUN_0053b630(DAT_0275c0e0,0);
  FUN_0053ba60(DAT_0275c0e0,uVar8);
  if (iVar5 < 0) {
    if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/ppfx.cpp(%d) : PPFX ERROR: ",0x3e4);
      uVar8 = FUN_00546ea0(iVar5);
      FUN_00517ae0("IPfxBaseContext::Initialize(): s_pSinglePostEffect->Initialize() failed (0x%x: %s).\n"
                   ,iVar5,uVar8);
    }
  }
  else {
    lVar6 = FUN_0051b020(DAT_0275c0e0);
    if (-1 < *(int *)(lVar6 + 0x2c)) {
      plVar7 = (long *)FUN_005ba380();
      DAT_0275c0e8 = plVar7;
      uVar8 = FUN_0051b020(DAT_0275c0e0);
      FUN_005ba0d0(plVar7,param_1,uVar8);
    }
    lVar6 = *(long *)(DAT_0275c0e0 + 0x1d8);
    if (lVar6 != 0) {
      DAT_0275c0f0 = (long *)FUN_005ba380();
      FUN_005ba0d0(DAT_0275c0f0,param_1,lVar6);
    }
    puVar4 = PTR_DAT_02713990;
    puVar3 = PTR_DAT_02713970;
    iVar9 = *(int *)PTR_DAT_02713970;
    if ((iVar9 != 0) && (*(int *)PTR_DAT_02713990 != 0)) {
      iVar5 = *(int *)(*(long *)(DAT_0275c0e0 + 0x18) + 0x15000);
      fVar15 = (float)iVar5 * DAT_01d4bff4;
      fVar16 = fVar15 * DAT_01d4bff4;
      FUN_00517ae0("PPFX: ");
      FUN_00517ae0((double)fVar15,(double)fVar16,
                   "GPU total Resource used: %d bytes (%.2f KB / %.2f MB)\n",iVar5);
      iVar9 = *(int *)puVar3;
    }
    if ((iVar9 != 0) && (*(int *)PTR_DAT_02713978 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/ppfx.cpp(%d) : PPFX: ",0x468);
      FUN_00517ae0("==== IPfxBaseContext::Initialize() succeeded. ====\n");
      iVar9 = *(int *)puVar3;
    }
    iVar5 = 0;
    if ((iVar9 != 0) && (*(int *)puVar4 != 0)) {
      FUN_00517ae0("PPFX: ");
      FUN_00517ae0("==== IPfxBaseContext::Initialize() succeeded. ====\n");
      iVar5 = 0;
    }
  }
  return iVar5;
}


