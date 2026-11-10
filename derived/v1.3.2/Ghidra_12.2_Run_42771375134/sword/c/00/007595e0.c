/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007595e0; name: FUN_007595e0
 */


void FUN_007595e0(long param_1)

{
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_28;
  
  FUN_0079b4f0(param_1 + 0x270);
  local_40 = 0xe9c3870c222012aa;
  local_38 = "u_ColorBuffer";
  local_30 = 0xd;
  local_28 = 0;
  FUN_007394b0(*(undefined8 *)(param_1 + 0x268),&local_40,param_1 + 0x270,4);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


