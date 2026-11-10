/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df08b0; name: FUN_00df08b0
 */


void FUN_00df08b0(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_28;
  
  if (*(char *)(param_1 + 0xe3) == '\0') {
    plVar2 = *(long **)(param_1 + 0x70);
    local_40 = 0xf39d0c2019596ff3;
    local_38 = "fi_common_event";
    local_30 = 0xf;
    local_28 = 0;
    (**(code **)(*plVar2 + 400))(plVar2,&local_40,*(undefined4 *)(param_1 + 0x108));
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
    local_40 = 0x57e81a56a5a7f061;
    local_38 = "fi_unique_event";
    local_30 = 0xf;
    local_28 = 0;
    (**(code **)(*plVar2 + 400))(plVar2,&local_40,*(undefined4 *)(param_1 + 0x10c));
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    iVar1 = *(int *)(param_1 + 0x108);
    if (iVar1 - 1U < 3) {
      local_40 = 0x6f5d089c1c3de9c9;
      local_38 = "speak";
      local_30 = 5;
      local_28 = 0;
      (**(code **)(*plVar2 + 400))(plVar2,&local_40,*(undefined4 *)(param_1 + 0x110));
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
      iVar1 = *(int *)(param_1 + 0x108);
    }
    if (iVar1 == 5) {
      FUN_006cf0a0(&local_40,&DAT_026537f0);
      (**(code **)(*plVar2 + 400))(plVar2,&local_40,5);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      }
      local_40 = 0x6f5d089c1c3de9c9;
      local_38 = "speak";
      local_30 = 5;
      local_28 = 0;
      (**(code **)(*plVar2 + 400))(plVar2,&local_40,3);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      }
    }
  }
  return;
}


