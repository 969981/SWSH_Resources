/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003de960; name: FUN_003de960
 */


void FUN_003de960(long param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_34;
  
  if ((param_2 & 1) == 0) {
    FUN_003cc480(*(undefined8 *)(param_1 + 0x1048),1);
  }
  else {
    FUN_003ded10(param_1,1);
    lVar1 = *(long *)(param_1 + 0x1048);
    *(undefined4 *)(lVar1 + 0x48) = 0;
    *(undefined4 *)(lVar1 + 0x54) = 0xffffffff;
    FUN_003cc480(lVar1,1);
    FUN_003deec0(param_1);
  }
  FUN_003dcd50(param_1);
  lVar1 = *(long *)(param_1 + 0x1048);
  *(undefined4 *)(lVar1 + 0x54) = 0xffffffff;
  iVar4 = *(int *)(lVar1 + 0x50);
  *(undefined4 *)(lVar1 + 0x48) = 0;
  if (*(int *)(lVar1 + 0x4c) != iVar4) {
    lVar6 = *(long *)(lVar1 + 0x40);
    if (lVar6 != 0) {
      plVar2 = (long *)FUN_00400d30();
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar6);
      iVar4 = *(int *)(lVar1 + 0x50);
    }
    if (iVar4 == 0) {
      uVar3 = 0;
      uVar5 = 0;
    }
    else {
      plVar2 = (long *)FUN_00400d30();
      uVar3 = (**(code **)(*plVar2 + 0x10))
                        (plVar2,iVar4,"NonTrackedAlloc",
                         "./../../SimulationController/src/ScContactReportBuffer.h",0xa7);
      uVar5 = *(undefined4 *)(lVar1 + 0x50);
    }
    *(undefined8 *)(lVar1 + 0x40) = uVar3;
    *(undefined4 *)(lVar1 + 0x4c) = uVar5;
  }
  local_34 = 0;
  FUN_003f3240(param_1 + 0x848,0,&local_58);
  FUN_003f32e0(param_1 + 0x848,*(undefined4 *)(param_1 + 0x850));
  lVar1 = *(long *)(param_1 + 0x858);
  local_58 = 0xffffffffffffffff;
  local_50 = CONCAT44(local_50._4_4_,0xffff);
  FUN_003f3400(lVar1,0,&local_58);
  FUN_003f3490(lVar1,*(undefined4 *)(lVar1 + 8));
  *(undefined4 *)(param_1 + 0x960) = 0;
  local_58._0_4_ = 0;
  local_58._4_4_ = 0;
  FUN_003f3590(param_1 + 0x958,0,&local_58);
  FUN_003f3670(param_1 + 0x958,*(undefined4 *)(param_1 + 0x960));
  FUN_003df520(param_1);
  FUN_003f37d0(param_1 + 0x10f0,*(undefined4 *)(param_1 + 0x10f8));
  lVar1 = *(long *)(param_1 + 0x1118);
  if (*(int *)(lVar1 + 0x38) != 0) {
    uVar7 = 0;
    do {
      while( true ) {
        while (local_58._0_4_ = *(int *)(*(long *)(lVar1 + 0x30) + uVar7 * 4),
              *(int *)(lVar1 + 8) + -1 == (int)local_58) {
          *(int *)(lVar1 + 8) = (int)local_58;
          uVar7 = uVar7 + 1;
          if (*(uint *)(lVar1 + 0x38) <= uVar7) goto LAB_003deb70;
        }
        if ((*(uint *)(lVar1 + 0x1c) & 0x7fffffff) <= *(uint *)(lVar1 + 0x18)) break;
        *(int *)(*(long *)(lVar1 + 0x10) + (ulong)*(uint *)(lVar1 + 0x18) * 4) = (int)local_58;
        *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
        uVar7 = uVar7 + 1;
        if (*(uint *)(lVar1 + 0x38) <= uVar7) goto LAB_003deb70;
      }
      FUN_001b4230(lVar1 + 0x10,&local_58);
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(lVar1 + 0x38));
  }
LAB_003deb70:
  *(undefined4 *)(lVar1 + 0x38) = 0;
  local_58._0_4_ = 0;
  FUN_001ed3f0(lVar1 + 0x30,0,&local_58);
  FUN_001ed4d0(lVar1 + 0x30,*(undefined4 *)(lVar1 + 0x38));
  lVar1 = *(long *)(param_1 + 0x1120);
  if (*(int *)(lVar1 + 0x38) != 0) {
    uVar7 = 0;
    do {
      while( true ) {
        while (local_58._0_4_ = *(int *)(*(long *)(lVar1 + 0x30) + uVar7 * 4),
              *(int *)(lVar1 + 8) + -1 == (int)local_58) {
          *(int *)(lVar1 + 8) = (int)local_58;
          uVar7 = uVar7 + 1;
          if (*(uint *)(lVar1 + 0x38) <= uVar7) goto LAB_003dec34;
        }
        if ((*(uint *)(lVar1 + 0x1c) & 0x7fffffff) <= *(uint *)(lVar1 + 0x18)) break;
        *(int *)(*(long *)(lVar1 + 0x10) + (ulong)*(uint *)(lVar1 + 0x18) * 4) = (int)local_58;
        *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
        uVar7 = uVar7 + 1;
        if (*(uint *)(lVar1 + 0x38) <= uVar7) goto LAB_003dec34;
      }
      FUN_001b4230(lVar1 + 0x10,&local_58);
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(lVar1 + 0x38));
  }
LAB_003dec34:
  *(undefined4 *)(lVar1 + 0x38) = 0;
  local_58 = (ulong)local_58._4_4_ << 0x20;
  FUN_001ed3f0(lVar1 + 0x30,0,&local_58);
  FUN_001ed4d0(lVar1 + 0x30,*(undefined4 *)(lVar1 + 0x38));
  FUN_003df7d0(param_1);
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  FUN_003f3930(param_1 + 0x1178,0,&local_58);
  FUN_003f39c0(param_1 + 0x1178,*(undefined4 *)(param_1 + 0x1180));
  FUN_003f23c0(param_1 + 0x20,*(undefined4 *)(param_1 + 0x28));
  FUN_00114c10(param_1 + 0x38,*(undefined4 *)(param_1 + 0x40));
  FUN_00114c10(param_1 + 0x48,*(undefined4 *)(param_1 + 0x50));
  FUN_00114c10(param_1 + 0x58,*(undefined4 *)(param_1 + 0x60));
  local_58 = 0;
  FUN_003f3ad0(param_1 + 0x8e0,0,&local_58);
  FUN_003f2f50(param_1 + 0x8e0,*(undefined4 *)(param_1 + 0x8e8));
  FUN_001112a0(*(long *)(param_1 + 0x720) + 0x28);
  return;
}


