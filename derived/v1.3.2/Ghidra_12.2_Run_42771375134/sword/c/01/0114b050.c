/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0114b050; name: FUN_0114b050
 */


void FUN_0114b050(long param_1)

{
  undefined *puVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long local_28;
  
  puVar1 = PTR_DAT_027107a8;
  local_40 = 0xd51264897c48ba08;
  pcStack_38 = "Stop_Battle_Music";
  local_30 = 0x11;
  local_28 = 0;
  FUN_008962c0(*(long *)PTR_DAT_027107a8 + 0x108,&local_40);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  local_40 = 0x814567e9f124f2a4;
  pcStack_38 = "Stop_Win_Music";
  local_30 = 0xe;
  local_28 = 0;
  FUN_008962c0(*(long *)puVar1 + 0x108,&local_40);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  if (*(char *)(param_1 + 0x298) != '\0') {
    local_40 = 0x351565e9ca7c8356;
    pcStack_38 = "Stop_Audience_cheer_base";
    local_30 = 0x18;
    local_28 = 0;
    FUN_008962c0(*(long *)puVar1 + 0x108,&local_40);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return;
}


