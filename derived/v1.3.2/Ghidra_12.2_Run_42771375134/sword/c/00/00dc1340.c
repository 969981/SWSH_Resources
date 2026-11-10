/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc1340; name: FUN_00dc1340
 */


void FUN_00dc1340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long local_38;
  
  lVar1 = FUN_00dc3500(&local_38,param_3);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  local_38 = lVar1;
  FUN_006d9640(param_1,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  local_38 = lVar1;
  FUN_0069ae40(lVar1,param_3,param_2,1);
  FUN_00dc1400(param_1,lVar1);
  uVar2 = FUN_00da32a0(lVar1);
  if ((uVar2 & 1) != 0) {
    FUN_013de0d0(param_1,param_3,&local_38);
  }
  return;
}


