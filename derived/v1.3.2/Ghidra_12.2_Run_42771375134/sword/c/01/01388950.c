/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01388950; name: FUN_01388950
 */


void FUN_01388950(long param_1)

{
  code *pcVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long local_28;
  
  if (*(long *)(param_1 + 0x208) != 0) {
    FUN_007946a0(*(long *)(param_1 + 0x208),1);
  }
  if (*(long *)(param_1 + 0x1e0) != 0) {
    FUN_007946a0(*(long *)(param_1 + 0x1e0),1);
  }
  pcVar1 = *(code **)(param_1 + 0xd8);
  *(undefined1 *)(param_1 + 0x224) = 0;
  *(undefined1 *)(param_1 + 0x210) = 0;
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    (*pcVar1)(param_1 + 0xf0);
  }
  *(long *)(param_1 + 0xf0) = param_1;
  *(undefined1 **)(param_1 + 0xd0) = &LAB_01388ef0;
  *(undefined1 **)(param_1 + 0xd8) = &LAB_01388fc0;
  *(undefined1 **)(param_1 + 0xe0) = &LAB_01388fd0;
  *(undefined1 **)(param_1 + 0xe8) = &LAB_01388fe0;
  FUN_012dc620(param_1,PTR_DAT_02715420);
  *(undefined4 *)(param_1 + 0x228) = 0;
  local_40 = 0x7128cfbd7b7d375f;
  pcStack_38 = "Play_Camp_Cooking_TrueLove_Ready";
  local_30 = 0x20;
  local_28 = 0;
  FUN_012d6d40(&local_40);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


