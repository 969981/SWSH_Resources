/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e1ae40; name: FUN_00e1ae40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e1ae40(long param_1)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  char *pcVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long local_68;
  
  if (*(ulong *)(param_1 + 0xf0) == 0x23f8a3e14659241a) {
    return;
  }
  lVar21 = *(long *)PTR_DAT_0271efa0;
  if (*(long *)(lVar21 + 0xd8) == 0) {
    return;
  }
  bVar3 = *(byte *)(param_1 + 0x1c0);
  plVar1 = (long *)(param_1 + 0x180);
  if (bVar3 != 0) {
    pcVar7 = (char *)(param_1 + 0x1c1);
    do {
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    uVar9 = 0xcbf29ce484222645;
    pbVar8 = (byte *)(param_1 + 0x1c1);
    do {
      uVar9 = (uVar9 ^ bVar3) * 0x100000001b3;
      bVar3 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (bVar3 != 0);
    if (uVar9 != *(ulong *)(param_1 + 0xf0)) {
      lVar24 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar24 != 0) {
        (**(code **)(*(long *)(lVar24 + 0x48) + 0x10))();
      }
      local_68 = *plVar1;
      iVar4 = FUN_0100d1b0(lVar24,&local_68);
      if (iVar4 != 0) {
        lVar23 = *(long *)(lVar21 + 0xd8);
        if (lVar23 != 0) {
          puVar10 = *(undefined8 **)(lVar21 + 0xd0);
          puVar17 = puVar10 + lVar23;
          puVar20 = puVar10 + 1;
          puVar6 = puVar10;
          do {
            puVar19 = puVar20;
            if (puVar20 != puVar17) {
              puVar6 = puVar20;
              do {
                if (puVar6[-1] != 0) {
                  (**(code **)(*(long *)(puVar6[-1] + 0x48) + 0x18))();
                  puVar6[-1] = 0;
                }
                puVar6[-1] = *puVar6;
                *puVar6 = 0;
                puVar6 = puVar6 + 1;
              } while (puVar17 != puVar6);
              puVar6 = *(undefined8 **)(lVar21 + 0xd0);
              lVar23 = *(long *)(lVar21 + 0xd8);
              puVar19 = puVar6 + lVar23;
            }
            if (puVar19[-1] != 0) {
              (**(code **)(*(long *)(puVar19[-1] + 0x48) + 0x18))();
              puVar19[-1] = 0;
              puVar6 = *(undefined8 **)(lVar21 + 0xd0);
              lVar23 = *(long *)(lVar21 + 0xd8);
            }
            lVar23 = lVar23 + -1;
            puVar17 = puVar6 + lVar23;
            *(long *)(lVar21 + 0xd8) = lVar23;
          } while (puVar10 != puVar17);
        }
        FUN_00db1810(plVar1);
      }
      if (lVar24 == 0) {
        return;
      }
      (**(code **)(*(long *)(lVar24 + 0x48) + 0x18))((long *)(lVar24 + 0x48));
      return;
    }
  }
  puVar20 = *(undefined8 **)(*(long *)(param_1 + 0xe8) + 0xb0);
  puVar17 = *(undefined8 **)(*(long *)(param_1 + 0xe8) + 0xb8);
  if (puVar20 != puVar17) {
    do {
      while (uVar9 = (**(code **)(*(long *)*puVar20 + 0x88))(), (uVar9 & 1) != 0) {
LAB_00e1b10c:
        puVar20 = puVar20 + 1;
        if (puVar20 == puVar17) goto LAB_00e1b118;
      }
      plVar18 = (long *)*puVar20;
      plVar15 = *(long **)(lVar21 + 0xd0);
      lVar24 = *(long *)(lVar21 + 0xd8);
      if (lVar24 == 0) {
        if (plVar15 != (long *)(*(long *)(lVar21 + 0xd0) + *(long *)(lVar21 + 0xd8) * 8))
        goto LAB_00e1af9c;
        goto LAB_00e1b10c;
      }
      lVar23 = plVar18[0x34];
      plVar5 = plVar15 + lVar24;
      lVar24 = lVar24 << 3;
      do {
        lVar13 = *plVar15;
        lVar22 = _DAT_00000060;
        if (lVar13 != 0) {
          plVar14 = (long *)(lVar13 + 0x48);
          (**(code **)(*plVar14 + 0x10))(plVar14);
          lVar22 = *(long *)(lVar13 + 0x60);
          (**(code **)(*plVar14 + 0x18))(plVar14);
        }
        if (lVar22 == lVar23) {
          plVar5 = plVar15;
          break;
        }
        lVar24 = lVar24 + -8;
        plVar15 = plVar15 + 1;
      } while (lVar24 != 0);
      plVar15 = plVar5;
      if (plVar5 == (long *)(*(long *)(lVar21 + 0xd0) + *(long *)(lVar21 + 0xd8) * 8))
      goto LAB_00e1b10c;
LAB_00e1af9c:
      lVar24 = *plVar15;
      if (lVar24 == 0) goto LAB_00e1b10c;
      plVar15 = (long *)(lVar24 + 0x48);
      (**(code **)(*plVar15 + 0x10))(plVar15);
      local_68 = lVar24;
      (**(code **)(*plVar15 + 0x10))(plVar15);
      (**(code **)(*plVar18 + 0x118))(plVar18,&local_68);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
      plVar5 = *(long **)(lVar21 + 0xd0);
      plVar14 = plVar5;
      if (*(long *)(lVar21 + 0xd8) != 0) {
        lVar24 = plVar18[0x34];
        plVar14 = plVar5 + *(long *)(lVar21 + 0xd8);
        do {
          lVar22 = *plVar5;
          lVar23 = _DAT_00000060;
          if (lVar22 != 0) {
            plVar18 = (long *)(lVar22 + 0x48);
            (**(code **)(*plVar18 + 0x10))(plVar18);
            lVar23 = *(long *)(lVar22 + 0x60);
            (**(code **)(*plVar18 + 0x18))(plVar18);
          }
          if (lVar23 == lVar24) {
            plVar14 = plVar5;
            break;
          }
          plVar5 = plVar5 + 1;
        } while (plVar5 != plVar14);
      }
      lVar24 = *(long *)(lVar21 + 0xd8);
      plVar18 = (long *)(*(long *)(lVar21 + 0xd0) + lVar24 * 8);
      if (plVar14 != plVar18) {
        plVar14 = plVar14 + 1;
        if (plVar14 != plVar18) {
          do {
            if (plVar14[-1] != 0) {
              (**(code **)(*(long *)(plVar14[-1] + 0x48) + 0x18))();
              plVar14[-1] = 0;
            }
            plVar14[-1] = *plVar14;
            *plVar14 = 0;
            plVar14 = plVar14 + 1;
          } while (plVar18 != plVar14);
          lVar24 = *(long *)(lVar21 + 0xd8);
          plVar18 = (long *)(*(long *)(lVar21 + 0xd0) + lVar24 * 8);
        }
        if (plVar18[-1] != 0) {
          (**(code **)(*(long *)(plVar18[-1] + 0x48) + 0x18))();
          plVar18[-1] = 0;
          lVar24 = *(long *)(lVar21 + 0xd8);
        }
        *(long *)(lVar21 + 0xd8) = lVar24 + -1;
      }
      (**(code **)(*plVar15 + 0x18))(plVar15);
      puVar20 = puVar20 + 1;
    } while (puVar20 != puVar17);
LAB_00e1b118:
    plVar15 = *(long **)(*(long *)(param_1 + 0xe8) + 0xb0);
    plVar18 = *(long **)(*(long *)(param_1 + 0xe8) + 0xb8);
    if (plVar15 != plVar18) {
LAB_00e1b134:
      uVar9 = (**(code **)(*(long *)*plVar15 + 0x88))();
      if ((uVar9 & 1) == 0) {
        lVar23 = *plVar15;
        plVar5 = (long *)(*(code *)**(undefined8 **)(lVar23 + 0x50))((undefined8 *)(lVar23 + 0x50));
        lVar24 = FUN_00e2efa0();
        for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
          if (plVar5 == (long *)lVar24) {
            uVar9 = 0;
            goto LAB_00e1b190;
          }
        }
      }
      goto LAB_00e1b394;
    }
  }
  goto LAB_00e1b610;
LAB_00e1b190:
  do {
    lVar22 = *(long *)(lVar23 + uVar9 * 0x10 + 0x6c8);
    plVar5 = *(long **)(lVar21 + 0xd0);
    lVar24 = *(long *)(lVar21 + 0xd8);
    if (lVar24 == 0) {
      if (plVar5 != (long *)(*(long *)(lVar21 + 0xd0) + *(long *)(lVar21 + 0xd8) * 8))
      goto LAB_00e1b218;
LAB_00e1b37c:
      FUN_00eafef0(lVar23,uVar9 & 0xffffffff);
      uVar9 = uVar9 + 1;
      if (uVar9 == 4) break;
      goto LAB_00e1b190;
    }
    plVar14 = plVar5 + lVar24;
    lVar24 = lVar24 << 3;
    do {
      lVar11 = *plVar5;
      lVar13 = _DAT_00000060;
      if (lVar11 != 0) {
        plVar12 = (long *)(lVar11 + 0x48);
        (**(code **)(*plVar12 + 0x10))(plVar12);
        lVar13 = *(long *)(lVar11 + 0x60);
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
      if (lVar13 == lVar22) {
        plVar14 = plVar5;
        break;
      }
      lVar24 = lVar24 + -8;
      plVar5 = plVar5 + 1;
    } while (lVar24 != 0);
    plVar5 = plVar14;
    if (plVar14 == (long *)(*(long *)(lVar21 + 0xd0) + *(long *)(lVar21 + 0xd8) * 8))
    goto LAB_00e1b37c;
LAB_00e1b218:
    lVar24 = *plVar5;
    if (lVar24 == 0) goto LAB_00e1b37c;
    plVar5 = (long *)(lVar24 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    local_68 = lVar24;
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_00eaee60(lVar23,&local_68);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    plVar14 = *(long **)(lVar21 + 0xd0);
    plVar12 = plVar14;
    if (*(long *)(lVar21 + 0xd8) != 0) {
      plVar12 = plVar14 + *(long *)(lVar21 + 0xd8);
      do {
        lVar13 = *plVar14;
        lVar24 = _DAT_00000060;
        if (lVar13 != 0) {
          plVar16 = (long *)(lVar13 + 0x48);
          (**(code **)(*plVar16 + 0x10))(plVar16);
          lVar24 = *(long *)(lVar13 + 0x60);
          (**(code **)(*plVar16 + 0x18))(plVar16);
        }
        if (lVar24 == lVar22) {
          plVar12 = plVar14;
          break;
        }
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar12);
    }
    lVar24 = *(long *)(lVar21 + 0xd8);
    plVar14 = (long *)(*(long *)(lVar21 + 0xd0) + lVar24 * 8);
    if (plVar12 != plVar14) {
      plVar12 = plVar12 + 1;
      if (plVar12 != plVar14) {
        do {
          if (plVar12[-1] != 0) {
            (**(code **)(*(long *)(plVar12[-1] + 0x48) + 0x18))();
            plVar12[-1] = 0;
          }
          plVar12[-1] = *plVar12;
          *plVar12 = 0;
          plVar12 = plVar12 + 1;
        } while (plVar14 != plVar12);
        lVar24 = *(long *)(lVar21 + 0xd8);
        plVar14 = (long *)(*(long *)(lVar21 + 0xd0) + lVar24 * 8);
      }
      if (plVar14[-1] != 0) {
        (**(code **)(*(long *)(plVar14[-1] + 0x48) + 0x18))();
        plVar14[-1] = 0;
        lVar24 = *(long *)(lVar21 + 0xd8);
      }
      *(long *)(lVar21 + 0xd8) = lVar24 + -1;
    }
    (**(code **)(*plVar5 + 0x18))(plVar5);
    uVar9 = uVar9 + 1;
  } while (uVar9 != 4);
LAB_00e1b394:
  plVar15 = plVar15 + 1;
  if (plVar15 == plVar18) goto code_r0x00e1b3a4;
  goto LAB_00e1b134;
  while( true ) {
    lVar24 = lVar24 + -8;
    plVar5 = plVar5 + 1;
    if (lVar24 == 0) break;
LAB_00e1b430:
    lVar11 = *plVar5;
    lVar13 = _DAT_00000060;
    if (lVar11 != 0) {
      plVar12 = (long *)(lVar11 + 0x48);
      (**(code **)(*plVar12 + 0x10))(plVar12);
      lVar13 = *(long *)(lVar11 + 0x60);
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    if (lVar13 == lVar22) {
      plVar14 = plVar5;
      break;
    }
  }
  plVar5 = plVar14;
  if (plVar14 != (long *)(*(long *)(lVar21 + 0xd0) + *(long *)(lVar21 + 0xd8) * 8)) {
LAB_00e1b4a0:
    lVar24 = *plVar5;
    if (lVar24 != 0) {
      plVar5 = (long *)(lVar24 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      local_68 = lVar24;
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_00e5bc10(lVar23,&local_68);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
      plVar14 = *(long **)(lVar21 + 0xd0);
      plVar12 = plVar14;
      if (*(long *)(lVar21 + 0xd8) != 0) {
        plVar12 = plVar14 + *(long *)(lVar21 + 0xd8);
        do {
          lVar23 = *plVar14;
          lVar24 = _DAT_00000060;
          if (lVar23 != 0) {
            plVar16 = (long *)(lVar23 + 0x48);
            (**(code **)(*plVar16 + 0x10))(plVar16);
            lVar24 = *(long *)(lVar23 + 0x60);
            (**(code **)(*plVar16 + 0x18))(plVar16);
          }
          if (lVar24 == lVar22) {
            plVar12 = plVar14;
            break;
          }
          plVar14 = plVar14 + 1;
        } while (plVar14 != plVar12);
      }
      lVar24 = *(long *)(lVar21 + 0xd8);
      plVar14 = (long *)(*(long *)(lVar21 + 0xd0) + lVar24 * 8);
      if (plVar12 != plVar14) {
        plVar12 = plVar12 + 1;
        if (plVar12 != plVar14) {
          do {
            if (plVar12[-1] != 0) {
              (**(code **)(*(long *)(plVar12[-1] + 0x48) + 0x18))();
              plVar12[-1] = 0;
            }
            plVar12[-1] = *plVar12;
            *plVar12 = 0;
            plVar12 = plVar12 + 1;
          } while (plVar14 != plVar12);
          lVar24 = *(long *)(lVar21 + 0xd8);
          plVar14 = (long *)(*(long *)(lVar21 + 0xd0) + lVar24 * 8);
        }
        if (plVar14[-1] != 0) {
          (**(code **)(*(long *)(plVar14[-1] + 0x48) + 0x18))();
          plVar14[-1] = 0;
          lVar24 = *(long *)(lVar21 + 0xd8);
        }
        *(long *)(lVar21 + 0xd8) = lVar24 + -1;
      }
      (**(code **)(*plVar5 + 0x18))(plVar5);
      goto joined_r0x00e1b60c;
    }
  }
LAB_00e1b5f8:
  FUN_00e5caf0(lVar23,0);
joined_r0x00e1b60c:
  plVar15 = plVar15 + 1;
  if (plVar15 == plVar18) goto LAB_00e1b610;
  goto LAB_00e1b3c8;
code_r0x00e1b3a4:
  plVar15 = *(long **)(*(long *)(param_1 + 0xe8) + 0xb0);
  plVar18 = *(long **)(*(long *)(param_1 + 0xe8) + 0xb8);
  if (plVar15 != plVar18) {
LAB_00e1b3c8:
    uVar9 = (**(code **)(*(long *)*plVar15 + 0x88))();
    if ((uVar9 & 1) == 0) {
      lVar23 = *plVar15;
      plVar5 = (long *)(*(code *)**(undefined8 **)(lVar23 + 0x50))((undefined8 *)(lVar23 + 0x50));
      lVar24 = FUN_01590c90();
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (plVar5 == (long *)lVar24) {
          lVar22 = *(long *)(lVar23 + 0xc58);
          plVar5 = *(long **)(lVar21 + 0xd0);
          lVar24 = *(long *)(lVar21 + 0xd8);
          if (lVar24 == 0) {
            if (plVar5 != (long *)(*(long *)(lVar21 + 0xd0) + *(long *)(lVar21 + 0xd8) * 8))
            goto LAB_00e1b4a0;
            goto LAB_00e1b5f8;
          }
          plVar14 = plVar5 + lVar24;
          lVar24 = lVar24 << 3;
          goto LAB_00e1b430;
        }
      }
    }
    goto joined_r0x00e1b60c;
  }
LAB_00e1b610:
  lVar24 = *(long *)(lVar21 + 0xd8);
  if (lVar24 != 0) {
    puVar10 = *(undefined8 **)(lVar21 + 0xd0);
    puVar17 = puVar10 + lVar24;
    puVar20 = puVar10 + 1;
    puVar6 = puVar10;
    do {
      puVar19 = puVar20;
      if (puVar20 != puVar17) {
        puVar6 = puVar20;
        do {
          if (puVar6[-1] != 0) {
            (**(code **)(*(long *)(puVar6[-1] + 0x48) + 0x18))();
            puVar6[-1] = 0;
          }
          puVar6[-1] = *puVar6;
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        } while (puVar17 != puVar6);
        puVar6 = *(undefined8 **)(lVar21 + 0xd0);
        lVar24 = *(long *)(lVar21 + 0xd8);
        puVar19 = puVar6 + lVar24;
      }
      if (puVar19[-1] != 0) {
        (**(code **)(*(long *)(puVar19[-1] + 0x48) + 0x18))();
        puVar19[-1] = 0;
        puVar6 = *(undefined8 **)(lVar21 + 0xd0);
        lVar24 = *(long *)(lVar21 + 0xd8);
      }
      lVar24 = lVar24 + -1;
      puVar17 = puVar6 + lVar24;
      *(long *)(lVar21 + 0xd8) = lVar24;
    } while (puVar10 != puVar17);
  }
  FUN_00db1810(plVar1);
  return;
}


