/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013da540; name: FUN_013da540
 */


void FUN_013da540(long param_1)

{
  long lVar1;
  long local_38;
  long local_30;
  long local_28;
  
  lVar1 = FUN_007959b0(*(undefined8 *)(param_1 + 0x558),&local_28);
  if (lVar1 != 0) {
    local_28 = 0;
    FUN_007273c0(lVar1,0,&local_28);
    FUN_00c58c00(&local_28,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
    lVar1 = local_28;
    (**(code **)(**(long **)(param_1 + 0x558) + 0x10))(&local_38);
    local_30 = local_38;
    local_38 = 0;
    FUN_00c7a010(lVar1,&local_30);
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
      local_30 = 0;
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return;
}


