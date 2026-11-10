/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007472f0; name: FUN_007472f0
 */


void FUN_007472f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_28;
  
  local_40 = 0xa74a33755f81f190;
  local_38 = "u_Source0";
  local_30 = 9;
  local_28 = 0;
  FUN_007394b0(*(undefined8 *)(param_1 + 0x270),&local_40,param_2,4);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  local_40 = 0xa74a34755f81f343;
  local_38 = "u_Source1";
  local_30 = 9;
  local_28 = 0;
  FUN_007394b0(*(undefined8 *)(param_1 + 0x270),&local_40,param_3,4);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


