/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad5d30; name: FUN_00ad5d30
 */


void FUN_00ad5d30(long param_1,byte param_2)

{
  undefined4 uVar1;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  long local_18;
  
  *(byte *)(param_1 + 0x50d) = param_2 & 1;
  uVar1 = 0;
  if ((param_2 & 1) == 0) {
    uVar1 = 0x3f800000;
  }
  local_30 = 0xb3c2035ed8330dbd;
  local_28 = "PM_Health";
  local_20 = 9;
  local_18 = 0;
  FUN_00ad17f0(uVar1,param_1,&local_30,0);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return;
}


