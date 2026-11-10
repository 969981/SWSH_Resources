/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0109c5c0; name: FUN_0109c5c0
 */


void FUN_0109c5c0(undefined8 param_1,long *param_2,long *param_3)

{
  long local_68;
  long local_60;
  undefined1 *local_58;
  long local_50;
  long local_48;
  undefined4 local_40;
  char *local_38;
  
  local_38 = "bin/appli/lvup/bin/lvup_window_00_lyt.bin";
  FUN_008d4da0(&local_68,&local_38);
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
  param_2[1] = local_60;
  param_2[2] = (long)local_58;
  param_2[3] = local_50;
  param_2[4] = local_48;
  local_48 = 0;
  *(undefined4 *)(param_2 + 5) = local_40;
  if ((local_50 != 0) && (*param_2 != 0)) {
    (**(code **)(*(long *)(*param_2 + 0x48) + 0x18))();
  }
  *param_2 = local_68;
  local_68 = 0;
  local_60 = -0x340d631b7bddd9bb;
  local_58 = &DAT_01d38550;
  local_50 = 0;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  local_38 = "bin/appli/lvup/bin/uikit_lvup_window.bin";
  FUN_008d4da0(&local_68,&local_38);
  if ((param_3[3] != 0) && (*param_3 != 0)) {
    (**(code **)(*(long *)(*param_3 + 0x48) + 0x18))();
    *param_3 = 0;
  }
  *param_3 = 0;
  param_3[1] = -0x340d631b7bddd9bb;
  param_3[2] = (long)&DAT_01d38550;
  param_3[3] = 0;
  if (param_3[4] != 0) {
    (**(code **)(*(long *)(param_3[4] + 0x48) + 0x18))();
    param_3[4] = 0;
  }
  param_3[1] = local_60;
  param_3[2] = (long)local_58;
  param_3[3] = local_50;
  param_3[4] = local_48;
  local_48 = 0;
  *(undefined4 *)(param_3 + 5) = local_40;
  if ((local_50 != 0) && (*param_3 != 0)) {
    (**(code **)(*(long *)(*param_3 + 0x48) + 0x18))();
  }
  *param_3 = local_68;
  local_68 = 0;
  local_60 = 0xcbf29ce484222645;
  local_58 = &DAT_01d38550;
  local_50 = 0;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


