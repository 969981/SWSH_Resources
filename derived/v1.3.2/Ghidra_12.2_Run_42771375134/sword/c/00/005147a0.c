/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005147a0; name: FUN_005147a0
 */


void FUN_005147a0(float param_1,float param_2,uint param_3,long param_4,long param_5,uint param_6)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_200 [4];
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184 [15];
  float local_148;
  float local_10c;
  float local_108 [15];
  float local_cc [15];
  
  if (param_1 <= DAT_01d4c2e0) {
    param_1 = DAT_01d4c2e0;
  }
  fVar8 = param_1 * DAT_01d4bbc8;
  fVar13 = 1.0 / ((param_1 + param_1) * param_1);
  lVar6 = 0;
  do {
    fVar10 = (float)(int)lVar6 + (float)(int)lVar6;
    fVar12 = (fVar10 + 1.0) * param_2;
    fVar7 = expf(-(fVar13 * fVar12 * fVar12));
    fVar11 = (fVar10 + 2.0) * param_2;
    fVar10 = expf(-(fVar13 * fVar11 * fVar11));
    fVar10 = fVar7 + fVar10;
    fVar9 = 0.0;
    if (0.0 < fVar10) {
      fVar9 = fVar7 / fVar10;
    }
    local_cc[lVar6] = fVar10 * 0.5;
    lVar2 = lVar6 + 1;
    local_108[lVar6] = fVar11 + (fVar12 - fVar11) * fVar9;
    lVar6 = lVar2;
  } while (lVar2 != 0xf);
  fVar7 = 1.0 / (float)param_3;
  fVar13 = expf(-(param_2 * 0.0 * param_2 * 0.0 * fVar13));
  local_184[0] = fVar13 * 0.5;
  local_200[1] = fVar7 * local_108[0];
  local_200[2] = fVar7 * local_108[1];
  local_200[3] = fVar7 * local_108[2];
  local_1f0 = fVar7 * local_108[3];
  local_1ec = fVar7 * local_108[4];
  local_1e8 = fVar7 * local_108[5];
  local_1e4 = fVar7 * local_108[6];
  local_1e0 = fVar7 * local_108[7];
  local_1dc = fVar7 * local_108[8];
  local_1d8 = fVar7 * local_108[9];
  local_1d4 = fVar7 * local_108[10];
  local_1d0 = fVar7 * local_108[0xb];
  local_148 = local_cc[0xe];
  local_1c0 = -(fVar7 * local_108[0]);
  local_1bc = -(fVar7 * local_108[1]);
  local_1b8 = -(fVar7 * local_108[2]);
  local_1b4 = -(fVar7 * local_108[3]);
  local_1b0 = -(fVar7 * local_108[4]);
  local_1ac = -(fVar7 * local_108[5]);
  local_1a8 = -(fVar7 * local_108[6]);
  local_1a4 = -(fVar7 * local_108[7]);
  local_1a0 = -(fVar7 * local_108[8]);
  local_19c = -(fVar7 * local_108[9]);
  local_198 = -(fVar7 * local_108[10]);
  local_194 = -(fVar7 * local_108[0xb]);
  local_10c = local_cc[0xe];
  local_1cc = fVar7 * local_108[0xc];
  local_1c8 = fVar7 * local_108[0xd];
  local_190 = -(fVar7 * local_108[0xc]);
  local_18c = -(fVar7 * local_108[0xd]);
  local_200[0] = 0.0;
  local_1c4 = fVar7 * local_108[0xe];
  local_188 = -(fVar7 * local_108[0xe]);
  if ((param_6 & 1) == 0 || fVar8 < 1.0) {
    fVar8 = 1.0 / (fVar13 * 0.5 + local_cc[0] + local_cc[0] + local_cc[1] + local_cc[1] +
                   local_cc[2] + local_cc[2] + local_cc[3] + local_cc[3] + local_cc[4] + local_cc[4]
                   + local_cc[5] + local_cc[5] + local_cc[6] + local_cc[6] +
                   local_cc[7] + local_cc[7] + local_cc[8] + local_cc[8] + local_cc[9] + local_cc[9]
                   + local_cc[10] + local_cc[10] + local_cc[0xb] + local_cc[0xb] +
                   local_cc[0xc] + local_cc[0xc] + local_cc[0xd] + local_cc[0xd] +
                  local_cc[0xe] + local_cc[0xe]);
  }
  else {
    fVar8 = 1.0 / (param_1 * DAT_01d4bbc8);
    fVar8 = fVar8 + fVar8;
  }
  uVar3 = 0;
  do {
    uVar4 = (uint)(uVar3 >> 1) & 0x7fffffff;
    uVar1 = uVar4 + 0xf;
    if ((uVar3 & 1) != 0) {
      uVar1 = uVar4 + 1;
    }
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = uVar1;
    }
    uVar5 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
    lVar6 = uVar3 * 4;
    uVar3 = uVar3 + 1;
    *(float *)(param_5 + lVar6) = fVar8 * *(float *)((long)local_184 + uVar5);
    *(undefined4 *)(param_4 + lVar6) = *(undefined4 *)((long)local_200 + uVar5);
  } while (uVar3 != 0x1f);
  return;
}


