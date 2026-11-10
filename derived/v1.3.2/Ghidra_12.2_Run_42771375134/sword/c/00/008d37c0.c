/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d37c0; name: FUN_008d37c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008d37c0(undefined1 param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long local_48;
  
  *(undefined1 *)(*(long *)PTR_DAT_02710828 + 0x50) = param_1;
  uVar2 = 2;
  switch(param_1) {
  case 1:
    uVar2 = param_3 & 1;
    break;
  case 3:
    uVar2 = 3;
    break;
  case 4:
    uVar2 = 4;
    break;
  case 5:
    uVar2 = 5;
    break;
  case 7:
    uVar2 = 6;
    break;
  case 8:
    uVar2 = 7;
    break;
  case 9:
    uVar2 = 8;
    break;
  case 10:
    uVar2 = 9;
  }
  FUN_014bfd10(uVar2);
  puVar1 = PTR_DAT_02710890;
  FUN_014ccb40(*(undefined8 *)PTR_DAT_02710890);
  FUN_008d2fc0(*(undefined8 *)PTR_DAT_02710830);
  FUN_014ca390(*(undefined8 *)puVar1,*(undefined8 *)(*(long *)PTR_DAT_02710540 + 8));
  if (*(long *)PTR_DAT_02710898 != 0) {
    FUN_014bb1e0(*(long *)PTR_DAT_02710898,*(undefined1 *)(*(long *)PTR_DAT_02710828 + 0x50));
  }
  puVar1 = PTR_DAT_02710848;
  lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0xb8);
  if (lVar8 != 0) {
    plVar5 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar7 = *(long *)(lVar8 + 0x1c0);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar8 = *(long *)(lVar8 + 0x1e0);
    if (lVar8 == 0) {
      FUN_00e821e0();
    }
    else {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      if (lVar7 != 0) {
        FUN_015abd90(lVar8);
        FUN_015aa6c0(lVar7);
        FUN_00f2fbd0();
        FUN_015abca0(lVar8,1);
        FUN_015aa750(lVar7);
        FUN_00f2fb60();
        uVar4 = FUN_015abc00(lVar8);
        while ((uVar4 & 1) == 0) {
          nn::os::SleepThread(&LAB_00f42400);
          uVar4 = FUN_015abc00(lVar8);
        }
        lVar9 = *(long *)(lVar8 + 0xb8);
        if (lVar9 == 0) {
          FUN_014bc870(0);
        }
        else {
          plVar10 = (long *)(lVar9 + 0x48);
          (**(code **)(*plVar10 + 0x10))(plVar10);
          FUN_014bc870(lVar9);
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
      }
      FUN_00e821e0();
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  lVar8 = *(long *)(*(long *)puVar1 + 0x90);
  if (lVar8 == 0) {
    FUN_01027bf0(_DAT_00000790);
    lVar8 = *(long *)(*(long *)puVar1 + 0x90);
  }
  else {
    plVar5 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_01027bf0(*(undefined8 *)(lVar8 + 0x790));
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar8 = *(long *)(*(long *)puVar1 + 0x90);
  }
  if (lVar8 == 0) {
    lVar8 = _DAT_00000060;
  }
  else {
    plVar5 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar8 = *(long *)(lVar8 + 0x60);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0x610);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    lVar7 = *(long *)(lVar8 + 0x120);
    if (lVar7 == 0) {
      FUN_00fa9fb0(0);
    }
    else {
      plVar5 = (long *)(lVar7 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_00fa9fb0(lVar7);
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  FUN_00d94090(&local_48,*(undefined8 *)PTR_DAT_02710868,3);
  lVar8 = local_48;
  plVar5 = (long *)(*(code *)**(undefined8 **)(local_48 + 0x58))((undefined8 *)(local_48 + 0x58));
  if (((*PTR_DAT_02717ba0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_02717ba0), iVar3 != 0))
  {
    if (((*PTR_DAT_02717bb0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_02717bb0), iVar3 != 0)) {
      if (((*PTR_DAT_027107f0 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_027107f0), iVar3 != 0)) {
        *(undefined8 *)PTR_DAT_027107f8 = 0;
        __cxa_guard_release(PTR_DAT_027107f0);
      }
      *(undefined **)PTR_DAT_02717bb8 = PTR_DAT_027107f8;
      __cxa_guard_release(PTR_DAT_02717bb0);
    }
    *(undefined **)PTR_DAT_02717ba8 = PTR_DAT_02717bb8;
    __cxa_guard_release(PTR_DAT_02717ba0);
  }
  for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    if (plVar5 == (long *)PTR_DAT_02717ba8) goto joined_r0x008d3b54;
  }
  lVar8 = 0;
joined_r0x008d3b54:
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (lVar8 != 0) {
    FUN_00d99880(lVar8);
  }
  lVar7 = *(long *)(*(long *)puVar1 + 0x90);
  lVar8 = _DAT_00000060;
  if (lVar7 != 0) {
    plVar5 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar8 = *(long *)(lVar7 + 0x60);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  if (lVar8 != 0) {
    uVar6 = *(undefined8 *)(lVar8 + 0x630);
    FUN_016b1d50(uVar6);
    uVar4 = FUN_016b1da0(uVar6);
    while ((uVar4 & 1) == 0) {
      nn::os::SleepThread(&LAB_00f42400);
      uVar4 = FUN_016b1da0(uVar6);
    }
  }
  FUN_012b2bf0(*(undefined8 *)(*(long *)PTR_DAT_02710870 + 0x60));
  return;
}


