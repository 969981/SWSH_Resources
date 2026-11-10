/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005103b0; name: FUN_005103b0
 */


undefined4 FUN_005103b0(int param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0:
  case 0xf:
  case 0x11:
    return DAT_01d4c6b8;
  case 1:
    return DAT_01d4c370;
  case 2:
    return DAT_01d4bc68;
  case 3:
    return DAT_01d4c1b4;
  case 4:
    return DAT_01d4be18;
  }
  uVar1 = 0x3f800000;
  if (8 < param_1 - 6U && param_1 != 0x10) {
    uVar1 = DAT_01d4c18c;
  }
  return uVar1;
}


