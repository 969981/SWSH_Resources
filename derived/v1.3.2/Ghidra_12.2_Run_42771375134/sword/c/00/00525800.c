/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00525800; name: FUN_00525800
 */


int FUN_00525800(long param_1)

{
  char cVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float local_58;
  undefined4 local_54;
  
  FUN_0052a1a0();
  FUN_005282d0(param_1);
  FUN_0052a890(param_1);
  fVar9 = *(float *)(param_1 + 0x91c);
  bVar3 = fVar9 < 0.0;
  uVar12 = *(undefined4 *)(param_1 + 0x920);
  if (bVar3) {
    fVar9 = 1.0;
  }
  if (((*(char *)(param_1 + 0x59c) != '\0') && (bVar3)) &&
     (fVar9 = 0.0, *(short *)(param_1 + 0x8c8) != 8)) {
    fVar9 = DAT_01d4c304;
  }
  FUN_005535a0(*(undefined4 *)(param_1 + 0x6d0),*(undefined4 *)(param_1 + 0x6d4),
               *(undefined4 *)(param_1 + 0x6d8),*(undefined8 *)(param_1 + 0x198));
  *(bool *)(*(long *)(param_1 + 0x198) + 0x180) = *(int *)(param_1 + 0x918) != 0;
  iVar4 = *(int *)(param_1 + 0x918);
  *(undefined1 *)(param_1 + 0x5a2) = 0;
  if (iVar4 - 2U < 2) {
    if (*(char *)(param_1 + 0x1050) == '\0') {
      if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_027139c0 != 0)) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: ",
                     0x587c);
        FUN_00517ae0(
                    "SetVignetteByOptics() requires proper SetDepthOfFieldParameters() and SetRenderScenePerspective() settings.\n"
                    );
      }
      *(undefined1 *)(*(long *)(param_1 + 0x198) + 0x180) = 0;
LAB_005259fc:
      lVar7 = *(long *)(param_1 + 0x120);
    }
    else {
      *(undefined1 *)(*(long *)(param_1 + 0x198) + 0x18c) = 1;
      if (*(int *)(param_1 + 0x918) == 2) {
        bVar3 = false;
        if ((*(float *)(param_1 + 0x93c) <= 0.0) || (*(float *)(param_1 + 0x948) == 0.0))
        goto LAB_00525b0c;
        bVar3 = *(float *)(param_1 + 0x944) != 0.0 || *(float *)(param_1 + 0x940) != 0.0;
        cVar1 = *(char *)(param_1 + 0x104f);
      }
      else {
        bVar3 = 0.0 < *(float *)(param_1 + 0x950);
LAB_00525b0c:
        cVar1 = *(char *)(param_1 + 0x104f);
      }
      if ((cVar1 != '\0') && (*(char *)(*(long *)(param_1 + 0x1a0) + 0x3a8) != '\0')) {
        FUN_005b5b90();
      }
      local_58 = -1.0;
      local_54 = 0;
      if (bVar3) {
        *(undefined1 *)(param_1 + 0x5a2) = 1;
        FUN_005afb90(*(undefined8 *)(param_1 + 0x1a0),&local_54,&local_58);
        if (*(char *)(param_1 + 0x5a2) == '\0') {
          if ((*(char *)(param_1 + 0x106e) != '\0') && (local_58 < 0.0)) {
            local_58 = local_58 - *(float *)(param_1 + 0x1070);
          }
          cVar1 = *(char *)(param_1 + 0x94d);
        }
        else {
          cVar1 = *(char *)(param_1 + 0x94d);
        }
        local_58 = ABS(local_58);
        if ((cVar1 == '\0') && (*(char *)(param_1 + 0x104f) == '\0')) {
          local_58 = 0.0;
        }
        if (*(char *)(param_1 + 0x5a2) != '\0') {
          local_58 = -1.0;
          local_54 = 0;
        }
      }
      FUN_005555a0(*(undefined4 *)(param_1 + 0x938),local_54,local_58,
                   *(undefined8 *)(param_1 + 0x198));
      lVar7 = *(long *)(param_1 + 0x120);
    }
    if (lVar7 == 0) goto LAB_00525be0;
LAB_00525a04:
    iVar4 = 0;
    *(long *)(param_1 + 0x1168) = lVar7;
  }
  else {
    if (iVar4 == 4) {
      *(undefined1 *)(*(long *)(param_1 + 0x198) + 0x18c) = 1;
      fVar10 = *(float *)(param_1 + 0x960);
      fVar9 = fVar10;
      if ((*(char *)(param_1 + 0x104f) != '\0') &&
         (*(char *)(*(long *)(param_1 + 0x1a0) + 0x3a8) != '\0')) {
        FUN_005b5b90();
        fVar9 = *(float *)(param_1 + 0x960);
      }
      if (0.0 <= fVar10) {
        fVar10 = DAT_01d4bc70 /
                 ((*(float *)(param_1 + 0x6d0) + DAT_01d4c30c) * *(float *)(param_1 + 0x920) +
                 DAT_01d4bc70);
        fVar11 = *(float *)(param_1 + 0x95c) * fVar10;
        fVar9 = fVar9 * fVar10;
        fVar10 = (fVar11 + fVar9) * 0.5;
        fVar9 = (fVar9 - fVar11) * 0.5;
      }
      else {
        fVar9 = -1.0;
        fVar10 = 0.0;
      }
      FUN_005555a0(*(undefined4 *)(param_1 + 0x938),fVar10,fVar9,*(undefined8 *)(param_1 + 0x198));
      lVar7 = *(long *)(param_1 + 0x120);
    }
    else {
      if (iVar4 != 1) goto LAB_005259fc;
      *(undefined1 *)(*(long *)(param_1 + 0x198) + 0x18c) = 0;
      FUN_00555570(fVar9,uVar12,*(undefined8 *)(param_1 + 0x198),param_1 + 0x928);
      if (*(char *)(*(long *)(param_1 + 0x198) + 0x180) == '\0') {
        fVar9 = 0.0;
      }
      else {
        fVar9 = *(float *)(*(long *)(param_1 + 0x198) + 0x188);
      }
      fVar13 = *(float *)(param_1 + 0x924);
      fVar11 = DAT_01d4bc70 / *(float *)(param_1 + 0x6d0);
      fVar10 = (float)FUN_0055d400();
      FUN_005555a0(0x3f800000,fVar13 * fVar10 * (fVar9 * (fVar11 + -1.0) + 1.0),0,
                   *(undefined8 *)(param_1 + 0x198));
      lVar7 = *(long *)(param_1 + 0x120);
    }
    if (lVar7 != 0) goto LAB_00525a04;
LAB_00525be0:
    plVar5 = *(long **)(param_1 + 0x128);
    if (plVar5 == (long *)0x0) {
      lVar7 = *(long *)(param_1 + 0x130);
      if (lVar7 == 0) {
        lVar7 = *(long *)(param_1 + 0x20);
      }
      else {
        lVar7 = **(long **)(lVar7 + (long)*(int *)(lVar7 + 0xa0) * 8 + 0xd0);
      }
      goto LAB_00525a04;
    }
    iVar4 = (**(code **)(*plVar5 + 0xb8))(plVar5,0,(undefined8 *)(param_1 + 0x1168));
    if (-1 < iVar4) {
      (**(code **)(**(long **)(param_1 + 0x1168) + 8))();
      iVar4 = 0;
    }
  }
  puVar2 = PTR_DAT_027139b0;
  iVar6 = *(int *)PTR_DAT_027139b0;
  if (iVar6 < 1) {
    plVar5 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                  "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar5,0);
    *(long **)PTR_DAT_027139b8 = plVar5;
    *(undefined4 *)puVar2 = 1;
  }
  else {
    plVar5 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar6 + 1;
    if (1 < iVar6 + 1) goto LAB_00525acc;
  }
  if (plVar5 == (long *)0x0) {
    iVar6 = 0;
  }
  else {
    uVar8 = *(undefined8 *)PTR_PTR_02713988;
    (**(code **)(*plVar5 + 0x20))(plVar5);
    FUN_005b9b10(uVar8,plVar5);
    iVar6 = 0;
    *(undefined8 *)PTR_DAT_027139b8 = 0;
  }
LAB_00525acc:
  *(int *)puVar2 = iVar6;
  FUN_00570930(plVar5,*(undefined1 *)(param_1 + 10));
  return iVar4;
}


