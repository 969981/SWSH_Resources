/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f250e0; name: FUN_00f250e0
 */


bool FUN_00f250e0(long *param_1,long *param_2)

{
  float fVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    lVar5 = *param_1;
    if (*(float *)(param_2[-1] + 0xb8) < *(float *)(lVar5 + 0xb8)) {
      *param_1 = param_2[-1];
      param_2[-1] = lVar5;
      return true;
    }
    return true;
  case 3:
    lVar5 = *param_1;
    lVar7 = param_1[1];
    lVar3 = param_2[-1];
    fVar8 = *(float *)(lVar7 + 0xb8);
    if (fVar8 < *(float *)(lVar5 + 0xb8)) {
      if (*(float *)(lVar3 + 0xb8) < fVar8) {
        *param_1 = lVar3;
        param_2[-1] = lVar5;
        return true;
      }
      *param_1 = lVar7;
      param_1[1] = lVar5;
      if (*(float *)(param_2[-1] + 0xb8) < *(float *)(lVar5 + 0xb8)) {
        param_1[1] = param_2[-1];
        param_2[-1] = lVar5;
        return true;
      }
      return true;
    }
    if (fVar8 <= *(float *)(lVar3 + 0xb8)) {
      return true;
    }
    param_1[1] = lVar3;
    param_2[-1] = lVar7;
    lVar5 = *param_1;
    if (*(float *)(param_1[1] + 0xb8) < *(float *)(lVar5 + 0xb8)) {
      *param_1 = param_1[1];
      param_1[1] = lVar5;
      return true;
    }
    break;
  case 4:
    lVar5 = *param_1;
    lVar7 = param_1[1];
    lVar3 = param_1[2];
    fVar8 = (float)*(undefined8 *)(lVar7 + 0xb8);
    fVar1 = (float)*(undefined8 *)(lVar3 + 0xb8);
    lVar4 = lVar3 + 0xb0;
    if ((float)*(undefined8 *)(lVar5 + 0xb8) <= fVar8) {
      if (fVar1 < fVar8) {
        param_1[1] = lVar3;
        param_1[2] = lVar7;
        if (*(float *)(lVar3 + 0xb8) < *(float *)(lVar5 + 0xb8)) {
          *param_1 = lVar3;
          param_1[1] = lVar5;
        }
        lVar3 = lVar7;
        lVar4 = lVar7 + 0xb0;
      }
    }
    else if (fVar8 <= fVar1) {
      *param_1 = lVar7;
      param_1[1] = lVar5;
      if (*(float *)(lVar3 + 0xb8) < *(float *)(lVar5 + 0xb8)) {
        param_1[1] = lVar3;
        param_1[2] = lVar5;
        lVar3 = lVar5;
        lVar4 = lVar5 + 0xb0;
      }
    }
    else {
      *param_1 = lVar3;
      param_1[2] = lVar5;
      lVar3 = lVar5;
      lVar4 = lVar5 + 0xb0;
    }
    if (*(float *)(lVar4 + 8) <= *(float *)(param_2[-1] + 0xb8)) {
      return true;
    }
    param_1[2] = param_2[-1];
    param_2[-1] = lVar3;
    lVar5 = param_1[1];
    lVar7 = param_1[2];
    if (*(float *)(lVar5 + 0xb8) <= *(float *)(lVar7 + 0xb8)) {
      return true;
    }
    lVar3 = *param_1;
    param_1[1] = lVar7;
    param_1[2] = lVar5;
    if (*(float *)(lVar7 + 0xb8) < *(float *)(lVar3 + 0xb8)) {
      *param_1 = lVar7;
      param_1[1] = lVar3;
      return true;
    }
    break;
  case 5:
    FUN_00f24ed0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    return true;
  default:
    lVar5 = *param_1;
    lVar7 = param_1[1];
    lVar4 = param_1[2];
    fVar8 = *(float *)(lVar7 + 0xb8);
    lVar3 = lVar4;
    if (*(float *)(lVar5 + 0xb8) <= fVar8) {
      if (*(float *)(lVar4 + 0xb8) < fVar8) {
        param_1[1] = lVar4;
        param_1[2] = lVar7;
        lVar3 = lVar7;
        if (*(float *)(lVar4 + 0xb8) < *(float *)(lVar5 + 0xb8)) {
          *param_1 = lVar4;
          param_1[1] = lVar5;
        }
      }
    }
    else {
      if (fVar8 <= *(float *)(lVar4 + 0xb8)) {
        *param_1 = lVar7;
        param_1[1] = lVar5;
        if (*(float *)(lVar5 + 0xb8) <= *(float *)(lVar4 + 0xb8)) goto joined_r0x00f2524c;
        param_1[1] = lVar4;
      }
      else {
        *param_1 = lVar4;
      }
      param_1[2] = lVar5;
      lVar3 = lVar5;
    }
joined_r0x00f2524c:
    if (param_1 + 3 == param_2) {
      return true;
    }
    lVar5 = 0;
    iVar6 = 0;
    plVar2 = param_1 + 3;
    do {
      lVar7 = *plVar2;
      if (*(float *)(lVar7 + 0xb8) < *(float *)(lVar3 + 0xb8)) {
        lVar3 = lVar5;
        do {
          lVar4 = lVar3;
          *(undefined8 *)((long)param_1 + lVar4 + 0x18) =
               *(undefined8 *)((long)param_1 + lVar4 + 0x10);
          if (lVar4 == -0x10) {
            *param_1 = lVar7;
            goto joined_r0x00f25380;
          }
          lVar3 = lVar4 + -8;
        } while (*(float *)(lVar7 + 0xb8) < *(float *)(*(long *)((long)param_1 + lVar4 + 8) + 0xb8))
        ;
        *(long *)((long)param_1 + lVar4 + 0x10) = lVar7;
joined_r0x00f25380:
        iVar6 = iVar6 + 1;
        if (iVar6 == 8) {
          return plVar2 + 1 == param_2;
        }
      }
      if (plVar2 + 1 == param_2) {
        return true;
      }
      lVar3 = *plVar2;
      lVar5 = lVar5 + 8;
      plVar2 = plVar2 + 1;
    } while( true );
  }
  return true;
}


