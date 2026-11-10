/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01494b80; name: FUN_01494b80
 */


void FUN_01494b80(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long local_70;
  char *local_68;
  undefined8 local_60;
  long local_58;
  
  FUN_0010d170(&local_70,"PokeStatusRibbonState");
  if (*(long *)(param_1 + 0x70) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x70) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  *(long *)(param_1 + 0x70) = local_70;
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar6 = (long *)(**(code **)*puVar9)(puVar9);
  puVar3 = PTR_DAT_02717528;
  puVar2 = (undefined8 *)PTR_DAT_02717530;
  if ((*PTR_DAT_02717528 & 1) == 0) {
    iVar5 = __cxa_guard_acquire(PTR_DAT_02717528);
    puVar2 = (undefined8 *)PTR_DAT_02717530;
    if (iVar5 != 0) {
      uVar7 = FUN_00b8c810();
      *(undefined8 *)PTR_DAT_02717530 = uVar7;
      __cxa_guard_release(PTR_DAT_02717528);
      puVar2 = (undefined8 *)PTR_DAT_02717530;
    }
  }
  for (; plVar6 != puVar2; plVar6 = (long *)*plVar6) {
  }
  local_70 = 0x13c804d4923f90cc;
  local_68 = "PokeStatusBgView";
  local_60 = 0x10;
  local_58 = 0;
  PTR_DAT_02717530 = (undefined *)puVar2;
  uVar7 = FUN_014836d0(puVar9[0x9f],&local_70);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  *(undefined8 *)(param_1 + 0x80) = uVar7;
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar6 = (long *)(**(code **)*puVar9)(puVar9);
  if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_02717528), iVar5 != 0)) {
    uVar7 = FUN_00b8c810();
    *puVar2 = uVar7;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar6 != puVar2; plVar6 = (long *)*plVar6) {
  }
  local_70 = -0x16749b67231edd;
  local_68 = "PokeStatusRibbonView";
  local_60 = 0x14;
  local_58 = 0;
  uVar7 = FUN_01483820(puVar9[0x9f],&local_70);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  *(undefined8 *)(param_1 + 0x88) = uVar7;
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar6 = (long *)(**(code **)*puVar9)(puVar9);
  if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_02717528), iVar5 != 0)) {
    uVar7 = FUN_00b8c810();
    *puVar2 = uVar7;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar6 != puVar2; plVar6 = (long *)*plVar6) {
  }
  lVar10 = puVar9[0x9f];
  plVar1 = *(long **)(lVar10 + 0x80);
  for (plVar6 = *(long **)(lVar10 + 0x78); plVar1 != plVar6; plVar6 = plVar6 + 1) {
    FUN_006cf0c0(&local_70,*plVar6 + 0x5c0);
    lVar4 = local_70;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (lVar4 == -0x19e4f1f2a29fb7f2) {
      if (*(long **)(lVar10 + 0x80) == plVar6) goto LAB_01494e2c;
      goto LAB_01494e00;
    }
  }
  plVar6 = plVar1;
  if (*(long **)(lVar10 + 0x80) != plVar1) {
LAB_01494e00:
    lVar10 = *plVar6;
    if (lVar10 != 0) {
      uVar8 = FUN_008a3e00(lVar10 + 0x50);
      if ((uVar8 & 1) == 0) {
        lVar10 = 0;
      }
      goto LAB_01494e30;
    }
  }
LAB_01494e2c:
  lVar10 = 0;
LAB_01494e30:
  *(long *)(param_1 + 0x90) = lVar10;
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar6 = (long *)(**(code **)*puVar9)(puVar9);
  if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_02717528), iVar5 != 0)) {
    uVar7 = FUN_00b8c810();
    *puVar2 = uVar7;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar6 != puVar2; plVar6 = (long *)*plVar6) {
  }
  local_70 = -0x65cd2b19b5a91bf9;
  local_68 = "PokeStatusInfoView";
  local_60 = 0x12;
  local_58 = 0;
  uVar7 = FUN_0148bff0(puVar9[0x9f],&local_70);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  *(undefined8 *)(param_1 + 0x98) = uVar7;
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar6 = (long *)(**(code **)*puVar9)(puVar9);
  if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_02717528), iVar5 != 0)) {
    uVar7 = FUN_00b8c810();
    *puVar2 = uVar7;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar6 != puVar2; plVar6 = (long *)*plVar6) {
  }
  local_70 = 0x4613dc95ab53a71d;
  local_68 = "PokeStatusMemoView";
  local_60 = 0x12;
  local_58 = 0;
  uVar7 = FUN_0148c140(puVar9[0x9f],&local_70);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  *(undefined8 *)(param_1 + 0xa0) = uVar7;
  FUN_01485840(*(undefined8 *)(param_1 + 0x80),3,1);
  FUN_01497110(*(undefined8 *)(param_1 + 0x88));
  FUN_014970d0(*(undefined8 *)(param_1 + 0x88),0);
  FUN_01495060(param_1);
  *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x650) = 3;
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}


