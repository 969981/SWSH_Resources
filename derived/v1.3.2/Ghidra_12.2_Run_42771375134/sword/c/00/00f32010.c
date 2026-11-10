/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f32010; name: FUN_00f32010
 */


undefined8 FUN_00f32010(int *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long local_28;
  
  if (*param_1 == 1) {
    lVar2 = *(long *)(*(long *)PTR_DAT_02710848 + 0xb8);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar3 = *(long *)(lVar2 + 0x1e0);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    uVar1 = FUN_015abc00(lVar3);
    if ((uVar1 & 1) != 0) {
      FUN_015ab8d0(&local_28,lVar3,*(undefined8 *)(param_1 + 6));
      FUN_014bc870(local_28);
      *param_1 = *param_1 + 1;
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
    }
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    return 0;
  }
  if (*param_1 == 0) {
    FUN_00f32130(param_1);
    *param_1 = *param_1 + 1;
    return 0;
  }
  return 1;
}


