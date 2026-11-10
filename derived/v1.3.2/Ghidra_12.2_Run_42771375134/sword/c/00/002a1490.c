/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002a1490; name: FUN_002a1490
 */


void FUN_002a1490(long param_1,undefined8 *param_2,float *param_3)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (0 < *(int *)(param_1 + 0x50)) {
    lVar7 = *(long *)(param_1 + 0x58);
    lVar4 = lVar7;
    lVar8 = (long)*(int *)(param_1 + 0x50);
    do {
      lVar9 = 0;
      do {
        while( true ) {
          lVar1 = lVar4 + lVar8 * 0x70 + lVar9;
          fVar13 = *(float *)(lVar1 + -0x70);
          fVar10 = *(float *)(lVar1 + -0x40);
          if (fVar10 < fVar13) goto LAB_002a164c;
          uVar2 = *(uint *)(lVar1 + -0x10);
          if ((uVar2 & 1) == 0) break;
          (**(code **)*param_2)(param_2,uVar2 - 1,&uStack_70,&local_80);
          *(int *)(lVar1 + -0x70) = (int)uStack_70;
          *(int *)(lVar1 + -0x60) = (int)((ulong)uStack_70 >> 0x20);
          *(int *)(lVar1 + -0x50) = (int)uStack_68;
          *(int *)(lVar1 + -0x40) = (int)local_80;
          *(int *)(lVar1 + -0x30) = (int)((ulong)local_80 >> 0x20);
          *(int *)(lVar1 + -0x20) = (int)uStack_78;
joined_r0x002a185c:
          lVar9 = lVar9 + 4;
          if (lVar9 == 0x10) goto LAB_002a1860;
        }
        pfVar6 = (float *)(lVar7 + (ulong)uVar2);
        fVar11 = *pfVar6;
        if (fVar11 <= pfVar6[0xc]) {
          *(float *)(lVar1 + -0x70) = fVar11;
          *(float *)(lVar1 + -0x60) = pfVar6[4];
          *(float *)(lVar1 + -0x50) = pfVar6[8];
          fVar10 = pfVar6[0xc];
          *(float *)(lVar1 + -0x40) = fVar10;
          *(float *)(lVar1 + -0x30) = pfVar6[0x10];
          bVar3 = false;
          *(float *)(lVar1 + -0x20) = pfVar6[0x14];
          fVar12 = pfVar6[1];
          if (fVar12 <= pfVar6[0xd]) goto LAB_002a1530;
LAB_002a1624:
          fVar12 = fVar11;
          fVar13 = fVar12;
          fVar11 = pfVar6[2];
          if (pfVar6[2] <= pfVar6[0xe]) goto LAB_002a16dc;
LAB_002a1638:
          fVar11 = pfVar6[3];
          if (pfVar6[0xf] < fVar11) goto LAB_002a164c;
LAB_002a1724:
          if (bVar3) {
            *(float *)(lVar1 + -0x70) = fVar11;
            *(float *)(lVar1 + -0x60) = pfVar6[7];
            *(float *)(lVar1 + -0x50) = pfVar6[0xb];
            *(float *)(lVar1 + -0x40) = pfVar6[0xf];
            *(float *)(lVar1 + -0x30) = pfVar6[0x13];
            *(float *)(lVar1 + -0x20) = pfVar6[0x17];
          }
          else {
            if (fVar11 <= fVar13) {
              fVar13 = fVar11;
            }
            *(float *)(lVar1 + -0x70) = fVar13;
            fVar13 = *(float *)(lVar1 + -0x60);
            if (pfVar6[7] <= *(float *)(lVar1 + -0x60)) {
              fVar13 = pfVar6[7];
            }
            *(float *)(lVar1 + -0x60) = fVar13;
            fVar13 = *(float *)(lVar1 + -0x50);
            if (pfVar6[0xb] <= *(float *)(lVar1 + -0x50)) {
              fVar13 = pfVar6[0xb];
            }
            *(float *)(lVar1 + -0x50) = fVar13;
            if (fVar10 <= pfVar6[0xf]) {
              fVar10 = pfVar6[0xf];
            }
            *(float *)(lVar1 + -0x40) = fVar10;
            fVar10 = *(float *)(lVar1 + -0x30);
            if (*(float *)(lVar1 + -0x30) <= pfVar6[0x13]) {
              fVar10 = pfVar6[0x13];
            }
            *(float *)(lVar1 + -0x30) = fVar10;
            fVar10 = *(float *)(lVar1 + -0x20);
            if (*(float *)(lVar1 + -0x20) <= pfVar6[0x17]) {
              fVar10 = pfVar6[0x17];
            }
            *(float *)(lVar1 + -0x20) = fVar10;
          }
          goto joined_r0x002a185c;
        }
        bVar3 = true;
        fVar12 = pfVar6[1];
        fVar11 = fVar13;
        if (pfVar6[0xd] < fVar12) goto LAB_002a1624;
LAB_002a1530:
        if (!bVar3) {
          if (fVar12 <= fVar11) {
            fVar11 = fVar12;
          }
          fVar12 = fVar11;
          *(float *)(lVar1 + -0x70) = fVar12;
          fVar13 = *(float *)(lVar1 + -0x60);
          if (pfVar6[5] <= *(float *)(lVar1 + -0x60)) {
            fVar13 = pfVar6[5];
          }
          *(float *)(lVar1 + -0x60) = fVar13;
          fVar13 = *(float *)(lVar1 + -0x50);
          if (pfVar6[9] <= *(float *)(lVar1 + -0x50)) {
            fVar13 = pfVar6[9];
          }
          *(float *)(lVar1 + -0x50) = fVar13;
          if (fVar10 <= pfVar6[0xd]) {
            fVar10 = pfVar6[0xd];
          }
          *(float *)(lVar1 + -0x40) = fVar10;
          fVar13 = *(float *)(lVar1 + -0x30);
          if (*(float *)(lVar1 + -0x30) <= pfVar6[0x11]) {
            fVar13 = pfVar6[0x11];
          }
          *(float *)(lVar1 + -0x30) = fVar13;
          fVar13 = *(float *)(lVar1 + -0x20);
          if (*(float *)(lVar1 + -0x20) <= pfVar6[0x15]) {
            fVar13 = pfVar6[0x15];
          }
          bVar3 = false;
          *(float *)(lVar1 + -0x20) = fVar13;
          fVar13 = fVar12;
          fVar11 = pfVar6[2];
          if (pfVar6[2] <= pfVar6[0xe]) goto LAB_002a16dc;
          goto LAB_002a1638;
        }
        *(float *)(lVar1 + -0x70) = fVar12;
        *(float *)(lVar1 + -0x60) = pfVar6[5];
        *(float *)(lVar1 + -0x50) = pfVar6[9];
        fVar10 = pfVar6[0xd];
        *(float *)(lVar1 + -0x40) = fVar10;
        *(float *)(lVar1 + -0x30) = pfVar6[0x11];
        bVar3 = false;
        *(float *)(lVar1 + -0x20) = pfVar6[0x15];
        fVar13 = fVar12;
        fVar11 = pfVar6[2];
        if (pfVar6[0xe] < pfVar6[2]) goto LAB_002a1638;
LAB_002a16dc:
        fVar13 = fVar11;
        if (bVar3) {
          *(float *)(lVar1 + -0x70) = fVar13;
          *(float *)(lVar1 + -0x60) = pfVar6[6];
          *(float *)(lVar1 + -0x50) = pfVar6[10];
          fVar10 = pfVar6[0xe];
          *(float *)(lVar1 + -0x40) = fVar10;
          *(float *)(lVar1 + -0x30) = pfVar6[0x12];
          bVar3 = false;
          *(float *)(lVar1 + -0x20) = pfVar6[0x16];
          fVar11 = pfVar6[3];
          if (fVar11 <= pfVar6[0xf]) goto LAB_002a1724;
        }
        else {
          if (fVar13 <= fVar12) {
            fVar12 = fVar13;
          }
          fVar13 = fVar12;
          *(float *)(lVar1 + -0x70) = fVar13;
          fVar11 = *(float *)(lVar1 + -0x60);
          if (pfVar6[6] <= *(float *)(lVar1 + -0x60)) {
            fVar11 = pfVar6[6];
          }
          *(float *)(lVar1 + -0x60) = fVar11;
          fVar11 = *(float *)(lVar1 + -0x50);
          if (pfVar6[10] <= *(float *)(lVar1 + -0x50)) {
            fVar11 = pfVar6[10];
          }
          *(float *)(lVar1 + -0x50) = fVar11;
          if (fVar10 <= pfVar6[0xe]) {
            fVar10 = pfVar6[0xe];
          }
          *(float *)(lVar1 + -0x40) = fVar10;
          fVar11 = *(float *)(lVar1 + -0x30);
          if (*(float *)(lVar1 + -0x30) <= pfVar6[0x12]) {
            fVar11 = pfVar6[0x12];
          }
          *(float *)(lVar1 + -0x30) = fVar11;
          fVar11 = *(float *)(lVar1 + -0x20);
          if (*(float *)(lVar1 + -0x20) <= pfVar6[0x16]) {
            fVar11 = pfVar6[0x16];
          }
          bVar3 = false;
          *(float *)(lVar1 + -0x20) = fVar11;
          fVar11 = pfVar6[3];
          if (fVar11 <= pfVar6[0xf]) goto LAB_002a1724;
        }
LAB_002a164c:
        lVar9 = lVar9 + 4;
      } while (lVar9 != 0x10);
LAB_002a1860:
      if (lVar8 < 2) break;
      lVar4 = *(long *)(param_1 + 0x58);
      lVar8 = lVar8 + -1;
    } while( true );
  }
  fVar13 = DAT_01d4c5a8;
  fVar10 = DAT_01d4c18c;
  if ((param_3 != (float *)0x0) && (uVar2 = *(uint *)(param_1 + 0x44), uVar2 != 0)) {
    uVar5 = 0;
    pfVar6 = (float *)(*(long *)(param_1 + 0x58) + 0x30);
    do {
      fVar19 = pfVar6[-0xc];
      fVar17 = *pfVar6;
      fVar11 = fVar10;
      fVar12 = fVar10;
      fVar14 = fVar13;
      fVar15 = fVar13;
      if (fVar19 <= fVar17) {
        fVar11 = pfVar6[-8];
        if (fVar10 < pfVar6[-8]) {
          fVar11 = fVar10;
        }
        fVar12 = pfVar6[-4];
        if (fVar10 < pfVar6[-4]) {
          fVar12 = fVar10;
        }
        if (fVar10 < fVar19) {
          fVar19 = fVar10;
        }
        if (fVar17 <= fVar13) {
          fVar17 = fVar13;
        }
        fVar14 = pfVar6[4];
        if (pfVar6[4] <= fVar13) {
          fVar14 = fVar13;
        }
        fVar15 = pfVar6[8];
        if (pfVar6[8] <= fVar13) {
          fVar15 = fVar13;
        }
        fVar20 = pfVar6[-0xb];
        fVar18 = pfVar6[1];
        if (fVar18 < fVar20) goto LAB_002a18c8;
LAB_002a196c:
        if (fVar20 <= fVar19) {
          fVar19 = fVar20;
        }
        if (pfVar6[-7] <= fVar11) {
          fVar11 = pfVar6[-7];
        }
        if (pfVar6[-3] <= fVar12) {
          fVar12 = pfVar6[-3];
        }
        if (fVar17 <= fVar18) {
          fVar17 = fVar18;
        }
        if (fVar14 <= pfVar6[5]) {
          fVar14 = pfVar6[5];
        }
        if (fVar15 <= pfVar6[9]) {
          fVar15 = pfVar6[9];
        }
        fVar20 = pfVar6[-10];
        fVar18 = pfVar6[2];
        if (fVar18 < fVar20) goto LAB_002a18d8;
LAB_002a19bc:
        if (fVar20 <= fVar19) {
          fVar19 = fVar20;
        }
        if (pfVar6[-6] <= fVar11) {
          fVar11 = pfVar6[-6];
        }
        if (pfVar6[-2] <= fVar12) {
          fVar12 = pfVar6[-2];
        }
        if (fVar17 <= fVar18) {
          fVar17 = fVar18;
        }
        if (fVar14 <= pfVar6[6]) {
          fVar14 = pfVar6[6];
        }
        if (fVar15 <= pfVar6[10]) {
          fVar15 = pfVar6[10];
        }
        fVar20 = pfVar6[-9];
        fVar18 = pfVar6[3];
        if (fVar18 < fVar20) goto LAB_002a18e8;
LAB_002a1a0c:
        if (fVar20 <= fVar19) {
          fVar19 = fVar20;
        }
        if (pfVar6[-5] <= fVar11) {
          fVar11 = pfVar6[-5];
        }
        if (pfVar6[-1] <= fVar12) {
          fVar12 = pfVar6[-1];
        }
        if (fVar17 <= fVar18) {
          fVar17 = fVar18;
        }
        if (fVar14 <= pfVar6[7]) {
          fVar14 = pfVar6[7];
        }
        if (fVar15 <= pfVar6[0xb]) {
          fVar15 = pfVar6[0xb];
        }
        fVar20 = fVar14;
        fVar18 = fVar17;
        fVar16 = fVar15;
        if (uVar5 != 0) goto LAB_002a18ec;
LAB_002a1a50:
        *param_3 = fVar19;
        param_3[1] = fVar11;
        param_3[2] = fVar12;
      }
      else {
        fVar20 = pfVar6[-0xb];
        fVar18 = pfVar6[1];
        fVar19 = fVar10;
        fVar17 = fVar13;
        if (fVar20 <= fVar18) goto LAB_002a196c;
LAB_002a18c8:
        fVar20 = pfVar6[-10];
        fVar18 = pfVar6[2];
        if (fVar20 <= fVar18) goto LAB_002a19bc;
LAB_002a18d8:
        fVar20 = pfVar6[-9];
        fVar18 = pfVar6[3];
        if (fVar20 <= fVar18) goto LAB_002a1a0c;
LAB_002a18e8:
        fVar20 = fVar14;
        fVar18 = fVar17;
        fVar16 = fVar15;
        if (uVar5 == 0) goto LAB_002a1a50;
LAB_002a18ec:
        fVar18 = *param_3;
        if (fVar19 <= *param_3) {
          fVar18 = fVar19;
        }
        fVar19 = param_3[1];
        if (fVar11 <= param_3[1]) {
          fVar19 = fVar11;
        }
        *param_3 = fVar18;
        param_3[1] = fVar19;
        fVar11 = param_3[2];
        if (fVar12 <= param_3[2]) {
          fVar11 = fVar12;
        }
        param_3[2] = fVar11;
        fVar18 = param_3[3];
        if (param_3[3] <= fVar17) {
          fVar18 = fVar17;
        }
        fVar20 = param_3[4];
        if (param_3[4] <= fVar14) {
          fVar20 = fVar14;
        }
        fVar16 = param_3[5];
        if (param_3[5] <= fVar15) {
          fVar16 = fVar15;
        }
      }
      uVar5 = uVar5 + 1;
      pfVar6 = pfVar6 + 0x1c;
      param_3[3] = fVar18;
      param_3[4] = fVar20;
      param_3[5] = fVar16;
    } while (uVar5 < uVar2);
  }
  return;
}


