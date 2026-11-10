/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011fbad0; name: FUN_011fbad0
 */


void FUN_011fbad0(long param_1)

{
  long lVar1;
  long local_38;
  long local_30;
  long local_28;
  
  if (*(long *)PTR_DAT_02710940 != 0) {
    FUN_011faed0();
  }
  lVar1 = *(long *)PTR_DAT_027104b0;
  if (lVar1 != 0) {
    if (param_1 == 0) {
      local_38 = 0;
      local_30 = 0;
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(&local_28);
      local_38 = local_28;
      local_30 = param_1;
      if ((local_28 != 0) && ((**(code **)(*(long *)(local_28 + 0x48) + 0x10))(), local_28 != 0)) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
    }
    FUN_007b59f0(lVar1,&local_38);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
  }
  return;
}


