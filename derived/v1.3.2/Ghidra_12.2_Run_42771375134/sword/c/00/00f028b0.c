/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f028b0; name: FUN_00f028b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f028b0(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  long lVar27;
  long *plVar28;
  
  uVar21 = uRam0000000002a5ee58;
  uVar20 = _DAT_02a5ee50;
  uVar19 = uRam0000000002a5ee48;
  uVar18 = _DAT_02a5ee40;
  uVar17 = uRam0000000002a5ee38;
  uVar16 = _DAT_02a5ee30;
  uVar15 = uRam0000000002a5ee28;
  uVar14 = _DAT_02a5ee20;
  uVar13 = uRam0000000002a5ee18;
  uVar12 = _DAT_02a5ee10;
  uVar11 = uRam0000000002a5ee08;
  uVar10 = _DAT_02a5ee00;
  uVar9 = uRam0000000002a5edf8;
  uVar8 = _DAT_02a5edf0;
  uVar7 = uRam0000000002a5ede8;
  uVar6 = _DAT_02a5ede0;
  lVar22 = *param_2;
  lVar24 = *(long *)(lVar22 + 800);
  if (*(long *)(lVar22 + 0x328) != lVar24) {
    uVar23 = 0;
    plVar1 = (long *)(lVar22 + 800);
    plVar2 = (long *)(lVar22 + 0x328);
    plVar3 = (long *)(lVar22 + 0x218);
    do {
      lVar22 = *(long *)(*plVar3 + 0x290);
      lVar27 = lVar22 + uVar23 * 0x4c0;
      plVar26 = *(long **)(lVar27 + 0xd8);
      plVar28 = *(long **)(lVar27 + 0xe0);
      if (plVar28 != plVar26) {
        plVar25 = plVar26;
        if (*plVar26 != -0x37142ffd774f1628) {
          do {
            plVar25 = plVar25 + 4;
            if (plVar28 == plVar25) goto LAB_00f02ab4;
          } while (*plVar25 != -0x37142ffd774f1628);
        }
        if ((plVar25 != plVar28) &&
           (((long)plVar25 - (long)plVar26 & 0x1fffffffe0U) != 0x1fffffffe0)) {
          lVar24 = lVar24 + uVar23 * 200;
          lVar22 = *(long *)(lVar24 + 0x80);
          uVar4 = ((long)plVar25 - (long)plVar26) * 0x8000000 >> 0x20;
          if ((ulong)(*(long *)(lVar24 + 0x88) - lVar22 >> 4) <= uVar4) goto LAB_00f03834;
          puVar5 = (undefined8 *)(lVar22 + uVar4 * 0x10);
          puVar5[1] = uVar7;
          *puVar5 = uVar6;
          lVar22 = *(long *)(*plVar3 + 0x290);
          lVar24 = lVar22 + uVar23 * 0x4c0;
          plVar26 = *(long **)(lVar24 + 0xd8);
          plVar28 = *(long **)(lVar24 + 0xe0);
        }
LAB_00f02ab4:
        if (plVar28 != plVar26) {
          plVar25 = plVar26;
          if (*plVar26 != 0x199c5c4e449d7538) {
            do {
              plVar25 = plVar25 + 4;
              if (plVar28 == plVar25) goto LAB_00f02b50;
            } while (*plVar25 != 0x199c5c4e449d7538);
          }
          if ((plVar25 != plVar28) &&
             (((long)plVar25 - (long)plVar26 & 0x1fffffffe0U) != 0x1fffffffe0)) {
            if ((ulong)((*plVar2 - *plVar1 >> 3) * -0x70a3d70a3d70a3d7) <= uVar23)
            goto LAB_00f03834;
            lVar22 = *plVar1 + uVar23 * 200;
            lVar24 = *(long *)(lVar22 + 0x80);
            uVar4 = ((long)plVar25 - (long)plVar26) * 0x8000000 >> 0x20;
            if ((ulong)(*(long *)(lVar22 + 0x88) - lVar24 >> 4) <= uVar4) goto LAB_00f03834;
            puVar5 = (undefined8 *)(lVar24 + uVar4 * 0x10);
            puVar5[1] = uVar7;
            *puVar5 = uVar6;
            lVar22 = *(long *)(*plVar3 + 0x290);
            lVar24 = lVar22 + uVar23 * 0x4c0;
            plVar26 = *(long **)(lVar24 + 0xd8);
            plVar28 = *(long **)(lVar24 + 0xe0);
          }
LAB_00f02b50:
          if (plVar28 != plVar26) {
            plVar25 = plVar26;
            if (*plVar26 != 0x199c5d4e449d76eb) {
              do {
                plVar25 = plVar25 + 4;
                if (plVar28 == plVar25) goto LAB_00f02bec;
              } while (*plVar25 != 0x199c5d4e449d76eb);
            }
            if ((plVar25 != plVar28) &&
               (((long)plVar25 - (long)plVar26 & 0x1fffffffe0U) != 0x1fffffffe0)) {
              if ((ulong)((*plVar2 - *plVar1 >> 3) * -0x70a3d70a3d70a3d7) <= uVar23)
              goto LAB_00f03834;
              lVar22 = *plVar1 + uVar23 * 200;
              lVar24 = *(long *)(lVar22 + 0x80);
              uVar4 = ((long)plVar25 - (long)plVar26) * 0x8000000 >> 0x20;
              if ((ulong)(*(long *)(lVar22 + 0x88) - lVar24 >> 4) <= uVar4) goto LAB_00f03834;
              puVar5 = (undefined8 *)(lVar24 + uVar4 * 0x10);
              puVar5[1] = uVar7;
              *puVar5 = uVar6;
              lVar22 = *(long *)(*plVar3 + 0x290);
              lVar24 = lVar22 + uVar23 * 0x4c0;
              plVar26 = *(long **)(lVar24 + 0xd8);
              plVar28 = *(long **)(lVar24 + 0xe0);
            }
LAB_00f02bec:
            if (plVar28 != plVar26) {
              plVar25 = plVar26;
              if (*plVar26 != 0x4b6017cc51dc6d2b) {
                do {
                  plVar25 = plVar25 + 4;
                  if (plVar28 == plVar25) goto LAB_00f02c88;
                } while (*plVar25 != 0x4b6017cc51dc6d2b);
              }
              if ((plVar25 != plVar28) &&
                 (((long)plVar25 - (long)plVar26 & 0x1fffffffe0U) != 0x1fffffffe0)) {
                if ((ulong)((*plVar2 - *plVar1 >> 3) * -0x70a3d70a3d70a3d7) <= uVar23)
                goto LAB_00f03834;
                lVar22 = *plVar1 + uVar23 * 200;
                lVar24 = *(long *)(lVar22 + 0x80);
                uVar4 = ((long)plVar25 - (long)plVar26) * 0x8000000 >> 0x20;
                if ((ulong)(*(long *)(lVar22 + 0x88) - lVar24 >> 4) <= uVar4) goto LAB_00f03834;
                puVar5 = (undefined8 *)(lVar24 + uVar4 * 0x10);
                puVar5[1] = uVar7;
                *puVar5 = uVar6;
                lVar22 = *(long *)(*plVar3 + 0x290);
                lVar24 = lVar22 + uVar23 * 0x4c0;
                plVar26 = *(long **)(lVar24 + 0xd8);
                plVar28 = *(long **)(lVar24 + 0xe0);
              }
LAB_00f02c88:
              if (plVar28 != plVar26) {
                plVar25 = plVar26;
                if (*plVar26 != 0x4b6016cc51dc6b78) {
                  do {
                    plVar25 = plVar25 + 4;
                    if (plVar28 == plVar25) goto LAB_00f02d24;
                  } while (*plVar25 != 0x4b6016cc51dc6b78);
                }
                if ((plVar25 != plVar28) &&
                   (((long)plVar25 - (long)plVar26 & 0x1fffffffe0U) != 0x1fffffffe0)) {
                  if ((ulong)((*plVar2 - *plVar1 >> 3) * -0x70a3d70a3d70a3d7) <= uVar23)
                  goto LAB_00f03834;
                  lVar22 = *plVar1 + uVar23 * 200;
                  lVar24 = *(long *)(lVar22 + 0x80);
                  uVar4 = ((long)plVar25 - (long)plVar26) * 0x8000000 >> 0x20;
                  if ((ulong)(*(long *)(lVar22 + 0x88) - lVar24 >> 4) <= uVar4) goto LAB_00f03834;
                  puVar5 = (undefined8 *)(lVar24 + uVar4 * 0x10);
                  puVar5[1] = uVar7;
                  *puVar5 = uVar6;
                  lVar22 = *(long *)(*plVar3 + 0x290);
                  lVar24 = lVar22 + uVar23 * 0x4c0;
                  plVar26 = *(long **)(lVar24 + 0xd8);
                  plVar28 = *(long **)(lVar24 + 0xe0);
                }
LAB_00f02d24:
                if (plVar28 != plVar26) {
                  plVar25 = plVar26;
                  if (*plVar26 != 0x20ea26fe9681e56f) {
                    do {
                      plVar25 = plVar25 + 4;
                      if (plVar28 == plVar25) goto LAB_00f02dc0;
                    } while (*plVar25 != 0x20ea26fe9681e56f);
                  }
                  if ((plVar25 != plVar28) &&
                     (((long)plVar25 - (long)plVar26 & 0x1fffffffe0U) != 0x1fffffffe0)) {
                    if ((ulong)((*plVar2 - *plVar1 >> 3) * -0x70a3d70a3d70a3d7) <= uVar23)
                    goto LAB_00f03834;
                    lVar22 = *plVar1 + uVar23 * 200;
                    lVar24 = *(long *)(lVar22 + 0x80);
                    uVar4 = ((long)plVar25 - (long)plVar26) * 0x8000000 >> 0x20;
                    if ((ulong)(*(long *)(lVar22 + 0x88) - lVar24 >> 4) <= uVar4) goto LAB_00f03834;
                    puVar5 = (undefined8 *)(lVar24 + uVar4 * 0x10);
                    puVar5[1] = uVar9;
                    *puVar5 = uVar8;
                    lVar22 = *(long *)(*plVar3 + 0x290);
                    lVar24 = lVar22 + uVar23 * 0x4c0;
                    plVar26 = *(long **)(lVar24 + 0xd8);
                    plVar28 = *(long **)(lVar24 + 0xe0);
                  }
LAB_00f02dc0:
                  if (plVar28 != plVar26) {
                    plVar25 = plVar26;
                    if (*plVar26 != 0x6fc5a199beb8c06d) {
                      do {
                        plVar25 = plVar25 + 4;
                        if (plVar28 == plVar25) goto LAB_00f02e5c;
                      } while (*plVar25 != 0x6fc5a199beb8c06d);
                    }
                    if ((plVar25 != plVar28) &&
                       (((long)plVar25 - (long)plVar26 & 0x1fffffffe0U) != 0x1fffffffe0)) {
                      if ((ulong)((*plVar2 - *plVar1 >> 3) * -0x70a3d70a3d70a3d7) <= uVar23)
                      goto LAB_00f03834;
                      lVar22 = *plVar1 + uVar23 * 200;
                      lVar24 = *(long *)(lVar22 + 0x80);
                      uVar4 = ((long)plVar25 - (long)plVar26) * 0x8000000 >> 0x20;
                      if ((ulong)(*(long *)(lVar22 + 0x88) - lVar24 >> 4) <= uVar4)
                      goto LAB_00f03834;
                      puVar5 = (undefined8 *)(lVar24 + uVar4 * 0x10);
                      puVar5[1] = uVar9;
                      *puVar5 = uVar8;
                      lVar22 = *(long *)(*plVar3 + 0x290);
                      lVar24 = lVar22 + uVar23 * 0x4c0;
                      plVar26 = *(long **)(lVar24 + 0xd8);
                      plVar28 = *(long **)(lVar24 + 0xe0);
                    }
LAB_00f02e5c:
                    if (plVar28 != plVar26) {
                      plVar25 = plVar26;
                      if (*plVar26 != 0x6fc5a099beb8beba) {
                        do {
                          plVar25 = plVar25 + 4;
                          if (plVar28 == plVar25) goto LAB_00f02f18;
                        } while (*plVar25 != 0x6fc5a099beb8beba);
                      }
                      if ((plVar25 != plVar28) &&
                         (((long)plVar25 - (long)plVar26 & 0x1fffffffe0U) != 0x1fffffffe0)) {
                        if ((ulong)((*plVar2 - *plVar1 >> 3) * -0x70a3d70a3d70a3d7) <= uVar23)
                        goto LAB_00f03834;
                        lVar22 = *plVar1 + uVar23 * 200;
                        lVar24 = *(long *)(lVar22 + 0x80);
                        uVar4 = ((long)plVar25 - (long)plVar26) * 0x8000000 >> 0x20;
                        if ((ulong)(*(long *)(lVar22 + 0x88) - lVar24 >> 4) <= uVar4)
                        goto LAB_00f03834;
                        puVar5 = (undefined8 *)(lVar24 + uVar4 * 0x10);
                        puVar5[1] = uVar9;
                        *puVar5 = uVar8;
                        lVar22 = *(long *)(*plVar3 + 0x290);
                        lVar24 = lVar22 + uVar23 * 0x4c0;
                        plVar26 = *(long **)(lVar24 + 0xd8);
                        plVar28 = *(long **)(lVar24 + 0xe0);
                      }
LAB_00f02f18:
                      if (plVar28 != plVar26) {
                        plVar25 = plVar26;
                        if (*plVar26 != -0x4fb14af6f256d1c6) {
                          do {
                            plVar25 = plVar25 + 4;
                            if (plVar28 == plVar25) goto LAB_00f02fd4;
                          } while (*plVar25 != -0x4fb14af6f256d1c6);
                        }
                        if ((plVar25 != plVar28) &&
                           (((long)plVar25 - (long)plVar26 & 0x1fffffffe0U) != 0x1fffffffe0)) {
                          if ((ulong)((*plVar2 - *plVar1 >> 3) * -0x70a3d70a3d70a3d7) <= uVar23)
                          goto LAB_00f03834;
                          lVar22 = *plVar1 + uVar23 * 200;
                          lVar24 = *(long *)(lVar22 + 0x80);
                          uVar4 = ((long)plVar25 - (long)plVar26) * 0x8000000 >> 0x20;
                          if ((ulong)(*(long *)(lVar22 + 0x88) - lVar24 >> 4) <= uVar4)
                          goto LAB_00f03834;
                          puVar5 = (undefined8 *)(lVar24 + uVar4 * 0x10);
                          puVar5[1] = uVar9;
                          *puVar5 = uVar8;
                          lVar22 = *(long *)(*plVar3 + 0x290);
                          lVar24 = lVar22 + uVar23 * 0x4c0;
                          plVar26 = *(long **)(lVar24 + 0xd8);
                          plVar28 = *(long **)(lVar24 + 0xe0);
                        }
LAB_00f02fd4:
                        if (plVar28 != plVar26) {
                          plVar25 = plVar26;
                          if (*plVar26 != -0x4fb149f6f256d013) {
                            do {
                              plVar25 = plVar25 + 4;
                              if (plVar28 == plVar25) goto LAB_00f03090;
                            } while (*plVar25 != -0x4fb149f6f256d013);
                          }
                          if ((plVar25 != plVar28) &&
                             (((long)plVar25 - (long)plVar26 & 0x1fffffffe0U) != 0x1fffffffe0)) {
                            if ((ulong)((*plVar2 - *plVar1 >> 3) * -0x70a3d70a3d70a3d7) <= uVar23)
                            goto LAB_00f03834;
                            lVar22 = *plVar1 + uVar23 * 200;
                            lVar24 = *(long *)(lVar22 + 0x80);
                            uVar4 = ((long)plVar25 - (long)plVar26) * 0x8000000 >> 0x20;
                            if ((ulong)(*(long *)(lVar22 + 0x88) - lVar24 >> 4) <= uVar4)
                            goto LAB_00f03834;
                            puVar5 = (undefined8 *)(lVar24 + uVar4 * 0x10);
                            puVar5[1] = uVar9;
                            *puVar5 = uVar8;
                            lVar22 = *(long *)(*plVar3 + 0x290);
                            lVar24 = lVar22 + uVar23 * 0x4c0;
                            plVar26 = *(long **)(lVar24 + 0xd8);
                            plVar28 = *(long **)(lVar24 + 0xe0);
                          }
LAB_00f03090:
                          if (plVar28 != plVar26) {
                            plVar25 = plVar26;
                            if (*plVar26 != -0xd68b3d6dd31605a) {
                              do {
                                plVar25 = plVar25 + 4;
                                if (plVar28 == plVar25) goto LAB_00f0314c;
                              } while (*plVar25 != -0xd68b3d6dd31605a);
                            }
                            if ((plVar25 != plVar28) &&
                               (((long)plVar25 - (long)plVar26 & 0x1fffffffe0U) != 0x1fffffffe0)) {
                              if ((ulong)((*plVar2 - *plVar1 >> 3) * -0x70a3d70a3d70a3d7) <= uVar23)
                              goto LAB_00f03834;
                              lVar22 = *plVar1 + uVar23 * 200;
                              lVar24 = *(long *)(lVar22 + 0x80);
                              uVar4 = ((long)plVar25 - (long)plVar26) * 0x8000000 >> 0x20;
                              if ((ulong)(*(long *)(lVar22 + 0x88) - lVar24 >> 4) <= uVar4)
                              goto LAB_00f03834;
                              puVar5 = (undefined8 *)(lVar24 + uVar4 * 0x10);
                              puVar5[1] = uVar11;
                              *puVar5 = uVar10;
                              lVar22 = *(long *)(*plVar3 + 0x290);
                              lVar24 = lVar22 + uVar23 * 0x4c0;
                              plVar26 = *(long **)(lVar24 + 0xd8);
                              plVar28 = *(long **)(lVar24 + 0xe0);
                            }
LAB_00f0314c:
                            if (plVar28 != plVar26) {
                              lVar24 = *plVar26;
                              plVar25 = plVar26;
                              while (lVar24 != 0x4d549c9f4d7183f7) {
                                plVar25 = plVar25 + 4;
                                if (plVar28 == plVar25) goto LAB_00f0320c;
                                lVar24 = *plVar25;
                              }
                              if ((plVar25 != plVar28) &&
                                 (((long)plVar25 - (long)plVar26 & 0x1fffffffe0U) != 0x1fffffffe0))
                              {
                                if ((ulong)((*plVar2 - *plVar1 >> 3) * -0x70a3d70a3d70a3d7) <=
                                    uVar23) goto LAB_00f03834;
                                lVar22 = *plVar1 + uVar23 * 200;
                                lVar24 = *(long *)(lVar22 + 0x80);
                                uVar4 = ((long)plVar25 - (long)plVar26) * 0x8000000 >> 0x20;
                                if ((ulong)(*(long *)(lVar22 + 0x88) - lVar24 >> 4) <= uVar4)
                                goto LAB_00f03834;
                                puVar5 = (undefined8 *)(lVar24 + uVar4 * 0x10);
                                puVar5[1] = uVar13;
                                *puVar5 = uVar12;
                                lVar22 = *(long *)(*plVar3 + 0x290);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_00f0320c:
      lVar24 = lVar22 + uVar23 * 0x4c0;
      plVar26 = *(long **)(lVar24 + 0xa8);
      plVar28 = *(long **)(lVar24 + 0xb0);
      if (plVar28 == plVar26) {
LAB_00f0336c:
        lVar24 = lVar22 + uVar23 * 0x4c0;
        plVar26 = *(long **)(lVar24 + 0xd8);
        plVar28 = *(long **)(lVar24 + 0xe0);
        if (plVar28 == plVar26) goto LAB_00f034c0;
LAB_00f0337c:
        plVar25 = plVar26;
        if (*plVar26 != 0x7796c6cd1ace263a) {
          do {
            plVar25 = plVar25 + 4;
            if (plVar28 == plVar25) goto LAB_00f03410;
          } while (*plVar25 != 0x7796c6cd1ace263a);
        }
        if ((plVar25 != plVar28) &&
           (((long)plVar25 - (long)plVar26 & 0x1fffffffe0U) != 0x1fffffffe0)) {
          if ((ulong)((*plVar2 - *plVar1 >> 3) * -0x70a3d70a3d70a3d7) <= uVar23) goto LAB_00f03834;
          lVar22 = *plVar1 + uVar23 * 200;
          lVar24 = *(long *)(lVar22 + 0x80);
          uVar4 = ((long)plVar25 - (long)plVar26) * 0x8000000 >> 0x20;
          if ((ulong)(*(long *)(lVar22 + 0x88) - lVar24 >> 4) <= uVar4) goto LAB_00f03834;
          puVar5 = (undefined8 *)(lVar24 + uVar4 * 0x10);
          puVar5[1] = uVar15;
          *puVar5 = uVar14;
          lVar22 = *(long *)(*plVar3 + 0x290);
          lVar24 = lVar22 + uVar23 * 0x4c0;
          plVar26 = *(long **)(lVar24 + 0xd8);
          plVar28 = *(long **)(lVar24 + 0xe0);
        }
LAB_00f03410:
        if (plVar28 == plVar26) goto LAB_00f034c0;
        plVar25 = plVar26;
        if (*plVar26 != -0x1f1686a2e73dd60e) {
          do {
            plVar25 = plVar25 + 4;
            if (plVar28 == plVar25) goto LAB_00f034c0;
          } while (*plVar25 != -0x1f1686a2e73dd60e);
          if (plVar25 != plVar28) goto LAB_00f03430;
          goto LAB_00f034c0;
        }
        if (plVar26 == plVar28) goto LAB_00f034c0;
LAB_00f03430:
        if (((long)plVar25 - (long)plVar26 & 0x1fffffffe0U) == 0x1fffffffe0) goto LAB_00f034c0;
        if ((ulong)((*plVar2 - *plVar1 >> 3) * -0x70a3d70a3d70a3d7) <= uVar23) goto LAB_00f03834;
        lVar22 = *plVar1 + uVar23 * 200;
        lVar24 = *(long *)(lVar22 + 0x80);
        uVar4 = ((long)plVar25 - (long)plVar26) * 0x8000000 >> 0x20;
        if ((ulong)(*(long *)(lVar22 + 0x88) - lVar24 >> 4) <= uVar4) goto LAB_00f03834;
        puVar5 = (undefined8 *)(lVar24 + uVar4 * 0x10);
        puVar5[1] = uVar17;
        *puVar5 = uVar16;
        lVar22 = *(long *)(*plVar3 + 0x290);
        lVar24 = lVar22 + uVar23 * 0x4c0;
        plVar26 = *(long **)(lVar24 + 0xa8);
        plVar28 = *(long **)(lVar24 + 0xb0);
        if (plVar28 != plVar26) goto LAB_00f034d0;
LAB_00f03624:
        lVar24 = lVar22 + uVar23 * 0x4c0;
        plVar26 = *(long **)(lVar24 + 0xd8);
        plVar28 = *(long **)(lVar24 + 0xe0);
        if (plVar28 != plVar26) {
LAB_00f03634:
          plVar25 = plVar26;
          if (*plVar26 != 0x889021555fb0b9) {
            do {
              plVar25 = plVar25 + 4;
              if (plVar28 == plVar25) goto LAB_00f036c0;
            } while (*plVar25 != 0x889021555fb0b9);
          }
          if ((plVar25 != plVar28) &&
             (((long)plVar25 - (long)plVar26 & 0x1fffffffe0U) != 0x1fffffffe0)) {
            if ((ulong)((*plVar2 - *plVar1 >> 3) * -0x70a3d70a3d70a3d7) <= uVar23)
            goto LAB_00f03834;
            lVar22 = *plVar1 + uVar23 * 200;
            lVar24 = *(long *)(lVar22 + 0x80);
            uVar4 = ((long)plVar25 - (long)plVar26) * 0x8000000 >> 0x20;
            if ((ulong)(*(long *)(lVar22 + 0x88) - lVar24 >> 4) <= uVar4) goto LAB_00f03834;
            puVar5 = (undefined8 *)(lVar24 + uVar4 * 0x10);
            puVar5[1] = uVar19;
            *puVar5 = uVar18;
            lVar22 = *(long *)(*plVar3 + 0x290);
          }
        }
      }
      else {
        plVar25 = plVar26;
        if (*plVar26 != -0x75f83a6a2ca7a6de) {
          do {
            plVar25 = plVar25 + 4;
            if (plVar28 == plVar25) goto LAB_00f032b8;
          } while (*plVar25 != -0x75f83a6a2ca7a6de);
        }
        if ((plVar25 != plVar28) &&
           (((long)plVar25 - (long)plVar26 & 0x1fffffffe0U) != 0x1fffffffe0)) {
          if ((ulong)((*plVar2 - *plVar1 >> 3) * -0x70a3d70a3d70a3d7) <= uVar23) goto LAB_00f03834;
          lVar22 = *plVar1 + uVar23 * 200;
          lVar24 = *(long *)(lVar22 + 0x50);
          uVar4 = ((long)plVar25 - (long)plVar26) * 0x8000000 >> 0x20;
          if ((ulong)(*(long *)(lVar22 + 0x58) - lVar24 >> 2) <= uVar4) goto LAB_00f03834;
          *(undefined4 *)(lVar24 + uVar4 * 4) = 0x3e4ccccd;
          lVar22 = *(long *)(*plVar3 + 0x290);
          lVar24 = lVar22 + uVar23 * 0x4c0;
          plVar26 = *(long **)(lVar24 + 0xa8);
          plVar28 = *(long **)(lVar24 + 0xb0);
        }
LAB_00f032b8:
        if (plVar28 == plVar26) goto LAB_00f0336c;
        plVar25 = plVar26;
        if (*plVar26 != 0x62994f9fa2eda4f9) {
          do {
            plVar25 = plVar25 + 4;
            if (plVar28 == plVar25) goto LAB_00f0336c;
          } while (*plVar25 != 0x62994f9fa2eda4f9);
          if (plVar25 != plVar28) goto LAB_00f032d8;
          goto LAB_00f0336c;
        }
        if (plVar26 == plVar28) goto LAB_00f0336c;
LAB_00f032d8:
        if (((long)plVar25 - (long)plVar26 & 0x1fffffffe0U) == 0x1fffffffe0) goto LAB_00f0336c;
        if ((ulong)((*plVar2 - *plVar1 >> 3) * -0x70a3d70a3d70a3d7) <= uVar23) goto LAB_00f03834;
        lVar22 = *plVar1 + uVar23 * 200;
        lVar24 = *(long *)(lVar22 + 0x50);
        uVar4 = ((long)plVar25 - (long)plVar26) * 0x8000000 >> 0x20;
        if ((ulong)(*(long *)(lVar22 + 0x58) - lVar24 >> 2) <= uVar4) goto LAB_00f03834;
        *(undefined4 *)(lVar24 + uVar4 * 4) = 0x3f800000;
        lVar22 = *(long *)(*plVar3 + 0x290);
        lVar24 = lVar22 + uVar23 * 0x4c0;
        plVar26 = *(long **)(lVar24 + 0xd8);
        plVar28 = *(long **)(lVar24 + 0xe0);
        if (plVar28 != plVar26) goto LAB_00f0337c;
LAB_00f034c0:
        lVar24 = lVar22 + uVar23 * 0x4c0;
        plVar26 = *(long **)(lVar24 + 0xa8);
        plVar28 = *(long **)(lVar24 + 0xb0);
        if (plVar28 == plVar26) goto LAB_00f03624;
LAB_00f034d0:
        plVar25 = plVar26;
        if (*plVar26 != 0x2760a52fe80a206c) {
          do {
            plVar25 = plVar25 + 4;
            if (plVar28 == plVar25) goto LAB_00f0356c;
          } while (*plVar25 != 0x2760a52fe80a206c);
        }
        if ((plVar25 != plVar28) &&
           (((long)plVar25 - (long)plVar26 & 0x1fffffffe0U) != 0x1fffffffe0)) {
          if ((ulong)((*plVar2 - *plVar1 >> 3) * -0x70a3d70a3d70a3d7) <= uVar23) goto LAB_00f03834;
          lVar22 = *plVar1 + uVar23 * 200;
          lVar24 = *(long *)(lVar22 + 0x50);
          uVar4 = ((long)plVar25 - (long)plVar26) * 0x8000000 >> 0x20;
          if ((ulong)(*(long *)(lVar22 + 0x58) - lVar24 >> 2) <= uVar4) goto LAB_00f03834;
          *(undefined4 *)(lVar24 + uVar4 * 4) = 0x3fd9999a;
          lVar22 = *(long *)(*plVar3 + 0x290);
          lVar24 = lVar22 + uVar23 * 0x4c0;
          plVar26 = *(long **)(lVar24 + 0xa8);
          plVar28 = *(long **)(lVar24 + 0xb0);
        }
LAB_00f0356c:
        if (plVar28 == plVar26) goto LAB_00f03624;
        plVar25 = plVar26;
        if (*plVar26 != -0xb87ccab0b570982) {
          do {
            plVar25 = plVar25 + 4;
            if (plVar28 == plVar25) goto LAB_00f03624;
          } while (*plVar25 != -0xb87ccab0b570982);
          if (plVar25 != plVar28) goto LAB_00f0358c;
          goto LAB_00f03624;
        }
        if (plVar26 == plVar28) goto LAB_00f03624;
LAB_00f0358c:
        if (((long)plVar25 - (long)plVar26 & 0x1fffffffe0U) == 0x1fffffffe0) goto LAB_00f03624;
        if ((ulong)((*plVar2 - *plVar1 >> 3) * -0x70a3d70a3d70a3d7) <= uVar23) goto LAB_00f03834;
        lVar22 = *plVar1 + uVar23 * 200;
        lVar24 = *(long *)(lVar22 + 0x50);
        uVar4 = ((long)plVar25 - (long)plVar26) * 0x8000000 >> 0x20;
        if ((ulong)(*(long *)(lVar22 + 0x58) - lVar24 >> 2) <= uVar4) goto LAB_00f03834;
        *(undefined4 *)(lVar24 + uVar4 * 4) = 0x3f99999a;
        lVar22 = *(long *)(*plVar3 + 0x290);
        lVar24 = lVar22 + uVar23 * 0x4c0;
        plVar26 = *(long **)(lVar24 + 0xd8);
        plVar28 = *(long **)(lVar24 + 0xe0);
        if (plVar28 != plVar26) goto LAB_00f03634;
      }
LAB_00f036c0:
      lVar24 = lVar22 + uVar23 * 0x4c0;
      plVar26 = *(long **)(lVar24 + 0xa8);
      plVar28 = *(long **)(lVar24 + 0xb0);
      if (plVar28 != plVar26) {
        plVar25 = plVar26;
        if (*plVar26 != 0x7dff5a970abc75) {
          do {
            plVar25 = plVar25 + 4;
            if (plVar28 == plVar25) goto LAB_00f03760;
          } while (*plVar25 != 0x7dff5a970abc75);
        }
        if ((plVar25 != plVar28) &&
           (((long)plVar25 - (long)plVar26 & 0x1fffffffe0U) != 0x1fffffffe0)) {
          if ((ulong)((*plVar2 - *plVar1 >> 3) * -0x70a3d70a3d70a3d7) <= uVar23) goto LAB_00f03834;
          lVar22 = *plVar1 + uVar23 * 200;
          lVar24 = *(long *)(lVar22 + 0x50);
          uVar4 = ((long)plVar25 - (long)plVar26) * 0x8000000 >> 0x20;
          if ((ulong)(*(long *)(lVar22 + 0x58) - lVar24 >> 2) <= uVar4) goto LAB_00f03834;
          *(undefined4 *)(lVar24 + uVar4 * 4) = 0x41200000;
          lVar22 = *(long *)(*plVar3 + 0x290);
        }
      }
LAB_00f03760:
      lVar22 = lVar22 + uVar23 * 0x4c0;
      plVar26 = *(long **)(lVar22 + 0xd8);
      plVar28 = *(long **)(lVar22 + 0xe0);
      if (plVar28 != plVar26) {
        plVar25 = plVar26;
        if (*plVar26 != 0x3c160f133b5cfd91) {
          do {
            plVar25 = plVar25 + 4;
            if (plVar28 == plVar25) goto LAB_00f037f4;
          } while (*plVar25 != 0x3c160f133b5cfd91);
        }
        if ((plVar25 != plVar28) &&
           (((long)plVar25 - (long)plVar26 & 0x1fffffffe0U) != 0x1fffffffe0)) {
          if ((ulong)((*plVar2 - *plVar1 >> 3) * -0x70a3d70a3d70a3d7) <= uVar23) {
LAB_00f03834:
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          lVar22 = *plVar1 + uVar23 * 200;
          lVar24 = *(long *)(lVar22 + 0x80);
          uVar4 = ((long)plVar25 - (long)plVar26) * 0x8000000 >> 0x20;
          if ((ulong)(*(long *)(lVar22 + 0x88) - lVar24 >> 4) <= uVar4) goto LAB_00f03834;
          puVar5 = (undefined8 *)(lVar24 + uVar4 * 0x10);
          puVar5[1] = uVar21;
          *puVar5 = uVar20;
        }
      }
LAB_00f037f4:
      lVar24 = *plVar1;
      uVar23 = uVar23 + 1;
    } while (uVar23 < (ulong)((*plVar2 - lVar24 >> 3) * -0x70a3d70a3d70a3d7));
  }
  return;
}


