/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b9f60; name: FUN_006b9f60
 */


void FUN_006b9f60(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  int *piVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  ulong unaff_x22;
  uint *puVar16;
  long *plVar17;
  uint *puVar18;
  float fVar19;
  
  *param_1 = param_3;
  param_1[2] = 0;
  plVar17 = param_1 + 1;
  *plVar17 = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
     (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) {
    lVar3 = FUN_0075ecb0();
  }
  param_1[3] = lVar3;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
     (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) {
    lVar3 = FUN_0075ecb0();
  }
  plVar14 = param_1 + 0xc;
  *plVar14 = 0;
  param_1[7] = lVar3;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  param_1[0xd] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
     (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) {
    lVar3 = FUN_0075ecb0();
  }
  param_1[0xe] = lVar3;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
     (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) {
    lVar3 = FUN_0075ecb0();
  }
  piVar6 = (int *)*param_1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x12] = lVar3;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  if (piVar6 != (int *)0x0) {
    if ((4 < *(ushort *)((long)piVar6 - (long)*piVar6)) &&
       (uVar10 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2], uVar10 != 0)) {
      puVar18 = (uint *)((long)piVar6 + uVar10);
      puVar18 = (uint *)((long)puVar18 + (ulong)*puVar18);
      fVar19 = (float)NEON_ucvtf(*puVar18);
      FUN_006bab00(plVar17,(long)(fVar19 / *(float *)(param_1 + 0xb)));
      puVar16 = puVar18 + 1;
      if ((ulong)*puVar18 != 0) {
        puVar18 = puVar16 + *puVar18;
        plVar9 = param_1 + 6;
        do {
          while( true ) {
            uVar1 = *puVar16;
            puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x160,0x10);
            lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
            if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_006ba86c;
            *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
            *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
            FUN_006bb2a0(puVar4,(long)puVar16 + (ulong)uVar1);
            *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
            puVar5 = (ulong *)FUN_006bbef0(puVar4);
            uVar15 = *puVar5;
            uVar10 = param_1[2];
            if (uVar10 != 0) break;
LAB_006ba26c:
            plVar7 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x50,8);
            if (plVar7 == (long *)0x0) {
              (**(code **)(*(long *)param_1[7] + 0xb8))();
            }
            uVar13 = param_1[7];
            lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
            if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_006ba86c;
            *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar13;
            *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
            plVar7[2] = *puVar5;
            plVar7[3] = puVar5[1];
            plVar7[4] = puVar5[2];
            uVar11 = puVar5[3];
            plVar7[5] = uVar11;
            if (uVar11 != 0) {
              (**(code **)(*(long *)(uVar11 + 0x48) + 0x10))();
            }
            plVar7[8] = 0x160;
            plVar7[9] = 0x10;
            plVar7[6] = (long)puVar4;
            plVar7[7] = (long)param_2;
            *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
            *plVar7 = 0;
            plVar7[1] = uVar15;
            if ((uVar10 == 0) ||
               (*(float *)(param_1 + 0xb) * (float)uVar10 < (float)(param_1[10] + 1))) {
              if (uVar10 < 3) {
                uVar11 = 1;
              }
              else {
                uVar11 = (ulong)((uVar10 - 1 & uVar10) != 0);
              }
              uVar12 = (ulong)((float)(param_1[10] + 1) / *(float *)(param_1 + 0xb));
              uVar11 = uVar11 | uVar10 << 1;
              if (uVar12 <= uVar11) {
                uVar12 = uVar11;
              }
              FUN_006bab00(plVar17,uVar12);
              uVar10 = param_1[2];
              if ((uVar10 - 1 & uVar10) == 0) {
                unaff_x22 = uVar10 - 1 & uVar15;
                plVar8 = *(long **)(*plVar17 + unaff_x22 * 8);
                goto joined_r0x006ba3d0;
              }
              if (uVar15 < uVar10) {
                plVar8 = *(long **)(*plVar17 + uVar15 * 8);
                unaff_x22 = uVar15;
                goto joined_r0x006ba3d0;
              }
              uVar11 = 0;
              if (uVar10 != 0) {
                uVar11 = uVar15 / uVar10;
              }
              unaff_x22 = uVar15 - uVar11 * uVar10;
              plVar8 = *(long **)(*plVar17 + unaff_x22 * 8);
              if (plVar8 == (long *)0x0) goto LAB_006ba3e8;
LAB_006ba364:
              *plVar7 = *plVar8;
LAB_006ba450:
              *plVar8 = (long)plVar7;
            }
            else {
              plVar8 = *(long **)(*plVar17 + unaff_x22 * 8);
joined_r0x006ba3d0:
              if (plVar8 != (long *)0x0) goto LAB_006ba364;
LAB_006ba3e8:
              *plVar7 = *plVar9;
              *plVar9 = (long)plVar7;
              *(long **)(*plVar17 + unaff_x22 * 8) = plVar9;
              if (*plVar7 != 0) {
                uVar15 = *(ulong *)(*plVar7 + 8);
                if ((uVar10 - 1 & uVar10) == 0) {
                  uVar15 = uVar15 & uVar10 - 1;
                }
                else if (uVar10 <= uVar15) {
                  uVar11 = 0;
                  if (uVar10 != 0) {
                    uVar11 = uVar15 / uVar10;
                  }
                  uVar15 = uVar15 - uVar11 * uVar10;
                }
                plVar8 = (long *)(*plVar17 + uVar15 * 8);
                goto LAB_006ba450;
              }
            }
            param_1[10] = param_1[10] + 1;
            puVar16 = puVar16 + 1;
            if (puVar16 == puVar18) goto LAB_006ba470;
          }
          uVar11 = uVar10 - 1;
          if ((uVar11 & uVar10) == 0) {
            unaff_x22 = uVar11 & uVar15;
            plVar7 = *(long **)(*plVar17 + unaff_x22 * 8);
          }
          else {
            unaff_x22 = uVar15;
            if (uVar10 <= uVar15) {
              uVar12 = 0;
              if (uVar10 != 0) {
                uVar12 = uVar15 / uVar10;
              }
              unaff_x22 = uVar15 - uVar12 * uVar10;
            }
            plVar7 = *(long **)(*plVar17 + unaff_x22 * 8);
          }
          if (plVar7 == (long *)0x0) goto LAB_006ba26c;
          if ((uVar11 & uVar10) == 0) {
            do {
              plVar7 = (long *)*plVar7;
              if ((plVar7 == (long *)0x0) ||
                 (plVar7[1] != uVar15 && (plVar7[1] & uVar11) != unaff_x22)) goto LAB_006ba26c;
            } while (plVar7[2] != uVar15);
          }
          else {
            do {
              plVar7 = (long *)*plVar7;
              if (plVar7 == (long *)0x0) goto LAB_006ba26c;
              uVar11 = plVar7[1];
              if (uVar11 != uVar15) {
                if (uVar10 <= uVar11) {
                  uVar12 = 0;
                  if (uVar10 != 0) {
                    uVar12 = uVar11 / uVar10;
                  }
                  uVar11 = uVar11 - uVar12 * uVar10;
                }
                if (uVar11 != unaff_x22) goto LAB_006ba26c;
              }
            } while (plVar7[2] != uVar15);
          }
          if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)(puVar4);
            (**(code **)(*param_2 + 0x18))(param_2,puVar4,0x160,0x10);
          }
          puVar16 = puVar16 + 1;
        } while (puVar16 != puVar18);
      }
    }
LAB_006ba470:
    piVar6 = (int *)*param_1;
    if (((6 < *(ushort *)((long)piVar6 - (long)*piVar6)) &&
        (uVar10 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3], uVar10 != 0)) &&
       (puVar16 = (uint *)((long)piVar6 + uVar10),
       puVar16 = (uint *)((long)puVar16 + (ulong)*puVar16), puVar16 != (uint *)0x0)) {
      fVar19 = (float)NEON_ucvtf(*puVar16);
      FUN_006baed0(plVar14,(long)(fVar19 / *(float *)(param_1 + 0x16)));
      puVar18 = puVar16 + 1;
      if ((ulong)*puVar16 != 0) {
        puVar16 = puVar18 + *puVar16;
        plVar17 = param_1 + 0x11;
        while( true ) {
          uVar10 = (ulong)*puVar18;
          puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
          lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
          if (0xf < *(ulong *)(lVar3 + 0x80)) break;
          *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          FUN_006bd3e0(puVar4,param_2,param_1,(long)puVar18 + uVar10);
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
          puVar5 = (ulong *)FUN_006bbef0(puVar4);
          uVar11 = *puVar5;
          uVar15 = param_1[0xd];
          if (uVar15 == 0) {
LAB_006ba650:
            plVar9 = (long *)(**(code **)(*(long *)param_1[0x12] + 0x10))
                                       ((long *)param_1[0x12],0x50,8);
            if (plVar9 == (long *)0x0) {
              (**(code **)(*(long *)param_1[0x12] + 0xb8))();
            }
            uVar13 = param_1[0x12];
            lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
            if (0xf < *(ulong *)(lVar3 + 0x80)) break;
            *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar13;
            *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
            plVar9[2] = *puVar5;
            plVar9[3] = puVar5[1];
            plVar9[4] = puVar5[2];
            uVar12 = puVar5[3];
            plVar9[5] = uVar12;
            if (uVar12 != 0) {
              (**(code **)(*(long *)(uVar12 + 0x48) + 0x10))();
            }
            plVar9[8] = 0x68;
            plVar9[9] = 8;
            plVar9[6] = (long)puVar4;
            plVar9[7] = (long)param_2;
            *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
            *plVar9 = 0;
            plVar9[1] = uVar11;
            if ((uVar15 == 0) ||
               (*(float *)(param_1 + 0x16) * (float)uVar15 < (float)(param_1[0x15] + 1))) {
              if (uVar15 < 3) {
                uVar10 = 1;
              }
              else {
                uVar10 = (ulong)((uVar15 - 1 & uVar15) != 0);
              }
              uVar12 = (ulong)((float)(param_1[0x15] + 1) / *(float *)(param_1 + 0x16));
              uVar10 = uVar10 | uVar15 << 1;
              if (uVar12 <= uVar10) {
                uVar12 = uVar10;
              }
              FUN_006baed0(plVar14,uVar12);
              uVar15 = param_1[0xd];
              if ((uVar15 - 1 & uVar15) == 0) {
                uVar10 = uVar15 - 1 & uVar11;
                plVar7 = *(long **)(*plVar14 + uVar10 * 8);
                goto joined_r0x006ba7ac;
              }
              if (uVar11 < uVar15) {
                plVar7 = *(long **)(*plVar14 + uVar11 * 8);
                uVar10 = uVar11;
                goto joined_r0x006ba7ac;
              }
              uVar10 = 0;
              if (uVar15 != 0) {
                uVar10 = uVar11 / uVar15;
              }
              uVar10 = uVar11 - uVar10 * uVar15;
              plVar7 = *(long **)(*plVar14 + uVar10 * 8);
              if (plVar7 == (long *)0x0) goto LAB_006ba7c4;
LAB_006ba740:
              *plVar9 = *plVar7;
LAB_006ba82c:
              *plVar7 = (long)plVar9;
            }
            else {
              plVar7 = *(long **)(*plVar14 + uVar10 * 8);
joined_r0x006ba7ac:
              if (plVar7 != (long *)0x0) goto LAB_006ba740;
LAB_006ba7c4:
              *plVar9 = *plVar17;
              *plVar17 = (long)plVar9;
              *(long **)(*plVar14 + uVar10 * 8) = plVar17;
              if (*plVar9 != 0) {
                uVar10 = *(ulong *)(*plVar9 + 8);
                if ((uVar15 - 1 & uVar15) == 0) {
                  uVar10 = uVar10 & uVar15 - 1;
                }
                else if (uVar15 <= uVar10) {
                  uVar11 = 0;
                  if (uVar15 != 0) {
                    uVar11 = uVar10 / uVar15;
                  }
                  uVar10 = uVar10 - uVar11 * uVar15;
                }
                plVar7 = (long *)(*plVar14 + uVar10 * 8);
                goto LAB_006ba82c;
              }
            }
            param_1[0x15] = param_1[0x15] + 1;
            puVar18 = puVar18 + 1;
            if (puVar18 == puVar16) {
              return;
            }
          }
          else {
            uVar12 = uVar15 - 1;
            if ((uVar12 & uVar15) == 0) {
              uVar10 = uVar12 & uVar11;
              plVar9 = *(long **)(*plVar14 + uVar10 * 8);
            }
            else {
              uVar10 = uVar11;
              if (uVar15 <= uVar11) {
                uVar10 = 0;
                if (uVar15 != 0) {
                  uVar10 = uVar11 / uVar15;
                }
                uVar10 = uVar11 - uVar10 * uVar15;
              }
              plVar9 = *(long **)(*plVar14 + uVar10 * 8);
            }
            if (plVar9 == (long *)0x0) goto LAB_006ba650;
            if ((uVar12 & uVar15) == 0) {
              do {
                plVar9 = (long *)*plVar9;
                if ((plVar9 == (long *)0x0) ||
                   (plVar9[1] != uVar11 && (plVar9[1] & uVar12) != uVar10)) goto LAB_006ba650;
              } while (plVar9[2] != uVar11);
            }
            else {
              do {
                plVar9 = (long *)*plVar9;
                if (plVar9 == (long *)0x0) goto LAB_006ba650;
                uVar12 = plVar9[1];
                if (uVar12 != uVar11) {
                  if (uVar15 <= uVar12) {
                    uVar2 = 0;
                    if (uVar15 != 0) {
                      uVar2 = uVar12 / uVar15;
                    }
                    uVar12 = uVar12 - uVar2 * uVar15;
                  }
                  if (uVar12 != uVar10) goto LAB_006ba650;
                }
              } while (plVar9[2] != uVar11);
            }
            if (puVar4 != (undefined8 *)0x0) {
              (**(code **)*puVar4)(puVar4);
              (**(code **)(*param_2 + 0x18))(param_2,puVar4,0x68,8);
            }
            puVar18 = puVar18 + 1;
            if (puVar18 == puVar16) {
              return;
            }
          }
        }
LAB_006ba86c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
  }
  return;
}


