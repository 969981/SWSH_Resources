/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00752720; name: FUN_00752720
 */


undefined8
FUN_00752720(float param_1,undefined8 param_2,long param_3,int param_4,long param_5,int *param_6,
            int *param_7)

{
  byte bVar1;
  bool bVar2;
  ushort *puVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  uint *puVar10;
  int iVar11;
  ulong *puVar12;
  int *piVar13;
  ulong uVar14;
  int iVar15;
  
  puVar3 = (ushort *)((long)param_6 - (long)*param_6);
  if ((*puVar3 < 7) || ((ulong)puVar3[3] == 0)) {
    lVar8 = 0;
  }
  else {
    puVar10 = (uint *)((long)param_6 + (ulong)puVar3[3]);
    lVar8 = (long)puVar10 + (ulong)*puVar10;
  }
  bVar1 = *(byte *)(lVar8 + 4);
  uVar4 = 0xcbf29ce484222645;
  if (bVar1 != 0) {
    pbVar5 = (byte *)(lVar8 + 5);
    do {
      uVar4 = (uVar4 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
  }
  lVar8 = *(long *)(*(long *)(param_3 + 0x218) + 0x290) + (long)param_4 * 0x4c0;
  puVar6 = *(ulong **)(lVar8 + 0x78);
  puVar9 = *(ulong **)(lVar8 + 0x80);
  if (puVar9 == puVar6) {
    return 0;
  }
  puVar12 = puVar6;
  if (*puVar6 != uVar4) {
    do {
      puVar12 = puVar12 + 4;
      if (puVar9 == puVar12) {
        return 0;
      }
    } while (*puVar12 != uVar4);
  }
  if (puVar12 == puVar9) {
    return 0;
  }
  uVar4 = (long)puVar12 - (long)puVar6;
  if ((int)(uVar4 >> 5) == -1) {
    return 0;
  }
  uVar7 = (ulong)param_4;
  if (param_5 == 0) {
    if ((ulong)((*(long *)(param_3 + 0x328) - *(long *)(param_3 + 800) >> 3) * -0x70a3d70a3d70a3d7)
        <= uVar7) goto LAB_00752b78;
    lVar8 = *(long *)(param_3 + 800) + uVar7 * 200;
    uVar14 = (long)(uVar4 * 0x8000000) >> 0x20;
    if (*(ulong *)(lVar8 + 0x28) <= uVar14) goto LAB_00752b78;
    bVar2 = (*(ulong *)(*(long *)(lVar8 + 0x20) + (uVar14 >> 3 & 0x1ffffffffffffff8)) &
            1L << ((uVar4 & 0x1fffffffff) >> 5 & 0x3f)) == 0;
LAB_007528dc:
    bVar2 = !bVar2;
  }
  else {
    piVar13 = *(int **)(param_5 + 0x40);
    puVar10 = (uint *)((long)piVar13 + (ulong)*(ushort *)((long)piVar13 + (0x1c - (long)*piVar13)));
    puVar10 = (uint *)((long)puVar10 + (uVar4 >> 5 & 0xffffffff) * 4 + (ulong)*puVar10 + 4);
    piVar13 = (int *)((long)puVar10 + (ulong)*puVar10);
    if ((6 < *(ushort *)((long)piVar13 - (long)*piVar13)) &&
       (uVar14 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[3], uVar14 != 0)) {
      bVar2 = *(char *)((long)piVar13 + uVar14) == '\0';
      goto LAB_007528dc;
    }
    bVar2 = false;
  }
  piVar13 = (int *)((long)((long)param_6 + (ulong)puVar3[6]) +
                   (ulong)*(uint *)((long)param_6 + (ulong)puVar3[6]));
  if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
     (uVar14 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar14 == 0)) {
    iVar11 = 0;
    if (param_7 != (int *)0x0) goto LAB_007529d4;
LAB_00752914:
    if ((param_1 <= 0.5) && (iVar11 != -1)) goto LAB_00752928;
LAB_00752a28:
    if ((ulong)((*(long *)(param_3 + 0x328) - *(long *)(param_3 + 800) >> 3) * -0x70a3d70a3d70a3d7)
        <= uVar7) goto LAB_00752b78;
    lVar8 = *(long *)(param_3 + 800) + uVar7 * 200;
    uVar7 = (long)(uVar4 * 0x8000000) >> 0x20;
    if (*(ulong *)(lVar8 + 0x28) <= uVar7) goto LAB_00752b78;
    lVar8 = *(long *)(lVar8 + 0x20);
    uVar7 = uVar7 >> 6;
    uVar4 = 1L << ((uVar4 & 0x1fffffffff) >> 5 & 0x3f);
    if (!bVar2) goto LAB_007529c0;
LAB_00752a8c:
    uVar4 = *(ulong *)(lVar8 + uVar7 * 8) | uVar4;
  }
  else {
    iVar11 = *(int *)((long)piVar13 + uVar14);
    if (param_7 == (int *)0x0) goto LAB_00752914;
LAB_007529d4:
    puVar10 = (uint *)((long)param_7 + (ulong)*(ushort *)((long)param_7 + (0xc - (long)*param_7)));
    piVar13 = (int *)((long)puVar10 + (ulong)*puVar10);
    if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
       (uVar14 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar14 == 0)) {
      iVar15 = 0;
    }
    else {
      iVar15 = *(int *)((long)piVar13 + uVar14);
    }
    if (0.5 <= param_1) {
      iVar11 = iVar15;
    }
    if (iVar11 == -1) goto LAB_00752a28;
LAB_00752928:
    if ((*puVar3 < 9) || ((ulong)puVar3[4] == 0)) {
LAB_00752950:
      if ((ulong)((*(long *)(param_3 + 0x328) - *(long *)(param_3 + 800) >> 3) * -0x70a3d70a3d70a3d7
                 ) <= uVar7) {
LAB_00752b78:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      lVar8 = *(long *)(param_3 + 800) + uVar7 * 200;
      uVar7 = (long)(uVar4 * 0x8000000) >> 0x20;
      if (*(ulong *)(lVar8 + 0x28) <= uVar7) goto LAB_00752b78;
      bVar2 = (bool)(bVar2 | iVar11 == 1);
LAB_007529a4:
      lVar8 = *(long *)(lVar8 + 0x20);
      uVar7 = uVar7 >> 6;
      uVar4 = 1L << ((uVar4 & 0x1fffffffff) >> 5 & 0x3f);
      if (bVar2) goto LAB_00752a8c;
    }
    else {
      iVar15 = *(int *)((long)param_6 + (ulong)puVar3[4]);
      if (iVar15 != 2) {
        if (iVar15 != 1) {
          if (iVar15 != 0) {
            return 0;
          }
          goto LAB_00752950;
        }
        if ((ulong)((*(long *)(param_3 + 0x328) - *(long *)(param_3 + 800) >> 3) *
                   -0x70a3d70a3d70a3d7) <= uVar7) goto LAB_00752b78;
        lVar8 = *(long *)(param_3 + 800) + uVar7 * 200;
        uVar7 = (long)(uVar4 * 0x8000000) >> 0x20;
        if (*(ulong *)(lVar8 + 0x28) <= uVar7) goto LAB_00752b78;
        bVar2 = (bool)(bVar2 & iVar11 == 1);
        goto LAB_007529a4;
      }
      if ((ulong)((*(long *)(param_3 + 0x328) - *(long *)(param_3 + 800) >> 3) * -0x70a3d70a3d70a3d7
                 ) <= uVar7) goto LAB_00752b78;
      lVar8 = *(long *)(param_3 + 800) + uVar7 * 200;
      uVar7 = (long)(uVar4 * 0x8000000) >> 0x20;
      if (*(ulong *)(lVar8 + 0x28) <= uVar7) goto LAB_00752b78;
      lVar8 = *(long *)(lVar8 + 0x20);
      uVar7 = uVar7 >> 6;
      uVar4 = 1L << ((uVar4 & 0x1fffffffff) >> 5 & 0x3f);
      if (iVar11 == 1) goto LAB_00752a8c;
    }
LAB_007529c0:
    uVar4 = *(ulong *)(lVar8 + uVar7 * 8) & (uVar4 ^ 0xffffffffffffffff);
  }
  *(ulong *)(lVar8 + uVar7 * 8) = uVar4;
  return 1;
}


