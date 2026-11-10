/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014e0000; name: FUN_014e0000
 */


void FUN_014e0000(long param_1)

{
  long local_18;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x7c)) {
  case 0:
    if (*(long *)(param_1 + 0x88) == 0) {
      local_18 = 0;
      FUN_014e12c0(0,2);
    }
    else {
      FUN_014ddc70(&local_18);
      FUN_014e12c0(local_18,2);
    }
    break;
  case 1:
    if (*(long *)(param_1 + 0x88) == 0) {
      local_18 = 0;
      FUN_014e12c0(0,3);
    }
    else {
      FUN_014ddc70(&local_18);
      FUN_014e12c0(local_18,3);
    }
    break;
  case 2:
    FUN_014e0160(param_1,0);
    goto switchD_014e0034_default;
  case 3:
    *(undefined4 *)(param_1 + 0x80) = 1;
    FUN_010364c0(*(undefined8 *)(param_1 + 0x2c8),0);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x2c8),0);
    FUN_014e0af0(*(undefined8 *)(param_1 + 0x98),0);
    if (*(int *)(param_1 + 0x80) != 2) goto switchD_014e0034_default;
    goto LAB_014e0130;
  default:
    goto switchD_014e0034_default;
  }
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
    local_18 = 0;
  }
  *(undefined4 *)(param_1 + 0x80) = 5;
  FUN_014e0af0(*(undefined8 *)(param_1 + 0x98),1);
  if (*(int *)(param_1 + 0x80) == 2) {
LAB_014e0130:
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x98),0);
  }
switchD_014e0034_default:
  *(undefined1 *)(param_1 + 0x78) = 0;
  return;
}


