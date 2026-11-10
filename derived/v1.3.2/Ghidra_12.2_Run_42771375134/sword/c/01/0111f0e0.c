/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0111f0e0; name: FUN_0111f0e0
 */


void FUN_0111f0e0(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_40;
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
  lVar7 = *(long *)(*(long *)(param_1 + 0x120) + 0x2b0);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(lVar7 + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  FUN_01036e20(*(undefined8 *)(param_1 + 0x120));
  local_38 = 0x6a1a8ec0e36659a0;
  FUN_0077eb10(lVar5,&local_38,lVar6);
  uVar3 = *(undefined8 *)(param_1 + 0x120);
  local_40 = lVar6;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN_01036db0(uVar3,0,0,&local_40);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return;
}


