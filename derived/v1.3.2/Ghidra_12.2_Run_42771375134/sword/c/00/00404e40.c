/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00404e40; name: FUN_00404e40
 */


long FUN_00404e40(ulong param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar4 = *(ulong *)(param_2 + 8);
  lVar2 = param_2 + 0x10;
  if (param_3 + 0x20 <= (uVar4 & 0xfffffffffffffffc)) {
    puVar3 = (ulong *)(param_3 + lVar2);
    *puVar3 = *puVar3 & 3 | (-8 - param_3) + (uVar4 & 0xfffffffffffffffc);
    *(ulong *)(param_2 + 8) = *(ulong *)(param_2 + 8) & 3 | param_3;
    puVar5 = puVar3 + -1;
    uVar4 = *puVar3 - 8 & 0xfffffffffffffffc;
    *(ulong **)((long)puVar5 + uVar4 + 0x10) = puVar5;
    *(ulong *)((long)puVar5 + uVar4 + 0x18) = *(ulong *)((long)puVar5 + uVar4 + 0x18) | 2;
    *(ulong *)(param_3 + lVar2) = *(ulong *)(param_3 + lVar2) | 1;
    *(long *)((*(long *)(param_2 + 8) - 8U & 0xfffffffffffffffc) + lVar2) = param_2;
    uVar4 = *(ulong *)(param_3 + lVar2);
    *(ulong *)(param_3 + lVar2) = uVar4 | 2;
    uVar10 = uVar4 & 0xfffffffffffffffc;
    iVar8 = (int)uVar10;
    if (uVar10 < 0x100) {
      iVar6 = iVar8 + 7;
      if (-1 < iVar8) {
        iVar6 = iVar8;
      }
      uVar7 = 0;
      uVar9 = iVar6 >> 3;
    }
    else {
      iVar6 = (int)(uVar4 >> 0x20);
      if (iVar6 == 0) {
        uVar9 = 0x1f - (int)LZCOUNT(iVar8);
        if (iVar8 == 0) {
          uVar9 = 0xffffffff;
        }
      }
      else {
        uVar9 = (uint)LZCOUNT(iVar6) ^ 0x3f;
      }
      uVar7 = uVar9 - 7;
      uVar9 = (uint)(uVar10 >> ((ulong)(uVar9 - 5) & 0x3f)) ^ 0x20;
    }
    lVar1 = param_1 + (long)(int)uVar7 * 0x100 + (long)(int)uVar9 * 8;
    uVar4 = *(ulong *)(lVar1 + 0x88);
    puVar3[1] = uVar4;
    puVar3[2] = param_1;
    *(ulong **)(uVar4 + 0x18) = puVar5;
    *(ulong **)(lVar1 + 0x88) = puVar5;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1 << (ulong)(uVar7 & 0x1f);
    lVar1 = param_1 + (long)(int)uVar7 * 4;
    *(uint *)(lVar1 + 0x24) = *(uint *)(lVar1 + 0x24) | 1 << (ulong)(uVar9 & 0x1f);
    uVar4 = *(ulong *)(param_2 + 8);
  }
  lVar1 = (uVar4 - 8 & 0xfffffffffffffffc) + lVar2;
  *(ulong *)(lVar1 + 8) = *(ulong *)(lVar1 + 8) & 0xfffffffffffffffd;
  *(ulong *)(param_2 + 8) = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
  return lVar2;
}


