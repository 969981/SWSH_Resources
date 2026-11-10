/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f5d30; name: FUN_004f5d30
 */


void FUN_004f5d30(ulong *param_1,long param_2,void *param_3)

{
  ulong uVar1;
  float *pfVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  void *pvVar11;
  ulong uVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  float *pfVar18;
  float *pfVar19;
  long lVar20;
  float *pfVar21;
  uint uVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  void *local_b0;
  undefined8 uStack_a8;
  ushort local_a0;
  ushort local_9e;
  void *local_98;
  undefined8 uStack_90;
  ushort local_88;
  ushort local_86;
  
  if (*(int *)((long)param_1 + 0xc) == 0x11) {
    uVar5 = *(uint *)(param_2 + 0x568);
    uVar22 = *(uint *)(param_2 + 0x560);
    if (uVar22 == 0) {
      if (*(short *)((long)param_1 + 0x12) != 0) goto LAB_004f5dc0;
    }
    else {
      if ((uVar22 == 0xffffffff) || (*(short *)((long)param_1 + 0x12) != 0)) {
LAB_004f5dc0:
        *(uint *)(param_2 + 0x560) = uVar5;
        uVar22 = uVar5;
LAB_004f5dcc:
        *(uint *)(param_2 + 0x564) = uVar5;
      }
      else if (*(uint *)(param_2 + 0x564) < uVar5) {
        uVar22 = (uVar22 + uVar5) - *(uint *)(param_2 + 0x564);
        *(uint *)(param_2 + 0x560) = uVar22;
        goto LAB_004f5dcc;
      }
      uVar8 = (uint)(ushort)param_1[2] - (uint)*(ushort *)((long)param_1 + 0x12);
      uVar5 = uVar22;
      if (uVar8 <= uVar22) {
        uVar5 = uVar8;
      }
      iVar15 = uVar22 - uVar5;
      *(int *)(param_2 + 0x560) = iVar15;
      iVar9 = (uint)(ushort)param_1[2] - (uint)*(ushort *)((long)param_1 + 0x12);
      if (iVar9 != 0) {
        if ((char)param_1[1] != '\0') {
                    /* WARNING: Subroutine does not return */
          memset((void *)(*param_1 + (ulong)*(ushort *)((long)param_1 + 0x12) * 4),0,
                 (ulong)(uint)(iVar9 * 4));
        }
        *(ushort *)((long)param_1 + 0x12) = (ushort)param_1[2];
        iVar15 = *(int *)(param_2 + 0x560);
      }
      if (iVar15 != 0) {
        *(undefined4 *)((long)param_1 + 0xc) = 0x2d;
      }
    }
    uVar7 = *(ushort *)((long)param_1 + 0x12);
  }
  else {
    *(undefined4 *)(param_2 + 0x560) = 0xffffffff;
    uVar7 = *(ushort *)((long)param_1 + 0x12);
  }
  uVar10 = (ulong)uVar7;
  if (uVar10 < 0x20) {
    return;
  }
  uVar5 = (uint)param_1[1];
  if ((uVar5 & 0xfffff000) == 0x8000) {
    return;
  }
  local_b0 = (void *)((long)param_3 + uVar10 * 8);
  uVar22 = (uint)uVar7;
  uStack_90 = 0x2b00003102;
  uVar8 = uVar5 >> 0xc;
  uStack_a8 = 0x2b00003102;
  local_a0 = uVar7;
  local_9e = uVar7;
  local_98 = param_3;
  local_88 = uVar7;
  local_86 = uVar7;
  switch(*(undefined4 *)(param_2 + 0x4f8)) {
  case 0:
    pvVar11 = (void *)*param_1;
    break;
  case 1:
    pvVar11 = (void *)(*param_1 +
                      (ulong)(((uVar5 ^ 0xffffffff) & 0x5000) == 0) * (ulong)(ushort)param_1[2] * 8)
    ;
    break;
  case 2:
    pvVar11 = (void *)*param_1;
    if (((uVar5 ^ 0xffffffff) & 0x5000) != 0) break;
    FUN_004f7c50(DAT_01d4c1b0,DAT_01d4c1b0,DAT_01d4c1b0,DAT_01d4c1b0,pvVar11,
                 (void *)((long)pvVar11 + (ulong)(ushort)param_1[2] * 8),param_3,uVar10);
    uVar6 = *(uint *)(param_2 + 0x4fc);
    goto joined_r0x004f5f70;
  case 3:
                    /* WARNING: Subroutine does not return */
    memset(param_3,0,uVar10 << 2);
  default:
    goto switchD_004f5ed8_default;
  }
  memcpy(param_3,pvVar11,uVar10 << 2);
switchD_004f5ed8_default:
  uVar6 = *(uint *)(param_2 + 0x4fc);
joined_r0x004f5f70:
  if (3 < uVar6) goto LAB_004f607c;
  param_3 = (void *)((long)param_3 + uVar10 * 4);
  switch(uVar6) {
  case 0:
    pvVar11 = (void *)*param_1;
    if ((uVar5 >> 0xd & 1) != 0) {
      uVar16 = (ulong)(ushort)param_1[2];
LAB_004f606c:
      pvVar11 = (void *)((long)pvVar11 + uVar16 * 4);
    }
    break;
  case 1:
    lVar17 = 8;
    if (((uVar5 ^ 0xffffffff) & 0x6000) != 0) {
      lVar17 = (ulong)((uVar5 - (uVar8 - (uVar8 & 0xfffffff7) >> 3) & 0xff) != 1) << 2;
    }
    pvVar11 = (void *)(*param_1 + lVar17 * (ulong)(ushort)param_1[2]);
    break;
  case 2:
    pvVar11 = (void *)*param_1;
    uVar16 = (ulong)(ushort)param_1[2];
    if (((uVar5 >> 0xe & 1) != 0) && ((uVar5 >> 0xd & 1) != 0)) {
      FUN_004f7c50(DAT_01d4c1b0,DAT_01d4c1b0,DAT_01d4c1b0,DAT_01d4c1b0,
                   (void *)((long)pvVar11 + uVar16 * 4),(void *)((long)pvVar11 + uVar16 * 8),param_3
                   ,uVar10);
      goto LAB_004f607c;
    }
    if ((uVar5 >> 0xd & 1) != 0) goto LAB_004f606c;
    break;
  case 3:
                    /* WARNING: Subroutine does not return */
    memset(param_3,0,uVar10 << 2);
  }
  memcpy(param_3,pvVar11,uVar10 << 2);
LAB_004f607c:
  FUN_004f6b70(param_2,&local_98,&local_b0,(void *)(param_2 + 0x520),(void *)(param_2 + 0x4e0),
               param_2 + 0x500,*(undefined1 *)(param_2 + 0x574));
  uVar6 = uVar8 & 0x210;
  if (uVar6 == 0) {
    fVar30 = 1.0;
    fVar32 = 1.0;
    fVar29 = 1.0;
    fVar31 = 1.0;
  }
  else {
    dVar23 = ((double)*(float *)(param_2 + 0x518) + DAT_01cd5458) * DAT_01cd50c0;
    fVar29 = (float)SQRT(dVar23);
    fVar31 = (float)SQRT(1.0 - dVar23);
    dVar23 = ((double)*(float *)(param_2 + 0x558) + DAT_01cd5458) * DAT_01cd50c0;
    fVar30 = (float)SQRT(dVar23);
    fVar32 = (float)SQRT(1.0 - dVar23);
  }
  pvVar11 = (void *)((long)local_b0 + (ulong)local_a0 * 4);
  if ((uVar8 & 0xfffffff7) == 4) {
    FUN_004f7e30(*(undefined4 *)(param_2 + 0x550),*(undefined4 *)(param_2 + 0x510),
                 *(undefined4 *)(param_2 + 0x554),*(undefined4 *)(param_2 + 0x514),
                 *(undefined4 *)(param_2 + 0x554),*(undefined4 *)(param_2 + 0x514),*param_1,local_b0
                 ,pvVar11,uVar10);
  }
  else if ((uVar5 >> 0xc & 1) != 0) {
    FUN_004f7d40(*(undefined4 *)(param_2 + 0x550),*(undefined4 *)(param_2 + 0x510),
                 *(float *)(param_2 + 0x554) * fVar31,*(float *)(param_2 + 0x514) * fVar32,*param_1,
                 local_b0,uVar10);
    FUN_004f7d40(*(undefined4 *)(param_2 + 0x550),*(undefined4 *)(param_2 + 0x510),
                 *(float *)(param_2 + 0x554) * fVar31,*(float *)(param_2 + 0x514) * fVar32,
                 *param_1 + (ulong)(ushort)param_1[2] * 4,pvVar11,uVar10);
  }
  if (uVar6 != 0) {
    uVar4 = uVar5 >> 0xe & 1 | 2;
    FUN_004f5b60(fVar29,fVar30,&local_98,&local_b0,param_1,param_2,uVar4,1);
    if (uVar6 == 0x210) {
      FUN_004f5b60(fVar29,fVar30,&local_98,&local_b0,param_1,param_2,uVar4 + 2,2);
    }
  }
  if (((uVar5 >> 0xe & 1) != 0) && ((uVar8 & 0xfffffff7) != 4)) {
    fVar29 = *(float *)(param_2 + 0x550);
    uVar12 = (ulong)(ushort)param_1[2];
    uVar16 = *param_1;
    lVar17 = uVar12 * 8;
    pfVar13 = (float *)(uVar16 + lVar17);
    if (*(float *)(param_2 + 0x510) == fVar29) {
      if (fVar29 != 1.0) {
        pfVar2 = pfVar13 + uVar10;
        if ((uVar7 & 0xfffc) != 0) {
          pfVar14 = pfVar13 + (uVar22 & 0xfffc);
          pfVar18 = pfVar13 + 4;
          pfVar19 = (float *)(uVar16 + lVar17 + (ulong)((uVar22 & 0xfffc) << 2));
          pfVar21 = pfVar14;
          if (pfVar14 <= pfVar18) {
            pfVar21 = pfVar18;
          }
          if (pfVar19 <= pfVar18) {
            pfVar19 = pfVar18;
          }
          uVar12 = (long)pfVar19 + ~uVar16 + uVar12 * -8;
          uVar5 = ((uint)(uVar12 >> 4) & 0xfffffff) + 1;
          if ((uVar5 & 3) == 0) {
            pfVar18 = pfVar13;
          }
          else {
            lVar20 = -((ulong)uVar5 & 3);
            pfVar19 = pfVar13;
            do {
              pfVar18 = pfVar19 + 4;
              lVar20 = lVar20 + 1;
              *(ulong *)(pfVar19 + 2) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20) * fVar29,
                            (float)*(undefined8 *)(pfVar19 + 2) * fVar29);
              *(ulong *)pfVar19 =
                   CONCAT44((float)((ulong)*(undefined8 *)pfVar19 >> 0x20) * fVar29,
                            (float)*(undefined8 *)pfVar19 * fVar29);
              pfVar19 = pfVar18;
            } while (lVar20 != 0);
          }
          if (0x2f < uVar12) {
            do {
              *(ulong *)(pfVar18 + 2) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar18 + 2) >> 0x20) * fVar29,
                            (float)*(undefined8 *)(pfVar18 + 2) * fVar29);
              *(ulong *)pfVar18 =
                   CONCAT44((float)((ulong)*(undefined8 *)pfVar18 >> 0x20) * fVar29,
                            (float)*(undefined8 *)pfVar18 * fVar29);
              *(ulong *)(pfVar18 + 6) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar18 + 6) >> 0x20) * fVar29,
                            (float)*(undefined8 *)(pfVar18 + 6) * fVar29);
              *(ulong *)(pfVar18 + 4) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar18 + 4) >> 0x20) * fVar29,
                            (float)*(undefined8 *)(pfVar18 + 4) * fVar29);
              *(ulong *)(pfVar18 + 10) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar18 + 10) >> 0x20) * fVar29,
                            (float)*(undefined8 *)(pfVar18 + 10) * fVar29);
              *(ulong *)(pfVar18 + 8) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar18 + 8) >> 0x20) * fVar29,
                            (float)*(undefined8 *)(pfVar18 + 8) * fVar29);
              *(ulong *)(pfVar18 + 0xe) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar18 + 0xe) >> 0x20) * fVar29,
                            (float)*(undefined8 *)(pfVar18 + 0xe) * fVar29);
              *(ulong *)(pfVar18 + 0xc) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar18 + 0xc) >> 0x20) * fVar29,
                            (float)*(undefined8 *)(pfVar18 + 0xc) * fVar29);
              pfVar18 = pfVar18 + 0x10;
            } while (pfVar18 < pfVar14);
          }
          pfVar13 = (float *)((long)pfVar13 +
                             ((long)pfVar21 + ~(ulong)pfVar13 & 0xfffffffffffffff0) + 0x10);
        }
        if (pfVar13 < pfVar2) {
          uVar16 = uVar16 + ((lVar17 + uVar10 * 4 + -1) - (long)pfVar13);
          uVar5 = ((uint)(uVar16 >> 2) & 0x3fffffff) + 1;
          if ((uVar5 & 3) != 0) {
            lVar17 = -((ulong)uVar5 & 3);
            pfVar14 = pfVar13;
            do {
              lVar17 = lVar17 + 1;
              pfVar13 = pfVar14 + 1;
              *pfVar14 = *pfVar14 * fVar29;
              pfVar14 = pfVar13;
            } while (lVar17 != 0);
          }
          if (0xb < uVar16) {
            do {
              pfVar13[1] = pfVar13[1] * fVar29;
              *pfVar13 = *pfVar13 * fVar29;
              pfVar13[3] = pfVar13[3] * fVar29;
              pfVar13[2] = pfVar13[2] * fVar29;
              pfVar13 = pfVar13 + 4;
            } while (pfVar13 < pfVar2);
          }
        }
      }
    }
    else {
      fVar30 = *(float *)(param_2 + 0x510) - fVar29;
      pfVar2 = pfVar13 + uVar10;
      uVar5 = uVar22 & 0xfffc;
      if ((uVar7 & 0xfffc) != 0) {
        fVar25 = fVar30 / (float)uVar5;
        fVar31 = fVar25 + fVar29;
        fVar32 = fVar31 + fVar25;
        fVar24 = fVar25 * 4.0;
        fVar25 = fVar32 + fVar25;
        pfVar14 = pfVar13 + uVar5;
        pfVar18 = pfVar13 + 4;
        pfVar19 = (float *)(uVar16 + lVar17 + (ulong)(uVar5 << 2));
        pfVar21 = pfVar14;
        if (pfVar14 <= pfVar18) {
          pfVar21 = pfVar18;
        }
        if (pfVar19 <= pfVar18) {
          pfVar19 = pfVar18;
        }
        uVar12 = (long)pfVar19 + ~uVar16 + uVar12 * -8;
        fVar26 = fVar29;
        pfVar18 = pfVar13;
        if (((uint)uVar12 >> 4 & 1) == 0) {
          fVar26 = (float)((ulong)*(undefined8 *)pfVar13 >> 0x20) * fVar31;
          fVar27 = (float)*(undefined8 *)(pfVar13 + 2) * fVar32;
          fVar28 = (float)((ulong)*(undefined8 *)(pfVar13 + 2) >> 0x20) * fVar25;
          fVar31 = fVar31 + fVar24;
          fVar32 = fVar32 + fVar24;
          fVar25 = fVar25 + fVar24;
          *(ulong *)(pfVar13 + 2) = CONCAT44(fVar28,fVar27);
          *(ulong *)pfVar13 = CONCAT44(fVar26,(float)*(undefined8 *)pfVar13 * fVar29);
          fVar26 = fVar29 + fVar24;
          pfVar18 = pfVar13 + 4;
        }
        if (0xf < uVar12) {
          do {
            pfVar19 = pfVar18 + 8;
            *(ulong *)(pfVar18 + 2) =
                 CONCAT44((float)((ulong)*(undefined8 *)(pfVar18 + 2) >> 0x20) * fVar25,
                          (float)*(undefined8 *)(pfVar18 + 2) * fVar32);
            *(ulong *)pfVar18 =
                 CONCAT44((float)((ulong)*(undefined8 *)pfVar18 >> 0x20) * fVar31,
                          (float)*(undefined8 *)pfVar18 * fVar26);
            *(ulong *)(pfVar18 + 6) =
                 CONCAT44((float)((ulong)*(undefined8 *)(pfVar18 + 6) >> 0x20) * (fVar25 + fVar24),
                          (float)*(undefined8 *)(pfVar18 + 6) * (fVar32 + fVar24));
            *(ulong *)(pfVar18 + 4) =
                 CONCAT44((float)((ulong)*(undefined8 *)(pfVar18 + 4) >> 0x20) * (fVar31 + fVar24),
                          (float)*(undefined8 *)(pfVar18 + 4) * (fVar26 + fVar24));
            fVar26 = fVar26 + fVar24 + fVar24;
            fVar31 = fVar31 + fVar24 + fVar24;
            fVar32 = fVar32 + fVar24 + fVar24;
            fVar25 = fVar25 + fVar24 + fVar24;
            pfVar18 = pfVar19;
          } while (pfVar19 < pfVar14);
        }
        pfVar13 = (float *)((long)pfVar13 +
                           ((long)pfVar21 + ~(ulong)pfVar13 & 0xfffffffffffffff0) + 0x10);
      }
      if (pfVar13 < pfVar2) {
        fVar30 = fVar30 / (float)uVar10;
        uVar16 = uVar16 + ((lVar17 + uVar10 * 4 + -1) - (long)pfVar13);
        pfVar14 = pfVar13;
        if (((uint)uVar16 >> 2 & 1) == 0) {
          fVar31 = *pfVar13 * fVar29;
          fVar29 = fVar29 + fVar30;
          pfVar14 = pfVar13 + 1;
          *pfVar13 = fVar31;
        }
        if (3 < uVar16) {
          do {
            fVar32 = *pfVar14 * fVar29;
            fVar31 = fVar29 + fVar30;
            fVar29 = fVar31 + fVar30;
            pfVar13 = pfVar14 + 2;
            *pfVar14 = fVar32;
            pfVar14[1] = pfVar14[1] * fVar31;
            pfVar14 = pfVar13;
          } while (pfVar13 < pfVar2);
        }
      }
    }
  }
  if (((uint)param_1[1] >> 0xf & 1) != 0) {
    uVar16 = *param_1;
    uVar12 = (ulong)(((uint)param_1[1] & 0xff) - 1) * (ulong)(ushort)param_1[2] * 4;
    pfVar13 = (float *)(uVar16 + uVar12);
    if (pfVar13 != (float *)0x0) {
      fVar29 = *(float *)(param_2 + 0x550);
      fVar30 = *(float *)(param_2 + 0x510);
      if (fVar30 == fVar29) {
        if (fVar29 != 1.0) {
          pfVar2 = pfVar13 + uVar10;
          if ((3 < uVar22) && ((uVar7 & 0xfffc) != 0)) {
            pfVar14 = pfVar13 + (uVar22 & 0xfffc);
            uVar3 = uVar16 + uVar12 + ((uVar22 & 0xfffc) << 2);
            uVar1 = uVar16 + uVar12 + 0x10;
            pfVar18 = pfVar14;
            if (pfVar14 <= pfVar13 + 4) {
              pfVar18 = pfVar13 + 4;
            }
            if (uVar3 <= uVar1) {
              uVar3 = uVar1;
            }
            uVar3 = uVar3 + (~uVar12 - uVar16);
            uVar5 = ((uint)(uVar3 >> 4) & 0xfffffff) + 1;
            if ((uVar5 & 3) == 0) {
              pfVar19 = pfVar13;
            }
            else {
              lVar17 = -((ulong)uVar5 & 3);
              pfVar21 = pfVar13;
              do {
                pfVar19 = pfVar21 + 4;
                lVar17 = lVar17 + 1;
                *(ulong *)(pfVar21 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20) * fVar29,
                              (float)*(undefined8 *)(pfVar21 + 2) * fVar29);
                *(ulong *)pfVar21 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar21 >> 0x20) * fVar29,
                              (float)*(undefined8 *)pfVar21 * fVar29);
                pfVar21 = pfVar19;
              } while (lVar17 != 0);
            }
            if (0x2f < uVar3) {
              do {
                *(ulong *)(pfVar19 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20) * fVar29,
                              (float)*(undefined8 *)(pfVar19 + 2) * fVar29);
                *(ulong *)pfVar19 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar19 >> 0x20) * fVar29,
                              (float)*(undefined8 *)pfVar19 * fVar29);
                *(ulong *)(pfVar19 + 6) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 6) >> 0x20) * fVar29,
                              (float)*(undefined8 *)(pfVar19 + 6) * fVar29);
                *(ulong *)(pfVar19 + 4) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 4) >> 0x20) * fVar29,
                              (float)*(undefined8 *)(pfVar19 + 4) * fVar29);
                *(ulong *)(pfVar19 + 10) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 10) >> 0x20) * fVar29,
                              (float)*(undefined8 *)(pfVar19 + 10) * fVar29);
                *(ulong *)(pfVar19 + 8) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 8) >> 0x20) * fVar29,
                              (float)*(undefined8 *)(pfVar19 + 8) * fVar29);
                *(ulong *)(pfVar19 + 0xe) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 0xe) >> 0x20) * fVar29,
                              (float)*(undefined8 *)(pfVar19 + 0xe) * fVar29);
                *(ulong *)(pfVar19 + 0xc) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 0xc) >> 0x20) * fVar29,
                              (float)*(undefined8 *)(pfVar19 + 0xc) * fVar29);
                pfVar19 = pfVar19 + 0x10;
              } while (pfVar19 < pfVar14);
            }
            pfVar13 = (float *)((long)pfVar13 +
                               ((long)pfVar18 + ~(ulong)pfVar13 & 0xfffffffffffffff0) + 0x10);
          }
          if (pfVar13 < pfVar2) {
            uVar16 = uVar16 + ((uVar12 + uVar10 * 4 + -1) - (long)pfVar13);
            uVar5 = ((uint)(uVar16 >> 2) & 0x3fffffff) + 1;
            if ((uVar5 & 3) != 0) {
              lVar17 = -((ulong)uVar5 & 3);
              pfVar14 = pfVar13;
              do {
                lVar17 = lVar17 + 1;
                pfVar13 = pfVar14 + 1;
                *pfVar14 = *pfVar14 * fVar29;
                pfVar14 = pfVar13;
              } while (lVar17 != 0);
            }
            if (0xb < uVar16) {
              do {
                pfVar13[1] = pfVar13[1] * fVar29;
                *pfVar13 = *pfVar13 * fVar29;
                pfVar13[3] = pfVar13[3] * fVar29;
                pfVar13[2] = pfVar13[2] * fVar29;
                pfVar13 = pfVar13 + 4;
              } while (pfVar13 < pfVar2);
            }
          }
        }
      }
      else {
        pfVar2 = pfVar13 + uVar10;
        if ((3 < uVar22) && (uVar22 = uVar22 & 0xfffc, (uVar7 & 0xfffc) != 0)) {
          fVar25 = (fVar30 - fVar29) / (float)uVar22;
          fVar31 = fVar25 + fVar29;
          fVar32 = fVar31 + fVar25;
          fVar24 = fVar25 * 4.0;
          fVar25 = fVar32 + fVar25;
          pfVar14 = pfVar13 + uVar22;
          uVar3 = uVar16 + uVar12 + (uVar22 << 2);
          uVar1 = uVar16 + uVar12 + 0x10;
          pfVar18 = pfVar14;
          if (pfVar14 <= pfVar13 + 4) {
            pfVar18 = pfVar13 + 4;
          }
          if (uVar3 <= uVar1) {
            uVar3 = uVar1;
          }
          uVar3 = uVar3 + (~uVar12 - uVar16);
          pfVar19 = pfVar13;
          fVar26 = fVar29;
          if (((uint)uVar3 >> 4 & 1) == 0) {
            fVar26 = (float)((ulong)*(undefined8 *)pfVar13 >> 0x20) * fVar31;
            fVar27 = (float)*(undefined8 *)(pfVar13 + 2) * fVar32;
            fVar28 = (float)((ulong)*(undefined8 *)(pfVar13 + 2) >> 0x20) * fVar25;
            fVar31 = fVar31 + fVar24;
            fVar32 = fVar32 + fVar24;
            fVar25 = fVar25 + fVar24;
            *(ulong *)(pfVar13 + 2) = CONCAT44(fVar28,fVar27);
            *(ulong *)pfVar13 = CONCAT44(fVar26,(float)*(undefined8 *)pfVar13 * fVar29);
            pfVar19 = pfVar13 + 4;
            fVar26 = fVar29 + fVar24;
          }
          if (0xf < uVar3) {
            do {
              pfVar21 = pfVar19 + 8;
              *(ulong *)(pfVar19 + 2) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20) * fVar25,
                            (float)*(undefined8 *)(pfVar19 + 2) * fVar32);
              *(ulong *)pfVar19 =
                   CONCAT44((float)((ulong)*(undefined8 *)pfVar19 >> 0x20) * fVar31,
                            (float)*(undefined8 *)pfVar19 * fVar26);
              *(ulong *)(pfVar19 + 6) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 6) >> 0x20) * (fVar25 + fVar24)
                            ,(float)*(undefined8 *)(pfVar19 + 6) * (fVar32 + fVar24));
              *(ulong *)(pfVar19 + 4) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 4) >> 0x20) * (fVar31 + fVar24)
                            ,(float)*(undefined8 *)(pfVar19 + 4) * (fVar26 + fVar24));
              fVar26 = fVar26 + fVar24 + fVar24;
              fVar31 = fVar31 + fVar24 + fVar24;
              fVar32 = fVar32 + fVar24 + fVar24;
              fVar25 = fVar25 + fVar24 + fVar24;
              pfVar19 = pfVar21;
            } while (pfVar21 < pfVar14);
          }
          pfVar13 = (float *)((long)pfVar13 +
                             ((long)pfVar18 + ~(ulong)pfVar13 & 0xfffffffffffffff0) + 0x10);
        }
        if (pfVar13 < pfVar2) {
          fVar30 = (fVar30 - fVar29) / (float)uVar10;
          uVar16 = uVar16 + ((uVar12 + uVar10 * 4 + -1) - (long)pfVar13);
          pfVar14 = pfVar13;
          if (((uint)uVar16 >> 2 & 1) == 0) {
            fVar31 = *pfVar13 * fVar29;
            fVar29 = fVar29 + fVar30;
            pfVar14 = pfVar13 + 1;
            *pfVar13 = fVar31;
          }
          if (3 < uVar16) {
            do {
              fVar32 = *pfVar14 * fVar29;
              fVar31 = fVar29 + fVar30;
              fVar29 = fVar31 + fVar30;
              pfVar13 = pfVar14 + 2;
              *pfVar14 = fVar32;
              pfVar14[1] = pfVar14[1] * fVar31;
              pfVar14 = pfVar13;
            } while (pfVar13 < pfVar2);
          }
        }
      }
    }
  }
  memcpy((void *)(param_2 + 0x520),(void *)(param_2 + 0x4e0),0x3e);
  return;
}


