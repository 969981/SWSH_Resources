/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01113de0; name: FUN_01113de0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01113de0(long *param_1,undefined4 param_2)

{
  long lVar1;
  long local_28;
  
  if (param_1[0x11] == 0) {
    local_28 = 0;
    DAT_00000070 = 1;
    lVar1 = param_1[0x12];
    _DAT_00000074 = param_2;
  }
  else {
    FUN_010eb5e0(&local_28);
    *(undefined4 *)(local_28 + 0x74) = param_2;
    *(undefined1 *)(local_28 + 0x70) = 1;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    lVar1 = param_1[0x12];
  }
  if (lVar1 == 0) {
    local_28 = 0;
    FUN_010ef1d0();
  }
  else {
    FUN_010edb50(&local_28);
    FUN_010ef1d0(local_28);
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  FUN_01037030(param_1[0x3d]);
  *(undefined4 *)(param_1 + 0x10) = 4;
  (**(code **)(*param_1 + 0x88))(param_1,4);
  return;
}


