/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01061fc0; name: FUN_01061fc0
 */


void FUN_01061fc0(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_28;
  
  local_40 = 0xfcb987ee48bbde97;
  local_38 = "u_MaskBuffer";
  local_30 = 0xc;
  local_28 = 0;
  FUN_007394b0(*(undefined8 *)(param_1 + 0x268),&local_40,param_2,4);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x270) = param_3;
  *(undefined4 *)(*(long *)(param_1 + 0x268) + 0xfc) = param_3;
  return;
}


