/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01137430; name: FUN_01137430
 */


void FUN_01137430(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long local_38;
  
  if (*(long *)(param_1 + 0x368) != 0) {
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
    plVar2 = (long *)(**(code **)*puVar4)(puVar4);
    if (((*PTR_DAT_02717528 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02717528), iVar1 != 0)) {
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
    lVar6 = *(long *)(*(long *)(param_1 + 0x368) + 0x2b0);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    if (*(long *)(lVar6 + 0x2e8) == 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      FUN_01036e20(*(undefined8 *)(param_1 + 0x368));
    }
    else {
      plVar2 = (long *)(*(long *)(lVar6 + 0x2e8) + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      FUN_01036e20(*(undefined8 *)(param_1 + 0x368));
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
  }
  return;
}


