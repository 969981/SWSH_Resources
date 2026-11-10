/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0055ee30; name: FUN_0055ee30
 */


float FUN_0055ee30(long param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0xfa) != '\0') {
switchD_0055eebc_caseD_1c:
    return *(float *)(param_1 + 1000) * *(float *)(param_1 + 0x3f8);
  }
  uVar1 = *(uint *)(param_1 + 0xd4);
  if (uVar1 < 0x3c && (1L << ((ulong)uVar1 & 0x3f) & 0xf80007800007800U) != 0) {
    return *(float *)(param_1 + 0x3e0) * *(float *)(param_1 + 0x3f0);
  }
  if ((uVar1 != 0) && ((uVar1 | 1) == 0x19)) {
    return *(float *)(param_1 + 0x3e4) * *(float *)(param_1 + 0x3f4);
  }
  switch(uVar1) {
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x57:
  case 0x58:
  case 0x5b:
  case 0x5d:
    goto switchD_0055eebc_caseD_1c;
  default:
    return *(float *)(param_1 + 0x3dc) * *(float *)(param_1 + 0x3ec);
  }
}


