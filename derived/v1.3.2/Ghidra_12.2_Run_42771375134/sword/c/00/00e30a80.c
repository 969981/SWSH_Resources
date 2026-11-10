/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e30a80; name: FUN_00e30a80
 */


void FUN_00e30a80(undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  uint uVar2;
  ulong *puVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  
  puVar3 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
  uVar5 = *puVar3;
  uVar7 = puVar3[1];
  do {
    uVar8 = uVar5 ^ uVar7;
    iVar6 = (int)uVar7;
    iVar4 = (int)uVar5;
    uVar7 = uVar8 >> 0x1b | uVar8 << 0x25;
    uVar5 = uVar8 ^ (uVar5 >> 0x28 | uVar5 << 0x18) ^ uVar8 << 0x10;
    uVar2 = iVar4 + iVar6 & 0x7f;
  } while (99 < uVar2);
  *puVar3 = uVar5;
  puVar3[1] = uVar7;
  cVar1 = *(char *)(param_3 + 4);
  switch(cVar1) {
  case 'G':
  case 'c':
switchD_00e30ae4_caseD_23:
    uVar2 = *(uint *)(param_2 + 4) | 1;
    break;
  case 'H':
  case 'J':
  case 'K':
  case 'L':
  case 'M':
  case 'N':
  case 'O':
  case 'P':
  case 'Q':
  case 'R':
  case 'S':
  case 'T':
  case 'U':
  case 'V':
  case 'W':
  case 'X':
  case 'Y':
  case 'Z':
  case '[':
  case '\\':
  case ']':
  case '^':
  case '`':
  case 'a':
  case 'b':
  case 'd':
  case 'e':
  case 'f':
  case 'g':
  case 'h':
    goto switchD_00e30ae4_caseD_2;
  case 'I':
  case '_':
switchD_00e30ae4_caseD_1:
    uVar2 = *(uint *)(param_2 + 4) | 2;
    break;
  case 'i':
switchD_00e30ae4_caseD_e:
    uVar2 = *(uint *)(param_2 + 4) | 4;
    break;
  default:
    switch(cVar1) {
    case '\x01':
      goto switchD_00e30ae4_caseD_1;
    case '\x02':
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
    case '\a':
    case '\b':
    case '\t':
    case '\n':
    case '\v':
    case '\f':
    case '\r':
    case '\x0f':
    case '\x10':
    case '\x11':
    case '\x12':
    case '\x13':
    case '\x14':
    case '\x15':
    case '\x16':
    case '\x17':
    case '\x18':
    case '\x19':
    case '\x1a':
    case '\x1b':
    case '\x1d':
    case '\x1e':
    case '\x1f':
    case ' ':
    case '!':
    case '\"':
      break;
    case '\x0e':
      goto switchD_00e30ae4_caseD_e;
    case '\x1c':
      uVar2 = *(uint *)(param_2 + 4) | 8;
      goto LAB_00e30b30;
    case '#':
      goto switchD_00e30ae4_caseD_23;
    default:
      if (cVar1 == -0x69) goto switchD_00e30ae4_caseD_1;
    }
switchD_00e30ae4_caseD_2:
    if ((uVar2 + 1 < 0x43) && (cVar1 == '8')) {
      if (*(int *)(param_3 + 8) == 2) {
        return;
      }
      uVar2 = *(uint *)(param_2 + 4) | 0x20;
    }
    else {
      if (uVar2 < 0x31) {
        return;
      }
      switch(cVar1) {
      case '\t':
      case '\x1f':
        uVar2 = *(uint *)(param_2 + 4) | 0x80;
        break;
      case '\n':
      case '\v':
      case '\f':
      case '\r':
      case '\x0e':
      case '\x0f':
      case '\x10':
      case '\x11':
      case '\x13':
      case '\x14':
      case '\x15':
      case '\x16':
      case '\x17':
      case '\x18':
      case '\x19':
      case '\x1a':
      case '\x1b':
      case '\x1c':
      case '\x1d':
      case '\x1e':
      case ' ':
      case '!':
      case '\"':
      case '#':
      case '$':
      case '%':
      case '&':
      case '\'':
      case '(':
      case ')':
        goto switchD_00e30b88_caseD_a;
      case '\x12':
        uVar2 = *(uint *)(param_2 + 4) | 0x100;
        break;
      case '*':
        uVar2 = *(uint *)(param_2 + 4) | 0x40;
        break;
      default:
        if (cVar1 == 'r') {
          uVar2 = *(uint *)(param_2 + 4) | 0x200;
        }
        else {
          if (cVar1 != -0x75) {
            return;
          }
          uVar2 = *(uint *)(param_2 + 4) | 0x400;
        }
      }
    }
  }
LAB_00e30b30:
  *(uint *)(param_2 + 4) = uVar2;
switchD_00e30b88_caseD_a:
  return;
}


