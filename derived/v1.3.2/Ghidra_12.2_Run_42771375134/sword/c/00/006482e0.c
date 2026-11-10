/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006482e0; name: FUN_006482e0
 */


undefined8 FUN_006482e0(long param_1,uint param_2,int param_3,float *param_4)

{
  long lVar1;
  char cVar2;
  float fVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  fVar3 = DAT_01d4c154;
  cVar2 = *(char *)(param_1 + (ulong)param_2 * 0x10 + (long)param_3 + 0xc0);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar5 = (ulong)*(byte *)(param_1 + (ulong)param_2 * 0x10 + (long)param_3 + 0x20);
  uVar4 = 0;
  switch(cVar2) {
  case '\x02':
    param_1 = param_1 + uVar5;
    *(float *)(param_1 + 400) = *param_4;
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
    goto switchD_00648324_caseD_3;
  case '\x06':
    param_1 = param_1 + uVar5;
    *(float *)(param_1 + 400) = *param_4;
    *(float *)(param_1 + 0x194) = param_4[1];
    *(float *)(param_1 + 0x198) = param_4[2];
    break;
  case '\x10':
    *(float *)(param_1 + uVar5 + 400) = *param_4;
    *(float *)(param_1 + uVar5 + 0x194) = param_4[1];
    break;
  case '\x1c':
    lVar1 = param_1 + uVar5;
    *(char *)(lVar1 + 400) = (char)(int)(*param_4 * DAT_01d4c154);
    *(char *)(lVar1 + 0x191) = (char)(int)(param_4[1] * fVar3);
    *(char *)(lVar1 + 0x192) = (char)(int)(param_4[2] * fVar3);
    goto LAB_00648414;
  default:
    if (cVar2 != 'W') {
      return 0;
    }
    lVar1 = param_1 + uVar5;
    *(char *)(lVar1 + 0x192) = (char)(int)(*param_4 * DAT_01d4c154);
    *(char *)(lVar1 + 0x191) = (char)(int)(param_4[1] * fVar3);
    *(char *)(lVar1 + 400) = (char)(int)(param_4[2] * fVar3);
LAB_00648414:
    *(char *)(param_1 + uVar5 + 0x193) = (char)(int)(param_4[3] * fVar3);
  }
  uVar4 = 1;
switchD_00648324_caseD_3:
  return uVar4;
}


