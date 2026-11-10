/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00799d40; name: FUN_00799d40
 */


void FUN_00799d40(long param_1,undefined8 param_2)

{
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  long local_18;
  
  local_30 = 0xd8fbe6a86236f90c;
  local_28 = "u_DepthBuffer";
  local_20 = 0xd;
  local_18 = 0;
  FUN_007394b0(*(undefined8 *)(param_1 + 0x268),&local_30,param_2,4);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return;
}


