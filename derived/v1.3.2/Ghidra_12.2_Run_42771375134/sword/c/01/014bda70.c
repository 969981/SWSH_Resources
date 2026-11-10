/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014bda70; name: FUN_014bda70
 */


void FUN_014bda70(long param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  short *psVar11;
  short sVar12;
  ulong uVar13;
  undefined2 *puVar14;
  undefined2 uVar15;
  short *psVar16;
  short *psVar17;
  short *psVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined2 *puVar24;
  
  uVar4 = FUN_0077d490(*(undefined8 *)(param_1 + 0x78));
  uVar5 = FUN_0077d490(*(undefined8 *)(param_1 + 0x1a0));
  if (uVar5 < uVar4) {
    return;
  }
  psVar8 = (short *)FUN_0077d470(*(undefined8 *)(param_1 + 0x78));
  psVar9 = (short *)FUN_0077d470(*(undefined8 *)(param_1 + 0x1a0));
  uVar15 = 0x20;
  if (4 < *(int *)(param_1 + 0x168) - 2U) {
    uVar15 = 0x3000;
  }
LAB_014bdb18:
  do {
    while( true ) {
      for (; sVar12 = *psVar8, sVar12 != 0x10; psVar8 = psVar8 + 1) {
        if (sVar12 == 0) {
          *psVar9 = 0;
          FUN_0077efd0(param_1,*(undefined8 *)(param_1 + 0x1a0));
          return;
        }
        *psVar9 = sVar12;
        psVar9 = psVar9 + 1;
      }
      cVar2 = FUN_014bf260(psVar8);
      if ((cVar2 == -0x43) && (cVar2 = FUN_014bed40(psVar8), cVar2 == '\x06')) break;
      psVar10 = (short *)FUN_0077db30(psVar8);
      if (psVar10 != psVar8) {
        uVar20 = (long)psVar10 + (-2 - (long)psVar8);
        uVar13 = uVar20 >> 1;
        uVar4 = (int)uVar13 + 1;
        psVar17 = psVar8;
        psVar11 = psVar9;
        if ((uVar4 & 7) != 0) {
          lVar22 = -((ulong)uVar4 & 7);
          psVar16 = psVar8;
          psVar18 = psVar9;
          do {
            psVar17 = psVar16 + 1;
            lVar22 = lVar22 + 1;
            psVar11 = psVar18 + 1;
            *psVar18 = *psVar16;
            psVar16 = psVar17;
            psVar18 = psVar11;
          } while (lVar22 != 0);
        }
        if (0xd < uVar20) {
          do {
            *psVar11 = *psVar17;
            psVar11[1] = psVar17[1];
            psVar11[2] = psVar17[2];
            psVar11[3] = psVar17[3];
            psVar11[4] = psVar17[4];
            psVar11[5] = psVar17[5];
            psVar11[6] = psVar17[6];
            psVar16 = psVar17 + 7;
            psVar17 = psVar17 + 8;
            psVar11[7] = *psVar16;
            psVar11 = psVar11 + 8;
          } while (psVar10 != psVar17);
        }
        psVar8 = psVar8 + uVar13 + 1;
        psVar9 = psVar9 + uVar13 + 1;
      }
    }
    psVar8 = (short *)FUN_0077db30(psVar8);
    sVar12 = *psVar8;
    psVar10 = psVar8;
    while( true ) {
      while (sVar12 == 0x10) {
        cVar2 = FUN_014bf260(psVar10);
        if ((cVar2 == -0x42) && (bVar3 = FUN_014bed40(psVar10), bVar3 < 2)) goto LAB_014bdb18;
        psVar10 = (short *)FUN_0077db30(psVar10);
        sVar12 = *psVar10;
      }
      if (sVar12 == 0) goto LAB_014bdb18;
      if (sVar12 == 10) break;
      psVar10 = psVar10 + 1;
      sVar12 = *psVar10;
    }
    lVar22 = FUN_0077d470(*(undefined8 *)(param_1 + 0x1a8));
    uVar4 = 0;
    puVar24 = (undefined2 *)0x0;
    do {
      while (sVar12 = *psVar8, puVar14 = puVar24, sVar12 == 10) {
        puVar14 = (undefined2 *)(lVar22 + (long)(int)uVar4 * 2);
        if (puVar24 != (undefined2 *)0x0) {
LAB_014bdda8:
          bVar1 = puVar24 == (undefined2 *)0x0;
          *puVar14 = 0;
          puVar14 = puVar24;
          goto LAB_014bddb8;
        }
        *puVar14 = uVar15;
        psVar8 = psVar8 + 1;
        uVar4 = uVar4 + 1;
        puVar24 = puVar14;
        if (0x7f < uVar4) goto LAB_014bdd90;
      }
      if (sVar12 == 0x10) {
        cVar2 = FUN_014bf260(psVar8);
        if ((cVar2 == -0x42) &&
           ((cVar2 = FUN_014bed40(psVar8), cVar2 == '\0' ||
            (cVar2 = FUN_014bed40(psVar8), cVar2 == '\x01')))) goto LAB_014bdda4;
        sVar12 = *psVar8;
        if (sVar12 != 0x10) goto LAB_014bdd64;
        psVar11 = (short *)FUN_0077db30(psVar8);
        psVar10 = (short *)(lVar22 + (long)(int)uVar4 * 2);
        psVar17 = psVar8;
        while (psVar8 = psVar11, psVar11 != psVar17) {
          psVar8 = psVar17 + 1;
          uVar4 = uVar4 + 1;
          *psVar10 = *psVar17;
          psVar10 = psVar10 + 1;
          psVar17 = psVar8;
          if (0x7f < uVar4) {
            uVar4 = 0x80;
            goto LAB_014bdd90;
          }
        }
      }
      else {
        if (sVar12 == 0) {
LAB_014bdda4:
          puVar14 = (undefined2 *)(lVar22 + (long)(int)uVar4 * 2);
          goto LAB_014bdda8;
        }
LAB_014bdd64:
        *(short *)(lVar22 + (long)(int)uVar4 * 2) = sVar12;
        uVar4 = uVar4 + 1;
        psVar8 = psVar8 + 1;
      }
    } while (uVar4 < 0x80);
LAB_014bdd90:
    if (puVar14 == (undefined2 *)0x0) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
      *puVar14 = 10;
    }
LAB_014bddb8:
    uVar23 = *(undefined8 *)(param_1 + 0x1a8);
    uVar5 = FUN_0077d480(uVar23);
    uVar6 = FUN_019ca7f0(**(undefined8 **)(param_1 + 0x58));
    if ((uVar6 & 0xffff) < uVar5) {
      if (!bVar1) {
LAB_014bde3c:
        *puVar14 = 10;
      }
    }
    else {
      FUN_0077efd0(param_1,uVar23);
      iVar7 = FUN_014bfcd0(*(undefined4 *)(param_1 + 0x16c),*(undefined8 *)(param_1 + 0x78),
                           *(undefined8 *)(param_1 + 0x160),0);
      if (!bVar1 && *(float *)(**(long **)(param_1 + 0x58) + 0x50) < (float)iVar7)
      goto LAB_014bde3c;
    }
    if (0 < (int)uVar4) {
      uVar13 = (ulong)uVar4;
      psVar10 = psVar9;
      if (uVar13 - 1 < 7) {
        lVar21 = 0;
      }
      else {
        lVar21 = 0;
        psVar17 = (short *)(lVar22 + 8);
        do {
          *psVar10 = psVar17[-4];
          psVar10[1] = psVar17[-3];
          psVar10[2] = psVar17[-2];
          psVar10[3] = psVar17[-1];
          psVar10[4] = *psVar17;
          psVar10[5] = psVar17[1];
          psVar10[6] = psVar17[2];
          psVar11 = psVar17 + 3;
          lVar21 = lVar21 + -8;
          psVar17 = psVar17 + 8;
          psVar10[7] = *psVar11;
          psVar10 = psVar10 + 8;
        } while ((uVar13 & 7) - uVar13 != lVar21);
        lVar21 = -lVar21;
      }
      if ((uVar4 & 7) != 0) {
        lVar19 = -(uVar13 & 7);
        psVar17 = (short *)(lVar22 + lVar21 * 2);
        do {
          lVar19 = lVar19 + 1;
          *psVar10 = *psVar17;
          psVar10 = psVar10 + 1;
          psVar17 = psVar17 + 1;
        } while (lVar19 != 0);
      }
      psVar9 = psVar9 + (ulong)(uVar4 - 1) + 1;
    }
  } while( true );
}


