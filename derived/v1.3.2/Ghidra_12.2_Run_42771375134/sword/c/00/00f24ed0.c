/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f24ed0; name: FUN_00f24ed0
 */


int FUN_00f24ed0(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *param_2;
  lVar5 = *param_1;
  lVar4 = *param_3;
  fVar1 = (float)*(undefined8 *)(lVar6 + 0xb8);
  lVar7 = lVar4 + 0xb0;
  fVar2 = (float)*(undefined8 *)(lVar4 + 0xb8);
  if ((float)*(undefined8 *)(lVar5 + 0xb8) <= fVar1) {
    if (fVar1 <= fVar2) {
      iVar3 = 0;
    }
    else {
      *param_2 = lVar4;
      *param_3 = lVar6;
      lVar4 = *param_1;
      if (*(float *)(lVar4 + 0xb8) <= *(float *)(*param_2 + 0xb8)) {
        iVar3 = 1;
        lVar4 = lVar6;
        lVar7 = lVar6 + 0xb0;
      }
      else {
        *param_1 = *param_2;
        *param_2 = lVar4;
        iVar3 = 2;
        lVar4 = *param_3;
        lVar7 = *param_3 + 0xb0;
      }
    }
  }
  else {
    if (fVar1 <= fVar2) {
      *param_1 = lVar6;
      *param_2 = lVar5;
      lVar4 = *param_3;
      if (*(float *)(lVar5 + 0xb8) <= (float)*(undefined8 *)(lVar4 + 0xb8)) {
        iVar3 = 1;
        lVar7 = lVar4 + 0xb0;
        goto LAB_00f24fb8;
      }
      iVar3 = 2;
      *param_2 = lVar4;
    }
    else {
      *param_1 = lVar4;
      iVar3 = 1;
    }
    *param_3 = lVar5;
    lVar4 = lVar5;
    lVar7 = lVar5 + 0xb0;
  }
LAB_00f24fb8:
  if (*(float *)(*param_4 + 0xb8) < *(float *)(lVar7 + 8)) {
    *param_3 = *param_4;
    *param_4 = lVar4;
    lVar4 = *param_2;
    if (*(float *)(lVar4 + 0xb8) <= *(float *)(*param_3 + 0xb8)) {
      iVar3 = iVar3 + 1;
    }
    else {
      *param_2 = *param_3;
      *param_3 = lVar4;
      lVar4 = *param_1;
      if (*(float *)(lVar4 + 0xb8) <= *(float *)(*param_2 + 0xb8)) {
        iVar3 = iVar3 + 2;
      }
      else {
        iVar3 = iVar3 + 3;
        *param_1 = *param_2;
        *param_2 = lVar4;
      }
    }
  }
  lVar4 = *param_4;
  if (*(float *)(*param_5 + 0xb8) < *(float *)(lVar4 + 0xb8)) {
    *param_4 = *param_5;
    *param_5 = lVar4;
    lVar4 = *param_3;
    if (*(float *)(lVar4 + 0xb8) <= *(float *)(*param_4 + 0xb8)) {
      return iVar3 + 1;
    }
    *param_3 = *param_4;
    *param_4 = lVar4;
    lVar4 = *param_2;
    if (*(float *)(lVar4 + 0xb8) <= *(float *)(*param_3 + 0xb8)) {
      return iVar3 + 2;
    }
    *param_2 = *param_3;
    *param_3 = lVar4;
    lVar4 = *param_1;
    if (*(float *)(lVar4 + 0xb8) <= *(float *)(*param_2 + 0xb8)) {
      return iVar3 + 3;
    }
    iVar3 = iVar3 + 4;
    *param_1 = *param_2;
    *param_2 = lVar4;
  }
  return iVar3;
}


