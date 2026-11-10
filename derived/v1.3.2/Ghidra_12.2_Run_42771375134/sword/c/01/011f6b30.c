/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f6b30; name: FUN_011f6b30
 */


void FUN_011f6b30(undefined8 param_1,long *param_2)

{
  long lVar1;
  long local_30;
  long local_28;
  
  lVar1 = *(long *)PTR_DAT_02716b80;
  if (lVar1 != 0) {
    local_30 = *param_2;
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x10))();
    }
    local_28 = param_2[1];
    FUN_007c2e30(lVar1,&local_30);
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    }
  }
  return;
}


