/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a5130; name: FUN_003a5130
 */


void FUN_003a5130(uint *param_1,float *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar1 = param_1[0xc];
  if (uVar1 != 0) {
    uVar4 = 0;
    pfVar6 = (float *)(param_1 + 0x53);
    do {
      pfVar6[-5] = pfVar6[-5] - *param_2;
      pfVar6[-4] = pfVar6[-4] - param_2[1];
      pfVar6[-3] = pfVar6[-3] - param_2[2];
      pfVar6[-2] = pfVar6[-2] - *param_2;
      pfVar6[-1] = pfVar6[-1] - param_2[1];
      uVar4 = uVar4 + 1;
      *pfVar6 = *pfVar6 - param_2[2];
      pfVar6 = pfVar6 + 6;
    } while (uVar4 < uVar1);
  }
  param_1[0xd0] = (uint)((float)param_1[0xd0] - *param_2);
  param_1[0xd1] = (uint)((float)param_1[0xd1] - param_2[1]);
  uVar2 = (ulong)param_1[0xcc];
  param_1[0xd2] = (uint)((float)param_1[0xd2] - param_2[2]);
  fVar7 = (float)param_1[uVar2 + 0xd0];
  fVar8 = (float)(param_1 + uVar2 + 0xd0)[4];
  fVar9 = fVar7 - fVar8;
  fVar7 = fVar7 + fVar8;
  uVar4 = (ulong)*param_1;
  uVar1 = (uint)fVar9 | 0x80000000;
  if ((int)fVar9 < 0) {
    uVar1 = ~(uint)fVar9;
  }
  param_1[0xd3] = uVar1;
  uVar1 = (uint)fVar7 | 0x80000000;
  if ((int)fVar7 < 0) {
    uVar1 = ~(uint)fVar7;
  }
  param_1[0xd7] = uVar1;
  if (*param_1 != 0) {
    pfVar6 = (float *)(*(long *)(param_1 + 2) + 0xc);
    do {
      pfVar6[-3] = pfVar6[-3] - *param_2;
      pfVar6[-2] = pfVar6[-2] - param_2[1];
      pfVar6[-1] = pfVar6[-1] - param_2[2];
      *pfVar6 = *pfVar6 - *param_2;
      pfVar6[1] = pfVar6[1] - param_2[1];
      pfVar6[2] = pfVar6[2] - param_2[2];
      pfVar6 = pfVar6 + 6;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  uVar1 = param_1[0xca];
  if (uVar1 != 0) {
    pfVar6 = *(float **)(param_1 + 8);
    uVar4 = 0;
    do {
      *pfVar6 = *pfVar6 - *param_2;
      pfVar6[1] = pfVar6[1] - param_2[1];
      pfVar6[2] = pfVar6[2] - param_2[2];
      fVar9 = pfVar6[uVar2] - pfVar6[uVar2 + 4];
      fVar8 = pfVar6[uVar2] + pfVar6[uVar2 + 4];
      fVar7 = (float)((uint)fVar9 | 0x80000000);
      if ((int)fVar9 < 0) {
        fVar7 = (float)~(uint)fVar9;
      }
      fVar9 = (float)((uint)fVar8 | 0x80000000);
      pfVar6[3] = fVar7;
      if ((int)fVar8 < 0) {
        fVar9 = (float)~(uint)fVar8;
      }
      uVar4 = uVar4 + 1;
      pfVar6[7] = fVar9;
      pfVar6 = pfVar6 + 8;
    } while (uVar4 < uVar1);
  }
  param_1[0xe4] = (uint)((float)param_1[0xe4] - *param_2);
  param_1[0xe5] = (uint)((float)param_1[0xe5] - param_2[1]);
  param_1[0xe6] = (uint)((float)param_1[0xe6] - param_2[2]);
  param_1[0xec] = (uint)((float)param_1[0xec] - *param_2);
  param_1[0xed] = (uint)((float)param_1[0xed] - param_2[1]);
  param_1[0xee] = (uint)((float)param_1[0xee] - param_2[2]);
  param_1[0xf4] = (uint)((float)param_1[0xf4] - *param_2);
  param_1[0xf5] = (uint)((float)param_1[0xf5] - param_2[1]);
  param_1[0xf6] = (uint)((float)param_1[0xf6] - param_2[2]);
  param_1[0xfc] = (uint)((float)param_1[0xfc] - *param_2);
  param_1[0xfd] = (uint)((float)param_1[0xfd] - param_2[1]);
  param_1[0xfe] = (uint)((float)param_1[0xfe] - param_2[2]);
  param_1[0x104] = (uint)((float)param_1[0x104] - *param_2);
  param_1[0x105] = (uint)((float)param_1[0x105] - param_2[1]);
  lVar3 = 0;
  param_1[0x106] = (uint)((float)param_1[0x106] - param_2[2]);
  do {
    pfVar6 = (float *)((long)param_1 + lVar3 + 0x470);
    lVar3 = lVar3 + 0xe0;
    *pfVar6 = *pfVar6 - *param_2;
    pfVar6[1] = pfVar6[1] - param_2[1];
    pfVar6[2] = pfVar6[2] - param_2[2];
    pfVar6[8] = pfVar6[8] - *param_2;
    pfVar6[9] = pfVar6[9] - param_2[1];
    pfVar6[10] = pfVar6[10] - param_2[2];
    pfVar6[0x10] = pfVar6[0x10] - *param_2;
    pfVar6[0x11] = pfVar6[0x11] - param_2[1];
    pfVar6[0x12] = pfVar6[0x12] - param_2[2];
    pfVar6[0x18] = pfVar6[0x18] - *param_2;
    pfVar6[0x19] = pfVar6[0x19] - param_2[1];
    pfVar6[0x1a] = pfVar6[0x1a] - param_2[2];
    pfVar6[0x20] = pfVar6[0x20] - *param_2;
    pfVar6[0x21] = pfVar6[0x21] - param_2[1];
    pfVar6[0x22] = pfVar6[0x22] - param_2[2];
  } while (lVar3 != 0x460);
  lVar3 = 0;
  param_1 = param_1 + 0x234;
  do {
    lVar5 = 0;
    do {
      pfVar6 = (float *)((long)param_1 + lVar5);
      lVar5 = lVar5 + 0xe0;
      *pfVar6 = *pfVar6 - *param_2;
      pfVar6[1] = pfVar6[1] - param_2[1];
      pfVar6[2] = pfVar6[2] - param_2[2];
      pfVar6[8] = pfVar6[8] - *param_2;
      pfVar6[9] = pfVar6[9] - param_2[1];
      pfVar6[10] = pfVar6[10] - param_2[2];
      pfVar6[0x10] = pfVar6[0x10] - *param_2;
      pfVar6[0x11] = pfVar6[0x11] - param_2[1];
      pfVar6[0x12] = pfVar6[0x12] - param_2[2];
      pfVar6[0x18] = pfVar6[0x18] - *param_2;
      pfVar6[0x19] = pfVar6[0x19] - param_2[1];
      pfVar6[0x1a] = pfVar6[0x1a] - param_2[2];
      pfVar6[0x20] = pfVar6[0x20] - *param_2;
      pfVar6[0x21] = pfVar6[0x21] - param_2[1];
      pfVar6[0x22] = pfVar6[0x22] - param_2[2];
    } while (lVar5 != 0x460);
    lVar3 = lVar3 + 1;
    param_1 = param_1 + 0x118;
  } while (lVar3 != 5);
  return;
}


