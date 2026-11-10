/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005af0d0; name: FUN_005af0d0
 */


/* WARNING: Removing unreachable block (ram,0x005af69c) */

undefined8
FUN_005af0d0(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8,long param_9,uint param_10,float *param_11,float *param_12,
            float *param_13,float *param_14,float *param_15,float *param_16,float param_17)

{
  int iVar1;
  char cVar2;
  float __x;
  bool bVar3;
  undefined8 uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_a8;
  float local_a4;
  
  fVar6 = (float)FUN_005af740(*(undefined4 *)(param_9 + 0x198),*(undefined4 *)(param_9 + 0x1b0),
                              *(undefined4 *)(param_9 + 0x1b8));
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  local_a8 = 0.0;
  *(float *)(param_9 + 0x3e4) = fVar6;
  local_a4 = fVar6;
  fVar7 = tanf(param_1 * 0.5);
  fVar8 = (fVar7 + fVar7) * 0.5;
  __x = (param_2 * param_3 * 0.5) / (param_3 * 0.5 + fVar8 * param_2);
  if (param_2 <= 0.0) {
    __x = param_3 / (fVar8 + fVar8);
  }
  if (0.0 < param_6) {
    fVar8 = tanf(param_6 * 0.5);
    local_a8 = param_3 / (fVar8 + fVar8);
  }
  if ((param_10 | 2) != 3) {
LAB_005af248:
    *(undefined4 *)(param_9 + 0x1c0) = 0;
    if (param_10 < 4) goto LAB_005af258;
LAB_005af63c:
    param_4 = 0.0;
    fVar8 = 0.0;
    fVar7 = 0.0;
    *(undefined4 *)(param_9 + 0x1c0) = 0;
    cVar2 = *(char *)(param_9 + 0x3b4);
    fVar11 = fVar7;
    goto joined_r0x005af490;
  }
  if (param_7 <= 0.0) {
    *(undefined4 *)(param_9 + 0x1c0) = 0;
  }
  else {
    if (param_8 == 0.0) goto LAB_005af248;
    if (param_8 < 0.0) {
      param_8 = -param_8;
    }
    param_4 = param_7 - param_2;
    fVar8 = -1.0;
    if (0.0 <= param_4) {
      fVar8 = 0.0;
    }
    fVar11 = 1.0;
    if (param_4 <= 0.0) {
      fVar11 = fVar8;
    }
    param_4 = ((param_7 - __x) * param_8 * fVar11 * (fVar7 + fVar7) * (param_2 - __x)) / param_4;
    *(undefined4 *)(param_9 + 0x1c0) = 0;
  }
  if (3 < param_10) goto LAB_005af63c;
LAB_005af258:
  pfVar5 = (float *)(param_9 + 0x1c0);
  fVar7 = param_4;
  switch((long)&switchD_005af270::switchdataD_020f1c44 +
         (long)(int)(&switchD_005af270::switchdataD_020f1c44)[param_10]) {
  case 0x5af274:
    fVar8 = *(float *)(param_9 + 0x3b0);
    if (0.0 < fVar8) {
      fVar7 = logf(param_4);
      fVar7 = exp2f(fVar8 * (float)(int)((fVar7 / DAT_01d4c4dc + fVar7 / DAT_01d4c4dc) / fVar8 +
                                        DAT_01d4c64c) * 0.5);
    }
    *pfVar5 = fVar7;
    fVar8 = powf(__x,1.0 - param_5);
    fVar7 = powf(local_a8,param_5);
    fVar7 = (param_4 / local_a8) * fVar8 * fVar7;
    break;
  case 0x5af398:
    fVar7 = powf(__x,param_5);
    fVar8 = powf(local_a8,1.0 - param_5);
    param_4 = (param_4 / local_a8) * fVar7 * fVar8;
switchD_005af270_caseD_5af3d0:
    if (0.0 < param_4) {
      fVar7 = __x / param_4;
      fVar8 = *(float *)(param_9 + 0x3b0);
      if (0.0 < fVar8) {
        if (0.0 < fVar8) {
          fVar7 = logf(fVar7);
          fVar7 = exp2f(fVar8 * (float)(int)((fVar7 / DAT_01d4c4dc + fVar7 / DAT_01d4c4dc) / fVar8 +
                                            DAT_01d4c64c) * 0.5);
        }
        param_4 = __x / fVar7;
      }
      if ((*(char *)(param_9 + 0x3b4) != '\0') && (fVar7 < fVar6)) {
        param_4 = __x / fVar6;
        fVar11 = *pfVar5;
        fVar8 = fVar6;
        goto joined_r0x005af468;
      }
      goto LAB_005af480;
    }
    fVar11 = *pfVar5;
    fVar8 = 0.0;
    goto joined_r0x005af468;
  case 0x5af3d0:
    goto switchD_005af270_caseD_5af3d0;
  }
  if (fVar7 <= 0.0) {
    param_4 = 0.0;
LAB_005af480:
    fVar11 = *pfVar5;
    fVar8 = fVar7;
joined_r0x005af468:
    fVar7 = fVar8;
    if (fVar11 <= 0.0) goto LAB_005af5c4;
LAB_005af48c:
    cVar2 = *(char *)(param_9 + 0x3b4);
  }
  else {
    fVar8 = *(float *)(param_9 + 0x3b0);
    if (0.0 < fVar8) {
      fVar7 = logf(fVar7);
      fVar7 = exp2f(fVar8 * (float)(int)((fVar7 / DAT_01d4c4dc + fVar7 / DAT_01d4c4dc) / fVar8 +
                                        DAT_01d4c64c) * 0.5);
    }
    fVar11 = fVar7;
    if (fVar7 <= fVar6) {
      fVar11 = fVar6;
    }
    bVar3 = *(char *)(param_9 + 0x3b4) != '\0';
    fVar8 = fVar7;
    if (bVar3) {
      fVar8 = fVar11;
    }
    param_4 = __x / fVar8;
    if (bVar3) {
      fVar7 = fVar11;
    }
    fVar11 = *pfVar5;
    if (0.0 < fVar11) goto LAB_005af48c;
LAB_005af5c4:
    *pfVar5 = fVar7;
    cVar2 = *(char *)(param_9 + 0x3b4);
    fVar11 = fVar7;
  }
joined_r0x005af490:
  if (cVar2 != '\0') {
    pfVar5 = (float *)(param_9 + 0x1c0);
    if (fVar11 <= fVar6) {
      pfVar5 = &local_a4;
    }
    *(float *)(param_9 + 0x1c0) = *pfVar5;
  }
  if ((param_3 <= 0.0) ||
     (0.0 < param_2 == (0.0 < param_3 && (0.0 < param_4 && (0.0 < param_2 && 0.0 < fVar8))))) {
    if (param_3 <= 0.0 || (param_4 <= 0.0 || (param_2 <= 0.0 || fVar8 <= 0.0))) {
      fVar9 = 0.0;
      fVar6 = 0.0;
      fVar11 = 0.0;
      fVar8 = 1.0;
      uVar4 = 1;
      fVar12 = 1.0;
      fVar10 = 0.0;
      goto joined_r0x005af5a8;
    }
  }
  else {
    fVar7 = 1e+20;
    param_4 = __x / DAT_01d4bb08;
  }
  fVar9 = (__x * param_4) / (param_2 - __x);
  fVar10 = fVar9 / param_3;
  if (*(int *)(param_9 + 0x16c) == 1) {
    iVar1 = *(int *)(param_9 + 0x170);
    if (iVar1 < 1) {
      fVar6 = *(float *)(param_9 + 400);
      if ((0.0 < param_17) && (param_17 <= fVar6)) {
        fVar6 = param_17;
      }
      if (fVar6 <= 0.0) {
        fVar8 = 1.0;
      }
      else {
        fVar8 = (fVar6 - param_2) / fVar6 + -1.0;
        if (fVar8 <= 0.0) {
          fVar8 = -fVar8;
        }
        fVar8 = DAT_01d4bf44 / fVar8;
      }
      fVar6 = -fVar8;
    }
    else {
      fVar6 = DAT_01d4c4a8;
      if (10 < iVar1) {
        fVar6 = 1.0;
      }
      fVar8 = DAT_01d4c554;
      if (8 < iVar1) {
        fVar8 = fVar6;
      }
      if ((0.0 < param_17) && (param_17 < param_2)) {
        if (param_17 == 0.0) {
          fVar6 = 0.0;
        }
        else {
          fVar6 = ((param_17 - param_2) / param_17) * fVar9;
        }
        if (fVar8 <= -(fVar6 / param_3)) {
          fVar8 = -(fVar6 / param_3);
        }
      }
      fVar6 = fVar10 / (fVar10 + fVar8);
      fVar8 = DAT_01d4bac8;
      if (DAT_01d4bac8 <= fVar6) {
        fVar8 = fVar6;
      }
      fVar6 = 1.0 - fVar8;
    }
    fVar12 = 1.0 / fVar8;
    fVar11 = -fVar6 / fVar8;
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    fVar6 = 0.0;
    fVar11 = 0.0;
    fVar8 = 1.0;
    fVar12 = 1.0;
  }
joined_r0x005af5a8:
  if (param_11 != (float *)0x0) {
    *param_11 = __x;
  }
  if (param_12 != (float *)0x0) {
    *param_12 = fVar7;
  }
  if (param_13 != (float *)0x0) {
    *param_13 = param_4;
  }
  if (param_14 != (float *)0x0) {
    *param_14 = fVar9;
  }
  if (param_15 != (float *)0x0) {
    *param_15 = fVar10;
  }
  if (param_16 != (float *)0x0) {
    *param_16 = fVar8;
    param_16[1] = fVar6;
    param_16[2] = fVar12;
    param_16[3] = fVar11;
  }
  return uVar4;
}


