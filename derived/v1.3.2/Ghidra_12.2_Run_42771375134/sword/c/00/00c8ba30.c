/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c8ba30; name: FUN_00c8ba30
 */


long FUN_00c8ba30(long param_1)

{
  long lVar1;
  long lVar2;
  long local_38;
  
  if (*(int *)(param_1 + 0xd0) == 2) {
    FUN_00c62ba0(&local_38,*(undefined8 *)(param_1 + 0x80));
    lVar2 = *(long *)(local_38 + 0x1690);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar1 = *(long *)(lVar2 + 0x290);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    lVar2 = FUN_00c8bba0(lVar1,*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90));
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
    }
    if (lVar2 != 0) {
      return lVar2;
    }
  }
  FUN_00c62ba0(&local_38,*(undefined8 *)(param_1 + 0x80));
  lVar2 = *(long *)(local_38 + 0x1690);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(lVar2 + 0x170);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  lVar2 = FUN_00c8bba0(lVar1,*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90));
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return lVar2;
}


