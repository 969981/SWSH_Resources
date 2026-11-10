/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a9d5b0; name: FUN_00a9d5b0
 */


undefined8 FUN_00a9d5b0(long *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 local_30;
  undefined4 local_24;
  
  switch(*(undefined4 *)((long)param_1 + 0xac)) {
  case 0:
    *(undefined4 *)((long)param_1 + 0xac) = 1;
  case 1:
    if (*(uint *)((long)param_1 + 0x1704) == 0xff) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = (long *)param_1[(ulong)*(uint *)((long)param_1 + 0x1704) + 0xa9];
      if (plVar3 != (long *)0x0) {
        (**(code **)(plVar3[9] + 0x10))();
      }
    }
    (**(code **)(*plVar3 + 0x198))(plVar3,1);
    FUN_00a837f0(param_1);
    FUN_00a84fa0(param_1);
    FUN_00a7a5a0(param_1,0);
    *(undefined4 *)((long)param_1 + 0xac) = 2;
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    (**(code **)(plVar3[9] + 0x18))(plVar3 + 9);
    return 0;
  case 2:
    uVar1 = FUN_00a79c80(param_1);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    local_24 = 1;
    FUN_00a7af00(param_1,&local_24,1);
    uVar2 = 3;
    break;
  case 3:
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
    if (*(char *)((long)param_1 + 0x1f71) == '\0') {
      return 0;
    }
    (**(code **)(*param_1 + 0xa80))(param_1);
    FUN_00a9cf90(param_1);
    uVar2 = 4;
    break;
  case 4:
    uVar1 = FUN_00a79c80(param_1);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    local_30 = 0x200000000;
    FUN_00a7af00(param_1,&local_30,2);
    uVar2 = 5;
    break;
  case 5:
    uVar1 = FUN_00a79c80(param_1);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  default:
    goto switchD_00a9d5e0_default;
  }
  *(undefined4 *)((long)param_1 + 0xac) = uVar2;
switchD_00a9d5e0_default:
  return 0;
}


