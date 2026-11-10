/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004053c0; name: FUN_004053c0
 */


long FUN_004053c0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  
  lVar1 = (*(long *)(param_2 + 8) - 8U & 0xfffffffffffffffc) + param_2 + 0x10;
  uVar7 = *(ulong *)(lVar1 + 8);
  if ((uVar7 & 1) != 0) {
    uVar9 = uVar7 & 0xfffffffffffffffc;
    iVar8 = (int)uVar9;
    uVar5 = 0x1f - (int)LZCOUNT(iVar8);
    iVar6 = (int)(uVar7 >> 0x20);
    if (iVar8 == 0) {
      uVar5 = 0xffffffff;
    }
    if (iVar6 != 0) {
      uVar5 = (uint)LZCOUNT(iVar6) ^ 0x3f;
    }
    uVar4 = uVar5 - 7;
    iVar6 = iVar8 + 7;
    if (-1 < iVar8) {
      iVar6 = iVar8;
    }
    if (uVar9 < 0x100) {
      uVar4 = 0;
    }
    uVar5 = (uint)(uVar9 >> ((ulong)(uVar5 - 5) & 0x3f)) ^ 0x20;
    if (uVar9 < 0x100) {
      uVar5 = iVar6 >> 3;
    }
    lVar2 = *(long *)(lVar1 + 0x10);
    lVar3 = *(long *)(lVar1 + 0x18);
    *(long *)(lVar2 + 0x18) = lVar3;
    *(long *)(lVar3 + 0x10) = lVar2;
    plVar10 = (long *)(param_1 + (long)(int)uVar4 * 0x100 + (long)(int)uVar5 * 8 + 0x88);
    if (((*plVar10 == lVar1) && (*plVar10 = lVar2, lVar2 == param_1)) &&
       (lVar2 = param_1 + (long)(int)uVar4 * 4,
       uVar5 = *(uint *)(lVar2 + 0x24) & (1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU),
       *(uint *)(lVar2 + 0x24) = uVar5, uVar5 == 0)) {
      *(uint *)(param_1 + 0x20) =
           *(uint *)(param_1 + 0x20) & (1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU);
    }
    lVar1 = (*(long *)(lVar1 + 8) + 8U & 0xfffffffffffffffc) + *(long *)(param_2 + 8);
    *(long *)(param_2 + 8) = lVar1;
    *(long *)((lVar1 - 8U & 0xfffffffffffffffc) + param_2 + 0x10) = param_2;
  }
  return param_2;
}


