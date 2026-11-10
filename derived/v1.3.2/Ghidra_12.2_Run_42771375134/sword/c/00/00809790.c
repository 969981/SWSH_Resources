/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00809790; name: FUN_00809790
 */


void FUN_00809790(long *param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  uint uVar18;
  
LAB_008097dc:
  plVar11 = param_2 + -1;
LAB_008097f8:
  plVar17 = param_1;
  lVar7 = (long)param_2 - (long)plVar17;
  uVar4 = lVar7 >> 3;
  switch(uVar4) {
  case 0:
  case 1:
    return;
  case 2:
    lVar7 = param_2[-1];
    lVar8 = *plVar17;
    if (*(char *)(lVar7 + 0x44) == '\0') {
      plVar11 = (long *)(*(long *)(lVar7 + 0x50) + 0x30);
    }
    else if (*(long *)(lVar7 + 0x60) == 0) {
      plVar11 = (long *)(*(long *)(lVar7 + 0x30) + 0x88);
    }
    else {
      plVar11 = (long *)(*(long *)(lVar7 + 0x60) + 0x80);
    }
    if (*(char *)(lVar8 + 0x44) == '\0') {
      plVar9 = (long *)(*(long *)(lVar8 + 0x50) + 0x30);
    }
    else if (*(long *)(lVar8 + 0x60) == 0) {
      plVar9 = (long *)(*(long *)(lVar8 + 0x30) + 0x88);
    }
    else {
      plVar9 = (long *)(*(long *)(lVar8 + 0x60) + 0x80);
    }
    if ((int)((ulong)(lVar7 - *plVar11) >> 4) * 0x38e38e39 <
        (int)((ulong)(lVar8 - *plVar9) >> 4) * 0x38e38e39) {
      *plVar17 = lVar7;
      param_2[-1] = lVar8;
      return;
    }
    return;
  case 3:
    FUN_0080a370(plVar17,plVar17 + 1,plVar11);
    return;
  case 4:
    FUN_0080a5f0(plVar17,plVar17 + 1,plVar17 + 2,plVar11);
    return;
  case 5:
    FUN_0080a7f0(plVar17,plVar17 + 1,plVar17 + 2,plVar17 + 3,plVar11);
    return;
  }
  if (lVar7 < 0xf8) {
    FUN_0080a370(plVar17,plVar17 + 1,plVar17 + 2);
    if (plVar17 + 3 == param_2) {
      return;
    }
    lVar7 = 0;
    plVar11 = plVar17 + 3;
    plVar9 = plVar17 + 2;
    goto LAB_0080a10c;
  }
  uVar3 = uVar4;
  if ((long)uVar4 < 0) {
    uVar3 = uVar4 + 1;
  }
  plVar9 = (long *)((long)plVar17 + (uVar3 & 0x3ffffffffffffffe) * 4);
  if (lVar7 < 0x1f39) {
    iVar2 = FUN_0080a370(plVar17,plVar9,plVar11);
    lVar7 = *plVar17;
    lVar8 = *plVar9;
    cVar6 = *(char *)(lVar7 + 0x44);
    if (cVar6 == '\0') goto LAB_0080989c;
LAB_0080986c:
    if (*(long *)(lVar7 + 0x60) == 0) {
      plVar5 = (long *)(*(long *)(lVar7 + 0x30) + 0x88);
    }
    else {
      plVar5 = (long *)(*(long *)(lVar7 + 0x60) + 0x80);
    }
  }
  else {
    uVar3 = uVar4 + 3;
    if (-1 < (long)uVar4) {
      uVar3 = uVar4;
    }
    lVar7 = (uVar3 & 0x7ffffffffffffffc) * 2;
    iVar2 = FUN_0080a7f0(plVar17,(long)plVar17 + lVar7,plVar9,(long)plVar9 + lVar7,plVar11);
    lVar7 = *plVar17;
    lVar8 = *plVar9;
    cVar6 = *(char *)(lVar7 + 0x44);
    if (cVar6 != '\0') goto LAB_0080986c;
LAB_0080989c:
    plVar5 = (long *)(*(long *)(lVar7 + 0x50) + 0x30);
  }
  if (*(char *)(lVar8 + 0x44) == '\0') {
    plVar12 = (long *)(*(long *)(lVar8 + 0x50) + 0x30);
  }
  else if (*(long *)(lVar8 + 0x60) == 0) {
    plVar12 = (long *)(*(long *)(lVar8 + 0x30) + 0x88);
  }
  else {
    plVar12 = (long *)(*(long *)(lVar8 + 0x60) + 0x80);
  }
  if ((int)((ulong)(lVar7 - *plVar5) >> 4) * 0x38e38e39 <
      (int)((ulong)(lVar8 - *plVar12) >> 4) * 0x38e38e39) {
    plVar12 = plVar17 + 1;
    plVar5 = plVar11;
    if (plVar12 < plVar11) goto LAB_00809a4c;
  }
  else {
    plVar5 = param_2 + -2;
    if (*(char *)(lVar8 + 0x44) == '\0') {
      do {
        if (plVar17 == plVar5) goto LAB_00809cf0;
        lVar15 = *plVar5;
        if (*(char *)(lVar15 + 0x44) == '\0') {
          plVar12 = (long *)(*(long *)(lVar15 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar15 + 0x60) == 0) {
          plVar12 = (long *)(*(long *)(lVar15 + 0x30) + 0x88);
        }
        else {
          plVar12 = (long *)(*(long *)(lVar15 + 0x60) + 0x80);
        }
        plVar5 = plVar5 + -1;
      } while ((int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x50) + 0x30)) >> 4) * 0x38e38e39
               <= (int)((ulong)(lVar15 - *plVar12) >> 4) * 0x38e38e39);
    }
    else {
      do {
        if (plVar17 == plVar5) goto LAB_00809cf0;
        lVar15 = *plVar5;
        if (*(char *)(lVar15 + 0x44) == '\0') {
          plVar12 = (long *)(*(long *)(lVar15 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar15 + 0x60) == 0) {
          plVar12 = (long *)(*(long *)(lVar15 + 0x30) + 0x88);
        }
        else {
          plVar12 = (long *)(*(long *)(lVar15 + 0x60) + 0x80);
        }
        if (*(long *)(lVar8 + 0x60) == 0) {
          plVar13 = (long *)(*(long *)(lVar8 + 0x30) + 0x88);
        }
        else {
          plVar13 = (long *)(*(long *)(lVar8 + 0x60) + 0x80);
        }
        plVar5 = plVar5 + -1;
      } while ((int)((ulong)(lVar8 - *plVar13) >> 4) * 0x38e38e39 <=
               (int)((ulong)(lVar15 - *plVar12) >> 4) * 0x38e38e39);
    }
    plVar5 = plVar5 + 1;
    iVar2 = iVar2 + 1;
    *plVar17 = *plVar5;
    *plVar5 = lVar7;
    plVar12 = plVar17 + 1;
    if (plVar12 < plVar5) {
LAB_00809a4c:
      while( true ) {
        lVar7 = *plVar9;
        if (*(char *)(lVar7 + 0x44) == '\0') {
          plVar13 = plVar12 + -1;
          do {
            lVar8 = plVar13[1];
            if (*(char *)(lVar8 + 0x44) == '\0') {
              plVar12 = (long *)(*(long *)(lVar8 + 0x50) + 0x30);
            }
            else if (*(long *)(lVar8 + 0x60) == 0) {
              plVar12 = (long *)(*(long *)(lVar8 + 0x30) + 0x88);
            }
            else {
              plVar12 = (long *)(*(long *)(lVar8 + 0x60) + 0x80);
            }
            plVar13 = plVar13 + 1;
          } while ((int)((ulong)(lVar8 - *plVar12) >> 4) * 0x38e38e39 <
                   (int)((ulong)(lVar7 - *(long *)(*(long *)(lVar7 + 0x50) + 0x30)) >> 4) *
                   0x38e38e39);
        }
        else {
          plVar13 = plVar12 + -1;
          do {
            lVar8 = plVar13[1];
            if (*(char *)(lVar8 + 0x44) == '\0') {
              plVar12 = (long *)(*(long *)(lVar8 + 0x50) + 0x30);
            }
            else if (*(long *)(lVar8 + 0x60) == 0) {
              plVar12 = (long *)(*(long *)(lVar8 + 0x30) + 0x88);
            }
            else {
              plVar12 = (long *)(*(long *)(lVar8 + 0x60) + 0x80);
            }
            plVar16 = (long *)(*(long *)(lVar7 + 0x60) + 0x80);
            if (*(long *)(lVar7 + 0x60) == 0) {
              plVar16 = (long *)(*(long *)(lVar7 + 0x30) + 0x88);
            }
            plVar13 = plVar13 + 1;
          } while ((int)((ulong)(lVar8 - *plVar12) >> 4) * 0x38e38e39 <
                   (int)((ulong)(lVar7 - *plVar16) >> 4) * 0x38e38e39);
        }
        if (*(char *)(lVar7 + 0x44) == '\0') {
          do {
            plVar5 = plVar5 + -1;
            lVar8 = *plVar5;
            if (*(char *)(lVar8 + 0x44) == '\0') {
              plVar12 = (long *)(*(long *)(lVar8 + 0x50) + 0x30);
            }
            else if (*(long *)(lVar8 + 0x60) == 0) {
              plVar12 = (long *)(*(long *)(lVar8 + 0x30) + 0x88);
            }
            else {
              plVar12 = (long *)(*(long *)(lVar8 + 0x60) + 0x80);
            }
          } while ((int)((ulong)(lVar7 - *(long *)(*(long *)(lVar7 + 0x50) + 0x30)) >> 4) *
                   0x38e38e39 <= (int)((ulong)(lVar8 - *plVar12) >> 4) * 0x38e38e39);
        }
        else {
          do {
            plVar5 = plVar5 + -1;
            lVar8 = *plVar5;
            if (*(char *)(lVar8 + 0x44) == '\0') {
              plVar12 = (long *)(*(long *)(lVar8 + 0x50) + 0x30);
            }
            else if (*(long *)(lVar8 + 0x60) == 0) {
              plVar12 = (long *)(*(long *)(lVar8 + 0x30) + 0x88);
            }
            else {
              plVar12 = (long *)(*(long *)(lVar8 + 0x60) + 0x80);
            }
            plVar16 = (long *)(*(long *)(lVar7 + 0x60) + 0x80);
            if (*(long *)(lVar7 + 0x60) == 0) {
              plVar16 = (long *)(*(long *)(lVar7 + 0x30) + 0x88);
            }
          } while ((int)((ulong)(lVar7 - *plVar16) >> 4) * 0x38e38e39 <=
                   (int)((ulong)(lVar8 - *plVar12) >> 4) * 0x38e38e39);
        }
        plVar12 = plVar13;
        if (plVar5 < plVar13) break;
        lVar7 = *plVar13;
        plVar12 = plVar13 + 1;
        *plVar13 = *plVar5;
        *plVar5 = lVar7;
        iVar2 = iVar2 + 1;
        plVar16 = plVar5;
        if (plVar9 != plVar13) {
          plVar16 = plVar9;
        }
        plVar9 = plVar16;
      }
    }
  }
  if (plVar12 != plVar9) {
    lVar8 = *plVar9;
    lVar7 = *plVar12;
    if (*(char *)(lVar8 + 0x44) == '\0') {
      plVar5 = (long *)(*(long *)(lVar8 + 0x50) + 0x30);
    }
    else if (*(long *)(lVar8 + 0x60) == 0) {
      plVar5 = (long *)(*(long *)(lVar8 + 0x30) + 0x88);
    }
    else {
      plVar5 = (long *)(*(long *)(lVar8 + 0x60) + 0x80);
    }
    if (*(char *)(lVar7 + 0x44) == '\0') {
      plVar13 = (long *)(*(long *)(lVar7 + 0x50) + 0x30);
    }
    else if (*(long *)(lVar7 + 0x60) == 0) {
      plVar13 = (long *)(*(long *)(lVar7 + 0x30) + 0x88);
    }
    else {
      plVar13 = (long *)(*(long *)(lVar7 + 0x60) + 0x80);
    }
    if ((int)((ulong)(lVar8 - *plVar5) >> 4) * 0x38e38e39 <
        (int)((ulong)(lVar7 - *plVar13) >> 4) * 0x38e38e39) {
      iVar2 = iVar2 + 1;
      *plVar12 = lVar8;
      *plVar9 = lVar7;
    }
  }
  if (iVar2 != 0) goto LAB_00809cdc;
  uVar4 = FUN_0080aa90(plVar17,plVar12);
  uVar3 = FUN_0080aa90(plVar12 + 1,param_2);
  if ((uVar3 & 1) == 0) goto code_r0x00809cd8;
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    param_2 = plVar12;
  }
  uVar18 = 1;
  if (bVar1) {
    uVar18 = 2;
  }
  param_1 = plVar17;
  if (4 < uVar18) {
    return;
  }
  goto LAB_0080a080;
LAB_0080a10c:
  plVar5 = plVar11;
  lVar15 = *plVar9;
  lVar8 = *plVar5;
  if (*(char *)(lVar8 + 0x44) == '\0') {
    plVar11 = (long *)(*(long *)(lVar8 + 0x50) + 0x30);
  }
  else if (*(long *)(lVar8 + 0x60) == 0) {
    plVar11 = (long *)(*(long *)(lVar8 + 0x30) + 0x88);
  }
  else {
    plVar11 = (long *)(*(long *)(lVar8 + 0x60) + 0x80);
  }
  if (*(char *)(lVar15 + 0x44) == '\0') {
    plVar9 = (long *)(*(long *)(lVar15 + 0x50) + 0x30);
  }
  else if (*(long *)(lVar15 + 0x60) == 0) {
    plVar9 = (long *)(*(long *)(lVar15 + 0x30) + 0x88);
  }
  else {
    plVar9 = (long *)(*(long *)(lVar15 + 0x60) + 0x80);
  }
  if ((int)((ulong)(lVar8 - *plVar11) >> 4) * 0x38e38e39 <
      (int)((ulong)(lVar15 - *plVar9) >> 4) * 0x38e38e39) {
    lVar15 = lVar7;
    do {
      lVar10 = lVar15;
      *(undefined8 *)((long)plVar17 + lVar10 + 0x18) =
           *(undefined8 *)((long)plVar17 + lVar10 + 0x10);
      if (lVar10 == -0x10) {
        plVar11 = plVar17;
        goto LAB_0080a248;
      }
      lVar14 = *(long *)((long)plVar17 + lVar10 + 8);
      if (*(char *)(lVar8 + 0x44) == '\0') {
        plVar11 = (long *)(*(long *)(lVar8 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar8 + 0x60) == 0) {
        plVar11 = (long *)(*(long *)(lVar8 + 0x30) + 0x88);
      }
      else {
        plVar11 = (long *)(*(long *)(lVar8 + 0x60) + 0x80);
      }
      if (*(char *)(lVar14 + 0x44) == '\0') {
        plVar9 = (long *)(*(long *)(lVar14 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar14 + 0x60) == 0) {
        plVar9 = (long *)(*(long *)(lVar14 + 0x30) + 0x88);
      }
      else {
        plVar9 = (long *)(*(long *)(lVar14 + 0x60) + 0x80);
      }
      lVar15 = lVar10 + -8;
    } while ((int)((ulong)(lVar8 - *plVar11) >> 4) * 0x38e38e39 <
             (int)((ulong)(lVar14 - *plVar9) >> 4) * 0x38e38e39);
    plVar11 = (long *)((long)plVar17 + lVar10 + 0x10);
LAB_0080a248:
    *plVar11 = lVar8;
  }
  lVar7 = lVar7 + 8;
  plVar11 = plVar5 + 1;
  plVar9 = plVar5;
  if (plVar5 + 1 == param_2) {
    return;
  }
  goto LAB_0080a10c;
LAB_00809cf0:
  lVar8 = *plVar11;
  if (cVar6 == '\0') {
    plVar9 = (long *)(*(long *)(lVar7 + 0x50) + 0x30);
  }
  else if (*(long *)(lVar7 + 0x60) == 0) {
    plVar9 = (long *)(*(long *)(lVar7 + 0x30) + 0x88);
  }
  else {
    plVar9 = (long *)(*(long *)(lVar7 + 0x60) + 0x80);
  }
  plVar5 = plVar17 + 1;
  if (*(char *)(lVar8 + 0x44) == '\0') {
    plVar12 = (long *)(*(long *)(lVar8 + 0x50) + 0x30);
  }
  else if (*(long *)(lVar8 + 0x60) == 0) {
    plVar12 = (long *)(*(long *)(lVar8 + 0x30) + 0x88);
  }
  else {
    plVar12 = (long *)(*(long *)(lVar8 + 0x60) + 0x80);
  }
  if ((int)((ulong)(lVar8 - *plVar12) >> 4) * 0x38e38e39 <=
      (int)((ulong)(lVar7 - *plVar9) >> 4) * 0x38e38e39) {
    if (plVar5 == plVar11) {
      return;
    }
    if (cVar6 == '\0') {
      plVar5 = plVar17 + 2;
      while( true ) {
        lVar15 = plVar5[-1];
        if (*(char *)(lVar15 + 0x44) == '\0') {
          plVar9 = (long *)(*(long *)(lVar15 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar15 + 0x60) == 0) {
          plVar9 = (long *)(*(long *)(lVar15 + 0x30) + 0x88);
        }
        else {
          plVar9 = (long *)(*(long *)(lVar15 + 0x60) + 0x80);
        }
        if ((int)((ulong)(lVar7 - *(long *)(*(long *)(lVar7 + 0x50) + 0x30)) >> 4) * 0x38e38e39 <
            (int)((ulong)(lVar15 - *plVar9) >> 4) * 0x38e38e39) break;
        plVar5 = plVar5 + 1;
        if (param_2 == plVar5) {
          return;
        }
      }
    }
    else {
      plVar5 = plVar17 + 2;
      while( true ) {
        lVar15 = plVar5[-1];
        plVar9 = (long *)(*(long *)(lVar7 + 0x60) + 0x80);
        if (*(long *)(lVar7 + 0x60) == 0) {
          plVar9 = (long *)(*(long *)(lVar7 + 0x30) + 0x88);
        }
        if (*(char *)(lVar15 + 0x44) == '\0') {
          plVar12 = (long *)(*(long *)(lVar15 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar15 + 0x60) == 0) {
          plVar12 = (long *)(*(long *)(lVar15 + 0x30) + 0x88);
        }
        else {
          plVar12 = (long *)(*(long *)(lVar15 + 0x60) + 0x80);
        }
        if ((int)((ulong)(lVar7 - *plVar9) >> 4) * 0x38e38e39 <
            (int)((ulong)(lVar15 - *plVar12) >> 4) * 0x38e38e39) break;
        plVar5 = plVar5 + 1;
        if (param_2 == plVar5) {
          return;
        }
      }
    }
    lVar7 = plVar5[-1];
    plVar5[-1] = lVar8;
    *plVar11 = lVar7;
  }
  if (plVar5 == plVar11) {
    return;
  }
  while( true ) {
    lVar7 = *plVar17;
    if (*(char *)(lVar7 + 0x44) == '\0') {
      param_1 = plVar5 + -1;
      do {
        lVar8 = param_1[1];
        if (*(char *)(lVar8 + 0x44) == '\0') {
          plVar9 = (long *)(*(long *)(lVar8 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar8 + 0x60) == 0) {
          plVar9 = (long *)(*(long *)(lVar8 + 0x30) + 0x88);
        }
        else {
          plVar9 = (long *)(*(long *)(lVar8 + 0x60) + 0x80);
        }
        param_1 = param_1 + 1;
      } while ((int)((ulong)(lVar8 - *plVar9) >> 4) * 0x38e38e39 <=
               (int)((ulong)(lVar7 - *(long *)(*(long *)(lVar7 + 0x50) + 0x30)) >> 4) * 0x38e38e39);
    }
    else {
      param_1 = plVar5 + -1;
      do {
        lVar8 = param_1[1];
        plVar9 = (long *)(*(long *)(lVar7 + 0x60) + 0x80);
        if (*(long *)(lVar7 + 0x60) == 0) {
          plVar9 = (long *)(*(long *)(lVar7 + 0x30) + 0x88);
        }
        if (*(char *)(lVar8 + 0x44) == '\0') {
          plVar5 = (long *)(*(long *)(lVar8 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar8 + 0x60) == 0) {
          plVar5 = (long *)(*(long *)(lVar8 + 0x30) + 0x88);
        }
        else {
          plVar5 = (long *)(*(long *)(lVar8 + 0x60) + 0x80);
        }
        param_1 = param_1 + 1;
      } while ((int)((ulong)(lVar8 - *plVar5) >> 4) * 0x38e38e39 <=
               (int)((ulong)(lVar7 - *plVar9) >> 4) * 0x38e38e39);
    }
    if (*(char *)(lVar7 + 0x44) == '\0') {
      do {
        plVar11 = plVar11 + -1;
        lVar8 = *plVar11;
        if (*(char *)(lVar8 + 0x44) == '\0') {
          plVar9 = (long *)(*(long *)(lVar8 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar8 + 0x60) == 0) {
          plVar9 = (long *)(*(long *)(lVar8 + 0x30) + 0x88);
        }
        else {
          plVar9 = (long *)(*(long *)(lVar8 + 0x60) + 0x80);
        }
      } while ((int)((ulong)(lVar7 - *(long *)(*(long *)(lVar7 + 0x50) + 0x30)) >> 4) * 0x38e38e39 <
               (int)((ulong)(lVar8 - *plVar9) >> 4) * 0x38e38e39);
    }
    else {
      do {
        plVar11 = plVar11 + -1;
        lVar8 = *plVar11;
        plVar9 = (long *)(*(long *)(lVar7 + 0x60) + 0x80);
        if (*(long *)(lVar7 + 0x60) == 0) {
          plVar9 = (long *)(*(long *)(lVar7 + 0x30) + 0x88);
        }
        if (*(char *)(lVar8 + 0x44) == '\0') {
          plVar5 = (long *)(*(long *)(lVar8 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar8 + 0x60) == 0) {
          plVar5 = (long *)(*(long *)(lVar8 + 0x30) + 0x88);
        }
        else {
          plVar5 = (long *)(*(long *)(lVar8 + 0x60) + 0x80);
        }
      } while ((int)((ulong)(lVar7 - *plVar9) >> 4) * 0x38e38e39 <
               (int)((ulong)(lVar8 - *plVar5) >> 4) * 0x38e38e39);
    }
    if (plVar11 <= param_1) break;
    lVar7 = *param_1;
    plVar5 = param_1 + 1;
    *param_1 = *plVar11;
    *plVar11 = lVar7;
  }
  uVar18 = 4;
LAB_0080a080:
  if ((1 << (ulong)uVar18 & 0x15U) == 0) {
    return;
  }
  goto LAB_008097dc;
code_r0x00809cd8:
  param_1 = plVar12 + 1;
  if ((uVar4 & 1) == 0) {
LAB_00809cdc:
    if ((long)param_2 - (long)plVar12 <= (long)plVar12 - (long)plVar17) {
      FUN_00809790(plVar12 + 1,param_2);
      param_2 = plVar12;
      param_1 = plVar17;
      goto LAB_008097dc;
    }
    FUN_00809790(plVar17,plVar12);
    param_1 = plVar12 + 1;
  }
  goto LAB_008097f8;
}


