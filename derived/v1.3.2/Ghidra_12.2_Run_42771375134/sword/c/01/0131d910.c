/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131d910; name: FUN_0131d910
 */


void FUN_0131d910(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  
  local_58 = *param_2;
  uStack_50 = param_2[1];
  local_48 = param_2[2];
  local_40 = param_2[3];
  local_38 = param_2[4];
  local_30 = param_2[5];
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x10))();
  }
  local_28 = param_2[6];
  FUN_006b5850(&local_58);
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
  }
  return;
}


