/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a5ee0; name: FUN_006a5ee0
 */


/* WARNING: Removing unreachable block (ram,0x006a67cc) */
/* WARNING: Removing unreachable block (ram,0x006a63c8) */
/* WARNING: Removing unreachable block (ram,0x006a61d4) */
/* WARNING: Removing unreachable block (ram,0x006a642c) */
/* WARNING: Removing unreachable block (ram,0x006a64d8) */
/* WARNING: Removing unreachable block (ram,0x006a6720) */
/* WARNING: Removing unreachable block (ram,0x006a66bc) */
/* WARNING: Removing unreachable block (ram,0x006a6a00) */
/* WARNING: Removing unreachable block (ram,0x006a699c) */

void FUN_006a5ee0(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  undefined4 uVar27;
  undefined8 local_90;
  ulong uStack_88;
  
  puVar7 = PTR_PTR_02715108;
  lVar11 = *(long *)(param_2 + 0x18);
  puVar6 = PTR_PTR_02715108;
  for (lVar24 = *(long *)(param_2 + 0x10); PTR_PTR_02715108 = puVar6, lVar24 != lVar11;
      lVar24 = lVar24 + 0x58) {
    if ((ulong)((param_3[1] - *param_3 >> 3) * -0x30c30c30c30c30c3) <=
        (ulong)(long)*(int *)(lVar24 + 8)) goto LAB_006a6a8c;
    puVar18 = (undefined1 *)(*param_3 + (long)*(int *)(lVar24 + 8) * 0xa8);
    *puVar18 = 1;
    if ((ulong)((*(long *)(puVar18 + 0x10) - *(long *)(puVar18 + 8) >> 2) * -0x5555555555555555) <=
        (ulong)*(uint *)(lVar24 + 0xc)) goto LAB_006a6a94;
    puVar16 = (uint *)(*(long *)(puVar18 + 8) + (ulong)*(uint *)(lVar24 + 0xc) * 0xc);
    uVar27 = 0;
    if (*(char *)(lVar24 + 0x51) != '\0') {
      uVar27 = 0x3f800000;
    }
    local_90._4_4_ = (undefined4)((ulong)local_90 >> 0x20);
    local_90 = CONCAT44(local_90._4_4_,uVar27);
    pcVar10 = *(code **)(puVar7 + (ulong)*puVar16 * 0x10);
    uVar23 = *(ulong *)((long)(puVar7 + (ulong)*puVar16 * 0x10) + 8);
    plVar25 = (long *)((long)puVar16 + ((long)uVar23 >> 1));
    if ((uVar23 & 1) != 0) {
      pcVar10 = *(code **)(pcVar10 + *plVar25);
    }
    (*pcVar10)(param_1,plVar25,&local_90);
    puVar6 = PTR_PTR_02715108;
  }
  lVar11 = *(long *)(param_2 + 0x48);
  puVar7 = PTR_PTR_02715110;
  for (lVar24 = *(long *)(param_2 + 0x40); PTR_PTR_02715110 = puVar7, lVar24 != lVar11;
      lVar24 = lVar24 + 0x58) {
    if ((ulong)((param_3[1] - *param_3 >> 3) * -0x30c30c30c30c30c3) <=
        (ulong)(long)*(int *)(lVar24 + 8)) goto LAB_006a6a8c;
    lVar9 = *param_3 + (long)*(int *)(lVar24 + 8) * 0xa8;
    *(undefined1 *)(lVar9 + 0x38) = 1;
    if ((ulong)((*(long *)(lVar9 + 0x48) - *(long *)(lVar9 + 0x40) >> 2) * -0x5555555555555555) <=
        (ulong)*(uint *)(lVar24 + 0xc)) goto LAB_006a6a94;
    puVar16 = (uint *)(*(long *)(lVar9 + 0x40) + (ulong)*(uint *)(lVar24 + 0xc) * 0xc);
    pcVar10 = *(code **)(puVar6 + (ulong)*puVar16 * 0x10);
    uVar23 = *(ulong *)((long)(puVar6 + (ulong)*puVar16 * 0x10) + 8);
    plVar25 = (long *)((long)puVar16 + ((long)uVar23 >> 1));
    if ((uVar23 & 1) != 0) {
      pcVar10 = *(code **)(pcVar10 + *plVar25);
    }
    (*pcVar10)(param_1,plVar25,lVar24 + 0x54);
    puVar7 = PTR_PTR_02715110;
  }
  lVar24 = *(long *)(param_2 + 0x70);
  lVar11 = *(long *)(param_2 + 0x78);
  do {
    if (lVar24 == lVar11) {
      lVar24 = *(long *)(param_2 + 0xa0);
      if (*(long *)(param_2 + 0xa8) != lVar24) {
        uVar23 = 0;
        do {
          plVar25 = (long *)(lVar24 + uVar23 * 0xa8);
          lVar11 = plVar25[1];
          lVar9 = *plVar25;
          if (lVar11 != lVar9) {
            lVar12 = 0;
            uVar20 = 0;
LAB_006a6180:
            bVar3 = *(byte *)(lVar9 + uVar20);
            if (bVar3 == 0) goto code_r0x006a6188;
            uVar15 = (uint)bVar3 & -(uint)bVar3;
            if (uVar15 == 1) {
              lVar11 = 0;
              if (lVar12 != 1) goto LAB_006a620c;
              goto LAB_006a6464;
            }
            iVar17 = 0;
            iVar19 = 4;
            do {
              uVar4 = (uVar15 & 0xff) >> iVar19;
              iVar5 = 0;
              if ((uVar4 & 0xff) != 0) {
                uVar15 = uVar4;
                iVar5 = iVar19;
              }
              iVar19 = iVar19 >> 1;
              iVar17 = iVar5 + iVar17;
            } while ((uVar15 & 0xff) != 1);
            lVar11 = (long)iVar17;
            if (lVar11 + 1 == lVar12) goto LAB_006a6464;
LAB_006a620c:
            uVar20 = lVar11 - lVar12;
            do {
              while( true ) {
                piVar13 = *(int **)(*(long *)(*(long *)(param_4 + 0x218) + 0x290) + uVar23 * 0x4c0 +
                                   0x40);
                puVar16 = (uint *)((long)piVar13 +
                                  (ulong)*(ushort *)((long)piVar13 + (0x1c - (long)*piVar13)));
                puVar16 = (uint *)((long)puVar16 + (uVar20 & 0xffffffff) * 4 + (ulong)*puVar16 + 4);
                piVar13 = (int *)((long)puVar16 + (ulong)*puVar16);
                if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 7) ||
                   (uVar14 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[3], uVar14 == 0)) {
                  bVar8 = false;
                }
                else {
                  bVar8 = *(char *)((long)piVar13 + uVar14) != '\0';
                }
                if ((ulong)((param_3[1] - *param_3 >> 3) * -0x30c30c30c30c30c3) <= uVar23)
                goto LAB_006a6a8c;
                lVar11 = *param_3 + uVar23 * 0xa8;
                *(undefined1 *)(lVar11 + 0x38) = 1;
                if ((ulong)((*(long *)(lVar11 + 0x10) - *(long *)(lVar11 + 8) >> 2) *
                           -0x5555555555555555) <= (uVar20 & 0xffffffff)) goto LAB_006a6a94;
                puVar16 = (uint *)(*(long *)(lVar11 + 8) + (uVar20 & 0xffffffff) * 0xc);
                uVar27 = 0x3f800000;
                if (!bVar8) {
                  uVar27 = 0;
                }
                local_90 = CONCAT44(local_90._4_4_,uVar27);
                pcVar10 = *(code **)(PTR_PTR_02715108 + (ulong)*puVar16 * 0x10);
                uVar14 = *(ulong *)((long)(PTR_PTR_02715108 + (ulong)*puVar16 * 0x10) + 8);
                plVar26 = (long *)((long)puVar16 + ((long)uVar14 >> 1));
                if ((uVar14 & 1) != 0) {
                  pcVar10 = *(code **)(pcVar10 + *plVar26);
                }
                (*pcVar10)(param_1,plVar26,&local_90);
                lVar11 = *(long *)(lVar24 + uVar23 * 0xa8 + 0x30);
                if ((lVar11 == 0) || (lVar11 - 1U <= uVar20)) goto LAB_006a6464;
                lVar11 = *plVar25;
                uVar14 = uVar20 + 1;
                uVar22 = uVar14 >> 3;
                bVar3 = *(byte *)(lVar11 + uVar22) >> (ulong)((uint)uVar14 & 7);
                if (bVar3 != 0) break;
                uVar20 = uVar22 + 1;
                uVar21 = plVar25[1] - lVar11;
                if (uVar21 <= uVar20) goto LAB_006a6464;
                uVar14 = uVar22 * 8;
                while( true ) {
                  uVar14 = uVar14 + 8;
                  bVar3 = *(byte *)(lVar11 + uVar20);
                  if (bVar3 != 0) break;
                  uVar20 = uVar20 + 1;
                  if (uVar21 <= uVar20) goto LAB_006a6464;
                }
                uVar15 = (uint)bVar3 & -(uint)bVar3;
                uVar20 = uVar14;
                if (uVar15 != 1) {
                  iVar17 = 0;
                  iVar19 = 4;
                  do {
                    uVar4 = (uVar15 & 0xff) >> iVar19;
                    iVar5 = 0;
                    if ((uVar4 & 0xff) != 0) {
                      uVar15 = uVar4;
                      iVar5 = iVar19;
                    }
                    iVar19 = iVar19 >> 1;
                    iVar17 = iVar5 + iVar17;
                  } while ((uVar15 & 0xff) != 1);
                  goto LAB_006a6454;
                }
joined_r0x006a6460:
                if (uVar20 == 0xffffffffffffffff) goto LAB_006a6464;
              }
              uVar15 = -(uint)bVar3 & (uint)bVar3;
              if (uVar15 != 1) {
                iVar17 = 0;
                iVar19 = 4;
                do {
                  uVar4 = (uVar15 & 0xff) >> iVar19;
                  iVar5 = 0;
                  if ((uVar4 & 0xff) != 0) {
                    uVar15 = uVar4;
                    iVar5 = iVar19;
                  }
                  iVar19 = iVar19 >> 1;
                  iVar17 = iVar5 + iVar17;
                } while ((uVar15 & 0xff) != 1);
LAB_006a6454:
                uVar20 = (long)iVar17 + uVar14;
                goto joined_r0x006a6460;
              }
              bVar8 = uVar20 != 0xfffffffffffffffe;
              uVar20 = uVar14;
            } while (bVar8);
          }
LAB_006a6464:
          lVar11 = lVar24 + uVar23 * 0xa8;
          plVar25 = (long *)(lVar11 + 0x38);
          lVar9 = *plVar25;
          plVar26 = (long *)(lVar11 + 0x40);
          lVar11 = *plVar26;
          if (lVar11 != lVar9) {
            lVar12 = 0;
            uVar20 = 0;
LAB_006a6484:
            bVar3 = *(byte *)(lVar9 + uVar20);
            if (bVar3 == 0) goto code_r0x006a648c;
            uVar15 = (uint)bVar3 & -(uint)bVar3;
            if (uVar15 == 1) {
              lVar11 = 0;
              if (lVar12 != 1) goto LAB_006a6510;
              goto LAB_006a6758;
            }
            iVar17 = 0;
            iVar19 = 4;
            do {
              uVar4 = (uVar15 & 0xff) >> iVar19;
              iVar5 = 0;
              if ((uVar4 & 0xff) != 0) {
                uVar15 = uVar4;
                iVar5 = iVar19;
              }
              iVar19 = iVar19 >> 1;
              iVar17 = iVar5 + iVar17;
            } while ((uVar15 & 0xff) != 1);
            lVar11 = (long)iVar17;
            if (lVar11 + 1 == lVar12) goto LAB_006a6758;
LAB_006a6510:
            uVar20 = lVar11 - lVar12;
            do {
              while( true ) {
                piVar13 = *(int **)(*(long *)(*(long *)(param_4 + 0x218) + 0x290) + uVar23 * 0x4c0 +
                                   0x40);
                puVar16 = (uint *)((long)piVar13 +
                                  (ulong)*(ushort *)((long)piVar13 + (0x1e - (long)*piVar13)));
                puVar16 = (uint *)((long)puVar16 + (uVar20 & 0xffffffff) * 4 + (ulong)*puVar16 + 4);
                piVar13 = (int *)((long)puVar16 + (ulong)*puVar16);
                uVar27 = 0;
                if (6 < *(ushort *)((long)piVar13 - (long)*piVar13)) {
                  uVar14 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[3];
                  uVar27 = 0;
                  if (uVar14 != 0) {
                    uVar27 = *(undefined4 *)((long)piVar13 + uVar14);
                  }
                }
                local_90 = CONCAT44(local_90._4_4_,uVar27);
                if ((ulong)((param_3[1] - *param_3 >> 3) * -0x30c30c30c30c30c3) <= uVar23)
                goto LAB_006a6a8c;
                lVar11 = *param_3 + uVar23 * 0xa8;
                *(undefined1 *)(lVar11 + 0x38) = 1;
                if ((ulong)((*(long *)(lVar11 + 0x48) - *(long *)(lVar11 + 0x40) >> 2) *
                           -0x5555555555555555) <= (uVar20 & 0xffffffff)) goto LAB_006a6a94;
                puVar16 = (uint *)(*(long *)(lVar11 + 0x40) + (uVar20 & 0xffffffff) * 0xc);
                pcVar10 = *(code **)(PTR_PTR_02715108 + (ulong)*puVar16 * 0x10);
                uVar14 = *(ulong *)((long)(PTR_PTR_02715108 + (ulong)*puVar16 * 0x10) + 8);
                plVar2 = (long *)((long)puVar16 + ((long)uVar14 >> 1));
                if ((uVar14 & 1) != 0) {
                  pcVar10 = *(code **)(pcVar10 + *plVar2);
                }
                (*pcVar10)(param_1,plVar2,&local_90);
                lVar11 = *(long *)(lVar24 + uVar23 * 0xa8 + 0x68);
                if ((lVar11 == 0) || (lVar11 - 1U <= uVar20)) goto LAB_006a6758;
                lVar11 = *plVar25;
                uVar14 = uVar20 + 1;
                uVar22 = uVar14 >> 3;
                bVar3 = *(byte *)(lVar11 + uVar22) >> (ulong)((uint)uVar14 & 7);
                if (bVar3 != 0) break;
                uVar20 = uVar22 + 1;
                uVar21 = *plVar26 - lVar11;
                if (uVar21 <= uVar20) goto LAB_006a6758;
                uVar14 = uVar22 * 8;
                while( true ) {
                  uVar14 = uVar14 + 8;
                  bVar3 = *(byte *)(lVar11 + uVar20);
                  if (bVar3 != 0) break;
                  uVar20 = uVar20 + 1;
                  if (uVar21 <= uVar20) goto LAB_006a6758;
                }
                uVar15 = (uint)bVar3 & -(uint)bVar3;
                uVar20 = uVar14;
                if (uVar15 != 1) {
                  iVar17 = 0;
                  iVar19 = 4;
                  do {
                    uVar4 = (uVar15 & 0xff) >> iVar19;
                    iVar5 = 0;
                    if ((uVar4 & 0xff) != 0) {
                      uVar15 = uVar4;
                      iVar5 = iVar19;
                    }
                    iVar19 = iVar19 >> 1;
                    iVar17 = iVar5 + iVar17;
                  } while ((uVar15 & 0xff) != 1);
                  goto LAB_006a6748;
                }
joined_r0x006a6754:
                if (uVar20 == 0xffffffffffffffff) goto LAB_006a6758;
              }
              uVar15 = -(uint)bVar3 & (uint)bVar3;
              if (uVar15 != 1) {
                iVar17 = 0;
                iVar19 = 4;
                do {
                  uVar4 = (uVar15 & 0xff) >> iVar19;
                  iVar5 = 0;
                  if ((uVar4 & 0xff) != 0) {
                    uVar15 = uVar4;
                    iVar5 = iVar19;
                  }
                  iVar19 = iVar19 >> 1;
                  iVar17 = iVar5 + iVar17;
                } while ((uVar15 & 0xff) != 1);
LAB_006a6748:
                uVar20 = (long)iVar17 + uVar14;
                goto joined_r0x006a6754;
              }
              bVar8 = uVar20 != 0xfffffffffffffffe;
              uVar20 = uVar14;
            } while (bVar8);
          }
LAB_006a6758:
          lVar11 = lVar24 + uVar23 * 0xa8;
          plVar25 = (long *)(lVar11 + 0x70);
          lVar9 = *plVar25;
          plVar26 = (long *)(lVar11 + 0x78);
          lVar11 = *plVar26;
          if (lVar11 != lVar9) {
            lVar12 = 0;
            uVar20 = 0;
LAB_006a6778:
            bVar3 = *(byte *)(lVar9 + uVar20);
            if (bVar3 == 0) goto code_r0x006a6780;
            uVar15 = (uint)bVar3 & -(uint)bVar3;
            if (uVar15 == 1) {
              lVar11 = 0;
              if (lVar12 != 1) goto LAB_006a6804;
              goto LAB_006a6a38;
            }
            iVar17 = 0;
            iVar19 = 4;
            do {
              uVar4 = (uVar15 & 0xff) >> iVar19;
              iVar5 = 0;
              if ((uVar4 & 0xff) != 0) {
                uVar15 = uVar4;
                iVar5 = iVar19;
              }
              iVar19 = iVar19 >> 1;
              iVar17 = iVar5 + iVar17;
            } while ((uVar15 & 0xff) != 1);
            lVar11 = (long)iVar17;
            if (lVar11 + 1 == lVar12) goto LAB_006a6a38;
LAB_006a6804:
            uVar20 = lVar11 - lVar12;
            do {
              while( true ) {
                piVar13 = *(int **)(*(long *)(*(long *)(param_4 + 0x218) + 0x290) + uVar23 * 0x4c0 +
                                   0x40);
                puVar16 = (uint *)((long)piVar13 +
                                  (ulong)*(ushort *)((long)piVar13 + (0x20 - (long)*piVar13)));
                puVar16 = (uint *)((long)puVar16 + (uVar20 & 0xffffffff) * 4 + (ulong)*puVar16 + 4);
                piVar13 = (int *)((long)puVar16 + (ulong)*puVar16);
                puVar1 = (undefined8 *)
                         ((long)piVar13 + (ulong)*(ushort *)((long)piVar13 + (6 - (long)*piVar13)));
                local_90 = *puVar1;
                uStack_88 = (ulong)*(uint *)(puVar1 + 1);
                if ((ulong)((param_3[1] - *param_3 >> 3) * -0x30c30c30c30c30c3) <= uVar23)
                goto LAB_006a6a8c;
                lVar11 = *param_3 + uVar23 * 0xa8;
                *(undefined1 *)(lVar11 + 0x70) = 1;
                if ((ulong)(*(long *)(lVar11 + 0x80) - *(long *)(lVar11 + 0x78) >> 5) <=
                    (uVar20 & 0xffffffff)) goto LAB_006a6a94;
                puVar16 = (uint *)(*(long *)(lVar11 + 0x78) + (uVar20 & 0xffffffff) * 0x20);
                pcVar10 = *(code **)(PTR_PTR_02715110 + (ulong)*puVar16 * 0x10);
                uVar14 = *(ulong *)((long)(PTR_PTR_02715110 + (ulong)*puVar16 * 0x10) + 8);
                plVar2 = (long *)((long)puVar16 + ((long)uVar14 >> 1));
                if ((uVar14 & 1) != 0) {
                  pcVar10 = *(code **)(pcVar10 + *plVar2);
                }
                (*pcVar10)(param_1,plVar2,&local_90);
                lVar11 = *(long *)(lVar24 + uVar23 * 0xa8 + 0xa0);
                if ((lVar11 == 0) || (lVar11 - 1U <= uVar20)) goto LAB_006a6a38;
                lVar11 = *plVar25;
                uVar14 = uVar20 + 1;
                uVar22 = uVar14 >> 3;
                bVar3 = *(byte *)(lVar11 + uVar22) >> (ulong)((uint)uVar14 & 7);
                if (bVar3 != 0) break;
                uVar20 = uVar22 + 1;
                uVar21 = *plVar26 - lVar11;
                if (uVar21 <= uVar20) goto LAB_006a6a38;
                uVar14 = uVar22 * 8;
                while( true ) {
                  uVar14 = uVar14 + 8;
                  bVar3 = *(byte *)(lVar11 + uVar20);
                  if (bVar3 != 0) break;
                  uVar20 = uVar20 + 1;
                  if (uVar21 <= uVar20) goto LAB_006a6a38;
                }
                uVar15 = (uint)bVar3 & -(uint)bVar3;
                uVar20 = uVar14;
                if (uVar15 != 1) {
                  iVar17 = 0;
                  iVar19 = 4;
                  do {
                    uVar4 = (uVar15 & 0xff) >> iVar19;
                    iVar5 = 0;
                    if ((uVar4 & 0xff) != 0) {
                      uVar15 = uVar4;
                      iVar5 = iVar19;
                    }
                    iVar19 = iVar19 >> 1;
                    iVar17 = iVar5 + iVar17;
                  } while ((uVar15 & 0xff) != 1);
                  goto LAB_006a6a28;
                }
joined_r0x006a6a34:
                if (uVar20 == 0xffffffffffffffff) goto LAB_006a6a38;
              }
              uVar15 = -(uint)bVar3 & (uint)bVar3;
              if (uVar15 != 1) {
                iVar17 = 0;
                iVar19 = 4;
                do {
                  uVar4 = (uVar15 & 0xff) >> iVar19;
                  iVar5 = 0;
                  if ((uVar4 & 0xff) != 0) {
                    uVar15 = uVar4;
                    iVar5 = iVar19;
                  }
                  iVar19 = iVar19 >> 1;
                  iVar17 = iVar5 + iVar17;
                } while ((uVar15 & 0xff) != 1);
LAB_006a6a28:
                uVar20 = (long)iVar17 + uVar14;
                goto joined_r0x006a6a34;
              }
              bVar8 = uVar20 != 0xfffffffffffffffe;
              uVar20 = uVar14;
            } while (bVar8);
          }
LAB_006a6a38:
          lVar24 = *(long *)(param_2 + 0xa0);
          uVar23 = uVar23 + 1;
        } while (uVar23 < (ulong)((*(long *)(param_2 + 0xa8) - lVar24 >> 3) * -0x30c30c30c30c30c3));
      }
      return;
    }
    if ((ulong)((param_3[1] - *param_3 >> 3) * -0x30c30c30c30c30c3) <=
        (ulong)(long)*(int *)(lVar24 + 8)) {
LAB_006a6a8c:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    lVar9 = *param_3 + (long)*(int *)(lVar24 + 8) * 0xa8;
    *(undefined1 *)(lVar9 + 0x70) = 1;
    if ((ulong)(*(long *)(lVar9 + 0x80) - *(long *)(lVar9 + 0x78) >> 5) <=
        (ulong)*(uint *)(lVar24 + 0xc)) {
LAB_006a6a94:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    puVar16 = (uint *)(*(long *)(lVar9 + 0x78) + (ulong)*(uint *)(lVar24 + 0xc) * 0x20);
    pcVar10 = *(code **)(puVar7 + (ulong)*puVar16 * 0x10);
    uVar23 = *(ulong *)((long)(puVar7 + (ulong)*puVar16 * 0x10) + 8);
    plVar25 = (long *)((long)puVar16 + ((long)uVar23 >> 1));
    if ((uVar23 & 1) != 0) {
      pcVar10 = *(code **)(pcVar10 + *plVar25);
    }
    (*pcVar10)(param_1,plVar25,lVar24 + 0x60);
    lVar24 = lVar24 + 0x70;
  } while( true );
code_r0x006a6188:
  uVar20 = uVar20 + 1;
  lVar12 = lVar12 + -8;
  if ((ulong)(lVar11 - lVar9) <= uVar20) goto LAB_006a6464;
  goto LAB_006a6180;
code_r0x006a648c:
  uVar20 = uVar20 + 1;
  lVar12 = lVar12 + -8;
  if ((ulong)(lVar11 - lVar9) <= uVar20) goto LAB_006a6758;
  goto LAB_006a6484;
code_r0x006a6780:
  uVar20 = uVar20 + 1;
  lVar12 = lVar12 + -8;
  if ((ulong)(lVar11 - lVar9) <= uVar20) goto LAB_006a6a38;
  goto LAB_006a6778;
}


