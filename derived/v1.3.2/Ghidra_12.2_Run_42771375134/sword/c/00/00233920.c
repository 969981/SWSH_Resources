/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00233920; name: FUN_00233920
 */


void FUN_00233920(uint *param_1,float *param_2,long param_3,long param_4)

{
  short *psVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  float *pfVar9;
  short sVar10;
  byte *pbVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint local_20 [8];
  
  local_20[4] = 0;
  local_20[5] = 0;
  local_20[6] = 0;
  local_20[7] = 0;
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  uVar8 = (ulong)*param_1;
  fVar13 = *param_2;
  fVar14 = param_2[1];
  pfVar9 = (float *)(param_3 + uVar8 * 0xc);
  lVar2 = *(long *)(param_4 + 0x18);
  lVar3 = *(long *)(param_4 + 0x20);
  fVar15 = param_2[2];
  fVar16 = fVar13 * *pfVar9 + fVar14 * pfVar9[1] + fVar15 * pfVar9[2];
  do {
    psVar1 = (short *)(lVar2 + uVar8 * 4);
    sVar10 = *psVar1;
    uVar5 = psVar1[1];
    uVar7 = (uint)uVar8;
    *param_1 = uVar7;
    if (sVar10 == 0) {
      return;
    }
    pbVar11 = (byte *)(lVar3 + (ulong)uVar5);
    do {
      while( true ) {
        uVar12 = (uint)uVar8;
        bVar4 = *pbVar11;
        uVar6 = 1 << (ulong)(bVar4 & 0x1f);
        sVar10 = sVar10 + -1;
        if ((uVar6 & local_20[bVar4 >> 5]) == 0) break;
        pbVar11 = pbVar11 + 1;
        if (sVar10 == 0) goto LAB_002339ec;
      }
      local_20[bVar4 >> 5] = uVar6 | local_20[bVar4 >> 5];
      pfVar9 = (float *)(param_3 + (ulong)(uint)bVar4 * 0xc);
      fVar18 = fVar13 * *pfVar9 + fVar14 * pfVar9[1] + fVar15 * pfVar9[2];
      fVar17 = fVar18;
      if (fVar18 <= fVar16) {
        fVar17 = fVar16;
      }
      uVar6 = (uint)bVar4;
      if (fVar18 <= fVar16) {
        uVar6 = uVar12;
      }
      uVar8 = (ulong)uVar6;
      pbVar11 = pbVar11 + 1;
      fVar16 = fVar17;
      uVar12 = uVar6;
    } while (sVar10 != 0);
LAB_002339ec:
    uVar8 = (ulong)uVar12;
    if (uVar12 == uVar7) {
      return;
    }
  } while( true );
}


