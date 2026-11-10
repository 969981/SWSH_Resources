/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ddf80; name: FUN_008ddf80
 */


undefined8 FUN_008ddf80(ushort param_1)

{
  if (param_1 < 0x170) {
    if (param_1 < 0x95) {
      switch(param_1) {
      case 0x31:
      case 0x44:
      case 0x45:
      case 0x52:
      case 0x5a:
      case 0x65:
      case 0x75:
        break;
      case 0x32:
      case 0x33:
      case 0x34:
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
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x51:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5b:
      case 0x5c:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
        goto switchD_008ddfac_caseD_2bb;
      default:
        if ((param_1 != 0xc) && (param_1 != 0x20)) {
          return 0;
        }
      }
    }
    else if (param_1 < 0xf3) {
      if ((param_1 != 0x95) && (param_1 != 0xa2)) {
        return 0;
      }
    }
    else if (((param_1 != 0xf3) && (param_1 != 0x11b)) && (param_1 != 0x149)) {
      return 0;
    }
  }
  else {
    switch(param_1) {
    case 0x2ba:
    case 0x2cd:
    case 0x2eb:
    case 0x2ec:
    case 0x2ed:
    case 0x2ee:
    case 0x2f0:
    case 0x2f1:
    case 0x2f4:
    case 0x307:
    case 0x309:
    case 0x317:
    case 0x318:
      break;
    case 699:
    case 700:
    case 0x2bd:
    case 0x2be:
    case 0x2bf:
    case 0x2c0:
    case 0x2c1:
    case 0x2c2:
    case 0x2c3:
    case 0x2c4:
    case 0x2c5:
    case 0x2c6:
    case 0x2c7:
    case 0x2c8:
    case 0x2c9:
    case 0x2ca:
    case 0x2cb:
    case 0x2cc:
    case 0x2ce:
    case 0x2cf:
    case 0x2d0:
    case 0x2d1:
    case 0x2d2:
    case 0x2d3:
    case 0x2d4:
    case 0x2d5:
    case 0x2d6:
    case 0x2d7:
    case 0x2d8:
    case 0x2d9:
    case 0x2da:
    case 0x2db:
    case 0x2dc:
    case 0x2dd:
    case 0x2de:
    case 0x2df:
    case 0x2e0:
    case 0x2e1:
    case 0x2e2:
    case 0x2e3:
    case 0x2e4:
    case 0x2e5:
    case 0x2e6:
    case 0x2e7:
    case 0x2e8:
    case 0x2e9:
    case 0x2ea:
    case 0x2ef:
    case 0x2f2:
    case 0x2f3:
    case 0x2f5:
    case 0x2f6:
    case 0x2f7:
    case 0x2f8:
    case 0x2f9:
    case 0x2fa:
    case 0x2fb:
    case 0x2fc:
    case 0x2fd:
    case 0x2fe:
    case 0x2ff:
    case 0x300:
    case 0x301:
    case 0x302:
    case 0x303:
    case 0x304:
    case 0x305:
    case 0x306:
    case 0x308:
    case 0x30a:
    case 0x30b:
    case 0x30c:
    case 0x30d:
    case 0x30e:
    case 0x30f:
    case 0x310:
    case 0x311:
    case 0x312:
    case 0x313:
    case 0x314:
    case 0x315:
    case 0x316:
switchD_008ddfac_caseD_2bb:
      return 0;
    default:
      if ((param_1 != 0x203) && (param_1 != 0x170)) {
        return 0;
      }
    }
  }
  return 1;
}


