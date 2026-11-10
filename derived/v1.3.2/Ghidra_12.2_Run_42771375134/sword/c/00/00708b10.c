/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00708b10; name: FUN_00708b10
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00708b10(long param_1)

{
  undefined8 *****pppppuVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  undefined8 ***pppuVar9;
  undefined8 *****pppppuVar10;
  undefined8 *puVar11;
  undefined8 ****ppppuVar12;
  long *plVar13;
  long *plVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  long *plVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 ******local_198 [2];
  long local_188;
  long lStack_180;
  long local_178;
  long lStack_170;
  long local_168;
  long lStack_160;
  long local_158;
  long lStack_150;
  long local_148;
  long lStack_140;
  long local_138;
  long lStack_130;
  long local_128;
  long lStack_120;
  long local_118;
  long lStack_110;
  long local_108;
  long lStack_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar7 = *(long *)(param_1 + 0x218) - *(long *)(param_1 + 0x210);
  local_198[0] = local_198 + lVar7 * -4 + -1;
  lVar7 = lVar7 * 2;
  local_198[1] = local_198[0];
  local_188 = (long)local_198[0] + lVar7;
  lStack_180 = local_188;
  local_178 = local_188 + lVar7;
  lStack_170 = local_178;
  local_168 = local_178 + lVar7;
  lStack_160 = local_168;
  local_158 = local_168 + lVar7;
  lStack_150 = local_158;
  local_148 = local_158 + lVar7;
  lStack_140 = local_148;
  local_138 = local_148 + lVar7;
  lStack_130 = local_138;
  local_128 = local_138 + lVar7;
  lStack_120 = local_128;
  local_118 = local_128 + lVar7;
  lStack_110 = local_118;
  local_108 = local_118 + lVar7;
  lStack_100 = local_108;
  local_f8 = local_108 + lVar7;
  lStack_f0 = local_f8;
  local_e8 = local_f8 + lVar7;
  lStack_e0 = local_e8;
  local_d8 = local_e8 + lVar7;
  lStack_d0 = local_d8;
  local_c8 = local_d8 + lVar7;
  lStack_c0 = local_c8;
  local_b8 = local_c8 + lVar7;
  lStack_b0 = local_b8;
  local_a8 = local_b8 + lVar7;
  lStack_a0 = local_b8 + lVar7;
  plVar13 = *(long **)(param_1 + 0x210);
  plVar14 = *(long **)(param_1 + 0x218);
  if (plVar13 == plVar14) {
    ppppuVar16 = (undefined8 ****)0x0;
  }
  else {
    lVar7 = *plVar13;
    if (lVar7 == 0) {
      ppppuVar16 = (undefined8 ****)0x0;
    }
    else {
      ppppuVar15 = (undefined8 ****)0x0;
      do {
        puVar11 = *(undefined8 **)(lVar7 + 0x60);
        ppppuVar16 = ppppuVar15;
        if (puVar11 != (undefined8 *)0x0) {
          plVar4 = (long *)(**(code **)*puVar11)(puVar11);
          lVar7 = FUN_00702ff0();
          for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
            if (plVar4 == (long *)lVar7) {
              ppppuVar12 = (undefined8 ****)(puVar11 + -10);
              uVar5 = (*(code *)(*ppppuVar12)[0xb])(ppppuVar12);
              if ((uVar5 & 1) != 0) {
                pppppuVar10 = local_198[(long)*(int *)(puVar11 + 0xb) * 2 + 1];
                local_198[(long)*(int *)(puVar11 + 0xb) * 2 + 1] =
                     (undefined8 ******)(pppppuVar10 + 2);
                ppppuVar16 = (undefined8 ****)((long)ppppuVar15 + 1);
                *pppppuVar10 = ppppuVar12;
                pppppuVar10[1] = ppppuVar15;
                if (*(int *)(param_1 + 600) != 0) {
                  (*(code *)(*ppppuVar12)[9])(ppppuVar12);
                }
              }
              break;
            }
          }
        }
        if ((*plVar13 == 0) || (*(int *)(*plVar13 + 0x54) == 0)) break;
        plVar13 = plVar13 + 1;
        plVar4 = plVar14;
        if (plVar13 == plVar14) goto LAB_00708ddc;
        lVar7 = *plVar13;
        ppppuVar15 = ppppuVar16;
      } while (lVar7 != 0);
    }
  }
  plVar4 = plVar13;
  plVar17 = plVar13;
  if (plVar13 != plVar14) {
    while( true ) {
      plVar17 = plVar17 + 1;
      plVar4 = plVar13;
      if (plVar17 == plVar14) break;
      while (*plVar17 != 0) {
        puVar11 = *(undefined8 **)(*plVar17 + 0x60);
        if (puVar11 != (undefined8 *)0x0) {
          plVar4 = (long *)(**(code **)*puVar11)(puVar11);
          lVar7 = FUN_00702ff0();
          for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
            if (plVar4 == (long *)lVar7) {
              ppppuVar15 = (undefined8 ****)(puVar11 + -10);
              uVar5 = (*(code *)(*ppppuVar15)[0xb])(ppppuVar15);
              if ((uVar5 & 1) != 0) {
                pppppuVar10 = local_198[(long)*(int *)(puVar11 + 0xb) * 2 + 1];
                local_198[(long)*(int *)(puVar11 + 0xb) * 2 + 1] =
                     (undefined8 ******)(pppppuVar10 + 2);
                ppppuVar12 = (undefined8 ****)((long)ppppuVar16 + 1);
                *pppppuVar10 = ppppuVar15;
                pppppuVar10[1] = ppppuVar16;
                ppppuVar16 = ppppuVar12;
                if (*(int *)(param_1 + 600) != 0) {
                  (*(code *)(*ppppuVar15)[9])(ppppuVar15);
                  lVar7 = *plVar17;
                  goto joined_r0x00708dc8;
                }
              }
              lVar7 = *plVar17;
              goto joined_r0x00708dc8;
            }
          }
        }
        lVar7 = *plVar17;
joined_r0x00708dc8:
        if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
          if (*plVar13 != 0) {
            (**(code **)(*(long *)(*plVar13 + 0x48) + 0x18))();
            *plVar13 = 0;
          }
          lVar7 = *plVar17;
          *plVar17 = 0;
          *plVar13 = lVar7;
          plVar13 = plVar13 + 1;
        }
        plVar17 = plVar17 + 1;
        plVar4 = plVar13;
        if (plVar17 == plVar14) goto LAB_00708ddc;
      }
    }
  }
LAB_00708ddc:
  plVar13 = *(long **)(param_1 + 0x218);
  if (plVar4 != plVar13) {
    if ((long *)((long)plVar4 + ((long)plVar13 - (long)plVar4)) != plVar13) {
      lVar7 = (long)plVar13 - (long)plVar4 >> 3;
      plVar14 = plVar4;
      do {
        if (*plVar14 != 0) {
          (**(code **)(*(long *)(*plVar14 + 0x48) + 0x18))();
          *plVar14 = 0;
        }
        lVar8 = plVar14[lVar7];
        plVar14[lVar7] = 0;
        plVar4 = plVar14 + 1;
        *plVar14 = lVar8;
        plVar14 = plVar4;
      } while (plVar13 + -lVar7 != plVar4);
      plVar13 = *(long **)(param_1 + 0x218);
    }
    if (plVar13 != plVar4) {
      do {
        plVar14 = plVar13 + -1;
        if (*plVar14 != 0) {
          (**(code **)(*(long *)(*plVar14 + 0x48) + 0x18))();
          plVar13[-1] = 0;
        }
        plVar13 = plVar14;
      } while (plVar4 != plVar14);
    }
    *(long **)(param_1 + 0x218) = plVar4;
  }
  if (*(int *)(param_1 + 600) != 0) {
    FUN_0070a630(local_198[0],local_198[1]);
    FUN_0070a630(local_188,lStack_180);
    FUN_0070a630(local_178,lStack_170);
    FUN_0070a630(local_168,lStack_160);
    FUN_0070a630(local_158,lStack_150);
    FUN_0070a630(local_148,lStack_140);
    FUN_0070a630(local_138,lStack_130);
    FUN_0070a630(local_128,lStack_120);
    FUN_0070a630(local_118,lStack_110);
    FUN_0070a630(local_108,lStack_100);
    FUN_0070a630(local_f8,lStack_f0);
    FUN_0070a630(local_e8,lStack_e0);
    FUN_0070a630(local_d8,lStack_d0);
    FUN_0070a630(local_c8,lStack_c0);
    FUN_0070a630(local_b8,lStack_b0);
    FUN_0070a630(local_a8,lStack_a0);
  }
  puVar3 = PTR_DAT_02715500;
  lVar7 = 0;
  bVar18 = false;
  do {
    lVar8 = *(long *)(param_1 + 0x68) + lVar7 * 0x10;
    fVar21 = *(float *)(lVar8 + 0x288);
    if ((fVar21 <= 0.0) || (fVar19 = *(float *)(lVar8 + 0x28c), fVar19 <= 0.0)) {
      if (bVar18) {
        pfVar6 = (float *)FUN_006ff0a0(param_1);
        fVar21 = *pfVar6;
        fVar22 = pfVar6[1];
        fVar19 = pfVar6[2];
        fVar20 = pfVar6[3];
        if (*(char *)(param_1 + 0x208) != '\0') {
          fVar23 = *(float *)(*(long *)PTR_DAT_02710910 + 0x85c4);
          fVar19 = (float)(int)(fVar23 * fVar19);
          fVar20 = (float)(int)(fVar23 * fVar20);
          fVar21 = (float)(int)(fVar23 * fVar21);
          fVar22 = (float)(int)(fVar23 * fVar22);
        }
        lVar8 = *(long *)(*(long *)(param_1 + 0x60) + 0x58);
        iVar2 = *(int *)puVar3;
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        local_90 = 0;
        FUN_0199c170(&local_98);
        local_98 = CONCAT44(fVar22,fVar21);
        local_90 = CONCAT44(fVar20,fVar19);
        FUN_0199dfd0(lVar8 + (long)iVar2 * 0x170,0,1,&local_98);
      }
      bVar18 = false;
    }
    else {
      fVar22 = *(float *)(lVar8 + 0x280);
      fVar20 = *(float *)(lVar8 + 0x284);
      if (*(char *)(param_1 + 0x208) != '\0') {
        fVar23 = *(float *)(*(long *)PTR_DAT_02710910 + 0x85c4);
        fVar21 = (float)(int)(fVar23 * fVar21);
        fVar19 = (float)(int)(fVar23 * fVar19);
        fVar22 = (float)(int)(fVar23 * fVar22);
        fVar20 = (float)(int)(fVar23 * fVar20);
      }
      iVar2 = *(int *)puVar3;
      lVar8 = *(long *)(*(long *)(param_1 + 0x60) + 0x58);
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      local_90 = 0;
      FUN_0199c170(&local_98);
      local_98 = CONCAT44(fVar20,fVar22);
      local_90 = CONCAT44(fVar19,fVar21);
      bVar18 = true;
      FUN_0199dfd0(lVar8 + (long)iVar2 * 0x170,0,1,&local_98);
    }
    pppppuVar1 = local_198[lVar7 * 2 + 1];
    for (pppppuVar10 = local_198[lVar7 * 2]; pppppuVar10 != pppppuVar1;
        pppppuVar10 = pppppuVar10 + 2) {
      pppuVar9 = (*pppppuVar10)[0xc];
      if ((*(char *)(pppuVar9 + 0x21) != '\0') && (*(char *)((long)pppuVar9 + 0x109) != '\0')) {
        FUN_0199dee0(*(long *)(*(long *)(param_1 + 0x60) + 0x58) + (long)*(int *)puVar3 * 0x170,
                     pppuVar9[0xb] + (long)*(int *)puVar3 * 0x2e);
      }
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x10);
  return;
}


