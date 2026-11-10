/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00751dd0; name: FUN_00751dd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00751dd0(float param_1,undefined8 param_2,long param_3,int param_4,long param_5,int *param_6,
            int *param_7)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  ushort *puVar12;
  long lVar13;
  ulong *puVar14;
  uint *puVar15;
  ulong *puVar16;
  int *piVar17;
  ulong uVar18;
  ushort *puVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  ulong uVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  
  puVar12 = (ushort *)((long)param_6 - (long)*param_6);
  uVar5 = *puVar12;
  if ((uVar5 < 7) || ((ulong)puVar12[3] == 0)) {
    lVar13 = 0;
  }
  else {
    puVar15 = (uint *)((long)param_6 + (ulong)puVar12[3]);
    lVar13 = (long)puVar15 + (ulong)*puVar15;
  }
  bVar4 = *(byte *)(lVar13 + 4);
  uVar7 = 0xcbf29ce484222645;
  if (bVar4 != 0) {
    pbVar8 = (byte *)(lVar13 + 5);
    do {
      uVar7 = (uVar7 ^ bVar4) * 0x100000001b3;
      bVar4 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (bVar4 != 0);
  }
  lVar13 = *(long *)(*(long *)(param_3 + 0x218) + 0x290) + (long)param_4 * 0x4c0;
  puVar9 = *(ulong **)(lVar13 + 0xd8);
  puVar14 = *(ulong **)(lVar13 + 0xe0);
  if (puVar14 == puVar9) {
    return 0;
  }
  puVar16 = puVar9;
  if (*puVar9 != uVar7) {
    do {
      puVar16 = puVar16 + 4;
      if (puVar14 == puVar16) {
        return 0;
      }
    } while (*puVar16 != uVar7);
  }
  if (puVar16 == puVar14) {
    return 0;
  }
  uVar7 = (long)puVar16 - (long)puVar9;
  if ((int)(uVar7 >> 5) == -1) {
    return 0;
  }
  uVar10 = (ulong)param_4;
  if (param_5 == 0) {
    if ((ulong)((*(long *)(param_3 + 0x328) - *(long *)(param_3 + 800) >> 3) * -0x70a3d70a3d70a3d7)
        <= uVar10) goto LAB_00752318;
    lVar13 = *(long *)(param_3 + 800) + uVar10 * 200;
    uVar26 = (long)(uVar7 * 0x8000000) >> 0x20;
    lVar11 = *(long *)(lVar13 + 0x80);
    if ((ulong)(*(long *)(lVar13 + 0x88) - lVar11 >> 4) <= uVar26) goto LAB_00752318;
    puVar1 = (undefined8 *)(lVar11 + uVar26 * 0x10);
    uVar26 = puVar1[1];
    uVar25 = *puVar1;
  }
  else {
    piVar17 = *(int **)(param_5 + 0x40);
    puVar15 = (uint *)((long)piVar17 + (ulong)*(ushort *)((long)piVar17 + (0x20 - (long)*piVar17)));
    uVar25 = 0;
    uVar26 = 0;
    puVar15 = (uint *)((long)puVar15 + (uVar7 >> 5 & 0xffffffff) * 4 + (ulong)*puVar15 + 4);
    piVar17 = (int *)((long)puVar15 + (ulong)*puVar15);
    if ((6 < *(ushort *)((long)piVar17 - (long)*piVar17)) &&
       (uVar18 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[3],
       puVar1 = (undefined8 *)((long)piVar17 + uVar18), uVar18 != 0 && puVar1 != (undefined8 *)0x0))
    {
      uVar25 = *puVar1;
      uVar26 = (ulong)*(uint *)(puVar1 + 1);
    }
  }
  piVar17 = (int *)((long)((long)param_6 + (ulong)puVar12[6]) +
                   (ulong)*(uint *)((long)param_6 + (ulong)puVar12[6]));
  puVar19 = (ushort *)((long)piVar17 - (long)*piVar17);
  uVar6 = *puVar19;
  uVar28 = 0;
  uVar18 = 0;
  if ((4 < uVar6) &&
     (puVar1 = (undefined8 *)((long)piVar17 + (ulong)puVar19[2]),
     (ulong)puVar19[2] != 0 && puVar1 != (undefined8 *)0x0)) {
    uVar28 = *puVar1;
    uVar18 = (ulong)*(uint *)(puVar1 + 1);
  }
  fVar21 = (float)uVar25;
  fVar22 = (float)((ulong)uVar25 >> 0x20);
  fVar23 = (float)uVar26;
  fVar24 = (float)uVar28;
  fVar27 = (float)((ulong)uVar28 >> 0x20);
  fVar29 = (float)uVar18;
  if (param_7 == (int *)0x0) {
    if (param_1 <= DAT_01d4c1cc) goto LAB_00752074;
    if ((uVar5 < 9) || (uVar20 = (ulong)puVar12[4], uVar20 == 0)) {
LAB_00752068:
      uVar25 = 0;
      fVar30 = 0.0;
      goto LAB_0075206c;
    }
    if (*(int *)((long)param_6 + uVar20) == 1) {
      uVar28 = CONCAT44(fVar27 + ((float)((ulong)_DAT_01d4a130 >> 0x20) - fVar27) * param_1,
                        fVar24 + ((float)_DAT_01d4a130 - fVar24) * param_1);
      uVar18 = CONCAT44(((float)((ulong)_UNK_01d4a138 >> 0x20) - 0.0) * param_1 + 0.0,
                        fVar29 + ((float)_UNK_01d4a138 - fVar29) * param_1);
      iVar3 = *(int *)((long)param_6 + uVar20);
    }
    else {
      if (*(int *)((long)param_6 + uVar20) == 0) goto LAB_00752068;
      uVar28 = CONCAT44(fVar27 + (fVar22 - fVar27) * param_1,fVar24 + (fVar21 - fVar24) * param_1);
      uVar18 = CONCAT44(((float)(uVar26 >> 0x20) - 0.0) * param_1 + 0.0,
                        fVar29 + (fVar23 - fVar29) * param_1);
      iVar3 = *(int *)((long)param_6 + uVar20);
    }
joined_r0x00752298:
    if (iVar3 == 2) {
      if (uVar10 < (ulong)((*(long *)(param_3 + 0x328) - *(long *)(param_3 + 800) >> 3) *
                          -0x70a3d70a3d70a3d7)) {
        lVar13 = *(long *)(param_3 + 800) + uVar10 * 200;
        uVar7 = (long)(uVar7 * 0x8000000) >> 0x20;
        lVar11 = *(long *)(lVar13 + 0x80);
        if (uVar7 < (ulong)(*(long *)(lVar13 + 0x88) - lVar11 >> 4)) {
          puVar1 = (undefined8 *)(lVar11 + uVar7 * 0x10);
          puVar1[1] = uVar18;
          *puVar1 = uVar28;
          return 1;
        }
      }
      goto LAB_00752318;
    }
    if (iVar3 == 1) {
      fVar21 = fVar21 * (float)uVar28;
      fVar22 = fVar22 * (float)((ulong)uVar28 >> 0x20);
      fVar23 = fVar23 * (float)uVar18;
      if (uVar6 < 7) {
        fVar27 = 0.0;
        fVar24 = 0.0;
      }
      else {
        fVar24 = 0.0;
        fVar27 = 0.0;
        if ((ulong)puVar19[3] != 0) {
          fVar27 = *(float *)((long)piVar17 + (ulong)puVar19[3]);
        }
        if ((8 < uVar6) && ((ulong)puVar19[4] != 0)) {
          fVar24 = *(float *)((long)piVar17 + (ulong)puVar19[4]);
        }
      }
      if (fVar21 <= fVar27) {
        fVar21 = fVar27;
      }
      fVar29 = fVar24;
      if (fVar21 <= fVar24) {
        fVar29 = fVar21;
      }
      if (fVar22 <= fVar27) {
        fVar22 = fVar27;
      }
      fVar21 = fVar24;
      if (fVar22 <= fVar24) {
        fVar21 = fVar22;
      }
      if (fVar23 <= fVar27) {
        fVar23 = fVar27;
      }
      if (fVar23 <= fVar24) {
        fVar24 = fVar23;
      }
      if (uVar10 < (ulong)((*(long *)(param_3 + 0x328) - *(long *)(param_3 + 800) >> 3) *
                          -0x70a3d70a3d70a3d7)) {
        lVar13 = *(long *)(param_3 + 800) + uVar10 * 200;
        uVar7 = (long)(uVar7 * 0x8000000) >> 0x20;
        lVar11 = *(long *)(lVar13 + 0x80);
        if (uVar7 < (ulong)(*(long *)(lVar13 + 0x88) - lVar11 >> 4)) {
          puVar1 = (undefined8 *)(lVar11 + uVar7 * 0x10);
          puVar1[1] = (ulong)(uint)fVar24;
          *puVar1 = CONCAT44(fVar21,fVar29);
          return 1;
        }
      }
      goto LAB_00752318;
    }
    if (iVar3 != 0) {
      return 0;
    }
  }
  else {
    puVar15 = (uint *)((long)param_7 + (ulong)*(ushort *)((long)param_7 + (0xc - (long)*param_7)));
    piVar2 = (int *)((long)puVar15 + (ulong)*puVar15);
    uVar25 = 0;
    fVar30 = 0.0;
    if ((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
       (uVar26 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2],
       puVar1 = (undefined8 *)((long)piVar2 + uVar26), uVar26 != 0 && puVar1 != (undefined8 *)0x0))
    {
      uVar25 = *puVar1;
      fVar30 = *(float *)(puVar1 + 1);
    }
LAB_0075206c:
    uVar28 = CONCAT44(fVar27 + ((float)((ulong)uVar25 >> 0x20) - fVar27) * param_1,
                      fVar24 + ((float)uVar25 - fVar24) * param_1);
    uVar18 = CONCAT44(param_1 * 0.0 + 0.0,fVar29 + (fVar30 - fVar29) * param_1);
LAB_00752074:
    if ((8 < uVar5) && (puVar12[4] != 0)) {
      iVar3 = *(int *)((long)param_6 + (ulong)(uint)puVar12[4]);
      goto joined_r0x00752298;
    }
  }
  fVar21 = fVar21 + (float)uVar28;
  fVar22 = fVar22 + (float)((ulong)uVar28 >> 0x20);
  fVar23 = fVar23 + (float)uVar18;
  if (uVar6 < 7) {
    fVar27 = 0.0;
    fVar24 = 0.0;
  }
  else {
    fVar24 = 0.0;
    fVar27 = 0.0;
    if ((ulong)puVar19[3] != 0) {
      fVar27 = *(float *)((long)piVar17 + (ulong)puVar19[3]);
    }
    if ((8 < uVar6) && ((ulong)puVar19[4] != 0)) {
      fVar24 = *(float *)((long)piVar17 + (ulong)puVar19[4]);
    }
  }
  if (fVar21 <= fVar27) {
    fVar21 = fVar27;
  }
  fVar29 = fVar24;
  if (fVar21 <= fVar24) {
    fVar29 = fVar21;
  }
  if (fVar22 <= fVar27) {
    fVar22 = fVar27;
  }
  fVar21 = fVar24;
  if (fVar22 <= fVar24) {
    fVar21 = fVar22;
  }
  if (fVar23 <= fVar27) {
    fVar23 = fVar27;
  }
  if (fVar23 <= fVar24) {
    fVar24 = fVar23;
  }
  if (uVar10 < (ulong)((*(long *)(param_3 + 0x328) - *(long *)(param_3 + 800) >> 3) *
                      -0x70a3d70a3d70a3d7)) {
    lVar13 = *(long *)(param_3 + 800) + uVar10 * 200;
    uVar7 = (long)(uVar7 * 0x8000000) >> 0x20;
    lVar11 = *(long *)(lVar13 + 0x80);
    if (uVar7 < (ulong)(*(long *)(lVar13 + 0x88) - lVar11 >> 4)) {
      puVar1 = (undefined8 *)(lVar11 + uVar7 * 0x10);
      puVar1[1] = (ulong)(uint)fVar24;
      *puVar1 = CONCAT44(fVar21,fVar29);
      return 1;
    }
  }
LAB_00752318:
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}


