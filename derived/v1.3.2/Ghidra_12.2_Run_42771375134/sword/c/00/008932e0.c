/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008932e0; name: FUN_008932e0
 */


undefined8 FUN_008932e0(long *param_1,long param_2,byte param_3)

{
  long lVar1;
  long local_28;
  
  if ((*param_1 != 0) && (**(char **)(*param_1 + 0x60) != '\0')) {
    return 0;
  }
  if (**(char **)(param_2 + 8) == '\0') {
    local_28 = FUN_006e5e60();
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    lVar1 = *param_1;
  }
  else {
    FUN_006cf520(&local_28,*(undefined8 *)PTR_DAT_02710440);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    *param_1 = 0;
  }
  *param_1 = local_28;
  *(byte *)((long)param_1 + 0xc) = param_3 & 1;
  *(undefined4 *)(param_1 + 2) = 0;
  return 1;
}


