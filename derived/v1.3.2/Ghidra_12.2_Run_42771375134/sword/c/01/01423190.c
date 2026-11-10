/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01423190; name: FUN_01423190
 */


void FUN_01423190(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  code *pcVar11;
  undefined *local_140;
  code *local_138;
  undefined *local_130;
  undefined *local_128;
  long lStack_120;
  undefined *local_118;
  undefined8 uStack_110;
  undefined *local_c0;
  code *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  long local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined8 local_38;
  
  *(undefined4 *)(param_1 + 0x78) = 0;
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar4 = (long *)(**(code **)*puVar9)(puVar9);
  puVar1 = PTR_DAT_02717528;
  puVar10 = (undefined8 *)PTR_DAT_02717530;
  if (((*PTR_DAT_02717528 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_02717528), puVar10 = (undefined8 *)PTR_DAT_02717530,
     iVar3 != 0)) {
    uVar7 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar7;
    __cxa_guard_release(PTR_DAT_02717528);
    puVar10 = (undefined8 *)PTR_DAT_02717530;
  }
  for (; plVar4 != puVar10; plVar4 = (long *)*plVar4) {
  }
  local_c0 = (undefined *)0xb3b0b7f84e82388d;
  local_b8 = (code *)0x1cdb72d;
  local_b0 = (undefined *)0xe;
  local_a8 = (undefined *)0x0;
  PTR_DAT_02717530 = (undefined *)puVar10;
  lVar5 = FUN_01425000(puVar9[0x9f],&local_c0);
  if (local_a8 != (undefined *)0x0) {
    (**(code **)(*(long *)((long)local_a8 + 0x48) + 0x18))();
    local_a8 = (undefined *)0x0;
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(param_1 + 0x80);
  *(long *)(param_1 + 0x80) = lVar5;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar4 = (long *)(**(code **)*puVar9)(puVar9);
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_02717528), iVar3 != 0)) {
    uVar7 = FUN_00b8c810();
    *puVar10 = uVar7;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar4 != puVar10; plVar4 = (long *)*plVar4) {
  }
  local_c0 = (undefined *)0x79bcb87f706228c1;
  local_b8 = (code *)0x1d1bdeb;
  local_b0 = (undefined *)0xe;
  local_a8 = (undefined *)0x0;
  lVar5 = FUN_01425150(puVar9[0x9f],&local_c0);
  if (local_a8 != (undefined *)0x0) {
    (**(code **)(*(long *)((long)local_a8 + 0x48) + 0x18))();
    local_a8 = (undefined *)0x0;
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(param_1 + 0x88);
  *(long *)(param_1 + 0x88) = lVar5;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  local_38 = 0;
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar4 = (long *)(**(code **)*puVar10)(puVar10);
  lVar5 = FUN_01410b60();
  for (; plVar4 != (long *)lVar5; plVar4 = (long *)*plVar4) {
  }
  uVar8 = FUN_014252a0(puVar10[2],0xa768f3f26f75fc39,&local_38);
  if ((uVar8 & 1) != 0) {
    FUN_014234c0(param_1,local_38);
  }
  pcVar11 = (code *)PTR_FUN_02729a78;
  local_98 = PTR_LAB_02729a68;
  uStack_90 = 0;
  local_c0 = PTR_LAB_02729a70;
  local_b8 = (code *)PTR_FUN_02729a78;
  local_b0 = PTR_LAB_02729a80;
  local_118 = PTR_LAB_02729a68;
  uStack_110 = 0;
  local_138 = (code *)PTR_FUN_02729a78;
  local_130 = PTR_LAB_02729a80;
  local_140 = PTR_LAB_02729a70;
  local_a8 = PTR_LAB_02729a88;
  local_128 = PTR_LAB_02729a88;
  lStack_120 = param_1;
  local_a0 = param_1;
  FUN_014269c0(*(undefined8 *)(param_1 + 0x80),&local_140);
  pcVar2 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = (undefined *)0x0;
    local_128 = (undefined *)0x0;
    local_140 = (undefined *)0x0;
    local_138 = (code *)0x0;
    (*pcVar2)(&lStack_120);
    pcVar11 = local_b8;
    if (local_b8 == (code *)0x0) {
      return;
    }
  }
  local_b0 = (undefined *)0x0;
  local_a8 = (undefined *)0x0;
  local_c0 = (undefined *)0x0;
  local_b8 = (code *)0x0;
  (*pcVar11)(&local_a0);
  return;
}


