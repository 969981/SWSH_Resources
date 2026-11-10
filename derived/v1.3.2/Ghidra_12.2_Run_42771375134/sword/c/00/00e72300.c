/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e72300; name: FUN_00e72300
 */


void FUN_00e72300(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  if (*(char *)(param_1 + 0x2d0) != '\0') {
    (**(code **)(**(long **)(param_1 + 0x70) + 0x10))(&local_28);
    FUN_00c58c00(&local_30,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
    local_38 = local_30;
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x10))();
    }
    local_40 = local_28;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    FUN_00e7f8a0(0x3f000000,&local_38,&local_40);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    lVar4 = *(long *)(param_1 + 0x70);
    puVar5 = (undefined8 *)(lVar4 + 0x50);
    plVar2 = (long *)(**(code **)*puVar5)(puVar5);
    if (((*PTR_DAT_0271ed78 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_0271ed78), iVar1 != 0)) {
      uVar3 = FUN_01577390();
      *(undefined8 *)PTR_DAT_0271ed80 = uVar3;
      __cxa_guard_release(PTR_DAT_0271ed78);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_0271ed80) {
        FUN_00e45710(0,0,lVar4,7,0);
        break;
      }
    }
    *(undefined1 *)(param_1 + 0x2d0) = 0;
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
      local_30 = 0;
    }
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return;
}


