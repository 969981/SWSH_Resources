/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00647ea0; name: FUN_00647ea0
 */


undefined8
FUN_00647ea0(long param_1,uint param_2,int param_3,byte param_4,byte param_5,byte param_6,
            byte param_7)

{
  char cVar1;
  float fVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  fVar2 = DAT_01d4c154;
  cVar1 = *(char *)(param_1 + (ulong)param_2 * 0x10 + (long)param_3 + 0xc0);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar4 = (ulong)*(byte *)(param_1 + (ulong)param_2 * 0x10 + (long)param_3 + 0x20);
  uVar3 = 0;
  switch(cVar1) {
  case '\x02':
    param_1 = param_1 + uVar4;
    *(float *)(param_1 + 400) = (float)param_4 / DAT_01d4c154;
    *(float *)(param_1 + 0x194) = (float)param_5 / fVar2;
    *(float *)(param_1 + 0x198) = (float)param_6 / fVar2;
    *(float *)(param_1 + 0x19c) = (float)param_7 / fVar2;
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
    goto switchD_00647ee4_caseD_3;
  case '\x06':
    param_1 = param_1 + uVar4;
    *(float *)(param_1 + 400) = (float)param_4 / DAT_01d4c154;
    *(float *)(param_1 + 0x194) = (float)param_5 / fVar2;
    *(float *)(param_1 + 0x198) = (float)param_6 / fVar2;
    break;
  case '\x10':
    *(float *)(param_1 + uVar4 + 400) = (float)param_4 / DAT_01d4c154;
    *(float *)(param_1 + uVar4 + 0x194) = (float)param_5 / fVar2;
    break;
  case '\x1c':
    param_1 = param_1 + uVar4;
    *(byte *)(param_1 + 400) = param_4;
    *(byte *)(param_1 + 0x191) = param_5;
    *(byte *)(param_1 + 0x192) = param_6;
    *(byte *)(param_1 + 0x193) = param_7;
    return 1;
  default:
    if (cVar1 == 'W') {
      param_1 = param_1 + uVar4;
      *(byte *)(param_1 + 0x192) = param_4;
      *(byte *)(param_1 + 0x191) = param_5;
      *(byte *)(param_1 + 400) = param_6;
      *(byte *)(param_1 + 0x193) = param_7;
      return 1;
    }
    goto switchD_00647ee4_caseD_3;
  }
  uVar3 = 1;
switchD_00647ee4_caseD_3:
  return uVar3;
}


