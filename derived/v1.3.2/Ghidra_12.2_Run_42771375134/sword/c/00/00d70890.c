/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d70890; name: FUN_00d70890
 */


undefined8 FUN_00d70890(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined4 local_14;
  
  uVar1 = 0;
  switch(*param_1) {
  case 1:
    break;
  case 2:
    return 1;
  case 3:
    return 2;
  case 4:
    return 3;
  case 5:
    return 4;
  case 6:
    return 5;
  case 7:
    return 7;
  case 8:
    return 8;
  case 9:
    return 9;
  case 10:
    return 6;
  case 0xb:
    return 10;
  default:
    local_14 = 2;
    uVar1 = FUN_00d70890(&local_14);
  }
  return uVar1;
}


