/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e8fd0; name: FUN_006e8fd0
 */


void FUN_006e8fd0(long param_1,void *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined8 *puVar9;
  code *pcVar10;
  long *plVar11;
  undefined8 uVar12;
  long local_60 [2];
  
  memcpy((void *)(param_1 + 0x50),param_2,0xa0);
  *(int *)(param_1 + 0x85a8) = *(int *)(param_1 + 0x70);
  uVar8 = (uint)(*(int *)(param_1 + 0x70) != 0);
  *(uint *)(param_1 + 0x85bc) = uVar8;
  *(uint *)(param_1 + 0x85b8) = uVar8;
  nn::os::GetSystemTick();
  uVar5 = nn::os::ConvertToTimeSpan();
  *(undefined8 *)(param_1 + 0x1b8) = uVar5;
  FUN_006e95d0(param_1);
  lVar6 = FUN_006eb060(local_60,*(undefined8 *)(param_1 + 8));
  puVar2 = PTR_DAT_02710450;
  puVar9 = *(undefined8 **)PTR_DAT_02710450;
  *(long *)PTR_DAT_02710450 = lVar6;
  if (puVar9 != (undefined8 *)0x0) {
    plVar11 = (long *)puVar9[1];
    uVar12 = puVar9[4];
    uVar5 = puVar9[2];
    uVar1 = puVar9[3];
    (**(code **)*puVar9)(puVar9);
    (**(code **)(*plVar11 + 0x18))(plVar11,uVar5,uVar1,uVar12);
    lVar6 = *(long *)puVar2;
  }
  lVar7 = 0;
  if (lVar6 != 0) {
    lVar7 = lVar6 + 0x48;
  }
  FUN_006cef90(lVar7);
  puVar2 = PTR_DAT_02710860;
  plVar11 = *(long **)(param_1 + 8);
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar6 + 0x80) < 0x10) {
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar11;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    lVar7 = (**(code **)(*plVar11 + 0x10))(plVar11,0x130,8);
    if (lVar7 == 0) {
      (**(code **)(*plVar11 + 0xb8))(plVar11);
    }
    FUN_006fc750(lVar7,*(undefined4 *)(param_1 + 0xa8));
    *(long **)(lVar7 + 8) = plVar11;
    *(long *)(lVar7 + 0x10) = lVar7;
    *(undefined8 *)(lVar7 + 0x18) = 0x130;
    *(undefined8 *)(lVar7 + 0x20) = 8;
    puVar3 = PTR_DAT_027155f0;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    puVar9 = *(undefined8 **)puVar3;
    *(long *)puVar3 = lVar7;
    if (puVar9 != (undefined8 *)0x0) {
      plVar11 = (long *)puVar9[1];
      uVar5 = puVar9[2];
      uVar1 = puVar9[3];
      uVar12 = puVar9[4];
      (**(code **)*puVar9)();
      (**(code **)(*plVar11 + 0x18))(plVar11,uVar5,uVar1,uVar12);
      lVar7 = *(long *)puVar3;
    }
    lVar6 = 0;
    if (lVar7 != 0) {
      lVar6 = lVar7 + 0x48;
    }
    FUN_006cef90(lVar6);
    lVar6 = FUN_006eb140(local_60,*(undefined8 *)(param_1 + 8));
    puVar3 = PTR_DAT_02710460;
    puVar9 = *(undefined8 **)PTR_DAT_02710460;
    *(long *)PTR_DAT_02710460 = lVar6;
    if (puVar9 != (undefined8 *)0x0) {
      plVar11 = (long *)puVar9[1];
      uVar12 = puVar9[4];
      uVar5 = puVar9[2];
      uVar1 = puVar9[3];
      (**(code **)*puVar9)(puVar9);
      (**(code **)(*plVar11 + 0x18))(plVar11,uVar5,uVar1,uVar12);
      lVar6 = *(long *)puVar3;
    }
    lVar7 = 0;
    if (lVar6 != 0) {
      lVar7 = lVar6 + 0x48;
    }
    FUN_006cef90(lVar7);
    lVar6 = FUN_006eb740(local_60,*(undefined8 *)(param_1 + 8));
    puVar3 = PTR_DAT_027155f8;
    puVar9 = *(undefined8 **)PTR_DAT_027155f8;
    *(long *)PTR_DAT_027155f8 = lVar6;
    if (puVar9 != (undefined8 *)0x0) {
      plVar11 = (long *)puVar9[1];
      uVar12 = puVar9[4];
      uVar5 = puVar9[2];
      uVar1 = puVar9[3];
      (**(code **)*puVar9)(puVar9);
      (**(code **)(*plVar11 + 0x18))(plVar11,uVar5,uVar1,uVar12);
      lVar6 = *(long *)puVar3;
    }
    lVar7 = 0;
    if (lVar6 != 0) {
      lVar7 = lVar6 + 0x48;
    }
    FUN_006cef90(lVar7);
    FUN_006e9a10(param_1);
    local_60[0] = 0;
    local_60[1] = 0;
    FUN_0199c1e0(local_60);
    puVar4 = PTR_DAT_027155e8;
    FUN_019a54c0(param_1 + 0x4218,PTR_DAT_027155e8,local_60);
    FUN_019a54c0(param_1 + 0x4270,puVar4,local_60);
    if (*(char *)((long)param_2 + 0x5c) == '\0') {
      lVar7 = *(long *)puVar3;
      lVar6 = FUN_006ec260(local_60,*(undefined8 *)(lVar7 + 8));
      FUN_006d1120();
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      *(ulong *)(lVar6 + 0x130) = *(ulong *)(lVar6 + 0x130) | 0x20;
      if (*(long *)(lVar7 + 0x50) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar7 + 0x50) + 0x48) + 0x18))();
        *(undefined8 *)(lVar7 + 0x50) = 0;
      }
      *(long *)(lVar7 + 0x50) = lVar6;
    }
    else {
      plVar11 = *(long **)(param_1 + 8);
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_006e95c8;
      *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar11;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      lVar7 = (**(code **)(*plVar11 + 0x10))(plVar11,0x8a8,8);
      if (lVar7 == 0) {
        (**(code **)(*plVar11 + 0xb8))(plVar11);
      }
      FUN_006f1350(lVar7,(long)param_2 + 0x60);
      *(long **)(lVar7 + 8) = plVar11;
      *(long *)(lVar7 + 0x10) = lVar7;
      *(undefined8 *)(lVar7 + 0x18) = 0x8a8;
      *(undefined8 *)(lVar7 + 0x20) = 8;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x168) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x168) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x168) = 0;
      }
      *(long *)(param_1 + 0x168) = lVar7;
      *(undefined8 *)(lVar7 + 0x98) = 0x3e99999a00000000;
      *(undefined8 *)(lVar7 + 0xa0) = 0x3f8000003f800000;
      local_60[0] = param_1;
      FUN_006eba40(*(undefined8 *)puVar3,0,local_60);
    }
    plVar11 = *(long **)(param_1 + 8);
    uVar5 = *(undefined8 *)(*(long *)PTR_DAT_027154f0 + 0x10);
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (*(ulong *)(lVar6 + 0x80) < 0x10) {
      *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar11;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      lVar7 = (**(code **)(*plVar11 + 0x10))(plVar11,0x140,8);
      if (lVar7 == 0) {
        (**(code **)(*plVar11 + 0xb8))(plVar11);
      }
      FUN_006ec340(lVar7,0x10,2,uVar5);
      *(long **)(lVar7 + 8) = plVar11;
      *(long *)(lVar7 + 0x10) = lVar7;
      *(undefined8 *)(lVar7 + 0x18) = 0x140;
      *(undefined8 *)(lVar7 + 0x20) = 8;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x1e8) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x1e8) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x1e8) = 0;
      }
      *(long *)(param_1 + 0x1e8) = lVar7;
      lVar6 = FUN_006ec690(local_60,*(undefined8 *)(param_1 + 8));
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x85a0) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x85a0) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x85a0) = 0;
      }
      *(long *)(param_1 + 0x85a0) = lVar6;
      pcVar10 = *(code **)(param_1 + 0x8518);
      if (pcVar10 != (code *)0x0) {
        *(undefined8 *)(param_1 + 0x8520) = 0;
        *(undefined8 *)(param_1 + 0x8528) = 0;
        *(undefined8 *)(param_1 + 0x8510) = 0;
        *(undefined8 *)(param_1 + 0x8518) = 0;
        (*pcVar10)(param_1 + 0x8530);
      }
      *(long *)(param_1 + 0x8530) = param_1;
      *(undefined8 *)(param_1 + 0x8510) = &LAB_006ed770;
      *(undefined1 **)(param_1 + 0x8518) = &LAB_006ed7b0;
      *(undefined1 **)(param_1 + 0x8520) = &LAB_006ed7c0;
      *(undefined1 **)(param_1 + 0x8528) = &LAB_006ed7d0;
      FUN_006d7210(*(undefined8 *)PTR_DAT_027153c0,3,param_1 + 0x8500);
      lVar6 = FUN_006ec690(local_60,*(undefined8 *)(param_1 + 8));
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x85b0) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x85b0) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x85b0) = 0;
      }
      *(long *)(param_1 + 0x85b0) = lVar6;
      return;
    }
  }
LAB_006e95c8:
                    /* WARNING: Subroutine does not return */
  abort();
}


