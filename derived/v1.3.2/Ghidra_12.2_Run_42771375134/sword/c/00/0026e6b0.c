/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0026e6b0; name: FUN_0026e6b0
 */


void FUN_0026e6b0(undefined1 param_1 [16],long param_2,undefined8 *param_3,float *param_4,
                 undefined4 param_5)

{
  long lVar1;
  void *__dest;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  float *pfVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  if (*(int *)(param_2 + 0x98c) == 0) {
LAB_0026e784:
    puVar13 = (undefined8 *)(*(long *)(param_2 + 0x980) + (ulong)*(uint *)(param_2 + 0x988) * 0x40);
    *puVar13 = 0;
    puVar13[1] = 0;
    uVar4 = *param_3;
    lVar17 = *(long *)(param_2 + 0x980) + (ulong)*(uint *)(param_2 + 0x988) * 0x40;
    *(undefined8 *)(lVar17 + 0x18) = param_3[1];
    *(undefined8 *)(lVar17 + 0x10) = uVar4;
    fVar20 = *param_4;
    fVar21 = param_4[1];
    lVar17 = *(long *)(param_2 + 0x980) + (ulong)*(uint *)(param_2 + 0x988) * 0x40;
    *(float *)(lVar17 + 0x28) = param_4[2];
    *(int *)(lVar17 + 0x2c) = param_1._4_4_;
    *(float *)(lVar17 + 0x20) = fVar20;
    *(float *)(lVar17 + 0x24) = fVar21;
    uVar11 = *(uint *)(param_2 + 0x988);
    *(uint *)(param_2 + 0x988) = uVar11 + 1;
    *(undefined4 *)(*(long *)(param_2 + 0x980) + (ulong)uVar11 * 0x40 + 0x30) = param_5;
    uVar8 = *(uint *)(param_2 + 0x98c);
    puVar13 = (undefined8 *)(param_2 + (ulong)uVar8 * 0x40);
    *(uint *)(puVar13 + 6) = uVar11;
    *(uint *)((long)puVar13 + 0x34) = uVar11 + 1;
    puVar13[5] = param_1._0_8_;
    uVar5 = *(undefined8 *)(param_4 + 2);
    uVar4 = *(undefined8 *)param_4;
    *(uint *)(param_2 + 0x98c) = uVar8 + 1;
    puVar13[1] = uVar5;
    *puVar13 = uVar4;
  }
  else {
    uVar9 = (ulong)(*(int *)(param_2 + 0x98c) - 1);
    pfVar18 = (float *)(param_2 + uVar9 * 0x40);
    auVar25._0_4_ = *pfVar18 * *param_4;
    auVar25._4_4_ = pfVar18[1] * param_4[1];
    auVar25._8_4_ = pfVar18[2] * param_4[2];
    auVar25._12_4_ = pfVar18[3] * param_4[3];
    auVar24 = NEON_ext(auVar25,auVar25,8,1);
    if (auVar25._0_4_ + auVar25._4_4_ + auVar24._0_4_ + auVar24._4_4_ <=
        (float)*(undefined8 *)(param_2 + 0x930)) goto LAB_0026e784;
    lVar17 = param_2 + uVar9 * 0x40;
    if (param_1._0_4_ < (float)*(undefined8 *)(lVar17 + 0x28)) {
      puVar13 = (undefined8 *)(*(long *)(param_2 + 0x980) + (ulong)*(uint *)(lVar17 + 0x30) * 0x40);
      *puVar13 = 0;
      puVar13[1] = 0;
      uVar4 = *param_3;
      lVar14 = *(long *)(param_2 + 0x980) + (ulong)*(uint *)(lVar17 + 0x30) * 0x40;
      *(undefined8 *)(lVar14 + 0x18) = param_3[1];
      *(undefined8 *)(lVar14 + 0x10) = uVar4;
      fVar20 = *param_4;
      fVar21 = param_4[1];
      lVar14 = *(long *)(param_2 + 0x980) + (ulong)*(uint *)(lVar17 + 0x30) * 0x40;
      *(float *)(lVar14 + 0x28) = param_4[2];
      *(int *)(lVar14 + 0x2c) = param_1._4_4_;
      *(float *)(lVar14 + 0x20) = fVar20;
      *(float *)(lVar14 + 0x24) = fVar21;
      *(undefined4 *)(*(long *)(param_2 + 0x980) + (ulong)*(uint *)(lVar17 + 0x30) * 0x40 + 0x30) =
           param_5;
      *(undefined8 *)(lVar17 + 0x28) = param_1._0_8_;
      uVar11 = *(uint *)(param_2 + 0x988);
      goto joined_r0x0026e800;
    }
  }
  uVar11 = *(uint *)(param_2 + 0x988);
joined_r0x0026e800:
  if (0xf < uVar11) {
    uVar8 = *(uint *)(param_2 + 0x98c);
    uVar9 = (ulong)uVar8;
    if (1 < uVar8) {
      iVar10 = -1;
      uVar12 = 1;
      do {
        lVar17 = param_2 + uVar12 * 8;
        lVar14 = *(long *)(lVar17 + 0x7f8);
        if (*(float *)(*(long *)(lVar17 + 0x800) + 0x28) < (float)*(undefined8 *)(lVar14 + 0x28)) {
          *(long *)(lVar17 + 0x7f8) = *(long *)(lVar17 + 0x800);
          *(long *)(lVar17 + 0x800) = lVar14;
          if (-1 < (int)uVar12 + -2) {
            uVar15 = (long)iVar10 + 1;
            plVar16 = (long *)(param_2 + 0x800 + (long)iVar10 * 8);
            do {
              lVar17 = param_2 + (uVar15 & 0xffffffff) * 8;
              lVar14 = *(long *)(lVar17 + 0x800);
              if (*(float *)(*plVar16 + 0x28) <= (float)*(undefined8 *)(lVar14 + 0x28)) break;
              uVar15 = uVar15 - 1;
              *(long *)(lVar17 + 0x800) = *plVar16;
              *plVar16 = lVar14;
              plVar16 = plVar16 + -1;
            } while (0 < (long)uVar15);
          }
        }
        uVar12 = uVar12 + 1;
        iVar10 = iVar10 + 1;
      } while (uVar12 != uVar9);
    }
    if (uVar8 == 0) {
      uVar7 = 0;
    }
    else {
      uVar12 = 0;
      uVar15 = 0xffffffff;
      do {
        puVar13 = *(undefined8 **)(param_2 + uVar12 * 8 + 0x800);
        puVar13[2] = 0;
        iVar10 = *(int *)((long)puVar13 + 0x34) - *(int *)(puVar13 + 6);
        puVar13[3] = puVar13;
        puVar13[4] = puVar13;
        *(int *)(puVar13 + 7) = iVar10;
        if (uVar12 != 0) {
          lVar17 = 0;
          do {
            lVar14 = *(long *)(param_2 + 0x800 + uVar15 * 8 + lVar17 * 8);
            pfVar18 = *(float **)(lVar14 + 0x20);
            auVar24._0_4_ = (float)*puVar13 * *pfVar18;
            auVar24._4_4_ = (float)((ulong)*puVar13 >> 0x20) * pfVar18[1];
            auVar24._8_4_ = (float)puVar13[1] * pfVar18[2];
            auVar24._12_4_ = (float)((ulong)puVar13[1] >> 0x20) * pfVar18[3];
            auVar25 = NEON_ext(auVar24,auVar24,8,1);
            if (*(float *)(param_2 + 0x930) <=
                auVar24._0_4_ + auVar24._4_4_ + auVar25._0_4_ + auVar25._4_4_) {
              *(undefined8 **)(lVar14 + 0x10) = puVar13;
              *(undefined8 **)(pfVar18 + 6) = puVar13;
              puVar13[4] = pfVar18;
              *(int *)(*(long *)(lVar14 + 0x20) + 0x38) =
                   *(int *)(*(long *)(lVar14 + 0x20) + 0x38) + iVar10;
              break;
            }
            lVar17 = lVar17 + -1;
          } while ((int)uVar12 + (int)lVar17 != 0);
        }
        uVar15 = (ulong)((int)uVar15 + 1);
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar9);
      lVar17 = *(long *)(param_2 + 0x980);
      uVar12 = 0;
      do {
        lVar14 = *(long *)(param_2 + uVar12 * 8 + 0x800);
        if (lVar14 != 0 && *(long *)(lVar14 + 0x20) == lVar14) {
          for (lVar6 = *(long *)(lVar14 + 0x10); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x10)) {
            uVar15 = (ulong)*(uint *)(lVar14 + 0x30);
            uVar11 = *(uint *)(lVar14 + 0x34);
            if (*(uint *)(lVar14 + 0x30) < uVar11) {
              uVar8 = *(uint *)(lVar6 + 0x34);
              do {
                uVar19 = *(uint *)(lVar6 + 0x30);
                if (uVar19 < uVar8) {
                  lVar1 = lVar17 + uVar15 * 0x40;
                  do {
                    __dest = (void *)(lVar17 + (ulong)uVar19 * 0x40);
                    fVar20 = (float)*(undefined8 *)((long)__dest + 0x10) - *(float *)(lVar1 + 0x10);
                    fVar21 = (float)((ulong)*(undefined8 *)((long)__dest + 0x10) >> 0x20) -
                             *(float *)(lVar1 + 0x14);
                    fVar22 = (float)*(undefined8 *)((long)__dest + 0x18) - *(float *)(lVar1 + 0x18);
                    fVar23 = (float)((ulong)*(undefined8 *)((long)__dest + 0x18) >> 0x20) -
                             *(float *)(lVar1 + 0x1c);
                    fVar20 = fVar20 * fVar20;
                    fVar21 = fVar21 * fVar21;
                    fVar22 = fVar22 * fVar22;
                    fVar23 = fVar23 * fVar23;
                    auVar2._4_4_ = fVar21;
                    auVar2._0_4_ = fVar20;
                    auVar2._8_4_ = fVar22;
                    auVar2._12_4_ = fVar23;
                    auVar3._4_4_ = fVar21;
                    auVar3._0_4_ = fVar20;
                    auVar3._8_4_ = fVar22;
                    auVar3._12_4_ = fVar23;
                    auVar25 = NEON_ext(auVar2,auVar3,8,1);
                    if (fVar20 + fVar21 + auVar25._0_4_ + auVar25._4_4_ <
                        *(float *)(param_2 + 0x938)) {
                      memcpy(__dest,(void *)(lVar17 + (ulong)(uVar8 - 1) * 0x40),0x34);
                      uVar8 = *(int *)(lVar6 + 0x34) - 1;
                      uVar19 = uVar19 - 1;
                      *(uint *)(lVar6 + 0x34) = uVar8;
                    }
                    uVar19 = uVar19 + 1;
                  } while (uVar19 < uVar8);
                  uVar11 = *(uint *)(lVar14 + 0x34);
                }
                uVar15 = uVar15 + 1;
              } while (uVar15 < uVar11);
            }
            lVar14 = lVar6;
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar9);
      uVar11 = *(uint *)(param_2 + 0x988);
      uVar7 = *(undefined4 *)(param_2 + 0x98c);
    }
    FUN_00292960(*(undefined8 *)(param_2 + 0x920),*(undefined8 *)(param_2 + 0x980),uVar11,
                 param_2 + 0x800,uVar7,param_2 + 0x938,(float *)(param_2 + 0x930),1);
    *(long *)(param_2 + 0x808) = param_2 + 0x40;
    *(long *)(param_2 + 0x810) = param_2 + 0x80;
    *(long *)(param_2 + 0x818) = param_2 + 0xc0;
    *(long *)(param_2 + 0x820) = param_2 + 0x100;
    *(long *)(param_2 + 0x828) = param_2 + 0x140;
    *(long *)(param_2 + 0x830) = param_2 + 0x180;
    *(long *)(param_2 + 0x838) = param_2 + 0x1c0;
    *(long *)(param_2 + 0x840) = param_2 + 0x200;
    *(long *)(param_2 + 0x848) = param_2 + 0x240;
    *(long *)(param_2 + 0x850) = param_2 + 0x280;
    *(long *)(param_2 + 0x858) = param_2 + 0x2c0;
    *(long *)(param_2 + 0x860) = param_2 + 0x300;
    *(long *)(param_2 + 0x868) = param_2 + 0x340;
    *(long *)(param_2 + 0x870) = param_2 + 0x380;
    *(long *)(param_2 + 0x878) = param_2 + 0x3c0;
    *(long *)(param_2 + 0x880) = param_2 + 0x400;
    *(long *)(param_2 + 0x888) = param_2 + 0x440;
    *(long *)(param_2 + 0x890) = param_2 + 0x480;
    *(long *)(param_2 + 0x898) = param_2 + 0x4c0;
    *(long *)(param_2 + 0x8a0) = param_2 + 0x500;
    *(long *)(param_2 + 0x8a8) = param_2 + 0x540;
    *(long *)(param_2 + 0x8b0) = param_2 + 0x580;
    *(long *)(param_2 + 0x8b8) = param_2 + 0x5c0;
    *(long *)(param_2 + 0x8c0) = param_2 + 0x600;
    *(long *)(param_2 + 0x8c8) = param_2 + 0x640;
    *(long *)(param_2 + 0x8d0) = param_2 + 0x680;
    *(long *)(param_2 + 0x8d8) = param_2 + 0x6c0;
    *(long *)(param_2 + 0x8e0) = param_2 + 0x700;
    *(long *)(param_2 + 0x8e8) = param_2 + 0x740;
    *(long *)(param_2 + 0x8f0) = param_2 + 0x780;
    *(undefined8 *)(param_2 + 0x988) = 0;
    *(long *)(param_2 + 0x800) = param_2;
    *(long *)(param_2 + 0x8f8) = param_2 + 0x7c0;
  }
  return;
}


