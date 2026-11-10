/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0079af90; name: FUN_0079af90
 */


void FUN_0079af90(long *param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  long local_48 [2];
  char *local_38;
  undefined8 local_30;
  long local_28;
  
  local_48[1] = 0x90fdec53c23e35ea;
  local_38 = "PfxRenderPath";
  local_30 = 0xd;
  local_28 = 0;
  FUN_006fece0(param_1,local_48 + 1);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  puVar1 = PTR_DAT_02716580;
  param_1[0x42] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0xa8);
  param_1[10] = (long)(puVar1 + 0xe8);
  FUN_006fbc40(param_1 + 0x44);
  FUN_006fbc40(param_1 + 0x82);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  FUN_006fbc40(param_1 + 0xc2);
  puVar1 = PTR_DAT_027155e0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  param_1[0x107] = 0;
  param_1[0x106] = 0;
  param_1[0x102] = (long)(puVar1 + 0x10);
  param_1[0x105] = 0;
  param_1[0x104] = 0;
  param_1[0x114] = 0;
  param_1[0x117] = 0;
  param_1[0x116] = 0;
  local_48[0] = *param_2;
  if (local_48[0] == 0) {
    FUN_0079acd0(param_1,local_48);
    return;
  }
  plVar2 = (long *)(local_48[0] + 0x48);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  FUN_0079acd0(param_1,local_48);
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


