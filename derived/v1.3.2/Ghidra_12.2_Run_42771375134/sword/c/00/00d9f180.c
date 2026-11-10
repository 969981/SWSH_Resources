/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d9f180; name: FUN_00d9f180
 */


void FUN_00d9f180(long param_1,long param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong *puVar5;
  long *plVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  long *plVar10;
  ulong *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong *puVar15;
  undefined8 uVar16;
  ulong *puVar17;
  ulong *unaff_x28;
  float fVar18;
  ulong *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = *(long *)(param_2 + 0x18);
  puVar5 = *(ulong **)(lVar2 + 0x68);
  uStack_78 = *(undefined8 *)(lVar2 + 0x70);
  local_70 = *(undefined8 *)(lVar2 + 0x78);
  local_68 = *(long *)(lVar2 + 0x80);
  lVar2 = (long)param_3;
  local_80 = puVar5;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  lVar14 = param_1 + lVar2 * 0x58;
  puVar15 = (ulong *)(lVar14 + 0x50);
  puVar17 = (ulong *)*puVar15;
  plVar12 = (long *)(lVar14 + 0x48);
  if (puVar17 == (ulong *)0x0) {
LAB_00d9f33c:
    puVar13 = (undefined8 *)(param_1 + lVar2 * 0x58 + 0x78);
    plVar10 = (long *)(**(code **)(*(long *)*puVar13 + 0x10))((long *)*puVar13,0x1d0,0x10);
    if (plVar10 == (long *)0x0) {
      (**(code **)(*(long *)*puVar13 + 0xb8))();
    }
    FUN_00da0ca0(puVar13,plVar10 + 2,&local_80,param_2);
    lVar14 = param_1 + lVar2 * 0x58;
    *plVar10 = 0;
    plVar10[1] = (long)puVar5;
    plVar6 = (long *)(lVar14 + 0x90);
    fVar18 = *(float *)(lVar14 + 0x98);
    if ((puVar17 == (ulong *)0x0) || (fVar18 * (float)puVar17 < (float)(*plVar6 + 1))) {
      if (puVar17 < (ulong *)0x3) {
        uVar7 = 1;
      }
      else {
        uVar7 = (ulong)(((long)puVar17 - 1U & (ulong)puVar17) != 0);
      }
      uVar3 = (ulong)((float)(*plVar6 + 1) / fVar18);
      uVar7 = uVar7 | (long)puVar17 << 1;
      if (uVar3 <= uVar7) {
        uVar3 = uVar7;
      }
      FUN_00da0b90(plVar12,uVar3);
      puVar17 = (ulong *)*puVar15;
      if (((long)puVar17 - 1U & (ulong)puVar17) == 0) {
        unaff_x28 = (ulong *)((long)puVar17 - 1U & (ulong)puVar5);
        plVar4 = *(long **)(*plVar12 + (long)unaff_x28 * 8);
        goto joined_r0x00d9f430;
      }
      if (puVar5 < puVar17) {
        plVar4 = *(long **)(*plVar12 + (long)puVar5 * 8);
        unaff_x28 = puVar5;
        goto joined_r0x00d9f430;
      }
      uVar7 = 0;
      if (puVar17 != (ulong *)0x0) {
        uVar7 = (ulong)puVar5 / (ulong)puVar17;
      }
      unaff_x28 = (ulong *)((long)puVar5 - uVar7 * (long)puVar17);
      plVar4 = *(long **)(*plVar12 + (long)unaff_x28 * 8);
      if (plVar4 == (long *)0x0) goto LAB_00d9f448;
LAB_00d9f3c4:
      *plVar10 = *plVar4;
LAB_00d9f4b4:
      *plVar4 = (long)plVar10;
    }
    else {
      plVar4 = *(long **)(*plVar12 + (long)unaff_x28 * 8);
joined_r0x00d9f430:
      if (plVar4 != (long *)0x0) goto LAB_00d9f3c4;
LAB_00d9f448:
      plVar4 = (long *)(param_1 + lVar2 * 0x58 + 0x70);
      *plVar10 = *plVar4;
      *plVar4 = (long)plVar10;
      *(long **)(*plVar12 + (long)unaff_x28 * 8) = plVar4;
      if (*plVar10 != 0) {
        puVar5 = *(ulong **)(*plVar10 + 8);
        if (((long)puVar17 - 1U & (ulong)puVar17) == 0) {
          puVar5 = (ulong *)((ulong)puVar5 & (long)puVar17 - 1U);
        }
        else if (puVar17 <= puVar5) {
          uVar7 = 0;
          if (puVar17 != (ulong *)0x0) {
            uVar7 = (ulong)puVar5 / (ulong)puVar17;
          }
          puVar5 = (ulong *)((long)puVar5 - uVar7 * (long)puVar17);
        }
        plVar4 = (long *)(*plVar12 + (long)puVar5 * 8);
        goto LAB_00d9f4b4;
      }
    }
    *plVar6 = *plVar6 + 1;
    puVar5 = local_80;
  }
  else {
    uVar3 = (long)puVar17 - 1;
    uVar7 = uVar3 & (ulong)puVar17;
    if (uVar7 == 0) {
      puVar9 = (ulong *)(uVar3 & (ulong)puVar5);
      lVar14 = *plVar12;
      plVar10 = *(long **)(lVar14 + (long)puVar9 * 8);
    }
    else {
      puVar9 = puVar5;
      if (puVar17 <= puVar5) {
        uVar1 = 0;
        if (puVar17 != (ulong *)0x0) {
          uVar1 = (ulong)puVar5 / (ulong)puVar17;
        }
        puVar9 = (ulong *)((long)puVar5 - uVar1 * (long)puVar17);
      }
      lVar14 = *plVar12;
      plVar10 = *(long **)(lVar14 + (long)puVar9 * 8);
    }
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar7 == 0) {
        do {
          puVar11 = (ulong *)plVar10[1];
          if (puVar11 != puVar5 && (ulong *)((ulong)puVar11 & uVar3) != puVar9) break;
          if ((puVar11 == puVar5) && ((ulong *)plVar10[2] == puVar5)) goto LAB_00d9f4c8;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          puVar11 = (ulong *)plVar10[1];
          if (puVar11 == puVar5) {
            if ((ulong *)plVar10[2] == puVar5) goto LAB_00d9f4c8;
          }
          else {
            if (puVar17 <= puVar11) {
              uVar1 = 0;
              if (puVar17 != (ulong *)0x0) {
                uVar1 = (ulong)puVar11 / (ulong)puVar17;
              }
              puVar11 = (ulong *)((long)puVar11 - uVar1 * (long)puVar17);
            }
            if (puVar11 != puVar9) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
    if (uVar7 == 0) {
      unaff_x28 = (ulong *)(uVar3 & (ulong)puVar5);
      plVar10 = *(long **)(lVar14 + (long)unaff_x28 * 8);
      if (plVar10 != (long *)0x0) goto LAB_00d9f2c4;
      goto LAB_00d9f33c;
    }
    unaff_x28 = puVar5;
    if (puVar17 <= puVar5) {
      uVar1 = 0;
      if (puVar17 != (ulong *)0x0) {
        uVar1 = (ulong)puVar5 / (ulong)puVar17;
      }
      unaff_x28 = (ulong *)((long)puVar5 - uVar1 * (long)puVar17);
    }
    plVar10 = *(long **)(lVar14 + (long)unaff_x28 * 8);
    if (plVar10 == (long *)0x0) goto LAB_00d9f33c;
LAB_00d9f2c4:
    if (uVar7 == 0) {
      do {
        plVar10 = (long *)*plVar10;
        if ((plVar10 == (long *)0x0) ||
           ((ulong *)plVar10[1] != puVar5 && (ulong *)((ulong)plVar10[1] & uVar3) != unaff_x28))
        goto LAB_00d9f33c;
      } while ((ulong *)plVar10[2] != puVar5);
    }
    else {
      do {
        plVar10 = (long *)*plVar10;
        if (plVar10 == (long *)0x0) goto LAB_00d9f33c;
        puVar9 = (ulong *)plVar10[1];
        if (puVar9 != puVar5) {
          if (puVar17 <= puVar9) {
            uVar7 = 0;
            if (puVar17 != (ulong *)0x0) {
              uVar7 = (ulong)puVar9 / (ulong)puVar17;
            }
            puVar9 = (ulong *)((long)puVar9 - uVar7 * (long)puVar17);
          }
          if (puVar9 != unaff_x28) goto LAB_00d9f33c;
        }
      } while ((ulong *)plVar10[2] != puVar5);
    }
  }
LAB_00d9f4c8:
  puVar17 = *(ulong **)(param_1 + 0x470);
  plVar10 = (long *)(param_1 + 0x468);
  if (puVar17 != (ulong *)0x0) {
    uVar7 = (long)puVar17 - 1;
    if ((uVar7 & (ulong)puVar17) == 0) {
      puVar9 = (ulong *)(uVar7 & (ulong)puVar5);
      plVar6 = *(long **)(*plVar10 + (long)puVar9 * 8);
    }
    else {
      puVar9 = puVar5;
      if (puVar17 <= puVar5) {
        uVar3 = 0;
        if (puVar17 != (ulong *)0x0) {
          uVar3 = (ulong)puVar5 / (ulong)puVar17;
        }
        puVar9 = (ulong *)((long)puVar5 - uVar3 * (long)puVar17);
      }
      plVar6 = *(long **)(*plVar10 + (long)puVar9 * 8);
    }
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if ((uVar7 & (ulong)puVar17) == 0) {
        do {
          puVar11 = (ulong *)plVar6[1];
          if (puVar11 != puVar5 && (ulong *)((ulong)puVar11 & uVar7) != puVar9) break;
          if ((puVar11 == puVar5) && ((ulong *)plVar6[2] == puVar5)) goto LAB_00d9f8b8;
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          puVar11 = (ulong *)plVar6[1];
          if (puVar11 == puVar5) {
            if ((ulong *)plVar6[2] == puVar5) goto LAB_00d9f8b8;
          }
          else {
            if (puVar17 <= puVar11) {
              uVar7 = 0;
              if (puVar17 != (ulong *)0x0) {
                uVar7 = (ulong)puVar11 / (ulong)puVar17;
              }
              puVar11 = (ulong *)((long)puVar11 - uVar7 * (long)puVar17);
            }
            if (puVar11 != puVar9) break;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  puVar9 = (ulong *)*puVar15;
  if (puVar9 == (ulong *)0x0) {
    plVar12 = (long *)0x0;
  }
  else {
    uVar7 = (long)puVar9 - 1;
    if ((uVar7 & (ulong)puVar9) == 0) {
      puVar11 = (ulong *)(uVar7 & (ulong)puVar5);
      plVar12 = *(long **)(*plVar12 + (long)puVar11 * 8);
    }
    else {
      puVar11 = puVar5;
      if (puVar9 <= puVar5) {
        uVar3 = 0;
        if (puVar9 != (ulong *)0x0) {
          uVar3 = (ulong)puVar5 / (ulong)puVar9;
        }
        puVar11 = (ulong *)((long)puVar5 - uVar3 * (long)puVar9);
      }
      plVar12 = *(long **)(*plVar12 + (long)puVar11 * 8);
    }
    if (plVar12 == (long *)0x0) {
LAB_00d9f6f4:
      plVar12 = (long *)0x0;
    }
    else {
      plVar12 = (long *)*plVar12;
      if (plVar12 != (long *)0x0) {
        if ((uVar7 & (ulong)puVar9) == 0) {
          do {
            puVar9 = (ulong *)plVar12[1];
            if (puVar9 != puVar5 && (ulong *)((ulong)puVar9 & uVar7) != puVar11) goto LAB_00d9f6f4;
          } while (((puVar9 != puVar5) || ((ulong *)plVar12[2] != puVar5)) &&
                  (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0));
        }
        else {
          do {
            puVar8 = (ulong *)plVar12[1];
            if (puVar8 == puVar5) {
              if ((ulong *)plVar12[2] == puVar5) break;
            }
            else {
              if (puVar9 <= puVar8) {
                uVar7 = 0;
                if (puVar9 != (ulong *)0x0) {
                  uVar7 = (ulong)puVar8 / (ulong)puVar9;
                }
                puVar8 = (ulong *)((long)puVar8 - uVar7 * (long)puVar9);
              }
              if (puVar8 != puVar11) goto LAB_00d9f6f4;
            }
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
  }
  if (puVar17 != (ulong *)0x0) {
    uVar7 = (long)puVar17 - 1;
    if ((uVar7 & (ulong)puVar17) == 0) {
      puVar15 = (ulong *)(uVar7 & (ulong)puVar5);
      plVar6 = *(long **)(*plVar10 + (long)puVar15 * 8);
    }
    else {
      puVar15 = puVar5;
      if (puVar17 <= puVar5) {
        uVar3 = 0;
        if (puVar17 != (ulong *)0x0) {
          uVar3 = (ulong)puVar5 / (ulong)puVar17;
        }
        puVar15 = (ulong *)((long)puVar5 - uVar3 * (long)puVar17);
      }
      plVar6 = *(long **)(*plVar10 + (long)puVar15 * 8);
    }
    if (plVar6 != (long *)0x0) {
      if ((uVar7 & (ulong)puVar17) == 0) {
        do {
          plVar6 = (long *)*plVar6;
          if ((plVar6 == (long *)0x0) ||
             ((ulong *)plVar6[1] != puVar5 && (ulong *)((ulong)plVar6[1] & uVar7) != puVar15))
          goto LAB_00d9f6fc;
        } while ((ulong *)plVar6[2] != puVar5);
      }
      else {
        do {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_00d9f6fc;
          puVar9 = (ulong *)plVar6[1];
          if (puVar9 != puVar5) {
            if (puVar17 <= puVar9) {
              uVar7 = 0;
              if (puVar17 != (ulong *)0x0) {
                uVar7 = (ulong)puVar9 / (ulong)puVar17;
              }
              puVar9 = (ulong *)((long)puVar9 - uVar7 * (long)puVar17);
            }
            if (puVar9 != puVar15) goto LAB_00d9f6fc;
          }
        } while ((ulong *)plVar6[2] != puVar5);
      }
      goto LAB_00d9f8b8;
    }
  }
LAB_00d9f6fc:
  plVar6 = (long *)(**(code **)(**(long **)(param_1 + 0x498) + 0x10))
                             (*(long **)(param_1 + 0x498),0x20,8);
  if (plVar6 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x498) + 0xb8))();
  }
  uVar16 = *(undefined8 *)(param_1 + 0x498);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar16;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  plVar6[2] = (long)local_80;
  plVar6[3] = (long)(plVar12 + 4);
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  *plVar6 = 0;
  plVar6[1] = (long)puVar5;
  fVar18 = (float)(*(long *)(param_1 + 0x4b0) + 1);
  if ((puVar17 == (ulong *)0x0) || (*(float *)(param_1 + 0x4b8) * (float)puVar17 < fVar18)) {
    if (puVar17 < (ulong *)0x3) {
      uVar7 = 1;
    }
    else {
      uVar7 = (ulong)(((long)puVar17 - 1U & (ulong)puVar17) != 0);
    }
    uVar3 = (ulong)(fVar18 / *(float *)(param_1 + 0x4b8));
    uVar7 = uVar7 | (long)puVar17 << 1;
    if (uVar3 <= uVar7) {
      uVar3 = uVar7;
    }
    FUN_00da10f0(plVar10,uVar3);
    puVar17 = *(ulong **)(param_1 + 0x470);
    if (((long)puVar17 - 1U & (ulong)puVar17) == 0) {
      puVar15 = (ulong *)((long)puVar17 - 1U & (ulong)puVar5);
      plVar12 = *(long **)(*plVar10 + (long)puVar15 * 8);
      goto joined_r0x00d9f828;
    }
    if (puVar5 < puVar17) {
      plVar12 = *(long **)(*plVar10 + (long)puVar5 * 8);
      puVar15 = puVar5;
      goto joined_r0x00d9f828;
    }
    uVar7 = 0;
    if (puVar17 != (ulong *)0x0) {
      uVar7 = (ulong)puVar5 / (ulong)puVar17;
    }
    puVar15 = (ulong *)((long)puVar5 - uVar7 * (long)puVar17);
    plVar12 = *(long **)(*plVar10 + (long)puVar15 * 8);
    if (plVar12 == (long *)0x0) goto LAB_00d9f840;
LAB_00d9f7a8:
    *plVar6 = *plVar12;
LAB_00d9f8a8:
    *plVar12 = (long)plVar6;
  }
  else {
    plVar12 = *(long **)(*plVar10 + (long)puVar15 * 8);
joined_r0x00d9f828:
    if (plVar12 != (long *)0x0) goto LAB_00d9f7a8;
LAB_00d9f840:
    *plVar6 = *(long *)(param_1 + 0x490);
    *(long **)(param_1 + 0x490) = plVar6;
    *(long *)(*(long *)(param_1 + 0x468) + (long)puVar15 * 8) = param_1 + 0x490;
    if (*plVar6 != 0) {
      puVar5 = *(ulong **)(*plVar6 + 8);
      if (((long)puVar17 - 1U & (ulong)puVar17) == 0) {
        puVar5 = (ulong *)((ulong)puVar5 & (long)puVar17 - 1U);
      }
      else if (puVar17 <= puVar5) {
        uVar7 = 0;
        if (puVar17 != (ulong *)0x0) {
          uVar7 = (ulong)puVar5 / (ulong)puVar17;
        }
        puVar5 = (ulong *)((long)puVar5 - uVar7 * (long)puVar17);
      }
      plVar12 = (long *)(*plVar10 + (long)puVar5 * 8);
      goto LAB_00d9f8a8;
    }
  }
  *(long *)(param_1 + 0x4b0) = *(long *)(param_1 + 0x4b0) + 1;
LAB_00d9f8b8:
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  return;
}


