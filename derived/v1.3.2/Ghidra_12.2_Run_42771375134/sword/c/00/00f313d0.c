/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f313d0; name: FUN_00f313d0
 */


void FUN_00f313d0(long *param_1)

{
  undefined *puVar1;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long local_38;
  undefined8 local_28;
  
  FUN_00db2d00();
  *(undefined1 *)(param_1 + 0xad) = 0;
  param_1[0xb1] = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  puVar1 = PTR_DAT_027209f8;
  *param_1 = (long)(PTR_DAT_027209f8 + 0x10);
  param_1[9] = (long)(puVar1 + 0x270);
  param_1[10] = (long)(puVar1 + 0x2b0);
  local_50 = 0x948fda59bd23598d;
  pcStack_48 = "PartsA3";
  local_28 = 0xf4445540341f74ef;
  local_40 = 7;
  local_38 = 0;
  FUN_00dc0810(param_1,&local_28,&local_50,0xffffffff);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  local_28 = 0x771ab7df186f0b68;
  local_50 = 0x948fda59bd23598d;
  pcStack_48 = "PartsA3";
  local_40 = 7;
  local_38 = 0;
  FUN_00dc0810(param_1,&local_28,&local_50,0xffffffff);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


