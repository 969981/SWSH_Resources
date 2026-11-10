/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059db20; name: FUN_0059db20
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0059db20(undefined8 param_1,uint param_2,long *param_3,long param_4,undefined8 param_5,
            uint param_6,undefined8 param_7,undefined4 param_8,uint param_9,uint param_10)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  uVar3 = FUN_0059e450(0x3f800000,0x1f,0,0,0,0,0,0,0);
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  plVar6 = *(long **)PTR_DAT_02713c38;
  iVar2 = (**(code **)(*plVar6 + 0x40))(plVar6,param_4);
  if (-1 < iVar2) {
    *(undefined8 *)PTR_DAT_02713a70 = param_5;
  }
  if ((param_6 & 0xff0) == 0) {
    param_9 = param_9 | 6;
  }
  else {
    param_9 = param_9 | 0x16;
  }
  if ((param_2 == 0) || (lVar7 = *param_3, lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x38))(plVar6,0,0,0);
    lVar7 = 0;
    uVar3 = 1;
  }
  else {
    FUN_0059d300(lVar7,0,param_9,1,0,param_10);
    uVar3 = 0;
    param_10 = param_10 & 0xfffcffff;
  }
  if ((param_2 < 2) || (lVar5 = param_3[1], lVar5 == 0)) {
    (**(code **)(*plVar6 + 0x38))(plVar6,1,0,0);
    lVar5 = lVar7;
  }
  else {
    FUN_0059d300(lVar5,1,param_9,uVar3,0,param_10);
    uVar3 = 0;
    param_10 = param_10 & 0xfffcffff;
    if (lVar7 != 0) {
      lVar5 = lVar7;
    }
  }
  if ((param_2 < 3) || (lVar7 = param_3[2], lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x38))(plVar6,2,0,0);
    lVar7 = lVar5;
  }
  else {
    FUN_0059d300(lVar7,2,param_9,uVar3,0,param_10);
    uVar3 = 0;
    param_10 = param_10 & 0xfffcffff;
    if (lVar5 != 0) {
      lVar7 = lVar5;
    }
  }
  if ((param_2 < 4) || (lVar5 = param_3[3], lVar5 == 0)) {
    (**(code **)(*plVar6 + 0x38))(plVar6,3,0,0);
    lVar5 = lVar7;
  }
  else {
    FUN_0059d300(lVar5,3,param_9,uVar3,0,param_10);
    uVar3 = 0;
    param_10 = param_10 & 0xfffcffff;
    if (lVar7 != 0) {
      lVar5 = lVar7;
    }
  }
  if ((param_2 < 5) || (lVar7 = param_3[4], lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x38))(plVar6,4,0,0);
    lVar7 = lVar5;
  }
  else {
    FUN_0059d300(lVar7,4,param_9,uVar3,0,param_10);
    uVar3 = 0;
    param_10 = param_10 & 0xfffcffff;
    if (lVar5 != 0) {
      lVar7 = lVar5;
    }
  }
  if ((param_2 < 6) || (lVar5 = param_3[5], lVar5 == 0)) {
    (**(code **)(*plVar6 + 0x38))(plVar6,5,0,0);
    lVar5 = lVar7;
  }
  else {
    FUN_0059d300(lVar5,5,param_9,uVar3,0,param_10);
    uVar3 = 0;
    param_10 = param_10 & 0xfffcffff;
    if (lVar7 != 0) {
      lVar5 = lVar7;
    }
  }
  if ((param_2 < 7) || (lVar7 = param_3[6], lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x38))(plVar6,6,0,0);
    lVar7 = lVar5;
  }
  else {
    FUN_0059d300(lVar7,6,param_9,uVar3,0,param_10);
    uVar3 = 0;
    param_10 = param_10 & 0xfffcffff;
    if (lVar5 != 0) {
      lVar7 = lVar5;
    }
  }
  if ((param_2 < 8) || (lVar5 = param_3[7], lVar5 == 0)) {
    (**(code **)(*plVar6 + 0x38))(plVar6,7,0,0);
    if (lVar7 == 0) {
      return 0;
    }
    iVar2 = *(int *)(lVar7 + 0x2c);
  }
  else {
    FUN_0059d300(lVar5,7,param_9,uVar3,0,param_10);
    if (lVar7 != 0) {
      lVar5 = lVar7;
    }
    iVar2 = *(int *)(lVar5 + 0x2c);
    lVar7 = lVar5;
  }
  if ((iVar2 < 0) || (**(long **)(lVar7 + (long)*(int *)(lVar7 + 0xa0) * 8 + 0xe0) == 0)) {
    if (param_6 != 0) {
      uVar4 = param_6 & 0xfffffffc;
      if ((param_4 != 0) && ((param_6 & 3) != 0)) {
        uVar1 = uVar4 | 1;
        uVar4 = param_6 | 3;
        if (*(int *)(param_4 + 0x44) != 0x2d && *(int *)(param_4 + 0x44) != 0x14) {
          uVar4 = uVar1;
        }
      }
      (**(code **)(*plVar6 + 0x198))(param_1,plVar6,uVar4,param_7,param_8);
    }
  }
  else {
    uVar4 = 0;
    if ((param_6 & 0xff0) != 0) {
      uVar4 = 5;
    }
    if ((param_6 & 3) != 0) {
      uVar4 = uVar4 | 2;
    }
    FUN_0059d880(param_1,uVar4 | 8,param_7,param_8);
  }
  return 0;
}


