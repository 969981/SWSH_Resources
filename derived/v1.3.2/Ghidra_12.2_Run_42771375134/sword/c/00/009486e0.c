/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009486e0; name: FUN_009486e0
 */


undefined8 FUN_009486e0(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x184;
  switch(param_1) {
  case 1:
    break;
  case 2:
    return 0x1b0;
  case 3:
    return 0x198;
  case 4:
    return 0x170;
  case 5:
    return 0x158;
  case 6:
    return 0x1e4;
  default:
    uVar1 = 0xffff;
  }
  return uVar1;
}


