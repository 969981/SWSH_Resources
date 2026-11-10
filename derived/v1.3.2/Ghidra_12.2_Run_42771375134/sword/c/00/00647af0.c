/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00647af0; name: FUN_00647af0
 */


undefined8 FUN_00647af0(long param_1,uint param_2,int param_3,float *param_4)

{
  float *pfVar1;
  char cVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  
  fVar3 = DAT_01d4c154;
  cVar2 = *(char *)(param_1 + (ulong)param_2 * 0x10 + (long)param_3 + 0xc0);
  if (cVar2 == '\0') {
    return 0;
  }
  param_1 = param_1 + (ulong)*(byte *)(param_1 + (ulong)param_2 * 0x10 + (long)param_3 + 0x20);
  uVar4 = 0;
  pfVar1 = (float *)(param_1 + 400);
  switch(cVar2) {
  case '\x02':
    *pfVar1 = *param_4;
    *(float *)(param_1 + 0x194) = param_4[1];
    *(undefined8 *)(param_1 + 0x198) = 0;
    break;
  case '\x03':
  case '\x04':
  case '\x05':
  case '\a':
  case '\b':
  case '\t':
  case '\n':
  case '\v':
  case '\f':
  case '\r':
  case '\x0e':
  case '\x0f':
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
  case '#':
  case '$':
  case '%':
  case '&':
  case '\'':
  case '(':
    goto switchD_00647b40_caseD_3;
  case '\x06':
    *pfVar1 = *param_4;
    *(float *)(param_1 + 0x194) = param_4[1];
    *(undefined4 *)(param_1 + 0x198) = 0;
    break;
  case '\x10':
    *pfVar1 = *param_4;
    *(float *)(param_1 + 0x194) = param_4[1];
    break;
  case '\x1c':
    *(char *)pfVar1 = (char)(int)(*param_4 * DAT_01d4c154);
    fVar5 = param_4[1];
    *(undefined2 *)(param_1 + 0x192) = 0;
    *(char *)(param_1 + 0x191) = (char)(int)(fVar5 * fVar3);
    break;
  case ')':
    *pfVar1 = *param_4;
    break;
  default:
    if (cVar2 != 'W') {
      return 0;
    }
    *(char *)(param_1 + 0x192) = (char)(int)(*param_4 * DAT_01d4c154);
    fVar5 = param_4[1];
    *(undefined1 *)pfVar1 = 0;
    *(undefined1 *)(param_1 + 0x193) = 0;
    *(char *)(param_1 + 0x191) = (char)(int)(fVar5 * fVar3);
  }
  uVar4 = 1;
switchD_00647b40_caseD_3:
  return uVar4;
}


