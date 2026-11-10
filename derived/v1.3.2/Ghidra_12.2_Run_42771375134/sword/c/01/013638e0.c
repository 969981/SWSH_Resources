/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013638e0; name: FUN_013638e0
 */


void FUN_013638e0(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  undefined8 local_28;
  
  lVar2 = FUN_00c754c0(*(undefined8 *)(param_1 + 0x80),&local_50);
  if (lVar2 != 0) {
    local_50 = 0xbec493688c655e39;
    local_48 = "fi_action_number";
    local_40 = 0x10;
    local_38 = 0;
    local_28 = FUN_0069d0f0(lVar2,&local_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
    local_50 = 0xf59caea256a76c84;
    local_48 = "fi_action_trigger";
    local_40 = 0x11;
    local_38 = 0;
    local_58 = FUN_0069d250(lVar2,&local_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (((char)local_28 != '\0') && ((char)local_58 != '\0')) {
      FUN_0069d120(lVar2,&local_28,param_2);
      FUN_0069d260(lVar2,&local_58);
      *(undefined1 *)(param_1 + 0xe8) = 0;
      *(undefined4 *)(param_1 + 0xec) = 0;
      uVar1 = *(undefined8 *)(PTR_DAT_027152c0 + 8);
      *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)PTR_DAT_027152c0;
      *(undefined8 *)(param_1 + 0xd8) = uVar1;
      local_50 = 0xdbf2e415a4372431;
      local_48 = "Play_Camp_PlayingHit";
      local_40 = 0x14;
      local_38 = 0;
      FUN_012d6d40(&local_50);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
    }
  }
  return;
}


