/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ae800; name: FUN_012ae800
 */


bool FUN_012ae800(ushort *param_1,char param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  bool bVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  ushort uVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  
  if (param_2 == '\x01') {
    uVar13 = 0;
    uVar9 = 0;
    bVar7 = false;
    do {
      while( true ) {
        uVar11 = param_1[uVar13];
        iVar14 = (int)uVar13;
        if (uVar11 == 0) {
          uVar11 = (ushort)(iVar14 == 0);
          goto LAB_012aecd8;
        }
        uVar8 = (uint)uVar11;
        if (uVar8 == 0x4edd || 0x51a0 < (ushort)(uVar11 + 0xb200)) break;
LAB_012ae894:
        uVar9 = 1;
LAB_012ae898:
        uVar13 = uVar13 + 1;
        if (0xc < uVar13) goto LAB_012ae8b8;
      }
      if ((((uVar8 - 0x30a1 & 0xffff) < 0x5a || (uVar8 - 0x3041 & 0xffff) < 0x50) ||
          (ushort)(uVar11 + 0xb200) < 0x51cd) || (uVar8 + 0x5400 >> 2 & 0x3fff) < 0xae9) {
        bVar7 = true;
      }
      if (uVar13 < 6) goto LAB_012ae898;
      if (bVar7) goto LAB_012ae894;
      bVar7 = false;
      uVar13 = uVar13 + 1;
    } while (uVar13 < 0xd);
LAB_012ae8b8:
    if (iVar14 == 0xc) {
LAB_012ae8c0:
      iVar14 = 2;
    }
    else {
      iVar14 = 0;
    }
    iVar12 = 3;
    goto LAB_012aecf8;
  }
  uVar11 = *param_1;
  if (uVar11 == 0) {
    uVar9 = 0;
    uVar11 = 1;
  }
  else {
    uVar1 = param_1[1];
    if (uVar1 != 0) {
      uVar2 = param_1[2];
      if (uVar2 != 0) {
        uVar3 = param_1[3];
        if (uVar3 != 0) {
          uVar4 = param_1[4];
          if (uVar4 != 0) {
            uVar5 = param_1[5];
            if (uVar5 != 0) {
              uVar9 = param_1[6];
              if (uVar9 != 0) {
                uVar17 = (uint)uVar5;
                uVar19 = (uint)uVar4;
                uVar8 = (uint)uVar3;
                uVar18 = (uint)uVar2;
                uVar16 = (uint)uVar1;
                uVar15 = (uint)uVar11;
                uVar10 = (uint)uVar9;
                uVar6 = param_1[7];
                bVar7 = ((uVar10 + 0x5400 >> 2 & 0x3fff) < 0xae9 ||
                        (uVar10 - 0x4e00 < 0x51cd ||
                        (uVar10 - 0x3041 < 0x50 || uVar9 - 0x30a1 < 0x5a))) ||
                        (((uVar5 + 0x5400 >> 2 & 0x3fff) < 0xae9 ||
                         (uVar17 - 0x4e00 < 0x51cd ||
                         (uVar17 - 0x3041 < 0x50 || uVar17 - 0x30a1 < 0x5a))) ||
                        (((uVar4 + 0x5400 >> 2 & 0x3fff) < 0xae9 ||
                         (uVar19 - 0x4e00 < 0x51cd ||
                         (uVar19 - 0x3041 < 0x50 || uVar19 - 0x30a1 < 0x5a))) ||
                        (((uVar8 + 0x5400 >> 2 & 0x3fff) < 0xae9 ||
                         (uVar8 - 0x4e00 < 0x51cd ||
                         (uVar3 - 0x3041 < 0x50 || uVar8 - 0x30a1 < 0x5a))) ||
                        (((uVar18 + 0x5400 >> 2 & 0x3fff) < 0xae9 ||
                         (uVar18 - 0x4e00 < 0x51cd ||
                         (uVar2 - 0x3041 < 0x50 || uVar18 - 0x30a1 < 0x5a))) ||
                        (((uVar16 + 0x5400 >> 2 & 0x3fff) < 0xae9 ||
                         (uVar16 - 0x4e00 < 0x51cd ||
                         (uVar1 - 0x3041 < 0x50 || uVar16 - 0x30a1 < 0x5a))) ||
                        ((uVar15 + 0x5400 >> 2 & 0x3fff) < 0xae9 ||
                        (uVar15 - 0x4e00 < 0x51cd ||
                        (uVar11 - 0x3041 < 0x50 || uVar15 - 0x30a1 < 0x5a))))))));
                uVar9 = (ushort)bVar7;
                if (uVar6 != 0) {
                  uVar8 = (uint)uVar6;
                  uVar11 = param_1[8];
                  bVar7 = ((uVar8 + 0x5400 >> 2 & 0x3fff) < 0xae9 ||
                          (uVar8 - 0x4e00 < 0x51cd ||
                          (uVar6 - 0x3041 < 0x50 || uVar8 - 0x30a1 < 0x5a))) || bVar7;
                  uVar9 = (ushort)bVar7;
                  if (uVar11 != 0) {
                    uVar8 = (uint)uVar11;
                    uVar1 = param_1[9];
                    bVar7 = ((uVar8 + 0x5400 >> 2 & 0x3fff) < 0xae9 ||
                            (uVar8 - 0x4e00 < 0x51cd ||
                            (uVar11 - 0x3041 < 0x50 || uVar8 - 0x30a1 < 0x5a))) || bVar7;
                    uVar9 = (ushort)bVar7;
                    if (uVar1 != 0) {
                      uVar8 = (uint)uVar1;
                      uVar11 = param_1[10];
                      bVar7 = ((uVar8 + 0x5400 >> 2 & 0x3fff) < 0xae9 ||
                              (uVar8 - 0x4e00 < 0x51cd ||
                              (uVar1 - 0x3041 < 0x50 || uVar8 - 0x30a1 < 0x5a))) || bVar7;
                      uVar9 = (ushort)bVar7;
                      if (uVar11 != 0) {
                        uVar8 = (uint)uVar11;
                        uVar1 = param_1[0xb];
                        bVar7 = ((uVar8 + 0x5400 >> 2 & 0x3fff) < 0xae9 ||
                                (uVar8 - 0x4e00 < 0x51cd ||
                                (uVar11 - 0x3041 < 0x50 || uVar8 - 0x30a1 < 0x5a))) || bVar7;
                        uVar9 = (ushort)bVar7;
                        if (uVar1 != 0) {
                          uVar8 = (uint)uVar1;
                          uVar11 = param_1[0xc];
                          bVar7 = ((uVar8 + 0x5400 >> 2 & 0x3fff) < 0xae9 ||
                                  (uVar8 - 0x4e00 < 0x51cd ||
                                  (uVar1 - 0x3041 < 0x50 || uVar8 - 0x30a1 < 0x5a))) || bVar7;
                          uVar9 = (ushort)bVar7;
                          if (uVar11 != 0) {
                            uVar8 = (uint)uVar11;
                            uVar9 = (ushort)(((uVar11 + 0x5400 >> 2 & 0x3fff) < 0xae9 ||
                                             (uVar8 - 0x4e00 < 0x51cd ||
                                             (uVar8 - 0x3041 < 0x50 || uVar8 - 0x30a1 < 0x5a))) ||
                                            bVar7);
                            goto LAB_012ae8c0;
                          }
                        }
                      }
                    }
                  }
                }
              }
              uVar11 = 0;
              goto LAB_012aecd8;
            }
          }
        }
      }
    }
    uVar11 = 0;
    uVar9 = 0;
  }
LAB_012aecd8:
  uVar9 = uVar11 | uVar9;
  iVar14 = 0;
  iVar12 = 3;
  if (uVar11 != 0) {
    iVar12 = 1;
  }
LAB_012aecf8:
  if ((uVar9 & 1) == 0) {
    iVar12 = iVar14;
  }
  return iVar12 == 0;
}


