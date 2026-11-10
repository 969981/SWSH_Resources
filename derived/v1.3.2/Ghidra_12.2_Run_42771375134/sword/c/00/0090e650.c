/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0090e650; name: FUN_0090e650
 */


undefined8 FUN_0090e650(long param_1)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  char local_14 [4];
  
  local_14[0] = *(char *)(param_1 + 0x54);
  uVar2 = 0;
  switch(local_14[0]) {
  case '\0':
    break;
  case '\x01':
    uVar2 = 1;
    break;
  case '\x02':
    uVar2 = 2;
    break;
  case '\x03':
    uVar2 = 3;
    break;
  case '\x04':
    uVar2 = 4;
    break;
  case '\x05':
    uVar2 = 5;
    break;
  case '\x06':
    uVar2 = 6;
    break;
  case '\a':
    uVar2 = 7;
    break;
  case '\b':
    uVar2 = 8;
    break;
  case '\t':
    uVar2 = 9;
    break;
  case '\n':
    uVar2 = 10;
    break;
  case '\v':
    uVar2 = 0xb;
    break;
  case '\f':
    uVar2 = 0xc;
    break;
  case '\r':
    uVar2 = 0xd;
    break;
  case '\x0e':
    uVar2 = 0xe;
    break;
  case '\x0f':
    uVar2 = 0xf;
    break;
  case '\x10':
    uVar2 = 0x10;
    break;
  case '\x11':
    uVar2 = 0x11;
    break;
  case '\x12':
    uVar2 = 0x12;
    break;
  case '\x13':
    uVar2 = 0x13;
    break;
  case '\x14':
    uVar2 = 0x14;
    break;
  case '\x15':
    uVar2 = 0x15;
    break;
  case '\x16':
    uVar2 = 0x16;
    break;
  case '\x17':
    uVar2 = 0x17;
    break;
  case '\x18':
    uVar2 = 0x18;
    break;
  case '\x19':
    uVar2 = 0x19;
    break;
  case '\x1a':
    uVar2 = 0x1a;
    break;
  case '\x1b':
    uVar2 = 0x1b;
    break;
  case '\x1c':
    uVar2 = 0x1c;
    break;
  case '\x1d':
    uVar2 = 0x1d;
    break;
  case '\x1e':
    uVar2 = 0x1e;
    break;
  case '\x1f':
    uVar2 = 0x1f;
    break;
  case ' ':
    uVar2 = 0x20;
    break;
  case '!':
    uVar2 = 0x21;
    break;
  case '\"':
    uVar2 = 0x22;
    break;
  case '#':
    uVar2 = 0x23;
    break;
  case '$':
    uVar2 = 0x24;
    break;
  case '%':
    uVar2 = 0x25;
    break;
  case '&':
    uVar2 = 0x26;
    break;
  case '\'':
    uVar2 = 0x27;
    break;
  case '(':
    uVar2 = 0x28;
    break;
  case ')':
    uVar2 = 0x29;
    break;
  case '*':
    uVar2 = 0x2a;
    break;
  case '+':
    uVar2 = 0x2b;
    break;
  case ',':
    uVar2 = 0x2c;
    break;
  case '-':
    uVar2 = 0x2d;
    break;
  case '.':
    uVar2 = 0x2e;
    break;
  case '/':
    uVar2 = 0x2f;
    break;
  case '0':
    uVar2 = 0x30;
    break;
  case '1':
    goto switchD_0090e684_caseD_31;
  default:
    pcVar3 = (code *)0x0;
    goto LAB_0090e820;
  }
  pcVar3 = (code *)(&PTR_LAB_0261b7f0)[uVar2 * 3];
  uVar2 = (&DAT_0261b7f8)[uVar2 * 3];
LAB_0090e820:
  if ((pcVar3 != (code *)0x0) || (uVar2 != 0 && (uVar2 & 1) != 0)) {
    plVar1 = (long *)(param_1 + ((long)uVar2 >> 1));
    if ((uVar2 & 1) != 0) {
      pcVar3 = *(code **)(pcVar3 + *plVar1);
    }
    (*pcVar3)(plVar1,param_1 + 0x58,local_14);
    if (local_14[0] != *(char *)(param_1 + 0x54)) {
      *(char *)(param_1 + 0x54) = local_14[0];
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    return 0;
  }
switchD_0090e684_caseD_31:
  return 1;
}


