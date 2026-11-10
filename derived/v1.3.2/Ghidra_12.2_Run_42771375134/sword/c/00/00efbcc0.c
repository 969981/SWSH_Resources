/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00efbcc0; name: FUN_00efbcc0
 */


void FUN_00efbcc0(undefined4 param_1)

{
  long lVar1;
  long local_28;
  undefined4 local_14;
  
  lVar1 = *(long *)(*(long *)PTR_DAT_02710848 + 0x68);
  local_14 = param_1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN_00efbd50(&local_28,lVar1,&local_14);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


