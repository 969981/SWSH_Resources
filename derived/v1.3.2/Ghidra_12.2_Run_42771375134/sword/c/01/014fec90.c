/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014fec90; name: FUN_014fec90
 */


int FUN_014fec90(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = *param_2;
  if (uVar8 < *param_1) {
    if (*param_3 < uVar8) {
      uVar1 = *(undefined8 *)param_1;
      uVar4 = *(undefined8 *)(param_1 + 2);
      uVar2 = *(undefined8 *)(param_1 + 4);
      uVar5 = *(undefined8 *)(param_1 + 6);
      uVar3 = *(undefined8 *)param_3;
      uVar6 = *(undefined8 *)(param_3 + 2);
      uVar7 = *(undefined8 *)(param_3 + 6);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
      *(undefined8 *)(param_1 + 6) = uVar7;
      *(undefined8 *)param_1 = uVar3;
      *(undefined8 *)(param_1 + 2) = uVar6;
      *(undefined8 *)(param_3 + 4) = uVar2;
      *(undefined8 *)(param_3 + 6) = uVar5;
      *(undefined8 *)param_3 = uVar1;
      *(undefined8 *)(param_3 + 2) = uVar4;
    }
    else {
      uVar1 = *(undefined8 *)param_1;
      uVar4 = *(undefined8 *)(param_1 + 2);
      uVar2 = *(undefined8 *)(param_1 + 4);
      uVar5 = *(undefined8 *)(param_1 + 6);
      uVar3 = *(undefined8 *)param_2;
      uVar6 = *(undefined8 *)(param_2 + 2);
      uVar7 = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 6) = uVar7;
      *(undefined8 *)param_1 = uVar3;
      *(undefined8 *)(param_1 + 2) = uVar6;
      *(undefined8 *)(param_2 + 4) = uVar2;
      *(undefined8 *)(param_2 + 6) = uVar5;
      *(undefined8 *)param_2 = uVar1;
      *(undefined8 *)(param_2 + 2) = uVar4;
      if (*param_3 < *param_2) {
        uVar1 = *(undefined8 *)param_2;
        uVar4 = *(undefined8 *)(param_2 + 2);
        uVar2 = *(undefined8 *)(param_2 + 4);
        uVar5 = *(undefined8 *)(param_2 + 6);
        uVar3 = *(undefined8 *)param_3;
        uVar6 = *(undefined8 *)(param_3 + 2);
        uVar7 = *(undefined8 *)(param_3 + 6);
        *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
        *(undefined8 *)(param_2 + 6) = uVar7;
        *(undefined8 *)param_2 = uVar3;
        *(undefined8 *)(param_2 + 2) = uVar6;
        *(undefined8 *)(param_3 + 4) = uVar2;
        *(undefined8 *)(param_3 + 6) = uVar5;
        *(undefined8 *)param_3 = uVar1;
        *(undefined8 *)(param_3 + 2) = uVar4;
LAB_014fedd0:
        iVar9 = 2;
        if (*param_3 <= *param_4) {
          return 2;
        }
        goto LAB_014fedfc;
      }
    }
  }
  else {
    if (uVar8 <= *param_3) {
      iVar9 = 0;
      if (*param_3 <= *param_4) {
        return 0;
      }
      goto LAB_014fedfc;
    }
    uVar1 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)(param_2 + 2);
    uVar2 = *(undefined8 *)(param_2 + 4);
    uVar5 = *(undefined8 *)(param_2 + 6);
    uVar3 = *(undefined8 *)param_3;
    uVar6 = *(undefined8 *)(param_3 + 2);
    uVar7 = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)(param_2 + 6) = uVar7;
    *(undefined8 *)param_2 = uVar3;
    *(undefined8 *)(param_2 + 2) = uVar6;
    *(undefined8 *)(param_3 + 4) = uVar2;
    *(undefined8 *)(param_3 + 6) = uVar5;
    *(undefined8 *)param_3 = uVar1;
    *(undefined8 *)(param_3 + 2) = uVar4;
    if (*param_2 < *param_1) {
      uVar1 = *(undefined8 *)param_1;
      uVar4 = *(undefined8 *)(param_1 + 2);
      uVar2 = *(undefined8 *)(param_1 + 4);
      uVar5 = *(undefined8 *)(param_1 + 6);
      uVar3 = *(undefined8 *)param_2;
      uVar6 = *(undefined8 *)(param_2 + 2);
      uVar7 = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 6) = uVar7;
      *(undefined8 *)param_1 = uVar3;
      *(undefined8 *)(param_1 + 2) = uVar6;
      *(undefined8 *)(param_2 + 4) = uVar2;
      *(undefined8 *)(param_2 + 6) = uVar5;
      *(undefined8 *)param_2 = uVar1;
      *(undefined8 *)(param_2 + 2) = uVar4;
      goto LAB_014fedd0;
    }
  }
  iVar9 = 1;
  if (*param_3 <= *param_4) {
    return 1;
  }
LAB_014fedfc:
  uVar1 = *(undefined8 *)param_3;
  uVar4 = *(undefined8 *)(param_3 + 2);
  uVar2 = *(undefined8 *)(param_3 + 4);
  uVar5 = *(undefined8 *)(param_3 + 6);
  uVar3 = *(undefined8 *)param_4;
  uVar6 = *(undefined8 *)(param_4 + 2);
  uVar7 = *(undefined8 *)(param_4 + 6);
  *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_4 + 4);
  *(undefined8 *)(param_3 + 6) = uVar7;
  *(undefined8 *)param_3 = uVar3;
  *(undefined8 *)(param_3 + 2) = uVar6;
  *(undefined8 *)(param_4 + 4) = uVar2;
  *(undefined8 *)(param_4 + 6) = uVar5;
  *(undefined8 *)param_4 = uVar1;
  *(undefined8 *)(param_4 + 2) = uVar4;
  if (*param_2 <= *param_3) {
    return iVar9 + 1;
  }
  uVar1 = *(undefined8 *)param_2;
  uVar4 = *(undefined8 *)(param_2 + 2);
  uVar2 = *(undefined8 *)(param_2 + 4);
  uVar5 = *(undefined8 *)(param_2 + 6);
  uVar3 = *(undefined8 *)param_3;
  uVar6 = *(undefined8 *)(param_3 + 2);
  uVar7 = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)(param_2 + 6) = uVar7;
  *(undefined8 *)param_2 = uVar3;
  *(undefined8 *)(param_2 + 2) = uVar6;
  *(undefined8 *)(param_3 + 4) = uVar2;
  *(undefined8 *)(param_3 + 6) = uVar5;
  *(undefined8 *)param_3 = uVar1;
  *(undefined8 *)(param_3 + 2) = uVar4;
  if (*param_2 < *param_1) {
    uVar1 = *(undefined8 *)param_1;
    uVar4 = *(undefined8 *)(param_1 + 2);
    uVar2 = *(undefined8 *)(param_1 + 4);
    uVar5 = *(undefined8 *)(param_1 + 6);
    uVar3 = *(undefined8 *)param_2;
    uVar6 = *(undefined8 *)(param_2 + 2);
    uVar7 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 6) = uVar7;
    *(undefined8 *)param_1 = uVar3;
    *(undefined8 *)(param_1 + 2) = uVar6;
    *(undefined8 *)(param_2 + 4) = uVar2;
    *(undefined8 *)(param_2 + 6) = uVar5;
    *(undefined8 *)param_2 = uVar1;
    *(undefined8 *)(param_2 + 2) = uVar4;
    return iVar9 + 3;
  }
  return iVar9 + 2;
}


