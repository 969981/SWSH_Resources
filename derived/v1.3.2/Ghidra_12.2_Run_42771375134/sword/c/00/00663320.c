/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00663320; name: FUN_00663320
 */


void FUN_00663320(undefined8 param_1,undefined4 param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int local_70;
  int local_68;
  int local_64;
  
  iVar2 = param_3[4];
  local_68 = param_3[5];
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  if (local_68 < 2) {
    local_68 = 1;
  }
  local_70 = param_3[6];
  iVar3 = param_3[7];
  if (local_70 < 2) {
    local_70 = 1;
  }
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  iVar6 = param_3[8];
  iVar9 = iVar6;
  if (iVar6 < 2) {
    iVar9 = 1;
  }
  switch(param_2) {
  case 1:
    iVar8 = 3;
    if (iVar6 < 2) {
      iVar8 = 0;
    }
    break;
  case 2:
    iVar8 = 5;
    if (param_3[9] == 0) {
      iVar8 = 1;
    }
    if (iVar8 == 6) goto LAB_00663444;
    goto LAB_006633e4;
  case 3:
    iVar8 = 2;
    goto LAB_00663448;
  case 4:
  case 6:
    iVar8 = 8;
    if (1 < iVar6) {
      iVar8 = 9;
    }
    iVar9 = iVar6 * 6;
    if (iVar6 < 2) {
      iVar9 = 6;
    }
    goto LAB_00663444;
  case 5:
    iVar8 = 4;
    if (param_3[9] != 0) {
      iVar8 = 6;
    }
    break;
  default:
    iVar8 = 1;
    goto LAB_00663448;
  }
  if (iVar8 != 6) {
LAB_006633e4:
    if (iVar8 != 4) {
      if (iVar8 == 3) {
        local_68 = iVar9;
      }
      goto LAB_00663448;
    }
  }
LAB_00663444:
  local_70 = iVar9;
LAB_00663448:
  iVar6 = *param_3;
  uVar5 = FUN_00662f90(iVar6);
  uVar4 = param_3[0xd];
  iVar9 = iVar6;
  if (param_3[1] != 0) {
    iVar9 = param_3[1];
  }
  iVar1 = iVar6;
  if (param_3[2] != 0) {
    iVar1 = param_3[2];
  }
  if ((uVar4 >> 5 & 1) != 0) {
    if (param_3[3] != 0) {
      iVar6 = param_3[3];
    }
    uVar5 = FUN_00662f90(iVar6);
  }
  if ((uVar4 >> 0xe & 1) != 0) {
    uVar5 = FUN_00662f90(iVar1);
  }
  if ((uVar4 >> 3 & 1) != 0) {
    uVar5 = FUN_00662f90(iVar9);
  }
  local_64 = 0;
  if ((uVar4 & 0x4020) == 0) {
    uVar10 = 4;
    if (((uVar4 >> 3 & 1) != 0) && (param_3[0x10] == 8)) {
      (**(code **)PTR_DAT_02713a38)(param_1,0x38,&local_64);
      uVar10 = 0x14;
    }
  }
  else if (param_3[0x10] == 8) {
    (**(code **)PTR_DAT_02713a38)(param_1,0x39,&local_64);
    uVar10 = 0x44;
  }
  else {
    uVar10 = 0xc;
  }
  (**(code **)PTR_DAT_027143f8)(param_4);
  if (local_64 != 0) {
    iVar9 = param_3[4] + 4;
    iVar6 = param_3[4] + 7;
    if (-1 < iVar9) {
      iVar6 = iVar9;
    }
    uVar7 = FUN_005ed1d0(*param_3);
    iVar9 = param_3[4];
    if ((uVar7 & 1) != 0) {
      iVar6 = iVar6 >> 2;
      iVar1 = iVar6 + iVar9;
      iVar9 = 0;
      if (iVar6 != 0) {
        iVar9 = (iVar1 + -1) / iVar6;
      }
    }
    iVar6 = FUN_005ed170(*param_3);
    (**(code **)PTR_DAT_02714690)(param_4,(long)(int)((local_64 + iVar6 * iVar9) - 1U & -local_64));
  }
  (**(code **)PTR_DAT_02714400)(param_4,param_1);
  (**(code **)PTR_DAT_02714670)(param_4,iVar2);
  (**(code **)PTR_DAT_02714678)(param_4,local_68);
  (**(code **)PTR_DAT_02714680)(param_4,local_70);
  (**(code **)PTR_DAT_02714688)(param_4,iVar3);
  (**(code **)PTR_DAT_02714418)(param_4,uVar5);
  (**(code **)PTR_DAT_02714410)(param_4,iVar8);
  (**(code **)PTR_DAT_02714408)(param_4,uVar10);
  return;
}


