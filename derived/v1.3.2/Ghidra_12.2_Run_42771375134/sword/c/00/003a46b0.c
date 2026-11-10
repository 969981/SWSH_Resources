/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a46b0; name: FUN_003a46b0
 */


undefined8
FUN_003a46b0(undefined8 param_1,long param_2,float *param_3,undefined8 *param_4,long param_5)

{
  uint *puVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  float *pfVar17;
  int iVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 local_68;
  undefined4 local_64;
  
  uVar12 = *(uint *)(param_2 + 0x30);
  if (uVar12 != 0) {
    uVar16 = 0;
    lVar15 = param_2 + 0x38;
    pfVar17 = (float *)(param_2 + 0x14c);
    do {
      if (((((*param_3 <= pfVar17[-2]) && (pfVar17[-5] <= param_3[3])) &&
           (param_3[1] <= pfVar17[-1])) && ((pfVar17[-4] <= param_3[4] && (param_3[2] <= *pfVar17)))
          ) && (pfVar17[-3] <= param_3[5])) {
        local_68 = 0xbf800000;
        uVar11 = (**(code **)*param_4)(param_4,&local_68,lVar15);
        if ((uVar11 & 1) == 0) {
          return 0;
        }
        uVar12 = *(uint *)(param_2 + 0x30);
      }
      uVar16 = uVar16 + 1;
      lVar15 = lVar15 + 0x10;
      pfVar17 = pfVar17 + 6;
    } while (uVar16 < uVar12);
  }
  if (*(int *)(param_2 + 0x328) != 0) {
    if ((*param_3 <= *(float *)(param_2 + 0x340) + *(float *)(param_2 + 0x350)) &&
       (*(float *)(param_2 + 0x340) - *(float *)(param_2 + 0x350) <= param_3[3])) {
      if ((param_3[1] <= *(float *)(param_2 + 0x344) + *(float *)(param_2 + 0x354)) &&
         (*(float *)(param_2 + 0x344) - *(float *)(param_2 + 0x354) <= param_3[4])) {
        if ((param_3[2] <= *(float *)(param_2 + 0x348) + *(float *)(param_2 + 0x358)) &&
           (*(float *)(param_2 + 0x348) - *(float *)(param_2 + 0x358) <= param_3[5])) {
          puVar1 = (uint *)(param_5 + (ulong)*(uint *)(param_2 + 0x330) * 4);
          uVar12 = *puVar1;
          uVar2 = puVar1[3];
          fVar3 = (float)(uVar12 | 0x80000000);
          fVar4 = (float)(uVar2 | 0x80000000);
          if ((int)uVar12 < 0) {
            fVar3 = (float)~uVar12;
          }
          uVar16 = 0;
          if ((int)uVar2 < 0) {
            fVar4 = (float)~uVar2;
          }
          do {
            lVar15 = param_2 + uVar16 * 4;
            if (*(int *)(lVar15 + 0x360) != 0) {
              lVar14 = param_2 + uVar16 * 0x20;
              if (*param_3 <= *(float *)(lVar14 + 0x390) + *(float *)(lVar14 + 0x3a0)) {
                fVar25 = *(float *)(lVar14 + 0x394) + *(float *)(lVar14 + 0x3a4);
                fVar20 = *(float *)(lVar14 + 0x394) - *(float *)(lVar14 + 0x3a4);
                fVar21 = param_3[4];
                fVar24 = *(float *)(lVar14 + 0x398) + *(float *)(lVar14 + 0x3a8);
                fVar22 = *(float *)(lVar14 + 0x398) - *(float *)(lVar14 + 0x3a8);
                fVar23 = param_3[1];
                fVar26 = param_3[2];
                bVar5 = false;
                bVar7 = false;
                bVar9 = false;
                if (*(float *)(lVar14 + 0x390) - *(float *)(lVar14 + 0x3a0) <= param_3[3]) {
                  bVar5 = false;
                  bVar7 = false;
                  bVar9 = true;
                  if (!NAN(fVar23) && !NAN(fVar25)) {
                    bVar5 = fVar23 < fVar25;
                    bVar7 = fVar23 == fVar25;
                    bVar9 = false;
                  }
                }
                bVar6 = false;
                bVar8 = false;
                bVar10 = false;
                if (bVar7 || bVar5 != bVar9) {
                  bVar6 = false;
                  bVar8 = false;
                  bVar10 = true;
                  if (!NAN(fVar20) && !NAN(fVar21)) {
                    bVar6 = fVar20 < fVar21;
                    bVar8 = fVar20 == fVar21;
                    bVar10 = false;
                  }
                }
                fVar20 = param_3[5];
                bVar5 = false;
                bVar7 = false;
                bVar9 = false;
                if (bVar8 || bVar6 != bVar10) {
                  bVar5 = false;
                  bVar7 = false;
                  bVar9 = true;
                  if (!NAN(fVar26) && !NAN(fVar24)) {
                    bVar5 = fVar26 < fVar24;
                    bVar7 = fVar26 == fVar24;
                    bVar9 = false;
                  }
                }
                bVar6 = false;
                bVar8 = false;
                bVar10 = false;
                if (bVar7 || bVar5 != bVar9) {
                  bVar6 = false;
                  bVar8 = false;
                  bVar10 = true;
                  if (!NAN(fVar22) && !NAN(fVar20)) {
                    bVar6 = fVar22 < fVar20;
                    bVar8 = fVar22 == fVar20;
                    bVar10 = false;
                  }
                }
                if (bVar8 || bVar6 != bVar10) {
                  uVar11 = 0;
                  do {
                    if (*(int *)(param_2 + uVar16 * 0xe0 + uVar11 * 4 + 0x440) != 0) {
                      lVar14 = param_2 + uVar16 * 0xe0 + uVar11 * 0x20;
                      if (*param_3 <= *(float *)(lVar14 + 0x470) + *(float *)(lVar14 + 0x480)) {
                        fVar25 = *(float *)(lVar14 + 0x474) + *(float *)(lVar14 + 0x484);
                        fVar20 = *(float *)(lVar14 + 0x474) - *(float *)(lVar14 + 0x484);
                        fVar21 = param_3[4];
                        fVar24 = *(float *)(lVar14 + 0x478) + *(float *)(lVar14 + 0x488);
                        fVar22 = *(float *)(lVar14 + 0x478) - *(float *)(lVar14 + 0x488);
                        fVar23 = param_3[1];
                        fVar26 = param_3[2];
                        bVar5 = false;
                        bVar7 = false;
                        bVar9 = false;
                        if (*(float *)(lVar14 + 0x470) - *(float *)(lVar14 + 0x480) <= param_3[3]) {
                          bVar5 = false;
                          bVar7 = false;
                          bVar9 = true;
                          if (!NAN(fVar23) && !NAN(fVar25)) {
                            bVar5 = fVar23 < fVar25;
                            bVar7 = fVar23 == fVar25;
                            bVar9 = false;
                          }
                        }
                        bVar6 = false;
                        bVar8 = false;
                        bVar10 = false;
                        if (bVar7 || bVar5 != bVar9) {
                          bVar6 = false;
                          bVar8 = false;
                          bVar10 = true;
                          if (!NAN(fVar20) && !NAN(fVar21)) {
                            bVar6 = fVar20 < fVar21;
                            bVar8 = fVar20 == fVar21;
                            bVar10 = false;
                          }
                        }
                        fVar20 = param_3[5];
                        bVar5 = false;
                        bVar7 = false;
                        bVar9 = false;
                        if (bVar8 || bVar6 != bVar10) {
                          bVar5 = false;
                          bVar7 = false;
                          bVar9 = true;
                          if (!NAN(fVar26) && !NAN(fVar24)) {
                            bVar5 = fVar26 < fVar24;
                            bVar7 = fVar26 == fVar24;
                            bVar9 = false;
                          }
                        }
                        bVar6 = false;
                        bVar8 = false;
                        bVar10 = false;
                        if (bVar7 || bVar5 != bVar9) {
                          bVar6 = false;
                          bVar8 = false;
                          bVar10 = true;
                          if (!NAN(fVar22) && !NAN(fVar20)) {
                            bVar6 = fVar22 < fVar20;
                            bVar8 = fVar22 == fVar20;
                            bVar10 = false;
                          }
                        }
                        if (bVar8 || bVar6 != bVar10) {
                          uVar19 = 0;
                          do {
                            iVar18 = *(int *)(param_2 + uVar16 * 0x460 + uVar11 * 0xe0 + uVar19 * 4
                                             + 0x8a0);
                            if (iVar18 != 0) {
                              lVar14 = param_2 + uVar16 * 0x460 + uVar11 * 0xe0 + uVar19 * 0x20;
                              if (*param_3 <=
                                  *(float *)(lVar14 + 0x8d0) + *(float *)(lVar14 + 0x8e0)) {
                                fVar25 = *(float *)(lVar14 + 0x8d4) + *(float *)(lVar14 + 0x8e4);
                                fVar20 = *(float *)(lVar14 + 0x8d4) - *(float *)(lVar14 + 0x8e4);
                                fVar21 = param_3[4];
                                fVar24 = *(float *)(lVar14 + 0x8d8) + *(float *)(lVar14 + 0x8e8);
                                fVar22 = *(float *)(lVar14 + 0x8d8) - *(float *)(lVar14 + 0x8e8);
                                fVar23 = param_3[1];
                                fVar26 = param_3[2];
                                bVar5 = false;
                                bVar7 = false;
                                bVar9 = false;
                                if (*(float *)(lVar14 + 0x8d0) - *(float *)(lVar14 + 0x8e0) <=
                                    param_3[3]) {
                                  bVar5 = false;
                                  bVar7 = false;
                                  bVar9 = true;
                                  if (!NAN(fVar23) && !NAN(fVar25)) {
                                    bVar5 = fVar23 < fVar25;
                                    bVar7 = fVar23 == fVar25;
                                    bVar9 = false;
                                  }
                                }
                                bVar6 = false;
                                bVar8 = false;
                                bVar10 = false;
                                if (bVar7 || bVar5 != bVar9) {
                                  bVar6 = false;
                                  bVar8 = false;
                                  bVar10 = true;
                                  if (!NAN(fVar20) && !NAN(fVar21)) {
                                    bVar6 = fVar20 < fVar21;
                                    bVar8 = fVar20 == fVar21;
                                    bVar10 = false;
                                  }
                                }
                                fVar20 = param_3[5];
                                bVar5 = false;
                                bVar7 = false;
                                bVar9 = false;
                                if (bVar8 || bVar6 != bVar10) {
                                  bVar5 = false;
                                  bVar7 = false;
                                  bVar9 = true;
                                  if (!NAN(fVar26) && !NAN(fVar24)) {
                                    bVar5 = fVar26 < fVar24;
                                    bVar7 = fVar26 == fVar24;
                                    bVar9 = false;
                                  }
                                }
                                bVar6 = false;
                                bVar8 = false;
                                bVar10 = false;
                                if (bVar7 || bVar5 != bVar9) {
                                  bVar6 = false;
                                  bVar8 = false;
                                  bVar10 = true;
                                  if (!NAN(fVar22) && !NAN(fVar20)) {
                                    bVar6 = fVar22 < fVar20;
                                    bVar8 = fVar22 == fVar20;
                                    bVar10 = false;
                                  }
                                }
                                if (bVar8 || bVar6 != bVar10) {
                                  uVar13 = (ulong)(uint)(*(int *)(param_2 + uVar16 * 0xe0 +
                                                                  uVar11 * 4 + 0x454) +
                                                         *(int *)(lVar15 + 0x374) +
                                                        *(int *)(param_2 + uVar16 * 0x460 +
                                                                 uVar11 * 0xe0 + uVar19 * 4 + 0x8b4)
                                                        );
                                  lVar14 = *(long *)(param_2 + 0x28) + uVar13 * 0x10;
                                  pfVar17 = (float *)(*(long *)(param_2 + 0x20) + uVar13 * 0x20 +
                                                     0x10);
                                  do {
                                    if ((uint)fVar3 <= (uint)pfVar17[3]) {
                                      if ((uint)fVar4 < (uint)pfVar17[-1]) break;
                                      if ((*param_3 <= pfVar17[-4] + *pfVar17) &&
                                         (pfVar17[-4] - *pfVar17 <= param_3[3])) {
                                        if ((param_3[1] <= pfVar17[-3] + pfVar17[1]) &&
                                           (pfVar17[-3] - pfVar17[1] <= param_3[4])) {
                                          if ((param_3[2] <= pfVar17[-2] + pfVar17[2]) &&
                                             (pfVar17[-2] - pfVar17[2] <= param_3[5])) {
                                            local_64 = 0xbf800000;
                                            uVar13 = (**(code **)*param_4)(param_4,&local_64,lVar14)
                                            ;
                                            if ((uVar13 & 1) == 0) {
                                              return 0;
                                            }
                                          }
                                        }
                                      }
                                    }
                                    iVar18 = iVar18 + -1;
                                    lVar14 = lVar14 + 0x10;
                                    pfVar17 = pfVar17 + 8;
                                  } while (iVar18 != 0);
                                }
                              }
                            }
                            uVar19 = uVar19 + 1;
                          } while (uVar19 < 5);
                        }
                      }
                    }
                    uVar11 = uVar11 + 1;
                  } while (uVar11 < 5);
                }
              }
            }
            uVar16 = uVar16 + 1;
            if (4 < uVar16) {
              return 1;
            }
          } while( true );
        }
      }
    }
  }
  return 1;
}


