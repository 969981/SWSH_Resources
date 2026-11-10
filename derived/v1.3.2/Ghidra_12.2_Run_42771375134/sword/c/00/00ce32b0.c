/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ce32b0; name: FUN_00ce32b0
 */


void FUN_00ce32b0(long param_1,int param_2)

{
  long local_30 [2];
  
  local_30[0] = *(long *)(param_1 + 0x6c0);
  local_30[1] = 0x73129179107f4232;
  if (local_30[0] != 0) {
    (**(code **)(*(long *)(local_30[0] + 0x48) + 0x10))();
  }
  FUN_008c4e70(param_1 + 0x100,local_30 + 1,local_30,PTR_DAT_0271c9c8 + (long)param_2 * 8,10);
  if (local_30[0] != 0) {
    (**(code **)(*(long *)(local_30[0] + 0x48) + 0x18))();
  }
  return;
}


