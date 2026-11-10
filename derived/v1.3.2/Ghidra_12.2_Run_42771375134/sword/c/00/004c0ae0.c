/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c0ae0; name: FUN_004c0ae0
 */


void FUN_004c0ae0(float param_1,float param_2,long param_3,float *param_4,long *param_5)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar8 = DAT_01d4c158;
  if (param_2 <= 0.0) {
    uVar5 = *(uint *)(param_3 + 0x30);
    if (uVar5 != 0) {
      puVar7 = *(undefined8 **)(param_3 + 0x28);
      puVar6 = puVar7;
      do {
        fVar10 = *(float *)((long)puVar7 + 0xc) - param_1;
        fVar9 = *(float *)(puVar7 + 2) - param_2;
        fVar11 = *(float *)((long)puVar7 + 0x14);
        fVar13 = ABS(fVar9);
        if (fVar13 + ABS(fVar10) <= fVar11) {
LAB_004c0d4c:
          uVar5 = *(uint *)((long)param_5 + 0xc);
          *(uint *)((long)param_5 + 0xc) = uVar5 + 1;
          puVar6 = (undefined8 *)(*param_5 + (ulong)uVar5 * 0x18);
          uVar1 = *(undefined4 *)(puVar7 + 1);
          *puVar6 = *puVar7;
          *(undefined4 *)(puVar6 + 1) = uVar1;
          puVar6 = *(undefined8 **)(param_3 + 0x28);
          uVar5 = *(uint *)(param_3 + 0x30);
        }
        else {
          bVar2 = false;
          bVar3 = false;
          bVar4 = false;
          if (ABS(fVar10) <= fVar11) {
            bVar2 = false;
            bVar3 = false;
            bVar4 = true;
            if (!NAN(fVar13) && !NAN(fVar11)) {
              bVar2 = fVar13 < fVar11;
              bVar3 = fVar13 == fVar11;
              bVar4 = false;
            }
          }
          if ((bVar3 || bVar2 != bVar4) &&
             (fVar11 = fVar11 + fVar8, fVar10 * fVar10 + fVar9 * fVar9 <= fVar11 * fVar11))
          goto LAB_004c0d4c;
        }
        puVar7 = puVar7 + 3;
      } while (puVar7 != puVar6 + (ulong)uVar5 * 3);
    }
    fVar9 = *param_4;
    fVar11 = param_4[1];
    fVar8 = param_4[2];
    fVar10 = atan2f(fVar8,-fVar9);
    fVar11 = asinf(-fVar11 / SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar11 * fVar11));
    fVar8 = DAT_01d4c158;
    fVar9 = fVar11 + DAT_01d4be68;
    if (fVar11 <= DAT_01d4c05c) {
      fVar9 = fVar11;
    }
    fVar13 = fVar9 + DAT_01d4bb38;
    if (DAT_01d4c0d0 <= fVar9) {
      fVar13 = fVar9;
    }
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    if (DAT_01d4c0d0 <= fVar9) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar11) && !NAN(DAT_01d4c05c)) {
        bVar2 = fVar11 < DAT_01d4c05c;
        bVar3 = fVar11 == DAT_01d4c05c;
        bVar4 = false;
      }
    }
    if (bVar3 || bVar2 != bVar4) {
      fVar13 = fVar11;
    }
    fVar9 = fVar10 + DAT_01d4c5ac;
    if (fVar10 <= DAT_01d4bb38) {
      fVar9 = fVar10;
    }
    fVar11 = fVar9 + DAT_01d4bdf4;
    if (DAT_01d4be68 <= fVar9) {
      fVar11 = fVar9;
    }
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    if (DAT_01d4be68 <= fVar9) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar10) && !NAN(DAT_01d4bb38)) {
        bVar2 = fVar10 < DAT_01d4bb38;
        bVar3 = fVar10 == DAT_01d4bb38;
        bVar4 = false;
      }
    }
    uVar5 = *(uint *)(param_3 + 0x40);
    if (bVar3 || bVar2 != bVar4) {
      fVar11 = fVar10;
    }
    if (uVar5 != 0) {
      puVar7 = *(undefined8 **)(param_3 + 0x38);
      puVar6 = puVar7;
      do {
        fVar10 = *(float *)((long)puVar7 + 0xc) - fVar11;
        fVar9 = *(float *)(puVar7 + 2) - fVar13;
        fVar12 = *(float *)((long)puVar7 + 0x14);
        fVar14 = ABS(fVar9);
        if (fVar14 + ABS(fVar10) <= fVar12) {
LAB_004c0e8c:
          uVar5 = *(uint *)((long)param_5 + 0xc);
          *(uint *)((long)param_5 + 0xc) = uVar5 + 1;
          puVar6 = (undefined8 *)(*param_5 + (ulong)uVar5 * 0x18);
          uVar1 = *(undefined4 *)(puVar7 + 1);
          *puVar6 = *puVar7;
          *(undefined4 *)(puVar6 + 1) = uVar1;
          puVar6 = *(undefined8 **)(param_3 + 0x38);
          uVar5 = *(uint *)(param_3 + 0x40);
        }
        else {
          bVar2 = false;
          bVar3 = false;
          bVar4 = false;
          if (ABS(fVar10) <= fVar12) {
            bVar2 = false;
            bVar3 = false;
            bVar4 = true;
            if (!NAN(fVar14) && !NAN(fVar12)) {
              bVar2 = fVar14 < fVar12;
              bVar3 = fVar14 == fVar12;
              bVar4 = false;
            }
          }
          if ((bVar3 || bVar2 != bVar4) &&
             (fVar10 * fVar10 + fVar9 * fVar9 <= (fVar12 + fVar8) * (fVar12 + fVar8)))
          goto LAB_004c0e8c;
        }
        puVar7 = puVar7 + 3;
      } while (puVar7 != puVar6 + (ulong)uVar5 * 3);
    }
  }
  else {
    uVar5 = *(uint *)(param_3 + 0x10);
    if (uVar5 != 0) {
      puVar7 = *(undefined8 **)(param_3 + 8);
      puVar6 = puVar7;
      do {
        fVar10 = *(float *)((long)puVar7 + 0xc) - param_1;
        fVar9 = *(float *)(puVar7 + 2) - param_2;
        fVar11 = *(float *)((long)puVar7 + 0x14);
        fVar13 = ABS(fVar9);
        if (fVar13 + ABS(fVar10) <= fVar11) {
LAB_004c0b68:
          uVar5 = *(uint *)((long)param_5 + 0xc);
          *(uint *)((long)param_5 + 0xc) = uVar5 + 1;
          puVar6 = (undefined8 *)(*param_5 + (ulong)uVar5 * 0x18);
          uVar1 = *(undefined4 *)(puVar7 + 1);
          *puVar6 = *puVar7;
          *(undefined4 *)(puVar6 + 1) = uVar1;
          puVar6 = *(undefined8 **)(param_3 + 8);
          uVar5 = *(uint *)(param_3 + 0x10);
        }
        else {
          bVar2 = false;
          bVar3 = false;
          bVar4 = false;
          if (ABS(fVar10) <= fVar11) {
            bVar2 = false;
            bVar3 = false;
            bVar4 = true;
            if (!NAN(fVar13) && !NAN(fVar11)) {
              bVar2 = fVar13 < fVar11;
              bVar3 = fVar13 == fVar11;
              bVar4 = false;
            }
          }
          if ((bVar3 || bVar2 != bVar4) &&
             (fVar11 = fVar11 + fVar8, fVar10 * fVar10 + fVar9 * fVar9 <= fVar11 * fVar11))
          goto LAB_004c0b68;
        }
        puVar7 = puVar7 + 3;
      } while (puVar7 != puVar6 + (ulong)uVar5 * 3);
    }
    fVar9 = *param_4;
    fVar11 = param_4[1];
    fVar8 = param_4[2];
    fVar10 = atan2f(fVar8,-fVar9);
    fVar11 = asinf(-fVar11 / SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar11 * fVar11));
    fVar8 = DAT_01d4c158;
    fVar9 = fVar11 + DAT_01d4be68;
    if (fVar11 <= DAT_01d4c05c) {
      fVar9 = fVar11;
    }
    fVar13 = fVar9 + DAT_01d4bb38;
    if (DAT_01d4c0d0 <= fVar9) {
      fVar13 = fVar9;
    }
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    if (DAT_01d4c0d0 <= fVar9) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar11) && !NAN(DAT_01d4c05c)) {
        bVar2 = fVar11 < DAT_01d4c05c;
        bVar3 = fVar11 == DAT_01d4c05c;
        bVar4 = false;
      }
    }
    if (bVar3 || bVar2 != bVar4) {
      fVar13 = fVar11;
    }
    fVar9 = fVar10 + DAT_01d4c5ac;
    if (fVar10 <= DAT_01d4bb38) {
      fVar9 = fVar10;
    }
    fVar11 = fVar9 + DAT_01d4bdf4;
    if (DAT_01d4be68 <= fVar9) {
      fVar11 = fVar9;
    }
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    if (DAT_01d4be68 <= fVar9) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar10) && !NAN(DAT_01d4bb38)) {
        bVar2 = fVar10 < DAT_01d4bb38;
        bVar3 = fVar10 == DAT_01d4bb38;
        bVar4 = false;
      }
    }
    uVar5 = *(uint *)(param_3 + 0x20);
    if (bVar3 || bVar2 != bVar4) {
      fVar11 = fVar10;
    }
    if (uVar5 != 0) {
      puVar7 = *(undefined8 **)(param_3 + 0x18);
      puVar6 = puVar7;
      do {
        fVar10 = *(float *)((long)puVar7 + 0xc) - fVar11;
        fVar9 = *(float *)(puVar7 + 2) - fVar13;
        fVar12 = *(float *)((long)puVar7 + 0x14);
        fVar14 = ABS(fVar9);
        if (fVar14 + ABS(fVar10) <= fVar12) {
LAB_004c0ca8:
          uVar5 = *(uint *)((long)param_5 + 0xc);
          *(uint *)((long)param_5 + 0xc) = uVar5 + 1;
          puVar6 = (undefined8 *)(*param_5 + (ulong)uVar5 * 0x18);
          uVar1 = *(undefined4 *)(puVar7 + 1);
          *puVar6 = *puVar7;
          *(undefined4 *)(puVar6 + 1) = uVar1;
          puVar6 = *(undefined8 **)(param_3 + 0x18);
          uVar5 = *(uint *)(param_3 + 0x20);
        }
        else {
          bVar2 = false;
          bVar3 = false;
          bVar4 = false;
          if (ABS(fVar10) <= fVar12) {
            bVar2 = false;
            bVar3 = false;
            bVar4 = true;
            if (!NAN(fVar14) && !NAN(fVar12)) {
              bVar2 = fVar14 < fVar12;
              bVar3 = fVar14 == fVar12;
              bVar4 = false;
            }
          }
          if ((bVar3 || bVar2 != bVar4) &&
             (fVar10 * fVar10 + fVar9 * fVar9 <= (fVar12 + fVar8) * (fVar12 + fVar8)))
          goto LAB_004c0ca8;
        }
        puVar7 = puVar7 + 3;
      } while (puVar7 != puVar6 + (ulong)uVar5 * 3);
    }
  }
  return;
}


