/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0016e960; name: FUN_0016e960
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0016e960(long param_1,long param_2,long *param_3,long *param_4)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  uint uVar10;
  char *pcVar11;
  byte bVar12;
  float *pfVar13;
  byte bVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  undefined8 uVar18;
  char *pcVar19;
  char *pcVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  
  pcVar11 = *(char **)(param_1 + 0x20);
  uVar9 = *(ushort *)(pcVar11 + 2);
  if ((ulong)uVar9 == 0) {
    bVar12 = 0;
    bVar14 = 0;
    fVar22 = 0.0;
    fVar23 = 0.0;
    fVar24 = 0.0;
    bVar8 = 0;
  }
  else {
    pfVar13 = *(float **)(param_1 + 0xb8);
    fVar21 = 0.0;
    fVar22 = 0.0;
    fVar23 = 0.0;
    fVar24 = 0.0;
    pfVar15 = *(float **)(param_1 + 0x88);
    pfVar16 = *(float **)(param_1 + 0x58);
    pfVar17 = *(float **)(param_1 + 0x28);
    lVar3 = 0xb0;
    pcVar19 = pcVar11;
    if (*pcVar11 != '\a') {
      lVar3 = 0x80;
    }
    do {
      while( true ) {
        bVar6 = pcVar19[8];
        bVar7 = pcVar19[9];
        pcVar1 = pcVar19 + 0xb0;
        bVar12 = pcVar19[10];
        bVar8 = pcVar19[0xb];
        bVar14 = pcVar19[1];
        Hint_Prefetch(pcVar19 + 0x1b0,0,0,0);
        Hint_Prefetch(pcVar19 + 0x230,0,0,0);
        if (bVar14 == 0) break;
        uVar10 = 0;
        pcVar20 = pcVar19 + 0xe0;
        do {
          uVar27 = *(undefined8 *)(pcVar20 + 8);
          uVar18 = *(undefined8 *)pcVar20;
          fVar25 = (float)uVar18;
          if ((pfVar17 != (float *)0x0) && (uVar10 < (byte)pcVar19[4])) {
            *pfVar17 = fVar25;
            pfVar17 = pfVar17 + 1;
          }
          fVar29 = (float)((ulong)uVar18 >> 0x20);
          if ((pfVar16 != (float *)0x0) && (uVar10 < (byte)pcVar19[5])) {
            *pfVar16 = fVar29;
            pfVar16 = pfVar16 + 1;
          }
          fVar26 = (float)uVar27;
          if ((pfVar15 != (float *)0x0) && (uVar10 < (byte)pcVar19[6])) {
            *pfVar15 = fVar26;
            pfVar15 = pfVar15 + 1;
          }
          fVar28 = (float)((ulong)uVar27 >> 0x20);
          if ((pfVar13 != (float *)0x0) && (uVar10 < (byte)pcVar19[7])) {
            *pfVar13 = fVar28;
            pfVar13 = pfVar13 + 1;
          }
          fVar21 = fVar21 + fVar25;
          fVar22 = fVar22 + fVar29;
          fVar23 = fVar23 + fVar26;
          fVar24 = fVar24 + fVar28;
          uVar10 = uVar10 + 1;
          pcVar20 = pcVar20 + lVar3;
        } while (bVar14 != uVar10);
        pcVar19 = pcVar1 + lVar3 * ((ulong)(bVar14 - 1) + 1);
        if (pcVar11 + uVar9 <= pcVar1 + lVar3 * ((ulong)(bVar14 - 1) + 1)) goto LAB_0016ea60;
      }
      pcVar19 = pcVar1;
    } while (pcVar1 < pcVar11 + uVar9);
LAB_0016ea60:
    bVar14 = bVar7 & 1;
    bVar12 = bVar12 & 1;
    bVar8 = bVar8 & 1;
    if (((((bVar6 & 1) != 0) && (*(short *)(param_1 + 0x10) == -1)) &&
        (*(short *)(param_1 + 0x12) == -1)) && (fVar21 != 0.0)) {
      fVar25 = *(float *)(*param_3 + 0x1c);
      fVar29 = *(float *)(*param_4 + 0x1c);
      if ((fVar25 < DAT_01d4c18c) || (fVar29 < DAT_01d4c18c)) {
        uVar10 = *(uint *)(param_2 + 0x10);
        uVar4 = *(uint *)(*param_3 + 0x48);
        uVar5 = *(uint *)(*param_4 + 0x48);
        uVar18 = *(undefined8 *)(pcVar11 + 0x90);
        *(uint *)(param_2 + 0x10) = uVar10 + 1;
        if (fVar29 <= fVar25) {
          fVar25 = fVar29;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 8) + (ulong)uVar10 * 0x20);
        *(float *)(puVar2 + 1) = fVar21;
        uVar10 = uVar4;
        if (uVar4 <= uVar5) {
          uVar10 = uVar5;
          uVar5 = uVar4;
        }
        *puVar2 = uVar18;
        *(float *)((long)puVar2 + 0xc) = fVar25;
        *(uint *)(puVar2 + 2) = uVar5;
        *(uint *)((long)puVar2 + 0x14) = uVar10;
        bVar14 = bVar7 & 1;
      }
    }
  }
  if (((bVar14 != 0) && (*(short *)(param_1 + 0x40) == -1)) &&
     ((*(short *)(param_1 + 0x42) == -1 && (fVar22 != 0.0)))) {
    fVar21 = *(float *)(param_3[1] + 0x1c);
    fVar25 = *(float *)(param_4[1] + 0x1c);
    if ((fVar21 < DAT_01d4c18c) || (fVar25 < DAT_01d4c18c)) {
      uVar10 = *(uint *)(param_2 + 0x10);
      uVar4 = *(uint *)(param_3[1] + 0x48);
      uVar5 = *(uint *)(param_4[1] + 0x48);
      uVar18 = *(undefined8 *)(pcVar11 + 0x98);
      *(uint *)(param_2 + 0x10) = uVar10 + 1;
      if (fVar25 <= fVar21) {
        fVar21 = fVar25;
      }
      puVar2 = (undefined8 *)(*(long *)(param_2 + 8) + (ulong)uVar10 * 0x20);
      *(float *)(puVar2 + 1) = fVar22;
      uVar10 = uVar4;
      if (uVar4 <= uVar5) {
        uVar10 = uVar5;
        uVar5 = uVar4;
      }
      *puVar2 = uVar18;
      *(float *)((long)puVar2 + 0xc) = fVar21;
      *(uint *)(puVar2 + 2) = uVar5;
      *(uint *)((long)puVar2 + 0x14) = uVar10;
    }
  }
  if ((((bVar12 != 0) && (*(short *)(param_1 + 0x70) == -1)) && (*(short *)(param_1 + 0x72) == -1))
     && (fVar23 != 0.0)) {
    fVar22 = *(float *)(param_3[2] + 0x1c);
    fVar21 = *(float *)(param_4[2] + 0x1c);
    if ((fVar22 < DAT_01d4c18c) || (fVar21 < DAT_01d4c18c)) {
      uVar10 = *(uint *)(param_2 + 0x10);
      uVar4 = *(uint *)(param_3[2] + 0x48);
      uVar5 = *(uint *)(param_4[2] + 0x48);
      uVar18 = *(undefined8 *)(pcVar11 + 0xa0);
      *(uint *)(param_2 + 0x10) = uVar10 + 1;
      if (fVar21 <= fVar22) {
        fVar22 = fVar21;
      }
      puVar2 = (undefined8 *)(*(long *)(param_2 + 8) + (ulong)uVar10 * 0x20);
      *(float *)(puVar2 + 1) = fVar23;
      uVar10 = uVar4;
      if (uVar4 <= uVar5) {
        uVar10 = uVar5;
        uVar5 = uVar4;
      }
      *puVar2 = uVar18;
      *(float *)((long)puVar2 + 0xc) = fVar22;
      *(uint *)(puVar2 + 2) = uVar5;
      *(uint *)((long)puVar2 + 0x14) = uVar10;
    }
  }
  if (((bVar8 != 0) && (*(short *)(param_1 + 0xa0) == -1)) &&
     ((*(short *)(param_1 + 0xa2) == -1 && (fVar24 != 0.0)))) {
    fVar22 = *(float *)(param_3[3] + 0x1c);
    fVar23 = *(float *)(param_4[3] + 0x1c);
    if ((fVar22 < DAT_01d4c18c) || (fVar23 < DAT_01d4c18c)) {
      uVar10 = *(uint *)(param_2 + 0x10);
      uVar4 = *(uint *)(param_3[3] + 0x48);
      uVar5 = *(uint *)(param_4[3] + 0x48);
      uVar18 = *(undefined8 *)(pcVar11 + 0xa8);
      *(uint *)(param_2 + 0x10) = uVar10 + 1;
      if (fVar23 <= fVar22) {
        fVar22 = fVar23;
      }
      puVar2 = (undefined8 *)(*(long *)(param_2 + 8) + (ulong)uVar10 * 0x20);
      *puVar2 = uVar18;
      *(float *)(puVar2 + 1) = fVar24;
      uVar10 = uVar4;
      if (uVar4 <= uVar5) {
        uVar10 = uVar5;
        uVar5 = uVar4;
      }
      *(float *)((long)puVar2 + 0xc) = fVar22;
      *(uint *)(puVar2 + 2) = uVar5;
      *(uint *)((long)puVar2 + 0x14) = uVar10;
      return;
    }
  }
  return;
}


