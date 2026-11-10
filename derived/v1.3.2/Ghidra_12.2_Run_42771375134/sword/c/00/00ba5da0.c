/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ba5da0; name: FUN_00ba5da0
 */


void FUN_00ba5da0(long param_1)

{
  undefined4 local_30 [2];
  long local_28;
  long local_18;
  
  FUN_00bc46a0(*(undefined8 *)(param_1 + 0x78),0x2a,0);
  local_30[0] = 0;
  FUN_00bc53e0(&local_18,*(undefined8 *)(param_1 + 0x78));
  local_28 = local_18;
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
    local_18 = 0;
  }
  FUN_00ffa290(*(undefined8 *)(param_1 + 0x90),1,1);
  FUN_00ffa160(*(undefined8 *)(param_1 + 0x90),1,1);
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
  FUN_01036240(*(undefined8 *)(param_1 + 0x90),local_30);
  *(undefined4 *)(param_1 + 0x9c) = 0;
  return;
}


