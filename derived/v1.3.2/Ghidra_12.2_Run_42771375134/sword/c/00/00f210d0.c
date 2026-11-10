/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f210d0; name: FUN_00f210d0
 */


int FUN_00f210d0(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  float fVar6;
  
  lVar4 = *param_2;
  lVar3 = *param_1;
  lVar2 = *param_3;
  fVar6 = (float)*(undefined8 *)(lVar4 + 0xb0);
  pfVar5 = (float *)(lVar2 + 0xb0);
  if ((float)*(undefined8 *)(lVar3 + 0xb0) <= fVar6) {
    if (fVar6 <= (float)*(undefined8 *)pfVar5) {
      iVar1 = 0;
    }
    else {
      *param_2 = lVar2;
      *param_3 = lVar4;
      lVar2 = *param_1;
      if (*(float *)(lVar2 + 0xb0) <= *(float *)(*param_2 + 0xb0)) {
        iVar1 = 1;
        lVar2 = lVar4;
        pfVar5 = (float *)(lVar4 + 0xb0);
      }
      else {
        *param_1 = *param_2;
        *param_2 = lVar2;
        iVar1 = 2;
        lVar2 = *param_3;
        pfVar5 = (float *)(*param_3 + 0xb0);
      }
    }
  }
  else {
    if (fVar6 <= (float)*(undefined8 *)pfVar5) {
      *param_1 = lVar4;
      *param_2 = lVar3;
      lVar2 = *param_3;
      if (*(float *)(lVar3 + 0xb0) <= (float)*(undefined8 *)(lVar2 + 0xb0)) {
        iVar1 = 1;
        pfVar5 = (float *)(lVar2 + 0xb0);
        goto LAB_00f211a8;
      }
      iVar1 = 2;
      *param_2 = lVar2;
    }
    else {
      *param_1 = lVar2;
      iVar1 = 1;
    }
    *param_3 = lVar3;
    lVar2 = lVar3;
    pfVar5 = (float *)(lVar3 + 0xb0);
  }
LAB_00f211a8:
  if (*(float *)(*param_4 + 0xb0) < *pfVar5) {
    *param_3 = *param_4;
    *param_4 = lVar2;
    lVar2 = *param_2;
    if (*(float *)(lVar2 + 0xb0) <= *(float *)(*param_3 + 0xb0)) {
      iVar1 = iVar1 + 1;
    }
    else {
      *param_2 = *param_3;
      *param_3 = lVar2;
      lVar2 = *param_1;
      if (*(float *)(lVar2 + 0xb0) <= *(float *)(*param_2 + 0xb0)) {
        iVar1 = iVar1 + 2;
      }
      else {
        iVar1 = iVar1 + 3;
        *param_1 = *param_2;
        *param_2 = lVar2;
      }
    }
  }
  lVar2 = *param_4;
  if (*(float *)(*param_5 + 0xb0) < *(float *)(lVar2 + 0xb0)) {
    *param_4 = *param_5;
    *param_5 = lVar2;
    lVar2 = *param_3;
    if (*(float *)(lVar2 + 0xb0) <= *(float *)(*param_4 + 0xb0)) {
      return iVar1 + 1;
    }
    *param_3 = *param_4;
    *param_4 = lVar2;
    lVar2 = *param_2;
    if (*(float *)(lVar2 + 0xb0) <= *(float *)(*param_3 + 0xb0)) {
      return iVar1 + 2;
    }
    *param_2 = *param_3;
    *param_3 = lVar2;
    lVar2 = *param_1;
    if (*(float *)(lVar2 + 0xb0) <= *(float *)(*param_2 + 0xb0)) {
      return iVar1 + 3;
    }
    iVar1 = iVar1 + 4;
    *param_1 = *param_2;
    *param_2 = lVar2;
  }
  return iVar1;
}


