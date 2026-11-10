/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eb3b90; name: FUN_00eb3b90
 */


void FUN_00eb3b90(long *param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined1 local_84;
  undefined1 local_83;
  uint local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  uint uStack_74;
  undefined4 local_70;
  uint local_6c;
  uint local_68;
  undefined4 local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  long local_50;
  long local_48;
  
  (**(code **)(*param_1 + 400))(param_1,PTR_DAT_0271e868,param_2);
  (**(code **)(*param_1 + 0x1a8))(param_1,PTR_DAT_02720200,0);
  if (param_2 - 1U < 2) {
    (**(code **)(*param_1 + 400))(param_1,PTR_DAT_0271e888,0);
    (**(code **)(*param_1 + 400))(param_1,PTR_DAT_0271e898,0);
    if (param_1[0x121] != 0) {
      *(undefined1 *)(param_1[0x121] + 0x1a0) = 0;
    }
    plVar1 = (long *)param_1[0x3d];
    plVar2 = (long *)param_1[0x3e];
    *(undefined1 *)((long)param_1 + 0x914) = 0;
    puVar4 = PTR_DAT_0271eda0;
    puVar3 = PTR_DAT_0271ed98;
    for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
      plVar7 = (long *)(*(code *)**(undefined8 **)(*plVar1 + 0x50))();
      if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
        uVar6 = FUN_01592f20();
        *(undefined8 *)puVar4 = uVar6;
        __cxa_guard_release(puVar3);
      }
      for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        if (plVar7 == (long *)puVar4) {
          return;
        }
      }
    }
    local_85 = 0;
    local_6c = (uint)*(byte *)((long)param_1 + 0xbda);
    local_68 = (uint)*(byte *)((long)param_1 + 0xbdb);
    local_64 = 0xd;
    uStack_74 = (uint)*(byte *)((long)param_1 + 0xbd1);
    local_78 = 0;
    local_88 = (undefined1)param_1[0x176];
    local_87 = *(undefined1 *)((long)param_1 + 0xbb1);
    local_86 = *(undefined1 *)((long)param_1 + 0xbb2);
    local_84 = (undefined1)param_1[0x178];
    local_83 = 0;
    local_80 = (uint)*(byte *)(param_1 + 0x17a);
    uStack_7c = 0;
    local_70 = 1;
    local_50 = param_1[0x179];
    local_48 = param_1[0x177];
    local_60 = (uint)*(byte *)(param_1 + 0x17b);
    local_5c = (uint)*(byte *)((long)param_1 + 0xbd9);
    local_58 = (uint)*(byte *)((long)param_1 + 0xbdc);
    if (param_1[0x3b] == 0) {
      FUN_00df0aa0(0);
    }
    else {
      FUN_00e70350(param_1 + 0x3c,param_1[0x3b],param_1,&local_88);
      FUN_00df0aa0();
    }
  }
  else if (param_2 == 3) {
    (**(code **)(*param_1 + 400))(param_1,PTR_DAT_0271e888,1);
    (**(code **)(*param_1 + 400))(param_1,PTR_DAT_0271e898,*(undefined4 *)((long)param_1 + 0xac4));
    if (param_1[0x121] != 0) {
      *(undefined1 *)(param_1[0x121] + 0x1a0) = 1;
    }
    plVar1 = (long *)param_1[0x3d];
    plVar2 = (long *)param_1[0x3e];
    *(undefined1 *)((long)param_1 + 0x914) = 1;
    puVar4 = PTR_DAT_0271eda0;
    puVar3 = PTR_DAT_0271ed98;
    for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
      lVar8 = *plVar1;
      puVar9 = (undefined8 *)(lVar8 + 0x50);
      plVar7 = (long *)(**(code **)*puVar9)(puVar9);
      if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
        uVar6 = FUN_01592f20();
        *(undefined8 *)puVar4 = uVar6;
        __cxa_guard_release(puVar3);
      }
      for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        if (plVar7 == (long *)puVar4) {
          *(undefined1 *)(lVar8 + 0x69) = 1;
          return;
        }
      }
    }
  }
  return;
}


