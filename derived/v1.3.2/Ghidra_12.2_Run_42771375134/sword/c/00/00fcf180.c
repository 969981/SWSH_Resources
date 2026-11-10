/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fcf180; name: FUN_00fcf180
 */


void FUN_00fcf180(long param_1,undefined8 param_2,ulong param_3,byte param_4,byte param_5)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined4 local_76;
  long local_70;
  undefined8 uStack_68;
  byte local_60;
  byte local_5f;
  undefined1 local_5e;
  undefined8 local_58;
  
  local_60 = param_4 & 1;
  local_5f = param_5 & 1;
  local_70 = 0;
  uStack_68 = 0;
  local_5e = 0;
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  local_58 = param_2;
  plVar2 = (long *)(**(code **)*puVar3)(puVar3);
  if (((*PTR_DAT_02717528 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02717528), iVar1 != 0))
  {
    uVar7 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar7;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar2 != (long *)PTR_DAT_02717530; plVar2 = (long *)*plVar2) {
  }
  FUN_00ff86a0(&local_b0,*(undefined8 *)(puVar3[0x9f] + 0xb0),0);
  lVar4 = *(long *)(local_b0 + 0x60);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (local_b0 != 0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
    local_b0 = 0;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x80) + 0x2b0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(lVar5 + 0x2e8);
  if (lVar6 == 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    FUN_0077eb10(lVar4,&local_58,0);
  }
  else {
    plVar2 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    FUN_0077eb10(lVar4,&local_58,lVar6);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x98) + 0x5d8);
  lVar5 = *(long *)(*(long *)(param_1 + 0x80) + 0x2b0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(lVar5 + 0x2f0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  lVar5 = *(long *)(*(long *)(param_1 + 0x80) + 0x2b0);
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
  lVar5 = *(long *)(*(long *)(param_1 + 0x80) + 0x2b0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(lVar5 + 0x2f0);
  if (lVar6 == 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    local_70 = 0;
  }
  else {
    plVar2 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    local_70 = lVar6;
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if ((param_3 & 1) == 0) {
    FUN_01038170(*(undefined8 *)(param_1 + 0x98),&local_70);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x98),0);
  }
  else {
    local_76 = 0xffff;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a0 = 0;
    local_78 = 1;
    local_b8 = 0xc141e25b1106779a;
    FUN_0077eb10(lVar4,&local_b8,*(undefined8 *)(param_1 + 0xc0));
    local_b0 = *(long *)(param_1 + 0xc0);
    local_b8 = 0xc141e15b110675e7;
    FUN_0077eb10(lVar4,&local_b8,*(undefined8 *)(param_1 + 200));
    local_a8 = *(undefined8 *)(param_1 + 200);
    FUN_01037680(*(undefined8 *)(param_1 + 0x98),5);
    (**(code **)(**(long **)(param_1 + 0x98) + 0x88))
              (*(long **)(param_1 + 0x98),&local_70,&local_b0);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x98),0);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


