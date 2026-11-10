/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01103ad0; name: FUN_01103ad0
 */


void FUN_01103ad0(long param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_48;
  long local_38;
  
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar2 = (long *)(**(code **)*puVar4)(puVar4);
  if (((*PTR_DAT_02717528 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02717528), iVar1 != 0))
  {
    uVar3 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar3;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar2 != (long *)PTR_DAT_02717530; plVar2 = (long *)*plVar2) {
  }
  FUN_00ff86a0(&local_38,*(undefined8 *)(puVar4[0x9f] + 0xb0),0);
  lVar5 = *(long *)(local_38 + 0x60);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x98) + 0x2b0);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(lVar7 + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  if (param_2 == 1) {
    local_38 = 0x6a1723c0e3636df8;
  }
  else {
    if (param_2 != 0) goto LAB_01103c08;
    local_38 = 0x6a1a8ec0e36659a0;
  }
  FUN_0077eb10(lVar5,&local_38,lVar6);
LAB_01103c08:
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  local_48 = lVar6;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN_01036db0(uVar3,param_2,param_2,&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return;
}


