/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ede920; name: FUN_00ede920
 */


void FUN_00ede920(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_30 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68);
  lVar1 = *(long *)(*(long *)PTR_DAT_02710848 + 0x68);
  local_28 = param_2;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN_00ede9d0(&local_38,lVar1,&local_30,param_1,&local_28);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


