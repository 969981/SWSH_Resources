/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ae9f0; name: FUN_014ae9f0
 */


ulong FUN_014ae9f0(int param_1,short param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (param_1 < 0x2ea) {
    if (param_1 < 0x2a9) {
      if (param_1 == 0x1a5) {
        if (param_2 != 1) {
          return 0;
        }
        puVar2 = &UNK_0217175c;
      }
      else {
        uVar3 = 0;
        if (param_1 != 0x22b) goto switchD_014aea58_caseD_34e;
        if (param_2 == 1) {
          puVar2 = &UNK_02171764;
        }
        else {
          if (param_2 != 3) {
            return 0;
          }
          puVar2 = &UNK_0217176c;
        }
      }
    }
    else if (param_1 == 0x2a9) {
      if (param_2 != 1) {
        return 0;
      }
      puVar2 = &UNK_02171774;
    }
    else if (param_1 == 0x2cc) {
      if (param_2 != 1) {
        return 0;
      }
      puVar2 = &UNK_021717c4;
    }
    else {
      uVar3 = 0;
      if (param_1 != 0x2ce) goto switchD_014aea58_caseD_34e;
      if (param_2 != 4) {
        return 0;
      }
      puVar2 = &UNK_021717cc;
    }
  }
  else {
    uVar3 = 0;
    switch(param_1) {
    case 0x34d:
      if (param_2 == 1) {
        puVar2 = &UNK_0217178c;
      }
      else {
        if (param_2 != 2) {
          return 0;
        }
        puVar2 = &UNK_02171794;
      }
      break;
    case 0x34e:
    case 0x34f:
    case 0x350:
    case 0x351:
    case 0x352:
    case 0x353:
    case 0x354:
    case 0x355:
    case 0x356:
    case 0x357:
    case 0x358:
    case 0x359:
    case 0x35a:
    case 0x35b:
    case 0x35c:
    case 0x35d:
    case 0x35e:
    case 0x35f:
    case 0x360:
    case 0x361:
    case 0x362:
    case 0x363:
    case 0x364:
    case 0x365:
    case 0x366:
    case 0x367:
    case 0x368:
    case 0x369:
    case 0x36a:
    case 0x36c:
    case 0x36e:
    case 0x36f:
    case 0x370:
    case 0x371:
    case 0x372:
    case 0x373:
    case 0x374:
    case 0x375:
    case 0x376:
    case 0x377:
      goto switchD_014aea58_caseD_34e;
    case 0x36b:
      if (param_2 != 1) {
        return 0;
      }
      puVar2 = &UNK_021717b4;
      break;
    case 0x36d:
      if (param_2 != 1) {
        return 0;
      }
      puVar2 = &UNK_021717bc;
      break;
    case 0x378:
      if (param_2 != 1) {
        return 0;
      }
      puVar2 = &UNK_0217179c;
      break;
    case 0x379:
      if (param_2 != 1) {
        return 0;
      }
      puVar2 = &UNK_021717a4;
      break;
    case 0x37a:
      if (param_2 != 1) {
        return 0;
      }
      puVar2 = &UNK_021717ac;
      break;
    default:
      if (param_1 == 0x2ea) {
        if (param_2 != 1) {
          return 0;
        }
        puVar2 = &UNK_0217177c;
      }
      else {
        uVar3 = 0;
        if (param_1 != 0x30a) goto switchD_014aea58_caseD_34e;
        if (param_2 != 1) {
          return 0;
        }
        puVar2 = &UNK_02171784;
      }
    }
  }
  uVar1 = (ulong)*(ushort *)(puVar2 + 6) << 0x10;
  uVar3 = 1;
switchD_014aea58_caseD_34e:
  return uVar3 | uVar1;
}


