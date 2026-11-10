/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb9b90; name: FUN_00bb9b90
 */


undefined8 FUN_00bb9b90(long param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 local_50;
  undefined8 local_48;
  
  FUN_00bd2440(*(undefined8 *)(param_1 + 0x5f0));
  uVar5 = FUN_00bd2070(*(undefined8 *)(param_1 + 0x5f0));
  if (((uVar5 & 1) == 0) ||
     (uVar5 = FUN_00bd25f0(*(undefined8 *)(param_1 + 0x5f0)), (uVar5 & 1) != 0)) {
    return 0;
  }
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  local_48 = FUN_016b8190();
  sVar1 = *(short *)(param_1 + 0x624);
  if (sVar1 == -1) goto LAB_00bb9dd8;
  if (sVar1 == -2) {
    local_50 = 0;
    FUN_00bcfb40(0,0,(long)&local_50 + 4,&local_50);
    uVar9 = *(undefined8 *)(param_1 + 0x5f0);
    lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar11 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar11 == 0) {
      uVar3 = FUN_0150b350(0);
      FUN_00bd1cc0(uVar9,0,uVar3,local_50._4_4_,local_50 & 0xffffffff);
    }
    else {
      plVar12 = (long *)(lVar11 + 0x48);
      (**(code **)(*plVar12 + 0x10))(plVar12);
      uVar3 = FUN_0150b350(lVar11);
      FUN_00bd1cc0(uVar9,0,uVar3,local_50._4_4_,local_50 & 0xffffffff);
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    goto LAB_00bb9dd8;
  }
  uVar6 = (uint)((ulong)local_48 >> 0x20);
  uVar2 = uVar6 - 2;
  if (uVar6 < 2) {
LAB_00bb9d08:
    uVar9 = 2;
  }
  else if ((int)local_48 == 0) {
    if (5 < (int)uVar2) goto LAB_00bb9d08;
    uVar9 = 1;
  }
  else {
    if (4 < uVar2) goto LAB_00bb9d08;
    uVar9 = 0;
  }
  local_50 = 0;
  FUN_00bcfb40(uVar9,sVar1,(long)&local_50 + 4,&local_50);
  uVar10 = *(undefined8 *)(param_1 + 0x5f0);
  if (local_48._4_4_ < 2) {
LAB_00bb9dc0:
    uVar3 = 0xffffffff;
  }
  else if ((int)local_48 == 0) {
    if (5 < (int)(local_48._4_4_ - 2)) goto LAB_00bb9dc0;
    uVar3 = *(undefined4 *)(param_1 + 0x614);
  }
  else {
    if (4 < local_48._4_4_ - 2) goto LAB_00bb9dc0;
    lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar11 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar11 == 0) {
      uVar3 = FUN_0150b350(0);
    }
    else {
      plVar12 = (long *)(lVar11 + 0x48);
      (**(code **)(*plVar12 + 0x10))(plVar12);
      uVar3 = FUN_0150b350(lVar11);
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
  }
  FUN_00bd1cc0(uVar10,uVar9,uVar3,local_50._4_4_,local_50 & 0xffffffff);
LAB_00bb9dd8:
  FUN_00bd12d0(*(undefined8 *)(param_1 + 0x5f0),0,0);
  FUN_00bd12d0(*(undefined8 *)(param_1 + 0x5f0),3,0);
  if (*(int *)(param_1 + 0x618) == 2) {
    FUN_00bd3060(*(undefined8 *)(param_1 + 0x5f0),0);
    lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar11 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar11 == 0) {
      uVar3 = FUN_0150b350(0);
    }
    else {
      plVar12 = (long *)(lVar11 + 0x48);
      (**(code **)(*plVar12 + 0x10))(plVar12);
      uVar3 = FUN_0150b350(lVar11);
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    iVar8 = 0;
    do {
      lVar7 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),0,uVar3,iVar8);
      if (lVar7 != 0) {
        uVar9 = *(undefined8 *)(param_1 + 0x5f0);
        uVar5 = FUN_00bc8500(param_1,0,uVar3,iVar8);
        uVar4 = 0;
        if ((uVar5 & 1) == 0) {
          uVar4 = 2;
        }
        FUN_00bd3390(uVar9,0,iVar8,uVar4,0);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0x1e);
    uVar3 = *(undefined4 *)(param_1 + 0x614);
    lVar7 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,uVar3,0);
    if (lVar7 != 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x5f0);
      uVar5 = FUN_00bc8500(param_1,1,uVar3,0);
      uVar4 = 0;
      if ((uVar5 & 1) == 0) {
        uVar4 = 2;
      }
      FUN_00bd3390(uVar9,3,0,uVar4,0);
    }
    lVar7 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,uVar3,1);
    if (lVar7 != 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x5f0);
      uVar5 = FUN_00bc8500(param_1,1,uVar3,1);
      uVar4 = 0;
      if ((uVar5 & 1) == 0) {
        uVar4 = 2;
      }
      FUN_00bd3390(uVar9,3,1,uVar4,0);
    }
    lVar7 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,uVar3,2);
    if (lVar7 != 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x5f0);
      uVar5 = FUN_00bc8500(param_1,1,uVar3,2);
      uVar4 = 0;
      if ((uVar5 & 1) == 0) {
        uVar4 = 2;
      }
      FUN_00bd3390(uVar9,3,2,uVar4,0);
    }
    lVar7 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,uVar3,3);
    if (lVar7 != 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x5f0);
      uVar5 = FUN_00bc8500(param_1,1,uVar3,3);
      uVar4 = 0;
      if ((uVar5 & 1) == 0) {
        uVar4 = 2;
      }
      FUN_00bd3390(uVar9,3,3,uVar4,0);
    }
    lVar7 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,uVar3,4);
    if (lVar7 != 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x5f0);
      uVar5 = FUN_00bc8500(param_1,1,uVar3,4);
      uVar4 = 0;
      if ((uVar5 & 1) == 0) {
        uVar4 = 2;
      }
      FUN_00bd3390(uVar9,3,4,uVar4,0);
    }
    lVar7 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,uVar3,5);
    if (lVar7 != 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x5f0);
      uVar5 = FUN_00bc8500(param_1,1,uVar3,5);
      uVar3 = 0;
      if ((uVar5 & 1) == 0) {
        uVar3 = 2;
      }
      FUN_00bd3390(uVar9,3,5,uVar3,0);
    }
    FUN_00bb9a00(param_1,1);
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar11 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
  if (lVar11 == 0) {
    uVar3 = FUN_0150b350(0);
  }
  else {
    plVar12 = (long *)(lVar11 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    uVar3 = FUN_0150b350(lVar11);
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  iVar8 = 0;
  do {
    lVar7 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),0,uVar3,iVar8);
    if (lVar7 != 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x5f0);
      uVar4 = FUN_00bb8680(param_1,0,uVar3,iVar8);
      FUN_00bd34e0(uVar9,0,iVar8,uVar4);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0x1e);
  uVar3 = *(undefined4 *)(param_1 + 0x614);
  uVar9 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,uVar3,0);
  FUN_00bb7250(param_1,uVar9,0,0);
  FUN_00bd34e0(*(undefined8 *)(param_1 + 0x5f0),3,0,0);
  uVar9 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,uVar3,1);
  FUN_00bb7250(param_1,uVar9,1,0);
  FUN_00bd34e0(*(undefined8 *)(param_1 + 0x5f0),3,1,0);
  uVar9 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,uVar3,2);
  FUN_00bb7250(param_1,uVar9,2,0);
  FUN_00bd34e0(*(undefined8 *)(param_1 + 0x5f0),3,2,0);
  uVar9 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,uVar3,3);
  FUN_00bb7250(param_1,uVar9,3,0);
  FUN_00bd34e0(*(undefined8 *)(param_1 + 0x5f0),3,3,0);
  uVar9 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,uVar3,4);
  FUN_00bb7250(param_1,uVar9,4,0);
  FUN_00bd34e0(*(undefined8 *)(param_1 + 0x5f0),3,4,0);
  uVar9 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,uVar3,5);
  FUN_00bb7250(param_1,uVar9,5,0);
  FUN_00bd34e0(*(undefined8 *)(param_1 + 0x5f0),3,5,0);
  if (*(char *)(param_1 + 0x60c) != '\0') {
    FUN_00bb50c0(param_1,&local_48,0);
  }
  iVar8 = *(int *)(param_1 + 0x5cc);
  *(undefined1 *)(param_1 + 0x620) = 0;
  if (iVar8 == 0) {
    FUN_00bb5520(param_1,1);
    iVar8 = *(int *)(param_1 + 0x5cc);
  }
  switch(iVar8) {
  case 0:
    FUN_00bbba00(param_1,&local_48);
    break;
  case 1:
    FUN_00bbc160(param_1,&local_48);
    break;
  case 2:
  case 4:
    FUN_00bbc7e0(param_1,&local_48);
    break;
  default:
    FUN_00bbcd10(param_1,&local_48);
  }
  return 1;
}


