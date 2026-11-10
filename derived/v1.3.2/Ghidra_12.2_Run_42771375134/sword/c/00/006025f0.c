/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006025f0; name: FUN_006025f0
 */


uint FUN_006025f0(ulong *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  
  uVar6 = (uint)*param_1;
  uVar7 = (uint)param_1[1];
  uVar14 = -uVar6;
  if (-1 < (int)uVar6) {
    uVar14 = uVar6;
  }
  uVar4 = 0x10000;
  if (-1 >= (int)uVar6) {
    uVar4 = 0xffffffffffff0000;
  }
  uVar3 = -uVar7;
  if (-1 < (int)uVar7) {
    uVar3 = uVar7;
  }
  uVar5 = 0x10000;
  if (-1 >= (int)uVar7) {
    uVar5 = 0xffffffffffff0000;
  }
  if (uVar14 == 0) {
    uVar14 = 0;
    if (uVar3 != 0) {
      param_1[1] = uVar5;
      return uVar3;
    }
  }
  else {
    if (uVar3 == 0) {
      *param_1 = uVar4;
      return uVar14;
    }
    uVar1 = uVar14 + (uVar3 >> 1);
    if (uVar14 <= uVar3) {
      uVar1 = uVar3 + (uVar14 >> 1);
    }
    iVar15 = 0xf;
    if (0xaaaaaaaaUL >> LZCOUNT(uVar1) <= (ulong)uVar1) {
      iVar15 = 0x10;
    }
    uVar13 = (int)LZCOUNT(uVar1) - iVar15;
    uVar12 = -uVar13;
    uVar8 = uVar14 << (ulong)(uVar13 & 0x1f);
    uVar9 = uVar3 << (ulong)(uVar13 & 0x1f);
    uVar2 = uVar8 + (uVar9 >> 1);
    if (uVar8 <= uVar9) {
      uVar2 = uVar9 + (uVar8 >> 1);
    }
    uVar1 = uVar1 >> (ulong)(uVar12 & 0x1f);
    uVar3 = uVar3 >> (ulong)(uVar12 & 0x1f);
    uVar14 = uVar14 >> (ulong)(uVar12 & 0x1f);
    if (0 < (int)uVar13) {
      uVar1 = uVar2;
      uVar3 = uVar9;
      uVar14 = uVar8;
    }
    iVar15 = 0x10000 - uVar1;
    do {
      uVar1 = uVar3 + ((int)(iVar15 * uVar3) >> 0x10);
      uVar2 = uVar14 + ((int)(iVar15 * uVar14) >> 0x10);
      iVar10 = uVar1 * uVar1 + uVar2 * uVar2;
      iVar11 = iVar10 + 0x1ff;
      if (-1 < iVar10) {
        iVar11 = iVar10;
      }
      iVar10 = -((iVar11 >> 9) * (iVar15 + 0x10000 >> 8));
      iVar11 = iVar10 + 0xffff;
      if (-1 < iVar10) {
        iVar11 = iVar10;
      }
      iVar15 = iVar15 + (iVar11 >> 0x10);
    } while (0xffff < iVar10);
    uVar4 = -(ulong)uVar2;
    if (-1 < (int)uVar6) {
      uVar4 = (ulong)uVar2;
    }
    uVar5 = -(ulong)uVar1;
    if (-1 < (int)uVar7) {
      uVar5 = (ulong)uVar1;
    }
    *param_1 = uVar4;
    param_1[1] = uVar5;
    iVar11 = uVar1 * uVar3 + uVar2 * uVar14;
    iVar15 = iVar11 + 0xffff;
    if (-1 < iVar11) {
      iVar15 = iVar11;
    }
    iVar15 = (iVar15 >> 0x10) + 0x10000;
    if (0 < (int)uVar13) {
      return (uint)(iVar15 + (1 << (ulong)(uVar13 - 1 & 0x1f))) >> (ulong)(uVar13 & 0x1f);
    }
    uVar14 = iVar15 << (ulong)(-uVar13 & 0x1f);
  }
  return uVar14;
}


