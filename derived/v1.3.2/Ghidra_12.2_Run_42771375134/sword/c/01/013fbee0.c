/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013fbee0; name: FUN_013fbee0
 */


void FUN_013fbee0(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_48;
  
  FUN_0010d170(&local_60,"BagStateStart");
  if (*(long *)(param_1 + 0x70) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x70) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  *(undefined8 *)(param_1 + 0x70) = local_60;
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar4 = (long *)(**(code **)*puVar7)(puVar7);
  puVar2 = PTR_DAT_02717528;
  puVar1 = (undefined8 *)PTR_DAT_02717530;
  if (((*PTR_DAT_02717528 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_02717528), puVar1 = (undefined8 *)PTR_DAT_02717530,
     iVar3 != 0)) {
    uVar5 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar5;
    __cxa_guard_release(PTR_DAT_02717528);
    puVar1 = (undefined8 *)PTR_DAT_02717530;
  }
  for (; plVar4 != puVar1; plVar4 = (long *)*plVar4) {
  }
  local_60 = 0x8831eaf20f2731ea;
  local_58 = "BagViewFade";
  local_50 = 0xb;
  local_48 = 0;
  PTR_DAT_02717530 = (undefined *)puVar1;
  uVar5 = FUN_008ad510(puVar7[0x9f],&local_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  *(undefined8 *)(param_1 + 0x80) = uVar5;
  FUN_010364c0(uVar5,0);
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar4 = (long *)(**(code **)*puVar7)(puVar7);
  if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_02717528), iVar3 != 0)) {
    uVar5 = FUN_00b8c810();
    *puVar1 = uVar5;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar4 != puVar1; plVar4 = (long *)*plVar4) {
  }
  local_60 = 0x25cf786e4a20d38f;
  local_58 = "BagViewTop";
  local_50 = 10;
  local_48 = 0;
  uVar5 = FUN_008a3b60(puVar7[0x9f],&local_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  FUN_010364c0(uVar5,0);
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar4 = (long *)(**(code **)*puVar7)(puVar7);
  if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_02717528), iVar3 != 0)) {
    uVar5 = FUN_00b8c810();
    *puVar1 = uVar5;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar4 != puVar1; plVar4 = (long *)*plVar4) {
  }
  uVar5 = puVar7[0x9f];
  FUN_006cf0a0(&local_60,PTR_DAT_027176e0);
  uVar5 = FUN_0089c480(uVar5,&local_60);
  *(undefined8 *)(param_1 + 0x90) = uVar5;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))((long *)(local_48 + 0x48));
    local_48 = 0;
    uVar5 = *(undefined8 *)(param_1 + 0x90);
  }
  FUN_01036f70(uVar5);
  lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  uVar5 = *(undefined8 *)(lVar8 + 0x488);
  *(uint *)(*(long *)(param_1 + 0x78) + 0x740) = (uint)uVar5 & 0xffff;
  *(int *)(*(long *)(param_1 + 0x78) + 0x764) = (int)((ulong)uVar5 >> 0x20);
  uVar5 = *(undefined8 *)(lVar8 + 0x494);
  *(uint *)(*(long *)(param_1 + 0x78) + 0x744) = (uint)uVar5 & 0xffff;
  *(int *)(*(long *)(param_1 + 0x78) + 0x768) = (int)((ulong)uVar5 >> 0x20);
  uVar5 = *(undefined8 *)(lVar8 + 0x4a0);
  *(uint *)(*(long *)(param_1 + 0x78) + 0x748) = (uint)uVar5 & 0xffff;
  *(int *)(*(long *)(param_1 + 0x78) + 0x76c) = (int)((ulong)uVar5 >> 0x20);
  uVar5 = *(undefined8 *)(lVar8 + 0x4ac);
  *(uint *)(*(long *)(param_1 + 0x78) + 0x74c) = (uint)uVar5 & 0xffff;
  *(int *)(*(long *)(param_1 + 0x78) + 0x770) = (int)((ulong)uVar5 >> 0x20);
  uVar5 = *(undefined8 *)(lVar8 + 0x4b8);
  *(uint *)(*(long *)(param_1 + 0x78) + 0x750) = (uint)uVar5 & 0xffff;
  *(int *)(*(long *)(param_1 + 0x78) + 0x774) = (int)((ulong)uVar5 >> 0x20);
  uVar5 = *(undefined8 *)(lVar8 + 0x4c4);
  *(uint *)(*(long *)(param_1 + 0x78) + 0x754) = (uint)uVar5 & 0xffff;
  *(int *)(*(long *)(param_1 + 0x78) + 0x778) = (int)((ulong)uVar5 >> 0x20);
  uVar5 = *(undefined8 *)(lVar8 + 0x4d0);
  *(uint *)(*(long *)(param_1 + 0x78) + 0x758) = (uint)uVar5 & 0xffff;
  *(int *)(*(long *)(param_1 + 0x78) + 0x77c) = (int)((ulong)uVar5 >> 0x20);
  uVar5 = *(undefined8 *)(lVar8 + 0x4dc);
  *(uint *)(*(long *)(param_1 + 0x78) + 0x75c) = (uint)uVar5 & 0xffff;
  *(int *)(*(long *)(param_1 + 0x78) + 0x780) = (int)((ulong)uVar5 >> 0x20);
  uVar5 = *(undefined8 *)(lVar8 + 0x4e8);
  *(uint *)(*(long *)(param_1 + 0x78) + 0x760) = (uint)uVar5 & 0xffff;
  *(int *)(*(long *)(param_1 + 0x78) + 0x784) = (int)((ulong)uVar5 >> 0x20);
  FUN_008c5440(*(undefined8 *)(param_1 + 0x78));
  FUN_008c5940(*(undefined8 *)(param_1 + 0x78));
  FUN_008c7960(*(undefined8 *)(param_1 + 0x78));
  FUN_008c61d0(*(undefined8 *)(param_1 + 0x78),0);
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar4 = (long *)(**(code **)*puVar7)(puVar7);
  lVar6 = FUN_013f9d40();
  for (; plVar4 != (long *)lVar6; plVar4 = (long *)*plVar4) {
  }
  if (*(int *)(puVar7[9] + 4) == 0) {
    FUN_008c7160(*(undefined8 *)(param_1 + 0x78));
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar4 = (long *)(**(code **)*puVar7)(puVar7);
  lVar8 = FUN_013f9d40();
  for (; plVar4 != (long *)lVar8; plVar4 = (long *)*plVar4) {
  }
  if (*(int *)(puVar7[9] + 0x110) != 0) {
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
    plVar4 = (long *)(**(code **)*puVar7)(puVar7);
    if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_02717528), iVar3 != 0)) {
      uVar5 = FUN_00b8c810();
      *puVar1 = uVar5;
      __cxa_guard_release(PTR_DAT_02717528);
    }
    for (; plVar4 != puVar1; plVar4 = (long *)*plVar4) {
    }
    local_60 = 0xae63ffa36945e200;
    local_58 = "BagViewShop";
    local_50 = 0xb;
    local_48 = 0;
    uVar5 = FUN_008a3cb0(puVar7[0x9f],&local_60);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    *(undefined8 *)(param_1 + 0x88) = uVar5;
    FUN_008c6fc0(*(undefined8 *)(param_1 + 0x78));
  }
  FUN_008c8f50(*(undefined8 *)(param_1 + 0x78));
  FUN_008c7d10(*(undefined8 *)(param_1 + 0x78));
  FUN_008c8c80(*(undefined8 *)(param_1 + 0x78),0);
  FUN_008c8cf0(*(undefined8 *)(param_1 + 0x78),0);
  local_60 = 0xd0ee812a05c415d;
  lVar8 = FUN_0167b6b0(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x2b0),&local_60);
  *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  return;
}


