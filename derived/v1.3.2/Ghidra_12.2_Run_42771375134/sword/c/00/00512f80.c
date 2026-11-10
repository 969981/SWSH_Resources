/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00512f80; name: FUN_00512f80
 */


undefined4
FUN_00512f80(float param_1,uint param_2,uint param_3,int param_4,float *param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar1 = param_6 + 7;
  if (-1 < param_6) {
    iVar1 = param_6;
  }
  iVar1 = (1 << (ulong)(iVar1 >> 3 & 0x1f)) + 1;
  if (iVar1 < param_4) {
    param_1 = ((float)param_4 / (float)iVar1) * param_1;
  }
  fVar8 = -((1.0 / (float)param_2) * param_1);
  fVar6 = -((1.0 / (float)param_3) * param_1);
  fVar3 = (1.0 / (float)param_3) * param_1;
  param_1 = (1.0 / (float)param_2) * param_1;
  fVar5 = param_1 * 0.0;
  fVar4 = fVar3 * 0.0;
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
  param_5[0x16] = 0.0;
  param_5[0x17] = 0.0;
  param_5[0x1a] = 0.0;
  param_5[0x1b] = 0.0;
  param_5[0x1e] = 0.0;
  param_5[0x1f] = 0.0;
  param_5[8] = fVar8;
  param_5[9] = fVar6;
  param_5[0x10] = fVar8;
  param_5[0x11] = fVar3;
  param_5[0x18] = param_1;
  param_5[0x19] = fVar3;
  param_5[4] = fVar5;
  param_5[5] = fVar6;
  *param_5 = fVar5;
  param_5[1] = fVar4;
  param_5[0xc] = fVar8;
  param_5[0xd] = fVar4;
  param_5[0x14] = fVar5;
  param_5[0x15] = fVar3;
  param_5[0x1c] = param_1;
  param_5[0x1d] = fVar4;
  param_5[0x20] = param_1;
  param_5[0x21] = fVar6;
  param_5[0x22] = 0.0;
  param_5[0x23] = 0.0;
  if (iVar1 < 4) {
    return 9;
  }
  fVar7 = param_1 + param_1;
  fVar9 = fVar3 + fVar3;
  param_5[0x25] = fVar6;
  param_5[0x26] = 0.0;
  param_5[0x27] = 0.0;
  param_5[0x28] = param_1;
  param_5[0x2a] = 0.0;
  param_5[0x2b] = 0.0;
  fVar11 = fVar3 * -2.0;
  fVar10 = param_1 * -2.0;
  param_5[0x2d] = fVar3;
  param_5[0x2e] = 0.0;
  param_5[0x2f] = 0.0;
  param_5[0x29] = fVar11;
  param_5[0x24] = fVar7;
  param_5[0x2c] = fVar7;
  param_5[0x30] = param_1;
  param_5[0x31] = fVar9;
  param_5[0x32] = 0.0;
  param_5[0x33] = 0.0;
  param_5[0x34] = fVar8;
  param_5[0x35] = fVar9;
  param_5[0x36] = 0.0;
  param_5[0x37] = 0.0;
  param_5[0x38] = fVar10;
  param_5[0x39] = fVar3;
  param_5[0x3a] = 0.0;
  param_5[0x3b] = 0.0;
  param_5[0x3c] = fVar10;
  param_5[0x3d] = fVar6;
  param_5[0x3e] = 0.0;
  param_5[0x3f] = 0.0;
  param_5[0x40] = fVar8;
  param_5[0x41] = fVar11;
  param_5[0x42] = 0.0;
  param_5[0x43] = 0.0;
  if (iVar1 < 6) {
    return 0x11;
  }
  param_5[0x45] = fVar11;
  param_5[0x48] = fVar8;
  param_5[0x50] = fVar10;
  param_5[0x59] = fVar9;
  param_5[0x52] = 0.0;
  param_5[0x53] = 0.0;
  param_5[0x44] = param_1 * -3.0;
  param_5[0x49] = fVar3 * -4.0;
  param_5[0x4c] = param_1 * -4.0;
  param_5[0x51] = fVar3 * 3.0;
  param_5[0x58] = param_1 * 3.0;
  param_5[0x46] = 0.0;
  param_5[0x47] = 0.0;
  param_5[0x4a] = 0.0;
  param_5[0x4b] = 0.0;
  param_5[0x4d] = fVar3;
  param_5[0x4e] = 0.0;
  param_5[0x4f] = 0.0;
  param_5[0x54] = param_1;
  param_5[0x55] = fVar3 * 4.0;
  param_5[0x56] = 0.0;
  param_5[0x57] = 0.0;
  param_5[0x5a] = 0.0;
  param_5[0x5b] = 0.0;
  param_5[0x5e] = 0.0;
  param_5[0x5f] = 0.0;
  param_5[0x60] = fVar7;
  param_5[0x61] = fVar3 * -3.0;
  param_5[0x5c] = param_1 * 4.0;
  param_5[0x5d] = fVar6;
  param_5[0x62] = 0.0;
  param_5[99] = 0.0;
  if (iVar1 < 10) {
    return 0x19;
  }
  param_5[0x6c] = fVar5;
  param_5[0x74] = fVar5;
  uVar2 = 0x21;
  if (0x11 < iVar1) {
    uVar2 = 0xffffffff;
  }
  param_5[0x65] = fVar4;
  param_5[0x66] = 0.0;
  param_5[0x67] = 0.0;
  param_5[0x6a] = 0.0;
  param_5[0x6b] = 0.0;
  param_5[0x6e] = 0.0;
  param_5[0x6f] = 0.0;
  param_5[100] = param_1 * 8.0;
  param_5[0x68] = param_1 * 7.0;
  param_5[0x69] = fVar3 * -8.0;
  param_5[0x6d] = fVar3 * -8.0;
  param_5[0x70] = param_1 * 8.0;
  param_5[0x71] = fVar3 * 7.0;
  param_5[0x72] = 0.0;
  param_5[0x73] = 0.0;
  param_5[0x75] = fVar3 * 8.0;
  param_5[0x76] = 0.0;
  param_5[0x77] = 0.0;
  param_5[0x78] = param_1 * -7.0;
  param_5[0x79] = fVar3 * 8.0;
  param_5[0x7a] = 0.0;
  param_5[0x7b] = 0.0;
  param_5[0x7c] = param_1 * -8.0;
  param_5[0x7d] = fVar4;
  param_5[0x7e] = 0.0;
  param_5[0x7f] = 0.0;
  param_5[0x80] = param_1 * -8.0;
  param_5[0x81] = fVar3 * -7.0;
  param_5[0x82] = 0.0;
  param_5[0x83] = 0.0;
  return uVar2;
}


