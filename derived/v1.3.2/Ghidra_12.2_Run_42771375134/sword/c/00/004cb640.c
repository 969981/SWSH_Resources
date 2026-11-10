/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cb640; name: FUN_004cb640
 */


void FUN_004cb640(float param_1,float param_2,ushort *param_3,long *param_4,long *param_5)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  long lVar12;
  float *pfVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  ulong uVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  int iVar25;
  uint uVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  size_t __n;
  ulong uVar32;
  ulong uVar33;
  float fVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  uint auStack_90 [2];
  uint *local_88;
  size_t local_80;
  undefined8 local_78;
  
  uVar4 = *(uint *)(param_4 + 1);
  uVar10 = (ulong)uVar4;
  uVar7 = uVar4 >> 0xc;
  if (uVar7 < 0x60f) {
    if (uVar7 == 3) {
      uVar7 = *(uint *)(param_5 + 1);
      if (((ulong)uVar7 & 0xfffff000) == 0x3000) {
        FUN_004cb9e0(param_1,*(float *)(param_3 + 2) * (param_2 - param_1),param_3,param_4,*param_5)
        ;
        return;
      }
      lVar31 = *param_4;
      pfVar6 = (float *)*param_5;
      uVar5 = *param_3;
      uVar30 = (ulong)uVar5;
      uVar17 = uVar10 & 0xff;
      lVar29 = -((ulong)((int)uVar17 * 8 + 0xf) & 0xff0);
      puVar11 = (undefined4 *)((long)auStack_90 + lVar29);
      uVar8 = (uint)uVar5;
      uVar15 = (uint)uVar5;
      if ((uVar4 >> 0xf & 1) == 0) {
        if ((uVar4 & 0xff) != 0) {
          if (uVar17 - 1 < 3) {
            lVar21 = 0;
          }
          else {
            iVar25 = 0;
            lVar21 = 0;
            piVar18 = (int *)((long)auStack_90 + lVar29 + 8);
            do {
              iVar2 = uVar8 * 2 + iVar25;
              iVar3 = uVar8 * 2 + uVar15 + iVar25;
              lVar21 = lVar21 + 4;
              piVar18[-2] = iVar25;
              piVar18[-1] = uVar8 + iVar25;
              iVar25 = iVar25 + uVar15 * 4;
              *piVar18 = iVar2;
              piVar18[1] = iVar3;
              piVar18 = piVar18 + 4;
            } while (uVar17 - (uVar10 & 3) != lVar21);
          }
          if ((uVar4 & 3) != 0) {
            iVar25 = uVar8 * (int)lVar21;
            lVar12 = -(uVar10 & 3);
            piVar18 = puVar11 + lVar21;
            do {
              *piVar18 = iVar25;
              iVar25 = iVar25 + uVar8;
              lVar12 = lVar12 + 1;
              piVar18 = piVar18 + 1;
            } while (lVar12 != 0);
          }
        }
      }
      else {
        uVar26 = uVar4 >> 0xe & 1 | 2;
        uVar32 = (ulong)uVar26;
        *puVar11 = 0;
        *(uint *)((long)auStack_90 + lVar29 + 4) = (uint)uVar5;
        if (uVar26 != 2) {
          *(uint *)((long)auStack_90 + lVar29 + 8) = (uint)uVar5 << 1;
        }
        uVar19 = uVar4 & 0xff;
        uVar9 = (uint)uVar5;
        puVar11[uVar32] = (uVar19 - 1) * uVar9;
        uVar20 = uVar26 + 1;
        if (uVar20 < uVar19) {
          uVar14 = uVar26;
          if (((uVar4 + 1) - (uVar4 >> 0xe) & 1) != 0) {
            uVar32 = uVar32 + 1;
            puVar11[uVar32] = uVar26 * uVar9;
            uVar14 = uVar20;
            uVar20 = uVar26 + 2;
          }
          if (uVar19 - 2 != uVar26) {
            iVar25 = uVar20 * uVar9;
            piVar18 = puVar11 + uVar32;
            do {
              iVar2 = uVar14 * uVar8;
              uVar14 = uVar20 + 1;
              uVar20 = uVar20 + 2;
              piVar18[1] = iVar2;
              piVar18[2] = iVar25;
              iVar25 = iVar25 + (uint)uVar5 * 2;
              piVar18 = piVar18 + 2;
            } while (uVar19 != uVar20);
          }
        }
      }
      if (uVar8 != 0) {
        uVar32 = (ulong)uVar7 & 0xff;
        if ((uVar4 & 0xff) == 0) {
          __n = uVar32 << 2;
          if (uVar15 != 1) {
            lVar29 = (uVar30 & 1) - uVar30;
            do {
              if ((uVar7 & 0xff) != 0) {
                    /* WARNING: Subroutine does not return */
                memset(pfVar6,0,__n);
              }
              if ((uVar7 & 0xff) != 0) {
                    /* WARNING: Subroutine does not return */
                memset(pfVar6,0,__n);
              }
              lVar29 = lVar29 + 2;
            } while (lVar29 != 0);
          }
          if (((uVar5 & 1) != 0) && ((uVar7 & 0xff) != 0)) {
                    /* WARNING: Subroutine does not return */
            memset(pfVar6,0,__n);
          }
        }
        else {
          param_2 = param_2 - param_1;
          local_80 = (uVar32 - uVar17) * 4;
          local_88 = (uint *)((long)auStack_90 + lVar29 + 8);
          uVar33 = 0;
          local_78 = -(uVar10 & 3);
          do {
            pfVar13 = pfVar6;
            if (uVar17 - 1 < 3) {
              lVar29 = 0;
            }
            else {
              lVar29 = 0;
              puVar16 = local_88;
              do {
                *pfVar13 = *(float *)(lVar31 + (uVar33 + puVar16[-2]) * 4) * param_1;
                pfVar13[1] = *(float *)(lVar31 + (uVar33 + puVar16[-1]) * 4) * param_1;
                pfVar13[2] = *(float *)(lVar31 + (uVar33 + *puVar16) * 4) * param_1;
                puVar1 = puVar16 + 1;
                puVar16 = puVar16 + 4;
                lVar29 = lVar29 + -4;
                pfVar13[3] = *(float *)(lVar31 + (uVar33 + *puVar1) * 4) * param_1;
                pfVar13 = pfVar13 + 4;
              } while ((uVar10 & 3) - uVar17 != lVar29);
              lVar29 = -lVar29;
            }
            if ((uVar4 & 3) != 0) {
              puVar16 = puVar11 + lVar29;
              lVar29 = local_78;
              do {
                lVar29 = lVar29 + 1;
                *pfVar13 = *(float *)(lVar31 + (uVar33 + *puVar16) * 4) * param_1;
                pfVar13 = pfVar13 + 1;
                puVar16 = puVar16 + 1;
              } while (lVar29 != 0);
            }
            pfVar6 = pfVar6 + uVar17;
            if (uVar17 < uVar32) {
                    /* WARNING: Subroutine does not return */
              memset(pfVar6,0,local_80);
            }
            param_1 = param_1 + param_2 / (float)uVar30;
            uVar33 = uVar33 + 1;
          } while (uVar33 != uVar30);
        }
      }
      return;
    }
    if (uVar7 == 4) {
      fVar38 = *(float *)(param_3 + 2) * (param_2 - param_1);
      uVar10 = 0;
      if (fVar38 == 0.0) {
        do {
          lVar31 = uVar10 * 4 * (ulong)*(ushort *)(param_4 + 2);
          puVar22 = (undefined8 *)(*param_5 + uVar10 * 4 * (ulong)*(ushort *)(param_5 + 2));
          uVar5 = *param_3;
          lVar29 = *param_4;
          puVar24 = (undefined8 *)(lVar29 + lVar31);
          puVar28 = (undefined8 *)(lVar29 + (ulong)uVar5 * 4 + lVar31);
          if (puVar28 <= puVar24 + 4) {
            puVar28 = puVar24 + 4;
          }
          uVar30 = (long)puVar28 + (uVar10 * *(ushort *)(param_4 + 2) * -4 - lVar29) + -1;
          uVar7 = ((uint)(uVar30 >> 5) & 0x7ffffff) + 1;
          puVar28 = puVar24;
          DAT_0275b190 = param_1;
          DAT_0275b194 = param_1;
          DAT_0275b198 = param_1;
          DAT_0275b19c = param_1;
          if ((uVar7 & 3) != 0) {
            lVar29 = -((ulong)uVar7 & 3);
            puVar23 = puVar22;
            puVar27 = puVar24;
            do {
              puVar28 = puVar27 + 4;
              uVar35 = *puVar27;
              uVar37 = puVar27[3];
              uVar36 = puVar27[2];
              lVar29 = lVar29 + 1;
              puVar22 = puVar23 + 4;
              puVar23[1] = CONCAT44((float)((ulong)puVar27[1] >> 0x20) * param_1,
                                    (float)puVar27[1] * param_1);
              *puVar23 = CONCAT44((float)((ulong)uVar35 >> 0x20) * param_1,(float)uVar35 * param_1);
              puVar23[3] = CONCAT44((float)((ulong)uVar37 >> 0x20) * param_1,(float)uVar37 * param_1
                                   );
              puVar23[2] = CONCAT44((float)((ulong)uVar36 >> 0x20) * param_1,(float)uVar36 * param_1
                                   );
              puVar23 = puVar22;
              puVar27 = puVar28;
            } while (lVar29 != 0);
          }
          if (0x5f < uVar30) {
            do {
              uVar35 = *puVar28;
              uVar37 = puVar28[3];
              uVar36 = puVar28[2];
              puVar22[1] = CONCAT44((float)((ulong)puVar28[1] >> 0x20) * param_1,
                                    (float)puVar28[1] * param_1);
              *puVar22 = CONCAT44((float)((ulong)uVar35 >> 0x20) * param_1,(float)uVar35 * param_1);
              puVar22[3] = CONCAT44((float)((ulong)uVar37 >> 0x20) * param_1,(float)uVar37 * param_1
                                   );
              puVar22[2] = CONCAT44((float)((ulong)uVar36 >> 0x20) * param_1,(float)uVar36 * param_1
                                   );
              uVar35 = puVar28[4];
              uVar37 = puVar28[7];
              uVar36 = puVar28[6];
              puVar22[5] = CONCAT44((float)((ulong)puVar28[5] >> 0x20) * param_1,
                                    (float)puVar28[5] * param_1);
              puVar22[4] = CONCAT44((float)((ulong)uVar35 >> 0x20) * param_1,(float)uVar35 * param_1
                                   );
              puVar22[7] = CONCAT44((float)((ulong)uVar37 >> 0x20) * param_1,(float)uVar37 * param_1
                                   );
              puVar22[6] = CONCAT44((float)((ulong)uVar36 >> 0x20) * param_1,(float)uVar36 * param_1
                                   );
              uVar35 = puVar28[8];
              uVar37 = puVar28[0xb];
              uVar36 = puVar28[10];
              puVar22[9] = CONCAT44((float)((ulong)puVar28[9] >> 0x20) * param_1,
                                    (float)puVar28[9] * param_1);
              puVar22[8] = CONCAT44((float)((ulong)uVar35 >> 0x20) * param_1,(float)uVar35 * param_1
                                   );
              puVar22[0xb] = CONCAT44((float)((ulong)uVar37 >> 0x20) * param_1,
                                      (float)uVar37 * param_1);
              puVar22[10] = CONCAT44((float)((ulong)uVar36 >> 0x20) * param_1,
                                     (float)uVar36 * param_1);
              puVar23 = puVar28 + 0xd;
              uVar35 = puVar28[0xc];
              uVar37 = puVar28[0xf];
              uVar36 = puVar28[0xe];
              puVar28 = puVar28 + 0x10;
              puVar22[0xd] = CONCAT44((float)((ulong)*puVar23 >> 0x20) * param_1,
                                      (float)*puVar23 * param_1);
              puVar22[0xc] = CONCAT44((float)((ulong)uVar35 >> 0x20) * param_1,
                                      (float)uVar35 * param_1);
              puVar22[0xf] = CONCAT44((float)((ulong)uVar37 >> 0x20) * param_1,
                                      (float)uVar37 * param_1);
              puVar22[0xe] = CONCAT44((float)((ulong)uVar36 >> 0x20) * param_1,
                                      (float)uVar36 * param_1);
              puVar22 = puVar22 + 0x10;
            } while (puVar28 < (undefined8 *)((long)puVar24 + (ulong)uVar5 * 4));
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < (uVar4 & 0xff));
      }
      else {
        fVar40 = fVar38 * 4.0;
        fVar34 = fVar38 + param_1;
        fVar39 = param_1 + fVar38 * 3.0;
        fVar38 = fVar38 + fVar38 + param_1;
        fVar41 = fVar40 + fVar40;
        do {
          lVar31 = uVar10 * 4 * (ulong)*(ushort *)(param_4 + 2);
          lVar29 = *param_4;
          puVar24 = (undefined8 *)(*param_5 + uVar10 * 4 * (ulong)*(ushort *)(param_5 + 2));
          uVar5 = *param_3;
          puVar28 = (undefined8 *)(lVar29 + lVar31);
          fVar42 = param_1 + fVar40;
          fVar44 = fVar34 + fVar40;
          fVar46 = fVar38 + fVar40;
          fVar48 = fVar39 + fVar40;
          puVar23 = (undefined8 *)(lVar29 + (ulong)uVar5 * 4 + lVar31);
          puVar22 = puVar28 + 4;
          if (puVar23 <= puVar22) {
            puVar23 = puVar22;
          }
          uVar30 = (long)puVar23 + (uVar10 * *(ushort *)(param_4 + 2) * -4 - lVar29) + -1;
          fVar54 = fVar34;
          DAT_0275b194 = fVar34;
          fVar55 = fVar39;
          DAT_0275b19c = fVar39;
          fVar56 = fVar38;
          DAT_0275b198 = fVar38;
          puVar23 = puVar28;
          fVar57 = param_1;
          DAT_0275b190 = param_1;
          if (((uint)uVar30 >> 5 & 1) == 0) {
            uVar35 = *puVar28;
            fVar54 = (float)puVar28[2] * fVar42;
            fVar55 = (float)((ulong)puVar28[2] >> 0x20) * fVar44;
            fVar56 = (float)puVar28[3] * fVar46;
            fVar57 = (float)((ulong)puVar28[3] >> 0x20) * fVar48;
            fVar42 = fVar42 + fVar41;
            fVar44 = fVar44 + fVar41;
            fVar46 = fVar46 + fVar41;
            fVar48 = fVar48 + fVar41;
            puVar24[1] = CONCAT44((float)((ulong)puVar28[1] >> 0x20) * fVar39,
                                  (float)puVar28[1] * fVar38);
            *puVar24 = CONCAT44((float)((ulong)uVar35 >> 0x20) * fVar34,(float)uVar35 * param_1);
            puVar24[3] = CONCAT44(fVar57,fVar56);
            puVar24[2] = CONCAT44(fVar55,fVar54);
            fVar54 = fVar34 + fVar41;
            fVar55 = fVar39 + fVar41;
            fVar56 = fVar38 + fVar41;
            puVar24 = puVar24 + 4;
            puVar23 = puVar22;
            fVar57 = param_1 + fVar41;
          }
          if (0x1f < uVar30) {
            do {
              uVar35 = *puVar23;
              uVar37 = puVar23[3];
              uVar36 = puVar23[2];
              fVar50 = fVar57 + fVar41;
              fVar51 = fVar54 + fVar41;
              fVar52 = fVar56 + fVar41;
              fVar53 = fVar55 + fVar41;
              fVar43 = fVar42 + fVar41;
              fVar45 = fVar44 + fVar41;
              fVar47 = fVar46 + fVar41;
              fVar49 = fVar48 + fVar41;
              puVar24[1] = CONCAT44((float)((ulong)puVar23[1] >> 0x20) * fVar55,
                                    (float)puVar23[1] * fVar56);
              *puVar24 = CONCAT44((float)((ulong)uVar35 >> 0x20) * fVar54,(float)uVar35 * fVar57);
              puVar24[3] = CONCAT44((float)((ulong)uVar37 >> 0x20) * fVar48,(float)uVar37 * fVar46);
              puVar24[2] = CONCAT44((float)((ulong)uVar36 >> 0x20) * fVar44,(float)uVar36 * fVar42);
              puVar22 = puVar23 + 5;
              uVar35 = puVar23[4];
              uVar37 = puVar23[7];
              uVar36 = puVar23[6];
              puVar23 = puVar23 + 8;
              fVar57 = fVar50 + fVar41;
              fVar54 = fVar51 + fVar41;
              fVar56 = fVar52 + fVar41;
              fVar55 = fVar53 + fVar41;
              fVar42 = fVar43 + fVar41;
              fVar44 = fVar45 + fVar41;
              fVar46 = fVar47 + fVar41;
              fVar48 = fVar49 + fVar41;
              puVar24[5] = CONCAT44((float)((ulong)*puVar22 >> 0x20) * fVar53,
                                    (float)*puVar22 * fVar52);
              puVar24[4] = CONCAT44((float)((ulong)uVar35 >> 0x20) * fVar51,(float)uVar35 * fVar50);
              puVar24[7] = CONCAT44((float)((ulong)uVar37 >> 0x20) * fVar49,(float)uVar37 * fVar47);
              puVar24[6] = CONCAT44((float)((ulong)uVar36 >> 0x20) * fVar45,(float)uVar36 * fVar43);
              puVar24 = puVar24 + 8;
            } while (puVar23 < (undefined8 *)((long)puVar28 + (ulong)uVar5 * 4));
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < (uVar4 & 0xff));
      }
      return;
    }
  }
  else {
    if (uVar7 == 0x60f) {
      FUN_004cba70(param_1,*(float *)(param_3 + 2) * (param_2 - param_1),param_3,param_4,*param_5);
      return;
    }
    if (uVar7 == 0x63f) {
      FUN_004cbb80(param_1,*(float *)(param_3 + 2) * (param_2 - param_1),param_3,param_4,*param_5);
      return;
    }
  }
  lVar31 = *param_4;
  uVar5 = *param_3;
  pfVar6 = (float *)*param_5;
  uVar4 = *(uint *)(param_5 + 1);
  uVar10 = (ulong)uVar4;
  uVar15 = (uint)uVar5;
  uVar30 = uVar10 & 0xff;
  lVar29 = -((ulong)((int)uVar30 * 8 + 0xf) & 0xff0);
  puVar11 = (undefined4 *)((long)auStack_90 + lVar29 + 0x80);
  uVar7 = (uint)uVar5;
  if ((uVar4 >> 0xf & 1) == 0) {
    if ((uVar4 & 0xff) != 0) {
      if (uVar30 - 1 < 3) {
        lVar21 = 0;
      }
      else {
        iVar25 = 0;
        lVar21 = 0;
        piVar18 = (int *)((long)register0x00000008 + lVar29 + -8);
        do {
          iVar2 = uVar15 * 2 + iVar25;
          iVar3 = uVar15 * 2 + uVar7 + iVar25;
          lVar21 = lVar21 + 4;
          piVar18[-2] = iVar25;
          piVar18[-1] = uVar15 + iVar25;
          iVar25 = iVar25 + uVar7 * 4;
          *piVar18 = iVar2;
          piVar18[1] = iVar3;
          piVar18 = piVar18 + 4;
        } while (uVar30 - (uVar10 & 3) != lVar21);
      }
      if ((uVar4 & 3) != 0) {
        iVar25 = uVar15 * (int)lVar21;
        lVar29 = -(uVar10 & 3);
        piVar18 = puVar11 + lVar21;
        do {
          *piVar18 = iVar25;
          iVar25 = iVar25 + uVar7;
          lVar29 = lVar29 + 1;
          piVar18 = piVar18 + 1;
        } while (lVar29 != 0);
      }
    }
  }
  else {
    uVar8 = uVar4 >> 0xe & 1 | 2;
    uVar17 = (ulong)uVar8;
    *puVar11 = 0;
    *(uint *)((long)auStack_90 + lVar29 + 0x84) = uVar15;
    if (uVar8 != 2) {
      *(uint *)((long)register0x00000008 + lVar29 + -8) = uVar15 << 1;
    }
    uVar20 = uVar4 & 0xff;
    puVar11[uVar17] = (uVar20 - 1) * uVar15;
    uVar26 = uVar8 + 1;
    if (uVar26 < uVar20) {
      uVar19 = uVar8;
      if (((uVar4 + 1) - (uVar4 >> 0xe) & 1) != 0) {
        uVar17 = uVar17 + 1;
        puVar11[uVar17] = uVar8 * uVar15;
        uVar19 = uVar26;
        uVar26 = uVar8 + 2;
      }
      if (uVar20 - 2 != uVar8) {
        iVar25 = uVar26 * uVar15;
        piVar18 = puVar11 + uVar17;
        do {
          iVar2 = uVar19 * uVar15;
          uVar19 = uVar26 + 1;
          uVar26 = uVar26 + 2;
          piVar18[1] = iVar2;
          piVar18[2] = iVar25;
          iVar25 = iVar25 + uVar15 * 2;
          piVar18 = piVar18 + 2;
        } while (uVar20 != uVar26);
      }
    }
  }
  if ((uVar7 != 0) && ((uVar4 & 0xff) != 0)) {
    param_2 = param_2 - param_1;
    uVar17 = 0;
    do {
      if (uVar30 - 1 < 3) {
        lVar21 = 0;
        pfVar13 = pfVar6;
      }
      else {
        lVar29 = 0;
        lVar21 = 0;
        do {
          puVar16 = (uint *)((long)puVar11 + lVar29);
          pfVar13 = (float *)((long)pfVar6 + lVar29);
          lVar29 = lVar29 + 0x10;
          *pfVar13 = *(float *)(lVar31 + (uVar17 + *puVar16) * 4) * param_1;
          pfVar13[1] = *(float *)(lVar31 + (uVar17 + puVar16[1]) * 4) * param_1;
          pfVar13[2] = *(float *)(lVar31 + (uVar17 + puVar16[2]) * 4) * param_1;
          lVar21 = lVar21 + -4;
          pfVar13[3] = *(float *)(lVar31 + (uVar17 + puVar16[3]) * 4) * param_1;
        } while ((uVar10 & 3) - uVar30 != lVar21);
        lVar21 = -lVar21;
        pfVar13 = (float *)((long)pfVar6 + lVar29);
      }
      if ((uVar4 & 3) != 0) {
        puVar16 = puVar11 + lVar21;
        lVar29 = -(uVar10 & 3);
        do {
          lVar29 = lVar29 + 1;
          *pfVar13 = *(float *)(lVar31 + (uVar17 + *puVar16) * 4) * param_1;
          puVar16 = puVar16 + 1;
          pfVar13 = pfVar13 + 1;
        } while (lVar29 != 0);
      }
      param_1 = param_1 + param_2 / (float)uVar5;
      uVar17 = uVar17 + 1;
      pfVar6 = pfVar6 + uVar30;
    } while (uVar17 != uVar5);
  }
  return;
}


