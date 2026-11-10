/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014eb320; name: FUN_014eb320
 */


void FUN_014eb320(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long local_48;
  long local_40;
  long local_38;
  
  if (*(long *)(param_1 + 0x2d0) != 0) {
    puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
    plVar2 = (long *)(**(code **)*puVar3)(puVar3);
    if (((*PTR_DAT_02717528 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02717528), iVar1 != 0)) {
      uVar7 = FUN_00b8c810();
      *(undefined8 *)PTR_DAT_02717530 = uVar7;
      __cxa_guard_release(PTR_DAT_02717528);
    }
    for (; plVar2 != (long *)PTR_DAT_02717530; plVar2 = (long *)*plVar2) {
    }
    FUN_00ff86a0(&local_38,*(undefined8 *)(puVar3[0x9f] + 0xb0),0);
    lVar4 = *(long *)(local_38 + 0x60);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2b0);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    lVar5 = *(long *)(lVar6 + 0x2e8);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    FUN_01036e20(*(undefined8 *)(param_1 + 0x2d0));
    local_38 = -0x380f71e14728cf2f;
    FUN_0077eb10(lVar4,&local_38,lVar5);
    uVar7 = *(undefined8 *)(param_1 + 0x2d0);
    local_40 = lVar5;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    FUN_01036db0(uVar7,0,0,&local_40);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    local_38 = -0x380f72e14728d0e2;
    FUN_0077eb10(lVar4,&local_38,lVar5);
    uVar7 = *(undefined8 *)(param_1 + 0x2d0);
    local_48 = lVar5;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    FUN_01036db0(uVar7,1,1,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
  }
  return;
}


