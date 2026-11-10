/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010c4010; name: FUN_010c4010
 */


void FUN_010c4010(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long local_70;
  long local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined8 uStack_48;
  
  local_68 = 0;
  uStack_60 = 0;
  local_56 = 0;
  local_58 = 0x100;
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  uStack_48 = param_2;
  plVar2 = (long *)(**(code **)*puVar3)(puVar3);
  if (((*PTR_DAT_02717528 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02717528), iVar1 != 0))
  {
    uVar7 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar7;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar2 != (long *)PTR_DAT_02717530; plVar2 = (long *)*plVar2) {
  }
  FUN_00ff86a0(&local_70,*(undefined8 *)(puVar3[0x9f] + 0xb0),0);
  lVar4 = *(long *)(local_70 + 0x60);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x88) + 0x2b0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(lVar5 + 0x2e8);
  if (lVar6 == 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    FUN_0077eb10(lVar4,&uStack_48,0);
  }
  else {
    plVar2 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    FUN_0077eb10(lVar4,&uStack_48,lVar6);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x5d8);
  lVar5 = *(long *)(*(long *)(param_1 + 0x88) + 0x2b0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(lVar5 + 0x2f0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  lVar5 = *(long *)(*(long *)(param_1 + 0x88) + 0x2b0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(lVar5 + 0x2e8);
  plVar2 = (long *)(lVar8 + 0x48);
  if (lVar8 != 0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  FUN_014c62d0(uVar7,lVar6,lVar8);
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))(plVar2);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x88) + 0x2b0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(lVar5 + 0x2f0);
  if (lVar6 == 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    local_68 = 0;
  }
  else {
    plVar2 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    local_68 = lVar6;
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  FUN_01038170(*(undefined8 *)(param_1 + 0xa8),&local_68);
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0xa8),0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


