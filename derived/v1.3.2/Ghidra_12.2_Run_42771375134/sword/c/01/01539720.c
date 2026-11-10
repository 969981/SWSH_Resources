/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01539720; name: FUN_01539720
 */


void FUN_01539720(long *param_1,long *param_2,long *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  uVar1 = *(uint *)(param_3 + 1);
  uVar7 = (ulong)uVar1;
  uVar4 = (uVar7 + (*param_3 - *param_2) * 8) - (ulong)*(uint *)(param_2 + 1);
  if (0 < (long)uVar4) {
    if (uVar1 != 0) {
      uVar8 = uVar4;
      if ((long)uVar7 <= (long)uVar4) {
        uVar8 = uVar7;
      }
      uVar9 = (ulong)*(uint *)(param_4 + 1);
      uVar4 = uVar4 - uVar8;
      uVar6 = -1L << (uVar7 - uVar8 & 0x3f) & 0xffffffffffffffffU >> ((ulong)-uVar1 & 0x3f) &
              *(ulong *)*param_3;
      uVar7 = uVar9;
      if ((long)uVar8 <= (long)uVar9) {
        uVar7 = uVar8;
      }
      if (uVar7 != 0) {
        *(ulong *)*param_4 =
             *(ulong *)*param_4 &
             (-1L << (uVar9 - uVar7 & 0x3f) &
              0xffffffffffffffffU >> ((ulong)-*(uint *)(param_4 + 1) & 0x3f) ^ 0xffffffffffffffff);
        uVar1 = *(uint *)(param_4 + 1);
        uVar2 = *(uint *)(param_3 + 1);
        uVar9 = uVar6 << ((ulong)(uVar1 - uVar2) & 0x3f);
        if (uVar1 < uVar2 || uVar1 - uVar2 == 0) {
          uVar9 = uVar6 >> ((ulong)(uVar2 - uVar1) & 0x3f);
        }
        *(ulong *)*param_4 = *(ulong *)*param_4 | uVar9;
        uVar8 = uVar8 - uVar7;
        *(uint *)(param_4 + 1) = (int)param_4[1] - (int)uVar7 & 0x3f;
      }
      if (0 < (long)uVar8) {
        lVar10 = *param_4;
        *param_4 = lVar10 + -8;
        uVar1 = -(int)uVar8;
        *(uint *)(param_4 + 1) = uVar1 & 0x3f;
        *(ulong *)(lVar10 + -8) =
             *(ulong *)(lVar10 + -8) & (-1L << ((ulong)uVar1 & 0x3f) ^ 0xffffffffffffffffU);
        iVar3 = (int)param_3[1] - ((int)uVar8 + (int)uVar7);
        *(int *)(param_3 + 1) = iVar3;
        *(ulong *)*param_4 =
             uVar6 << ((ulong)(uint)((int)param_4[1] - iVar3) & 0x3f) | *(ulong *)*param_4;
      }
    }
    if (0x3f < (long)uVar4) {
      lVar10 = param_4[1];
      uVar7 = 0xffffffffffffff80;
      if (-0x80 < (long)~uVar4) {
        uVar7 = ~uVar4;
      }
      uVar8 = 0xffffffffffffffff >> ((ulong)(uint)-(int)lVar10 & 0x3f);
      lVar5 = uVar4 + 0x40;
      do {
        lVar11 = *param_3;
        *param_3 = lVar11 + -8;
        uVar6 = *(ulong *)(lVar11 + -8);
        *(ulong *)*param_4 = *(ulong *)*param_4 & ~uVar8;
        *(ulong *)*param_4 = *(ulong *)*param_4 | uVar6 >> ((ulong)(0x40 - (int)lVar10) & 0x3f);
        lVar11 = *param_4;
        *param_4 = lVar11 + -8;
        *(ulong *)(lVar11 + -8) = *(ulong *)(lVar11 + -8) & uVar8;
        lVar5 = lVar5 + -0x40;
        *(ulong *)*param_4 = *(ulong *)*param_4 | uVar6 << ((ulong)*(uint *)(param_4 + 1) & 0x3f);
      } while (0x7f < lVar5);
      uVar4 = (uVar4 - 0x40) - (uVar4 + uVar7 + 0x40 & 0xffffffffffffffc0);
    }
    if (0 < (long)uVar4) {
      lVar10 = *param_3;
      *param_3 = lVar10 + -8;
      uVar8 = *(ulong *)(lVar10 + -8) & -1L << (-uVar4 & 0x3f);
      uVar6 = (ulong)*(uint *)(param_4 + 1);
      uVar7 = uVar6;
      if ((long)uVar4 <= (long)uVar6) {
        uVar7 = uVar4;
      }
      *(ulong *)*param_4 =
           *(ulong *)*param_4 &
           (-1L << (uVar6 - uVar7 & 0x3f) &
            0xffffffffffffffffU >> ((ulong)-*(uint *)(param_4 + 1) & 0x3f) ^ 0xffffffffffffffff);
      *(ulong *)*param_4 = uVar8 >> ((ulong)(uint)-(int)param_4[1] & 0x3f) | *(ulong *)*param_4;
      *(uint *)(param_4 + 1) = (int)param_4[1] - (int)uVar7 & 0x3f;
      if (0 < (long)(uVar4 - uVar7)) {
        lVar10 = *param_4;
        uVar1 = -(int)(uVar4 - uVar7);
        *param_4 = lVar10 + -8;
        *(uint *)(param_4 + 1) = uVar1 & 0x3f;
        *(ulong *)(lVar10 + -8) =
             *(ulong *)(lVar10 + -8) & (-1L << ((ulong)uVar1 & 0x3f) ^ 0xffffffffffffffffU);
        *(ulong *)*param_4 = uVar8 << (uVar4 + *(uint *)(param_4 + 1) & 0x3f) | *(ulong *)*param_4;
      }
    }
  }
  *param_1 = *param_4;
  *(int *)(param_1 + 1) = (int)param_4[1];
  return;
}


