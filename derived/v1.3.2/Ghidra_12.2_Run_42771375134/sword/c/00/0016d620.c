/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0016d620; name: FUN_0016d620
 */


void FUN_0016d620(long param_1,long param_2,long param_3,long param_4)

{
  char *pcVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  float *pfVar7;
  char *pcVar8;
  undefined8 uVar9;
  uint uVar10;
  float *pfVar11;
  char *pcVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  float *pfVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  pcVar8 = *(char **)(param_1 + 0x20);
  uVar15 = (ulong)*(ushort *)(pcVar8 + 2);
  uVar10 = 0x70;
  if (*pcVar8 != '\x03') {
    uVar10 = 0x30;
  }
  if (uVar15 != 0) {
    pfVar11 = *(float **)(param_1 + 0x28);
    fVar18 = 0.0;
    pcVar1 = pcVar8 + uVar15;
    pcVar12 = pcVar8;
    while( true ) {
      bVar5 = pcVar12[1];
      uVar14 = (ulong)bVar5;
      Hint_Prefetch(pcVar12 + 0x130,0,0,0);
      Hint_Prefetch(pcVar12 + 0x1b0,0,0,0);
      if ((pfVar11 != (float *)0x0) && (bVar5 != 0)) {
        pfVar16 = pfVar11;
        if (uVar14 - 1 < 3) {
          lVar6 = 0;
        }
        else {
          lVar6 = 0;
          pfVar7 = (float *)(pcVar12 + uVar15 + 0x2c);
          do {
            fVar21 = pfVar7[-3];
            *pfVar16 = fVar21;
            fVar22 = pfVar7[-2];
            pfVar16[1] = fVar22;
            fVar19 = pfVar7[-1];
            pfVar16[2] = fVar19;
            fVar20 = *pfVar7;
            pfVar16[3] = fVar20;
            pfVar16 = pfVar16 + 4;
            fVar18 = fVar18 + fVar21 + fVar22 + fVar19 + fVar20;
            lVar6 = lVar6 + -4;
            pfVar7 = pfVar7 + 4;
          } while ((uVar14 & 3) - uVar14 != lVar6);
          lVar6 = -lVar6;
        }
        if ((bVar5 & 3) != 0) {
          lVar17 = -(uVar14 & 3);
          pfVar7 = (float *)(pcVar12 + uVar15 + lVar6 * 4 + 0x20);
          do {
            fVar18 = fVar18 + *pfVar7;
            *pfVar16 = *pfVar7;
            lVar17 = lVar17 + 1;
            pfVar16 = pfVar16 + 1;
            pfVar7 = pfVar7 + 1;
          } while (lVar17 != 0);
        }
        pfVar11 = pfVar11 + (ulong)(bVar5 - 1) + 1;
      }
      pcVar13 = pcVar12 + uVar10 * uVar14 + 0x30;
      if (pcVar1 <= pcVar13) break;
      uVar15 = (ulong)*(ushort *)(pcVar13 + 2);
      pcVar12 = pcVar13;
    }
    if (((((pcVar12[0x28] & 1U) != 0) && (*(short *)(param_1 + 0x10) == -1)) && (fVar18 != 0.0)) &&
       (*(short *)(param_1 + 0x12) == -1)) {
      fVar21 = *(float *)(param_3 + 0x1c);
      fVar22 = *(float *)(param_4 + 0x1c);
      if ((fVar21 < DAT_01d4c18c) || (fVar22 < DAT_01d4c18c)) {
        uVar10 = *(uint *)(param_2 + 0x10);
        uVar3 = *(uint *)(param_3 + 0x48);
        uVar4 = *(uint *)(param_4 + 0x48);
        uVar9 = *(undefined8 *)(pcVar8 + 0x20);
        *(uint *)(param_2 + 0x10) = uVar10 + 1;
        if (fVar22 <= fVar21) {
          fVar21 = fVar22;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 8) + (ulong)uVar10 * 0x20);
        *puVar2 = uVar9;
        uVar10 = uVar3;
        if (uVar3 <= uVar4) {
          uVar10 = uVar4;
          uVar4 = uVar3;
        }
        *(float *)(puVar2 + 1) = fVar18;
        *(float *)((long)puVar2 + 0xc) = fVar21;
        *(uint *)(puVar2 + 2) = uVar4;
        *(uint *)((long)puVar2 + 0x14) = uVar10;
        return;
      }
    }
  }
  return;
}


