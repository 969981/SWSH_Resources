/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01400ab0; name: FUN_01400ab0
 */


void FUN_01400ab0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  long *plVar7;
  code *pcVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  
  bVar6 = *(int *)(param_1 + 0x98) != 0;
  uVar9 = 2;
  if (!bVar6) {
    uVar9 = 1;
  }
  uVar1 = (uint)bVar6;
  if (*(int *)(param_1 + 0x9c) != 0) {
    uVar1 = uVar9;
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0xa4) != 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0xac) != 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0xb4) != 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0xb8) != 0) {
    uVar1 = uVar1 + 1;
  }
  if (uVar1 == -(uint)(*(int *)(param_1 + 0xbc) != 0)) {
    lVar10 = *(long *)(param_1 + 0x78);
    FUN_016b2d70(*(undefined8 *)(lVar10 + 0x688),0);
    FUN_016b2d70(*(undefined8 *)(lVar10 + 0x690),0);
    FUN_008c82b0(*(undefined8 *)(param_1 + 0x78),0);
    FUN_008c4b10(*(undefined8 *)(param_1 + 0x78),0);
    FUN_008c6ab0(*(undefined8 *)(param_1 + 0x78),1);
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar11 != (undefined8 *)0x0))
    {
      plVar7 = (long *)(**(code **)*puVar11)(puVar11);
      lVar10 = FUN_013f9d40();
      for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        if (plVar7 == (long *)lVar10) {
          puVar11 = puVar11 + -10;
          goto LAB_01400bb8;
        }
      }
    }
    puVar11 = (undefined8 *)0x0;
LAB_01400bb8:
    FUN_013fafe0(puVar11,0xa76b70bbb3ddfb6e,1,0);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
    if (*(int *)(param_1 + 0x570) == 4) {
      FUN_008c9980(*(undefined8 *)(param_1 + 0x78),0);
    }
    *(undefined4 *)(param_1 + 0x568) = 0x3c;
    pcVar8 = *(code **)(param_1 + 0xd8);
    if (pcVar8 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      (*pcVar8)(param_1 + 0xf0);
    }
    *(long *)(param_1 + 0xf0) = param_1;
    *(undefined1 **)(param_1 + 0xd0) = &LAB_01405b00;
    *(undefined1 **)(param_1 + 0xd8) = &LAB_01405b10;
    pcVar8 = *(code **)(param_1 + 0x158);
    *(undefined1 **)(param_1 + 0xe0) = &LAB_01405b20;
    *(undefined1 **)(param_1 + 0xe8) = &LAB_01405b30;
    *(undefined4 *)(param_1 + 0x570) = 1;
    if (pcVar8 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x160) = 0;
      *(undefined8 *)(param_1 + 0x168) = 0;
      *(undefined8 *)(param_1 + 0x150) = 0;
      *(undefined8 *)(param_1 + 0x158) = 0;
      (*pcVar8)(param_1 + 0x170);
    }
    *(long *)(param_1 + 0x170) = param_1;
    *(undefined1 **)(param_1 + 0x150) = &LAB_014043b0;
    *(undefined1 **)(param_1 + 0x158) = &LAB_014044b0;
    *(undefined1 **)(param_1 + 0x160) = &LAB_014044c0;
    *(undefined1 **)(param_1 + 0x168) = &LAB_014044d0;
  }
  else {
    pcVar8 = *(code **)(param_1 + 0x1d8);
    if (pcVar8 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x1e0) = 0;
      *(undefined8 *)(param_1 + 0x1e8) = 0;
      *(undefined8 *)(param_1 + 0x1d0) = 0;
      *(undefined8 *)(param_1 + 0x1d8) = 0;
      (*pcVar8)(param_1 + 0x1f0);
    }
    puVar5 = PTR_FUN_02729690;
    puVar4 = PTR_LAB_02729680;
    puVar3 = PTR_LAB_02729678;
    puVar2 = PTR_LAB_02729670;
    *(long *)(param_1 + 0x1f0) = param_1;
    *(undefined **)(param_1 + 0x1f8) = puVar5;
    *(undefined8 *)(param_1 + 0x200) = 0;
    puVar5 = PTR_LAB_02729688;
    *(undefined **)(param_1 + 0x1d0) = puVar2;
    *(undefined **)(param_1 + 0x1d8) = puVar3;
    *(undefined **)(param_1 + 0x1e0) = puVar4;
    *(undefined **)(param_1 + 0x1e8) = puVar5;
  }
  FUN_013fd010(*(undefined8 *)(param_1 + 0x88),0);
  return;
}


