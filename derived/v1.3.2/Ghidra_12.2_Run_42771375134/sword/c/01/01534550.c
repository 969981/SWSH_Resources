/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01534550; name: FUN_01534550
 */


undefined8 FUN_01534550(undefined8 param_1,int param_2)

{
  if (0x328 < param_2) {
    switch(param_2) {
    case 0x329:
    case 0x32c:
    case 0x32f:
    case 0x332:
    case 0x337:
    case 0x33a:
    case 0x342:
    case 0x347:
    case 0x349:
    case 0x34a:
    case 0x34c:
    case 0x351:
    case 0x353:
    case 0x35a:
    case 0x35d:
    case 0x365:
    case 0x36f:
    case 0x374:
    case 0x37a:
    case 0x37c:
      goto switchD_01534578_caseD_329;
    default:
      goto switchD_01534578_caseD_32a;
    }
  }
  switch(param_2) {
  case 3:
  case 6:
  case 9:
  case 0xc:
  case 0x19:
  case 0x34:
  case 0x44:
    break;
  case 4:
  case 5:
  case 7:
  case 8:
  case 10:
  case 0xb:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
switchD_01534578_caseD_32a:
    return 0;
  default:
    if (((0x31 < param_2 - 0x5eU) ||
        ((1L << ((ulong)(param_2 - 0x5eU) & 0x3f) & 0x200a000000021U) == 0)) && (param_2 != 0x239))
    {
      return 0;
    }
  }
switchD_01534578_caseD_329:
  return 1;
}


