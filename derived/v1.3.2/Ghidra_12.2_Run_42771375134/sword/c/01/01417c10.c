/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01417c10; name: FUN_01417c10
 */


void FUN_01417c10(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long local_68 [4];
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar4 = (long *)(**(code **)*puVar7)(puVar7);
  puVar1 = PTR_DAT_02717528;
  puVar8 = (undefined8 *)PTR_DAT_02717530;
  if (((*PTR_DAT_02717528 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_02717528), puVar8 = (undefined8 *)PTR_DAT_02717530,
     iVar2 != 0)) {
    uVar5 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar5;
    __cxa_guard_release(PTR_DAT_02717528);
    puVar8 = (undefined8 *)PTR_DAT_02717530;
  }
  for (; plVar4 != puVar8; plVar4 = (long *)*plVar4) {
  }
  local_68[3] = 0x5b264405ba27eb9b;
  local_48 = "comm_player";
  local_40 = 0xb;
  local_38 = 0;
  PTR_DAT_02717530 = (undefined *)puVar8;
  uVar5 = FUN_01419800(puVar7[0x9f],local_68 + 3);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  *(undefined8 *)(param_1 + 0x88) = uVar5;
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar4 = (long *)(**(code **)*puVar7)(puVar7);
  if (((*puVar1 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_02717528), iVar2 != 0)) {
    uVar5 = FUN_00b8c810();
    *puVar8 = uVar5;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar4 != puVar8; plVar4 = (long *)*plVar4) {
  }
  FUN_00ff86a0(local_68 + 3,puVar7[0xd],0);
  local_68[2] = 0x726adea42ac6066d;
  local_68[1] = 0x99a47141539212fb;
  lVar6 = *(long *)(param_1 + 0x88);
  local_68[0] = *(long *)(local_68[3] + 0x60);
  if (local_68[0] != 0) {
    (**(code **)(*(long *)(local_68[0] + 0x48) + 0x10))();
  }
  FUN_008c4e70(lVar6 + 0x100,local_68 + 2,local_68,local_68 + 1,10);
  if (local_68[0] != 0) {
    (**(code **)(*(long *)(local_68[0] + 0x48) + 0x18))();
    local_68[0] = 0;
  }
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar8 != (undefined8 *)0x0)) {
    plVar4 = (long *)(**(code **)*puVar8)(puVar8);
    lVar6 = FUN_01410b60();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar6) {
        puVar8 = puVar8 + -10;
        goto LAB_01417df8;
      }
    }
  }
  puVar8 = (undefined8 *)0x0;
LAB_01417df8:
  FUN_0140ce50(puVar8);
  uVar3 = FUN_01415fd0();
  *(undefined4 *)(param_1 + 0x90) = uVar3;
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar8 != (undefined8 *)0x0)) {
    plVar4 = (long *)(**(code **)*puVar8)(puVar8);
    lVar6 = FUN_01410b60();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar6) {
        puVar8 = puVar8 + -10;
        goto LAB_01417e44;
      }
    }
  }
  puVar8 = (undefined8 *)0x0;
LAB_01417e44:
  uVar5 = FUN_0140ce50(puVar8);
  FUN_01415fe0(uVar5,1);
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar8 != (undefined8 *)0x0)) {
    plVar4 = (long *)(**(code **)*puVar8)(puVar8);
    lVar6 = FUN_01410b60();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar6) {
        puVar8 = puVar8 + -10;
        goto LAB_01417e90;
      }
    }
  }
  puVar8 = (undefined8 *)0x0;
LAB_01417e90:
  FUN_0140e0b0(puVar8,3);
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar4 = (long *)(**(code **)*puVar8)(puVar8);
  lVar6 = FUN_01410b60();
  for (; plVar4 != (long *)lVar6; plVar4 = (long *)*plVar4) {
  }
  *(undefined4 *)(puVar8 + 4) = 2;
  if (local_68[3] != 0) {
    (**(code **)(*(long *)(local_68[3] + 0x48) + 0x18))();
  }
  return;
}


