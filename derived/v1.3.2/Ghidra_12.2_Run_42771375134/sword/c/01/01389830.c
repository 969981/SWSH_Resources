/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01389830; name: FUN_01389830
 */


void FUN_01389830(long param_1,ulong param_2)

{
  float fVar1;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_28;
  
  if ((param_2 & 1) == 0) {
    return;
  }
  FUN_00794740(*(undefined8 *)(param_1 + 0xe0));
  FUN_00794740(*(undefined8 *)(param_1 + 0xd8));
  fVar1 = *(float *)(param_1 + 0xd0);
  if (*(float *)(param_1 + 0x80) <= fVar1) {
    if (fVar1 < *(float *)(param_1 + 0x84)) {
      local_40 = 0x9c686a804eb2b38c;
      local_38 = "Play_Camp_Cooking_TrueLove_hit_2";
      goto LAB_013898dc;
    }
    if (fVar1 < *(float *)(param_1 + 0x88)) {
      local_40 = 0x9c686b804eb2b53f;
      local_38 = "Play_Camp_Cooking_TrueLove_hit_3";
      goto LAB_013898dc;
    }
    if (fVar1 < *(float *)(param_1 + 0x8c)) {
      local_40 = 0x9c6868804eb2b026;
      local_38 = "Play_Camp_Cooking_TrueLove_hit_4";
      local_30 = 0x20;
      local_28 = 0;
      FUN_012d6d40(&local_40);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
      if (*(long *)(param_1 + 0xe8) == 0) {
        return;
      }
      FUN_00794740();
      FUN_007946a0(*(undefined8 *)(param_1 + 0xe8),1);
      return;
    }
  }
  local_40 = 0x9c686d804eb2b8a5;
  local_38 = "Play_Camp_Cooking_TrueLove_hit_1";
LAB_013898dc:
  local_30 = 0x20;
  local_28 = 0;
  FUN_012d6d40(&local_40);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


