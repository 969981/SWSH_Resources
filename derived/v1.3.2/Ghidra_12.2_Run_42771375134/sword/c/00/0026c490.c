/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0026c490; name: FUN_0026c490
 */


void FUN_0026c490(long param_1,undefined8 *param_2,uint param_3)

{
  void *pvVar1;
  void *__dest;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long *plVar24;
  float *pfVar25;
  uint uVar26;
  uint *puVar27;
  int iVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined8 uVar46;
  float local_80;
  float fStack_7c;
  
  fVar34 = (float)param_2[1];
  fVar35 = (float)((ulong)param_2[1] >> 0x20);
  fVar32 = (float)*param_2;
  fVar33 = (float)((ulong)*param_2 >> 0x20);
  auVar39._0_4_ = fVar32 * *(float *)(param_1 + 0x940);
  auVar39._4_4_ = fVar33 * *(float *)(param_1 + 0x944);
  auVar39._8_4_ = fVar34 * *(float *)(param_1 + 0x948);
  auVar39._12_4_ = fVar35 * *(float *)(param_1 + 0x94c);
  auVar40 = NEON_ext(auVar39,auVar39,8,1);
  fVar30 = auVar40._0_4_ + auVar40._4_4_;
  auVar41._0_4_ = fVar32 * *(float *)(param_1 + 0x950);
  auVar41._4_4_ = fVar33 * *(float *)(param_1 + 0x954);
  auVar41._8_4_ = fVar34 * *(float *)(param_1 + 0x958);
  auVar41._12_4_ = fVar35 * *(float *)(param_1 + 0x95c);
  auVar40 = NEON_ext(auVar41,auVar41,8,1);
  fVar31 = auVar40._0_4_ + auVar40._4_4_;
  fVar32 = fVar32 * *(float *)(param_1 + 0x960);
  fVar33 = fVar33 * *(float *)(param_1 + 0x964);
  fVar34 = fVar34 * *(float *)(param_1 + 0x968);
  fVar35 = fVar35 * *(float *)(param_1 + 0x96c);
  auVar40._4_4_ = fVar33;
  auVar40._0_4_ = fVar32;
  auVar40._8_4_ = fVar34;
  auVar40._12_4_ = fVar35;
  auVar45._4_4_ = fVar33;
  auVar45._0_4_ = fVar32;
  auVar45._8_4_ = fVar34;
  auVar45._12_4_ = fVar35;
  auVar40 = NEON_ext(auVar40,auVar45,8,1);
  fVar32 = fVar32 + fVar33 + auVar40._0_4_ + auVar40._4_4_;
  uVar16 = *(uint *)(param_1 + 0x988);
  uVar13 = NEON_ext(CONCAT44(auVar39._0_4_ + auVar39._4_4_ + fVar30,
                             auVar39._0_4_ + auVar39._4_4_ + fVar30),
                    CONCAT44(auVar41._0_4_ + auVar41._4_4_ + fVar31,
                             auVar41._0_4_ + auVar41._4_4_ + fVar31),4,1);
  if (5 < uVar16 - param_3) {
    FUN_00292310(*(long *)(param_1 + 0x980) + (ulong)param_3 * 0x40);
    uVar16 = param_3 + 5;
    *(uint *)(param_1 + 0x988) = uVar16;
  }
  uVar17 = (ulong)uVar16;
  if (param_3 < uVar16) {
    uVar20 = (ulong)param_3;
    do {
      uVar22 = uVar20 + 1;
      if (uVar22 < uVar17) {
        uVar29 = uVar22 & 0xffffffff;
        do {
          iVar28 = (int)uVar29;
          lVar19 = *(long *)(param_1 + 0x980);
          pvVar1 = (void *)(lVar19 + uVar29 * 0x40);
          lVar21 = lVar19 + uVar20 * 0x40;
          fVar30 = (float)*(undefined8 *)((long)pvVar1 + 0x10) - *(float *)(lVar21 + 0x10);
          fVar31 = (float)((ulong)*(undefined8 *)((long)pvVar1 + 0x10) >> 0x20) -
                   *(float *)(lVar21 + 0x14);
          fVar33 = (float)*(undefined8 *)((long)pvVar1 + 0x18) - *(float *)(lVar21 + 0x18);
          fVar34 = (float)((ulong)*(undefined8 *)((long)pvVar1 + 0x18) >> 0x20) -
                   *(float *)(lVar21 + 0x1c);
          fVar30 = fVar30 * fVar30;
          fVar31 = fVar31 * fVar31;
          fVar33 = fVar33 * fVar33;
          fVar34 = fVar34 * fVar34;
          auVar3._4_4_ = fVar31;
          auVar3._0_4_ = fVar30;
          auVar3._8_4_ = fVar33;
          auVar3._12_4_ = fVar34;
          auVar4._4_4_ = fVar31;
          auVar4._0_4_ = fVar30;
          auVar4._8_4_ = fVar33;
          auVar4._12_4_ = fVar34;
          auVar40 = NEON_ext(auVar3,auVar4,8,1);
          if (fVar30 + fVar31 + auVar40._0_4_ + auVar40._4_4_ <
              (float)*(undefined8 *)(param_1 + 0x938)) {
            memcpy(pvVar1,(void *)(lVar19 + (ulong)((int)uVar17 - 1) * 0x40),0x34);
            uVar16 = *(int *)(param_1 + 0x988) - 1;
            uVar17 = (ulong)uVar16;
            iVar28 = iVar28 + -1;
            *(uint *)(param_1 + 0x988) = uVar16;
          }
          uVar29 = (ulong)(iVar28 + 1U);
        } while (iVar28 + 1U < (uint)uVar17);
      }
      uVar20 = uVar22;
    } while (uVar22 < uVar17);
  }
  uVar16 = (uint)uVar17;
  local_80 = (float)uVar13;
  fStack_7c = (float)((ulong)uVar13 >> 0x20);
  if (param_3 < uVar16) {
    uVar46 = 0x7f7fffff7f7fffff;
    uVar20 = (ulong)param_3;
    lVar21 = uVar20 << 6;
    do {
      lVar19 = *(long *)(param_1 + 0x980) + lVar21;
      uVar36 = (undefined4)((ulong)*(undefined8 *)(lVar19 + 0x28) >> 0x20);
      *(float *)(lVar19 + 0x28) = fVar32;
      *(undefined4 *)(lVar19 + 0x2c) = uVar36;
      *(float *)(lVar19 + 0x20) = local_80;
      *(float *)(lVar19 + 0x24) = fStack_7c;
      lVar19 = *(long *)(param_1 + 0x980) + lVar21;
      fVar33 = (float)*(undefined8 *)(lVar19 + 0x10) - *(float *)(param_1 + 0x970);
      fVar34 = (float)((ulong)*(undefined8 *)(lVar19 + 0x10) >> 0x20) - *(float *)(param_1 + 0x974);
      fVar35 = (float)*(undefined8 *)(lVar19 + 0x18) - *(float *)(param_1 + 0x978);
      fVar37 = (float)((ulong)*(undefined8 *)(lVar19 + 0x18) >> 0x20) - *(float *)(param_1 + 0x97c);
      auVar42._0_4_ = *(float *)(param_1 + 0x940) * fVar33;
      auVar42._4_4_ = *(float *)(param_1 + 0x944) * fVar34;
      auVar42._8_4_ = *(float *)(param_1 + 0x948) * fVar35;
      auVar42._12_4_ = *(float *)(param_1 + 0x94c) * fVar37;
      auVar40 = NEON_ext(auVar42,auVar42,8,1);
      auVar44._0_4_ = fVar33 * *(float *)(param_1 + 0x950);
      auVar44._4_4_ = fVar34 * *(float *)(param_1 + 0x954);
      auVar44._8_4_ = fVar35 * *(float *)(param_1 + 0x958);
      auVar44._12_4_ = fVar37 * *(float *)(param_1 + 0x95c);
      auVar45 = NEON_ext(auVar44,auVar44,8,1);
      fVar30 = auVar40._0_4_ + auVar40._4_4_;
      fVar31 = auVar45._0_4_ + auVar45._4_4_;
      fVar33 = fVar33 * *(float *)(param_1 + 0x960);
      fVar34 = fVar34 * *(float *)(param_1 + 0x964);
      fVar35 = fVar35 * *(float *)(param_1 + 0x968);
      fVar37 = fVar37 * *(float *)(param_1 + 0x96c);
      auVar5._4_4_ = fVar34;
      auVar5._0_4_ = fVar33;
      auVar5._8_4_ = fVar35;
      auVar5._12_4_ = fVar37;
      auVar6._4_4_ = fVar34;
      auVar6._0_4_ = fVar33;
      auVar6._8_4_ = fVar35;
      auVar6._12_4_ = fVar37;
      auVar40 = NEON_ext(auVar5,auVar6,8,1);
      uVar46 = NEON_fmin(uVar46,CONCAT44(uVar36,uVar36),4);
      uVar38 = NEON_ext(CONCAT44(auVar42._0_4_ + auVar42._4_4_ + fVar30,
                                 auVar42._0_4_ + auVar42._4_4_ + fVar30),
                        CONCAT44(auVar44._0_4_ + auVar44._4_4_ + fVar31,
                                 auVar44._0_4_ + auVar44._4_4_ + fVar31),4,1);
      *(ulong *)(lVar19 + 0x18) = (ulong)(uint)(fVar33 + fVar34 + auVar40._0_4_ + auVar40._4_4_);
      *(undefined8 *)(lVar19 + 0x10) = uVar38;
      uVar16 = *(uint *)(param_1 + 0x988);
      uVar17 = (ulong)uVar16;
      uVar20 = uVar20 + 1;
      lVar21 = lVar21 + 0x40;
    } while (uVar20 < uVar17);
    uVar18 = *(uint *)(param_1 + 0x98c);
  }
  else {
    uVar46 = 0x7f7fffff7f7fffff;
    uVar18 = *(uint *)(param_1 + 0x98c);
  }
  if (uVar18 != 0) {
    uVar16 = (uint)uVar17;
    puVar23 = (undefined8 *)(param_1 + (ulong)(uVar18 - 1) * 0x40);
    uVar14 = puVar23[1];
    uVar38 = *puVar23;
    local_80 = (float)uVar38 * local_80;
    fStack_7c = (float)((ulong)uVar38 >> 0x20) * fStack_7c;
    fVar30 = (float)uVar14 * fVar32;
    fVar31 = (float)((ulong)uVar14 >> 0x20) * 0.0;
    auVar9._4_4_ = fStack_7c;
    auVar9._0_4_ = local_80;
    auVar9._8_4_ = fVar30;
    auVar9._12_4_ = fVar31;
    auVar10._4_4_ = fStack_7c;
    auVar10._0_4_ = local_80;
    auVar10._8_4_ = fVar30;
    auVar10._12_4_ = fVar31;
    auVar40 = NEON_ext(auVar9,auVar10,8,1);
    if ((float)*(undefined8 *)(param_1 + 0x930) <
        local_80 + fStack_7c + auVar40._0_4_ + auVar40._4_4_) {
      lVar21 = param_1 + (ulong)(uVar18 - 1) * 0x40;
      puVar27 = (uint *)(lVar21 + 0x34);
      uVar22 = (ulong)*puVar27;
      uVar20 = (ulong)*(uint *)(lVar21 + 0x30);
      if (*(uint *)(lVar21 + 0x30) < *puVar27) {
        do {
          uVar16 = param_3;
          if (param_3 < (uint)uVar17) {
            do {
              iVar28 = (int)uVar17;
              lVar19 = *(long *)(param_1 + 0x980);
              pvVar1 = (void *)(lVar19 + (ulong)uVar16 * 0x40);
              __dest = (void *)(lVar19 + uVar20 * 0x40);
              fVar32 = (float)*(undefined8 *)((long)pvVar1 + 0x10) - *(float *)((long)__dest + 0x10)
              ;
              fVar30 = (float)((ulong)*(undefined8 *)((long)pvVar1 + 0x10) >> 0x20) -
                       *(float *)((long)__dest + 0x14);
              fVar31 = (float)*(undefined8 *)((long)pvVar1 + 0x18) - *(float *)((long)__dest + 0x18)
              ;
              fVar33 = (float)((ulong)*(undefined8 *)((long)pvVar1 + 0x18) >> 0x20) -
                       *(float *)((long)__dest + 0x1c);
              fVar32 = fVar32 * fVar32;
              fVar30 = fVar30 * fVar30;
              fVar31 = fVar31 * fVar31;
              fVar33 = fVar33 * fVar33;
              auVar11._4_4_ = fVar30;
              auVar11._0_4_ = fVar32;
              auVar11._8_4_ = fVar31;
              auVar11._12_4_ = fVar33;
              auVar12._4_4_ = fVar30;
              auVar12._0_4_ = fVar32;
              auVar12._8_4_ = fVar31;
              auVar12._12_4_ = fVar33;
              auVar40 = NEON_ext(auVar11,auVar12,8,1);
              if (fVar32 + fVar30 + auVar40._0_4_ + auVar40._4_4_ <
                  (float)*(undefined8 *)(param_1 + 0x938)) {
                if ((float)((ulong)*(undefined8 *)((long)pvVar1 + 0x28) >> 0x20) <
                    (float)((ulong)*(undefined8 *)((long)__dest + 0x28) >> 0x20)) {
                  memcpy(__dest,pvVar1,0x34);
                  lVar19 = *(long *)(param_1 + 0x980);
                  iVar28 = *(int *)(param_1 + 0x988);
                }
                memcpy((void *)(lVar19 + (ulong)uVar16 * 0x40),
                       (void *)(lVar19 + (ulong)(iVar28 - 1) * 0x40),0x34);
                uVar18 = *(int *)(param_1 + 0x988) - 1;
                uVar17 = (ulong)uVar18;
                uVar16 = uVar16 - 1;
                *(uint *)(param_1 + 0x988) = uVar18;
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < (uint)uVar17);
            uVar22 = (ulong)*puVar27;
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 < uVar22);
      }
      uVar16 = (uint)uVar17;
      *puVar27 = uVar16;
      uVar13 = NEON_fmin(*(undefined8 *)(lVar21 + 0x28),uVar46,4);
      *(undefined8 *)(lVar21 + 0x28) = uVar13;
      goto joined_r0x0026ca38;
    }
  }
  puVar23 = (undefined8 *)(param_1 + (ulong)uVar18 * 0x40);
  *(uint *)(puVar23 + 6) = param_3;
  *(uint *)((long)puVar23 + 0x34) = uVar16;
  puVar23[5] = uVar46;
  *(uint *)(param_1 + 0x98c) = uVar18 + 1;
  puVar23[1] = (ulong)(uint)fVar32;
  *puVar23 = uVar13;
  uVar16 = *(uint *)(param_1 + 0x988);
  uVar17 = (ulong)uVar16;
joined_r0x0026ca38:
  if (0xf < uVar16) {
    uVar16 = *(uint *)(param_1 + 0x98c);
    uVar20 = (ulong)uVar16;
    if (1 < uVar16) {
      iVar28 = -1;
      uVar22 = 1;
      do {
        lVar21 = param_1 + uVar22 * 8;
        lVar19 = *(long *)(lVar21 + 0x7f8);
        if ((float)*(undefined8 *)(*(long *)(lVar21 + 0x800) + 0x28) <
            (float)*(undefined8 *)(lVar19 + 0x28)) {
          *(long *)(lVar21 + 0x7f8) = *(long *)(lVar21 + 0x800);
          *(long *)(lVar21 + 0x800) = lVar19;
          if (-1 < (int)uVar22 + -2) {
            uVar29 = (long)iVar28 + 1;
            plVar24 = (long *)(param_1 + 0x800 + (long)iVar28 * 8);
            do {
              lVar21 = param_1 + (uVar29 & 0xffffffff) * 8;
              lVar19 = *(long *)(lVar21 + 0x800);
              if ((float)*(undefined8 *)(*plVar24 + 0x28) <= (float)*(undefined8 *)(lVar19 + 0x28))
              break;
              uVar29 = uVar29 - 1;
              *(long *)(lVar21 + 0x800) = *plVar24;
              *plVar24 = lVar19;
              plVar24 = plVar24 + -1;
            } while (0 < (long)uVar29);
          }
        }
        uVar22 = uVar22 + 1;
        iVar28 = iVar28 + 1;
      } while (uVar22 != uVar20);
    }
    if (uVar16 == 0) {
      uVar36 = 0;
    }
    else {
      uVar17 = 0;
      uVar22 = 0xffffffff;
      do {
        puVar23 = *(undefined8 **)(param_1 + uVar17 * 8 + 0x800);
        puVar23[2] = 0;
        iVar28 = *(int *)((long)puVar23 + 0x34) - *(int *)(puVar23 + 6);
        puVar23[3] = puVar23;
        puVar23[4] = puVar23;
        *(int *)(puVar23 + 7) = iVar28;
        if (uVar17 != 0) {
          lVar21 = 0;
          do {
            lVar19 = *(long *)(param_1 + 0x800 + uVar22 * 8 + lVar21 * 8);
            pfVar25 = *(float **)(lVar19 + 0x20);
            auVar43._0_4_ = (float)*puVar23 * *pfVar25;
            auVar43._4_4_ = (float)((ulong)*puVar23 >> 0x20) * pfVar25[1];
            auVar43._8_4_ = (float)puVar23[1] * pfVar25[2];
            auVar43._12_4_ = (float)((ulong)puVar23[1] >> 0x20) * pfVar25[3];
            auVar40 = NEON_ext(auVar43,auVar43,8,1);
            if ((float)*(undefined8 *)(param_1 + 0x930) <=
                auVar43._0_4_ + auVar43._4_4_ + auVar40._0_4_ + auVar40._4_4_) {
              *(undefined8 **)(lVar19 + 0x10) = puVar23;
              *(undefined8 **)(pfVar25 + 6) = puVar23;
              puVar23[4] = pfVar25;
              *(int *)(*(long *)(lVar19 + 0x20) + 0x38) =
                   *(int *)(*(long *)(lVar19 + 0x20) + 0x38) + iVar28;
              break;
            }
            lVar21 = lVar21 + -1;
          } while ((int)uVar17 + (int)lVar21 != 0);
        }
        uVar22 = (ulong)((int)uVar22 + 1);
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar20);
      lVar21 = *(long *)(param_1 + 0x980);
      uVar17 = 0;
      do {
        lVar19 = *(long *)(param_1 + uVar17 * 8 + 0x800);
        if (lVar19 != 0 && *(long *)(lVar19 + 0x20) == lVar19) {
          for (lVar15 = *(long *)(lVar19 + 0x10); lVar15 != 0; lVar15 = *(long *)(lVar15 + 0x10)) {
            uVar22 = (ulong)*(uint *)(lVar19 + 0x30);
            uVar16 = *(uint *)(lVar19 + 0x34);
            if (*(uint *)(lVar19 + 0x30) < uVar16) {
              uVar18 = *(uint *)(lVar15 + 0x34);
              do {
                uVar26 = *(uint *)(lVar15 + 0x30);
                if (uVar26 < uVar18) {
                  lVar2 = lVar21 + uVar22 * 0x40;
                  do {
                    pvVar1 = (void *)(lVar21 + (ulong)uVar26 * 0x40);
                    fVar32 = (float)*(undefined8 *)((long)pvVar1 + 0x10) - *(float *)(lVar2 + 0x10);
                    fVar30 = (float)((ulong)*(undefined8 *)((long)pvVar1 + 0x10) >> 0x20) -
                             *(float *)(lVar2 + 0x14);
                    fVar31 = (float)*(undefined8 *)((long)pvVar1 + 0x18) - *(float *)(lVar2 + 0x18);
                    fVar33 = (float)((ulong)*(undefined8 *)((long)pvVar1 + 0x18) >> 0x20) -
                             *(float *)(lVar2 + 0x1c);
                    fVar32 = fVar32 * fVar32;
                    fVar30 = fVar30 * fVar30;
                    fVar31 = fVar31 * fVar31;
                    fVar33 = fVar33 * fVar33;
                    auVar7._4_4_ = fVar30;
                    auVar7._0_4_ = fVar32;
                    auVar7._8_4_ = fVar31;
                    auVar7._12_4_ = fVar33;
                    auVar8._4_4_ = fVar30;
                    auVar8._0_4_ = fVar32;
                    auVar8._8_4_ = fVar31;
                    auVar8._12_4_ = fVar33;
                    auVar40 = NEON_ext(auVar7,auVar8,8,1);
                    if (fVar32 + fVar30 + auVar40._0_4_ + auVar40._4_4_ <
                        (float)*(undefined8 *)(param_1 + 0x938)) {
                      memcpy(pvVar1,(void *)(lVar21 + (ulong)(uVar18 - 1) * 0x40),0x34);
                      uVar18 = *(int *)(lVar15 + 0x34) - 1;
                      uVar26 = uVar26 - 1;
                      *(uint *)(lVar15 + 0x34) = uVar18;
                    }
                    uVar26 = uVar26 + 1;
                  } while (uVar26 < uVar18);
                  uVar16 = *(uint *)(lVar19 + 0x34);
                }
                uVar22 = uVar22 + 1;
              } while (uVar22 < uVar16);
            }
            lVar19 = lVar15;
          }
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar20);
      uVar17 = (ulong)*(uint *)(param_1 + 0x988);
      uVar36 = *(undefined4 *)(param_1 + 0x98c);
    }
    FUN_00292960(*(undefined8 *)(param_1 + 0x920),*(undefined8 *)(param_1 + 0x980),uVar17,
                 param_1 + 0x800,uVar36,param_1 + 0x938,(undefined8 *)(param_1 + 0x930),6);
    *(long *)(param_1 + 0x808) = param_1 + 0x40;
    *(long *)(param_1 + 0x810) = param_1 + 0x80;
    *(long *)(param_1 + 0x818) = param_1 + 0xc0;
    *(long *)(param_1 + 0x820) = param_1 + 0x100;
    *(long *)(param_1 + 0x828) = param_1 + 0x140;
    *(long *)(param_1 + 0x830) = param_1 + 0x180;
    *(long *)(param_1 + 0x838) = param_1 + 0x1c0;
    *(long *)(param_1 + 0x840) = param_1 + 0x200;
    *(long *)(param_1 + 0x848) = param_1 + 0x240;
    *(long *)(param_1 + 0x850) = param_1 + 0x280;
    *(long *)(param_1 + 0x858) = param_1 + 0x2c0;
    *(long *)(param_1 + 0x860) = param_1 + 0x300;
    *(long *)(param_1 + 0x868) = param_1 + 0x340;
    *(long *)(param_1 + 0x870) = param_1 + 0x380;
    *(long *)(param_1 + 0x878) = param_1 + 0x3c0;
    *(long *)(param_1 + 0x880) = param_1 + 0x400;
    *(long *)(param_1 + 0x888) = param_1 + 0x440;
    *(long *)(param_1 + 0x890) = param_1 + 0x480;
    *(long *)(param_1 + 0x898) = param_1 + 0x4c0;
    *(long *)(param_1 + 0x8a0) = param_1 + 0x500;
    *(long *)(param_1 + 0x8a8) = param_1 + 0x540;
    *(long *)(param_1 + 0x8b0) = param_1 + 0x580;
    *(long *)(param_1 + 0x8b8) = param_1 + 0x5c0;
    *(long *)(param_1 + 0x8c0) = param_1 + 0x600;
    *(long *)(param_1 + 0x8c8) = param_1 + 0x640;
    *(long *)(param_1 + 0x8d0) = param_1 + 0x680;
    *(long *)(param_1 + 0x8d8) = param_1 + 0x6c0;
    *(long *)(param_1 + 0x8e0) = param_1 + 0x700;
    *(long *)(param_1 + 0x8e8) = param_1 + 0x740;
    *(long *)(param_1 + 0x8f0) = param_1 + 0x780;
    *(undefined8 *)(param_1 + 0x988) = 0;
    *(long *)(param_1 + 0x800) = param_1;
    *(long *)(param_1 + 0x8f8) = param_1 + 0x7c0;
  }
  return;
}


