/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eaaf60; name: FUN_00eaaf60
 */


void FUN_00eaaf60(long param_1)

{
  long lVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  if ((*(int *)(param_1 + 0x438) == -1) && (lVar1 = *(long *)(param_1 + 0x448), lVar1 != 0)) {
    local_40 = *(undefined8 *)(param_1 + 0x3f8);
    local_38 = *(undefined8 *)(param_1 + 0x400);
    local_30 = *(undefined8 *)(param_1 + 0x408);
    local_28 = *(long *)(param_1 + 0x410);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    FUN_00895fd0(lVar1,&local_40);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return;
}


