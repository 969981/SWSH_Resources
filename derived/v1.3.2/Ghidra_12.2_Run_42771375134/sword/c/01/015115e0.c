/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015115e0; name: FUN_015115e0
 */


void FUN_015115e0(undefined8 param_1,long param_2,int param_3,int param_4)

{
  long local_18;
  
  FUN_01511640(&local_18,param_2 + (long)param_3 * 0x110 + 0x60,(long)param_4);
  FUN_006cf0c0(param_1,&local_18);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return;
}


