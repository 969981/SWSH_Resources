/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00231e40; name: FUN_00231e40
 */


ulong FUN_00231e40(uint param_1,long param_2,int param_3,float *param_4,long param_5)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  float *pfVar13;
  ulong uVar14;
  float fVar15;
  
  uVar9 = 0;
  if (param_3 != 0) {
    do {
      bVar4 = *(byte *)((long)param_4 + 0x12);
      uVar10 = (uint)bVar4;
      if (bVar4 != 0) {
        uVar7 = *(ushort *)(param_4 + 4);
        lVar11 = 0;
        uVar12 = bVar4 - 1;
LAB_00231e68:
        do {
          bVar4 = *(byte *)(param_5 + (ulong)uVar7 + (ulong)uVar12);
          bVar5 = *(byte *)(param_5 + (ulong)uVar7 + lVar11);
          bVar6 = bVar4;
          if (bVar4 <= bVar5) {
            bVar6 = bVar5;
            bVar5 = bVar4;
          }
          uVar8 = (uint)uVar9;
          uVar12 = (uint)lVar11;
          if (uVar8 != 0) {
            uVar14 = 0;
            pfVar13 = (float *)(param_2 + 8);
            do {
              if ((*(byte *)(pfVar13 + -2) == bVar5) && (*(byte *)((long)pfVar13 + -7) == bVar6)) {
                fVar15 = param_4[1];
                pfVar13[-1] = *param_4 + pfVar13[-1];
                *pfVar13 = fVar15 + *pfVar13;
                pfVar13[1] = param_4[2] + pfVar13[1];
                uVar10 = uVar10 - 1;
                lVar11 = lVar11 + 1;
                if (uVar10 == 0) goto LAB_00231f24;
                goto LAB_00231e68;
              }
              uVar14 = uVar14 + 1;
              pfVar13 = pfVar13 + 4;
            } while (uVar14 < uVar9);
          }
          if (uVar8 == param_1) {
            return (ulong)param_1;
          }
          pbVar1 = (byte *)(param_2 + uVar9 * 0x10);
          fVar15 = *param_4;
          fVar2 = param_4[1];
          *pbVar1 = bVar5;
          fVar3 = param_4[2];
          uVar9 = (ulong)(uVar8 + 1);
          pbVar1[1] = bVar6;
          *(float *)(pbVar1 + 4) = fVar15;
          *(float *)(pbVar1 + 8) = fVar2;
          *(float *)(pbVar1 + 0xc) = fVar3;
          uVar10 = uVar10 - 1;
          lVar11 = lVar11 + 1;
        } while (uVar10 != 0);
      }
LAB_00231f24:
      param_3 = param_3 + -1;
      param_4 = param_4 + 5;
    } while (param_3 != 0);
  }
  return uVar9;
}


