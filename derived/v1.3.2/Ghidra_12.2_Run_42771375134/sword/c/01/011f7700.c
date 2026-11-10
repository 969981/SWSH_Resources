/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f7700; name: FUN_011f7700
 */


/* WARNING: Removing unreachable block (ram,0x011f787c) */

undefined1  [16] FUN_011f7700(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  if (*(ulong *)(param_1 + 0x10) == 0) {
    return ZEXT816(0);
  }
  puVar2 = *(ulong **)(param_1 + 0x58);
  uVar9 = *(ulong *)(param_1 + 0x60);
  uVar5 = uVar9 & 0x3f | (uVar9 >> 6) << 6;
  uVar3 = uVar5 - 0x40;
  if (uVar5 < 0x40) {
    lVar4 = 0;
    goto joined_r0x011f781c;
  }
  uVar5 = ((uVar9 & 0x3f) + (uVar9 >> 6) * 0x40) - 0x40 >> 6;
  uVar1 = (int)uVar5 + 1;
  lVar4 = 0;
  if (uVar5 == 0) {
    puVar7 = puVar2;
LAB_011f77c0:
    uVar5 = *puVar7 - (*puVar7 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    lVar4 = lVar4 + ((uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  }
  else {
    lVar8 = (((ulong)uVar1 & 1) - 1) - uVar5;
    puVar6 = puVar2;
    do {
      puVar7 = puVar6 + 2;
      uVar5 = *puVar6 - (*puVar6 >> 1 & 0x5555555555555555);
      uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
      uVar9 = puVar6[1] - (puVar6[1] >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
      lVar4 = lVar4 + ((uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) +
              ((uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
      lVar8 = lVar8 + 2;
      puVar6 = puVar7;
    } while (lVar8 != 0);
    if ((uVar1 & 1) != 0) goto LAB_011f77c0;
  }
  uVar5 = uVar3 & 0x3f;
  puVar2 = (ulong *)((long)puVar2 + (uVar3 >> 3 & 0x1ffffffffffffff8) + 8);
joined_r0x011f781c:
  if (uVar5 != 0) {
    uVar5 = *puVar2 & 0xffffffffffffffffU >> (-uVar5 & 0x3f);
    uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    lVar4 = lVar4 + ((uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  }
  auVar10._0_8_ = (double)lVar4 / (double)*(ulong *)(param_1 + 0x10);
  auVar10._8_8_ = 0;
  return auVar10;
}


