/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc1440; name: FUN_00bc1440
 */


void FUN_00bc1440(long param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 int param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [24];
  long local_60;
  undefined8 local_58;
  
  local_58 = 0;
  FUN_00bcfb40(param_2,param_4,(long)&local_58 + 4,&local_58);
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x5f0);
    uVar3 = FUN_00bc8500(param_1,param_2,param_3,param_4);
    uVar2 = 0;
    if ((uVar3 & 1) == 0) {
      uVar2 = 2;
    }
    if (param_2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 3;
    }
    FUN_00bd3390(uVar7,uVar5,param_4,uVar2,0);
  }
  puVar1 = (undefined8 *)(param_1 + 0x5f0);
  FUN_00bd17f0(*puVar1,param_2,param_3,local_58._4_4_,local_58 & 0xffffffff,param_5,param_6);
  if (*(int *)(param_1 + 0x618) == 2) {
    if (param_2 == 0) {
      iVar6 = 0;
      do {
        uVar3 = FUN_00bd1d20(*puVar1,0,param_3,iVar6);
        if (((uVar3 & 1) != 0) &&
           (lVar4 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),0,param_3,iVar6), lVar4 != 0
           )) {
          FUN_00bd13c0(*(undefined8 *)(param_1 + 0x5f0),lVar4,0,iVar6,0);
          uVar7 = *(undefined8 *)(param_1 + 0x5f0);
          uVar3 = FUN_00bc8500(param_1,0,param_3,iVar6);
          uVar2 = 0;
          if ((uVar3 & 1) == 0) {
            uVar2 = 2;
          }
          FUN_00bd3390(uVar7,0,iVar6,uVar2,1);
          uVar7 = *(undefined8 *)(param_1 + 0x5f0);
          uVar2 = FUN_00bb8680(param_1,0,param_3,iVar6);
          FUN_00bd34e0(uVar7,0,iVar6,uVar2);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0x1e);
    }
    else {
      uVar3 = FUN_00bd1d20(*puVar1,1,param_3,0);
      if (((uVar3 & 1) != 0) &&
         (lVar4 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,param_3,0), lVar4 != 0)) {
        FUN_00bd13c0(*(undefined8 *)(param_1 + 0x5f0),lVar4,3,0,0);
        uVar7 = *(undefined8 *)(param_1 + 0x5f0);
        uVar3 = FUN_00bc8500(param_1,1,param_3,0);
        uVar2 = 0;
        if ((uVar3 & 1) == 0) {
          uVar2 = 2;
        }
        FUN_00bd3390(uVar7,3,0,uVar2,1);
        FUN_00bd34e0(*(undefined8 *)(param_1 + 0x5f0),3,0,0);
      }
      uVar3 = FUN_00bd1d20(*puVar1,1,param_3,1);
      if (((uVar3 & 1) != 0) &&
         (lVar4 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,param_3,1), lVar4 != 0)) {
        FUN_00bd13c0(*(undefined8 *)(param_1 + 0x5f0),lVar4,3,1,0);
        uVar7 = *(undefined8 *)(param_1 + 0x5f0);
        uVar3 = FUN_00bc8500(param_1,1,param_3,1);
        uVar2 = 0;
        if ((uVar3 & 1) == 0) {
          uVar2 = 2;
        }
        FUN_00bd3390(uVar7,3,1,uVar2,1);
        FUN_00bd34e0(*(undefined8 *)(param_1 + 0x5f0),3,1,0);
      }
      uVar3 = FUN_00bd1d20(*puVar1,1,param_3,2);
      if (((uVar3 & 1) != 0) &&
         (lVar4 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,param_3,2), lVar4 != 0)) {
        FUN_00bd13c0(*(undefined8 *)(param_1 + 0x5f0),lVar4,3,2,0);
        uVar7 = *(undefined8 *)(param_1 + 0x5f0);
        uVar3 = FUN_00bc8500(param_1,1,param_3,2);
        uVar2 = 0;
        if ((uVar3 & 1) == 0) {
          uVar2 = 2;
        }
        FUN_00bd3390(uVar7,3,2,uVar2,1);
        FUN_00bd34e0(*(undefined8 *)(param_1 + 0x5f0),3,2,0);
      }
      uVar3 = FUN_00bd1d20(*puVar1,1,param_3,3);
      if (((uVar3 & 1) != 0) &&
         (lVar4 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,param_3,3), lVar4 != 0)) {
        FUN_00bd13c0(*(undefined8 *)(param_1 + 0x5f0),lVar4,3,3,0);
        uVar7 = *(undefined8 *)(param_1 + 0x5f0);
        uVar3 = FUN_00bc8500(param_1,1,param_3,3);
        uVar2 = 0;
        if ((uVar3 & 1) == 0) {
          uVar2 = 2;
        }
        FUN_00bd3390(uVar7,3,3,uVar2,1);
        FUN_00bd34e0(*(undefined8 *)(param_1 + 0x5f0),3,3,0);
      }
      uVar3 = FUN_00bd1d20(*puVar1,1,param_3,4);
      if (((uVar3 & 1) != 0) &&
         (lVar4 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,param_3,4), lVar4 != 0)) {
        FUN_00bd13c0(*(undefined8 *)(param_1 + 0x5f0),lVar4,3,4,0);
        uVar7 = *(undefined8 *)(param_1 + 0x5f0);
        uVar3 = FUN_00bc8500(param_1,1,param_3,4);
        uVar2 = 0;
        if ((uVar3 & 1) == 0) {
          uVar2 = 2;
        }
        FUN_00bd3390(uVar7,3,4,uVar2,1);
        FUN_00bd34e0(*(undefined8 *)(param_1 + 0x5f0),3,4,0);
      }
      uVar3 = FUN_00bd1d20(*puVar1,1,param_3,5);
      if (((uVar3 & 1) != 0) &&
         (lVar4 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,param_3,5), lVar4 != 0)) {
        FUN_00bd13c0(*(undefined8 *)(param_1 + 0x5f0),lVar4,3,5,0);
        uVar7 = *(undefined8 *)(param_1 + 0x5f0);
        uVar3 = FUN_00bc8500(param_1,1,param_3,5);
        uVar2 = 0;
        if ((uVar3 & 1) == 0) {
          uVar2 = 2;
        }
        FUN_00bd3390(uVar7,3,5,uVar2,1);
        FUN_00bd34e0(*(undefined8 *)(param_1 + 0x5f0),3,5,0);
      }
    }
  }
  else if (param_2 == 1) {
    for (; param_6 != 0; param_6 = param_6 + -1) {
      FUN_00bb7250(param_1,0,param_4,0);
      param_4 = param_4 + 1;
    }
  }
  FUN_00bd1dd0(*puVar1);
  FUN_006cf0a0(auStack_78,&DAT_02637c60);
  FUN_016d3620(auStack_78);
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
  }
  uVar2 = 4;
  if (*(int *)(param_1 + 0x61c) == 2) {
    uVar2 = 5;
  }
  *(undefined4 *)(param_1 + 0x608) = uVar2;
  return;
}


