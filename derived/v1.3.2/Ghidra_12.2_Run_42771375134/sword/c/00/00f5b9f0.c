/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f5b9f0; name: FUN_00f5b9f0
 */


void FUN_00f5b9f0(undefined8 *param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  void *pvVar10;
  long lVar11;
  void *pvVar12;
  void *pvVar13;
  char *pcVar14;
  long *plVar15;
  long *plVar16;
  char *pcVar17;
  ulong uVar18;
  undefined8 uVar19;
  void *pvVar20;
  char *pcVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long local_88;
  int local_80;
  ulong local_78;
  size_t local_70;
  char *local_68;
  
  plVar9 = (long *)FUN_01760060(*(undefined8 *)*param_1,0xfff0b9d5);
  if ((char)plVar9[10] == '\0') {
    return;
  }
  uVar19 = *(undefined8 *)*param_1;
  iVar7 = FUN_0175f320(uVar19,2);
  if (iVar7 != 4) {
    FUN_0175f320(uVar19,2);
    return;
  }
  pvVar10 = (void *)FUN_0175fd50(uVar19,2,&local_78);
  uVar22 = local_78;
  bVar6 = 0xffffffffffffffef < local_78;
  plVar16 = plVar9 + 7;
  lVar23 = *plVar16;
  lVar24 = plVar9[8];
  local_70 = 0;
  local_68 = (char *)0x0;
  local_78 = 0;
  if (bVar6) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar22 < 0x17) {
    local_78 = (ulong)(byte)((int)uVar22 << 1);
    pcVar21 = (char *)((ulong)&local_78 | 1);
    if (uVar22 != 0) goto LAB_00f5baec;
  }
  else {
    uVar18 = uVar22 + 0x10 & 0xfffffffffffffff0;
    pcVar21 = operator_new(uVar18);
    local_78 = uVar18 | 1;
    local_70 = uVar22;
    local_68 = pcVar21;
LAB_00f5baec:
    memcpy(pcVar21,pvVar10,uVar22);
  }
  pcVar21[uVar22] = '\0';
  lVar11 = FUN_00f5c610(plVar9,&local_78);
  if (lVar11 != 0) {
    lVar23 = *(long *)*param_1;
    iVar7 = *(int *)(lVar11 + 0x38);
    local_88 = lVar23;
    FUN_0175f270(lVar23,3);
    local_80 = FUN_0175dbf0(lVar23,0xfff0b9d8);
    FUN_0075d4b0(*plVar16 + (long)iVar7 * 0x10,&local_88);
    if ((local_88 != 0) && (local_80 != -2)) {
      FUN_0175dcd0(local_88,0xfff0b9d8);
    }
    puVar5 = PTR_LAB_027213a8;
    *(undefined **)(lVar11 + 0x28) = PTR_FUN_027213a0;
    *(undefined **)(lVar11 + 0x30) = puVar5;
    *(int *)(lVar11 + 0x38) = iVar7;
    goto joined_r0x00f5bfa8;
  }
  local_88 = CONCAT44(local_88._4_4_,3);
  puVar3 = (undefined8 *)plVar9[8];
  if (puVar3 < (undefined8 *)plVar9[9]) {
    uVar19 = *(undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 1) = 0xfffffffe;
    *puVar3 = uVar19;
    FUN_0175f270(uVar19,3);
    uVar8 = FUN_0175dbf0(uVar19,0xfff0b9d8);
    *(undefined4 *)(puVar3 + 1) = uVar8;
    plVar9[8] = plVar9[8] + 0x10;
  }
  else {
    FUN_00f5ccb0(plVar16,(undefined8 *)*param_1,&local_88);
  }
  sVar1 = local_78 >> 1 & 0x7f;
  pcVar21 = (char *)((ulong)&local_78 | 1);
  if ((local_78 & 1) != 0) {
    sVar1 = local_70;
    pcVar21 = local_68;
  }
  pvVar12 = (void *)FUN_00f5c830(&local_88,pcVar21,sVar1);
  pvVar20 = (void *)plVar9[1];
  if (pvVar20 != (void *)0x0) {
    uVar22 = (long)pvVar20 - 1;
    if ((uVar22 & (ulong)pvVar20) == 0) {
      pvVar10 = (void *)(uVar22 & (ulong)pvVar12);
LAB_00f5bc5c:
      plVar16 = *(long **)(*plVar9 + (long)pvVar10 * 8);
    }
    else {
      pvVar10 = pvVar12;
      if (pvVar12 < pvVar20) goto LAB_00f5bc5c;
      uVar18 = 0;
      if (pvVar20 != (void *)0x0) {
        uVar18 = (ulong)pvVar12 / (ulong)pvVar20;
      }
      pvVar10 = (void *)((long)pvVar12 - uVar18 * (long)pvVar20);
      plVar16 = *(long **)(*plVar9 + (long)pvVar10 * 8);
    }
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      pcVar21 = (char *)((ulong)&local_78 | 1);
      sVar1 = local_78 >> 1 & 0x7f;
      if ((local_78 & 1) != 0) {
        pcVar21 = local_68;
        sVar1 = local_70;
      }
      if ((uVar22 & (ulong)pvVar20) == 0) {
        if (sVar1 == 0) {
          do {
            if ((void *)plVar16[1] != pvVar12 && (void *)((ulong)plVar16[1] & uVar22) != pvVar10)
            break;
            uVar18 = (ulong)(*(byte *)(plVar16 + 2) >> 1);
            if ((*(byte *)(plVar16 + 2) & 1) != 0) {
              uVar18 = plVar16[3];
            }
            if (uVar18 == 0) goto joined_r0x00f5bfa8;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            if ((void *)plVar16[1] != pvVar12 && (void *)((ulong)plVar16[1] & uVar22) != pvVar10)
            break;
            bVar4 = *(byte *)(plVar16 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar16[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                pcVar14 = (char *)((long)plVar16 + 0x11);
                lVar11 = -(ulong)(bVar4 >> 1);
                pcVar17 = pcVar21;
                while (*pcVar14 == *pcVar17) {
                  pcVar14 = pcVar14 + 1;
                  pcVar17 = pcVar17 + 1;
                  lVar11 = lVar11 + 1;
                  if (lVar11 == 0) goto joined_r0x00f5bfa8;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar16[4],pcVar21,sVar1);
                if (iVar7 == 0) goto joined_r0x00f5bfa8;
              }
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
      else if (sVar1 == 0) {
        do {
          pvVar13 = (void *)plVar16[1];
          if (pvVar13 != pvVar12) {
            if (pvVar20 <= pvVar13) {
              uVar22 = 0;
              if (pvVar20 != (void *)0x0) {
                uVar22 = (ulong)pvVar13 / (ulong)pvVar20;
              }
              pvVar13 = (void *)((long)pvVar13 - uVar22 * (long)pvVar20);
            }
            if (pvVar13 != pvVar10) break;
          }
          uVar22 = (ulong)(*(byte *)(plVar16 + 2) >> 1);
          if ((*(byte *)(plVar16 + 2) & 1) != 0) {
            uVar22 = plVar16[3];
          }
          if (uVar22 == 0) goto joined_r0x00f5bfa8;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          pvVar13 = (void *)plVar16[1];
          if (pvVar13 != pvVar12) {
            if (pvVar20 <= pvVar13) {
              uVar22 = 0;
              if (pvVar20 != (void *)0x0) {
                uVar22 = (ulong)pvVar13 / (ulong)pvVar20;
              }
              pvVar13 = (void *)((long)pvVar13 - uVar22 * (long)pvVar20);
            }
            if (pvVar13 != pvVar10) break;
          }
          bVar4 = *(byte *)(plVar16 + 2);
          sVar2 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            sVar2 = plVar16[3];
          }
          if (sVar2 == sVar1) {
            if ((bVar4 & 1) == 0) {
              pcVar14 = (char *)((long)plVar16 + 0x11);
              lVar11 = -(ulong)(bVar4 >> 1);
              pcVar17 = pcVar21;
              while (*pcVar14 == *pcVar17) {
                pcVar14 = pcVar14 + 1;
                pcVar17 = pcVar17 + 1;
                lVar11 = lVar11 + 1;
                if (lVar11 == 0) goto joined_r0x00f5bfa8;
              }
            }
            else {
              iVar7 = memcmp((void *)plVar16[4],pcVar21,sVar1);
              if (iVar7 == 0) goto joined_r0x00f5bfa8;
            }
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  plVar16 = operator_new(0x40);
  pcVar21 = local_68;
  plVar16[2] = local_78;
  plVar16[3] = local_70;
  puVar5 = PTR_FUN_027213a0;
  local_78 = 0;
  local_70 = 0;
  local_68 = (char *)0x0;
  plVar16[4] = (long)pcVar21;
  plVar16[5] = (long)puVar5;
  plVar16[6] = (long)PTR_LAB_027213a8;
  *(int *)(plVar16 + 7) = (int)((ulong)(lVar24 - lVar23) >> 4);
  *plVar16 = 0;
  plVar16[1] = (long)pvVar12;
  if ((pvVar20 == (void *)0x0) || (*(float *)(plVar9 + 4) * (float)pvVar20 < (float)(plVar9[3] + 1))
     ) {
    if (pvVar20 < (void *)0x3) {
      uVar22 = 1;
    }
    else {
      uVar22 = (ulong)(((long)pvVar20 - 1U & (ulong)pvVar20) != 0);
    }
    uVar18 = (ulong)((float)(plVar9[3] + 1) / *(float *)(plVar9 + 4));
    uVar22 = uVar22 | (long)pvVar20 << 1;
    if (uVar18 <= uVar22) {
      uVar18 = uVar22;
    }
    FUN_00f5ceb0(plVar9,uVar18);
    pvVar20 = (void *)plVar9[1];
    if (((long)pvVar20 - 1U & (ulong)pvVar20) == 0) {
      pvVar10 = (void *)((long)pvVar20 - 1U & (ulong)pvVar12);
      lVar23 = *plVar9;
      plVar15 = *(long **)(lVar23 + (long)pvVar10 * 8);
      goto joined_r0x00f5bf18;
    }
    if (pvVar12 < pvVar20) {
      lVar23 = *plVar9;
      plVar15 = *(long **)(lVar23 + (long)pvVar12 * 8);
      pvVar10 = pvVar12;
      goto joined_r0x00f5bf18;
    }
    uVar22 = 0;
    if (pvVar20 != (void *)0x0) {
      uVar22 = (ulong)pvVar12 / (ulong)pvVar20;
    }
    pvVar10 = (void *)((long)pvVar12 - uVar22 * (long)pvVar20);
    lVar23 = *plVar9;
    plVar15 = *(long **)(lVar23 + (long)pvVar10 * 8);
    if (plVar15 != (long *)0x0) goto LAB_00f5beac;
LAB_00f5bf30:
    plVar15 = plVar9 + 2;
    *plVar16 = *plVar15;
    *plVar15 = (long)plVar16;
    *(long **)(lVar23 + (long)pvVar10 * 8) = plVar15;
    if (*plVar16 != 0) {
      pvVar10 = *(void **)(*plVar16 + 8);
      if (((long)pvVar20 - 1U & (ulong)pvVar20) == 0) {
        pvVar10 = (void *)((ulong)pvVar10 & (long)pvVar20 - 1U);
      }
      else if (pvVar20 <= pvVar10) {
        uVar22 = 0;
        if (pvVar20 != (void *)0x0) {
          uVar22 = (ulong)pvVar10 / (ulong)pvVar20;
        }
        pvVar10 = (void *)((long)pvVar10 - uVar22 * (long)pvVar20);
      }
      plVar15 = (long *)(*plVar9 + (long)pvVar10 * 8);
      goto LAB_00f5bf94;
    }
  }
  else {
    lVar23 = *plVar9;
    plVar15 = *(long **)(lVar23 + (long)pvVar10 * 8);
joined_r0x00f5bf18:
    if (plVar15 == (long *)0x0) goto LAB_00f5bf30;
LAB_00f5beac:
    *plVar16 = *plVar15;
LAB_00f5bf94:
    *plVar15 = (long)plVar16;
  }
  plVar9[3] = plVar9[3] + 1;
joined_r0x00f5bfa8:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  return;
}


