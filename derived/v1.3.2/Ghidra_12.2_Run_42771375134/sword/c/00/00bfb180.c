/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bfb180; name: FUN_00bfb180
 */


void FUN_00bfb180(long param_1)

{
  char local_a0 [8];
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_38;
  long local_30 [2];
  
  local_30[0] = *(long *)(param_1 + 0x5e0);
  if (local_30[0] != 0) {
    local_30[1] = 0x4504040e1d712292;
    (**(code **)(*(long *)(local_30[0] + 0x48) + 0x10))();
    local_38 = 0x40865424ba805bc0;
    FUN_008c4e70(param_1 + 0x100,local_30 + 1,local_30,&local_38,10);
    if (local_30[0] != 0) {
      (**(code **)(*(long *)(local_30[0] + 0x48) + 0x18))();
      local_30[0] = 0;
    }
    local_98 = 0x30305f;
    local_44 = 0;
    local_4c = 0;
    local_54 = 0;
    local_5c = 0;
    local_64 = 0;
    local_6c = 0;
    local_74 = 0;
    local_7c = 0;
    local_84 = 0;
    local_8c = 0;
    local_94 = 0;
    local_a0[0] = s_L_rankup_00_01d21c9d[0];
    local_a0[1] = s_L_rankup_00_01d21c9d[1];
    local_a0[2] = s_L_rankup_00_01d21c9d[2];
    local_a0[3] = s_L_rankup_00_01d21c9d[3];
    local_a0[4] = s_L_rankup_00_01d21c9d[4];
    local_a0[5] = s_L_rankup_00_01d21c9d[5];
    local_a0[6] = s_L_rankup_00_01d21c9d[6];
    local_a0[7] = s_L_rankup_00_01d21c9d[7];
    FUN_00bfbcd0(param_1,local_a0);
  }
  return;
}


