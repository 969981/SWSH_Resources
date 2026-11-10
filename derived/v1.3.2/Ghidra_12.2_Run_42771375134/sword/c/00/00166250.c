/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00166250; name: FUN_00166250
 */


void FUN_00166250(long param_1,long param_2,long param_3,long param_4)

{
  char *pcVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  long lVar8;
  float *pfVar9;
  uint uVar10;
  undefined8 uVar11;
  char *pcVar12;
  float *pfVar13;
  uint uVar14;
  ulong uVar15;
  float *pfVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if ((ulong)*(ushort *)(param_1 + 0x1e) != 0) {
    pcVar12 = *(char **)(param_1 + 0x20);
    pfVar13 = *(float **)(param_1 + 0x28);
    fVar18 = 0.0;
    pcVar1 = pcVar12 + (ulong)*(ushort *)(param_1 + 0x1e) * 0x10;
    do {
      bVar4 = pcVar12[1];
      bVar5 = pcVar12[2];
      uVar15 = (ulong)bVar5;
      bVar6 = pcVar12[3];
      Hint_Prefetch(pcVar12 + 0x150,0,0,0);
      Hint_Prefetch(pcVar12 + 0x1d0,0,0,0);
      cVar7 = *pcVar12;
      uVar10 = 0x70;
      if (cVar7 != '\x03') {
        uVar10 = 0x30;
      }
      if ((pfVar13 != (float *)0x0) && (uVar14 = (uint)bVar5, uVar14 != 0)) {
        pfVar16 = pfVar13;
        if (uVar15 - 1 < 3) {
          lVar17 = 0;
        }
        else {
          lVar17 = 0;
          pfVar9 = (float *)(pcVar12 + (ulong)uVar10 * (ulong)uVar14 + 0x5c);
          do {
            fVar21 = pfVar9[-3];
            *pfVar16 = fVar21;
            fVar22 = pfVar9[-2];
            pfVar16[1] = fVar22;
            fVar19 = pfVar9[-1];
            pfVar16[2] = fVar19;
            fVar20 = *pfVar9;
            pfVar16[3] = fVar20;
            fVar18 = fVar18 + fVar21 + fVar22 + fVar19 + fVar20;
            pfVar16 = pfVar16 + 4;
            lVar17 = lVar17 + -4;
            pfVar9 = pfVar9 + 4;
          } while ((uVar15 & 3) - uVar15 != lVar17);
          lVar17 = -lVar17;
        }
        if ((bVar5 & 3) != 0) {
          lVar8 = -(uVar15 & 3);
          pfVar9 = (float *)(pcVar12 + (ulong)uVar10 * (ulong)uVar14 + lVar17 * 4 + 0x50);
          do {
            fVar18 = fVar18 + *pfVar9;
            *pfVar16 = *pfVar9;
            lVar8 = lVar8 + 1;
            pfVar9 = pfVar9 + 1;
            pfVar16 = pfVar16 + 1;
          } while (lVar8 != 0);
        }
        pfVar13 = pfVar13 + (ulong)(uVar14 - 1) + 1;
      }
      lVar17 = 0x80;
      if (cVar7 != '\x03') {
        lVar17 = 0x40;
      }
      if ((*(int *)(pcVar12 + 0x34) != 0) && (*(undefined1 **)(pcVar12 + 0x38) != (undefined1 *)0x0)
         ) {
        **(undefined1 **)(pcVar12 + 0x38) = 1;
      }
      pcVar12 = pcVar12 + lVar17 * (ulong)bVar6 +
                          (ulong)((uint)bVar5 * 4 + 0xc & 0x7f0) +
                          (ulong)uVar10 * (ulong)(uint)bVar5 + 0x50;
    } while (pcVar12 < pcVar1);
    if (((((bVar4 & 1) != 0) && (*(short *)(param_1 + 0x10) == -1)) && (fVar18 != 0.0)) &&
       (*(short *)(param_1 + 0x12) == -1)) {
      fVar21 = *(float *)(param_3 + 0x1c);
      fVar22 = *(float *)(param_4 + 0x1c);
      if ((fVar21 < DAT_01d4c18c) || (fVar22 < DAT_01d4c18c)) {
        uVar10 = *(uint *)(param_2 + 0x10);
        uVar14 = *(uint *)(param_3 + 0x48);
        uVar3 = *(uint *)(param_4 + 0x48);
        uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
        *(uint *)(param_2 + 0x10) = uVar10 + 1;
        if (fVar22 <= fVar21) {
          fVar21 = fVar22;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 8) + (ulong)uVar10 * 0x20);
        uVar10 = uVar14;
        if (uVar14 <= uVar3) {
          uVar10 = uVar3;
          uVar3 = uVar14;
        }
        *(float *)(puVar2 + 1) = fVar18;
        *(float *)((long)puVar2 + 0xc) = fVar21;
        *puVar2 = uVar11;
        *(uint *)(puVar2 + 2) = uVar3;
        *(uint *)((long)puVar2 + 0x14) = uVar10;
        return;
      }
    }
  }
  return;
}


