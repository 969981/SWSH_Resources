/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00deb3b0; name: FUN_00deb3b0
 */


void FUN_00deb3b0(long param_1)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_38;
  float local_28;
  float local_24;
  
  fVar11 = DAT_01d4c554;
  iVar4 = *(int *)(param_1 + 0x184);
  if (iVar4 == 2) {
    uVar5 = FUN_00e45920(*(undefined8 *)(param_1 + 0x88));
    if ((uVar5 & 1) == 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x180) = 1;
LAB_00deb69c:
    *(int *)(param_1 + 0x184) = *(int *)(param_1 + 0x184) + 1;
  }
  else {
    if (iVar4 == 1) {
LAB_00deb5b0:
      iVar4 = *(int *)(param_1 + 0x188);
      if (iVar4 == 0) {
        plVar6 = *(long **)(*(long *)(param_1 + 0x88) + 0x418);
        if (((plVar6 != *(long **)(*(long *)(param_1 + 0x88) + 0x420)) &&
            (lVar7 = *plVar6, lVar7 != 0)) &&
           (puVar9 = *(undefined8 **)(lVar7 + 0x60), puVar9 != (undefined8 *)0x0)) {
          plVar6 = (long *)(**(code **)*puVar9)(puVar9);
          lVar7 = FUN_00c781c0();
          for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
            if (plVar6 == (long *)lVar7) {
              puVar9 = puVar9 + -10;
              goto LAB_00deb60c;
            }
          }
        }
        puVar9 = (undefined8 *)0x0;
LAB_00deb60c:
        local_38 = FUN_0069d2b0(puVar9);
        plVar6 = (long *)FUN_006b92e0(&local_38);
        if ((*plVar6 != -0x2cc46790a4a527f2) &&
           (plVar6 = (long *)FUN_006b92e0(&local_38), *plVar6 != 0x3d77e7121375e561)) {
          return;
        }
        (**(code **)(**(long **)(param_1 + 0x88) + 0x1a8))
                  (*(long **)(param_1 + 0x88),PTR_DAT_0271ecd8,0);
        (**(code **)(**(long **)(param_1 + 0x88) + 0x180))
                  (*(undefined4 *)PTR_DAT_0271ecd0,*(long **)(param_1 + 0x88),PTR_DAT_0271e870);
        goto LAB_00deb69c;
      }
    }
    else {
      if (iVar4 != 0) {
        return;
      }
      fVar12 = ((*(float *)(param_1 + 0x1a4) - *(float *)(param_1 + 0xa4)) + DAT_01d4bb38) /
               DAT_01d4bdf4;
      fVar10 = -1.0;
      fVar13 = 1.0;
      if (fVar12 < 0.0) {
        fVar13 = -1.0;
      }
      fVar12 = fVar12 - fVar13 * (float)(int)fVar12;
      fVar13 = fVar12 + 1.0;
      if (0.0 <= fVar12) {
        fVar13 = fVar12;
      }
      fVar13 = fVar13 * DAT_01d4bdf4 + DAT_01d4be68;
      uVar1 = *(int *)(param_1 + 0x18c) + 1;
      *(uint *)(param_1 + 0x18c) = uVar1;
      if (ABS(fVar13) <= fVar11) {
LAB_00deb4fc:
        uVar8 = 0xffffffff;
LAB_00deb500:
        *(undefined4 *)(param_1 + 0x1a0) = 0;
        *(undefined8 *)(param_1 + 400) = 0;
        *(undefined8 *)(param_1 + 0x198) = 0;
        fVar13 = -22.0;
        fVar11 = 1.0;
        *(undefined4 *)(param_1 + 0x1a8) = uVar8;
      }
      else {
        if (0.0 <= fVar13) {
          if (fVar13 <= 0.0) goto LAB_00deb4fc;
          uVar8 = 1;
          if (*(int *)(param_1 + 0x1a8) == 1) goto LAB_00deb478;
          goto LAB_00deb500;
        }
        uVar8 = 0;
        if (*(int *)(param_1 + 0x1a8) != 0) goto LAB_00deb500;
LAB_00deb478:
        if (30.0 < *(float *)(param_1 + 400)) goto LAB_00deb500;
        fVar12 = *(float *)(param_1 + 0x194) + 1.0;
        fVar13 = ABS(fVar13) + *(float *)(param_1 + 0x19c);
        fVar11 = *(float *)(param_1 + 400) + 1.0;
        *(float *)(param_1 + 0x194) = fVar12;
        *(float *)(param_1 + 0x19c) = fVar13;
        *(undefined4 *)(param_1 + 0x1a8) = uVar8;
        if (fVar12 <= 0.0) {
          fVar13 = -22.0;
        }
        else {
          fVar13 = (fVar13 / fVar12) * 30.0 + -22.0;
        }
      }
      fVar13 = fVar13 / 18.0;
      local_28 = 1.0;
      pfVar2 = &local_28;
      if (fVar13 <= 1.0) {
        pfVar2 = (float *)&local_38;
      }
      local_38 = CONCAT44(local_38._4_4_,fVar13);
      local_24 = 0.0;
      pfVar3 = &local_24;
      if (0.0 <= fVar13) {
        pfVar3 = pfVar2;
      }
      fVar13 = *pfVar3;
      *(float *)(param_1 + 0x1a0) = fVar13;
      if (fVar13 == 0.0) {
        if (0.0 < *(float *)(param_1 + 0x198)) goto LAB_00deb6cc;
        *(float *)(param_1 + 400) = fVar11;
      }
      else {
        fVar11 = 0.0;
        fVar10 = 1.0;
LAB_00deb6cc:
        *(float *)(param_1 + 0x198) = *(float *)(param_1 + 0x198) + fVar10;
        *(float *)(param_1 + 400) = fVar11;
      }
      if ((uVar1 & 1) == 0) {
        *(float *)(param_1 + 0x1a4) = *(float *)(param_1 + 0xa4);
      }
      iVar4 = (**(code **)(**(long **)(param_1 + 0x88) + 0x188))
                        (*(long **)(param_1 + 0x88),PTR_DAT_0271ece8,0);
      if ((*(int *)(param_1 + 0x1a8) != -1) && (iVar4 != *(int *)(param_1 + 0x1a8))) {
LAB_00deb5a4:
        *(int *)(param_1 + 0x184) = *(int *)(param_1 + 0x184) + 1;
        goto LAB_00deb5b0;
      }
      if (*(float *)(param_1 + 0x198) <= 0.0) {
        iVar4 = *(int *)(param_1 + 0x188);
        if (iVar4 == 0) goto LAB_00deb5a4;
      }
      else {
        iVar4 = 0x1e;
        *(undefined4 *)(param_1 + 0x188) = 0x1e;
      }
    }
    *(int *)(param_1 + 0x188) = iVar4 + -1;
  }
  return;
}


