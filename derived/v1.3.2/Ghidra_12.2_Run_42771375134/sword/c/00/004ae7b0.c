/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ae7b0; name: FUN_004ae7b0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_004ae7b0(float param_1,float param_2,float param_3,ulong param_4,ulong param_5,
                 ulong param_6,float *param_7)

{
  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  undefined4 *__s;
  float *pfVar8;
  long lVar9;
  float *pfVar10;
  ulong uVar11;
  int iVar12;
  size_t sVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  float *pfVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulong local_90;
  undefined8 local_88;
  
  uVar23 = param_5 >> 0xc;
  uVar3 = (uint)uVar23;
  uVar14 = (uint)(param_6 >> 0xc);
  uVar4 = uVar14 & 0xffff7;
  uVar5 = uVar3 & 0xffff7;
  uVar19 = (uint)param_6;
  uVar18 = uVar19 - ((uVar14 & 0xfffff) - uVar4 >> 3);
  uVar21 = (uint)param_5;
  uVar22 = uVar21 - ((uVar3 & 0xfffff) - uVar5 >> 3) & 0xff;
  local_90 = param_6;
  if (((uVar18 & 0xff) == 1) || ((param_4 & 1) == 0)) {
    local_88 = (undefined4 *)(CONCAT44(local_88._4_4_,uVar19) & 0xffffffff000000ff);
    if (uVar22 == 1) {
      if ((param_6 & 0xff) != 0) {
                    /* WARNING: Subroutine does not return */
        memset(param_7,0,(ulong)((uVar19 & 0xff) << 2));
      }
      if ((uVar18 & 0xfe) == 0) {
        *param_7 = 1.0;
      }
      else if ((~uVar19 & 0x7000) == 0) {
        fVar26 = SQRT(0.5 - param_3 * 0.5);
        *param_7 = fVar26;
        param_7[1] = fVar26;
        param_7[2] = SQRT(param_3);
      }
      else {
        param_7[0] = 0.70710677;
        param_7[1] = 0.70710677;
      }
      if ((uVar21 >> 0xf & 1) != 0) {
        if ((uint)local_88 != 0) {
                    /* WARNING: Subroutine does not return */
          memset(param_7 + ((uint)local_88 + 3 & 0x1fc) * ((uVar21 & 0xff) - 1),0,
                 (ulong)((uint)local_88 << 2));
        }
        if ((uVar19 >> 0xf & 1) != 0) {
          (param_7 + ((uint)local_88 + 3 & 0x1fc) * ((uVar21 & 0xff) - 1))[(param_6 & 0xff) - 1] =
               1.0;
        }
      }
    }
    else {
      uVar14 = uVar14 & 0x737;
      sVar13 = local_98;
      if (uVar14 < 0x603) {
        if (uVar14 == 3) {
          if ((uVar23 & 0xffff7) != 0) {
            if ((uint)local_88 == 0) {
              uVar23 = 0;
              uVar22 = 1;
              do {
                if ((uVar5 & uVar22) != 0) {
                  *(undefined8 *)param_7 = (&DAT_01d57008)[uVar23];
                }
                uVar22 = uVar22 * 2;
                uVar23 = (ulong)((int)uVar23 + 1);
              } while (uVar22 <= uVar5);
            }
            else {
              sVar13 = (ulong)((uint)local_88 << 2) - 8;
              local_98 = 0;
              if ((uint)local_88 < 3) {
                uVar22 = 1;
                do {
                  if ((uVar5 & uVar22) != 0) {
                    /* WARNING: Subroutine does not return */
                    memset(param_7 + 2,0,0);
                  }
                  uVar22 = uVar22 * 2;
                  sVar13 = local_98;
                } while (uVar22 <= uVar5);
              }
              else {
                local_a0 = param_7 + 2;
                local_a8 = (float *)((ulong)((uint)local_88 - 3) * 4 + 4);
                uVar22 = 1;
                do {
                  if ((uVar5 & uVar22) != 0) {
                    local_98 = sVar13;
                    /* WARNING: Subroutine does not return */
                    memset(param_7 + 2,0,sVar13);
                  }
                  uVar22 = uVar22 * 2;
                } while (uVar22 <= uVar5);
              }
            }
          }
        }
        else if (uVar14 == 4) {
          if ((uVar23 & 0xffff7) != 0) {
            if ((uint)local_88 == 0) {
              uVar18 = 1;
              uVar22 = 0;
              do {
                if ((uVar5 & uVar18) != 0) {
                  *param_7 = (float)(&DAT_01d56fc0)[uVar22];
                }
                uVar18 = uVar18 * 2;
                uVar22 = uVar22 + 1;
              } while (uVar18 <= uVar5);
            }
            else {
              local_98 = (ulong)((uint)local_88 << 2);
              sVar13 = local_98;
              if ((uint)local_88 == 1) {
                uVar22 = 1;
                do {
                  if ((uVar5 & uVar22) != 0) {
                    /* WARNING: Subroutine does not return */
                    memset(param_7,0,4);
                  }
                  uVar22 = uVar22 * 2;
                } while (uVar22 <= uVar5);
              }
              else {
                local_a0 = param_7 + 1;
                uVar22 = 1;
                local_a8 = (float *)((ulong)((uint)local_88 - 2) * 4 + 4);
                do {
                  if ((uVar5 & uVar22) != 0) {
                    /* WARNING: Subroutine does not return */
                    memset(param_7,0,local_98);
                  }
                  uVar22 = uVar22 * 2;
                } while (uVar22 <= uVar5);
              }
            }
          }
        }
        else if ((uVar14 == 7) && ((uVar23 & 0xffff7) != 0)) {
          local_98 = CONCAT44(local_98._4_4_,(uint)local_88 + 3) & 0xffffffff000001fc;
          sVar13 = local_98;
          if ((uint)local_88 == 0) {
            uVar23 = 0;
            iVar12 = 0;
            uVar22 = 1;
            do {
              if ((uVar5 & uVar22) != 0) {
                uVar18 = iVar12 * (int)local_98;
                (param_7 + uVar18)[2] = (float)(&DAT_01d570a0)[uVar23 * 3];
                iVar12 = iVar12 + 1;
                *(undefined8 *)(param_7 + uVar18) =
                     *(undefined8 *)((long)&DAT_01d57098 + uVar23 * 0xc);
              }
              uVar22 = uVar22 * 2;
              uVar23 = (ulong)((int)uVar23 + 1);
            } while (uVar22 <= uVar5);
          }
          else {
            pfVar20 = (float *)((ulong)((uint)local_88 << 2) - 0xc);
            local_a0 = (float *)0x0;
            if ((uint)local_88 < 4) {
              uVar22 = 1;
              do {
                if ((uVar5 & uVar22) != 0) {
                    /* WARNING: Subroutine does not return */
                  memset(param_7 + 3,0,0);
                }
                uVar22 = uVar22 * 2;
              } while (uVar22 <= uVar5);
            }
            else {
              local_a8 = param_7 + 3;
              local_b0 = (ulong)((uint)local_88 - 4) * 4 + 4;
              uVar22 = 1;
              do {
                local_a0 = pfVar20;
                if ((uVar5 & uVar22) != 0) {
                    /* WARNING: Subroutine does not return */
                  memset(param_7 + 3,0,(size_t)pfVar20);
                }
                uVar22 = uVar22 * 2;
              } while (uVar22 <= uVar5);
            }
          }
        }
      }
      else if (uVar14 < 0x633) {
        if (uVar14 == 0x603) {
          if ((uVar23 & 0xffff7) != 0) {
            local_98 = CONCAT44(local_98._4_4_,(uint)local_88 + 3) & 0xffffffff000001fc;
            sVar13 = local_98;
            if ((uint)local_88 == 0) {
              uVar23 = 0;
              iVar12 = 0;
              uVar22 = 1;
              do {
                if ((uVar5 & uVar22) != 0) {
                  uVar18 = iVar12 * (int)local_98;
                  uVar2 = (&DAT_01d57178)[uVar23 * 2];
                  iVar12 = iVar12 + 1;
                  *(undefined8 *)(param_7 + uVar18) = (&DAT_01d57170)[uVar23 * 2];
                  *(undefined8 *)(param_7 + uVar18 + 2) = uVar2;
                }
                uVar22 = uVar22 * 2;
                uVar23 = (ulong)((int)uVar23 + 1);
              } while (uVar22 <= uVar5);
            }
            else {
              pfVar20 = (float *)((ulong)((uint)local_88 << 2) - 0x10);
              local_a0 = (float *)0x0;
              if ((uint)local_88 < 5) {
                uVar22 = 1;
                do {
                  if ((uVar5 & uVar22) != 0) {
                    /* WARNING: Subroutine does not return */
                    memset(param_7 + 4,0,0);
                  }
                  uVar22 = uVar22 * 2;
                } while (uVar22 <= uVar5);
              }
              else {
                local_a8 = param_7 + 4;
                local_b0 = (ulong)((uint)local_88 - 5) * 4 + 4;
                uVar22 = 1;
                do {
                  local_a0 = pfVar20;
                  if ((uVar5 & uVar22) != 0) {
                    /* WARNING: Subroutine does not return */
                    memset(param_7 + 4,0,(size_t)pfVar20);
                  }
                  uVar22 = uVar22 * 2;
                } while (uVar22 <= uVar5);
              }
            }
          }
        }
        else if ((uVar14 == 0x607) && ((uVar23 & 0xffff7) != 0)) {
          local_98 = CONCAT44(local_98._4_4_,(uint)local_88 + 3) & 0xffffffff000001fc;
          sVar13 = local_98;
          if ((uint)local_88 == 0) {
            uVar23 = 0;
            iVar12 = 0;
            uVar22 = 1;
            do {
              if ((uVar5 & uVar22) != 0) {
                uVar2 = *(undefined8 *)((long)&DAT_01d57290 + uVar23 * 0x14);
                uVar16 = *(undefined8 *)((long)&DAT_01d57298 + uVar23 * 0x14);
                pfVar20 = param_7 + (uint)(iVar12 * (int)local_98);
                iVar12 = iVar12 + 1;
                pfVar20[4] = (float)(&DAT_01d572a0)[uVar23 * 5];
                *(undefined8 *)pfVar20 = uVar2;
                *(undefined8 *)(pfVar20 + 2) = uVar16;
              }
              uVar22 = uVar22 * 2;
              uVar23 = (ulong)((int)uVar23 + 1);
            } while (uVar22 <= uVar5);
          }
          else {
            pfVar20 = (float *)((ulong)((uint)local_88 << 2) - 0x14);
            local_a0 = (float *)0x0;
            if ((uint)local_88 < 6) {
              uVar22 = 1;
              do {
                if ((uVar5 & uVar22) != 0) {
                    /* WARNING: Subroutine does not return */
                  memset(param_7 + 5,0,0);
                }
                uVar22 = uVar22 * 2;
              } while (uVar22 <= uVar5);
            }
            else {
              local_a8 = param_7 + 5;
              local_b0 = (ulong)((uint)local_88 - 6) * 4 + 4;
              uVar22 = 1;
              do {
                local_a0 = pfVar20;
                if ((uVar5 & uVar22) != 0) {
                    /* WARNING: Subroutine does not return */
                  memset(param_7 + 5,0,(size_t)pfVar20);
                }
                uVar22 = uVar22 * 2;
              } while (uVar22 <= uVar5);
            }
          }
        }
      }
      else if (uVar14 == 0x633) {
        if ((uVar23 & 0xffff7) != 0) {
          local_98 = CONCAT44(local_98._4_4_,(uint)local_88 + 3) & 0xffffffff000001fc;
          sVar13 = local_98;
          if ((uint)local_88 == 0) {
            uVar23 = 0;
            iVar12 = 0;
            uVar22 = 1;
            do {
              if ((uVar5 & uVar22) != 0) {
                uVar2 = (&DAT_01d57400)[uVar23 * 3];
                uVar16 = (&DAT_01d57408)[uVar23 * 3];
                pfVar20 = param_7 + (uint)(iVar12 * (int)local_98);
                iVar12 = iVar12 + 1;
                *(undefined8 *)pfVar20 = (&DAT_01d573f8)[uVar23 * 3];
                *(undefined8 *)(pfVar20 + 2) = uVar2;
                *(undefined8 *)(pfVar20 + 4) = uVar16;
              }
              uVar22 = uVar22 * 2;
              uVar23 = (ulong)((int)uVar23 + 1);
            } while (uVar22 <= uVar5);
          }
          else {
            pfVar20 = (float *)((ulong)((uint)local_88 << 2) - 0x18);
            local_a0 = (float *)0x0;
            if ((uint)local_88 < 7) {
              uVar22 = 1;
              do {
                if ((uVar5 & uVar22) != 0) {
                    /* WARNING: Subroutine does not return */
                  memset(param_7 + 6,0,0);
                }
                uVar22 = uVar22 * 2;
              } while (uVar22 <= uVar5);
            }
            else {
              local_a8 = param_7 + 6;
              local_b0 = (ulong)((uint)local_88 - 7) * 4 + 4;
              uVar22 = 1;
              do {
                local_a0 = pfVar20;
                if ((uVar5 & uVar22) != 0) {
                    /* WARNING: Subroutine does not return */
                  memset(param_7 + 6,0,(size_t)pfVar20);
                }
                uVar22 = uVar22 * 2;
              } while (uVar22 <= uVar5);
            }
          }
        }
      }
      else if ((uVar14 == 0x637) && ((uVar23 & 0xffff7) != 0)) {
        local_98 = CONCAT44(local_98._4_4_,(uint)local_88 + 3) & 0xffffffff000001fc;
        sVar13 = local_98;
        if ((uint)local_88 == 0) {
          uVar23 = 0;
          iVar12 = 0;
          uVar22 = 1;
          do {
            if ((uVar5 & uVar22) != 0) {
              lVar6 = uVar23 * 0x1c;
              uVar16 = *(undefined8 *)((long)&DAT_01d575b8 + lVar6);
              pfVar20 = param_7 + (uint)(iVar12 * (int)local_98);
              pfVar20[6] = (float)(&DAT_01d575c0)[uVar23 * 7];
              uVar2 = *(undefined8 *)((long)&DAT_01d575a8 + lVar6);
              iVar12 = iVar12 + 1;
              *(undefined8 *)(pfVar20 + 2) = *(undefined8 *)((long)&DAT_01d575b0 + lVar6);
              *(undefined8 *)(pfVar20 + 4) = uVar16;
              *(undefined8 *)pfVar20 = uVar2;
            }
            uVar22 = uVar22 * 2;
            uVar23 = (ulong)((int)uVar23 + 1);
          } while (uVar22 <= uVar5);
        }
        else {
          pfVar20 = (float *)((ulong)((uint)local_88 << 2) - 0x1c);
          local_a0 = (float *)0x0;
          if ((uint)local_88 < 8) {
            uVar22 = 1;
            do {
              if ((uVar5 & uVar22) != 0) {
                    /* WARNING: Subroutine does not return */
                memset(param_7 + 7,0,0);
              }
              uVar22 = uVar22 * 2;
            } while (uVar22 <= uVar5);
          }
          else {
            local_a8 = param_7 + 7;
            local_b0 = (ulong)((uint)local_88 - 8) * 4 + 4;
            uVar22 = 1;
            do {
              local_a0 = pfVar20;
              if ((uVar5 & uVar22) != 0) {
                    /* WARNING: Subroutine does not return */
                memset(param_7 + 7,0,(size_t)pfVar20);
              }
              uVar22 = uVar22 * 2;
            } while (uVar22 <= uVar5);
          }
        }
      }
      local_98 = sVar13;
      if ((((param_5 & 0xff9c0000) != 0) && ((param_6 & 0xff9c0000) != 0)) && (0x7fffff < uVar21)) {
        uVar22 = (uVar3 & 0x637) - ((uVar3 & 0x637) >> 1 & 0xf1f1f1f1);
        uVar22 = (uVar22 & 0x33333333) + (uVar22 >> 2 & 0x33333333);
        if ((uint)local_88 == 0) {
          uVar22 = 0;
          uVar18 = 1;
          uVar14 = 0x800;
          do {
            if (((uVar5 & uVar14) != 0) && ((uVar4 & uVar14) != 0)) {
              while ((uVar18 & uVar14) == 0) {
                uVar3 = uVar4 & uVar18;
                uVar18 = uVar18 << 1;
                if (uVar3 != 0) {
                  uVar22 = uVar22 + 1;
                }
              }
              param_7[uVar22] = 1.0;
            }
            uVar14 = uVar14 * 2;
          } while (uVar14 <= uVar5);
        }
        else {
          uVar18 = 0x800;
          do {
            if ((uVar5 & uVar18) != 0) {
                    /* WARNING: Subroutine does not return */
              memset(param_7 + ((uVar22 + (uVar22 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) *
                               ((uint)local_88 + 3 & 0x1fc),0,(ulong)((uint)local_88 << 2));
            }
            uVar18 = uVar18 * 2;
          } while (uVar18 <= uVar5);
        }
      }
    }
    if ((uVar21 >> 0xf & 1) == 0) {
      return;
    }
    if ((uint)local_88 != 0) {
                    /* WARNING: Subroutine does not return */
      memset(param_7 + ((uint)local_88 + 3 & 0x1fc) * ((uVar21 & 0xff) - 1),0,
             (ulong)((uint)local_88 << 2));
    }
    if ((uVar19 >> 0xf & 1) == 0) {
      return;
    }
    (param_7 + ((uint)local_88 + 3 & 0x1fc) * ((uVar21 & 0xff) - 1))[-1] = 1.0;
    return;
  }
  if (uVar22 == 1) {
    if ((param_6 & 0xff) != 0) {
                    /* WARNING: Subroutine does not return */
      memset(param_7,0,(ulong)((uVar19 & 0xff) << 2));
    }
    uVar14 = uVar14 & 0x637;
    if (uVar14 < 0x607) {
      if ((param_6 >> 0xc & 0x637) == 0) {
        uVar22 = (uVar19 & 0xff) + 3 & 0x1fc;
        iVar12 = uVar22 * (uVar21 & 0xff);
        goto joined_r0x004aecbc;
      }
      if (uVar14 == 7) {
        if (param_1 <= 0.5) {
          fVar26 = param_1 - param_1 * param_3;
        }
        else {
          fVar26 = (param_1 * param_3 - param_3) + param_1;
          param_1 = 1.0 - param_1;
        }
        param_1 = (param_3 + param_3) * param_1;
        param_7[2] = SQRT(param_1);
        *param_7 = SQRT((1.0 - fVar26) - param_1);
        param_7[1] = SQRT(fVar26);
      }
      else {
        if (uVar14 != 0x603) goto LAB_004af04c;
        *param_7 = SQRT((1.0 - param_1) * param_2);
        param_7[1] = SQRT(param_2 * param_1);
        param_7[2] = SQRT((1.0 - param_2) * (1.0 - param_1));
        param_7[3] = SQRT((1.0 - param_2) * param_1);
      }
    }
    else if (uVar14 == 0x607) {
      if (param_1 <= 0.5) {
        fVar25 = param_1 - param_1 * param_3;
        fVar26 = param_1;
      }
      else {
        fVar25 = (param_1 * param_3 - param_3) + param_1;
        fVar26 = 1.0 - param_1;
      }
      fVar26 = (param_3 + param_3) * fVar26;
      *param_7 = SQRT(((1.0 - fVar25) - fVar26) * param_2);
      param_7[1] = SQRT(fVar25 * param_2);
      param_7[2] = SQRT(fVar26 * param_2);
      param_7[3] = SQRT((1.0 - param_1) * (1.0 - param_2));
      param_7[4] = SQRT((1.0 - param_2) * param_1);
    }
    else if (uVar14 == 0x633) {
      fVar26 = 1.0 - param_1;
      fVar27 = param_2 * DAT_01d4bdfc + DAT_01d4c790;
      fVar25 = 1.0 - param_2 * DAT_01d4bdfc;
      if (fVar25 <= 0.0) {
        fVar25 = 0.0;
      }
      if (fVar27 <= 0.0) {
        fVar27 = 0.0;
      }
      fVar29 = (1.0 - fVar25) - fVar27;
      *param_7 = SQRT(fVar27 * fVar26);
      param_7[1] = SQRT(fVar27 * param_1);
      param_7[2] = SQRT(fVar25 * fVar26);
      param_7[3] = SQRT(fVar25 * param_1);
      param_7[4] = SQRT(fVar29 * fVar26);
      param_7[5] = SQRT(fVar29 * param_1);
    }
    else if (uVar14 == 0x637) {
      if (param_1 <= 0.5) {
        fVar25 = param_1 - param_1 * param_3;
        fVar26 = param_1;
      }
      else {
        fVar25 = (param_1 * param_3 - param_3) + param_1;
        fVar26 = 1.0 - param_1;
      }
      fVar26 = (param_3 + param_3) * fVar26;
      fVar29 = 1.0 - param_2 * DAT_01d4bdfc;
      fVar27 = param_2 * DAT_01d4bdfc + DAT_01d4c790;
      if (fVar27 <= 0.0) {
        fVar27 = 0.0;
      }
      fVar28 = (1.0 - fVar29) - fVar27;
      *param_7 = SQRT(((1.0 - fVar25) - fVar26) * fVar27);
      param_7[1] = SQRT(fVar25 * fVar27);
      param_7[2] = SQRT(fVar26 * fVar27);
      param_7[3] = SQRT((1.0 - param_1) * fVar29);
      param_7[4] = SQRT(fVar29 * param_1);
      param_7[5] = SQRT((1.0 - param_1) * fVar28);
      param_7[6] = SQRT(fVar28 * param_1);
    }
    else {
LAB_004af04c:
      *param_7 = SQRT(1.0 - param_1);
      param_7[1] = SQRT(param_1);
    }
  }
  else {
    uVar22 = uVar3 & 0x637;
    if (((uVar21 >> 0x10 ^ uVar21 >> 0x15) & 1) != 0) {
      uVar22 = uVar21 >> 0xc & 7 | 0x600;
    }
    if (uVar22 == 0) {
      uVar22 = (uVar19 & 0xff) + 3 & 0x1fc;
      iVar12 = uVar22 * (uVar21 & 0xff);
joined_r0x004aecbc:
      if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
        memset(param_7,0,(ulong)(uint)(iVar12 << 2));
      }
      uVar18 = uVar19 & 0xff;
      if ((uVar21 >> 0xf & 1) == 0) {
        return;
      }
      param_7 = param_7 + uVar22 * ((uVar21 & 0xff) - 1);
      if ((param_6 & 0xff) != 0) {
                    /* WARNING: Subroutine does not return */
        memset(param_7,0,(ulong)(uVar18 << 2));
      }
      goto joined_r0x004aecf4;
    }
    uVar7 = uVar14 & 0x637;
    uVar19 = uVar22 | uVar7;
    uVar18 = uVar22 - (uVar22 >> 1 & 0x55555555);
    uVar18 = (uVar18 & 0x33333333) + (uVar18 >> 2 & 0x33333333);
    uVar3 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    uVar23 = (ulong)uVar3;
    uVar18 = uVar19 - (uVar19 >> 1 & 0x55555555);
    uVar18 = (uVar18 & 0x33333333) + (uVar18 >> 2 & 0x33333333);
    uVar4 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    uVar24 = (ulong)uVar4;
    uVar5 = uVar4 + 3 >> 2;
    lVar6 = -(ulong)(uVar3 * uVar5 * 0x10);
    __s = (undefined4 *)((long)&local_b0 + lVar6);
    uVar18 = uVar4 + 3 & 0x7c;
    local_88 = __s;
    if (uVar18 * uVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      memset(__s,0,(ulong)(uVar18 * uVar3 * 4));
    }
    pfVar20 = (float *)((long)__s - (ulong)(uVar5 << 4));
    if (uVar18 != 0) {
                    /* WARNING: Subroutine does not return */
      memset(pfVar20,0,(ulong)(uVar18 << 2));
    }
    uVar18 = uVar19 >> 2 & 1;
    if (uVar22 < 0x607) {
      if (uVar22 == 3) {
        *__s = 0x3f800000;
        *(undefined4 *)((long)&local_b0 + lVar6 + 4) = 0x3f800000;
        if ((uVar7 | 7) == 0x607) {
          __s[uVar18 | 2] = 0x3f800000;
          __s[uVar18 + 3] = 0x3f800000;
          *pfVar20 = SQRT((1.0 - param_1) * param_2);
          pfVar20[1] = SQRT(param_2 * param_1);
joined_r0x004afeac:
          bVar1 = (uVar19 >> 2 & 1) == 0;
          if (!bVar1) {
            pfVar20[2] = 0.0;
          }
          uVar22 = (uint)!bVar1;
          pfVar20[uVar22 | 2] = SQRT((1.0 - param_2) * (1.0 - param_1));
          pfVar20[uVar22 + 3] = SQRT((1.0 - param_2) * param_1);
        }
        else {
          if ((uVar7 | 7) == 0x637) {
            __s[uVar18 | 2] = 0x3f800000;
            __s[uVar18 | 4] = 0x3f800000;
            __s[uVar18 + 3] = 0x3f800000;
            __s[uVar18 + 5] = 0x3f800000;
            goto LAB_004af60c;
          }
          *pfVar20 = SQRT(1.0 - param_1);
          pfVar20[1] = SQRT(param_1);
        }
      }
      else if (uVar22 == 7) {
        *__s = 0x3f800000;
        *(undefined4 *)((long)&local_b0 + lVar6 + 4) = 0x3f800000;
        *(undefined4 *)((long)&local_a8 + lVar6) = 0x3f800000;
        if ((uVar7 | 7) == 0x607) {
          __s[uVar18 | 2] = 0x3f800000;
          fVar26 = DAT_01d4bd98 * param_2 + 1.0;
          if (0.5 <= param_2) {
            fVar26 = DAT_01d4be10 - DAT_01d4be10 * param_2;
          }
          __s[uVar18 + 3] = 0x3f800000;
          __s[uVar18 | 2] = 0x3f000000;
          __s[uVar18 + 3] = 0x3f000000;
          fVar25 = 1.0 - fVar26;
          *pfVar20 = SQRT(fVar25 * (DAT_01d4bbc0 - param_1 * DAT_01d4bbc0));
          pfVar20[1] = SQRT(fVar25 * param_1 * DAT_01d4bbc0);
          pfVar20[2] = SQRT(fVar25 * DAT_01d4bd24);
          pfVar20[3] = SQRT(fVar26 - fVar26 * param_1);
          pfVar20[4] = SQRT(fVar26 * param_1);
        }
        else {
          if ((uVar7 | 7) == 0x637) {
            fVar25 = DAT_01d4c48c + DAT_01d4c644 * param_2;
            fVar26 = DAT_01d4c1e8 * param_2 + 1.0;
            if (fVar25 <= 0.0) {
              fVar25 = 0.0;
            }
            if (fVar26 <= 0.0) {
              fVar26 = 0.0;
            }
            __s[uVar18 | 2] = 0x3f800000;
            __s[uVar18 | 4] = 0x3f800000;
            __s[uVar18 + 3] = 0x3f800000;
            fVar27 = (1.0 - fVar26) - fVar25;
            __s[uVar18 + 5] = 0x3f800000;
            __s[uVar18 | 2] = 0x3f000000;
            *pfVar20 = SQRT(fVar25 * (DAT_01d4bbc0 - param_1 * DAT_01d4bbc0));
            pfVar20[1] = SQRT(fVar25 * param_1 * DAT_01d4bbc0);
            __s[uVar18 | 4] = 0x3f000000;
            pfVar20[2] = SQRT(fVar25 * DAT_01d4bd24);
            pfVar20[3] = SQRT(fVar26 * (1.0 - param_1));
            __s[uVar18 + 3] = 0x3f000000;
            __s[uVar18 + 5] = 0x3f000000;
            fVar25 = fVar27 * (1.0 - param_1);
            goto LAB_004af484;
          }
          pfVar20[2] = 0.57735026;
          pfVar20[1] = SQRT(param_1 * DAT_01d4bbc0);
          *pfVar20 = SQRT(DAT_01d4bbc0 - param_1 * DAT_01d4bbc0);
        }
      }
      else if (uVar22 == 0x603) {
        *__s = 0x3f800000;
        *(undefined4 *)((long)&local_b0 + lVar6 + 4) = 0x3f800000;
        __s[uVar18 | 2] = 0x3f800000;
        __s[uVar18 + 3] = 0x3f800000;
        if ((uVar19 | 4) == 0x637) {
          __s[uVar18 | 4] = 0x3f800000;
          __s[uVar18 + 5] = 0x3f800000;
          goto LAB_004af60c;
        }
        *pfVar20 = SQRT((1.0 - param_1) * param_2);
        pfVar20[1] = SQRT(param_2 * param_1);
        goto joined_r0x004afeac;
      }
    }
    else if (uVar22 == 0x607) {
      *__s = 0x3f800000;
      *(undefined4 *)((long)&local_b0 + lVar6 + 4) = 0x3f800000;
      *(undefined4 *)((long)&local_a8 + lVar6) = 0x3f800000;
      __s[uVar18 | 2] = 0x3f800000;
      __s[uVar18 + 3] = 0x3f800000;
      if ((uVar19 | 4) == 0x637) {
        fVar26 = DAT_01d4c1e8 * param_2 + 1.0;
        fVar25 = DAT_01d4c48c + DAT_01d4c644 * param_2;
        if (fVar26 <= 0.0) {
          fVar26 = 0.0;
        }
        if (fVar25 <= 0.0) {
          fVar25 = 0.0;
        }
        fVar27 = (1.0 - fVar26) - fVar25;
        *pfVar20 = SQRT(fVar25 * (DAT_01d4bbc0 - param_1 * DAT_01d4bbc0));
        pfVar20[1] = SQRT(fVar25 * param_1 * DAT_01d4bbc0);
        __s[uVar18 | 4] = 0x3f800000;
        __s[uVar18 + 5] = 0x3f800000;
        pfVar20[2] = SQRT(fVar25 * DAT_01d4bd24);
        pfVar20[3] = SQRT(fVar26 * (1.0 - param_1));
        pfVar20[4] = SQRT(fVar26 * param_1);
        pfVar20[5] = SQRT(fVar27 * (1.0 - param_1));
LAB_004af584:
        pfVar20[6] = SQRT(fVar27 * param_1);
      }
      else {
        fVar26 = DAT_01d4bd98 * param_2 + 1.0;
        if (0.5 <= param_2) {
          fVar26 = DAT_01d4be10 - DAT_01d4be10 * param_2;
        }
        fVar25 = 1.0 - fVar26;
        *pfVar20 = SQRT(fVar25 * (DAT_01d4bbc0 - param_1 * DAT_01d4bbc0));
        pfVar20[1] = SQRT(fVar25 * param_1 * DAT_01d4bbc0);
        pfVar20[2] = SQRT(fVar25 * DAT_01d4bd24);
        pfVar20[3] = SQRT(fVar26 - fVar26 * param_1);
        pfVar20[4] = SQRT(fVar26 * param_1);
      }
    }
    else if (uVar22 == 0x633) {
      *__s = 0x3f800000;
      *(undefined4 *)((long)&local_b0 + lVar6 + 4) = 0x3f800000;
      __s[uVar18 | 2] = 0x3f800000;
      __s[uVar18 + 3] = 0x3f800000;
      __s[uVar18 | 4] = 0x3f800000;
      __s[uVar18 + 5] = 0x3f800000;
LAB_004af60c:
      fVar25 = param_2 * DAT_01d4bdfc + DAT_01d4c790;
      fVar26 = 1.0 - param_2 * DAT_01d4bdfc;
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      fVar27 = 1.0 - param_1;
      if (fVar25 <= 0.0) {
        fVar25 = 0.0;
      }
      fVar29 = (1.0 - fVar26) - fVar25;
      *pfVar20 = SQRT(fVar25 * fVar27);
      pfVar20[1] = SQRT(fVar25 * param_1);
      bVar1 = (uVar19 >> 2 & 1) != 0;
      if (bVar1) {
        pfVar20[2] = 0.0;
      }
      pfVar20[bVar1 | 2] = SQRT(fVar26 * fVar27);
      pfVar20[bVar1 + 3] = SQRT(fVar26 * param_1);
      pfVar20[bVar1 | 4] = SQRT(fVar29 * fVar27);
      pfVar20[bVar1 + 5] = SQRT(fVar29 * param_1);
    }
    else if (uVar22 == 0x637) {
      fVar26 = DAT_01d4c1e8 * param_2 + 1.0;
      *__s = 0x3f800000;
      fVar25 = DAT_01d4c48c + DAT_01d4c644 * param_2;
      *(undefined4 *)((long)&local_b0 + lVar6 + 4) = 0x3f800000;
      *(undefined4 *)((long)&local_a8 + lVar6) = 0x3f800000;
      __s[uVar18 | 2] = 0x3f800000;
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      if (fVar25 <= 0.0) {
        fVar25 = 0.0;
      }
      __s[uVar18 + 3] = 0x3f800000;
      fVar27 = (1.0 - fVar26) - fVar25;
      *pfVar20 = SQRT(fVar25 * (DAT_01d4bbc0 - param_1 * DAT_01d4bbc0));
      pfVar20[1] = SQRT(fVar25 * param_1 * DAT_01d4bbc0);
      __s[uVar18 | 4] = 0x3f800000;
      pfVar20[2] = SQRT(fVar25 * DAT_01d4bd24);
      pfVar20[3] = SQRT(fVar26 * (1.0 - param_1));
      fVar25 = fVar27 * (1.0 - param_1);
      __s[uVar18 + 5] = 0x3f800000;
LAB_004af484:
      pfVar20[4] = SQRT(fVar26 * param_1);
      pfVar20[5] = SQRT(fVar25);
      goto LAB_004af584;
    }
    if (uVar19 != 0) {
      uVar11 = 0;
      do {
        if (uVar24 - 1 < 3) {
          lVar17 = 0;
        }
        else {
          lVar17 = 0;
          pfVar8 = pfVar20 + 2;
          pfVar10 = (float *)((long)&local_a8 + lVar6);
          do {
            fVar26 = pfVar8[-1];
            lVar17 = lVar17 + 4;
            fVar25 = *pfVar8;
            fVar27 = pfVar8[1];
            pfVar10[-2] = pfVar10[-2] * pfVar8[-2];
            pfVar10[-1] = pfVar10[-1] * fVar26;
            *pfVar10 = *pfVar10 * fVar25;
            pfVar10[1] = pfVar10[1] * fVar27;
            pfVar8 = pfVar8 + 4;
            pfVar10 = pfVar10 + 4;
          } while (uVar24 - (uVar24 & 3) != lVar17);
        }
        if ((uVar4 & 3) != 0) {
          lVar9 = -(uVar24 & 3);
          pfVar8 = pfVar20 + lVar17;
          pfVar10 = (float *)(__s + lVar17);
          do {
            lVar9 = lVar9 + 1;
            *pfVar10 = *pfVar10 * *pfVar8;
            pfVar8 = pfVar8 + 1;
            pfVar10 = pfVar10 + 1;
          } while (lVar9 != 0);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar23);
    }
    uVar14 = uVar14 & 0x737;
    uVar22 = (uint)local_90 & 0xff;
    if (uVar14 < 0x603) {
      if (uVar14 == 3) {
        if ((local_90 & 0xff) == 0) {
          if (uVar19 != 0) {
            uVar24 = 0;
            do {
              uVar11 = 0;
              pfVar20 = param_7 + (uVar22 + 3 & 0x1fc) * (int)uVar24;
              uVar15 = 0;
              uVar18 = 1;
              do {
                if ((uVar18 & uVar19) != 0) {
                  fVar26 = (float)__s[uVar15];
                  uVar15 = (ulong)((int)uVar15 + 1);
                  fVar25 = *(float *)((long)&DAT_01d57008 + uVar11 * 8 + 4);
                  *pfVar20 = *pfVar20 + fVar26 * *(float *)(&DAT_01d57008 + uVar11);
                  pfVar20[1] = pfVar20[1] + fVar26 * fVar25;
                }
                uVar18 = uVar18 * 2;
                uVar11 = (ulong)((int)uVar11 + 1);
              } while (uVar18 <= uVar19);
              uVar24 = uVar24 + 1;
            } while (uVar24 != uVar23);
          }
        }
        else {
          uVar24 = (ulong)(uVar22 << 2);
          if (uVar19 != 0) {
                    /* WARNING: Subroutine does not return */
            memset(param_7,0,uVar24);
          }
          local_88 = (undefined4 *)(uVar23 & 3);
          if (2 < uVar23 - 1) {
                    /* WARNING: Subroutine does not return */
            memset(param_7,0,uVar24);
          }
          if ((uVar3 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
            memset(param_7,0,uVar24);
          }
        }
      }
      else if (uVar14 == 4) {
        if ((local_90 & 0xff) == 0) {
          if (uVar19 != 0) {
            uVar24 = 0;
            do {
              uVar14 = (uVar22 + 3 & 0x1fc) * (int)uVar24;
              uVar11 = 0;
              uVar15 = 0;
              uVar18 = 1;
              do {
                if ((uVar18 & uVar19) != 0) {
                  lVar6 = uVar24 * ((ulong)((uVar4 & 0x3f) + 3) & 0x7c) + uVar11;
                  uVar11 = (ulong)((int)uVar11 + 1);
                  param_7[uVar14] =
                       param_7[uVar14] + (float)__s[lVar6] * (float)(&DAT_01d56fc0)[uVar15];
                }
                uVar18 = uVar18 * 2;
                uVar15 = (ulong)((int)uVar15 + 1);
              } while (uVar18 <= uVar19);
              uVar24 = uVar24 + 1;
            } while (uVar24 != uVar23);
          }
        }
        else {
          uVar24 = (ulong)(uVar22 << 2);
          if (uVar19 != 0) {
                    /* WARNING: Subroutine does not return */
            memset(param_7,0,uVar24);
          }
          local_88 = (undefined4 *)(uVar23 & 3);
          if (2 < uVar23 - 1) {
                    /* WARNING: Subroutine does not return */
            memset(param_7,0,uVar24);
          }
          if ((uVar3 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
            memset(param_7,0,uVar24);
          }
        }
      }
      else if (uVar14 == 7) {
        local_98 = (ulong)((uVar4 & 0x3f) + 3) & 0x7c;
        if ((local_90 & 0xff) == 0) {
          if (uVar19 != 0) {
            uVar24 = 0;
            do {
              pfVar20 = param_7 + (uVar22 + 3 & 0x1fc) * (int)uVar24;
              uVar11 = 0;
              uVar15 = 0;
              uVar18 = 1;
              do {
                if ((uVar18 & uVar19) != 0) {
                  fVar26 = (float)__s[uVar24 * local_98 + uVar15];
                  uVar15 = (ulong)((int)uVar15 + 1);
                  fVar25 = *(float *)((long)&DAT_01d57098 + uVar11 * 0xc + 4);
                  fVar27 = (float)(&DAT_01d570a0)[uVar11 * 3];
                  *pfVar20 = *pfVar20 + fVar26 * *(float *)((long)&DAT_01d57098 + uVar11 * 0xc);
                  pfVar20[1] = pfVar20[1] + fVar26 * fVar25;
                  pfVar20[2] = pfVar20[2] + fVar26 * fVar27;
                }
                uVar18 = uVar18 * 2;
                uVar11 = (ulong)((int)uVar11 + 1);
              } while (uVar18 <= uVar19);
              uVar24 = uVar24 + 1;
            } while (uVar24 != uVar23);
          }
        }
        else {
          uVar24 = (ulong)(uVar22 << 2);
          if (uVar19 != 0) {
                    /* WARNING: Subroutine does not return */
            memset(param_7,0,uVar24);
          }
          local_88 = (undefined4 *)(uVar23 & 3);
          if (2 < uVar23 - 1) {
                    /* WARNING: Subroutine does not return */
            memset(param_7,0,uVar24);
          }
          if ((uVar3 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
            memset(param_7,0,uVar24);
          }
        }
      }
    }
    else if (uVar14 < 0x633) {
      if (uVar14 == 0x603) {
        if ((local_90 & 0xff) == 0) {
          if (uVar19 != 0) {
            uVar24 = 0;
            do {
              uVar11 = 0;
              pfVar20 = param_7 + (uVar22 + 3 & 0x1fc) * (int)uVar24;
              uVar15 = 0;
              uVar18 = 1;
              do {
                if ((uVar18 & uVar19) != 0) {
                  fVar26 = (float)__s[uVar24 * ((ulong)((uVar4 & 0x3f) + 3) & 0x7c) + uVar11];
                  uVar11 = (ulong)((int)uVar11 + 1);
                  fVar27 = *(float *)((long)&DAT_01d57170 + uVar15 * 0x10 + 4);
                  fVar25 = *(float *)(&DAT_01d57178 + uVar15 * 2);
                  fVar29 = *(float *)((long)&DAT_01d57178 + uVar15 * 0x10 + 4);
                  *pfVar20 = *pfVar20 + fVar26 * *(float *)(&DAT_01d57170 + uVar15 * 2);
                  pfVar20[1] = pfVar20[1] + fVar26 * fVar27;
                  pfVar20[2] = pfVar20[2] + fVar26 * fVar25;
                  pfVar20[3] = pfVar20[3] + fVar26 * fVar29;
                }
                uVar18 = uVar18 * 2;
                uVar15 = (ulong)((int)uVar15 + 1);
              } while (uVar18 <= uVar19);
              uVar24 = uVar24 + 1;
            } while (uVar24 != uVar23);
          }
        }
        else {
          uVar24 = (ulong)(uVar22 << 2);
          if (uVar19 != 0) {
                    /* WARNING: Subroutine does not return */
            memset(param_7,0,uVar24);
          }
          local_88 = (undefined4 *)(uVar23 & 3);
          if (2 < uVar23 - 1) {
                    /* WARNING: Subroutine does not return */
            memset(param_7,0,uVar24);
          }
          if ((uVar3 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
            memset(param_7,0,uVar24);
          }
        }
      }
      else if (uVar14 == 0x607) {
        local_98 = (ulong)((uVar4 & 0x3f) + 3) & 0x7c;
        if ((local_90 & 0xff) == 0) {
          if (uVar19 != 0) {
            uVar24 = 0;
            do {
              pfVar20 = param_7 + (uVar22 + 3 & 0x1fc) * (int)uVar24;
              uVar11 = 0;
              uVar15 = 0;
              uVar18 = 1;
              do {
                if ((uVar18 & uVar19) != 0) {
                  lVar6 = uVar15 * 0x14;
                  fVar26 = (float)__s[uVar24 * local_98 + uVar11];
                  uVar11 = (ulong)((int)uVar11 + 1);
                  fVar27 = *(float *)((long)&DAT_01d57290 + lVar6 + 4);
                  fVar25 = *(float *)((long)&DAT_01d57298 + lVar6);
                  fVar29 = *(float *)((long)&DAT_01d57298 + lVar6 + 4);
                  *pfVar20 = *pfVar20 + fVar26 * *(float *)((long)&DAT_01d57290 + lVar6);
                  pfVar20[1] = pfVar20[1] + fVar26 * fVar27;
                  pfVar20[2] = pfVar20[2] + fVar26 * fVar25;
                  pfVar20[3] = pfVar20[3] + fVar26 * fVar29;
                  pfVar20[4] = pfVar20[4] + fVar26 * (float)(&DAT_01d572a0)[uVar15 * 5];
                }
                uVar18 = uVar18 * 2;
                uVar15 = (ulong)((int)uVar15 + 1);
              } while (uVar18 <= uVar19);
              uVar24 = uVar24 + 1;
            } while (uVar24 != uVar23);
          }
        }
        else {
          uVar24 = (ulong)(uVar22 << 2);
          if (uVar19 != 0) {
                    /* WARNING: Subroutine does not return */
            memset(param_7,0,uVar24);
          }
          local_88 = (undefined4 *)(uVar23 & 3);
          if (2 < uVar23 - 1) {
                    /* WARNING: Subroutine does not return */
            memset(param_7,0,uVar24);
          }
          if ((uVar3 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
            memset(param_7,0,uVar24);
          }
        }
      }
    }
    else if (uVar14 == 0x633) {
      local_98 = (ulong)((uVar4 & 0x3f) + 3) & 0x7c;
      if ((local_90 & 0xff) == 0) {
        if (uVar19 != 0) {
          uVar24 = 0;
          do {
            pfVar20 = param_7 + (uVar22 + 3 & 0x1fc) * (int)uVar24;
            uVar11 = 0;
            uVar15 = 0;
            uVar18 = 1;
            do {
              if ((uVar18 & uVar19) != 0) {
                lVar6 = uVar15 * 0x18;
                fVar26 = (float)__s[uVar24 * local_98 + uVar11];
                uVar11 = (ulong)((int)uVar11 + 1);
                fVar29 = *(float *)((long)&DAT_01d573f8 + lVar6 + 4);
                fVar25 = *(float *)(&DAT_01d57400 + uVar15 * 3);
                fVar28 = *(float *)((long)&DAT_01d57400 + lVar6 + 4);
                fVar27 = *(float *)(&DAT_01d57408 + uVar15 * 3);
                fVar30 = *(float *)((long)&DAT_01d57408 + lVar6 + 4);
                *pfVar20 = *pfVar20 + fVar26 * *(float *)(&DAT_01d573f8 + uVar15 * 3);
                pfVar20[1] = pfVar20[1] + fVar26 * fVar29;
                pfVar20[2] = pfVar20[2] + fVar26 * fVar25;
                pfVar20[3] = pfVar20[3] + fVar26 * fVar28;
                pfVar20[4] = pfVar20[4] + fVar26 * fVar27;
                pfVar20[5] = pfVar20[5] + fVar26 * fVar30;
              }
              uVar18 = uVar18 * 2;
              uVar15 = (ulong)((int)uVar15 + 1);
            } while (uVar18 <= uVar19);
            uVar24 = uVar24 + 1;
          } while (uVar24 != uVar23);
        }
      }
      else {
        uVar24 = (ulong)(uVar22 << 2);
        if (uVar19 != 0) {
                    /* WARNING: Subroutine does not return */
          memset(param_7,0,uVar24);
        }
        local_88 = (undefined4 *)(uVar23 & 3);
        if (2 < uVar23 - 1) {
                    /* WARNING: Subroutine does not return */
          memset(param_7,0,uVar24);
        }
        if ((uVar3 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
          memset(param_7,0,uVar24);
        }
      }
    }
    else if (uVar14 == 0x637) {
      local_98 = (ulong)((uVar4 & 0x3f) + 3) & 0x7c;
      if ((local_90 & 0xff) == 0) {
        if (uVar19 != 0) {
          uVar24 = 0;
          do {
            pfVar20 = param_7 + (uVar22 + 3 & 0x1fc) * (int)uVar24;
            uVar11 = 0;
            uVar15 = 0;
            uVar18 = 1;
            do {
              if ((uVar18 & uVar19) != 0) {
                lVar6 = uVar15 * 0x1c;
                fVar26 = (float)__s[uVar24 * local_98 + uVar11];
                uVar11 = (ulong)((int)uVar11 + 1);
                fVar25 = *(float *)((long)&DAT_01d575a8 + lVar6);
                fVar27 = *(float *)((long)&DAT_01d575b0 + lVar6);
                fVar28 = *(float *)((long)&DAT_01d575b0 + lVar6 + 4);
                fVar29 = *(float *)((long)&DAT_01d575b8 + lVar6);
                fVar30 = *(float *)((long)&DAT_01d575b8 + lVar6 + 4);
                pfVar20[1] = pfVar20[1] + fVar26 * *(float *)((long)&DAT_01d575a8 + lVar6 + 4);
                *pfVar20 = *pfVar20 + fVar26 * fVar25;
                pfVar20[3] = pfVar20[3] + fVar26 * fVar28;
                pfVar20[2] = pfVar20[2] + fVar26 * fVar27;
                pfVar20[5] = pfVar20[5] + fVar26 * fVar30;
                pfVar20[4] = pfVar20[4] + fVar26 * fVar29;
                pfVar20[6] = pfVar20[6] + fVar26 * (float)(&DAT_01d575c0)[uVar15 * 7];
              }
              uVar18 = uVar18 * 2;
              uVar15 = (ulong)((int)uVar15 + 1);
            } while (uVar18 <= uVar19);
            uVar24 = uVar24 + 1;
          } while (uVar24 != uVar23);
        }
      }
      else {
        uVar24 = (ulong)(uVar22 << 2);
        if (uVar19 != 0) {
                    /* WARNING: Subroutine does not return */
          memset(param_7,0,uVar24);
        }
        local_88 = (undefined4 *)(uVar23 & 3);
        if (2 < uVar23 - 1) {
                    /* WARNING: Subroutine does not return */
          memset(param_7,0,uVar24);
        }
        if ((uVar3 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
          memset(param_7,0,uVar24);
        }
      }
    }
  }
  if ((uVar21 >> 0xf & 1) == 0) {
    return;
  }
  uVar19 = (uint)local_90;
  uVar18 = uVar19 & 0xff;
  param_7 = param_7 + (uVar18 + 3 & 0x1fc) * ((uVar21 & 0xff) - 1);
  if ((local_90 & 0xff) != 0) {
                    /* WARNING: Subroutine does not return */
    memset(param_7,0,(ulong)(uVar18 << 2));
  }
joined_r0x004aecf4:
  if ((uVar19 >> 0xf & 1) != 0) {
    param_7[(int)(uVar18 - 1)] = 1.0;
  }
  return;
}


