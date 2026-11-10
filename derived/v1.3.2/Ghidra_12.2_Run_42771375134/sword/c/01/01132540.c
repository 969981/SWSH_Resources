/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01132540; name: FUN_01132540
 */


undefined8 FUN_01132540(long param_1,long param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  undefined1 uVar8;
  byte bVar9;
  ushort uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  uint *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  uint *puVar29;
  undefined8 local_88;
  uint local_80;
  uint local_7c;
  uint local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if (*(long *)(param_1 + 0x80) == 0) {
    lVar14 = 0;
LAB_01132594:
    local_88 = 0;
  }
  else {
    FUN_01128420(&local_88);
    lVar14 = local_88;
    if (local_88 != 0) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
      goto LAB_01132594;
    }
  }
  lVar13 = FUN_01225e90(lVar14 + 0x140);
  lVar13 = lVar13 + 4;
  uVar10 = FUN_0121c6e0(lVar13);
  lVar14 = FUN_01225e60(lVar14 + 0x140);
  cVar7 = FUN_0121d1d0(lVar14 + 4);
  uVar17 = 1;
  if (cVar7 != ',') {
    uVar17 = 2;
  }
  local_68 = 0xcbf29ce484222645;
  local_70 = 0xcbf29ce484222645;
  lVar14 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  lVar25 = *(long *)(lVar14 + 2000);
  if (lVar25 != 0) {
    (**(code **)(*(long *)(lVar25 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
  lVar14 = *(long *)(lVar25 + 0x80);
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  uVar8 = FUN_0121c6c0(lVar13);
  uVar16 = 0;
  switch(uVar8) {
  case 0:
    uVar11 = FUN_0121c6d0(lVar13);
    uVar12 = FUN_0121c6e0(lVar13);
    piVar15 = (int *)FUN_00fa4ec0(lVar25,uVar17,uVar11,uVar12);
    if (piVar15 == (int *)0x0) {
      bVar4 = false;
    }
    else {
      if (*(ushort *)((long)piVar15 - (long)*piVar15) < 0x13) {
        local_68 = 0;
      }
      else {
        uVar20 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[9];
        local_68 = 0;
        if (uVar20 != 0) {
          local_68 = *(undefined8 *)((long)piVar15 + uVar20);
        }
      }
      if (*(ushort *)((long)piVar15 - (long)*piVar15) < 0x11) {
        local_70 = 0;
      }
      else {
        uVar20 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[8];
        local_70 = 0;
        if (uVar20 != 0) {
          local_70 = *(undefined8 *)((long)piVar15 + uVar20);
        }
      }
      bVar4 = false;
    }
    goto LAB_01132890;
  case 1:
    break;
  case 2:
    uVar16 = 1;
    break;
  case 3:
    uVar16 = 2;
    break;
  default:
    FUN_00fa7e90(&local_88,lVar14);
    if (local_88 != 0) {
      piVar15 = (int *)FUN_00fa6990(local_88,uVar17);
      if (((piVar15 != (int *)0x0) &&
          (puVar18 = (uint *)((long)piVar15 +
                             (ulong)*(ushort *)((long)piVar15 + (8 - (long)*piVar15))),
          puVar18 = (uint *)((long)puVar18 + (ulong)*puVar18), (uint)uVar10 < *puVar18)) &&
         (puVar18 = puVar18 + (ulong)uVar10 + 1, piVar15 = (int *)((long)puVar18 + (ulong)*puVar18),
         piVar15 != (int *)0x0)) {
        if (*(ushort *)((long)piVar15 - (long)*piVar15) < 0x15) {
          local_68 = 0;
        }
        else {
          uVar20 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[10];
          local_68 = 0;
          if (uVar20 != 0) {
            local_68 = *(undefined8 *)((long)piVar15 + uVar20);
          }
        }
        if (0x12 < *(ushort *)((long)piVar15 - (long)*piVar15)) {
          uVar10 = ((ushort *)((long)piVar15 - (long)*piVar15))[9];
          goto joined_r0x0113285c;
        }
        goto LAB_01132868;
      }
      goto LAB_01132870;
    }
    goto LAB_01132888;
  }
  FUN_00fa7e40(&local_88,lVar14,uVar16);
  if (local_88 != 0) {
    piVar15 = (int *)FUN_00fa6f60(local_88,uVar17);
    if (((piVar15 != (int *)0x0) &&
        (puVar18 = (uint *)((long)piVar15 +
                           (ulong)*(ushort *)((long)piVar15 + (0xc - (long)*piVar15))),
        puVar18 = (uint *)((long)puVar18 + (ulong)*puVar18), (uint)uVar10 < *puVar18)) &&
       (puVar18 = puVar18 + (ulong)uVar10 + 1, piVar15 = (int *)((long)puVar18 + (ulong)*puVar18),
       piVar15 != (int *)0x0)) {
      if (*(ushort *)((long)piVar15 - (long)*piVar15) < 0x21) {
        local_68 = 0;
      }
      else {
        uVar20 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[0x10];
        local_68 = 0;
        if (uVar20 != 0) {
          local_68 = *(undefined8 *)((long)piVar15 + uVar20);
        }
      }
      if (0x1e < *(ushort *)((long)piVar15 - (long)*piVar15)) {
        uVar10 = ((ushort *)((long)piVar15 - (long)*piVar15))[0xf];
joined_r0x0113285c:
        if ((ulong)uVar10 != 0) {
          local_70 = *(undefined8 *)((long)piVar15 + (ulong)uVar10);
          goto LAB_01132870;
        }
      }
LAB_01132868:
      local_70 = 0;
    }
LAB_01132870:
    if (local_88 != 0) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
      local_88 = 0;
    }
  }
LAB_01132888:
  bVar4 = true;
LAB_01132890:
  uVar20 = 0;
  while ((puVar18 = (uint *)(param_2 + 0x204 + uVar20 * 8), *puVar18 == 0 ||
         (puVar29 = puVar18 + 1, *puVar29 == 0))) {
LAB_011330b4:
    uVar20 = uVar20 + 1;
    if (0xe < uVar20) {
      uVar16 = 1;
joined_r0x011330c8:
      if (lVar14 != 0) {
        (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
      }
      if (lVar25 != 0) {
        (**(code **)(*(long *)(lVar25 + 0x48) + 0x18))((long *)(lVar25 + 0x48));
      }
      return uVar16;
    }
  }
  if (bVar4) {
    piVar15 = (int *)FUN_00fa7510(lVar14,&local_68);
    if (piVar15 == (int *)0x0) {
      piVar15 = (int *)FUN_00fa4f90(lVar25,&local_68);
      if (piVar15 != (int *)0x0) {
        uVar19 = (ulong)*(ushort *)((long)piVar15 + (6 - (long)*piVar15));
        puVar1 = (uint *)((long)piVar15 + uVar19);
        uVar21 = (ulong)*puVar1;
        uVar23 = (ulong)*(uint *)((long)puVar1 + uVar21);
        if (uVar23 != 0) {
          lVar27 = uVar19 + uVar21;
          lVar28 = 0;
          do {
            uVar19 = (ulong)*(uint *)((long)piVar15 + lVar28 + lVar27 + 4);
            lVar26 = lVar28 + (uVar19 - (long)*(int *)((long)piVar15 + lVar28 + uVar19 + lVar27 + 4)
                              ) + lVar27;
            uVar10 = *(ushort *)((long)piVar15 + lVar26 + 4);
            if (uVar10 < 7) {
              if (*puVar18 == 0) goto LAB_01132d38;
            }
            else {
              uVar21 = (ulong)*(ushort *)((long)piVar15 + lVar26 + 10);
              uVar24 = 0;
              if (uVar21 != 0) {
                uVar24 = *(uint *)((long)piVar15 + lVar28 + uVar19 + uVar21 + lVar27 + 4);
              }
              if (*puVar18 == uVar24) {
LAB_01132d38:
                uVar24 = *puVar29;
                if ((uVar10 < 9) ||
                   (uVar21 = (ulong)*(ushort *)((long)piVar15 + lVar26 + 0xc), uVar21 == 0)) {
                  lVar26 = 0;
                }
                else {
                  lVar26 = uVar19 + uVar21;
                  lVar26 = (long)piVar15 +
                           lVar28 + lVar26 + (ulong)*(uint *)((long)piVar15 +
                                                             lVar28 + lVar26 + lVar27 + 4) + lVar27
                           + 4;
                }
                bVar9 = FUN_0121c680(lVar13);
                if (uVar24 == *(uint *)(lVar26 + (ulong)bVar9 * 4 + 4)) goto LAB_011330b4;
              }
            }
            lVar28 = lVar28 + 4;
          } while (uVar23 * 4 != lVar28);
        }
      }
    }
    else {
      uVar19 = (ulong)*(ushort *)((long)piVar15 + (6 - (long)*piVar15));
      puVar1 = (uint *)((long)piVar15 + uVar19);
      uVar21 = (ulong)*puVar1;
      uVar23 = (ulong)*(uint *)((long)puVar1 + uVar21);
      if (uVar23 != 0) {
        lVar27 = uVar19 + uVar21;
        lVar28 = 0;
        do {
          uVar19 = (ulong)*(uint *)((long)piVar15 + lVar28 + lVar27 + 4);
          lVar26 = lVar28 + uVar19 + lVar27;
          lVar5 = lVar28 + (uVar19 - (long)*(int *)((long)piVar15 + lVar26 + 4)) + lVar27;
          uVar10 = *(ushort *)((long)piVar15 + lVar5 + 4);
          if (uVar10 < 0xf) {
            if (*puVar18 == 0) goto LAB_0113294c;
          }
          else {
            uVar21 = (ulong)*(ushort *)((long)piVar15 + lVar5 + 0x12);
            uVar24 = 0;
            if (uVar21 != 0) {
              uVar24 = (uint)*(ushort *)((long)piVar15 + lVar28 + uVar19 + uVar21 + lVar27 + 4);
            }
            if (*puVar18 == uVar24) {
LAB_0113294c:
              if (uVar10 < 5) {
                uVar24 = 0;
              }
              else {
                uVar21 = (ulong)*(ushort *)((long)piVar15 + lVar5 + 8);
                uVar24 = 0;
                if (uVar21 != 0) {
                  uVar24 = (uint)*(byte *)((long)piVar15 + lVar28 + uVar19 + uVar21 + lVar27 + 4);
                }
              }
              lVar5 = lVar28 + (uVar19 - (long)*(int *)((long)piVar15 + lVar26 + 4)) + lVar27;
              if (*(ushort *)((long)piVar15 + lVar5 + 4) < 7) {
                uVar22 = 0;
              }
              else {
                uVar21 = (ulong)*(ushort *)((long)piVar15 + lVar5 + 10);
                uVar22 = 0;
                if (uVar21 != 0) {
                  uVar22 = (uint)*(byte *)((long)piVar15 + lVar28 + uVar19 + uVar21 + lVar27 + 4);
                }
              }
              local_88 = CONCAT44(uVar22,uVar24);
              lVar5 = lVar28 + (uVar19 - (long)*(int *)((long)piVar15 + lVar26 + 4)) + lVar27;
              if (*(ushort *)((long)piVar15 + lVar5 + 4) < 9) {
                local_80 = 0;
              }
              else {
                uVar21 = (ulong)*(ushort *)((long)piVar15 + lVar5 + 0xc);
                local_80 = 0;
                if (uVar21 != 0) {
                  local_80 = (uint)*(byte *)((long)piVar15 + lVar28 + uVar19 + uVar21 + lVar27 + 4);
                }
              }
              lVar5 = lVar28 + (uVar19 - (long)*(int *)((long)piVar15 + lVar26 + 4)) + lVar27;
              if (*(ushort *)((long)piVar15 + lVar5 + 4) < 0xb) {
                local_7c = 0;
              }
              else {
                uVar21 = (ulong)*(ushort *)((long)piVar15 + lVar5 + 0xe);
                local_7c = 0;
                if (uVar21 != 0) {
                  local_7c = (uint)*(byte *)((long)piVar15 + lVar28 + uVar19 + uVar21 + lVar27 + 4);
                }
              }
              lVar26 = lVar28 + (uVar19 - (long)*(int *)((long)piVar15 + lVar26 + 4)) + lVar27;
              if ((*(ushort *)((long)piVar15 + lVar26 + 4) < 0xd) ||
                 (uVar21 = (ulong)*(ushort *)((long)piVar15 + lVar26 + 0x10), uVar21 == 0)) {
                local_78 = 0;
              }
              else {
                local_78 = (uint)*(byte *)((long)piVar15 + lVar28 + uVar19 + uVar21 + lVar27 + 4);
              }
              uVar24 = *puVar29;
              uVar19 = FUN_0121c680(lVar13);
              if (uVar24 == *(uint *)((long)&local_88 + (uVar19 & 0xff) * 4)) goto LAB_011330b4;
            }
          }
          lVar28 = lVar28 + 4;
        } while (uVar23 * 4 != lVar28);
      }
    }
    piVar15 = (int *)FUN_00fa74f0(lVar14,&local_70);
    if (piVar15 == (int *)0x0) {
      piVar15 = (int *)FUN_00fa4f70(lVar25,&local_70);
      if (piVar15 != (int *)0x0) {
        uVar19 = (ulong)*(ushort *)((long)piVar15 + (6 - (long)*piVar15));
        puVar29 = (uint *)((long)piVar15 + uVar19);
        uVar21 = (ulong)*puVar29;
        uVar23 = (ulong)*(uint *)((long)puVar29 + uVar21);
        if (uVar23 != 0) {
          lVar27 = uVar19 + uVar21;
          lVar28 = 0;
          do {
            uVar19 = (ulong)*(uint *)((long)piVar15 + lVar28 + lVar27 + 4);
            lVar26 = lVar28 + (uVar19 - (long)*(int *)((long)piVar15 + lVar28 + uVar19 + lVar27 + 4)
                              ) + lVar27;
            uVar10 = *(ushort *)((long)piVar15 + lVar26 + 4);
            if (uVar10 < 7) {
              if (*puVar18 == 0) goto LAB_01133048;
            }
            else {
              uVar21 = (ulong)*(ushort *)((long)piVar15 + lVar26 + 10);
              uVar24 = 0;
              if (uVar21 != 0) {
                uVar24 = *(uint *)((long)piVar15 + lVar28 + uVar19 + uVar21 + lVar27 + 4);
              }
              if (*puVar18 == uVar24) {
LAB_01133048:
                if ((uVar10 < 9) ||
                   (uVar21 = (ulong)*(ushort *)((long)piVar15 + lVar26 + 0xc), uVar21 == 0)) {
                  lVar26 = 0;
                }
                else {
                  lVar26 = uVar19 + uVar21;
                  lVar26 = (long)piVar15 +
                           lVar28 + lVar26 + (ulong)*(uint *)((long)piVar15 +
                                                             lVar28 + lVar26 + lVar27 + 4) + lVar27
                           + 4;
                }
                bVar9 = FUN_0121c680(lVar13);
                if (*(int *)(lVar26 + (ulong)bVar9 * 4 + 4) != 0) goto LAB_011330b4;
              }
            }
            lVar28 = lVar28 + 4;
            if (uVar23 * 4 == lVar28) break;
          } while( true );
        }
      }
    }
    else {
      uVar19 = (ulong)*(ushort *)((long)piVar15 + (6 - (long)*piVar15));
      puVar29 = (uint *)((long)piVar15 + uVar19);
      uVar21 = (ulong)*puVar29;
      uVar23 = (ulong)*(uint *)((long)puVar29 + uVar21);
      lVar28 = uVar23 * 4;
      if (uVar23 != 0) {
        lVar26 = uVar19 + uVar21;
        lVar27 = 0;
        bVar3 = false;
        do {
          while( true ) {
            uVar19 = (ulong)*(uint *)((long)piVar15 + lVar27 + lVar26 + 4);
            lVar5 = lVar27 + uVar19 + lVar26;
            lVar6 = lVar27 + (uVar19 - (long)*(int *)((long)piVar15 + lVar5 + 4)) + lVar26;
            uVar10 = *(ushort *)((long)piVar15 + lVar6 + 4);
            if (uVar10 < 0xf) break;
            uVar21 = (ulong)*(ushort *)((long)piVar15 + lVar6 + 0x12);
            uVar24 = 0;
            if (uVar21 != 0) {
              uVar24 = (uint)*(ushort *)((long)piVar15 + lVar27 + uVar19 + uVar21 + lVar26 + 4);
            }
            if (*puVar18 != uVar24) goto LAB_01132e6c;
LAB_01132e3c:
            if (uVar10 < 5) {
              uVar24 = 0;
            }
            else {
              uVar21 = (ulong)*(ushort *)((long)piVar15 + lVar6 + 8);
              uVar24 = 0;
              if (uVar21 != 0) {
                uVar24 = (uint)*(byte *)((long)piVar15 + lVar27 + uVar19 + uVar21 + lVar26 + 4);
              }
            }
            lVar6 = lVar27 + (uVar19 - (long)*(int *)((long)piVar15 + lVar5 + 4)) + lVar26;
            if (*(ushort *)((long)piVar15 + lVar6 + 4) < 7) {
              uVar22 = 0;
            }
            else {
              uVar21 = (ulong)*(ushort *)((long)piVar15 + lVar6 + 10);
              uVar22 = 0;
              if (uVar21 != 0) {
                uVar22 = (uint)*(byte *)((long)piVar15 + lVar27 + uVar19 + uVar21 + lVar26 + 4);
              }
            }
            local_88 = CONCAT44(uVar22,uVar24);
            lVar6 = lVar27 + (uVar19 - (long)*(int *)((long)piVar15 + lVar5 + 4)) + lVar26;
            if (*(ushort *)((long)piVar15 + lVar6 + 4) < 9) {
              local_80 = 0;
            }
            else {
              uVar21 = (ulong)*(ushort *)((long)piVar15 + lVar6 + 0xc);
              local_80 = 0;
              if (uVar21 != 0) {
                local_80 = (uint)*(byte *)((long)piVar15 + lVar27 + uVar19 + uVar21 + lVar26 + 4);
              }
            }
            lVar6 = lVar27 + (uVar19 - (long)*(int *)((long)piVar15 + lVar5 + 4)) + lVar26;
            if (*(ushort *)((long)piVar15 + lVar6 + 4) < 0xb) {
              local_7c = 0;
            }
            else {
              uVar21 = (ulong)*(ushort *)((long)piVar15 + lVar6 + 0xe);
              local_7c = 0;
              if (uVar21 != 0) {
                local_7c = (uint)*(byte *)((long)piVar15 + lVar27 + uVar19 + uVar21 + lVar26 + 4);
              }
            }
            lVar5 = lVar27 + (uVar19 - (long)*(int *)((long)piVar15 + lVar5 + 4)) + lVar26;
            if ((*(ushort *)((long)piVar15 + lVar5 + 4) < 0xd) ||
               (uVar21 = (ulong)*(ushort *)((long)piVar15 + lVar5 + 0x10), uVar21 == 0)) {
              local_78 = 0;
            }
            else {
              local_78 = (uint)*(byte *)((long)piVar15 + lVar27 + uVar19 + uVar21 + lVar26 + 4);
            }
            uVar19 = FUN_0121c680(lVar13);
            iVar2 = *(int *)((long)&local_88 + (uVar19 & 0xff) * 4);
            if (0 < iVar2) goto LAB_011330b4;
            bVar3 = (bool)(bVar3 | 0 < iVar2);
            lVar27 = lVar27 + 4;
            if (lVar28 == lVar27) goto LAB_01132fb4;
          }
          if (*puVar18 == 0) goto LAB_01132e3c;
LAB_01132e6c:
          lVar27 = lVar27 + 4;
        } while (lVar28 != lVar27);
LAB_01132fb4:
        if (bVar3) goto LAB_011330b4;
      }
    }
  }
  else {
    piVar15 = (int *)FUN_00fa4f90(lVar25,&local_68);
    if (piVar15 != (int *)0x0) {
      uVar19 = (ulong)*(ushort *)((long)piVar15 + (6 - (long)*piVar15));
      puVar1 = (uint *)((long)piVar15 + uVar19);
      uVar21 = (ulong)*puVar1;
      uVar23 = (ulong)*(uint *)((long)puVar1 + uVar21);
      if (uVar23 != 0) {
        lVar27 = uVar19 + uVar21;
        lVar28 = 0;
        do {
          uVar19 = (ulong)*(uint *)((long)piVar15 + lVar28 + lVar27 + 4);
          lVar26 = lVar28 + (uVar19 - (long)*(int *)((long)piVar15 + lVar28 + uVar19 + lVar27 + 4))
                            + lVar27;
          uVar10 = *(ushort *)((long)piVar15 + lVar26 + 4);
          if (uVar10 < 7) {
            if (*puVar18 == 0) goto LAB_01132b44;
          }
          else {
            uVar21 = (ulong)*(ushort *)((long)piVar15 + lVar26 + 10);
            uVar24 = 0;
            if (uVar21 != 0) {
              uVar24 = *(uint *)((long)piVar15 + lVar28 + uVar19 + uVar21 + lVar27 + 4);
            }
            if (*puVar18 == uVar24) {
LAB_01132b44:
              uVar24 = *puVar29;
              if ((uVar10 < 9) ||
                 (uVar21 = (ulong)*(ushort *)((long)piVar15 + lVar26 + 0xc), uVar21 == 0)) {
                lVar26 = 0;
              }
              else {
                lVar26 = uVar19 + uVar21;
                lVar26 = (long)piVar15 +
                         lVar28 + lVar26 + (ulong)*(uint *)((long)piVar15 +
                                                           lVar28 + lVar26 + lVar27 + 4) + lVar27 +
                         4;
              }
              bVar9 = FUN_0121c680(lVar13);
              if (uVar24 == *(uint *)(lVar26 + (ulong)bVar9 * 4 + 4)) goto LAB_011330b4;
            }
          }
          lVar28 = lVar28 + 4;
        } while (uVar23 * 4 != lVar28);
      }
    }
    piVar15 = (int *)FUN_00fa4f70(lVar25,&local_70);
    if (piVar15 != (int *)0x0) {
      uVar19 = (ulong)*(ushort *)((long)piVar15 + (6 - (long)*piVar15));
      puVar29 = (uint *)((long)piVar15 + uVar19);
      uVar21 = (ulong)*puVar29;
      uVar23 = (ulong)*(uint *)((long)puVar29 + uVar21);
      if (uVar23 != 0) {
        lVar27 = uVar19 + uVar21;
        lVar28 = 0;
        do {
          uVar19 = (ulong)*(uint *)((long)piVar15 + lVar28 + lVar27 + 4);
          lVar26 = lVar28 + (uVar19 - (long)*(int *)((long)piVar15 + lVar28 + uVar19 + lVar27 + 4))
                            + lVar27;
          uVar10 = *(ushort *)((long)piVar15 + lVar26 + 4);
          if (uVar10 < 7) {
            if (*puVar18 == 0) goto LAB_01132c40;
          }
          else {
            uVar21 = (ulong)*(ushort *)((long)piVar15 + lVar26 + 10);
            uVar24 = 0;
            if (uVar21 != 0) {
              uVar24 = *(uint *)((long)piVar15 + lVar28 + uVar19 + uVar21 + lVar27 + 4);
            }
            if (*puVar18 == uVar24) {
LAB_01132c40:
              if ((uVar10 < 9) ||
                 (uVar21 = (ulong)*(ushort *)((long)piVar15 + lVar26 + 0xc), uVar21 == 0)) {
                lVar26 = 0;
              }
              else {
                lVar26 = uVar19 + uVar21;
                lVar26 = (long)piVar15 +
                         lVar28 + lVar26 + (ulong)*(uint *)((long)piVar15 +
                                                           lVar28 + lVar26 + lVar27 + 4) + lVar27 +
                         4;
              }
              bVar9 = FUN_0121c680(lVar13);
              if (*(int *)(lVar26 + (ulong)bVar9 * 4 + 4) != 0) goto LAB_011330b4;
            }
          }
          lVar28 = lVar28 + 4;
          if (uVar23 * 4 == lVar28) break;
        } while( true );
      }
    }
  }
  uVar16 = 0;
  goto joined_r0x011330c8;
}


