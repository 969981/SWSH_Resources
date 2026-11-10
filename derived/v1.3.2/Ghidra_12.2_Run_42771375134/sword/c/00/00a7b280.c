/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a7b280; name: FUN_00a7b280
 */


void FUN_00a7b280(long *param_1,uint param_2,undefined4 *param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar5 = (ulong)param_2;
  iVar2 = (**(code **)(*param_1 + 0x870))();
  if (iVar2 != 2) {
    if (iVar2 != 1) {
      if (iVar2 == 0) {
        uVar1 = *(undefined4 *)(&DAT_01d4d32c + uVar5 * 4);
        *(undefined4 *)(param_1 + 0x2e0) = uVar1;
        *param_3 = uVar1;
        return;
      }
      return;
    }
    *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(&DAT_01d4d350 + uVar5 * 4);
    if ((param_4 & 1) == 0) {
      if (param_2 == 0) {
        param_3[1] = 1;
      }
      else {
        *param_3 = 0;
        if (param_2 != 1) {
          param_3[1] = 1;
          if ((param_2 != 2) && (param_3[2] = 2, param_2 == 3)) {
            return;
          }
          goto LAB_00a7b60c;
        }
      }
      param_3[2] = 2;
LAB_00a7b60c:
      param_3[3] = 3;
      return;
    }
    if (param_2 == 0) {
LAB_00a7b498:
      uVar3 = (**(code **)(*param_1 + 0x748))(param_1,1);
      uVar4 = (**(code **)(*param_1 + 0x748))(param_1,uVar5);
      if (((uVar3 ^ uVar4) & 1) != 0) {
        param_3[1] = 1;
      }
      if (param_2 == 2) goto LAB_00a7b520;
    }
    else {
      uVar3 = (**(code **)(*param_1 + 0x748))(param_1,0);
      uVar4 = (**(code **)(*param_1 + 0x748))(param_1,uVar5);
      if (((uVar3 ^ uVar4) & 1) != 0) {
        *param_3 = 0;
      }
      if (param_2 != 1) goto LAB_00a7b498;
    }
    uVar3 = (**(code **)(*param_1 + 0x748))(param_1,2);
    uVar4 = (**(code **)(*param_1 + 0x748))(param_1,uVar5);
    if (((uVar3 ^ uVar4) & 1) != 0) {
      param_3[2] = 2;
    }
    if (param_2 == 3) {
      return;
    }
LAB_00a7b520:
    uVar3 = (**(code **)(*param_1 + 0x748))(param_1,3);
    uVar4 = (**(code **)(*param_1 + 0x748))(param_1,uVar5);
    if (((uVar3 ^ uVar4) & 1) == 0) {
      return;
    }
    param_3[3] = 3;
    return;
  }
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(&DAT_01d4d2dc + uVar5 * 4);
  if ((param_4 & 1) == 0) {
    if (param_2 == 0) {
      param_3[1] = 1;
LAB_00a7b5e0:
      param_3[2] = 2;
    }
    else {
      *param_3 = 0;
      if (param_2 == 1) goto LAB_00a7b5e0;
      param_3[1] = 1;
      if (param_2 != 2) {
        param_3[2] = 2;
        if ((param_2 != 4) && (param_3[3] = 4, param_2 == 6)) {
          return;
        }
        goto LAB_00a7b5f0;
      }
    }
    param_3[3] = 4;
LAB_00a7b5f0:
    param_3[4] = 6;
    return;
  }
  if (param_2 == 0) {
LAB_00a7b334:
    uVar3 = (**(code **)(*param_1 + 0x748))(param_1,1);
    uVar4 = (**(code **)(*param_1 + 0x748))(param_1,uVar5);
    if (((uVar3 ^ uVar4) & 1) != 0) {
      param_3[1] = 1;
    }
    if (param_2 != 2) goto LAB_00a7b378;
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x748))(param_1,0);
    uVar4 = (**(code **)(*param_1 + 0x748))(param_1,uVar5);
    if (((uVar3 ^ uVar4) & 1) != 0) {
      *param_3 = 0;
    }
    if (param_2 != 1) goto LAB_00a7b334;
LAB_00a7b378:
    uVar3 = (**(code **)(*param_1 + 0x748))(param_1,2);
    uVar4 = (**(code **)(*param_1 + 0x748))(param_1,uVar5);
    if (((uVar3 ^ uVar4) & 1) != 0) {
      param_3[2] = 2;
    }
    if (param_2 == 4) goto LAB_00a7b400;
  }
  uVar3 = (**(code **)(*param_1 + 0x748))(param_1,4);
  uVar4 = (**(code **)(*param_1 + 0x748))(param_1,uVar5);
  if (((uVar3 ^ uVar4) & 1) != 0) {
    param_3[3] = 4;
  }
  if (param_2 == 6) {
    return;
  }
LAB_00a7b400:
  uVar3 = (**(code **)(*param_1 + 0x748))(param_1,6);
  uVar4 = (**(code **)(*param_1 + 0x748))(param_1,uVar5);
  if (((uVar3 ^ uVar4) & 1) != 0) {
    param_3[4] = 6;
  }
  return;
}


