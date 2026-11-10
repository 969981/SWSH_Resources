/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f25d10; name: FUN_00f25d10
 */


bool FUN_00f25d10(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  long lVar5;
  int iVar6;
  float *pfVar7;
  long lVar8;
  float fVar9;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    lVar5 = *param_1;
    if (*(float *)(param_2[-1] + 0xb0) < *(float *)(lVar5 + 0xb0)) {
      *param_1 = param_2[-1];
      param_2[-1] = lVar5;
      return true;
    }
    return true;
  case 3:
    lVar5 = *param_1;
    lVar8 = param_1[1];
    lVar2 = param_2[-1];
    fVar9 = *(float *)(lVar8 + 0xb0);
    if (fVar9 < *(float *)(lVar5 + 0xb0)) {
      if (*(float *)(lVar2 + 0xb0) < fVar9) {
        *param_1 = lVar2;
        param_2[-1] = lVar5;
        return true;
      }
      *param_1 = lVar8;
      param_1[1] = lVar5;
      if (*(float *)(param_2[-1] + 0xb0) < *(float *)(lVar5 + 0xb0)) {
        param_1[1] = param_2[-1];
        param_2[-1] = lVar5;
        return true;
      }
      return true;
    }
    if (fVar9 <= *(float *)(lVar2 + 0xb0)) {
      return true;
    }
    param_1[1] = lVar2;
    param_2[-1] = lVar8;
    lVar5 = *param_1;
    if (*(float *)(param_1[1] + 0xb0) < *(float *)(lVar5 + 0xb0)) {
      *param_1 = param_1[1];
      param_1[1] = lVar5;
      return true;
    }
    break;
  case 4:
    lVar5 = *param_1;
    lVar8 = param_1[1];
    pfVar4 = (float *)(lVar5 + 0xb0);
    lVar2 = param_1[2];
    fVar9 = (float)*(undefined8 *)(lVar8 + 0xb0);
    pfVar7 = (float *)(lVar2 + 0xb0);
    if ((float)*(undefined8 *)pfVar4 <= fVar9) {
      if ((float)*(undefined8 *)pfVar7 < fVar9) {
        param_1[1] = lVar2;
        param_1[2] = lVar8;
        if (*(float *)(lVar2 + 0xb0) < *pfVar4) {
          *param_1 = lVar2;
          param_1[1] = lVar5;
        }
        lVar2 = lVar8;
        pfVar7 = (float *)(lVar8 + 0xb0);
      }
    }
    else if (fVar9 <= (float)*(undefined8 *)pfVar7) {
      *param_1 = lVar8;
      param_1[1] = lVar5;
      if (*(float *)(lVar2 + 0xb0) < *(float *)(lVar5 + 0xb0)) {
        param_1[1] = lVar2;
        param_1[2] = lVar5;
        lVar2 = lVar5;
        pfVar7 = pfVar4;
      }
    }
    else {
      *param_1 = lVar2;
      param_1[2] = lVar5;
      lVar2 = lVar5;
      pfVar7 = pfVar4;
    }
    if (*pfVar7 <= *(float *)(param_2[-1] + 0xb0)) {
      return true;
    }
    param_1[2] = param_2[-1];
    param_2[-1] = lVar2;
    lVar5 = param_1[1];
    lVar8 = param_1[2];
    if (*(float *)(lVar5 + 0xb0) <= *(float *)(lVar8 + 0xb0)) {
      return true;
    }
    lVar2 = *param_1;
    param_1[1] = lVar8;
    param_1[2] = lVar5;
    if (*(float *)(lVar8 + 0xb0) < *(float *)(lVar2 + 0xb0)) {
      *param_1 = lVar8;
      param_1[1] = lVar2;
      return true;
    }
    break;
  case 5:
    FUN_00f25b10(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    return true;
  default:
    lVar5 = *param_1;
    lVar8 = param_1[1];
    lVar3 = param_1[2];
    fVar9 = *(float *)(lVar8 + 0xb0);
    lVar2 = lVar3;
    if (*(float *)(lVar5 + 0xb0) <= fVar9) {
      if (*(float *)(lVar3 + 0xb0) < fVar9) {
        param_1[1] = lVar3;
        param_1[2] = lVar8;
        lVar2 = lVar8;
        if (*(float *)(lVar3 + 0xb0) < *(float *)(lVar5 + 0xb0)) {
          *param_1 = lVar3;
          param_1[1] = lVar5;
        }
      }
    }
    else {
      if (fVar9 <= *(float *)(lVar3 + 0xb0)) {
        *param_1 = lVar8;
        param_1[1] = lVar5;
        if (*(float *)(lVar5 + 0xb0) <= *(float *)(lVar3 + 0xb0)) goto joined_r0x00f25e70;
        param_1[1] = lVar3;
      }
      else {
        *param_1 = lVar3;
      }
      param_1[2] = lVar5;
      lVar2 = lVar5;
    }
joined_r0x00f25e70:
    if (param_1 + 3 == param_2) {
      return true;
    }
    lVar5 = 0;
    iVar6 = 0;
    plVar1 = param_1 + 3;
    do {
      lVar8 = *plVar1;
      if (*(float *)(lVar8 + 0xb0) < *(float *)(lVar2 + 0xb0)) {
        lVar2 = lVar5;
        do {
          lVar3 = lVar2;
          *(undefined8 *)((long)param_1 + lVar3 + 0x18) =
               *(undefined8 *)((long)param_1 + lVar3 + 0x10);
          if (lVar3 == -0x10) {
            *param_1 = lVar8;
            goto joined_r0x00f25fa4;
          }
          lVar2 = lVar3 + -8;
        } while (*(float *)(lVar8 + 0xb0) < *(float *)(*(long *)((long)param_1 + lVar3 + 8) + 0xb0))
        ;
        *(long *)((long)param_1 + lVar3 + 0x10) = lVar8;
joined_r0x00f25fa4:
        iVar6 = iVar6 + 1;
        if (iVar6 == 8) {
          return plVar1 + 1 == param_2;
        }
      }
      if (plVar1 + 1 == param_2) {
        return true;
      }
      lVar2 = *plVar1;
      lVar5 = lVar5 + 8;
      plVar1 = plVar1 + 1;
    } while( true );
  }
  return true;
}


