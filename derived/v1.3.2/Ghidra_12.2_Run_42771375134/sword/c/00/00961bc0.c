/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00961bc0; name: FUN_00961bc0
 */


undefined4 FUN_00961bc0(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = 0x1000;
  if (param_1 < 0x329) {
    lVar2 = 0;
    switch(param_1) {
    case 3:
      lVar2 = 0x1a;
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
      goto switchD_00961bec_caseD_32a;
    case 6:
      break;
    case 9:
      lVar2 = 0x1b;
      break;
    case 0xc:
      lVar2 = 1;
      break;
    case 0x19:
      lVar2 = 2;
      break;
    case 0x34:
      lVar2 = 3;
      break;
    case 0x44:
      lVar2 = 4;
      break;
    default:
      switch(param_1) {
      case 0x5e:
        lVar2 = 5;
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
        goto switchD_00961bec_caseD_32a;
      case 99:
        lVar2 = 0x18;
        break;
      case 0x83:
        lVar2 = 6;
        break;
      case 0x85:
        lVar2 = 7;
        break;
      case 0x8f:
        lVar2 = 8;
        break;
      default:
        if (param_1 != 0x239) {
          return 0x1000;
        }
        lVar2 = 9;
      }
    }
  }
  else {
    switch(param_1) {
    case 0x329:
      lVar2 = 0x17;
      break;
    default:
      goto switchD_00961bec_caseD_32a;
    case 0x32c:
      lVar2 = 0x1c;
      break;
    case 0x32f:
      lVar2 = 0x1d;
      break;
    case 0x332:
      lVar2 = 0x1e;
      break;
    case 0x337:
      lVar2 = 0xb;
      break;
    case 0x33a:
      lVar2 = 0xf;
      break;
    case 0x342:
      lVar2 = 10;
      break;
    case 0x347:
      lVar2 = 0x10;
      break;
    case 0x349:
      lVar2 = 0x13;
      break;
    case 0x34a:
      lVar2 = 0x14;
      break;
    case 0x34c:
      lVar2 = 0x11;
      break;
    case 0x351:
      lVar2 = 0xc;
      break;
    case 0x353:
      lVar2 = 0x19;
      break;
    case 0x35a:
      lVar2 = 0x15;
      break;
    case 0x35d:
      lVar2 = 0x12;
      break;
    case 0x365:
      lVar2 = 0xd;
      break;
    case 0x36f:
      lVar2 = 0x16;
      break;
    case 0x374:
      lVar2 = 0xe;
      break;
    case 0x37c:
      lVar2 = 0x1f;
    }
  }
  uVar1 = (&DAT_0214b428)[lVar2 * 2];
switchD_00961bec_caseD_32a:
  return uVar1;
}


