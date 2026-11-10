/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0052f120; name: FUN_0052f120
 */


int FUN_0052f120(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  
  puVar1 = PTR_DAT_027139b0;
  if (*(char *)(param_1 + 0x104f) == '\0') {
    return 0;
  }
  iVar2 = *(int *)PTR_DAT_027139b0;
  if (iVar2 < 1) {
    plVar7 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                  "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar7,0);
    *(long **)PTR_DAT_027139b8 = plVar7;
    *(undefined4 *)puVar1 = 1;
    if (plVar7 != (long *)0x0) goto LAB_0052f178;
LAB_0052f208:
    iVar2 = 0;
  }
  else {
    plVar7 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar2 + 1;
    if (iVar2 + 1 < 2) {
      if (plVar7 == (long *)0x0) goto LAB_0052f208;
LAB_0052f178:
      uVar8 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar7 + 0x20))(plVar7);
      FUN_005b9b10(uVar8,plVar7);
      iVar2 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
  }
  *(int *)puVar1 = iVar2;
  *(undefined4 *)(*(long *)(param_1 + 400) + 0x90) = *(undefined4 *)(param_1 + 0x60c);
  FUN_0052e610(param_1);
  fVar9 = *(float *)(param_1 + 0x8b0);
  uVar10 = *(undefined4 *)(param_1 + 0x8cc);
  fVar11 = *(float *)(param_1 + 0x8d0);
  iVar2 = *(int *)(param_1 + 0x69c);
  if (fVar9 != 1.0) {
    if (iVar2 == 0) {
      iVar2 = 0xb;
      fVar11 = 1.0 / fVar9;
      uVar10 = 0x3f800000;
    }
    else {
      fVar11 = fVar11 / fVar9;
    }
  }
  FUN_005aef80(*(undefined8 *)(param_1 + 0x1a0),iVar2,0xffffffff,0xffffffff);
  FUN_005706c0(uVar10,fVar11,plVar7);
  if (*(char *)(param_1 + 0x59a) == '\0') {
    fVar9 = *(float *)(param_1 + 0x7f8);
  }
  else {
    fVar9 = *(float *)(param_1 + 0x8c0) * *(float *)(param_1 + 0x7fc);
  }
  *(float *)(*(long *)(param_1 + 0x1a0) + 0x3ac) = *(float *)(param_1 + 0x8c0) / fVar9;
  iVar2 = *(int *)(param_1 + 0x604);
  lVar5 = *(long *)(param_1 + 400);
  if (iVar2 == -1) {
    iVar2 = *(int *)(lVar5 + 0x90);
    iVar6 = *(int *)(lVar5 + 0x30);
    if (iVar2 < iVar6) goto LAB_0052f2c0;
LAB_0052f314:
    uVar8 = 0;
    iVar2 = *(int *)(param_1 + 0x608);
    if (iVar2 != -1) goto LAB_0052f2d4;
LAB_0052f324:
    iVar2 = *(int *)(lVar5 + 0x90);
    if (iVar2 < iVar6) goto LAB_0052f2dc;
LAB_0052f330:
    uVar3 = 0;
    iVar2 = *(int *)(param_1 + 0x60c);
    if (iVar2 != -1) goto LAB_0052f2f0;
LAB_0052f340:
    iVar2 = *(int *)(lVar5 + 0x90);
    if (iVar2 < iVar6) goto LAB_0052f2f8;
  }
  else {
    iVar6 = *(int *)(lVar5 + 0x30);
    if (iVar6 <= iVar2) goto LAB_0052f314;
LAB_0052f2c0:
    uVar8 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + (long)iVar2 * 8);
    iVar2 = *(int *)(param_1 + 0x608);
    if (iVar2 == -1) goto LAB_0052f324;
LAB_0052f2d4:
    if (iVar6 <= iVar2) goto LAB_0052f330;
LAB_0052f2dc:
    uVar3 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + (long)iVar2 * 8);
    iVar2 = *(int *)(param_1 + 0x60c);
    if (iVar2 == -1) goto LAB_0052f340;
LAB_0052f2f0:
    if (iVar2 < iVar6) {
LAB_0052f2f8:
      uVar4 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + (long)iVar2 * 8);
      goto LAB_0052f350;
    }
  }
  uVar4 = 0;
LAB_0052f350:
  iVar2 = FUN_005b7070(*(undefined8 *)(param_1 + 0x1a0),uVar8,uVar3,uVar4,1);
  if (((iVar2 < 0) && (*(int *)PTR_DAT_02713970 != 0)) && (*(int *)PTR_DAT_02713980 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x64ba);
    uVar8 = FUN_00546ea0(iVar2);
    FUN_00517ae0("CPostEffect::ApplyEffects_DepthOfField(): m_pDepthOfField->ApplyDepthOfField() failed (0x%x: %s).\n"
                 ,iVar2,uVar8);
  }
  *(undefined1 *)(param_1 + 0x67a) = 1;
  return iVar2;
}


