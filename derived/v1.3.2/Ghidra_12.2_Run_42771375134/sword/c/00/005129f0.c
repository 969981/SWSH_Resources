/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005129f0; name: FUN_005129f0
 */


void FUN_005129f0(float param_1,uint param_2,uint param_3,float *param_4,undefined4 *param_5,
                 uint param_6)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar6 = param_1 / (float)param_2;
  fVar9 = fVar6 * DAT_01d4bc6c;
  param_1 = param_1 / (float)param_3;
  fVar5 = fVar6 * DAT_01d4be1c;
  fVar7 = param_1 * DAT_01d4be1c;
  fVar8 = param_1 * DAT_01d4bc6c;
  param_4[2] = 0.0;
  param_4[3] = 0.0;
  param_4[1] = param_1;
  bVar1 = (param_6 & 1) == 0;
  *param_4 = fVar5;
  *param_5 = 0x3ff33333;
  param_4[4] = fVar6;
  param_4[5] = fVar7;
  param_4[6] = 0.0;
  param_4[7] = 0.0;
  param_5[1] = 0x3ff33333;
  param_4[8] = fVar9;
  param_4[9] = param_1;
  param_4[10] = 0.0;
  param_4[0xb] = 0.0;
  param_5[2] = 0x3ff33333;
  param_4[0xc] = fVar6;
  param_4[0xd] = fVar8;
  param_4[0xe] = 0.0;
  param_4[0xf] = 0.0;
  param_5[3] = 0x3ff33333;
  param_4[0x10] = fVar5;
  param_4[0x12] = 0.0;
  param_4[0x13] = 0.0;
  param_4[0x11] = param_1 * -0.5;
  param_5[4] = 0x40733333;
  param_4[0x14] = fVar6 * -0.5;
  param_4[0x15] = fVar7;
  param_4[0x16] = 0.0;
  param_4[0x17] = 0.0;
  param_5[5] = 0x40733333;
  param_4[0x18] = fVar9;
  param_4[0x19] = param_1 * -0.5;
  param_4[0x1a] = 0.0;
  param_4[0x1b] = 0.0;
  param_5[6] = 0x40733333;
  param_4[0x1c] = fVar6 * -0.5;
  param_4[0x1d] = fVar8;
  param_4[0x1e] = 0.0;
  param_4[0x1f] = 0.0;
  param_5[7] = 0x40733333;
  fVar7 = DAT_01d4beec;
  fVar5 = DAT_01d4c500;
  if (bVar1) {
    fVar7 = DAT_01d4bccc;
    fVar5 = DAT_01d4bf40;
  }
  param_4[0x22] = 0.0;
  param_4[0x23] = 0.0;
  fVar8 = 8.0 - 1.0 / fVar7;
  fVar11 = 3.0 - 1.0 / fVar5;
  fVar10 = fVar7 * 0.5 * fVar5 * 0.5 * 4.0;
  fVar9 = fVar6 * -fVar8;
  fVar5 = param_1 * -fVar8;
  param_4[0x21] = param_1 * fVar11;
  param_4[0x20] = fVar9;
  param_5[8] = fVar10;
  param_4[0x24] = fVar9;
  fVar12 = param_1 * -fVar11;
  fVar9 = fVar6 * -fVar11;
  param_4[0x25] = fVar12;
  param_4[0x26] = 0.0;
  param_4[0x27] = 0.0;
  param_5[9] = fVar10;
  param_4[0x28] = fVar9;
  param_4[0x29] = fVar5;
  param_4[0x2a] = 0.0;
  param_4[0x2b] = 0.0;
  param_5[10] = fVar10;
  param_4[0x2d] = fVar5;
  param_4[0x2c] = fVar6 * fVar11;
  param_4[0x2e] = 0.0;
  param_4[0x2f] = 0.0;
  param_5[0xb] = fVar10;
  param_4[0x30] = fVar6 * fVar8;
  param_4[0x31] = fVar12;
  param_4[0x32] = 0.0;
  param_4[0x33] = 0.0;
  param_5[0xc] = fVar10;
  param_4[0x34] = fVar6 * fVar8;
  param_4[0x35] = param_1 * fVar11;
  param_4[0x36] = 0.0;
  param_4[0x37] = 0.0;
  param_5[0xd] = fVar10;
  param_4[0x38] = fVar6 * fVar11;
  param_4[0x39] = param_1 * fVar8;
  param_4[0x3a] = 0.0;
  param_4[0x3b] = 0.0;
  param_5[0xe] = fVar10;
  param_4[0x3d] = param_1 * fVar8;
  fVar5 = DAT_01d4c080;
  if (bVar1) {
    fVar5 = DAT_01d4bcb8;
  }
  param_4[0x3c] = fVar9;
  param_4[0x3e] = 0.0;
  param_4[0x3f] = 0.0;
  param_5[0xf] = fVar10;
  fVar8 = 5.0 - 1.0 / fVar7;
  param_4[0x41] = param_1 * fVar8;
  param_4[0x42] = 0.0;
  param_4[0x43] = 0.0;
  fVar9 = 8.0 - 1.0 / fVar5;
  fVar5 = fVar5 * 0.5 * fVar7 * 0.5 * 4.0 * DAT_01d4bee0;
  fVar7 = fVar6 * -fVar9;
  fVar10 = param_1 * -fVar9;
  param_4[0x40] = fVar7;
  param_5[0x10] = fVar5;
  param_4[0x44] = fVar7;
  fVar11 = param_1 * -fVar8;
  fVar7 = fVar6 * -fVar8;
  param_4[0x45] = fVar11;
  param_4[0x46] = 0.0;
  param_4[0x47] = 0.0;
  param_5[0x11] = fVar5;
  param_4[0x48] = fVar7;
  param_4[0x49] = fVar10;
  param_4[0x4a] = 0.0;
  param_4[0x4b] = 0.0;
  param_5[0x12] = fVar5;
  param_4[0x4d] = fVar10;
  param_4[0x4c] = fVar6 * fVar8;
  param_4[0x4e] = 0.0;
  param_4[0x4f] = 0.0;
  param_5[0x13] = fVar5;
  param_4[0x50] = fVar6 * fVar9;
  param_4[0x51] = fVar11;
  param_4[0x52] = 0.0;
  param_4[0x53] = 0.0;
  param_5[0x14] = fVar5;
  param_4[0x54] = fVar6 * fVar9;
  param_4[0x55] = param_1 * fVar8;
  param_4[0x56] = 0.0;
  param_4[0x57] = 0.0;
  param_5[0x15] = fVar5;
  param_4[0x58] = fVar6 * fVar8;
  param_4[0x59] = param_1 * fVar9;
  param_4[0x5a] = 0.0;
  param_4[0x5b] = 0.0;
  param_5[0x16] = fVar5;
  param_4[0x5c] = fVar7;
  param_4[0x5d] = param_1 * fVar9;
  param_4[0x5e] = 0.0;
  param_4[0x5f] = 0.0;
  param_5[0x17] = fVar5;
  if ((param_6 & 1) != 0) {
    param_4[0x62] = 0.0;
    param_4[99] = 0.0;
    param_4[0x60] = fVar6 * -6.0;
    param_4[0x61] = param_1 * -6.0;
    param_5[0x18] = 0xbf000000;
    param_4[100] = fVar6 * 6.0;
    param_4[0x65] = param_1 * -6.0;
    param_4[0x66] = 0.0;
    param_4[0x67] = 0.0;
    param_5[0x19] = 0xbf000000;
    param_4[0x68] = fVar6 * 6.0;
    param_4[0x69] = param_1 * 6.0;
    param_4[0x6a] = 0.0;
    param_4[0x6b] = 0.0;
    param_5[0x1a] = 0xbf000000;
    param_4[0x6c] = fVar6 * -6.0;
    param_4[0x6d] = param_1 * 6.0;
    param_4[0x6e] = 0.0;
    param_4[0x6f] = 0.0;
    param_5[0x1b] = 0xbf000000;
  }
  fVar5 = 0.0;
  lVar2 = 0;
  lVar3 = 0x1c;
  if ((param_6 & 1) == 0) {
    lVar3 = 0x18;
  }
  pfVar4 = (float *)(param_5 + 2);
  do {
    lVar2 = lVar2 + 4;
    fVar5 = fVar5 + pfVar4[-2] + pfVar4[-1] + *pfVar4 + pfVar4[1];
    pfVar4 = pfVar4 + 4;
  } while (lVar3 != lVar2);
  lVar3 = 0;
  do {
    pfVar4 = (float *)(param_5 + lVar3);
    lVar3 = lVar3 + 2;
    *pfVar4 = (1.0 / fVar5) * *pfVar4;
    pfVar4[1] = (1.0 / fVar5) * pfVar4[1];
  } while (lVar2 != lVar3);
  return;
}


