/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01400d40; name: FUN_01400d40
 */


void FUN_01400d40(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  code *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  if (*(int *)(param_1 + 0xcc) == -1) {
    lVar7 = *(long *)(param_1 + 0x78);
    FUN_016b2d70(*(undefined8 *)(lVar7 + 0x688),0);
    FUN_016b2d70(*(undefined8 *)(lVar7 + 0x690),0);
    FUN_008c82b0(*(undefined8 *)(param_1 + 0x78),0);
    FUN_008c4b10(*(undefined8 *)(param_1 + 0x78),0);
    FUN_008c6ab0(*(undefined8 *)(param_1 + 0x78),1);
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar8 != (undefined8 *)0x0)) {
      plVar9 = (long *)(**(code **)*puVar8)(puVar8);
      lVar7 = FUN_013f9d40();
      for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        if (plVar9 == (long *)lVar7) {
          puVar8 = puVar8 + -10;
          goto LAB_01400e30;
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
LAB_01400e30:
    FUN_013fafe0(puVar8,0xa76b6fbbb3ddf9bb,1,0);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
    if (*(int *)(param_1 + 0x570) == 4) {
      FUN_008c9980(*(undefined8 *)(param_1 + 0x78),0);
    }
    *(undefined4 *)(param_1 + 0x568) = 0x3c;
    pcVar6 = *(code **)(param_1 + 0xd8);
    if (pcVar6 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      (*pcVar6)(param_1 + 0xf0);
    }
    *(long *)(param_1 + 0xf0) = param_1;
    *(undefined1 **)(param_1 + 0xd0) = &LAB_01405b00;
    *(undefined1 **)(param_1 + 0xd8) = &LAB_01405b10;
    pcVar6 = *(code **)(param_1 + 0x158);
    *(undefined1 **)(param_1 + 0xe0) = &LAB_01405b20;
    *(undefined1 **)(param_1 + 0xe8) = &LAB_01405b30;
    *(undefined4 *)(param_1 + 0x570) = 1;
    if (pcVar6 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x160) = 0;
      *(undefined8 *)(param_1 + 0x168) = 0;
      *(undefined8 *)(param_1 + 0x150) = 0;
      *(undefined8 *)(param_1 + 0x158) = 0;
      (*pcVar6)(param_1 + 0x170);
    }
    *(long *)(param_1 + 0x170) = param_1;
    *(undefined1 **)(param_1 + 0x150) = &LAB_014044e0;
    *(undefined1 **)(param_1 + 0x158) = &LAB_014045e0;
    *(undefined1 **)(param_1 + 0x160) = &LAB_014045f0;
    *(undefined1 **)(param_1 + 0x168) = &LAB_01404600;
  }
  else {
    lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
    if (lVar7 == 0) {
      FUN_01520760(0,*(int *)(param_1 + 0xcc),1,1);
    }
    else {
      plVar9 = (long *)(lVar7 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_01520760(lVar7,*(undefined4 *)(param_1 + 0xcc),1,1);
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    FUN_008c61d0(*(undefined8 *)(param_1 + 0x78),1);
    FUN_013ff9c0(param_1);
    FUN_016bfe70(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x5e8));
    lVar7 = *(long *)(param_1 + 0x80);
    uVar5 = FUN_008c83c0(*(undefined8 *)(param_1 + 0x78));
    *(undefined4 *)(lVar7 + 0x644) = uVar5;
    *(undefined4 *)(param_1 + 0xcc) = 0xffffffff;
    pcVar6 = *(code **)(param_1 + 0x1d8);
    if (pcVar6 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x1e0) = 0;
      *(undefined8 *)(param_1 + 0x1e8) = 0;
      *(undefined8 *)(param_1 + 0x1d0) = 0;
      *(undefined8 *)(param_1 + 0x1d8) = 0;
      (*pcVar6)(param_1 + 0x1f0);
    }
    puVar4 = PTR_FUN_02729690;
    puVar3 = PTR_LAB_02729680;
    puVar2 = PTR_LAB_02729678;
    puVar1 = PTR_LAB_02729670;
    *(long *)(param_1 + 0x1f0) = param_1;
    *(undefined **)(param_1 + 0x1f8) = puVar4;
    *(undefined8 *)(param_1 + 0x200) = 0;
    puVar4 = PTR_LAB_02729688;
    *(undefined **)(param_1 + 0x1d0) = puVar1;
    *(undefined **)(param_1 + 0x1d8) = puVar2;
    *(undefined **)(param_1 + 0x1e0) = puVar3;
    *(undefined **)(param_1 + 0x1e8) = puVar4;
  }
  FUN_013fd010(*(undefined8 *)(param_1 + 0x88),1);
  return;
}


