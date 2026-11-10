/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0068ef30; name: FUN_0068ef30
 */


ulong FUN_0068ef30(ulong param_1,byte *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  byte *pbVar21;
  long lVar22;
  int iVar23;
  
  uVar18 = param_1 >> 0x10 & 0xffff;
  param_1 = param_1 & 0xffff;
  if (param_3 - 1 == 0) {
    param_1 = param_1 + *param_2;
    uVar17 = param_1 - 0xfff1;
    if (param_1 < 0xfff1) {
      uVar17 = param_1;
    }
    uVar20 = (uVar17 + uVar18) * 0x10000;
    uVar16 = uVar20 - 0xfff10000;
    if (uVar17 + uVar18 < 0xfff1) {
      uVar16 = uVar20;
    }
    return uVar16 | uVar17;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if (param_3 < 0x10) {
    if (param_3 != 0) {
      uVar19 = param_3;
      if ((param_3 & 1) != 0) {
        param_1 = param_1 + *param_2;
        uVar18 = param_1 + uVar18;
        uVar19 = param_3 - 1;
        param_2 = param_2 + 1;
      }
      if (param_3 != 1) {
        do {
          lVar22 = param_1 + *param_2;
          pbVar21 = param_2 + 1;
          param_2 = param_2 + 2;
          param_1 = lVar22 + (ulong)*pbVar21;
          uVar19 = uVar19 - 2;
          uVar18 = param_1 + lVar22 + uVar18;
        } while (uVar19 != 0);
      }
    }
    uVar17 = param_1 - 0xfff1;
    if (param_1 < 0xfff1) {
      uVar17 = param_1;
    }
    return uVar17 | (uVar18 % 0xfff1) * 0x10000;
  }
  if (param_3 >> 4 < 0x15b) {
LAB_0068f0f8:
    uVar19 = param_3 - 0x10;
    pbVar21 = param_2;
    do {
      lVar22 = param_1 + *pbVar21;
      lVar1 = lVar22 + (ulong)pbVar21[1];
      lVar2 = lVar1 + (ulong)pbVar21[2];
      lVar3 = lVar2 + (ulong)pbVar21[3];
      lVar4 = lVar3 + (ulong)pbVar21[4];
      lVar5 = lVar4 + (ulong)pbVar21[5];
      lVar6 = lVar5 + (ulong)pbVar21[6];
      lVar7 = lVar6 + (ulong)pbVar21[7];
      lVar8 = lVar7 + (ulong)pbVar21[8];
      lVar9 = lVar8 + (ulong)pbVar21[9];
      lVar10 = lVar9 + (ulong)pbVar21[10];
      lVar11 = lVar10 + (ulong)pbVar21[0xb];
      lVar12 = lVar11 + (ulong)pbVar21[0xc];
      lVar13 = lVar12 + (ulong)pbVar21[0xd];
      lVar14 = lVar13 + (ulong)pbVar21[0xe];
      param_3 = param_3 - 0x10;
      param_1 = lVar14 + (ulong)pbVar21[0xf];
      uVar18 = lVar22 + uVar18 + lVar1 + lVar2 + lVar3 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 +
               lVar9 + lVar10 + lVar11 + lVar12 + lVar13 + lVar14 + param_1;
      pbVar21 = pbVar21 + 0x10;
    } while (0xf < param_3);
    param_3 = uVar19 & 0xf;
    if (param_3 != 0) {
      param_2 = param_2 + (ulong)(uVar19 & 0xfffffff0) + 0x10;
      goto LAB_0068f1e4;
    }
  }
  else {
    do {
      lVar22 = 0;
      param_3 = param_3 - 0x15b0;
      iVar23 = -0x15b;
      do {
        pbVar21 = param_2 + lVar22;
        lVar22 = lVar22 + 0x10;
        lVar1 = param_1 + *pbVar21;
        lVar2 = lVar1 + (ulong)pbVar21[1];
        lVar3 = lVar2 + (ulong)pbVar21[2];
        lVar4 = lVar3 + (ulong)pbVar21[3];
        lVar5 = lVar4 + (ulong)pbVar21[4];
        lVar6 = lVar5 + (ulong)pbVar21[5];
        lVar7 = lVar6 + (ulong)pbVar21[6];
        lVar8 = lVar7 + (ulong)pbVar21[7];
        lVar9 = lVar8 + (ulong)pbVar21[8];
        lVar10 = lVar9 + (ulong)pbVar21[9];
        lVar11 = lVar10 + (ulong)pbVar21[10];
        lVar12 = lVar11 + (ulong)pbVar21[0xb];
        lVar13 = lVar12 + (ulong)pbVar21[0xc];
        lVar14 = lVar13 + (ulong)pbVar21[0xd];
        lVar15 = lVar14 + (ulong)pbVar21[0xe];
        param_1 = lVar15 + (ulong)pbVar21[0xf];
        uVar18 = lVar1 + uVar18 + lVar2 + lVar3 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 +
                 lVar10 + lVar11 + lVar12 + lVar13 + lVar14 + lVar15 + param_1;
        iVar23 = iVar23 + 1;
      } while (iVar23 != 0);
      param_1 = param_1 % 0xfff1;
      uVar18 = uVar18 % 0xfff1;
      param_2 = param_2 + 0x15b0;
    } while (0x15a < param_3 >> 4);
    if (param_3 == 0) goto LAB_0068f2ec;
    if (0xf < param_3) goto LAB_0068f0f8;
LAB_0068f1e4:
    uVar19 = param_3;
    if ((param_3 & 1) != 0) {
      param_1 = param_1 + *param_2;
      uVar18 = param_1 + uVar18;
      param_2 = param_2 + 1;
      uVar19 = param_3 - 1;
    }
    if (param_3 != 1) {
      do {
        lVar22 = param_1 + *param_2;
        pbVar21 = param_2 + 1;
        param_2 = param_2 + 2;
        param_1 = lVar22 + (ulong)*pbVar21;
        uVar19 = uVar19 - 2;
        uVar18 = param_1 + lVar22 + uVar18;
      } while (uVar19 != 0);
    }
  }
  param_1 = param_1 % 0xfff1;
  uVar18 = uVar18 % 0xfff1;
LAB_0068f2ec:
  return param_1 | uVar18 << 0x10;
}


