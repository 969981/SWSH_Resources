/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eb11a0; name: FUN_00eb11a0
 */


bool FUN_00eb11a0(float *param_1,float *param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  int iVar7;
  float *pfVar8;
  undefined8 uVar9;
  long lVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  undefined8 local_50;
  undefined8 local_48;
  
  switch((long)param_2 - (long)param_1 >> 4) {
  case 0:
  case 1:
    break;
  case 2:
    if (*param_1 <= param_2[-4]) {
      return true;
    }
    goto LAB_00eb121c;
  case 3:
    pfVar5 = param_1 + 4;
    fVar12 = *pfVar5;
    pfVar8 = param_2 + -4;
    if (*param_1 <= fVar12) {
      if (fVar12 <= *pfVar8) {
        return true;
      }
      uVar9 = *(undefined8 *)pfVar5;
      uVar3 = *(undefined8 *)(param_1 + 6);
      uVar2 = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)pfVar5 = *(undefined8 *)pfVar8;
      *(undefined8 *)(param_1 + 6) = uVar2;
      *(undefined8 *)pfVar8 = uVar9;
      *(undefined8 *)(param_2 + -2) = uVar3;
      if (*param_1 <= param_1[4]) {
        return true;
      }
      uVar9 = *(undefined8 *)param_1;
      uVar3 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)param_1 = *(undefined8 *)pfVar5;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)pfVar5 = uVar9;
      *(undefined8 *)(param_1 + 6) = uVar3;
      return true;
    }
    if (fVar12 <= *pfVar8) {
      uVar9 = *(undefined8 *)param_1;
      uVar3 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)param_1 = *(undefined8 *)pfVar5;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)pfVar5 = uVar9;
      *(undefined8 *)(param_1 + 6) = uVar3;
      if (param_1[4] <= *pfVar8) {
        return true;
      }
      local_50 = *(undefined8 *)pfVar5;
      local_48 = *(undefined8 *)(param_1 + 6);
      uVar9 = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)pfVar5 = *(undefined8 *)pfVar8;
      *(undefined8 *)(param_1 + 6) = uVar9;
      goto LAB_00eb122c;
    }
LAB_00eb121c:
    local_50 = *(undefined8 *)param_1;
    local_48 = *(undefined8 *)(param_1 + 2);
    uVar9 = *(undefined8 *)(param_2 + -2);
    *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -4);
    *(undefined8 *)(param_1 + 2) = uVar9;
LAB_00eb122c:
    *(undefined8 *)(param_2 + -4) = local_50;
    *(undefined8 *)(param_2 + -2) = local_48;
    return true;
  case 4:
    FUN_00eb0ff0(param_1,param_1 + 4,param_1 + 8,param_2 + -4);
    break;
  case 5:
    pfVar5 = param_1 + 4;
    pfVar8 = param_1 + 8;
    pfVar1 = param_1 + 0xc;
    FUN_00eb0ff0(param_1,pfVar5,pfVar8,pfVar1);
    pfVar11 = param_2 + -4;
    if (*pfVar11 < param_1[0xc]) {
      uVar9 = *(undefined8 *)pfVar1;
      uVar3 = *(undefined8 *)(param_1 + 0xe);
      uVar2 = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)pfVar1 = *(undefined8 *)pfVar11;
      *(undefined8 *)(param_1 + 0xe) = uVar2;
      *(undefined8 *)pfVar11 = uVar9;
      *(undefined8 *)(param_2 + -2) = uVar3;
      if (*pfVar1 < *pfVar8) {
        uVar9 = *(undefined8 *)pfVar8;
        uVar3 = *(undefined8 *)(param_1 + 10);
        *(undefined8 *)pfVar8 = *(undefined8 *)pfVar1;
        *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0xe);
        *(undefined8 *)pfVar1 = uVar9;
        *(undefined8 *)(param_1 + 0xe) = uVar3;
        if (*pfVar8 < *pfVar5) {
          uVar9 = *(undefined8 *)pfVar5;
          uVar3 = *(undefined8 *)(param_1 + 6);
          *(undefined8 *)pfVar5 = *(undefined8 *)pfVar8;
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
          *(undefined8 *)pfVar8 = uVar9;
          *(undefined8 *)(param_1 + 10) = uVar3;
          if (param_1[4] < *param_1) {
            uVar9 = *(undefined8 *)param_1;
            uVar3 = *(undefined8 *)(param_1 + 2);
            *(undefined8 *)param_1 = *(undefined8 *)pfVar5;
            *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
            *(undefined8 *)pfVar5 = uVar9;
            *(undefined8 *)(param_1 + 6) = uVar3;
            return true;
          }
        }
      }
    }
    break;
  default:
    pfVar5 = param_1 + 8;
    fVar12 = *pfVar5;
    pfVar8 = param_1 + 4;
    fVar13 = *pfVar8;
    if (*param_1 <= fVar13) {
      if (fVar12 < fVar13) {
        uVar9 = *(undefined8 *)pfVar8;
        uVar3 = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)pfVar8 = *(undefined8 *)pfVar5;
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
        *(undefined8 *)pfVar5 = uVar9;
        *(undefined8 *)(param_1 + 10) = uVar3;
        if (*pfVar8 < *param_1) {
          uVar9 = *(undefined8 *)param_1;
          uVar3 = *(undefined8 *)(param_1 + 2);
          *(undefined8 *)param_1 = *(undefined8 *)pfVar8;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
          *(undefined8 *)pfVar8 = uVar9;
          *(undefined8 *)(param_1 + 6) = uVar3;
        }
      }
    }
    else {
      if (fVar13 <= fVar12) {
        uVar9 = *(undefined8 *)param_1;
        uVar3 = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)param_1 = *(undefined8 *)pfVar8;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)pfVar8 = uVar9;
        *(undefined8 *)(param_1 + 6) = uVar3;
        if (param_1[4] <= fVar12) goto joined_r0x00eb13f0;
        local_50 = *(undefined8 *)pfVar8;
        local_48 = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)pfVar8 = *(undefined8 *)pfVar5;
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      }
      else {
        local_50 = *(undefined8 *)param_1;
        local_48 = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)param_1 = *(undefined8 *)pfVar5;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
      }
      *(undefined8 *)pfVar5 = local_50;
      *(undefined8 *)(param_1 + 10) = local_48;
    }
joined_r0x00eb13f0:
    if (param_1 + 0xc != param_2) {
      lVar6 = 0;
      iVar7 = 0;
      pfVar8 = param_1 + 0xc;
      do {
        fVar12 = *pfVar8;
        if (fVar12 < *pfVar5) {
          uVar9 = *(undefined8 *)(pfVar8 + 1);
          fVar13 = pfVar8[3];
          lVar4 = lVar6;
          do {
            lVar10 = lVar4;
            *(undefined8 *)((long)param_1 + lVar10 + 0x30) =
                 *(undefined8 *)((long)param_1 + lVar10 + 0x20);
            *(undefined8 *)((long)param_1 + lVar10 + 0x38) =
                 *(undefined8 *)((long)param_1 + lVar10 + 0x28);
            if (lVar10 == -0x20) {
              pfVar5 = param_1;
              goto LAB_00eb14e0;
            }
            lVar4 = lVar10 + -0x10;
          } while (fVar12 < *(float *)((long)param_1 + lVar10 + 0x10));
          pfVar5 = (float *)((long)param_1 + lVar10 + 0x20);
LAB_00eb14e0:
          *pfVar5 = fVar12;
          iVar7 = iVar7 + 1;
          pfVar5[3] = fVar13;
          *(undefined8 *)(pfVar5 + 1) = uVar9;
          if (iVar7 == 8) {
            return pfVar8 + 4 == param_2;
          }
        }
        pfVar1 = pfVar8 + 4;
        lVar6 = lVar6 + 0x10;
        pfVar5 = pfVar8;
        pfVar8 = pfVar1;
      } while (pfVar1 != param_2);
    }
  }
  return true;
}


