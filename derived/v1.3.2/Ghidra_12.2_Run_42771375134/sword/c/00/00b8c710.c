/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b8c710; name: FUN_00b8c710
 */


void FUN_00b8c710(long param_1,uint param_2)

{
  long lVar1;
  long local_30;
  long local_28;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    local_28 = 0;
    lVar1 = *(long *)(param_1 + 0x58);
  }
  else {
    FUN_00b8c580(&local_28);
    lVar1 = *(long *)(param_1 + 0x58);
  }
  if (lVar1 == 0) {
    local_30 = 0;
  }
  else {
    FUN_00b8c580(&local_30);
  }
  if (local_28 != 0) {
    *(uint *)(local_28 + 0xe0) = param_2 & 1;
  }
  if (local_30 != 0) {
    *(uint *)(local_30 + 0xe0) = param_2 & 1;
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))((long *)(local_30 + 0x48));
    local_30 = 0;
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


