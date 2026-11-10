/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072ce40; name: FUN_0072ce40
 */


void FUN_0072ce40(long *param_1,ulong *param_2,uint param_3,long param_4,ulong param_5,long *param_6
                 )

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  
  uVar4 = (ulong)param_3;
  uVar3 = ((param_5 & 0xffffffff) - uVar4) + (param_4 - (long)param_2) * 8;
  if (0 < (long)uVar3) {
    if (param_3 == 0) {
      uVar8 = *(uint *)(param_6 + 1);
    }
    else {
      uVar7 = (ulong)(0x40 - param_3);
      uVar6 = uVar3;
      if ((long)uVar7 <= (long)uVar3) {
        uVar6 = uVar7;
      }
      uVar10 = (ulong)(0x40 - *(uint *)(param_6 + 1));
      uVar3 = uVar3 - uVar6;
      uVar5 = 0xffffffffffffffffU >> (uVar7 - uVar6 & 0x3f) & -1L << (uVar4 & 0x3f) & *param_2;
      uVar7 = uVar10;
      if (uVar6 <= uVar10) {
        uVar7 = uVar6;
      }
      *(ulong *)*param_6 =
           *(ulong *)*param_6 &
           (0xffffffffffffffffU >> (uVar10 - uVar7 & 0x3f) &
            -1L << ((ulong)*(uint *)(param_6 + 1) & 0x3f) ^ 0xffffffffffffffff);
      uVar8 = *(uint *)(param_6 + 1);
      uVar10 = uVar5 << ((ulong)(uVar8 - param_3) & 0x3f);
      if (uVar8 < param_3 || uVar8 - param_3 == 0) {
        uVar10 = uVar5 >> ((ulong)(param_3 - uVar8) & 0x3f);
      }
      *(ulong *)*param_6 = *(ulong *)*param_6 | uVar10;
      uVar1 = *(uint *)(param_6 + 1);
      lVar9 = uVar6 - uVar7;
      uVar8 = uVar1 + (int)uVar7 & 0x3f;
      *(uint *)(param_6 + 1) = uVar8;
      puVar11 = (ulong *)(*param_6 + (uVar7 + uVar1 >> 3 & 0x1ffffffffffffff8));
      *param_6 = (long)puVar11;
      if (0 < lVar9) {
        uVar8 = (uint)lVar9;
        *puVar11 = *puVar11 & (0xffffffffffffffffU >> (-lVar9 & 0x3fU) ^ 0xffffffffffffffff);
        *(ulong *)*param_6 = *(ulong *)*param_6 | uVar5 >> (uVar7 + uVar4 & 0x3f);
        *(uint *)(param_6 + 1) = uVar8;
      }
      param_2 = param_2 + 1;
    }
    if (0x3f < (long)uVar3) {
      uVar4 = 0xffffffffffffff80;
      if (-0x80 < (long)~uVar3) {
        uVar4 = ~uVar3;
      }
      uVar6 = -1L << ((ulong)uVar8 & 0x3f);
      uVar4 = uVar3 + uVar4 + 0x40;
      lVar9 = uVar3 + 0x40;
      puVar11 = param_2;
      do {
        uVar7 = *puVar11;
        *(ulong *)*param_6 = *(ulong *)*param_6 & ~uVar6;
        *(ulong *)*param_6 = *(ulong *)*param_6 | uVar7 << ((ulong)*(uint *)(param_6 + 1) & 0x3f);
        lVar2 = *param_6;
        *param_6 = lVar2 + 8;
        *(ulong *)(lVar2 + 8) = *(ulong *)(lVar2 + 8) & uVar6;
        lVar9 = lVar9 + -0x40;
        *(ulong *)*param_6 = *(ulong *)*param_6 | uVar7 >> ((ulong)(0x40 - uVar8) & 0x3f);
        puVar11 = puVar11 + 1;
      } while (0x7f < lVar9);
      param_2 = param_2 + (uVar4 >> 6) + 1;
      uVar3 = (uVar3 - 0x40) - (uVar4 & 0xffffffffffffffc0);
    }
    if (0 < (long)uVar3) {
      uVar7 = (ulong)(0x40 - uVar8);
      uVar6 = *param_2 & 0xffffffffffffffffU >> (-uVar3 & 0x3f);
      uVar4 = uVar7;
      if ((long)uVar3 <= (long)uVar7) {
        uVar4 = uVar3;
      }
      lVar9 = uVar3 - uVar4;
      *(ulong *)*param_6 =
           *(ulong *)*param_6 &
           (-1L << ((ulong)*(uint *)(param_6 + 1) & 0x3f) &
            0xffffffffffffffffU >> (uVar7 - uVar4 & 0x3f) ^ 0xffffffffffffffff);
      *(ulong *)*param_6 = *(ulong *)*param_6 | uVar6 << ((ulong)*(uint *)(param_6 + 1) & 0x3f);
      puVar11 = (ulong *)(*param_6 + (uVar4 + *(uint *)(param_6 + 1) >> 3 & 0x1ffffffffffffff8));
      *(uint *)(param_6 + 1) = *(uint *)(param_6 + 1) + (int)uVar4 & 0x3f;
      *param_6 = (long)puVar11;
      if (0 < lVar9) {
        *puVar11 = *puVar11 & (0xffffffffffffffffU >> (-lVar9 & 0x3fU) ^ 0xffffffffffffffff);
        *(ulong *)*param_6 = *(ulong *)*param_6 | uVar6 >> (uVar4 & 0x3f);
        *(int *)(param_6 + 1) = (int)lVar9;
      }
    }
  }
  *param_1 = *param_6;
  *(int *)(param_1 + 1) = (int)param_6[1];
  return;
}


