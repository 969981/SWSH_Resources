/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00752320; name: FUN_00752320
 */


undefined8
FUN_00752320(float param_1,undefined8 param_2,long param_3,int param_4,long param_5,int *param_6,
            int *param_7)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ushort *puVar11;
  long lVar12;
  ulong *puVar13;
  uint *puVar14;
  ulong *puVar15;
  int *piVar16;
  ulong uVar17;
  ushort *puVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  puVar11 = (ushort *)((long)param_6 - (long)*param_6);
  uVar4 = *puVar11;
  if ((uVar4 < 7) || ((ulong)puVar11[3] == 0)) {
    lVar12 = 0;
  }
  else {
    puVar14 = (uint *)((long)param_6 + (ulong)puVar11[3]);
    lVar12 = (long)puVar14 + (ulong)*puVar14;
  }
  bVar3 = *(byte *)(lVar12 + 4);
  uVar6 = 0xcbf29ce484222645;
  if (bVar3 != 0) {
    pbVar7 = (byte *)(lVar12 + 5);
    do {
      uVar6 = (uVar6 ^ bVar3) * 0x100000001b3;
      bVar3 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar3 != 0);
  }
  lVar12 = *(long *)(*(long *)(param_3 + 0x218) + 0x290) + (long)param_4 * 0x4c0;
  puVar8 = *(ulong **)(lVar12 + 0xa8);
  puVar13 = *(ulong **)(lVar12 + 0xb0);
  if (puVar13 == puVar8) {
    return 0;
  }
  puVar15 = puVar8;
  if (*puVar8 != uVar6) {
    do {
      puVar15 = puVar15 + 4;
      if (puVar13 == puVar15) {
        return 0;
      }
    } while (*puVar15 != uVar6);
  }
  if (puVar15 == puVar13) {
    return 0;
  }
  uVar6 = (long)puVar15 - (long)puVar8;
  if ((int)(uVar6 >> 5) == -1) {
    return 0;
  }
  uVar9 = (ulong)param_4;
  if (param_5 == 0) {
    if ((ulong)((*(long *)(param_3 + 0x328) - *(long *)(param_3 + 800) >> 3) * -0x70a3d70a3d70a3d7)
        <= uVar9) goto LAB_00752714;
    lVar12 = *(long *)(param_3 + 800) + uVar9 * 200;
    uVar17 = (long)(uVar6 * 0x8000000) >> 0x20;
    lVar10 = *(long *)(lVar12 + 0x50);
    if ((ulong)(*(long *)(lVar12 + 0x58) - lVar10 >> 2) <= uVar17) goto LAB_00752714;
    fVar19 = *(float *)(lVar10 + uVar17 * 4);
  }
  else {
    piVar16 = *(int **)(param_5 + 0x40);
    puVar14 = (uint *)((long)piVar16 + (ulong)*(ushort *)((long)piVar16 + (0x1e - (long)*piVar16)));
    fVar19 = 0.0;
    puVar14 = (uint *)((long)puVar14 + (uVar6 >> 5 & 0xffffffff) * 4 + (ulong)*puVar14 + 4);
    piVar16 = (int *)((long)puVar14 + (ulong)*puVar14);
    if ((6 < *(ushort *)((long)piVar16 - (long)*piVar16)) &&
       (uVar17 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[3], uVar17 != 0)) {
      fVar19 = *(float *)((long)piVar16 + uVar17);
    }
  }
  piVar16 = (int *)((long)((long)param_6 + (ulong)puVar11[6]) +
                   (ulong)*(uint *)((long)param_6 + (ulong)puVar11[6]));
  puVar18 = (ushort *)((long)piVar16 - (long)*piVar16);
  uVar5 = *puVar18;
  fVar20 = 0.0;
  if ((4 < uVar5) && ((ulong)puVar18[2] != 0)) {
    fVar20 = *(float *)((long)piVar16 + (ulong)puVar18[2]);
  }
  if (param_7 == (int *)0x0) {
    if (param_1 <= DAT_01d4c1cc) goto joined_r0x007525b8;
    if ((uVar4 < 9) || (uVar17 = (ulong)puVar11[4], uVar17 == 0)) {
LAB_007525a8:
      fVar20 = (1.0 - param_1) * fVar20;
      goto joined_r0x007525b8;
    }
    if (*(int *)((long)param_6 + uVar17) == 1) {
      fVar20 = (1.0 - param_1) * fVar20 + param_1;
      iVar2 = *(int *)((long)param_6 + uVar17);
    }
    else {
      if (*(int *)((long)param_6 + uVar17) == 0) goto LAB_007525a8;
      fVar20 = fVar19 * param_1 + (1.0 - param_1) * fVar20;
      iVar2 = *(int *)((long)param_6 + uVar17);
    }
joined_r0x00752708:
    if (iVar2 == 2) {
      if (uVar9 < (ulong)((*(long *)(param_3 + 0x328) - *(long *)(param_3 + 800) >> 3) *
                         -0x70a3d70a3d70a3d7)) {
        lVar12 = *(long *)(param_3 + 800) + uVar9 * 200;
        uVar6 = (long)(uVar6 * 0x8000000) >> 0x20;
        lVar10 = *(long *)(lVar12 + 0x50);
        if (uVar6 < (ulong)(*(long *)(lVar12 + 0x58) - lVar10 >> 2)) {
          *(float *)(lVar10 + uVar6 * 4) = fVar20;
          return 1;
        }
      }
      goto LAB_00752714;
    }
    if (iVar2 != 1) {
      if (iVar2 != 0) {
        return 0;
      }
      goto LAB_007525bc;
    }
    fVar19 = fVar19 * fVar20;
    if (uVar5 < 7) goto LAB_00752600;
LAB_007525c8:
    fVar20 = 0.0;
    fVar21 = 0.0;
    if ((ulong)puVar18[3] != 0) {
      fVar21 = *(float *)((long)piVar16 + (ulong)puVar18[3]);
    }
    if ((8 < uVar5) && ((ulong)puVar18[4] != 0)) {
      fVar20 = *(float *)((long)piVar16 + (ulong)puVar18[4]);
    }
  }
  else {
    puVar14 = (uint *)((long)param_7 + (ulong)*(ushort *)((long)param_7 + (0xc - (long)*param_7)));
    fVar21 = 0.0;
    piVar1 = (int *)((long)puVar14 + (ulong)*puVar14);
    if ((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
       (uVar17 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar17 != 0)) {
      fVar21 = *(float *)((long)piVar1 + uVar17);
    }
    fVar20 = (1.0 - param_1) * fVar20 + fVar21 * param_1;
joined_r0x007525b8:
    if ((8 < uVar4) && (puVar11[4] != 0)) {
      iVar2 = *(int *)((long)param_6 + (ulong)(uint)puVar11[4]);
      goto joined_r0x00752708;
    }
LAB_007525bc:
    fVar19 = fVar19 + fVar20;
    if (6 < uVar5) goto LAB_007525c8;
LAB_00752600:
    fVar21 = 0.0;
    fVar20 = 0.0;
  }
  if (fVar19 <= fVar21) {
    fVar19 = fVar21;
  }
  if (fVar19 <= fVar20) {
    fVar20 = fVar19;
  }
  if (uVar9 < (ulong)((*(long *)(param_3 + 0x328) - *(long *)(param_3 + 800) >> 3) *
                     -0x70a3d70a3d70a3d7)) {
    lVar12 = *(long *)(param_3 + 800) + uVar9 * 200;
    uVar6 = (long)(uVar6 * 0x8000000) >> 0x20;
    lVar10 = *(long *)(lVar12 + 0x50);
    if (uVar6 < (ulong)(*(long *)(lVar12 + 0x58) - lVar10 >> 2)) {
      *(float *)(lVar10 + uVar6 * 4) = fVar20;
      return 1;
    }
  }
LAB_00752714:
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}


