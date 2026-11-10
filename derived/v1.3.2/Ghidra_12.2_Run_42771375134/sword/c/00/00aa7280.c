/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa7280; name: FUN_00aa7280
 */


undefined8 FUN_00aa7280(undefined8 param_1,undefined1 param_2,uint param_3)

{
  uint uVar1;
  
  switch(param_2) {
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    if ((param_3 & 0xffff) == 0x31) {
      return 1;
    }
    if ((param_3 & 0xffff) == 0x88) {
      return 1;
    }
    return 0;
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x2c:
    if ((param_3 & 0xffff) == 0x32) {
      return 1;
    }
    if ((param_3 & 0xffff) == 0x89) {
      return 1;
    }
    break;
  case 0x16:
    if ((param_3 & 0xffff) == 0x2b) {
      return 1;
    }
    if ((param_3 & 0xffff) == 0xb2) {
      return 1;
    }
    break;
  case 0x17:
    if ((param_3 & 0xffff) == 0x2e) {
      return 1;
    }
    goto LAB_00aa7324;
  case 0x18:
    uVar1 = param_3 & 0xffff;
    if (uVar1 < 0xb2) {
      if (uVar1 == 0x2b) {
        return 1;
      }
      if (uVar1 == 0x2e) {
        return 1;
      }
      return 0;
    }
    if (uVar1 == 0xb2) {
      return 1;
    }
LAB_00aa7324:
    if ((param_3 & 0xffff) == 0xb5) {
      return 1;
    }
    break;
  case 0x19:
    if (((param_3 & 0xffff) < 0x2f) && ((1L << ((ulong)param_3 & 0x3f) & 0x4c0000000000U) != 0)) {
      return 1;
    }
    uVar1 = (param_3 & 0xffff) - 0xb1;
    if ((uVar1 < 5) && ((1 << (ulong)(uVar1 & 0x1f) & 0x13U) != 0)) {
      return 1;
    }
    break;
  case 0x1a:
    if ((param_3 & 0xffff) == 0x2f) {
      return 1;
    }
    if ((param_3 & 0xffff) == 0xb6) {
      return 1;
    }
    break;
  case 0x1b:
    if ((param_3 & 0xffff) == 0x30) {
      return 1;
    }
    if ((param_3 & 0xffff) == 0xb7) {
      return 1;
    }
    break;
  case 0x2d:
  case 0x2e:
    if ((param_3 & 0xffff) == 0x33) {
      return 1;
    }
    if ((param_3 & 0xffff) == 0xb8) {
      return 1;
    }
  }
  return 0;
}


