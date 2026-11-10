/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009fc310; name: FUN_009fc310
 */


undefined8 FUN_009fc310(uint param_1)

{
  param_1 = param_1 & 0xffff;
  if (0x27d < param_1) {
    switch(param_1) {
    case 0x27e:
    case 0x27f:
    case 0x280:
    case 0x281:
    case 0x282:
    case 0x285:
    case 0x304:
    case 0x305:
    case 0x311:
    case 0x312:
    case 0x313:
    case 0x314:
    case 0x319:
    case 0x31a:
    case 0x31b:
    case 0x31c:
    case 0x31d:
    case 0x31e:
    case 799:
    case 0x323:
    case 0x324:
    case 0x325:
    case 0x326:
    case 0x37b:
    case 0x37c:
    case 0x37e:
    case 0x37f:
    case 0x380:
    case 0x381:
      goto switchD_009fc33c_caseD_27e;
    default:
      return 0;
    }
  }
  if (param_1 < 0x1e0) {
    if (((4 < param_1 - 0x179) && (2 < param_1 - 0x90)) && (2 < param_1 - 0xf3)) {
      return 0;
    }
  }
  else {
    if (8 < param_1 - 0x1e0) {
      return 0;
    }
    if ((1 << (ulong)(param_1 - 0x1e0 & 0x1f) & 0x167U) == 0) {
      return 0;
    }
  }
switchD_009fc33c_caseD_27e:
  return 1;
}


