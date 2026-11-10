/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00404fb0; name: FUN_00404fb0
 */


void FUN_00404fb0(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = param_3 + 7U & 0xfffffffffffffff8;
    if (uVar4 < 0x19) {
      uVar4 = 0x18;
    }
    if (param_3 + 7U >> 0x20 != 0) {
      uVar4 = 0;
    }
  }
  uVar5 = param_2 + uVar4 + param_2 + 0x1f & -param_2;
  uVar11 = uVar5;
  if (uVar5 < 0x19) {
    uVar11 = 0x18;
  }
  if (uVar5 >> 0x20 != 0) {
    uVar11 = 0;
  }
  uVar5 = 0;
  if (uVar4 + param_2 != -0x20) {
    uVar5 = uVar11;
  }
  uVar11 = uVar4;
  if (8 < param_2) {
    uVar11 = uVar5;
  }
  lVar3 = FUN_00404cb0(param_1,uVar11);
  lVar6 = lVar3;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x10;
    uVar5 = (param_2 - 1) + lVar1 & -param_2;
    lVar12 = uVar5 - lVar1;
    uVar11 = 0x20U - lVar12;
    if (0x20U - lVar12 <= param_2) {
      uVar11 = param_2;
    }
    if (lVar12 - 1U < 0x1f) {
      lVar12 = (uVar5 + (param_2 - 1) + uVar11 & -param_2) - lVar1;
    }
    if ((lVar12 != 0) &&
       (uVar11 = *(ulong *)(lVar3 + 8) & 0xfffffffffffffffc, lVar12 + 0x20U <= uVar11)) {
      lVar2 = lVar1 + lVar12;
      *(ulong *)(lVar2 + -8) = *(ulong *)(lVar2 + -8) & 3 | uVar11 - lVar12;
      *(ulong *)(lVar3 + 8) = *(ulong *)(lVar3 + 8) & 3 | lVar12 - 8U;
      lVar6 = lVar2 + -0x10;
      lVar12 = (*(long *)(lVar2 + -8) - 8U & 0xfffffffffffffffc) + lVar6;
      *(long *)(lVar12 + 0x10) = lVar6;
      *(ulong *)(lVar12 + 0x18) = *(ulong *)(lVar12 + 0x18) | 2;
      *(ulong *)(lVar2 + -8) = *(ulong *)(lVar2 + -8) | 3;
      *(long *)((*(long *)(lVar3 + 8) - 8U & 0xfffffffffffffffc) + lVar1) = lVar3;
      uVar11 = *(ulong *)(lVar3 + 8) & 0xfffffffffffffffc;
      iVar9 = (int)uVar11;
      if (uVar11 < 0x100) {
        iVar7 = iVar9 + 7;
        if (-1 < iVar9) {
          iVar7 = iVar9;
        }
        uVar8 = 0;
        uVar10 = iVar7 >> 3;
      }
      else {
        iVar7 = (int)(*(ulong *)(lVar3 + 8) >> 0x20);
        if (iVar7 == 0) {
          uVar10 = 0x1f - (int)LZCOUNT(iVar9);
          if (iVar9 == 0) {
            uVar10 = 0xffffffff;
          }
        }
        else {
          uVar10 = (uint)LZCOUNT(iVar7) ^ 0x3f;
        }
        uVar8 = uVar10 - 7;
        uVar10 = (uint)(uVar11 >> ((ulong)(uVar10 - 5) & 0x3f)) ^ 0x20;
      }
      lVar1 = param_1 + (long)(int)uVar8 * 0x100 + (long)(int)uVar10 * 8;
      lVar12 = *(long *)(lVar1 + 0x88);
      *(long *)(lVar3 + 0x10) = lVar12;
      *(long *)(lVar3 + 0x18) = param_1;
      *(long *)(lVar12 + 0x18) = lVar3;
      *(long *)(lVar1 + 0x88) = lVar3;
      lVar3 = param_1 + (long)(int)uVar8 * 4;
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1 << (ulong)(uVar8 & 0x1f);
      *(uint *)(lVar3 + 0x24) = *(uint *)(lVar3 + 0x24) | 1 << (ulong)(uVar10 & 0x1f);
    }
  }
  FUN_00404e40(param_1,lVar6,uVar4);
  return;
}


