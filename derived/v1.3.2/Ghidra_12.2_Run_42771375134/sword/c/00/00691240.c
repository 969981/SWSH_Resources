/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00691240; name: FUN_00691240
 */


void FUN_00691240(long param_1,long param_2,int param_3)

{
  long lVar1;
  bool bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  
  if (-1 < param_3) {
    uVar3 = *(ushort *)(param_2 + 2);
    uVar11 = 0;
    uVar7 = 0;
    iVar12 = 0x8a;
    if (uVar3 != 0) {
      iVar12 = 7;
    }
    iVar15 = 3;
    if (uVar3 != 0) {
      iVar15 = 4;
    }
    uVar10 = 0xffffffff;
    uVar14 = (ulong)uVar3;
    do {
      while( true ) {
        uVar11 = uVar11 + 1;
        uVar3 = *(ushort *)(param_2 + uVar11 * 4 + 2);
        uVar8 = uVar7 + 1;
        uVar6 = (uint)uVar14;
        uVar13 = (uint)uVar3;
        if ((iVar12 <= (int)uVar8) || (uVar6 != uVar13)) break;
joined_r0x00691728:
        uVar7 = uVar8;
        uVar14 = (ulong)uVar3;
        if (uVar11 == param_3 + 1) {
          return;
        }
      }
      if ((int)uVar8 < iVar15) {
        uVar8 = *(uint *)(param_1 + 0x1724);
        lVar1 = param_1 + uVar14 * 4;
        uVar7 = ~uVar7;
        do {
          while( true ) {
            uVar4 = *(ushort *)(lVar1 + 0xaae);
            uVar5 = *(ushort *)(lVar1 + 0xaac);
            uVar9 = (uint)*(ushort *)(param_1 + 0x1720) | (uint)uVar5 << (ulong)(uVar8 & 0x1f);
            *(short *)(param_1 + 0x1720) = (short)uVar9;
            if ((int)uVar8 <= (int)(0x10 - (uint)uVar4)) break;
            uVar8 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar8 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar8) = (char)uVar9;
            uVar8 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar8 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar8) =
                 *(undefined1 *)(param_1 + 0x1721);
            *(ushort *)(param_1 + 0x1720) =
                 uVar5 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
            uVar8 = ((uint)uVar4 + *(int *)(param_1 + 0x1724)) - 0x10;
            uVar7 = uVar7 + 1;
            *(uint *)(param_1 + 0x1724) = uVar8;
            if (uVar7 == 0) goto LAB_00691370;
          }
          uVar8 = uVar8 + uVar4;
          uVar7 = uVar7 + 1;
          *(uint *)(param_1 + 0x1724) = uVar8;
        } while (uVar7 != 0);
LAB_00691370:
        bVar2 = uVar3 == 0;
joined_r0x00691710:
        if (bVar2) goto LAB_00691714;
      }
      else if (uVar6 == 0) {
        if ((int)uVar7 < 10) {
          uVar4 = *(ushort *)(param_1 + 0xaf2);
          uVar8 = *(uint *)(param_1 + 0x1724);
          uVar5 = *(ushort *)(param_1 + 0xaf0);
          uVar9 = (uint)*(ushort *)(param_1 + 0x1720) | (uint)uVar5 << (ulong)(uVar8 & 0x1f);
          *(short *)(param_1 + 0x1720) = (short)uVar9;
          if ((int)(0x10 - (uint)uVar4) < (int)uVar8) {
            uVar8 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar8 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar8) = (char)uVar9;
            uVar8 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar8 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar8) =
                 *(undefined1 *)(param_1 + 0x1721);
            uVar5 = uVar5 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
            uVar9 = (uint)uVar5;
            uVar8 = ((uint)uVar4 + *(int *)(param_1 + 0x1724)) - 0x10;
            *(ushort *)(param_1 + 0x1720) = uVar5;
          }
          else {
            uVar8 = uVar8 + uVar4;
          }
          uVar7 = uVar7 + 0xfffe & 0xffff;
          uVar9 = uVar9 | uVar7 << (ulong)(uVar8 & 0x1f);
          *(uint *)(param_1 + 0x1724) = uVar8;
          *(short *)(param_1 + 0x1720) = (short)uVar9;
          if (0xd < (int)uVar8) {
            uVar8 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar8 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar8) = (char)uVar9;
            uVar8 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar8 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar8) =
                 *(undefined1 *)(param_1 + 0x1721);
            *(short *)(param_1 + 0x1720) =
                 (short)(uVar7 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f));
            *(int *)(param_1 + 0x1724) = *(int *)(param_1 + 0x1724) + -0xd;
            goto joined_r0x00691674;
          }
          *(uint *)(param_1 + 0x1724) = uVar8 + 3;
        }
        else {
          uVar4 = *(ushort *)(param_1 + 0xaf6);
          uVar8 = *(uint *)(param_1 + 0x1724);
          uVar5 = *(ushort *)(param_1 + 0xaf4);
          uVar9 = (uint)*(ushort *)(param_1 + 0x1720) | (uint)uVar5 << (ulong)(uVar8 & 0x1f);
          *(short *)(param_1 + 0x1720) = (short)uVar9;
          if ((int)(0x10 - (uint)uVar4) < (int)uVar8) {
            uVar8 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar8 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar8) = (char)uVar9;
            uVar8 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar8 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar8) =
                 *(undefined1 *)(param_1 + 0x1721);
            uVar5 = uVar5 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
            uVar9 = (uint)uVar5;
            uVar8 = ((uint)uVar4 + *(int *)(param_1 + 0x1724)) - 0x10;
            *(ushort *)(param_1 + 0x1720) = uVar5;
          }
          else {
            uVar8 = uVar8 + uVar4;
          }
          uVar7 = uVar7 + 0xfff6 & 0xffff;
          uVar9 = uVar9 | uVar7 << (ulong)(uVar8 & 0x1f);
          *(uint *)(param_1 + 0x1724) = uVar8;
          *(short *)(param_1 + 0x1720) = (short)uVar9;
          if ((int)uVar8 < 10) {
            *(uint *)(param_1 + 0x1724) = uVar8 + 7;
            bVar2 = uVar13 == 0;
            goto joined_r0x00691710;
          }
          uVar8 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar8 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar8) = (char)uVar9;
          uVar8 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar8 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar8) =
               *(undefined1 *)(param_1 + 0x1721);
          *(short *)(param_1 + 0x1720) =
               (short)(uVar7 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f));
          *(int *)(param_1 + 0x1724) = *(int *)(param_1 + 0x1724) + -9;
        }
        if (uVar13 == 0) goto LAB_00691714;
      }
      else {
        if (uVar6 == (uint)uVar10) {
          uVar9 = *(uint *)(param_1 + 0x1724);
          uVar7 = uVar8;
        }
        else {
          lVar1 = param_1 + uVar14 * 4;
          uVar4 = *(ushort *)(lVar1 + 0xaae);
          uVar9 = *(uint *)(param_1 + 0x1724);
          uVar5 = *(ushort *)(lVar1 + 0xaac);
          uVar8 = (uint)*(ushort *)(param_1 + 0x1720) | (uint)uVar5 << (ulong)(uVar9 & 0x1f);
          *(short *)(param_1 + 0x1720) = (short)uVar8;
          if ((int)(0x10 - (uint)uVar4) < (int)uVar9) {
            uVar9 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar9 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar9) = (char)uVar8;
            uVar8 = *(uint *)(param_1 + 0x28);
            *(uint *)(param_1 + 0x28) = uVar8 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar8) =
                 *(undefined1 *)(param_1 + 0x1721);
            uVar9 = ((uint)uVar4 + *(int *)(param_1 + 0x1724)) - 0x10;
            *(ushort *)(param_1 + 0x1720) =
                 uVar5 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
          }
          else {
            uVar9 = uVar9 + uVar4;
          }
          *(uint *)(param_1 + 0x1724) = uVar9;
        }
        uVar4 = *(ushort *)(param_1 + 0xaee);
        uVar5 = *(ushort *)(param_1 + 0xaec);
        uVar8 = (uint)*(ushort *)(param_1 + 0x1720) | (uint)uVar5 << (ulong)(uVar9 & 0x1f);
        *(short *)(param_1 + 0x1720) = (short)uVar8;
        if ((int)(0x10 - (uint)uVar4) < (int)uVar9) {
          uVar9 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar9 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar9) = (char)uVar8;
          uVar8 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar8 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar8) =
               *(undefined1 *)(param_1 + 0x1721);
          uVar5 = uVar5 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
          uVar8 = (uint)uVar5;
          uVar9 = ((uint)uVar4 + *(int *)(param_1 + 0x1724)) - 0x10;
          *(ushort *)(param_1 + 0x1720) = uVar5;
        }
        else {
          uVar9 = uVar9 + uVar4;
        }
        uVar7 = uVar7 + 0xfffd & 0xffff;
        uVar8 = uVar8 | uVar7 << (ulong)(uVar9 & 0x1f);
        *(uint *)(param_1 + 0x1724) = uVar9;
        *(short *)(param_1 + 0x1720) = (short)uVar8;
        if ((int)uVar9 < 0xf) {
          *(uint *)(param_1 + 0x1724) = uVar9 + 2;
        }
        else {
          uVar9 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar9 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar9) = (char)uVar8;
          uVar8 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar8 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar8) =
               *(undefined1 *)(param_1 + 0x1721);
          *(short *)(param_1 + 0x1720) =
               (short)(uVar7 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f));
          *(int *)(param_1 + 0x1724) = *(int *)(param_1 + 0x1724) + -0xe;
        }
joined_r0x00691674:
        if (uVar3 == 0) {
LAB_00691714:
          iVar15 = 3;
          iVar12 = 0x8a;
          uVar10 = uVar14;
          uVar8 = 0;
          goto joined_r0x00691728;
        }
      }
      uVar7 = 0;
      iVar15 = 3;
      if (uVar6 != uVar13) {
        iVar15 = 4;
      }
      iVar12 = 6;
      if (uVar6 != uVar13) {
        iVar12 = 7;
      }
      uVar10 = uVar14;
      uVar14 = (ulong)uVar3;
    } while (uVar11 != param_3 + 1);
  }
  return;
}


