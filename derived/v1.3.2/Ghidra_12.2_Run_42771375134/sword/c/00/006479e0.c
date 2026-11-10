/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006479e0; name: FUN_006479e0
 */


undefined8
FUN_006479e0(float param_1,float param_2,float param_3,float param_4,long param_5,uint param_6,
            int param_7)

{
  float *pfVar1;
  char cVar2;
  float fVar3;
  undefined8 uVar4;
  
  fVar3 = DAT_01d4c154;
  cVar2 = *(char *)(param_5 + (ulong)param_6 * 0x10 + (long)param_7 + 0xc0);
  if (cVar2 == '\0') {
    return 0;
  }
  param_5 = param_5 + (ulong)*(byte *)(param_5 + (ulong)param_6 * 0x10 + (long)param_7 + 0x20);
  uVar4 = 0;
  pfVar1 = (float *)(param_5 + 400);
  switch(cVar2) {
  case '\x02':
    *pfVar1 = param_1;
    *(float *)(param_5 + 0x194) = param_2;
    *(float *)(param_5 + 0x198) = param_3;
    *(float *)(param_5 + 0x19c) = param_4;
    return 1;
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
    goto switchD_00647a30_caseD_3;
  case '\x06':
    *pfVar1 = param_1;
    *(float *)(param_5 + 0x194) = param_2;
    *(float *)(param_5 + 0x198) = param_3;
    return 1;
  case '\x10':
    *pfVar1 = param_1;
    *(float *)(param_5 + 0x194) = param_2;
    return 1;
  case '\x1c':
    param_2 = param_2 * DAT_01d4c154;
    param_3 = param_3 * DAT_01d4c154;
    *(char *)pfVar1 = (char)(int)(param_1 * DAT_01d4c154);
    *(char *)(param_5 + 0x191) = (char)(int)param_2;
    *(char *)(param_5 + 0x192) = (char)(int)param_3;
    break;
  case ')':
    *pfVar1 = param_1;
    goto LAB_00647ae8;
  default:
    if (cVar2 != 'W') {
      return 0;
    }
    param_2 = param_2 * DAT_01d4c154;
    param_3 = param_3 * DAT_01d4c154;
    *(char *)(param_5 + 0x192) = (char)(int)(param_1 * DAT_01d4c154);
    *(char *)(param_5 + 0x191) = (char)(int)param_2;
    *(char *)pfVar1 = (char)(int)param_3;
  }
  *(char *)(param_5 + 0x193) = (char)(int)(param_4 * fVar3);
LAB_00647ae8:
  uVar4 = 1;
switchD_00647a30_caseD_3:
  return uVar4;
}


