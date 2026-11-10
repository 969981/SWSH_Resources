/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00690e50; name: FUN_00690e50
 */


void FUN_00690e50(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined2 *puVar2;
  long lVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  
  if (*(int *)(param_1 + 0x16fc) == 0) {
    uVar10 = *(uint *)(param_1 + 0x1724);
    uVar14 = (uint)*(ushort *)(param_1 + 0x1720);
  }
  else {
    puVar2 = (undefined2 *)(param_1 + 0x1720);
    uVar11 = 0;
    do {
      while( true ) {
        uVar1 = uVar11 + 1;
        bVar7 = *(byte *)(*(long *)(param_1 + 0x16f0) + uVar11);
        uVar13 = (uint)*(ushort *)(*(long *)(param_1 + 0x1700) + uVar11 * 2);
        uVar11 = uVar1;
        if (uVar13 != 0) break;
        puVar4 = (ushort *)(param_2 + (ulong)bVar7 * 4);
        uVar10 = *(uint *)(param_1 + 0x1724);
        uVar8 = puVar4[1];
        uVar9 = *puVar4;
        uVar14 = (uint)*(ushort *)(param_1 + 0x1720) | (uint)uVar9 << (ulong)(uVar10 & 0x1f);
        *(short *)(param_1 + 0x1720) = (short)uVar14;
        if ((int)(0x10 - (uint)uVar8) < (int)uVar10) {
          uVar10 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar10 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar10) = (char)uVar14;
          uVar10 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar10 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar10) =
               *(undefined1 *)(param_1 + 0x1721);
          uVar9 = uVar9 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
          uVar14 = (uint)uVar9;
          uVar10 = ((uint)uVar8 + *(int *)(param_1 + 0x1724)) - 0x10;
          *(ushort *)(param_1 + 0x1720) = uVar9;
        }
        else {
          uVar10 = uVar10 + uVar8;
        }
LAB_00691180:
        *(uint *)(param_1 + 0x1724) = uVar10;
        if (*(uint *)(param_1 + 0x16fc) <= uVar1) goto LAB_006911b0;
      }
      uVar12 = (ulong)(byte)(&DAT_0213d978)[bVar7];
      lVar3 = param_2 + (uVar12 << 2 | 0x400);
      uVar8 = *(ushort *)(lVar3 + 6);
      uVar10 = *(uint *)(param_1 + 0x1724);
      uVar9 = *(ushort *)(lVar3 + 4);
      uVar14 = (uint)*(ushort *)(param_1 + 0x1720) | (uint)uVar9 << (ulong)(uVar10 & 0x1f);
      *(short *)(param_1 + 0x1720) = (short)uVar14;
      if ((int)(0x10 - (uint)uVar8) < (int)uVar10) {
        uVar10 = *(uint *)(param_1 + 0x28);
        *(uint *)(param_1 + 0x28) = uVar10 + 1;
        *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar10) = (char)uVar14;
        uVar10 = *(uint *)(param_1 + 0x28);
        *(uint *)(param_1 + 0x28) = uVar10 + 1;
        *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar10) =
             *(undefined1 *)(param_1 + 0x1721);
        uVar9 = uVar9 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
        uVar14 = (uint)uVar9;
        uVar10 = ((uint)uVar8 + *(int *)(param_1 + 0x1724)) - 0x10;
        *(ushort *)(param_1 + 0x1720) = uVar9;
        *(uint *)(param_1 + 0x1724) = uVar10;
      }
      else {
        uVar10 = uVar10 + uVar8;
        *(uint *)(param_1 + 0x1724) = uVar10;
      }
      if (uVar12 - 8 < 0x14) {
        iVar6 = *(int *)(&DAT_0213df70 + uVar12 * 4);
        uVar5 = (uint)bVar7 - *(int *)(&DAT_0213e0bc + uVar12 * 4) & 0xffff;
        uVar14 = uVar14 | uVar5 << (ulong)(uVar10 & 0x1f);
        *puVar2 = (short)uVar14;
        if (0x10 - iVar6 < (int)uVar10) {
          uVar10 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar10 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar10) = (char)uVar14;
          uVar10 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar10 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar10) =
               *(undefined1 *)(param_1 + 0x1721);
          uVar14 = uVar5 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
          *(short *)(param_1 + 0x1720) = (short)uVar14;
          uVar10 = (iVar6 + *(int *)(param_1 + 0x1724)) - 0x10;
        }
        else {
          uVar10 = iVar6 + uVar10;
        }
        *(uint *)(param_1 + 0x1724) = uVar10;
      }
      uVar13 = uVar13 - 1;
      uVar5 = uVar13;
      if (0xff < uVar13) {
        uVar5 = (uVar13 >> 7) + 0x100;
      }
      uVar12 = (ulong)(byte)(&DAT_0213d778)[uVar5];
      puVar4 = (ushort *)(param_3 + uVar12 * 4);
      uVar8 = puVar4[1];
      uVar9 = *puVar4;
      uVar14 = uVar14 | (uint)uVar9 << (ulong)(uVar10 & 0x1f);
      *puVar2 = (short)uVar14;
      if ((int)(0x10 - (uint)uVar8) < (int)uVar10) {
        uVar10 = *(uint *)(param_1 + 0x28);
        *(uint *)(param_1 + 0x28) = uVar10 + 1;
        *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar10) = (char)uVar14;
        uVar10 = *(uint *)(param_1 + 0x28);
        *(uint *)(param_1 + 0x28) = uVar10 + 1;
        *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar10) =
             *(undefined1 *)(param_1 + 0x1721);
        uVar9 = uVar9 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
        uVar14 = (uint)uVar9;
        *(ushort *)(param_1 + 0x1720) = uVar9;
        uVar10 = ((uint)uVar8 + *(int *)(param_1 + 0x1724)) - 0x10;
        *(uint *)(param_1 + 0x1724) = uVar10;
      }
      else {
        uVar10 = uVar10 + uVar8;
        *(uint *)(param_1 + 0x1724) = uVar10;
      }
      if (uVar12 - 4 < 0x1a) {
        iVar6 = *(int *)(&DAT_0213dfe4 + uVar12 * 4);
        uVar13 = uVar13 - *(int *)(&DAT_0213e130 + uVar12 * 4) & 0xffff;
        uVar14 = uVar14 | uVar13 << (ulong)(uVar10 & 0x1f);
        *puVar2 = (short)uVar14;
        if (0x10 - iVar6 < (int)uVar10) {
          uVar10 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar10 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar10) = (char)uVar14;
          uVar10 = *(uint *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = uVar10 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar10) =
               *(undefined1 *)(param_1 + 0x1721);
          uVar14 = uVar13 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
          *(short *)(param_1 + 0x1720) = (short)uVar14;
          uVar10 = (iVar6 + *(int *)(param_1 + 0x1724)) - 0x10;
        }
        else {
          uVar10 = iVar6 + uVar10;
        }
        goto LAB_00691180;
      }
    } while (uVar1 < *(uint *)(param_1 + 0x16fc));
  }
LAB_006911b0:
  uVar8 = *(ushort *)(param_2 + 0x402);
  uVar9 = *(ushort *)(param_2 + 0x400);
  uVar14 = uVar14 | (uint)uVar9 << (ulong)(uVar10 & 0x1f);
  *(short *)(param_1 + 0x1720) = (short)uVar14;
  if ((int)(0x10 - (uint)uVar8) < (int)uVar10) {
    uVar10 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar10 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar10) = (char)uVar14;
    uVar10 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar10 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar10) = *(undefined1 *)(param_1 + 0x1721);
    *(ushort *)(param_1 + 0x1720) = uVar9 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
    *(uint *)(param_1 + 0x1724) = (uint)uVar8 + *(int *)(param_1 + 0x1724) + -0x10;
    *(uint *)(param_1 + 0x171c) = (uint)*(ushort *)(param_2 + 0x402);
    return;
  }
  *(uint *)(param_1 + 0x1724) = uVar10 + uVar8;
  *(uint *)(param_1 + 0x171c) = (uint)*(ushort *)(param_2 + 0x402);
  return;
}


