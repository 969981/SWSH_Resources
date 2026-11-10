/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f2ebb0; name: FUN_00f2ebb0
 */


void FUN_00f2ebb0(void)

{
  long lVar1;
  undefined4 local_24;
  long local_18;
  
  lVar1 = *(long *)(*(long *)PTR_DAT_02710848 + 0x68);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  local_24 = 0;
  FUN_00f2ec40(&local_18,lVar1,&local_24);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
    local_18 = 0;
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


