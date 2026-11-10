/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015030f0; name: FUN_015030f0
 */


undefined4 FUN_015030f0(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  if (param_2 < 4) {
    return 1;
  }
  if (param_2 < 6) {
    return 2;
  }
  if (param_2 < 9) {
    return 3;
  }
  if (param_2 < 0xc) {
    return 4;
  }
  if (param_2 < 0xf) {
    return 5;
  }
  if (param_2 < 0x13) {
    return 6;
  }
  if (param_2 < 0x17) {
    return 7;
  }
  if (param_2 < 0x1b) {
    return 8;
  }
  if (param_2 < 0x21) {
    return 9;
  }
  uVar1 = 10;
  if (param_2 != 0x21) {
    uVar1 = 0;
  }
  return uVar1;
}


