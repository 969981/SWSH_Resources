/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00648170; name: FUN_00648170
 */


undefined8 FUN_00648170(long param_1,uint param_2,int param_3,byte *param_4)

{
  long lVar1;
  char cVar2;
  float fVar3;
  undefined8 uVar4;
  ulong uVar5;
  float fVar6;
  
  fVar3 = DAT_01d4c154;
  cVar2 = *(char *)(param_1 + (ulong)param_2 * 0x10 + (long)param_3 + 0xc0);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar5 = (ulong)*(byte *)(param_1 + (ulong)param_2 * 0x10 + (long)param_3 + 0x20);
  uVar4 = 0;
  switch(cVar2) {
  case '\x02':
    fVar6 = (float)NEON_ucvtf((uint)*param_4);
    param_1 = param_1 + uVar5;
    *(float *)(param_1 + 400) = fVar6 / DAT_01d4c154;
    fVar6 = (float)NEON_ucvtf((uint)param_4[1]);
    *(float *)(param_1 + 0x194) = fVar6 / fVar3;
    fVar6 = (float)NEON_ucvtf((uint)param_4[2]);
    *(float *)(param_1 + 0x198) = fVar6 / fVar3;
    fVar6 = (float)NEON_ucvtf((uint)param_4[3]);
    *(float *)(param_1 + 0x19c) = fVar6 / fVar3;
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
    goto switchD_006481b8_caseD_3;
  case '\x06':
    fVar6 = (float)NEON_ucvtf((uint)*param_4);
    param_1 = param_1 + uVar5;
    *(float *)(param_1 + 400) = fVar6 / DAT_01d4c154;
    fVar6 = (float)NEON_ucvtf((uint)param_4[1]);
    *(float *)(param_1 + 0x194) = fVar6 / fVar3;
    fVar6 = (float)NEON_ucvtf((uint)param_4[2]);
    *(float *)(param_1 + 0x198) = fVar6 / fVar3;
    break;
  case '\x10':
    fVar6 = (float)NEON_ucvtf((uint)*param_4);
    *(float *)(param_1 + uVar5 + 400) = fVar6 / DAT_01d4c154;
    fVar6 = (float)NEON_ucvtf((uint)param_4[1]);
    *(float *)(param_1 + uVar5 + 0x194) = fVar6 / fVar3;
    break;
  case '\x1c':
    lVar1 = param_1 + uVar5;
    *(byte *)(lVar1 + 400) = *param_4;
    *(byte *)(lVar1 + 0x191) = param_4[1];
    *(byte *)(lVar1 + 0x192) = param_4[2];
    goto LAB_006482c8;
  default:
    if (cVar2 != 'W') {
      return 0;
    }
    lVar1 = param_1 + uVar5;
    *(byte *)(lVar1 + 0x192) = *param_4;
    *(byte *)(lVar1 + 0x191) = param_4[1];
    *(byte *)(lVar1 + 400) = param_4[2];
LAB_006482c8:
    *(byte *)(param_1 + uVar5 + 0x193) = param_4[3];
  }
  uVar4 = 1;
switchD_006481b8_caseD_3:
  return uVar4;
}


