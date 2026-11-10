/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ed5a0; name: FUN_005ed5a0
 */


undefined8 FUN_005ed5a0(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  
  fVar1 = DAT_01d4c154;
  uVar2 = 0;
  switch(param_1) {
  case 2:
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    return 4;
  case 3:
  case 4:
  case 5:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
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
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3e:
  case 0x3f:
  case 0x40:
    goto switchD_005ed5c4_caseD_3;
  case 6:
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    return 3;
  case 0x10:
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    return 2;
  case 0x1c:
    *(char *)param_2 = (char)(int)(*param_3 * DAT_01d4c154);
    *(char *)((long)param_2 + 1) = (char)(int)(param_3[1] * fVar1);
    fVar3 = param_3[2];
LAB_005ed6a8:
    *(char *)((long)param_2 + 2) = (char)(int)(fVar3 * fVar1);
    *(char *)((long)param_2 + 3) = (char)(int)(param_3[3] * fVar1);
    return 4;
  case 0x29:
    *param_2 = *param_3;
    break;
  case 0x3d:
  case 0x41:
    *(char *)param_2 = (char)(int)(*param_3 * DAT_01d4c154);
    break;
  default:
    if (param_1 == 0x57) {
      *(char *)param_2 = (char)(int)(param_3[2] * DAT_01d4c154);
      *(char *)((long)param_2 + 1) = (char)(int)(param_3[1] * fVar1);
      fVar3 = *param_3;
      goto LAB_005ed6a8;
    }
    goto switchD_005ed5c4_caseD_3;
  }
  uVar2 = 1;
switchD_005ed5c4_caseD_3:
  return uVar2;
}


