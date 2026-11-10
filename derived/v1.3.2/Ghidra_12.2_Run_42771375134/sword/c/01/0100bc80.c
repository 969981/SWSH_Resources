/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0100bc80; name: FUN_0100bc80
 */


void FUN_0100bc80(long *param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  long local_28;
  
  FUN_0077d520(*(undefined8 *)(param_2 + 0x810));
  local_28 = *(long *)(param_2 + 0x818);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  FUN_014ba250(&local_28,*(undefined8 *)(param_2 + 0x810),param_4,10);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  lVar1 = *(long *)(param_2 + 0x818);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  return;
}


