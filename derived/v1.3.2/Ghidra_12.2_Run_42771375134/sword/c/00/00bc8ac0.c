/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc8ac0; name: FUN_00bc8ac0
 */


undefined8 FUN_00bc8ac0(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  undefined8 local_48;
  
  uVar3 = FUN_00bd2070(*(undefined8 *)(param_1 + 0x5f0));
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    FUN_00bd3060(*(undefined8 *)(param_1 + 0x5f0),1);
    lVar6 = *(long *)(param_1 + 0x2b0);
    if (lVar6 == 0) {
      local_48 = 0x7d770a88fd7fc017;
      FUN_0167b9b0(0,&local_48,0);
    }
    else {
      plVar8 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      local_48 = 0x7d770a88fd7fc017;
      FUN_0167b9b0(lVar6,&local_48,0);
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    FUN_00bd3060(*(undefined8 *)(param_1 + 0x5f0),0);
    uVar4 = FUN_00bb48a0(param_1);
    local_48 = FUN_016b8190();
    uVar4 = FUN_016b7950(uVar4,&local_48);
    uVar1 = FUN_00bb5fc0(uVar4,uVar4);
    lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
    iVar9 = 0;
    do {
      lVar6 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),0,uVar1,iVar9);
      FUN_00bd13c0(*(undefined8 *)(param_1 + 0x5f0),lVar6,0,iVar9,1);
      if (lVar6 != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x5f0);
        uVar3 = FUN_00bc8500(param_1,0,uVar1,iVar9);
        uVar2 = 0;
        if ((uVar3 & 1) == 0) {
          uVar2 = 2;
        }
        FUN_00bd3390(uVar4,0,iVar9,uVar2,0);
        uVar4 = *(undefined8 *)(param_1 + 0x5f0);
        uVar2 = FUN_00bb8680(param_1,0,uVar1,iVar9);
        FUN_00bd34e0(uVar4,0,iVar9,uVar2);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x1e);
    FUN_00bc6b50(param_1,uVar1);
    piVar5 = (int *)FUN_00bd2120(*(undefined8 *)(param_1 + 0x5f0));
    if (*piVar5 == 1) {
      lVar6 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,0,0);
      FUN_00bd13c0(*(undefined8 *)(param_1 + 0x5f0),lVar6,3,0,0);
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x5f0);
        uVar3 = FUN_00bc8500(param_1,1,0,0);
        uVar1 = 0;
        if ((uVar3 & 1) == 0) {
          uVar1 = 2;
        }
        FUN_00bd3390(uVar4,3,0,uVar1,0);
        FUN_00bd34e0(*(undefined8 *)(param_1 + 0x5f0),3,0,0);
      }
      FUN_00bb7250(param_1,lVar6,0,0);
      lVar6 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,0,1);
      FUN_00bd13c0(*(undefined8 *)(param_1 + 0x5f0),lVar6,3,1,0);
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x5f0);
        uVar3 = FUN_00bc8500(param_1,1,0,1);
        uVar1 = 0;
        if ((uVar3 & 1) == 0) {
          uVar1 = 2;
        }
        FUN_00bd3390(uVar4,3,1,uVar1,0);
        FUN_00bd34e0(*(undefined8 *)(param_1 + 0x5f0),3,1,0);
      }
      FUN_00bb7250(param_1,lVar6,1,0);
      lVar6 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,0,2);
      FUN_00bd13c0(*(undefined8 *)(param_1 + 0x5f0),lVar6,3,2,0);
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x5f0);
        uVar3 = FUN_00bc8500(param_1,1,0,2);
        uVar1 = 0;
        if ((uVar3 & 1) == 0) {
          uVar1 = 2;
        }
        FUN_00bd3390(uVar4,3,2,uVar1,0);
        FUN_00bd34e0(*(undefined8 *)(param_1 + 0x5f0),3,2,0);
      }
      FUN_00bb7250(param_1,lVar6,2,0);
      lVar6 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,0,3);
      FUN_00bd13c0(*(undefined8 *)(param_1 + 0x5f0),lVar6,3,3,0);
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x5f0);
        uVar3 = FUN_00bc8500(param_1,1,0,3);
        uVar1 = 0;
        if ((uVar3 & 1) == 0) {
          uVar1 = 2;
        }
        FUN_00bd3390(uVar4,3,3,uVar1,0);
        FUN_00bd34e0(*(undefined8 *)(param_1 + 0x5f0),3,3,0);
      }
      FUN_00bb7250(param_1,lVar6,3,0);
      lVar6 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,0,4);
      FUN_00bd13c0(*(undefined8 *)(param_1 + 0x5f0),lVar6,3,4,0);
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x5f0);
        uVar3 = FUN_00bc8500(param_1,1,0,4);
        uVar1 = 0;
        if ((uVar3 & 1) == 0) {
          uVar1 = 2;
        }
        FUN_00bd3390(uVar4,3,4,uVar1,0);
        FUN_00bd34e0(*(undefined8 *)(param_1 + 0x5f0),3,4,0);
      }
      FUN_00bb7250(param_1,lVar6,4,0);
      lVar6 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,0,5);
      FUN_00bd13c0(*(undefined8 *)(param_1 + 0x5f0),lVar6,3,5,0);
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x5f0);
        uVar3 = FUN_00bc8500(param_1,1,0,5);
        uVar1 = 0;
        if ((uVar3 & 1) == 0) {
          uVar1 = 2;
        }
        FUN_00bd3390(uVar4,3,5,uVar1,0);
        FUN_00bd34e0(*(undefined8 *)(param_1 + 0x5f0),3,5,0);
      }
      FUN_00bb7250(param_1,lVar6,5,0);
      iVar9 = *(int *)(param_1 + 0x5cc);
      *(undefined1 *)(param_1 + 0x620) = 0;
    }
    else {
      FUN_00bc6b50(param_1,(char)piVar5[1]);
      iVar9 = *(int *)(param_1 + 0x5cc);
      *(undefined1 *)(param_1 + 0x620) = 0;
    }
    if (iVar9 == 0) {
      FUN_00bb5520(param_1,1);
    }
    FUN_00bd1d10(*(undefined8 *)(param_1 + 0x5f0));
    local_48 = 0x24b1606b667538d3;
    uVar4 = FUN_00ffdef0(param_1 + 0x100,&local_48);
    FUN_016b2da0(uVar4,0);
    uVar4 = 1;
    FUN_00bb4b40(param_1,1);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
      uVar4 = 1;
    }
  }
  return uVar4;
}


