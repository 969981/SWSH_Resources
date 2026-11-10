/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006023a0; name: FUN_006023a0
 */


ulong FUN_006023a0(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  uVar11 = 0;
  if (param_1 != (ulong *)0x0) {
    uVar8 = *param_1;
    uVar2 = param_1[1];
    if (uVar8 == 0) {
      uVar11 = -uVar2;
      if (-1 < (long)uVar2) {
        uVar11 = uVar2;
      }
      return uVar11;
    }
    uVar11 = -uVar8;
    if (-1 < (long)uVar8) {
      uVar11 = uVar8;
    }
    if (uVar2 != 0) {
      uVar4 = -(uint)uVar2;
      if (-1 < (long)uVar2) {
        uVar4 = (uint)uVar2;
      }
      iVar5 = -(int)LZCOUNT(uVar4 | (uint)uVar11);
      iVar3 = iVar5 + 0x1f;
      uVar11 = (ulong)(iVar5 + 2);
      iVar5 = -iVar3;
      uVar4 = iVar5 + 0x1d;
      lVar12 = (long)uVar2 >> (uVar11 & 0x3f);
      lVar13 = (long)uVar8 >> (uVar11 & 0x3f);
      if (iVar3 < 0x1e) {
        lVar12 = uVar2 << ((ulong)uVar4 & 0x3f);
        lVar13 = uVar8 << ((ulong)uVar4 & 0x3f);
      }
      lVar9 = -lVar13;
      if (lVar12 < lVar9) {
        lVar10 = lVar13;
        lVar7 = -lVar12;
      }
      else {
        lVar10 = lVar12;
        lVar7 = lVar13;
      }
      lVar1 = lVar9;
      lVar6 = lVar12;
      if (lVar12 <= lVar9) {
        lVar1 = -lVar12;
        lVar6 = lVar9;
      }
      if (lVar13 < lVar12) {
        lVar7 = lVar6;
        lVar10 = lVar1;
      }
      uVar11 = 1;
      lVar12 = 1;
      do {
        lVar13 = lVar10 + lVar12;
        lVar9 = lVar7 + lVar12;
        lVar12 = lVar12 << 1;
        lVar13 = lVar13 >> (uVar11 & 0x3f);
        lVar9 = lVar9 >> (uVar11 & 0x3f);
        uVar11 = uVar11 + 1;
        lVar1 = -lVar13;
        if (0 < lVar10) {
          lVar1 = lVar13;
        }
        lVar7 = lVar7 + lVar1;
        if (0 < lVar10) {
          lVar9 = -lVar9;
        }
        lVar10 = lVar9 + lVar10;
      } while (uVar11 != 0x17);
      lVar12 = -lVar7;
      if (-1 < lVar7) {
        lVar12 = lVar7;
      }
      uVar8 = lVar12 * 0xdbd95b16 + 0x40000000U >> 0x20;
      uVar11 = -uVar8;
      if (-1 < lVar7) {
        uVar11 = uVar8;
      }
      if (0 < (int)uVar4) {
        return (long)(uVar11 + (1L << ((ulong)(iVar5 + 0x1c) & 0x3f))) >> ((ulong)uVar4 & 0x3f);
      }
      uVar11 = (ulong)(uint)((int)uVar11 << (ulong)(-uVar4 & 0x1f));
    }
  }
  return uVar11;
}


