/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01419000; name: FUN_01419000
 */


void FUN_01419000(long *param_1,byte *param_2,byte param_3)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  byte local_9c;
  long local_48;
  
  lVar7 = *param_1;
  puVar6 = *(undefined8 **)(*(long *)(lVar7 + 0x60) + 0x60);
  plVar4 = (long *)(**(code **)*puVar6)(puVar6);
  if (((*PTR_DAT_02717528 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_02717528), iVar3 != 0))
  {
    uVar5 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar5;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar4 != (long *)PTR_DAT_02717530; plVar4 = (long *)*plVar4) {
  }
  FUN_00ff86a0(&local_48,puVar6[0xd],0);
  FUN_014160a0(*(undefined8 *)param_1[1],&local_48);
  bVar1 = *param_2;
  local_d0 = (undefined1 *)0xcbf29ce484222645;
  while (bVar1 != 0) {
    param_2 = param_2 + 1;
    local_d0 = (undefined1 *)(((ulong)local_d0 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *param_2;
  }
  FUN_01416100(*(undefined8 *)param_1[1],&local_d0);
  uVar5 = FUN_01416420(*(undefined8 *)param_1[1]);
  FUN_014c9030(uVar5,0,*(undefined8 *)(*(long *)(lVar7 + 0x78) + 0x10));
  if ((param_3 & 1) != 0) {
    local_d0 = (undefined1 *)0x61378d59fd0dec00;
    FUN_01416460(*(undefined8 *)param_1[1],&local_d0);
    local_d0 = (undefined1 *)0x61378e59fd0dedb3;
    FUN_01416460(*(undefined8 *)param_1[1],&local_d0);
    FUN_01416510(DAT_01d4bcd8,DAT_01d4c268,*(undefined8 *)param_1[1]);
    FUN_014166d0(*(undefined8 *)param_1[1],2);
  }
  uStack_a8 = *(undefined8 *)param_1[1];
  local_a0 = *(undefined4 *)param_1[2];
  local_d0 = &LAB_014195d0;
  local_c8 = FUN_01419680;
  local_c0 = &LAB_01419690;
  puStack_b8 = &LAB_014196b0;
  local_b0 = lVar7;
  local_9c = param_3 & 1;
  FUN_01416b60(uStack_a8,&local_d0);
  pcVar2 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    puStack_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar2)(&local_b0);
  }
  FUN_01416760(*(undefined8 *)param_1[1]);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


