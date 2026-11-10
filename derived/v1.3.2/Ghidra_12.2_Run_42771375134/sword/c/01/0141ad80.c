/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0141ad80; name: FUN_0141ad80
 */


void FUN_0141ad80(undefined8 param_1,long *param_2)

{
  long local_60;
  long local_58;
  undefined1 *local_50;
  long local_48;
  long local_40;
  undefined4 local_38;
  char *local_28;
  
  local_28 = "bin/appli/pokecamp_dining/bin/pokecamp_d_result_00_lyt.bin";
  FUN_008d4da0(&local_60,&local_28);
  if ((param_2[3] != 0) && (*param_2 != 0)) {
    (**(code **)(*(long *)(*param_2 + 0x48) + 0x18))();
    *param_2 = 0;
  }
  *param_2 = 0;
  param_2[1] = -0x340d631b7bddd9bb;
  param_2[2] = (long)&DAT_01d38550;
  param_2[3] = 0;
  if (param_2[4] != 0) {
    (**(code **)(*(long *)(param_2[4] + 0x48) + 0x18))();
    param_2[4] = 0;
  }
  param_2[1] = local_58;
  param_2[2] = (long)local_50;
  param_2[3] = local_48;
  param_2[4] = local_40;
  local_40 = 0;
  *(undefined4 *)(param_2 + 5) = local_38;
  if ((local_48 != 0) && (*param_2 != 0)) {
    (**(code **)(*(long *)(*param_2 + 0x48) + 0x18))();
  }
  *param_2 = local_60;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  return;
}


