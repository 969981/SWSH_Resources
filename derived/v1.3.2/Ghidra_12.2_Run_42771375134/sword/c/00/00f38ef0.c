/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f38ef0; name: FUN_00f38ef0
 */


int FUN_00f38ef0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  
  fVar5 = *param_2;
  if (*param_1 <= fVar5) {
    if (fVar5 <= *param_3) {
      iVar4 = 0;
      if (*param_3 <= *param_4) {
        return 0;
      }
      goto LAB_00f38fe4;
    }
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)(param_2 + 2);
    uVar3 = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 2) = uVar3;
    *(undefined8 *)param_3 = uVar1;
    *(undefined8 *)(param_3 + 2) = uVar2;
    if (*param_2 < *param_1) {
      uVar1 = *(undefined8 *)param_1;
      uVar2 = *(undefined8 *)(param_1 + 2);
      uVar3 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = uVar3;
      *(undefined8 *)param_2 = uVar1;
      *(undefined8 *)(param_2 + 2) = uVar2;
      goto LAB_00f38fb8;
    }
  }
  else if (fVar5 <= *param_3) {
    uVar1 = *(undefined8 *)param_1;
    uVar2 = *(undefined8 *)(param_1 + 2);
    uVar3 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = uVar3;
    *(undefined8 *)param_2 = uVar1;
    *(undefined8 *)(param_2 + 2) = uVar2;
    if (*param_3 < *param_2) {
      uVar1 = *(undefined8 *)param_2;
      uVar2 = *(undefined8 *)(param_2 + 2);
      uVar3 = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = uVar3;
      *(undefined8 *)param_3 = uVar1;
      *(undefined8 *)(param_3 + 2) = uVar2;
LAB_00f38fb8:
      iVar4 = 2;
      if (*param_3 <= *param_4) {
        return 2;
      }
      goto LAB_00f38fe4;
    }
  }
  else {
    uVar1 = *(undefined8 *)param_1;
    uVar2 = *(undefined8 *)(param_1 + 2);
    uVar3 = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)param_1 = *(undefined8 *)param_3;
    *(undefined8 *)(param_1 + 2) = uVar3;
    *(undefined8 *)param_3 = uVar1;
    *(undefined8 *)(param_3 + 2) = uVar2;
  }
  iVar4 = 1;
  if (*param_3 <= *param_4) {
    return 1;
  }
LAB_00f38fe4:
  uVar1 = *(undefined8 *)param_3;
  uVar2 = *(undefined8 *)(param_3 + 2);
  uVar3 = *(undefined8 *)(param_4 + 2);
  *(undefined8 *)param_3 = *(undefined8 *)param_4;
  *(undefined8 *)(param_3 + 2) = uVar3;
  *(undefined8 *)param_4 = uVar1;
  *(undefined8 *)(param_4 + 2) = uVar2;
  if (*param_2 <= *param_3) {
    return iVar4 + 1;
  }
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)(param_2 + 2);
  uVar3 = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined8 *)(param_2 + 2) = uVar3;
  *(undefined8 *)param_3 = uVar1;
  *(undefined8 *)(param_3 + 2) = uVar2;
  if (*param_1 <= *param_2) {
    return iVar4 + 2;
  }
  uVar1 = *(undefined8 *)param_1;
  uVar2 = *(undefined8 *)(param_1 + 2);
  uVar3 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 2) = uVar3;
  *(undefined8 *)param_2 = uVar1;
  *(undefined8 *)(param_2 + 2) = uVar2;
  return iVar4 + 3;
}


