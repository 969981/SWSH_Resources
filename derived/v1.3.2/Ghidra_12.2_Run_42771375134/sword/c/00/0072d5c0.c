/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072d5c0; name: FUN_0072d5c0
 */


void FUN_0072d5c0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  puVar6 = (ulong *)*param_2;
  uVar2 = *(uint *)(param_2 + 1);
  uVar4 = ((ulong)*(uint *)(param_3 + 1) + (*param_3 - (long)puVar6) * 8) - (ulong)uVar2;
  if (0 < (long)uVar4) {
    if (uVar2 != 0) {
      uVar10 = (ulong)(0x40 - uVar2);
      puVar5 = (uint *)(param_4 + 1);
      uVar1 = uVar4;
      if ((long)uVar10 <= (long)uVar4) {
        uVar1 = uVar10;
      }
      uVar8 = (ulong)(0x40 - *puVar5);
      uVar4 = uVar4 - uVar1;
      uVar7 = 0xffffffffffffffffU >> (uVar10 - uVar1 & 0x3f) & -1L << ((ulong)uVar2 & 0x3f) &
              *puVar6;
      uVar10 = uVar8;
      if (uVar1 <= uVar8) {
        uVar10 = uVar1;
      }
      *(ulong *)*param_4 =
           *(ulong *)*param_4 &
           (0xffffffffffffffffU >> (uVar8 - uVar10 & 0x3f) & -1L << ((ulong)*puVar5 & 0x3f) ^
           0xffffffffffffffff);
      uVar2 = *puVar5;
      uVar3 = *(uint *)(param_2 + 1);
      uVar8 = uVar7 << ((ulong)(uVar2 - uVar3) & 0x3f);
      if (uVar2 < uVar3 || uVar2 - uVar3 == 0) {
        uVar8 = uVar7 >> ((ulong)(uVar3 - uVar2) & 0x3f);
      }
      *(ulong *)*param_4 = *(ulong *)*param_4 | uVar8;
      puVar6 = (ulong *)(*param_4 + (uVar10 + *puVar5 >> 3 & 0x1ffffffffffffff8));
      *param_4 = (long)puVar6;
      *puVar5 = *puVar5 + (int)uVar10 & 0x3f;
      lVar9 = uVar1 - uVar10;
      if (0 < lVar9) {
        *puVar6 = *puVar6 & (0xffffffffffffffffU >> (-lVar9 & 0x3fU) ^ 0xffffffffffffffff);
        *(ulong *)*param_4 = uVar7 >> (uVar10 + *(uint *)(param_2 + 1) & 0x3f) | *(ulong *)*param_4;
        *(int *)(param_4 + 1) = (int)lVar9;
      }
      puVar6 = (ulong *)(*param_2 + 8);
      *param_2 = (long)puVar6;
    }
    uVar2 = 0x40 - *(uint *)(param_4 + 1);
    if (0x3f < (long)uVar4) {
      uVar1 = 0xffffffffffffff80;
      if (-0x80 < (long)~uVar4) {
        uVar1 = ~uVar4;
      }
      uVar10 = -1L << ((ulong)*(uint *)(param_4 + 1) & 0x3f);
      lVar9 = uVar4 + 0x40;
      do {
        uVar7 = *puVar6;
        *(ulong *)*param_4 = *(ulong *)*param_4 & ~uVar10;
        *(ulong *)*param_4 = *(ulong *)*param_4 | uVar7 << ((ulong)*(uint *)(param_4 + 1) & 0x3f);
        lVar11 = *param_4;
        *param_4 = lVar11 + 8;
        *(ulong *)(lVar11 + 8) = *(ulong *)(lVar11 + 8) & uVar10;
        *(ulong *)*param_4 = *(ulong *)*param_4 | uVar7 >> ((ulong)uVar2 & 0x3f);
        lVar9 = lVar9 + -0x40;
        puVar6 = (ulong *)(*param_2 + 8);
        *param_2 = (long)puVar6;
      } while (0x7f < lVar9);
      uVar4 = (uVar4 - 0x40) - (uVar4 + uVar1 + 0x40 & 0xffffffffffffffc0);
    }
    if (0 < (long)uVar4) {
      uVar7 = (ulong)uVar2;
      uVar10 = *puVar6 & 0xffffffffffffffffU >> (-uVar4 & 0x3f);
      uVar1 = uVar7;
      if ((long)uVar4 <= (long)uVar7) {
        uVar1 = uVar4;
      }
      lVar9 = uVar4 - uVar1;
      *(ulong *)*param_4 =
           *(ulong *)*param_4 &
           (-1L << ((ulong)*(uint *)(param_4 + 1) & 0x3f) &
            0xffffffffffffffffU >> (uVar7 - uVar1 & 0x3f) ^ 0xffffffffffffffff);
      *(ulong *)*param_4 = *(ulong *)*param_4 | uVar10 << ((ulong)*(uint *)(param_4 + 1) & 0x3f);
      puVar6 = (ulong *)(*param_4 + (uVar1 + *(uint *)(param_4 + 1) >> 3 & 0x1ffffffffffffff8));
      *(uint *)(param_4 + 1) = *(uint *)(param_4 + 1) + (int)uVar1 & 0x3f;
      *param_4 = (long)puVar6;
      if (0 < lVar9) {
        *puVar6 = *puVar6 & (0xffffffffffffffffU >> (-lVar9 & 0x3fU) ^ 0xffffffffffffffff);
        *(ulong *)*param_4 = *(ulong *)*param_4 | uVar10 >> (uVar1 & 0x3f);
        *(int *)(param_4 + 1) = (int)lVar9;
      }
    }
  }
  *param_1 = *param_4;
  *(int *)(param_1 + 1) = (int)param_4[1];
  return;
}


