/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e2170; name: FUN_009e2170
 */


undefined4 FUN_009e2170(undefined4 param_1,short param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(long *)(PTR_DAT_02718ad8 + 8) == 0) {
    return 0xffffffff;
  }
  lVar3 = FUN_008df3f0(*(long *)(PTR_DAT_02718ad8 + 8),param_1);
  uVar4 = FUN_008e5a80();
  if ((uVar4 & 1) == 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_008e1290(lVar3);
  uVar2 = 0xffffffff;
  if (uVar1 < 0x329) {
    switch(uVar1) {
    case 3:
      if (param_2 != 0x305) {
        return 0xffffffff;
      }
      lVar3 = 0x1a;
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
      goto switchD_009e21d8_caseD_32a;
    case 6:
      if (param_2 != 0x2f5) {
        return 0xffffffff;
      }
      lVar3 = 0;
      break;
    case 9:
      if (param_2 != 0x2fd) {
        return 0xffffffff;
      }
      lVar3 = 0x1b;
      break;
    case 0xc:
      if (param_2 != 0x2f6) {
        return 0xffffffff;
      }
      lVar3 = 1;
      break;
    case 0x19:
      if (param_2 != 0x2f7) {
        return 0xffffffff;
      }
      lVar3 = 2;
      break;
    case 0x34:
      if (param_2 != 0x2f8) {
        return 0xffffffff;
      }
      lVar3 = 3;
      break;
    case 0x44:
      if (param_2 != 0x2f9) {
        return 0xffffffff;
      }
      lVar3 = 4;
      break;
    default:
      switch(uVar1) {
      case 0x5e:
        if (param_2 != 0x2fa) {
          return 0xffffffff;
        }
        lVar3 = 5;
        break;
      case 0x5f:
      case 0x60:
      case 0x61:
      case 0x62:
      case 100:
      case 0x65:
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
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x7f:
      case 0x80:
      case 0x81:
      case 0x82:
      case 0x84:
      case 0x86:
      case 0x87:
      case 0x88:
      case 0x89:
      case 0x8a:
      case 0x8b:
      case 0x8c:
      case 0x8d:
      case 0x8e:
        goto switchD_009e21d8_caseD_32a;
      case 99:
        if (param_2 != 0x2fd) {
          return 0xffffffff;
        }
        lVar3 = 0x18;
        break;
      case 0x83:
        if (param_2 != 0x2fb) {
          return 0xffffffff;
        }
        lVar3 = 6;
        break;
      case 0x85:
        if (param_2 != 0x2f8) {
          return 0xffffffff;
        }
        lVar3 = 7;
        break;
      case 0x8f:
        if (param_2 != 0x2f8) {
          return 0xffffffff;
        }
        lVar3 = 8;
        break;
      default:
        if (uVar1 != 0x239) {
          return 0xffffffff;
        }
        if (param_2 != 0x2fc) {
          return 0xffffffff;
        }
        lVar3 = 9;
      }
    }
  }
  else {
    switch(uVar1) {
    case 0x329:
      if (param_2 != 0x306) {
        return 0xffffffff;
      }
      lVar3 = 0x17;
      break;
    default:
      goto switchD_009e21d8_caseD_32a;
    case 0x32c:
      if (param_2 != 0x305) {
        return 0xffffffff;
      }
      lVar3 = 0x1c;
      break;
    case 0x32f:
      if (param_2 != 0x2f5) {
        return 0xffffffff;
      }
      lVar3 = 0x1d;
      break;
    case 0x332:
      if (param_2 != 0x2fd) {
        return 0xffffffff;
      }
      lVar3 = 0x1e;
      break;
    case 0x337:
      if (param_2 != 0x2fe) {
        return 0xffffffff;
      }
      lVar3 = 0xb;
      break;
    case 0x33a:
      if (param_2 != 0x301) {
        return 0xffffffff;
      }
      lVar3 = 0xf;
      break;
    case 0x342:
      if (param_2 != 0x2fd) {
        return 0xffffffff;
      }
      lVar3 = 10;
      break;
    case 0x347:
      if (param_2 != 0x302) {
        return 0xffffffff;
      }
      lVar3 = 0x10;
      break;
    case 0x349:
      if (param_2 != 0x305) {
        return 0xffffffff;
      }
      lVar3 = 0x13;
      break;
    case 0x34a:
      if (param_2 != 0x305) {
        return 0xffffffff;
      }
      lVar3 = 0x14;
      break;
    case 0x34c:
      if (param_2 != 0x303) {
        return 0xffffffff;
      }
      lVar3 = 0x11;
      break;
    case 0x351:
      if (param_2 != 0x2f7) {
        return 0xffffffff;
      }
      lVar3 = 0xc;
      break;
    case 0x353:
      if (param_2 != 0x2f5) {
        return 0xffffffff;
      }
      lVar3 = 0x19;
      break;
    case 0x35a:
      if (param_2 != 0x2ff) {
        return 0xffffffff;
      }
      lVar3 = 0x15;
      break;
    case 0x35d:
      if (param_2 != 0x304) {
        return 0xffffffff;
      }
      lVar3 = 0x12;
      break;
    case 0x365:
      if (param_2 != 0x2ff) {
        return 0xffffffff;
      }
      lVar3 = 0xd;
      break;
    case 0x36f:
      if (param_2 != 0x306) {
        return 0xffffffff;
      }
      lVar3 = 0x16;
      break;
    case 0x374:
      if (param_2 != 0x300) {
        return 0xffffffff;
      }
      lVar3 = 0xe;
      break;
    case 0x37c:
      if (*(char *)(lVar3 + 0x33d) == '\x01') {
        if (param_2 != 0x2fd) {
          return 0xffffffff;
        }
        lVar3 = 1;
      }
      else {
        if (*(char *)(lVar3 + 0x33d) != '\0') {
          return 0xffffffff;
        }
        if (param_2 != 0x304) {
          return 0xffffffff;
        }
        lVar3 = 0;
      }
      return (&DAT_01d4dc8c)[lVar3 * 4];
    }
  }
  uVar2 = (&DAT_0214dc30)[lVar3 * 3];
switchD_009e21d8_caseD_32a:
  return uVar2;
}


