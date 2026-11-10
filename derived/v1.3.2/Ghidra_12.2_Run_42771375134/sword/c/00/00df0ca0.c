/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df0ca0; name: FUN_00df0ca0
 */


void FUN_00df0ca0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_28;
  
  plVar2 = *(long **)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x91) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  if (0 < *(int *)(param_1 + 0xb0)) {
    *(int *)(param_1 + 0xb0) = *(int *)(PTR_DAT_0271ed60 + 0x94) + 1;
  }
  if (*(int *)(param_1 + 0xe8) == 3) {
    *(undefined4 *)(param_1 + 0x88) = 0;
    local_40 = 0xf39d0c2019596ff3;
    local_38 = "fi_common_event";
    local_30 = 0xf;
    local_28 = 0;
    (**(code **)(*plVar2 + 400))(plVar2,&local_40,0);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    FUN_006cf0a0(&local_40,&DAT_026537f0);
    (**(code **)(*plVar2 + 400))(plVar2,&local_40,*(undefined4 *)(param_1 + 0xfc));
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
    local_40 = 0x6f5d089c1c3de9c9;
    local_38 = "speak";
    local_30 = 5;
    local_28 = 0;
    (**(code **)(*plVar2 + 400))(plVar2,&local_40,0);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
  }
  FUN_00deec30(param_1,1);
  FUN_00df0350(param_1,1);
  lVar1 = *(long *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined1 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  return;
}


