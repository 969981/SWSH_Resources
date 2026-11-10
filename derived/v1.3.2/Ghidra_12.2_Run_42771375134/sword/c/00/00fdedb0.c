/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fdedb0; name: FUN_00fdedb0
 */


void FUN_00fdedb0(long param_1,char *param_2)

{
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_28;
  
  if (*(int *)(param_1 + 0x5cc) != 2) {
    if ((*(int *)(param_1 + 0x5cc) != 1) && (param_2[1] == '\0')) {
      local_40 = 0x9d0a052a10f3ef57;
      local_38 = "Play_Prop_Gimmick_trainer_eye_slide_in";
      local_30 = 0x26;
      local_28 = 0;
      FUN_016d3620(&local_40);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      }
    }
    *(undefined4 *)(param_1 + 0x5cc) = 1;
    if (*param_2 != '\0') {
      *(undefined4 *)(param_1 + 0x5d0) = *(undefined4 *)(param_1 + 0x5d4);
    }
  }
  return;
}


