/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0132b560; name: FUN_0132b560
 */


void FUN_0132b560(undefined8 param_1,uint param_2)

{
  long local_98;
  undefined8 local_90;
  undefined1 *local_88;
  long local_80;
  long local_78;
  undefined4 local_70;
  char local_68 [8];
  long local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  long local_48;
  long local_40;
  undefined4 local_38;
  
  FUN_008d4da0(&local_98,&PTR_s_bin_pokecamp_foodstuff_pokecamp__026932b8);
  local_40 = local_78;
  local_60 = local_98;
  uStack_58 = local_90;
  local_50 = local_88;
  local_48 = local_80;
  local_78 = 0;
  local_38 = local_70;
  if (local_80 != 0) {
    local_98 = 0;
  }
  local_68[0] = '\x01';
  FUN_01329f10(param_1,local_68,param_2 & 1);
  if (local_68[0] != '\0') {
    if ((local_48 != 0) && (local_60 != 0)) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    }
    local_60 = 0;
    uStack_58 = 0xcbf29ce484222645;
    local_50 = &DAT_01d38550;
    local_48 = 0;
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    }
    local_40 = 0;
    local_38 = 0;
    local_68[0] = '\0';
  }
  if ((local_80 != 0) && (local_98 != 0)) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
  }
  local_98 = 0;
  local_90 = 0xcbf29ce484222645;
  local_88 = &DAT_01d38550;
  local_80 = 0;
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
  }
  return;
}


