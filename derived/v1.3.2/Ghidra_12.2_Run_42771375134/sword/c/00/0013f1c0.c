/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0013f1c0; name: FUN_0013f1c0
 */


void FUN_0013f1c0(long param_1,uint param_2,undefined8 *param_3,uint *param_4,uint *param_5)

{
  bool bVar1;
  uint *puVar2;
  float *pfVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  undefined8 uVar19;
  void *pvVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  uint *puVar27;
  uint uVar28;
  long lVar29;
  uint *puVar30;
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  uint uVar34;
  long lVar35;
  ulong uVar36;
  uint uVar37;
  long lVar38;
  ulong uVar39;
  ulong uVar40;
  void *pvVar41;
  uint *puVar42;
  int iVar43;
  ulong uVar44;
  long lVar45;
  long lVar46;
  float fVar47;
  float fVar48;
  long local_a0 [4];
  undefined8 uStack_80;
  long local_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  uVar37 = *param_5;
  lVar18 = *(long *)(param_1 + 0xb0);
  local_a0[0] = *(long *)(param_1 + 0xe0);
  local_a0[1] = *(undefined8 *)(param_1 + 0xe8);
  local_a0[2] = *(undefined8 *)(param_1 + 0xe8);
  uVar39 = (ulong)param_2;
  local_a0[3] = *(undefined8 *)(param_1 + 0xd8);
  local_78 = *(long *)(param_1 + 0xe0);
  uStack_80 = local_a0[3];
  lVar21 = param_1 + uVar39 * 8;
  lVar45 = *(long *)(lVar21 + 0x108);
  uVar32 = *(uint *)(lVar45 + 4);
  if (uVar32 >> 1 == 0x1fffffff) {
    return;
  }
  lVar46 = *(long *)(lVar21 + 0xf0);
  lVar24 = *(long *)(param_1 + 0x120);
  lVar35 = ((undefined8 *)(param_1 + 0xd8))[uVar39];
  lVar22 = *(long *)(param_1 + 0xb8);
  lVar21 = local_a0[param_2 << 1 | 1];
  lVar23 = local_a0[param_2 << 1];
  if (*(uint *)(param_1 + 0xa8) < 0x200) {
    if (*(uint *)(param_1 + 0xa8) == 0) {
      lVar38 = *(long *)(param_1 + 0x128);
      uVar44 = 0;
    }
    else {
      lVar26 = *(long *)(param_1 + 0xa0);
      lVar29 = *(long *)(param_1 + 200);
      uVar25 = 0;
      lVar38 = *(long *)(param_1 + 0x128);
      uVar44 = 0;
      do {
        uVar33 = (ulong)*(uint *)(lVar26 + uVar25 * 4);
        uVar25 = uVar25 + 1;
        pfVar3 = (float *)(lVar18 + uVar33 * 0x18 + uVar39 * 4);
        fVar47 = *(float *)(lVar29 + uVar33 * 4);
        puVar27 = (uint *)(lVar35 + uVar33 * 8);
        fVar48 = *pfVar3 - fVar47;
        fVar47 = fVar47 + pfVar3[3];
        uVar32 = (uint)fVar48 | 0x80000000;
        if ((int)fVar48 < 0) {
          uVar32 = ~(uint)fVar48;
        }
        uVar31 = (uint)fVar47 | 0x80000000;
        if ((int)fVar47 < 0) {
          uVar31 = ~(uint)fVar47;
        }
        *(uint *)(lVar46 + (ulong)*puVar27 * 4) = uVar32 - 0x10 & 0xfffffff0;
        *(uint *)(lVar46 + (ulong)puVar27[1] * 4) = uVar31 + 0x10 & 0xfffffff0 | 4;
        *(uint *)(lVar38 + uVar44 * 4) = *puVar27;
        iVar43 = (int)uVar44;
        uVar44 = (ulong)(iVar43 + 2);
        *(uint *)(lVar38 + (ulong)(iVar43 + 1) * 4) = puVar27[1];
      } while (uVar25 < *(uint *)(param_1 + 0xa8));
    }
    FUN_00135530(lVar38,uVar44,auStack_68,auStack_70,0x20);
    puVar27 = *(uint **)(param_1 + 0x130);
    puVar27[0] = 0;
    puVar27[1] = 0;
    iVar43 = (int)uVar44;
joined_r0x0013f478:
    if (iVar43 != 0) {
      uVar25 = 0;
      uVar32 = 0;
      puVar42 = puVar27;
      do {
        uVar36 = (ulong)*(uint *)(*(long *)(param_1 + 0x128) + uVar25 * 4);
        lVar38 = *(long *)(param_1 + 0x140);
        uVar31 = *(uint *)(lVar45 + uVar36 * 4);
        uVar33 = (ulong)*(uint *)(lVar38 + uVar36 * 4);
        do {
          uVar16 = uVar31 >> 1;
          uVar40 = (ulong)uVar16;
          uVar12 = *(uint *)(lVar46 + uVar36 * 4);
          fVar47 = *(float *)(*(long *)(param_1 + 200) + uVar40 * 4) +
                   *(float *)(lVar18 + uVar40 * 0x18 + uVar39 * 4 + 0xc);
          uVar28 = (uint)fVar47 | 0x80000000;
          if ((int)fVar47 < 0) {
            uVar28 = ~(uint)fVar47;
          }
          uVar34 = (uint)uVar36;
          if (uVar12 < *(uint *)(lVar46 + uVar33 * 4)) {
            uVar13 = *(uint *)(lVar22 + uVar40 * 4);
            puVar27 = (uint *)(lVar23 + uVar40 * 8);
            puVar30 = (uint *)(lVar21 + uVar40 * 8);
            uVar17 = (uVar13 & 3) << 2;
            if ((uVar31 & 1) == 0) {
              uVar40 = uVar36;
              do {
                uVar31 = *(uint *)(lVar45 + uVar33 * 4);
                if ((uVar31 & 1) != 0) {
                  uVar31 = uVar31 >> 1;
                  lVar26 = (ulong)uVar31 * 8;
                  if (*(uint *)(lVar46 + (ulong)*(uint *)(lVar35 + lVar26) * 4) <
                      (uVar28 + 0x10 & 0xfffffff0 | 4)) {
                    uVar5 = *(uint *)(lVar23 + lVar26);
                    uVar7 = ((uint *)(lVar23 + lVar26))[1];
                    uVar9 = puVar27[1];
                    uVar10 = *puVar27;
                    uVar11 = puVar30[1];
                    uVar6 = *(uint *)(lVar21 + lVar26);
                    uVar8 = ((uint *)(lVar21 + lVar26))[1];
                    if (((((((uVar5 < uVar9 && uVar10 < uVar7) && uVar6 <= uVar11) &&
                           ((uVar9 <= uVar5 || uVar7 <= uVar10) || uVar11 != uVar6)) &&
                          *puVar30 <= uVar8) &&
                          (((uVar9 <= uVar5 || uVar7 <= uVar10) || uVar11 <= uVar6) ||
                          uVar8 != *puVar30)) &&
                        (uVar5 = *(uint *)(lVar22 + (ulong)uVar31 * 4), uVar13 != uVar5)) &&
                       (*(char *)(*(long *)(param_1 + 0xc0) + (ulong)(uVar5 & 3 | uVar17)) != '\0'))
                    {
                      if (uVar32 == uVar37) {
                        uVar19 = *(undefined8 *)(param_1 + 8);
                        pvVar41 = (void *)*param_3;
                        pvVar20 = (void *)FUN_003c3120(uVar19,uVar37 << 4,1);
                        memcpy(pvVar20,pvVar41,(ulong)(uVar37 << 3));
                        FUN_00111d30(uVar19,pvVar41);
                        *param_3 = pvVar20;
                        lVar38 = *(long *)(param_1 + 0x140);
                        uVar37 = uVar37 << 1;
                      }
                      else {
                        pvVar20 = (void *)*param_3;
                      }
                      puVar2 = (uint *)((long)pvVar20 + (ulong)uVar32 * 8);
                      uVar32 = uVar32 + 1;
                      uVar5 = uVar16;
                      if (uVar31 <= uVar16) {
                        uVar5 = uVar31;
                        uVar31 = uVar16;
                      }
                      *puVar2 = uVar31;
                      puVar2[1] = uVar5;
                    }
                  }
                }
                uVar33 = (ulong)*(uint *)(lVar38 + uVar33 * 4);
                uVar31 = (int)uVar40 - 1;
                uVar40 = (ulong)uVar31;
              } while (uVar12 < *(uint *)(lVar46 + uVar33 * 4));
            }
            else {
              uVar40 = uVar36;
              do {
                uVar31 = *(uint *)(lVar45 + uVar33 * 4);
                if ((uVar31 & 1) == 0) {
                  uVar31 = uVar31 >> 1;
                  lVar26 = (ulong)uVar31 * 8;
                  puVar2 = (uint *)(lVar23 + lVar26);
                  puVar4 = (uint *)(lVar21 + lVar26);
                  uVar8 = puVar27[1];
                  uVar28 = *puVar2;
                  uVar6 = puVar2[1];
                  uVar9 = *puVar27;
                  uVar10 = puVar30[1];
                  uVar5 = *puVar4;
                  uVar7 = puVar4[1];
                  if (((((((uVar28 < uVar8 && uVar9 < uVar6) && uVar5 <= uVar10) &&
                         ((uVar8 <= uVar28 || uVar6 <= uVar9) || uVar10 != uVar5)) &&
                        *puVar30 <= uVar7) &&
                        (((uVar8 <= uVar28 || uVar6 <= uVar9) || uVar10 <= uVar5) ||
                        uVar7 != *puVar30)) &&
                      (uVar28 = *(uint *)(lVar22 + (ulong)uVar31 * 4), uVar13 != uVar28)) &&
                     (*(char *)(*(long *)(param_1 + 0xc0) + (ulong)(uVar28 & 3 | uVar17)) != '\0'))
                  {
                    if (uVar32 == uVar37) {
                      uVar19 = *(undefined8 *)(param_1 + 8);
                      pvVar41 = (void *)*param_3;
                      pvVar20 = (void *)FUN_003c3120(uVar19,uVar37 << 4,1);
                      memcpy(pvVar20,pvVar41,(ulong)(uVar37 << 3));
                      FUN_00111d30(uVar19,pvVar41);
                      *param_3 = pvVar20;
                      lVar38 = *(long *)(param_1 + 0x140);
                      uVar37 = uVar37 << 1;
                    }
                    else {
                      pvVar20 = (void *)*param_3;
                    }
                    puVar2 = (uint *)((long)pvVar20 + (ulong)uVar32 * 8);
                    uVar32 = uVar32 + 1;
                    uVar28 = uVar31;
                    uVar5 = uVar16;
                    if (uVar31 <= uVar16) {
                      uVar28 = uVar16;
                      uVar5 = uVar31;
                    }
                    *puVar2 = uVar5;
                    puVar2[1] = uVar28;
                  }
                }
                uVar33 = (ulong)*(uint *)(lVar38 + uVar33 * 4);
                uVar31 = (int)uVar40 - 1;
                uVar40 = (ulong)uVar31;
              } while (uVar12 < *(uint *)(lVar46 + uVar33 * 4));
            }
            lVar29 = *(long *)(param_1 + 0x138);
            lVar26 = uVar36 * 4;
            uVar28 = *(uint *)(lVar29 + uVar33 * 4);
            uVar12 = *(uint *)(lVar38 + lVar26);
            uVar16 = *(uint *)(lVar29 + lVar26);
            *(uint *)(lVar29 + (ulong)uVar12 * 4) = uVar16;
            *(uint *)(lVar38 + (ulong)uVar16 * 4) = uVar12;
            *(uint *)(lVar29 + lVar26) = uVar28;
            *(int *)(lVar38 + lVar26) = (int)uVar33;
            *(uint *)(lVar38 + (ulong)uVar28 * 4) = uVar34;
            *(uint *)(lVar29 + uVar33 * 4) = uVar34;
            puVar27 = puVar42;
            do {
              puVar42 = puVar27;
              puVar27 = puVar42 + -2;
            } while (uVar31 < *puVar42);
            puVar27 = *(uint **)(param_1 + 0x130);
            if ((puVar27 + -2 == puVar42 + -2) || (puVar30 = puVar42 + 1, *puVar30 + 1 < uVar31)) {
              puVar42[2] = uVar31;
              puVar30 = puVar42 + 3;
              puVar42 = puVar42 + 2;
            }
            *puVar30 = uVar34;
          }
          uVar36 = (ulong)(uVar34 + 1);
          uVar31 = *(uint *)(lVar45 + uVar36 * 4);
        } while (((uVar31 >> 1 != 0x1fffffff) && (*(char *)(lVar24 + (ulong)(uVar31 >> 1)) == '\0'))
                && (uVar33 = (ulong)*(uint *)(lVar38 + uVar36 * 4),
                   *(char *)(lVar24 + (ulong)(*(uint *)(lVar45 + uVar33 * 4) >> 1)) != '\0'));
        uVar25 = uVar25 + 1;
      } while (uVar25 != uVar44);
      goto LAB_0013f86c;
    }
  }
  else {
    uVar31 = *(uint *)(param_1 + 0x148);
    if (((uVar31 & 0x7fffffff) != 0) && (uVar32 >> 1 != 0x1fffffff)) {
      uVar44 = 0;
      uVar25 = 2;
      uVar33 = 1;
      do {
        uVar36 = uVar25;
        uVar25 = (ulong)(uVar32 >> 1);
        uVar28 = (uint)uVar36;
        if (*(char *)(lVar24 + uVar25) != '\0') {
          fVar47 = *(float *)(*(long *)(param_1 + 200) + uVar25 * 4);
          if ((uVar32 & 1) == 0) {
            fVar47 = *(float *)(lVar18 + uVar25 * 0x18 + uVar39 * 4) - fVar47;
            uVar32 = (uint)fVar47 | 0x80000000;
            if ((int)fVar47 < 0) {
              uVar32 = ~(uint)fVar47;
            }
            uVar32 = uVar32 - 0x10 & 0xfffffff0;
          }
          else {
            fVar47 = fVar47 + *(float *)(lVar18 + uVar25 * 0x18 + uVar39 * 4 + 0xc);
            uVar32 = (uint)fVar47 | 0x80000000;
            if ((int)fVar47 < 0) {
              uVar32 = ~(uint)fVar47;
            }
            uVar32 = uVar32 + 0x10 & 0xfffffff0 | 4;
          }
          *(uint *)(lVar46 + uVar33 * 4) = uVar32;
          *(uint *)(*(long *)(param_1 + 0x128) + uVar44 * 4) = uVar28 - 1;
          uVar44 = (ulong)((int)uVar44 + 1);
        }
        if ((uVar31 << 1 | 1) <= uVar28) break;
        uVar32 = *(uint *)(lVar45 + uVar36 * 4);
        uVar25 = (ulong)(uVar28 + 1);
        uVar33 = uVar36;
      } while (uVar32 >> 1 != 0x1fffffff);
      puVar27 = *(uint **)(param_1 + 0x130);
      puVar27[0] = 0;
      puVar27[1] = 0;
      iVar43 = (int)uVar44;
      goto joined_r0x0013f478;
    }
    puVar27 = *(uint **)(param_1 + 0x130);
    puVar27[0] = 0;
    puVar27[1] = 0;
  }
  uVar32 = 0;
  puVar42 = puVar27;
LAB_0013f86c:
  *param_4 = uVar32;
  *param_5 = uVar37;
  do {
    while( true ) {
      puVar30 = puVar27;
      puVar27 = puVar30 + 2;
      if (puVar42 < puVar27) {
        return;
      }
      uVar37 = *puVar27;
      uVar32 = puVar30[3];
      if (uVar32 < uVar37) break;
      lVar21 = *(long *)(param_1 + 0x140);
      do {
        *(uint *)(lVar21 + (ulong)uVar37 * 4) = uVar37;
        uVar32 = puVar30[3];
        uVar37 = uVar37 + 1;
      } while (uVar37 <= uVar32);
      uVar37 = *puVar27;
      if (uVar32 < uVar37) goto LAB_0013f8a4;
LAB_0013f8d8:
      lVar21 = *(long *)(param_1 + 0x138);
      lVar18 = *(long *)(param_1 + 0x140);
      uVar39 = (ulong)(uVar37 - 1);
      do {
        uVar31 = *(uint *)(lVar21 + uVar39 * 4);
        uVar39 = (ulong)uVar31;
        if (uVar37 != uVar31) {
          uVar32 = *(uint *)(lVar18 + uVar39 * 4);
          lVar22 = (ulong)uVar32 * 4;
          lVar23 = (ulong)uVar37 * 4;
          uVar31 = *(uint *)(lVar45 + lVar22);
          uVar14 = *(undefined4 *)(lVar46 + lVar23);
          uVar15 = *(undefined4 *)(lVar45 + lVar23);
          *(undefined4 *)(lVar46 + lVar23) = *(undefined4 *)(lVar46 + lVar22);
          *(undefined4 *)(lVar45 + lVar23) = *(undefined4 *)(lVar45 + lVar22);
          *(undefined4 *)(lVar46 + lVar22) = uVar14;
          *(undefined4 *)(lVar45 + lVar22) = uVar15;
          *(undefined4 *)(lVar18 + lVar22) = *(undefined4 *)(lVar18 + lVar23);
          *(uint *)(lVar18 + (ulong)*(uint *)(lVar18 + lVar23) * 4) = uVar32;
          *(uint *)(lVar35 + (ulong)(uVar31 >> 1) * 8 + ((ulong)uVar31 & 1) * 4) = uVar37;
          uVar32 = puVar30[3];
        }
        uVar37 = uVar37 + 1;
      } while (uVar37 <= uVar32);
      uVar37 = *puVar27;
      if (uVar37 - 1 <= uVar32) goto LAB_0013f960;
    }
    if (uVar37 <= uVar32) goto LAB_0013f8d8;
LAB_0013f8a4:
    if (uVar37 - 1 <= uVar32) {
LAB_0013f960:
      lVar21 = *(long *)(param_1 + 0x138);
      lVar18 = *(long *)(param_1 + 0x140);
      do {
        *(uint *)(lVar18 + (ulong)uVar37 * 4) = uVar37 - 1;
        *(uint *)(lVar21 + (ulong)(uVar37 - 1) * 4) = uVar37;
        bVar1 = uVar37 <= puVar30[3];
        uVar37 = uVar37 + 1;
      } while (bVar1);
    }
  } while( true );
}


