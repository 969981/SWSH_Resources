/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00123650; name: FUN_00123650
 */


void FUN_00123650(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  
  puVar3 = PTR_DAT_02710c28;
  lVar4 = *(long *)(param_1 + 0x1b8);
  uVar2 = *(uint *)(lVar4 + 0x698);
  uVar1 = uVar2 & 0x7fffffff;
  if (uVar1 != 0) {
    uVar6 = 0;
    uVar5 = 0;
    do {
      uVar8 = *(uint *)(*(long *)(lVar4 + 0x690) + uVar5 * 4);
      if (uVar8 != 0) {
        uVar6 = *(uint *)(PTR_DAT_02710c28 + (ulong)((uVar8 & -uVar8) * 0x77cb531 >> 0x1b) * 4) |
                uVar6;
        uVar8 = uVar8 - 1 & uVar8;
        if (uVar8 != 0) goto joined_r0x001236e8;
        uVar10 = uVar5 + 1;
        goto LAB_001236c4;
      }
      uVar5 = uVar5 + 1;
      uVar6 = uVar6 + 0x20;
    } while (uVar5 < uVar1);
  }
  goto LAB_00123780;
  while( true ) {
    uVar8 = *(uint *)(*(long *)(lVar4 + 0x690) + (uVar10 & 0xffffffff) * 4);
    uVar10 = (ulong)((uint)uVar10 + 1);
    if (uVar8 != 0) break;
LAB_001236c4:
    uVar5 = uVar10 & 0xffffffff;
    if (uVar1 <= (uint)uVar10) {
      uVar8 = 0;
      break;
    }
  }
joined_r0x001236e8:
  if (uVar6 != 0xffffffff) {
    lVar7 = *(long *)(*(long *)(lVar4 + 0x1e0) +
                     (ulong)(uVar6 >> (ulong)(*(uint *)(lVar4 + 0x1cc) & 0x1f)) * 8) +
            (ulong)(*(int *)(lVar4 + 0x1c0) - 1U & uVar6) * 0x70;
    *(uint *)(lVar7 + 0x10) = *(uint *)(lVar7 + 0x10) & 0xfffffffb;
    *(undefined8 *)(lVar7 + 0x40) = 0;
    if (uVar8 == 0) goto LAB_00123780;
    uVar9 = (uint)uVar5;
    uVar6 = *(uint *)(puVar3 + (ulong)((uVar8 & -uVar8) * 0x77cb531 >> 0x1b) * 4) | uVar9 << 5;
    uVar8 = uVar8 - 1 & uVar8;
    while (uVar8 == 0) {
      uVar9 = uVar9 + 1;
      uVar5 = (ulong)uVar9;
      if (uVar1 <= uVar9) {
        uVar8 = 0;
        break;
      }
      uVar8 = *(uint *)(*(long *)(lVar4 + 0x690) + (ulong)uVar9 * 4);
    }
    goto joined_r0x001236e8;
  }
LAB_00123780:
                    /* WARNING: Subroutine does not return */
  memset(*(void **)(lVar4 + 0x690),0,(ulong)(uVar2 << 2));
}


