/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010fe660; name: FUN_010fe660
 */


void FUN_010fe660(long param_1)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  long alStack_b0 [12];
  undefined1 local_50 [4];
  byte local_4c [4];
  undefined *local_48;
  long local_40;
  undefined8 local_38;
  
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar4 = (long *)(**(code **)*puVar8)(puVar8);
  if (((*PTR_DAT_02717528 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_02717528), iVar3 != 0))
  {
    uVar7 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar7;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar4 != (long *)PTR_DAT_02717530; plVar4 = (long *)*plVar4) {
  }
  lVar9 = puVar8[0x9f];
  local_d0 = (undefined1 *)0x2651d5ef7b32db44;
  local_c8 = (code *)0x1ceba90;
  local_c0 = (undefined1 *)0x7;
  local_b8 = (undefined1 *)0x0;
  local_38 = FUN_010ff3e0(lVar9,&local_d0);
  if (local_b8 != (undefined1 *)0x0) {
    (**(code **)(*(long *)((long)local_b8 + 0x48) + 0x18))();
    local_b8 = (undefined1 *)0x0;
  }
  FUN_00ff86a0(&local_d0,*(undefined8 *)(lVar9 + 0xb0),0);
  local_40 = *(long *)(local_d0 + 0x60);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x10))((long *)(local_40 + 0x48));
  }
  if (local_d0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
    local_d0 = (undefined1 *)0x0;
  }
  lVar9 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  uVar5 = FUN_01524d60(lVar9);
  if ((uVar5 & 1) == 0) {
    local_4c[0] = 1;
  }
  else {
    bVar2 = FUN_01524d70(lVar9);
    local_4c[0] = ~bVar2 & 1;
  }
  local_48 = PTR_DAT_027248d8 + 0x10;
  local_50[0] = 0;
  lVar6 = FUN_010ff5d0(&local_d0,*(undefined8 *)(param_1 + 8),local_4c,local_50,&local_40,&local_38,
                       &local_48);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x140) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x140) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  *(long *)(param_1 + 0x140) = lVar6;
  local_d0 = &LAB_010ff700;
  local_c8 = FUN_010ff9c0;
  local_c0 = &LAB_010ff9d0;
  local_b8 = &LAB_010ff9e0;
  alStack_b0[0] = param_1;
  FUN_01190a40(lVar6,&local_d0);
  pcVar1 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar1)(alStack_b0);
  }
  *(undefined4 *)(param_1 + 0x80) = 7;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  return;
}


