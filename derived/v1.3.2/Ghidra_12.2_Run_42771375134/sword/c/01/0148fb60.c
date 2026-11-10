/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0148fb60; name: FUN_0148fb60
 */


void FUN_0148fb60(long param_1,undefined8 param_2,ulong param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  uVar5 = FUN_01485a70(*(undefined8 *)(param_1 + 0x5d8));
  FUN_00ff86a0(&local_68,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),4);
  lVar7 = *(long *)(local_68 + 0x60);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  uVar1 = FUN_00878e20(uVar5,7);
  lVar10 = *(long *)(param_1 + 0x2b0);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(lVar10 + 0x2e0);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  uVar2 = FUN_00878e20(uVar5,4);
  FUN_014ca220(lVar8,0,uVar2 % 100,2,2,1);
  uVar3 = FUN_00878e20(uVar5,5);
  FUN_014ca220(lVar8,1,uVar3,2,2,1);
  uVar3 = FUN_00878e20(uVar5,6);
  FUN_014ca220(lVar8,2,uVar3,2,2,1);
  uVar3 = FUN_00878e20(uVar5,9);
  FUN_014ca220(lVar8,3,uVar3,3,0,1);
  local_70 = lVar8;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  FUN_014b2f90(&local_70,4,uVar1);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  uVar2 = FUN_00878e20(uVar5,0);
  FUN_014ca220(lVar8,5,uVar2 % 100,2,2,1);
  uVar3 = FUN_00878e20(uVar5,1);
  FUN_014ca220(lVar8,6,uVar3,2,2,1);
  uVar3 = FUN_00878e20(uVar5,2);
  FUN_014ca220(lVar8,7,uVar3,2,2,1);
  uVar2 = FUN_00878a60(uVar5);
  iVar4 = FUN_00878e20(uVar5,7);
  uVar6 = FUN_0087eb30(uVar5);
  if ((iVar4 != 0x7542) || ((uVar6 & 1) != 0)) {
    iVar4 = FUN_00878e20(uVar5,7);
    uVar6 = FUN_0087eb30(uVar5);
    if (((uVar6 & 1) == 0) || (iVar4 != 0x7542)) {
      if ((uVar2 < 0x2c) || (uVar6 = FUN_014b3320(uVar2), (uVar6 & 1) != 0)) {
        FUN_014b3080(&local_68,uVar2,*(undefined8 *)(param_1 + 8));
        FUN_014c7a10(lVar8,8,local_68,0,0);
        if (local_68 != 0) {
          (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
          local_68 = 0;
        }
      }
      else {
        uVar1 = FUN_00878e20(uVar5,3);
        local_80 = lVar8;
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
        }
        FUN_014b2f90(&local_80,8,uVar1);
        if (local_80 != 0) {
          (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
          local_80 = 0;
        }
      }
      goto LAB_0148fee8;
    }
  }
  local_78 = lVar8;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  FUN_014b2f90(&local_78,8,uVar1);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
LAB_0148fee8:
  uVar5 = *(undefined8 *)(&DAT_0216f2a8 + (param_3 & 0xffffffff) * 8);
  local_88 = lVar7;
  if (lVar7 == 0) {
    FUN_0148f880(param_1,uVar5,param_2,&local_88);
  }
  else {
    plVar9 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    FUN_0148f880(param_1,uVar5,param_2,&local_88);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    local_88 = 0;
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  return;
}


