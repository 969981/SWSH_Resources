/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004051d0; name: FUN_004051d0
 */


void FUN_004051d0(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  if (param_2 != 0) {
    plVar9 = (long *)((*(long *)(param_2 + -8) - 8U & 0xfffffffffffffffc) + param_2);
    *plVar9 = param_2 + -0x10;
    plVar9[1] = plVar9[1] | 2;
    uVar4 = *(ulong *)(param_2 + -8);
    *(ulong *)(param_2 + -8) = uVar4 | 1;
    if (((uint)uVar4 >> 1 & 1) != 0) {
      lVar1 = *(long *)(param_2 + -0x10);
      uVar4 = *(ulong *)(lVar1 + 8) & 0xfffffffffffffffc;
      iVar2 = (int)uVar4;
      if (uVar4 < 0x100) {
        iVar3 = iVar2 + 7;
        if (-1 < iVar2) {
          iVar3 = iVar2;
        }
        uVar6 = 0;
        uVar5 = iVar3 >> 3;
      }
      else {
        iVar3 = (int)(*(ulong *)(lVar1 + 8) >> 0x20);
        if (iVar3 == 0) {
          uVar5 = 0x1f - (int)LZCOUNT(iVar2);
          if (iVar2 == 0) {
            uVar5 = 0xffffffff;
          }
        }
        else {
          uVar5 = (uint)LZCOUNT(iVar3) ^ 0x3f;
        }
        uVar6 = uVar5 - 7;
        uVar5 = (uint)(uVar4 >> ((ulong)(uVar5 - 5) & 0x3f)) ^ 0x20;
      }
      lVar8 = *(long *)(lVar1 + 0x18);
      lVar7 = *(long *)(lVar1 + 0x10);
      *(long *)(lVar7 + 0x18) = lVar8;
      *(long *)(lVar8 + 0x10) = lVar7;
      plVar9 = (long *)(param_1 + (long)(int)uVar6 * 0x100 + (long)(int)uVar5 * 8 + 0x88);
      if (((*plVar9 == lVar1) && (*plVar9 = lVar7, lVar7 == param_1)) &&
         (lVar7 = param_1 + (long)(int)uVar6 * 4,
         uVar5 = *(uint *)(lVar7 + 0x24) & (1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU),
         *(uint *)(lVar7 + 0x24) = uVar5, uVar5 == 0)) {
        *(uint *)(param_1 + 0x20) =
             *(uint *)(param_1 + 0x20) & (1 << (ulong)(uVar6 & 0x1f) ^ 0xffffffffU);
      }
      lVar7 = (*(long *)(param_2 + -8) + 8U & 0xfffffffffffffffc) + *(long *)(lVar1 + 8);
      *(long *)(lVar1 + 8) = lVar7;
      *(long *)((lVar7 - 8U & 0xfffffffffffffffc) + lVar1 + 0x10) = lVar1;
    }
    lVar1 = FUN_004053c0(param_1);
    uVar4 = *(ulong *)(lVar1 + 8) & 0xfffffffffffffffc;
    iVar3 = (int)uVar4;
    uVar5 = 0x1f - (int)LZCOUNT(iVar3);
    iVar2 = (int)(*(ulong *)(lVar1 + 8) >> 0x20);
    if (iVar3 == 0) {
      uVar5 = 0xffffffff;
    }
    if (iVar2 != 0) {
      uVar5 = (uint)LZCOUNT(iVar2) ^ 0x3f;
    }
    uVar6 = uVar5 - 7;
    iVar2 = iVar3 + 7;
    if (-1 < iVar3) {
      iVar2 = iVar3;
    }
    if (uVar4 < 0x100) {
      uVar6 = 0;
    }
    uVar5 = (uint)(uVar4 >> ((ulong)(uVar5 - 5) & 0x3f)) ^ 0x20;
    if (uVar4 < 0x100) {
      uVar5 = iVar2 >> 3;
    }
    lVar7 = param_1 + (long)(int)uVar6 * 0x100 + (long)(int)uVar5 * 8;
    lVar8 = *(long *)(lVar7 + 0x88);
    *(long *)(lVar1 + 0x10) = lVar8;
    *(long *)(lVar1 + 0x18) = param_1;
    *(long *)(lVar8 + 0x18) = lVar1;
    *(long *)(lVar7 + 0x88) = lVar1;
    lVar1 = param_1 + (long)(int)uVar6 * 4;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1 << (ulong)(uVar6 & 0x1f);
    *(uint *)(lVar1 + 0x24) = *(uint *)(lVar1 + 0x24) | 1 << (ulong)(uVar5 & 0x1f);
  }
  return;
}


