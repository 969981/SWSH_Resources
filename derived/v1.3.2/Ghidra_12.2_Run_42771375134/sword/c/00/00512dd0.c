/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00512dd0; name: FUN_00512dd0
 */


undefined4
FUN_00512dd0(float param_1,uint param_2,uint param_3,int param_4,float *param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar1 = param_6 + 3;
  if (-1 < param_6) {
    iVar1 = param_6;
  }
  iVar1 = (1 << (ulong)(iVar1 >> 2 & 0x1f)) + 1;
  if (iVar1 < param_4) {
    param_1 = ((float)param_4 / (float)iVar1) * param_1;
  }
  if (param_4 <= iVar1) {
    iVar1 = param_4;
  }
  param_5[2] = 0.0;
  param_5[3] = 0.0;
  param_5[6] = 0.0;
  param_5[7] = 0.0;
  param_5[10] = 0.0;
  param_5[0xb] = 0.0;
  param_5[0xe] = 0.0;
  param_5[0xf] = 0.0;
  param_5[0x12] = 0.0;
  param_5[0x13] = 0.0;
  fVar4 = (1.0 / (float)param_3) * param_1;
  fVar5 = (1.0 / (float)param_2) * param_1;
  fVar7 = fVar5 * 0.0;
  fVar8 = fVar4 * 0.0;
  fVar6 = -((1.0 / (float)param_3) * param_1);
  fVar3 = -((1.0 / (float)param_2) * param_1);
  *param_5 = fVar7;
  param_5[1] = fVar8;
  param_5[4] = fVar7;
  param_5[5] = fVar6;
  param_5[8] = fVar3;
  param_5[9] = fVar8;
  param_5[0xc] = fVar7;
  param_5[0xd] = fVar4;
  param_5[0x10] = fVar5;
  param_5[0x11] = fVar8;
  if (iVar1 < 4) {
    return 5;
  }
  param_5[0x14] = fVar5 + fVar5;
  param_5[0x15] = fVar4;
  param_5[0x18] = fVar5;
  param_5[0x19] = fVar4 * -2.0;
  param_5[0x16] = 0.0;
  param_5[0x17] = 0.0;
  param_5[0x1a] = 0.0;
  param_5[0x1b] = 0.0;
  param_5[0x1e] = 0.0;
  param_5[0x1f] = 0.0;
  param_5[0x1c] = fVar5 * -2.0;
  param_5[0x1d] = fVar6;
  param_5[0x22] = 0.0;
  param_5[0x23] = 0.0;
  param_5[0x20] = fVar3;
  param_5[0x21] = fVar4 + fVar4;
  if (iVar1 < 6) {
    return 9;
  }
  param_5[0x2d] = fVar6;
  param_5[0x25] = fVar4;
  param_5[0x26] = 0.0;
  param_5[0x27] = 0.0;
  param_5[0x28] = fVar5;
  param_5[0x2a] = 0.0;
  param_5[0x2b] = 0.0;
  param_5[0x2e] = 0.0;
  param_5[0x2f] = 0.0;
  param_5[0x24] = fVar5 * -4.0;
  param_5[0x29] = fVar4 * 4.0;
  param_5[0x2c] = fVar5 * 4.0;
  param_5[0x30] = fVar3;
  param_5[0x31] = fVar4 * -4.0;
  param_5[0x32] = 0.0;
  param_5[0x33] = 0.0;
  if (iVar1 < 10) {
    return 0xd;
  }
  param_5[0x34] = fVar5 * 7.0;
  param_5[0x38] = fVar5 * -8.0;
  uVar2 = 0x11;
  if (0x11 < iVar1) {
    uVar2 = 0xffffffff;
  }
  param_5[0x36] = 0.0;
  param_5[0x37] = 0.0;
  param_5[0x3a] = 0.0;
  param_5[0x3b] = 0.0;
  param_5[0x35] = fVar4 * -8.0;
  param_5[0x3e] = 0.0;
  param_5[0x3f] = 0.0;
  param_5[0x41] = fVar4 * 7.0;
  param_5[0x39] = fVar4 * -7.0;
  param_5[0x3c] = fVar5 * -7.0;
  param_5[0x3d] = fVar4 * 8.0;
  param_5[0x40] = fVar5 * 8.0;
  param_5[0x42] = 0.0;
  param_5[0x43] = 0.0;
  return uVar2;
}


