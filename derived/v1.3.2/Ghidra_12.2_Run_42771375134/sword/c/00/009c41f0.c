/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c41f0; name: FUN_009c41f0
 */


void FUN_009c41f0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long local_40;
  long local_38;
  long local_28;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0xb0);
  *(long *)(param_1 + 0xb0) = lVar2;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0xb8) = param_2[1];
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(*(long *)PTR_DAT_02716a30 + 0xf0);
  lVar2 = *(long *)PTR_DAT_02710940;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(&local_28,(long *)(param_1 + 0x10));
    local_38 = param_1 + 8;
    local_40 = local_28;
    if ((local_28 != 0) && ((**(code **)(*(long *)(local_28 + 0x48) + 0x10))(), local_28 != 0)) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    FUN_011faeb0(lVar2,&local_40);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
  }
  lVar2 = *(long *)PTR_DAT_027104b0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(&local_28);
    local_40 = local_28;
    if (local_28 == 0) {
      local_38 = param_1;
    }
    else {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
      local_38 = param_1;
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
    }
    FUN_007b58c0(lVar2,&local_40);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    }
  }
  return;
}


