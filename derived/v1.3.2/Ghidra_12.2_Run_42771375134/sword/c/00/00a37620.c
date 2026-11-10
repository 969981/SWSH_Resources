/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a37620; name: FUN_00a37620
 */


void FUN_00a37620(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 local_40;
  long local_38;
  
  lVar6 = *param_2;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(param_1 + 0x5d8);
  *(long *)(param_1 + 0x5d8) = lVar6;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    lVar6 = *(long *)(param_1 + 0x5d8);
  }
  *(long *)(param_1 + 0x5e0) = param_2[1];
  uVar8 = *(undefined8 *)(param_1 + 0x5e0);
  lVar4 = param_2[2];
  lVar2 = param_2[3];
  lVar1 = param_2[4];
  *(long *)(param_1 + 0x600) = param_2[5];
  *(long *)(param_1 + 0x5f8) = lVar1;
  *(long *)(param_1 + 0x5f0) = lVar2;
  *(long *)(param_1 + 0x5e8) = lVar4;
  lVar4 = param_2[6];
  lVar1 = param_2[7];
  lVar5 = param_2[8];
  lVar2 = param_2[9];
  uVar7 = *(undefined8 *)(param_1 + 0x680);
  *(undefined1 *)(param_1 + 0x67c) = 0;
  *(undefined4 *)(param_1 + 0x628) = 0;
  *(int *)(param_1 + 0x620) = (int)lVar2;
  *(long *)(param_1 + 0x618) = lVar5;
  *(long *)(param_1 + 0x610) = lVar1;
  *(long *)(param_1 + 0x608) = lVar4;
  local_38 = lVar6;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))((long *)(lVar6 + 0x48));
  }
  uVar3 = FUN_00a38e20(uVar7,uVar8,&local_38,*(undefined4 *)(param_1 + 0x5e8),
                       *(undefined4 *)(param_1 + 0x5ec),*(undefined4 *)(param_1 + 0x5f0),
                       *(undefined4 *)(param_1 + 0x5f4),*(undefined1 *)(param_1 + 0x61d));
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  local_40 = 1;
  FUN_016b81d0(*(undefined8 *)(param_1 + 0x640),&local_40,uVar3 & 1);
  local_40 = 1;
  FUN_016b81d0(*(undefined8 *)(param_1 + 0x648),&local_40,uVar3 & 1);
  lVar6 = *(long *)(param_1 + 0x680);
  uVar7 = *(undefined8 *)(param_1 + 0x5e0);
  local_38 = *(long *)(param_1 + 0x5d8);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  uVar3 = FUN_00a38e20(lVar6 + 0x178,uVar7,&local_38,*(undefined4 *)(param_1 + 0x5e8),
                       *(undefined4 *)(param_1 + 0x5f8),*(undefined4 *)(param_1 + 0x5fc),
                       *(undefined4 *)(param_1 + 0x600),*(undefined1 *)(param_1 + 0x61d));
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  local_40 = 0x100000001;
  FUN_016b81d0(*(undefined8 *)(param_1 + 0x640),&local_40,uVar3 & 1);
  local_40 = 0x100000001;
  FUN_016b81d0(*(undefined8 *)(param_1 + 0x648),&local_40,uVar3 & 1);
  lVar6 = *(long *)(param_1 + 0x680);
  uVar7 = *(undefined8 *)(param_1 + 0x5e0);
  local_38 = *(long *)(param_1 + 0x5d8);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  uVar3 = FUN_00a38e20(lVar6 + 0x2f0,uVar7,&local_38,*(undefined4 *)(param_1 + 0x5e8),
                       *(undefined4 *)(param_1 + 0x604),*(undefined4 *)(param_1 + 0x608),
                       *(undefined4 *)(param_1 + 0x60c),*(undefined1 *)(param_1 + 0x61d));
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  local_40 = 0x200000001;
  FUN_016b81d0(*(undefined8 *)(param_1 + 0x640),&local_40,uVar3 & 1);
  local_40 = 0x200000001;
  FUN_016b81d0(*(undefined8 *)(param_1 + 0x648),&local_40,uVar3 & 1);
  lVar6 = *(long *)(param_1 + 0x680);
  uVar7 = *(undefined8 *)(param_1 + 0x5e0);
  local_38 = *(long *)(param_1 + 0x5d8);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  uVar3 = FUN_00a38e20(lVar6 + 0x468,uVar7,&local_38,*(undefined4 *)(param_1 + 0x5e8),
                       *(undefined4 *)(param_1 + 0x610),*(undefined4 *)(param_1 + 0x614),
                       *(undefined4 *)(param_1 + 0x618),*(undefined1 *)(param_1 + 0x61d));
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  local_40 = 0x300000001;
  FUN_016b81d0(*(undefined8 *)(param_1 + 0x640),&local_40,uVar3 & 1);
  local_40 = 0x300000001;
  FUN_016b81d0(*(undefined8 *)(param_1 + 0x648),&local_40,uVar3 & 1);
  FUN_019a65b0(*(undefined8 *)(param_1 + 0x668));
  FUN_019a65b0(*(undefined8 *)(param_1 + 0x670));
  uVar9 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x620));
  FUN_00ffd510(uVar9,param_1 + 0x100,&DAT_0262dd10);
  FUN_00a37980(param_1,*(undefined1 *)(param_1 + 0x61c),*(undefined4 *)(param_1 + 0x620));
  FUN_00a37a70(param_1,*(undefined1 *)(param_1 + 0x61d));
  FUN_010364c0(param_1,2);
  FUN_00a1fd10(7);
  return;
}


