/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00647d50; name: FUN_00647d50
 */


undefined8 FUN_00647d50(long param_1,uint param_2,int param_3,float *param_4)

{
  float *pfVar1;
  char cVar2;
  float fVar3;
  undefined8 uVar4;
  
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
    *(float *)(param_1 + 0x198) = param_4[2];
    *(float *)(param_1 + 0x19c) = param_4[3];
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
    goto switchD_00647da0_caseD_3;
  case '\x06':
    *pfVar1 = *param_4;
    *(float *)(param_1 + 0x194) = param_4[1];
    *(float *)(param_1 + 0x198) = param_4[2];
    break;
  case '\x10':
    *pfVar1 = *param_4;
    *(float *)(param_1 + 0x194) = param_4[1];
    break;
  case '\x1c':
    *(char *)pfVar1 = (char)(int)(*param_4 * DAT_01d4c154);
    *(char *)(param_1 + 0x191) = (char)(int)(param_4[1] * fVar3);
    *(char *)(param_1 + 0x192) = (char)(int)(param_4[2] * fVar3);
    goto LAB_00647e7c;
  case ')':
    *pfVar1 = *param_4;
    break;
  default:
    if (cVar2 != 'W') {
      return 0;
    }
    *(char *)(param_1 + 0x192) = (char)(int)(*param_4 * DAT_01d4c154);
    *(char *)(param_1 + 0x191) = (char)(int)(param_4[1] * fVar3);
    *(char *)pfVar1 = (char)(int)(param_4[2] * fVar3);
LAB_00647e7c:
    *(char *)(param_1 + 0x193) = (char)(int)(param_4[3] * fVar3);
  }
  uVar4 = 1;
switchD_00647da0_caseD_3:
  return uVar4;
}


