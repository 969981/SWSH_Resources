/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00168420; name: FUN_00168420
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00168420(long param_1,long param_2,long *param_3,long *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  ushort uVar11;
  ulong *puVar12;
  char *pcVar13;
  byte bVar14;
  byte bVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  undefined8 uVar19;
  float *pfVar20;
  char *pcVar21;
  char *pcVar22;
  ulong uVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  
  pcVar13 = *(char **)(param_1 + 0x20);
  uVar11 = *(ushort *)(param_1 + 0x1e);
  lVar2 = 0xa0;
  if (*pcVar13 != '\a') {
    lVar2 = 0x70;
  }
  lVar3 = 0x90;
  if (*pcVar13 != '\a') {
    lVar3 = 0x60;
  }
  if ((ulong)uVar11 == 0) {
    bVar14 = 0;
    bVar15 = 0;
    fVar26 = 0.0;
    fVar27 = 0.0;
    fVar28 = 0.0;
    bVar8 = 0;
  }
  else {
    pfVar16 = *(float **)(param_1 + 0xb8);
    pfVar17 = *(float **)(param_1 + 0x88);
    fVar25 = 0.0;
    fVar26 = 0.0;
    fVar27 = 0.0;
    fVar28 = 0.0;
    pfVar18 = *(float **)(param_1 + 0x58);
    pfVar20 = *(float **)(param_1 + 0x28);
    pcVar21 = pcVar13;
    do {
      uVar23 = (ulong)(byte)pcVar21[1];
      puVar12 = (ulong *)(pcVar21 + lVar2 * uVar23 + uVar23 * 0x10 + 0xd0);
      bVar8 = pcVar21[2];
      bVar9 = pcVar21[5];
      puVar4 = puVar12 + 0x12;
      if (bVar8 == 0) {
        puVar4 = puVar12;
      }
      bVar10 = pcVar21[4];
      bVar15 = pcVar21[6];
      bVar14 = pcVar21[7];
      if (uVar23 != 0) {
        uVar24 = 0;
        do {
          uVar31 = *(undefined8 *)(pcVar21 + (uVar24 * 2 + 0x1a) * 8 + 8);
          uVar19 = *(undefined8 *)(pcVar21 + (uVar24 * 2 + 0x1a) * 8);
          fVar29 = (float)uVar19;
          if ((pfVar20 != (float *)0x0) && (uVar24 < (byte)pcVar21[8])) {
            *pfVar20 = fVar29;
            pfVar20 = pfVar20 + 1;
          }
          fVar33 = (float)((ulong)uVar19 >> 0x20);
          if ((pfVar18 != (float *)0x0) && (uVar24 < (byte)pcVar21[9])) {
            *pfVar18 = fVar33;
            pfVar18 = pfVar18 + 1;
          }
          fVar30 = (float)uVar31;
          if ((pfVar17 != (float *)0x0) && (uVar24 < (byte)pcVar21[10])) {
            *pfVar17 = fVar30;
            pfVar17 = pfVar17 + 1;
          }
          fVar32 = (float)((ulong)uVar31 >> 0x20);
          if ((pfVar16 != (float *)0x0) && (uVar24 < (byte)pcVar21[0xb])) {
            *pfVar16 = fVar32;
            pfVar16 = pfVar16 + 1;
          }
          fVar25 = fVar25 + fVar29;
          fVar26 = fVar26 + fVar33;
          fVar27 = fVar27 + fVar30;
          fVar28 = fVar28 + fVar32;
          uVar24 = uVar24 + 1;
        } while (uVar23 != uVar24);
      }
      pcVar22 = (char *)((long)puVar4 + lVar3 * (ulong)bVar8 + (ulong)bVar8 * 0x10);
      if (bVar8 != 0) {
        uVar23 = *puVar12;
        uVar24 = puVar12[1];
        if ((pcVar21[0xc] != '\0') && ((int)uVar23 != 0)) {
          *(undefined1 *)puVar12[2] = 1;
        }
        if ((pcVar21[0xd] != '\0') && ((uVar23 & 0xffffffff00000000) != 0)) {
          *(undefined1 *)puVar12[3] = 1;
        }
        if ((pcVar21[0xe] != '\0') && ((uVar24 & 0xffffffff) != 0)) {
          *(undefined1 *)puVar12[4] = 1;
        }
        if ((pcVar21[0xf] != '\0') && (uVar24 >> 0x20 != 0)) {
          *(undefined1 *)puVar12[5] = 1;
        }
      }
      pcVar21 = pcVar22;
    } while (pcVar22 < pcVar13 + (ulong)uVar11 * 0x10);
    bVar8 = bVar9 & 1;
    bVar15 = bVar15 & 1;
    bVar14 = bVar14 & 1;
    if (((((bVar10 & 1) != 0) && (*(short *)(param_1 + 0x10) == -1)) &&
        (*(short *)(param_1 + 0x12) == -1)) && (fVar25 != 0.0)) {
      fVar29 = *(float *)(*param_3 + 0x1c);
      fVar33 = *(float *)(*param_4 + 0x1c);
      if ((fVar29 < DAT_01d4c18c) || (fVar33 < DAT_01d4c18c)) {
        uVar5 = *(uint *)(param_2 + 0x10);
        uVar6 = *(uint *)(*param_3 + 0x48);
        uVar7 = *(uint *)(*param_4 + 0x48);
        uVar19 = *(undefined8 *)(pcVar13 + 0xb0);
        *(uint *)(param_2 + 0x10) = uVar5 + 1;
        if (fVar33 <= fVar29) {
          fVar29 = fVar33;
        }
        puVar1 = (undefined8 *)(*(long *)(param_2 + 8) + (ulong)uVar5 * 0x20);
        *(float *)(puVar1 + 1) = fVar25;
        uVar5 = uVar6;
        if (uVar6 <= uVar7) {
          uVar5 = uVar7;
          uVar7 = uVar6;
        }
        *puVar1 = uVar19;
        *(float *)((long)puVar1 + 0xc) = fVar29;
        *(uint *)(puVar1 + 2) = uVar7;
        *(uint *)((long)puVar1 + 0x14) = uVar5;
        bVar8 = bVar9 & 1;
      }
    }
  }
  if (((bVar8 != 0) && (*(short *)(param_1 + 0x40) == -1)) &&
     ((*(short *)(param_1 + 0x42) == -1 && (fVar26 != 0.0)))) {
    fVar25 = *(float *)(param_3[1] + 0x1c);
    fVar29 = *(float *)(param_4[1] + 0x1c);
    if ((fVar25 < DAT_01d4c18c) || (fVar29 < DAT_01d4c18c)) {
      uVar5 = *(uint *)(param_2 + 0x10);
      uVar6 = *(uint *)(param_3[1] + 0x48);
      uVar7 = *(uint *)(param_4[1] + 0x48);
      uVar19 = *(undefined8 *)(pcVar13 + 0xb8);
      *(uint *)(param_2 + 0x10) = uVar5 + 1;
      if (fVar29 <= fVar25) {
        fVar25 = fVar29;
      }
      puVar1 = (undefined8 *)(*(long *)(param_2 + 8) + (ulong)uVar5 * 0x20);
      *(float *)(puVar1 + 1) = fVar26;
      uVar5 = uVar6;
      if (uVar6 <= uVar7) {
        uVar5 = uVar7;
        uVar7 = uVar6;
      }
      *puVar1 = uVar19;
      *(float *)((long)puVar1 + 0xc) = fVar25;
      *(uint *)(puVar1 + 2) = uVar7;
      *(uint *)((long)puVar1 + 0x14) = uVar5;
    }
  }
  if ((((bVar15 != 0) && (*(short *)(param_1 + 0x70) == -1)) && (*(short *)(param_1 + 0x72) == -1))
     && (fVar27 != 0.0)) {
    fVar26 = *(float *)(param_3[2] + 0x1c);
    fVar25 = *(float *)(param_4[2] + 0x1c);
    if ((fVar26 < DAT_01d4c18c) || (fVar25 < DAT_01d4c18c)) {
      uVar5 = *(uint *)(param_2 + 0x10);
      uVar6 = *(uint *)(param_3[2] + 0x48);
      uVar7 = *(uint *)(param_4[2] + 0x48);
      uVar19 = *(undefined8 *)(pcVar13 + 0xc0);
      *(uint *)(param_2 + 0x10) = uVar5 + 1;
      if (fVar25 <= fVar26) {
        fVar26 = fVar25;
      }
      puVar1 = (undefined8 *)(*(long *)(param_2 + 8) + (ulong)uVar5 * 0x20);
      *(float *)(puVar1 + 1) = fVar27;
      uVar5 = uVar6;
      if (uVar6 <= uVar7) {
        uVar5 = uVar7;
        uVar7 = uVar6;
      }
      *puVar1 = uVar19;
      *(float *)((long)puVar1 + 0xc) = fVar26;
      *(uint *)(puVar1 + 2) = uVar7;
      *(uint *)((long)puVar1 + 0x14) = uVar5;
    }
  }
  if (((bVar14 != 0) && (*(short *)(param_1 + 0xa0) == -1)) &&
     ((*(short *)(param_1 + 0xa2) == -1 && (fVar28 != 0.0)))) {
    fVar26 = *(float *)(param_3[3] + 0x1c);
    fVar27 = *(float *)(param_4[3] + 0x1c);
    if ((fVar26 < DAT_01d4c18c) || (fVar27 < DAT_01d4c18c)) {
      uVar5 = *(uint *)(param_2 + 0x10);
      uVar6 = *(uint *)(param_3[3] + 0x48);
      uVar7 = *(uint *)(param_4[3] + 0x48);
      uVar19 = *(undefined8 *)(pcVar13 + 200);
      *(uint *)(param_2 + 0x10) = uVar5 + 1;
      if (fVar27 <= fVar26) {
        fVar26 = fVar27;
      }
      puVar1 = (undefined8 *)(*(long *)(param_2 + 8) + (ulong)uVar5 * 0x20);
      *puVar1 = uVar19;
      *(float *)(puVar1 + 1) = fVar28;
      uVar5 = uVar6;
      if (uVar6 <= uVar7) {
        uVar5 = uVar7;
        uVar7 = uVar6;
      }
      *(float *)((long)puVar1 + 0xc) = fVar26;
      *(uint *)(puVar1 + 2) = uVar7;
      *(uint *)((long)puVar1 + 0x14) = uVar5;
      return;
    }
  }
  return;
}


