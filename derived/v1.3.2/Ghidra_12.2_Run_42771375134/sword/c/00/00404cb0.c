/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00404cb0; name: FUN_00404cb0
 */


long FUN_00404cb0(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  long *plVar10;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0x1f < param_2) {
    uVar4 = 0x1f - (int)LZCOUNT((int)param_2);
    iVar6 = (int)(param_2 >> 0x20);
    if ((int)param_2 == 0) {
      uVar4 = 0xffffffff;
    }
    if (iVar6 != 0) {
      uVar4 = (uint)LZCOUNT(iVar6) ^ 0x3f;
    }
    param_2 = param_2 + (long)((1 << (ulong)(uVar4 - 5 & 0x1f)) + -1);
    if (0xff < param_2) {
      uVar4 = 0x1f - (int)LZCOUNT((int)param_2);
      iVar6 = (int)(param_2 >> 0x20);
      if ((int)param_2 == 0) {
        uVar4 = 0xffffffff;
      }
      if (iVar6 != 0) {
        uVar4 = (uint)LZCOUNT(iVar6) ^ 0x3f;
      }
      uVar7 = (ulong)(uVar4 - 7);
      uVar4 = (uint)(param_2 >> ((ulong)(uVar4 - 5) & 0x3f));
      goto LAB_00404d58;
    }
  }
  iVar3 = (int)param_2;
  iVar6 = iVar3 + 7;
  if (-1 < iVar3) {
    iVar6 = iVar3;
  }
  uVar7 = 0;
  uVar4 = iVar6 >> 3;
LAB_00404d58:
  iVar6 = (int)uVar7;
  uVar4 = *(uint *)(param_1 + (long)iVar6 * 4 + 0x24) & -1 << (ulong)(uVar4 & 0x1f);
  if (uVar4 == 0) {
    uVar4 = *(uint *)(param_1 + 0x20) & -1 << (ulong)(iVar6 + 1U & 0x1f);
    if (uVar4 == 0) {
      return 0;
    }
    uVar4 = (uVar4 & 0xaaaaaaaa) >> 1 | (uVar4 & 0x55555555) << 1;
    uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar7 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
    uVar4 = *(uint *)(param_1 + uVar7 * 4 + 0x24);
    uVar8 = uVar7;
  }
  else {
    uVar8 = (long)iVar6;
  }
  uVar9 = (uVar4 & 0xaaaaaaaa) >> 1 | (uVar4 & 0x55555555) << 1;
  uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
  uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
  uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
  uVar9 = (uint)LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
  if (uVar4 == 0) {
    uVar9 = 0xffffffff;
  }
  lVar5 = *(long *)(param_1 + uVar8 * 0x100 + (long)(int)uVar9 * 8 + 0x88);
  if (lVar5 != 0) {
    lVar1 = *(long *)(lVar5 + 0x10);
    lVar2 = *(long *)(lVar5 + 0x18);
    *(long *)(lVar1 + 0x18) = lVar2;
    *(long *)(lVar2 + 0x10) = lVar1;
    uVar4 = (uint)uVar7;
    plVar10 = (long *)(param_1 + (long)(int)uVar4 * 0x100 + (long)(int)uVar9 * 8 + 0x88);
    if (((*plVar10 == lVar5) && (*plVar10 = lVar1, lVar1 == param_1)) &&
       (lVar1 = param_1 + (long)(int)uVar4 * 4,
       uVar9 = *(uint *)(lVar1 + 0x24) & (1 << (ulong)(uVar9 & 0x1f) ^ 0xffffffffU),
       *(uint *)(lVar1 + 0x24) = uVar9, uVar9 == 0)) {
      *(uint *)(param_1 + 0x20) =
           *(uint *)(param_1 + 0x20) & (1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU);
    }
  }
  return lVar5;
}


