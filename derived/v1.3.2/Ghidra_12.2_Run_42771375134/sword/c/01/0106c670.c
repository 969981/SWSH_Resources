/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0106c670; name: FUN_0106c670
 */


void FUN_0106c670(long param_1,undefined4 param_2)

{
  long lVar1;
  long local_30;
  undefined8 local_28;
  undefined4 local_14;
  
  local_28 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68);
  lVar1 = *(long *)(param_1 + 0x68);
  local_14 = param_2;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN_0106c700(&local_30,lVar1,&local_28,&local_14);
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    local_30 = 0;
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


