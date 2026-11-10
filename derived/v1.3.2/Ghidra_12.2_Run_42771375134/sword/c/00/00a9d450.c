/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a9d450; name: FUN_00a9d450
 */


undefined8 FUN_00a9d450(long *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 local_18;
  
  switch((int)param_1[0x15]) {
  case 0:
    *(undefined4 *)(param_1 + 0x15) = 1;
  case 1:
    FUN_00a837f0(param_1);
    FUN_00a84fa0(param_1);
    FUN_00a7a5a0(param_1,1);
    uVar2 = 2;
    break;
  case 2:
    uVar1 = FUN_00a79c80(param_1);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    if (*(char *)((long)param_1 + 0x1f71) == '\0') {
      return 0;
    }
    FUN_00a9cbd0(param_1,1);
    uVar2 = 3;
    break;
  case 3:
    uVar1 = FUN_00a79c80(param_1);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    local_18 = 0x300000001;
    FUN_00a7af00(param_1,&local_18,2);
    uVar2 = 4;
    break;
  case 4:
    uVar1 = FUN_00a79c80(param_1);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    uVar1 = FUN_00a69390(param_1);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    uVar1 = FUN_00a6a480(param_1);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    (**(code **)(*param_1 + 0xa80))(param_1);
    FUN_00a9cf90(param_1);
    uVar2 = 5;
    break;
  case 5:
    uVar1 = FUN_00a79c80(param_1);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    local_18 = 0x200000000;
    FUN_00a7af00(param_1,&local_18,2);
    uVar2 = 6;
    break;
  case 6:
    uVar1 = FUN_00a79c80(param_1);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  default:
    goto switchD_00a9d47c_default;
  }
  *(undefined4 *)(param_1 + 0x15) = uVar2;
switchD_00a9d47c_default:
  return 0;
}


