/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bf08e0; name: FUN_00bf08e0
 */


void FUN_00bf08e0(long param_1,int param_2,undefined1 param_3,undefined1 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_58;
  
  local_58 = 0x60a814fdfea571;
  FUN_0167ba30(*(undefined8 *)(param_1 + 0x5f8),&local_58);
  FUN_0167bdb0(0x3f800000,*(undefined8 *)(param_1 + 0x5f8),&local_58);
  if (param_2 != 2) {
    if (param_2 == 1) {
      uVar1 = *(undefined8 *)(param_1 + 0x5e0);
      local_58 = 0xcfad5b7f00d74a4a;
      lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
      if (lVar3 == 0) {
        FUN_0077eb10(uVar1,&local_58,0);
        lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e0);
        if (lVar3 != 0) goto LAB_00bf0d00;
LAB_00bf1098:
        FUN_014ca220(0,0,param_4,2,0,1);
        lVar3 = *(long *)(param_1 + 0x5f8);
        lVar2 = *(long *)(lVar3 + 0x2e0);
      }
      else {
        plVar5 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar5 + 0x10))(plVar5);
        FUN_0077eb10(uVar1,&local_58,lVar3);
        (**(code **)(*plVar5 + 0x18))(plVar5);
        lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e0);
        if (lVar3 == 0) goto LAB_00bf1098;
LAB_00bf0d00:
        plVar5 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar5 + 0x10))(plVar5);
        FUN_014ca220(lVar3,0,param_4,2,0,1);
        (**(code **)(*plVar5 + 0x18))(plVar5);
        lVar3 = *(long *)(param_1 + 0x5f8);
        lVar2 = *(long *)(lVar3 + 0x2e0);
      }
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
        lVar3 = *(long *)(param_1 + 0x5f8);
      }
      lVar4 = *(long *)(lVar3 + 0x2f0);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        lVar3 = *(long *)(param_1 + 0x5f8);
      }
      lVar3 = *(long *)(lVar3 + 0x2e8);
      plVar5 = (long *)(lVar3 + 0x48);
      if (lVar3 != 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
      FUN_014c62d0(lVar2,lVar4,lVar3);
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(plVar5);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
      }
      lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2f0);
      param_8 = param_6;
      if (lVar3 == 0) {
        uVar1 = FUN_0077d470(0);
        goto LAB_00bf1140;
      }
      plVar5 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      uVar1 = FUN_0077d470(lVar3);
      goto LAB_00bf1064;
    }
    if (param_2 != 0) {
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x5e0);
    local_58 = 0xcfad5c7f00d74bfd;
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    if (lVar3 == 0) {
      FUN_0077eb10(uVar1,&local_58,0);
      lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e0);
      if (lVar3 != 0) goto LAB_00bf09c4;
LAB_00bf0e3c:
      FUN_014ca220(0,0,param_3,2,0,1);
      lVar3 = *(long *)(param_1 + 0x5f8);
      lVar2 = *(long *)(lVar3 + 0x2e0);
    }
    else {
      plVar5 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_0077eb10(uVar1,&local_58,lVar3);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e0);
      if (lVar3 == 0) goto LAB_00bf0e3c;
LAB_00bf09c4:
      plVar5 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_014ca220(lVar3,0,param_3,2,0,1);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      lVar3 = *(long *)(param_1 + 0x5f8);
      lVar2 = *(long *)(lVar3 + 0x2e0);
    }
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      lVar3 = *(long *)(param_1 + 0x5f8);
    }
    lVar4 = *(long *)(lVar3 + 0x2f0);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      lVar3 = *(long *)(param_1 + 0x5f8);
    }
    lVar3 = *(long *)(lVar3 + 0x2e8);
    plVar5 = (long *)(lVar3 + 0x48);
    if (lVar3 != 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    FUN_014c62d0(lVar2,lVar4,lVar3);
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(plVar5);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2f0);
    param_8 = param_5;
    if (lVar3 == 0) {
      uVar1 = FUN_0077d470(0);
      goto LAB_00bf1140;
    }
    plVar5 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar1 = FUN_0077d470(lVar3);
    goto LAB_00bf1064;
  }
  local_58 = 0x60a814fdfea571;
  FUN_0167ba30(*(undefined8 *)(param_1 + 0x5f8),&local_58);
  FUN_0167bdb0(0,*(undefined8 *)(param_1 + 0x5f8),&local_58);
  uVar1 = *(undefined8 *)(param_1 + 0x5e0);
  local_58 = 0xcfad5c7f00d74bfd;
  lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar3 == 0) {
    FUN_0077eb10(uVar1,&local_58,0);
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e0);
    if (lVar3 != 0) goto LAB_00bf0b68;
LAB_00bf0ea0:
    FUN_014ca220(0,0,param_3,2,0,1);
    lVar3 = *(long *)(param_1 + 0x5f8);
    lVar2 = *(long *)(lVar3 + 0x2e0);
  }
  else {
    plVar5 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0077eb10(uVar1,&local_58,lVar3);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e0);
    if (lVar3 == 0) goto LAB_00bf0ea0;
LAB_00bf0b68:
    plVar5 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_014ca220(lVar3,0,param_3,2,0,1);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar3 = *(long *)(param_1 + 0x5f8);
    lVar2 = *(long *)(lVar3 + 0x2e0);
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    lVar3 = *(long *)(param_1 + 0x5f8);
  }
  lVar4 = *(long *)(lVar3 + 0x2f0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    lVar3 = *(long *)(param_1 + 0x5f8);
  }
  lVar3 = *(long *)(lVar3 + 0x2e8);
  plVar5 = (long *)(lVar3 + 0x48);
  if (lVar3 != 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  FUN_014c62d0(lVar2,lVar4,lVar3);
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(plVar5);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2f0);
  if (lVar3 == 0) {
    uVar1 = FUN_0077d470(0);
    FUN_00ffd6a0(param_1 + 0x100,param_7,uVar1,10);
  }
  else {
    plVar5 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar1 = FUN_0077d470(lVar3);
    FUN_00ffd6a0(param_1 + 0x100,param_7,uVar1,10);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x5e0);
  local_58 = 0xcfad5b7f00d74a4a;
  lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar3 == 0) {
    FUN_0077eb10(uVar1,&local_58,0);
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e0);
    if (lVar3 != 0) goto LAB_00bf0f4c;
LAB_00bf10fc:
    FUN_014ca220(0,0,param_4,2,0,1);
    lVar3 = *(long *)(param_1 + 0x5f8);
    lVar2 = *(long *)(lVar3 + 0x2e0);
  }
  else {
    plVar5 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0077eb10(uVar1,&local_58,lVar3);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e0);
    if (lVar3 == 0) goto LAB_00bf10fc;
LAB_00bf0f4c:
    plVar5 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_014ca220(lVar3,0,param_4,2,0,1);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar3 = *(long *)(param_1 + 0x5f8);
    lVar2 = *(long *)(lVar3 + 0x2e0);
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    lVar3 = *(long *)(param_1 + 0x5f8);
  }
  lVar4 = *(long *)(lVar3 + 0x2f0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    lVar3 = *(long *)(param_1 + 0x5f8);
  }
  lVar3 = *(long *)(lVar3 + 0x2e8);
  plVar5 = (long *)(lVar3 + 0x48);
  if (lVar3 != 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  FUN_014c62d0(lVar2,lVar4,lVar3);
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(plVar5);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2f0);
  if (lVar3 == 0) {
    uVar1 = FUN_0077d470(0);
LAB_00bf1140:
    FUN_00ffd6a0(param_1 + 0x100,param_8,uVar1,10);
    return;
  }
  plVar5 = (long *)(lVar3 + 0x48);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  uVar1 = FUN_0077d470(lVar3);
LAB_00bf1064:
  FUN_00ffd6a0(param_1 + 0x100,param_8,uVar1,10);
  (**(code **)(*plVar5 + 0x18))(plVar5);
  return;
}


