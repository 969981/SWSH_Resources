/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007eb750; name: FUN_007eb750
 */


undefined4 FUN_007eb750(long param_1,byte *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  void *__dest;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  void *__src;
  ulong uVar10;
  long *plVar11;
  size_t __n;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x28;
  float fVar15;
  
  pbVar5 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar5 = param_2 + 1;
  }
  bVar4 = *pbVar5;
  if (bVar4 == 0) {
    uVar13 = 0;
    uVar14 = *(ulong *)(param_1 + 0xf8);
  }
  else {
    uVar13 = 0;
    pbVar6 = pbVar5;
    do {
      pbVar6 = pbVar6 + 1;
      uVar13 = uVar13 * 5 + (ulong)bVar4;
      bVar4 = *pbVar6;
    } while (bVar4 != 0);
    uVar14 = *(ulong *)(param_1 + 0xf8);
  }
  if (uVar14 != 0) {
    uVar10 = uVar14 - 1;
    if ((uVar10 & uVar14) == 0) {
      unaff_x28 = uVar10 & uVar13;
      plVar12 = *(long **)(*(long *)(param_1 + 0xf0) + unaff_x28 * 8);
    }
    else {
      unaff_x28 = uVar13;
      if (uVar14 <= uVar13) {
        uVar8 = 0;
        if (uVar14 != 0) {
          uVar8 = uVar13 / uVar14;
        }
        unaff_x28 = uVar13 - uVar8 * uVar14;
      }
      plVar12 = *(long **)(*(long *)(param_1 + 0xf0) + unaff_x28 * 8);
    }
    if (plVar12 != (long *)0x0) {
      if ((uVar10 & uVar14) == 0) {
        while ((plVar12 = (long *)*plVar12, plVar12 != (long *)0x0 &&
               (plVar12[1] == uVar13 || (plVar12[1] & uVar10) == unaff_x28))) {
          iVar3 = strcmp((char *)plVar12[2],(char *)pbVar5);
          if (iVar3 == 0) {
            return 0;
          }
        }
      }
      else {
        while (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0) {
          uVar10 = plVar12[1];
          if (uVar10 != uVar13) {
            if (uVar14 <= uVar10) {
              uVar8 = 0;
              if (uVar14 != 0) {
                uVar8 = uVar10 / uVar14;
              }
              uVar10 = uVar10 - uVar8 * uVar14;
            }
            if (uVar10 != unaff_x28) break;
          }
          iVar3 = strcmp((char *)plVar12[2],(char *)pbVar5);
          if (iVar3 == 0) {
            return 0;
          }
        }
      }
    }
  }
  plVar11 = (long *)(param_1 + 0xf0);
  plVar12 = operator_new(0x28);
  plVar12[2] = (long)pbVar5;
  plVar12[3] = param_3;
  plVar12[4] = param_4;
  *plVar12 = 0;
  plVar12[1] = uVar13;
  fVar15 = (float)(*(long *)(param_1 + 0x108) + 1);
  if ((uVar14 == 0) || (*(float *)(param_1 + 0x110) * (float)uVar14 < fVar15)) {
    if (uVar14 < 3) {
      uVar10 = 1;
    }
    else {
      uVar10 = (ulong)((uVar14 - 1 & uVar14) != 0);
    }
    uVar10 = uVar10 | uVar14 << 1;
    uVar8 = (ulong)(fVar15 / *(float *)(param_1 + 0x110));
    if (uVar8 <= uVar10) {
      uVar8 = uVar10;
    }
    if (uVar8 - 1 == 0) {
      uVar8 = 2;
      bVar2 = uVar14 < 3;
      if (1 < uVar14) goto LAB_007eb988;
LAB_007eb970:
      FUN_007f8890(plVar11,uVar8);
      uVar14 = *(ulong *)(param_1 + 0xf8);
      uVar8 = uVar14 - 1;
      uVar10 = uVar8 & uVar14;
    }
    else {
      if ((uVar8 - 1 & uVar8) != 0) {
        uVar8 = std::__next_prime(uVar8);
        uVar14 = *(ulong *)(param_1 + 0xf8);
      }
      bVar2 = uVar14 <= uVar8;
      if (uVar14 < uVar8) goto LAB_007eb970;
LAB_007eb988:
      if (!bVar2) {
        uVar10 = (ulong)((float)*(ulong *)(param_1 + 0x108) / *(float *)(param_1 + 0x110));
        if (uVar14 < 3 || (uVar14 - 1 & uVar14) != 0) {
          uVar10 = std::__next_prime(uVar10);
          if (uVar10 <= uVar8) {
            uVar10 = uVar8;
          }
        }
        else {
          if (1 < uVar10) {
            uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
          }
          if (uVar10 <= uVar8) {
            uVar10 = uVar8;
          }
        }
        uVar8 = uVar10;
        if (uVar8 < uVar14) goto LAB_007eb970;
      }
      uVar14 = *(ulong *)(param_1 + 0xf8);
      uVar8 = uVar14 - 1;
      uVar10 = uVar8 & uVar14;
    }
    if (uVar10 == 0) {
      lVar9 = *plVar11;
      plVar7 = *(long **)(lVar9 + (uVar8 & uVar13) * 8);
      uVar13 = uVar8 & uVar13;
      goto joined_r0x007eba84;
    }
    if (uVar14 <= uVar13) {
      uVar10 = 0;
      if (uVar14 != 0) {
        uVar10 = uVar13 / uVar14;
      }
      uVar13 = uVar13 - uVar10 * uVar14;
      lVar9 = *plVar11;
      plVar7 = *(long **)(lVar9 + uVar13 * 8);
      goto joined_r0x007eba84;
    }
    lVar9 = *plVar11;
    plVar7 = *(long **)(lVar9 + uVar13 * 8);
    if (plVar7 != (long *)0x0) goto LAB_007eb8f0;
LAB_007eba30:
    *plVar12 = *(long *)(param_1 + 0x100);
    *(long **)(param_1 + 0x100) = plVar12;
    *(long *)(lVar9 + uVar13 * 8) = param_1 + 0x100;
    if (*plVar12 != 0) {
      uVar13 = *(ulong *)(*plVar12 + 8);
      if ((uVar14 - 1 & uVar14) == 0) {
        uVar13 = uVar13 & uVar14 - 1;
      }
      else if (uVar14 <= uVar13) {
        uVar10 = 0;
        if (uVar14 != 0) {
          uVar10 = uVar13 / uVar14;
        }
        uVar13 = uVar13 - uVar10 * uVar14;
      }
      plVar7 = (long *)(*plVar11 + uVar13 * 8);
      goto LAB_007eba98;
    }
  }
  else {
    lVar9 = *plVar11;
    plVar7 = *(long **)(lVar9 + unaff_x28 * 8);
    uVar13 = unaff_x28;
joined_r0x007eba84:
    if (plVar7 == (long *)0x0) goto LAB_007eba30;
LAB_007eb8f0:
    *plVar12 = *plVar7;
LAB_007eba98:
    *plVar7 = (long)plVar12;
  }
  *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + 1;
  pbVar5 = param_2 + 1;
  if ((*param_2 & 1) != 0) {
    pbVar5 = *(byte **)(param_2 + 0x10);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x178);
  if (puVar1 < *(undefined8 **)(param_1 + 0x180)) {
    *puVar1 = pbVar5;
    *(long *)(param_1 + 0x178) = *(long *)(param_1 + 0x178) + 8;
    return 1;
  }
  __src = *(void **)(param_1 + 0x170);
  __n = (long)puVar1 - (long)__src;
  uVar13 = ((long)__n >> 3) + 1;
  if (uVar13 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = (long)*(undefined8 **)(param_1 + 0x180) - (long)__src;
  if ((ulong)(lVar9 >> 3) < 0xfffffffffffffff) {
    uVar14 = lVar9 >> 2;
    if (uVar13 <= uVar14) {
      uVar13 = uVar14;
    }
    if (uVar13 == 0) {
      __dest = (void *)0x0;
      goto LAB_007ebb34;
    }
    if (uVar13 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    uVar13 = 0x1fffffffffffffff;
  }
  __dest = operator_new(uVar13 << 3);
LAB_007ebb34:
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar1 = pbVar5;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)(param_1 + 0x170) = __dest;
  *(undefined8 **)(param_1 + 0x178) = puVar1 + 1;
  *(void **)(param_1 + 0x180) = (void *)((long)__dest + uVar13 * 8);
  if (__src != (void *)0x0) {
    operator_delete(__src);
  }
  return 1;
}


