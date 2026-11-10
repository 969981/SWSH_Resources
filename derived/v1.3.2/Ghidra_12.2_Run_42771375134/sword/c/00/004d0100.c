/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d0100; name: FUN_004d0100
 */


void FUN_004d0100(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar7 = DAT_01d4c714;
  fVar6 = DAT_01d4c46c;
  fVar5 = DAT_01d4c2ec;
  fVar4 = DAT_01d4c23c;
  fVar3 = DAT_01d4c1d8;
  fVar2 = DAT_01d4c158;
  fVar1 = DAT_01d4bda4;
  lVar8 = *(long *)(param_1 + 0x48);
  if (lVar8 != 0) {
    fVar11 = *(float *)PTR_DAT_02712df0;
    do {
      lVar10 = *(long *)(lVar8 + 0x58);
      if (lVar10 != 0) {
        fVar12 = *(float *)(lVar10 + 0x368) + *(float *)(lVar10 + 0x3c);
        fVar13 = *(float *)(lVar8 + 0x294) - fVar12;
        if (0.0 < fVar13) {
          fVar12 = fVar12 + fVar13 * *(float *)(lVar10 + 0x36c);
        }
        if (fVar12 <= *(float *)(lVar10 + 0x360)) {
          fVar12 = *(float *)(lVar10 + 0x360);
        }
        fVar12 = *(float *)(lVar10 + 0x3c) - fVar12;
        fVar13 = 0.0;
        if (fVar5 <= fVar12 * fVar2) {
          uVar9 = (uint)(fVar7 + fVar1 * fVar12);
          fVar13 = (float)(uVar9 & 0x7fffff | 0x3f800000);
          fVar13 = (fVar4 + fVar13 * (fVar3 + fVar6 * fVar13)) * (float)(uVar9 & 0xff800000);
        }
        fVar12 = *(float *)(lVar8 + 0x294) + fVar12;
        *(byte *)(lVar8 + 0x2a4) = *(byte *)(lVar8 + 0x2a4) & 0xfe | fVar12 <= fVar11;
        *(float *)(lVar8 + 0x290) = *(float *)(lVar8 + 0x290) * fVar13;
        *(float *)(lVar8 + 0x294) = fVar12;
      }
      lVar8 = *(long *)(lVar8 + 0x40);
    } while (lVar8 != 0);
  }
  return;
}


