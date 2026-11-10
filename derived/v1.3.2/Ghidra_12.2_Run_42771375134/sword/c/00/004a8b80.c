/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a8b80; name: FUN_004a8b80
 */


void FUN_004a8b80(float param_1,float param_2,float param_3,uint param_4,undefined4 *param_5)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  *param_5 = 0x3f800000;
  param_5[2] = param_2;
  param_5[3] = param_3;
  param_5[1] = -param_1;
  if (4 < param_4) {
    fVar6 = param_2 * param_2;
    if (fVar6 < DAT_01d4bdf0) {
      fVar7 = 1.0 - fVar6;
      fVar9 = SQRT(fVar7);
      fVar14 = fVar7 * DAT_01d4c19c;
      fVar11 = fVar9 * param_2 * DAT_01d4c240;
      fVar8 = (1.0 / fVar9) * -param_1;
      param_3 = (1.0 / fVar9) * param_3;
      fVar10 = param_3 * param_3;
      fVar13 = fVar8 * fVar8;
      fVar15 = fVar9 * param_2 * DAT_01d4c19c;
      fVar12 = (param_3 + param_3) * fVar8;
      param_5[4] = fVar12 * fVar14;
      param_5[5] = fVar11 * fVar8;
      param_5[6] = fVar6 * 1.5 + -0.5;
      param_5[7] = fVar15 * (param_3 + param_3);
      param_5[8] = (fVar10 - fVar13) * fVar14;
      if (9 < param_4) {
        fVar11 = fVar7 * DAT_01d4c63c * fVar9;
        fVar7 = param_2 * DAT_01d4bad8 * fVar7;
        fVar9 = fVar6 * 5.0 * fVar9 * DAT_01d4c070 - fVar9 * DAT_01d4c070;
        param_5[0xb] = fVar9 * fVar8;
        param_5[0xc] = param_2 * 0.5 * (fVar6 * 5.0 + -3.0);
        param_5[9] = fVar8 * fVar11 * (fVar10 * 3.0 - fVar13);
        param_5[10] = fVar12 * fVar7;
        param_5[0xd] = fVar9 * param_3;
        param_5[0xe] = (fVar10 - fVar13) * fVar7;
        param_5[0xf] = param_3 * fVar11 * (fVar10 - fVar13 * 3.0);
      }
    }
    else {
      uVar1 = param_4 & 3;
      if ((ulong)param_4 - 5 < 3) {
        uVar2 = 4;
      }
      else {
        uVar2 = 4;
        do {
          uVar5 = uVar2 >> 2;
          param_5[uVar2 & 0xfffffffc] = 0;
          uVar2 = uVar2 + 4;
          *(undefined4 *)((long)param_5 + ((uVar5 & 0x3fffffff) << 4 | 4)) = 0;
          *(undefined4 *)((long)param_5 + ((uVar5 & 0x3fffffff) << 4 | 8)) = 0;
          *(undefined4 *)((long)param_5 + ((uVar5 & 0x3fffffff) << 4 | 0xc)) = 0;
        } while ((ulong)param_4 - (ulong)uVar1 != uVar2);
      }
      if (uVar1 != 0) {
        lVar3 = -(ulong)uVar1;
        do {
          param_5[uVar2 & 0xffffffff] = 0;
          uVar2 = uVar2 + 1;
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0);
      }
      param_5[6] = fVar6;
      if (9 < param_4) {
        param_5[0xc] = param_2;
      }
    }
  }
  iVar4 = 1;
  uVar2 = 0;
  do {
    uVar5 = uVar2 + 1;
    param_5[uVar2] = (float)param_5[uVar2] * (float)(&DAT_01d49eb0)[iVar4 - 1];
    uVar1 = 0;
    if (iVar4 * iVar4 != 0) {
      uVar1 = (uint)uVar5 / (uint)(iVar4 * iVar4);
    }
    iVar4 = uVar1 + iVar4;
    uVar2 = uVar5;
  } while (uVar5 < param_4);
  return;
}


