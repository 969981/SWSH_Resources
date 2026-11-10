/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ad1f0; name: FUN_004ad1f0
 */


/* WARNING: Removing unreachable block (ram,0x004ad320) */

void FUN_004ad1f0(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 uint param_4,uint param_5,uint param_6,float *param_7,long param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  void *__s;
  undefined1 (*pauVar4) [16];
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float fVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  float *pfVar24;
  uint uVar25;
  uint *puVar26;
  size_t sVar27;
  int iVar28;
  uint uVar29;
  long lVar30;
  int iVar31;
  ulong uVar32;
  long lVar33;
  undefined8 *puVar34;
  undefined1 (*pauVar35) [16];
  undefined1 (*pauVar36) [16];
  ulong uVar37;
  undefined4 *puVar38;
  long lVar39;
  bool bVar40;
  void *__s_00;
  ulong uVar41;
  uint uVar42;
  ulong uVar43;
  undefined4 *puVar44;
  float fVar45;
  float fVar46;
  undefined1 extraout_var [12];
  undefined8 uVar49;
  undefined1 extraout_var_00 [12];
  undefined8 uVar50;
  undefined1 extraout_var_01 [12];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  float fVar58;
  float fVar59;
  float afStack_130 [2];
  undefined1 auStack_128 [4];
  uint local_124;
  long local_120;
  ulong local_118;
  undefined1 *local_110;
  ulong local_108;
  ulong local_100;
  ulong local_f8;
  float *local_f0;
  undefined8 *local_e8;
  ulong local_e0;
  ulong uStack_d8;
  undefined1 *local_d0;
  ulong local_c8;
  uint local_bc;
  size_t local_b8;
  ulong local_b0;
  undefined8 local_a8;
  void *__s_01;
  
  fVar15 = DAT_01d4c488;
  fVar58 = DAT_01d4c36c;
  fVar59 = DAT_01d4c19c;
  fVar57 = DAT_01d4c070;
  uVar5 = param_6 & 0xff;
  uVar42 = param_5 & 0xff;
  uVar6 = uVar5 + 3 & 0x1fc;
  uVar41 = (ulong)uVar6;
  if (uVar6 * uVar42 != 0) {
                    /* WARNING: Subroutine does not return */
    memset(param_7,0,(ulong)(uVar6 * uVar42 * 4));
  }
  uVar18 = param_5 >> 8 & 0xf;
  uVar17 = param_6 >> 8 & 0xf;
  if (uVar18 == uVar17) {
    if (uVar18 == 1) {
      FUN_004ae7b0(param_1,param_2,param_3,param_4 & 1,param_5,param_6,param_7);
      return;
    }
    if ((param_5 & 0xf00) == 0x200) {
      if ((uVar42 != 0) && (uVar5 != 0)) {
        uVar17 = *(uint *)(&DAT_01d568dc + (ulong)uVar42 * 4);
        uVar41 = 0;
        uVar18 = 0;
        do {
          if ((1 << (ulong)((uint)uVar41 & 0x1f) & uVar17) == 0) {
            uVar10 = uVar18 * uVar6;
            uVar18 = uVar18 + 1;
            param_7[uVar10 + uVar41] = 1.0;
          }
          uVar41 = uVar41 + 1;
        } while ((uVar41 < uVar5) && (uVar18 < uVar42));
      }
    }
    else {
      if (uVar5 <= uVar42) {
        uVar42 = uVar5;
      }
      uVar32 = (ulong)uVar42;
      if (uVar42 != 0) {
        if (uVar32 - 1 < 3) {
          lVar30 = 0;
        }
        else {
          lVar22 = 3;
          pfVar24 = param_7;
          do {
            lVar30 = lVar22;
            *pfVar24 = 1.0;
            pfVar24[uVar41 + 1] = 1.0;
            lVar22 = lVar30 + 4;
            pfVar24[uVar41 * 2 + 2] = 1.0;
            pfVar24[uVar41 * 3 + 3] = 1.0;
            pfVar24 = pfVar24 + uVar41 * 4 + 4;
          } while (((uVar32 & 3) - uVar32) + lVar22 != 3);
          lVar30 = lVar30 + 1;
        }
        if ((uVar42 & 3) != 0) {
          param_7 = (float *)((long)param_7 + lVar30 * (uVar41 * 4 + 4));
          lVar22 = -(uVar32 & 3);
          do {
            *param_7 = 1.0;
            param_7 = param_7 + uVar41 + 1;
            lVar22 = lVar22 + 1;
          } while (lVar22 != 0);
        }
      }
    }
    return;
  }
  if ((uVar18 != 2) || (uVar17 == 2)) {
    uVar18 = param_5 & 0xf00;
    if ((uVar18 == 0x100) && (uVar17 == 2)) {
      if ((param_5 - (param_5 >> 0xf & 1) & 0xff) == 1) {
        *param_7 = 1.0;
        return;
      }
      uVar18 = param_5 >> 0xc & 0x637;
      uVar42 = uVar18 - (uVar18 >> 1 & 0xf1f1f1f1);
      uVar42 = (uVar42 & 0x33333333) + (uVar42 >> 2 & 0x33333333);
      uVar42 = (uVar42 + (uVar42 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
      if (uVar18 != 0) {
        lVar22 = (ulong)uVar42 - 1;
        if (uVar5 < 5) {
          fVar59 = *(float *)(&DAT_01d56b90 + lVar22 * 0x1c);
          fVar57 = cosf(fVar59);
          fVar59 = sinf(fVar59);
          param_7[1] = param_7[1] + fVar59;
          *param_7 = *param_7 + 1.0;
          param_7[3] = param_7[3] + fVar57;
          if (1 < uVar42) {
            fVar59 = *(float *)(&DAT_01d56b94 + lVar22 * 0x1c);
            pfVar24 = param_7 + uVar41;
            fVar57 = cosf(fVar59);
            fVar59 = sinf(fVar59);
            pfVar24[1] = pfVar24[1] + fVar59;
            *pfVar24 = *pfVar24 + 1.0;
            pfVar24[3] = pfVar24[3] + fVar57;
            if (uVar42 != 2) {
              pfVar24 = param_7 + (uVar6 << 1);
              fVar59 = *(float *)(&DAT_01d56b98 + lVar22 * 0x1c);
              fVar57 = cosf(fVar59);
              fVar59 = sinf(fVar59);
              *pfVar24 = *pfVar24 + 1.0;
              pfVar24[1] = pfVar24[1] + fVar59;
              pfVar24[3] = pfVar24[3] + fVar57;
              if (3 < uVar42) {
                pfVar24 = param_7 + uVar41 * 3;
                fVar59 = *(float *)(&DAT_01d56b9c + lVar22 * 0x1c);
                fVar57 = cosf(fVar59);
                fVar59 = sinf(fVar59);
                *pfVar24 = *pfVar24 + 1.0;
                pfVar24[1] = pfVar24[1] + fVar59;
                pfVar24[3] = pfVar24[3] + fVar57;
                if (uVar42 != 4) {
                  pfVar24 = param_7 + (uVar6 << 2);
                  fVar59 = *(float *)(&DAT_01d56ba0 + lVar22 * 0x1c);
                  fVar57 = cosf(fVar59);
                  fVar59 = sinf(fVar59);
                  pfVar24[1] = pfVar24[1] + fVar59;
                  *pfVar24 = *pfVar24 + 1.0;
                  pfVar24[3] = pfVar24[3] + fVar57;
                  if (5 < uVar42) {
                    pfVar24 = param_7 + uVar41 * 5;
                    fVar59 = *(float *)(&DAT_01d56ba4 + lVar22 * 0x1c);
                    fVar57 = cosf(fVar59);
                    fVar59 = sinf(fVar59);
                    *pfVar24 = *pfVar24 + 1.0;
                    pfVar24[1] = pfVar24[1] + fVar59;
                    pfVar24[3] = pfVar24[3] + fVar57;
                    if (uVar42 != 6) {
                      pfVar24 = param_7 + uVar41 * 6;
                      fVar59 = *(float *)(&DAT_01d56ba8 + lVar22 * 0x1c);
                      fVar57 = cosf(fVar59);
                      fVar59 = sinf(fVar59);
                      pfVar24[1] = pfVar24[1] + fVar59;
                      *pfVar24 = *pfVar24 + 1.0;
                      pfVar24[3] = pfVar24[3] + fVar57;
                    }
                  }
                }
              }
            }
          }
        }
        else {
          uVar32 = 0;
          pfVar24 = param_7 + 8;
          local_a8 = CONCAT44(DAT_01d4c63c,(int)local_a8);
          do {
            fVar45 = *(float *)(&DAT_01d56b90 + uVar32 * 4 + lVar22 * 0x1c);
            fVar46 = cosf(fVar45);
            fVar45 = sinf(-fVar45);
            pfVar24[-8] = pfVar24[-8] + 1.0;
            fVar54 = fVar45 * fVar45;
            pfVar24[-7] = pfVar24[-7] - fVar45;
            pfVar24[-5] = pfVar24[-5] + fVar46;
            fVar51 = fVar46 * fVar46;
            pfVar24[-4] = pfVar24[-4] + fVar45 * fVar46 * fVar15;
            pfVar24[-2] = pfVar24[-2] + -0.5;
            *pfVar24 = *pfVar24 + fVar59 * (fVar51 - fVar54);
            if (9 < uVar5) {
              pfVar24[3] = pfVar24[3] + fVar57 * fVar45;
              pfVar24[1] = pfVar24[1] + (fVar51 * 3.0 - fVar54) * fVar45 * fVar58;
              pfVar24[5] = pfVar24[5] - fVar57 * fVar46;
              pfVar24[7] = pfVar24[7] + (fVar51 - fVar54 * 3.0) * fVar46 * local_a8._4_4_;
            }
            uVar32 = uVar32 + 1;
            pfVar24 = pfVar24 + uVar41;
          } while (uVar32 < uVar42);
        }
      }
      uVar18 = param_5 >> 0xc & 0xff9c0;
      if (uVar18 == 0) {
        return;
      }
      uVar18 = uVar18 - (uVar18 >> 1 & 0x55555555);
      uVar18 = (uVar18 & 0x33333333) + (uVar18 >> 2 & 0x33333333);
      uVar32 = (ulong)((uVar18 + (uVar18 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
      lVar22 = uVar32 * 0x18;
      uVar41 = 0;
      uVar42 = uVar42 * (uVar5 + 3 >> 2) * 4;
      do {
        fVar57 = *(float *)(&DAT_01d56c3c + uVar41 * 4 + lVar22);
        fVar59 = *(float *)(&DAT_01d56ccc + uVar41 * 4 + lVar22);
        auVar53._0_4_ = cosf(fVar57);
        auVar53._4_12_ = extraout_var;
        uVar49 = extraout_var._4_8_;
        auVar48._0_8_ = auVar53._0_8_;
        auVar56._0_4_ = sinf(fVar57);
        auVar56._4_12_ = extraout_var_00;
        uVar50 = extraout_var_00._4_8_;
        auVar47._0_4_ = sinf(fVar59);
        auVar47._4_12_ = extraout_var_01;
        auVar55._8_8_ = extraout_var_01._4_8_;
        auVar55._0_8_ = auVar47._0_8_;
        auVar48._8_8_ = uVar49;
        auVar52._8_8_ = uVar50;
        auVar52._0_8_ = auVar56._0_8_;
        FUN_00433610(auVar48,auVar52,auVar55,(ulong)uVar5,param_7 + uVar42);
        uVar41 = uVar41 + 1;
        uVar42 = uVar42 + uVar6;
      } while (uVar41 < uVar32);
      return;
    }
    if ((uVar18 != 0 || uVar17 != 1) && (uVar18 != 0x100 || uVar17 != 0)) {
      return;
    }
    if (uVar5 <= uVar42) {
      uVar42 = uVar5;
    }
    uVar32 = (ulong)uVar42;
    if (uVar42 == 0) {
      return;
    }
    if (uVar32 - 1 < 3) {
      lVar30 = 0;
    }
    else {
      lVar22 = 3;
      pfVar24 = param_7;
      do {
        lVar30 = lVar22;
        *pfVar24 = 1.0;
        pfVar24[uVar41 + 1] = 1.0;
        lVar22 = lVar30 + 4;
        pfVar24[uVar41 * 2 + 2] = 1.0;
        pfVar24[uVar41 * 3 + 3] = 1.0;
        pfVar24 = pfVar24 + uVar41 * 4 + 4;
      } while (((uVar32 & 3) - uVar32) + lVar22 != 3);
      lVar30 = lVar30 + 1;
    }
    if ((uVar42 & 3) == 0) {
      return;
    }
    param_7 = (float *)((long)param_7 + lVar30 * (uVar41 * 4 + 4));
    lVar22 = -(uVar32 & 3);
    do {
      *param_7 = 1.0;
      param_7 = param_7 + uVar41 + 1;
      lVar22 = lVar22 + 1;
    } while (lVar22 != 0);
    return;
  }
  uVar32 = (ulong)param_5;
  uVar41 = (ulong)param_6;
  uVar6 = param_6 >> 0xc & 0xffff7;
  uVar42 = param_6 - ((param_6 >> 0xc) - uVar6 >> 3);
  uVar5 = uVar42 & 0xff;
  uVar37 = (ulong)uVar5;
  if (uVar5 == 1) {
    *param_7 = 1.0;
    return;
  }
  if ((uVar6 | 4) == 7) {
    param_5 = param_5 & 0xff;
    param_7[0] = 0.5;
    param_7[1] = 0.5;
    if (param_5 < 2) {
      return;
    }
    uVar5 = (param_6 & 0xff) + 3 & 0x1fc;
    (param_7 + uVar5)[0] = 0.5;
    (param_7 + uVar5)[1] = -0.5;
    if (param_5 == 2) {
      return;
    }
    (param_7 + ((uint)(0x54L >> ((long)(int)(param_5 - 1) & 0x3fU)) & 1 ^ 3) * uVar5)[0] = 0.5;
    (param_7 + ((uint)(0x54L >> ((long)(int)(param_5 - 1) & 0x3fU)) & 1 ^ 3) * uVar5)[1] = 0.5;
    return;
  }
  if (param_8 == 0) {
    return;
  }
  if (uVar5 == 0) {
    return;
  }
  puVar34 = (undefined8 *)(param_8 + 0x68);
  puVar26 = (uint *)*puVar34;
  uVar18 = *(uint *)(param_8 + 0x70);
  puVar16 = puVar26;
  if (uVar18 == 0) {
LAB_004adb00:
    if (puVar16 != puVar26 + (ulong)uVar18 * 4) {
      puVar16 = puVar16 + 2;
      goto LAB_004ae5d0;
    }
  }
  else {
    lVar22 = (ulong)uVar18 << 4;
    do {
      if ((*puVar16 == param_5) && (puVar16[1] == param_6)) goto LAB_004adb00;
      lVar22 = lVar22 + -0x10;
      puVar16 = puVar16 + 4;
    } while (lVar22 != 0);
  }
  uVar18 = param_6 & 0xf00;
  __s_01 = (void *)0x0;
  if (uVar18 == 0x100) {
    uVar43 = (ulong)(param_6 & 0xff);
    if ((param_6 & 0xff9c0000) != 0) {
      uVar21 = 0x20;
      uVar19 = (ulong)(param_5 & 0xff);
      if (4 < (param_5 & 0xff)) goto LAB_004adb84;
      goto LAB_004adb68;
    }
    param_5 = param_5 & 0xff;
    uVar19 = (ulong)param_5;
    if (param_5 < 5) {
      uVar21 = 0xc;
      bVar40 = true;
      uVar17 = 4;
      puVar44 = (undefined4 *)&DAT_01d56090;
    }
    else if ((param_5 < 10) && (1 < param_5 - 7)) {
      uVar21 = 0xc;
      bVar40 = true;
      uVar17 = 9;
      puVar44 = (undefined4 *)&DAT_01d56150;
    }
    else {
      if (0x10 < param_5) {
        return;
      }
      uVar21 = 0xc;
      bVar40 = true;
      uVar17 = 0x10;
      puVar44 = (undefined4 *)&DAT_01d56300;
    }
LAB_004add48:
    local_bc = uVar17;
    puVar26 = *(uint **)(param_8 + 0x78);
    uVar17 = *(uint *)(param_8 + 0x80);
    local_f0 = param_7;
    local_e8 = puVar34;
    local_e0 = uVar32;
    uStack_d8 = uVar41;
    puVar16 = puVar26;
    if (uVar17 == 0) {
LAB_004adda0:
      if (puVar16 == puVar26 + (ulong)uVar17 * 4) goto LAB_004addb8;
      lVar22 = *(long *)(puVar16 + 2);
      if (lVar22 == 0) goto LAB_004ae5ac;
    }
    else {
      lVar22 = (ulong)uVar17 << 4;
      do {
        if (*puVar16 == (uVar18 | uVar6 << 0xc | uVar42 & 0xff)) goto LAB_004adda0;
        lVar22 = lVar22 + -0x10;
        puVar16 = puVar16 + 4;
      } while (lVar22 != 0);
LAB_004addb8:
      lVar22 = FUN_0047b520(param_8);
      if (lVar22 == 0) goto LAB_004ae5ac;
    }
    uVar6 = uVar5 + 3 >> 2;
    iVar20 = (int)uVar21;
    lVar30 = -(ulong)(uVar6 * iVar20 * 0x10);
    __s_00 = (void *)((long)afStack_130 + lVar30);
    uVar5 = uVar5 + 3 & 0x1fc;
    if (iVar20 * uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      memset(__s_00,0,(ulong)(iVar20 * uVar5) << 2);
    }
    local_118 = uVar43;
    local_124 = uVar42;
    if (bVar40) {
      if (iVar20 != 0) {
        uVar32 = (ulong)(uVar6 << 4) - 1;
        uVar42 = ((uint)(uVar32 >> 4) & 0xfffffff) + 1;
        uVar41 = 0;
        do {
          uVar18 = 0xffffffff;
          do {
            do {
              uVar17 = uVar18;
              uVar18 = uVar17 + 1;
              pfVar24 = (float *)(lVar22 + (ulong)uVar18 * 0x10);
              fVar57 = *pfVar24 * (float)(&DAT_01d56b00)[uVar41 * 3] +
                       (float)(&DAT_01d56b08)[uVar41 * 3] * pfVar24[1];
              fVar59 = pfVar24[2] * (float)(&DAT_01d56b00)[uVar41 * 3] +
                       (float)(&DAT_01d56b08)[uVar41 * 3] * pfVar24[3];
            } while (fVar57 < 0.0);
          } while (fVar59 < 0.0);
          pauVar36 = (undefined1 (*) [16])((long)__s_00 + (ulong)(uVar5 * (int)uVar41) * 4);
          lVar39 = (ulong)*(ushort *)(&DAT_01d56800 + (ulong)uVar18 * 4 + (uVar37 - 1) * 0x20 + 2) *
                   4;
          lVar30 = (ulong)*(ushort *)
                           (&DAT_01d56800 + (ulong)(uVar17 + 2) * 4 + (uVar37 - 1) * 0x20 + 2) * 4;
          fVar58 = (1.0 / (fVar59 * fVar59 + fVar57 * fVar57)) * (1.0 / (float)uVar21);
          *(float *)(*pauVar36 + lVar39) = *(float *)(*pauVar36 + lVar39) + fVar57 * fVar57 * fVar58
          ;
          *(float *)(*pauVar36 + lVar30) = *(float *)(*pauVar36 + lVar30) + fVar59 * fVar59 * fVar58
          ;
          pauVar4 = pauVar36 + uVar6;
          if (pauVar36 < pauVar4) {
            if ((uVar42 & 3) != 0) {
              pauVar35 = pauVar36;
              lVar30 = -((ulong)uVar42 & 3);
              do {
                pauVar36 = pauVar35 + 1;
                lVar30 = lVar30 + 1;
                auVar53 = NEON_frsqrte(*pauVar35,4);
                auVar53 = NEON_frecpe(auVar53,4);
                *(long *)(*pauVar35 + 8) = auVar53._8_8_;
                *(long *)*pauVar35 = auVar53._0_8_;
                pauVar35 = pauVar36;
              } while (lVar30 != 0);
            }
            if (0x2f < uVar32) {
              do {
                auVar56 = NEON_frsqrte(pauVar36[1],4);
                auVar53 = NEON_frsqrte(*pauVar36,4);
                auVar56 = NEON_frecpe(auVar56,4);
                auVar53 = NEON_frecpe(auVar53,4);
                *(long *)(*pauVar36 + 8) = auVar53._8_8_;
                *(long *)*pauVar36 = auVar53._0_8_;
                *(long *)(pauVar36[1] + 8) = auVar56._8_8_;
                *(long *)pauVar36[1] = auVar56._0_8_;
                auVar53 = pauVar36[3];
                auVar56 = NEON_frsqrte(pauVar36[2],4);
                auVar56 = NEON_frecpe(auVar56,4);
                *(long *)(pauVar36[2] + 8) = auVar56._8_8_;
                *(long *)pauVar36[2] = auVar56._0_8_;
                auVar53 = NEON_frsqrte(auVar53,4);
                auVar53 = NEON_frecpe(auVar53,4);
                *(long *)(pauVar36[3] + 8) = auVar53._8_8_;
                *(long *)pauVar36[3] = auVar53._0_8_;
                pauVar36 = pauVar36 + 4;
              } while (pauVar36 < pauVar4);
            }
          }
          uVar41 = uVar41 + 1;
        } while (uVar41 != uVar21);
      }
    }
    else if (iVar20 != 0) {
      local_a8 = uVar37 - 1;
      local_100 = (ulong)(uVar6 << 4) - 1;
      local_b0 = uVar37 & 7;
      lVar33 = uVar37 - local_b0;
      local_b8 = -local_b0;
      local_c8 = uVar37 & 3;
      local_110 = auStack_128 + lVar30;
      lVar39 = uVar37 - local_c8;
      local_d0 = auStack_128 + lVar30 + 8;
      local_108 = (ulong)(((uint)(local_100 >> 4) & 0xfffffff) + 1) & 3;
      local_f8 = -local_c8;
      uVar32 = 0;
      uVar41 = 0;
      local_120 = -local_108;
      do {
        lVar30 = uVar32 * 4;
        pauVar36 = (undefined1 (*) [16])((long)__s_00 + (ulong)(uVar5 * (int)uVar41) * 4);
        FUN_004c1610(lVar22,uVar37,pauVar36);
        if (local_a8 < 7) {
          lVar23 = 0;
          fVar57 = 0.0;
        }
        else {
          fVar57 = 0.0;
          lVar23 = 0;
          pfVar24 = (float *)(local_d0 + lVar30);
          do {
            pfVar1 = pfVar24 + -4;
            pfVar11 = pfVar24 + -3;
            pfVar2 = pfVar24 + -2;
            pfVar12 = pfVar24 + -1;
            fVar59 = *pfVar24;
            pfVar13 = pfVar24 + 1;
            pfVar3 = pfVar24 + 2;
            pfVar14 = pfVar24 + 3;
            pfVar24 = pfVar24 + 8;
            fVar57 = *pfVar1 + fVar57 + *pfVar11 + *pfVar2 + *pfVar12 + fVar59 + *pfVar13 +
                     *pfVar3 + *pfVar14;
            lVar23 = lVar23 + 8;
          } while (lVar33 != lVar23);
        }
        if (local_b0 != 0) {
          pfVar24 = (float *)((long)__s_00 + lVar30 + lVar23 * 4);
          sVar27 = local_b8;
          do {
            fVar57 = *pfVar24 + fVar57;
            sVar27 = sVar27 + 1;
            pfVar24 = pfVar24 + 1;
          } while (sVar27 != 0);
        }
        if (0.0 < fVar57) {
          fVar57 = (1.0 / (float)uVar21) / fVar57;
          lVar23 = 0;
          if (2 < local_a8) {
            pfVar24 = (float *)(local_110 + lVar30);
            do {
              lVar23 = lVar23 + 4;
              pfVar24[-2] = pfVar24[-2] * fVar57;
              pfVar24[-1] = pfVar24[-1] * fVar57;
              *pfVar24 = *pfVar24 * fVar57;
              pfVar24[1] = pfVar24[1] * fVar57;
              pfVar24 = pfVar24 + 4;
            } while (lVar39 != lVar23);
          }
          if (local_c8 != 0) {
            pfVar24 = (float *)((long)__s_00 + lVar30 + lVar23 * 4);
            uVar43 = local_f8;
            do {
              uVar43 = uVar43 + 1;
              *pfVar24 = *pfVar24 * fVar57;
              pfVar24 = pfVar24 + 1;
            } while (uVar43 != 0);
          }
          pauVar4 = pauVar36 + uVar6;
          if (pauVar36 < pauVar4) {
            if (local_108 != 0) {
              lVar30 = local_120;
              pauVar35 = pauVar36;
              do {
                pauVar36 = pauVar35 + 1;
                lVar30 = lVar30 + 1;
                auVar53 = NEON_frsqrte(*pauVar35,4);
                auVar53 = NEON_frecpe(auVar53,4);
                *(long *)(*pauVar35 + 8) = auVar53._8_8_;
                *(long *)*pauVar35 = auVar53._0_8_;
                pauVar35 = pauVar36;
              } while (lVar30 != 0);
            }
            if (0x2f < local_100) {
              do {
                auVar56 = NEON_frsqrte(pauVar36[1],4);
                auVar53 = NEON_frsqrte(*pauVar36,4);
                auVar56 = NEON_frecpe(auVar56,4);
                auVar53 = NEON_frecpe(auVar53,4);
                *(long *)(*pauVar36 + 8) = auVar53._8_8_;
                *(long *)*pauVar36 = auVar53._0_8_;
                *(long *)(pauVar36[1] + 8) = auVar56._8_8_;
                *(long *)pauVar36[1] = auVar56._0_8_;
                auVar53 = pauVar36[3];
                auVar56 = NEON_frsqrte(pauVar36[2],4);
                auVar56 = NEON_frecpe(auVar56,4);
                *(long *)(pauVar36[2] + 8) = auVar56._8_8_;
                *(long *)pauVar36[2] = auVar56._0_8_;
                auVar53 = NEON_frsqrte(auVar53,4);
                auVar53 = NEON_frecpe(auVar53,4);
                *(long *)(pauVar36[3] + 8) = auVar53._8_8_;
                *(long *)pauVar36[3] = auVar53._0_8_;
                pauVar36 = pauVar36 + 4;
              } while (pauVar36 < pauVar4);
            }
          }
        }
        uVar41 = uVar41 + 1;
        uVar32 = (ulong)((int)uVar32 + uVar5);
      } while (uVar41 != uVar21);
    }
    uVar41 = local_118;
    iVar28 = (int)local_118;
    uVar42 = iVar28 + 3;
    uVar18 = (uint)uVar19;
    __s_01 = (void *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,uVar18 * (uVar42 >> 2) * 0x10);
    if (__s_01 != (void *)0x0) {
      if (uVar18 != 0) {
        uVar10 = *(uint *)(&DAT_01d568dc + uVar19 * 4);
        local_d0 = (undefined1 *)(uVar21 & 3);
        lVar22 = 0;
        uVar17 = 0;
        local_a8 = CONCAT44(local_a8._4_4_,uVar42) & 0xfffffffffffffffc;
        local_f8 = (ulong)((local_124 & 0xff) << 2);
        uVar42 = 0;
        local_b0 = CONCAT44(local_b0._4_4_,uVar10);
        local_c8 = uVar21 - 1;
        if (iVar28 == 0) {
          local_b8 = CONCAT44(local_b8._4_4_,uVar6 * 4);
          do {
            if ((uVar10 & 1 << (ulong)(uVar17 & 0x1f)) == 0) {
              __s = (void *)((long)__s_01 + (ulong)(uVar42 * (int)local_a8) * 4);
              if (iVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                memset(__s,0,local_f8);
              }
              uVar41 = 0;
              do {
                if (uVar21 - 1 < 3) {
                  fVar57 = 0.0;
                  lVar30 = 0;
                }
                else {
                  fVar57 = 0.0;
                  uVar32 = 0;
                  lVar30 = 0;
                  do {
                    lVar39 = uVar32 * 4;
                    lVar33 = uVar41 * 4;
                    iVar31 = (int)(lVar22 + lVar30);
                    iVar28 = (int)uVar32;
                    uVar32 = (ulong)(iVar28 + uVar6 * 0x10);
                    fVar57 = fVar57 + (float)puVar44[lVar22 + lVar30 & 0xffffffff] *
                                      *(float *)((long)__s_00 + lVar33 + lVar39) +
                             (float)puVar44[iVar31 + 1] *
                             *(float *)((long)__s_00 + lVar33 + (ulong)(uVar5 + iVar28) * 4) +
                             (float)puVar44[iVar31 + 2] *
                             *(float *)((long)__s_00 + lVar33 + (ulong)(uVar6 * 8 + iVar28) * 4) +
                             (float)puVar44[iVar31 + 3] *
                             *(float *)((long)__s_00 + lVar33 + (ulong)(uVar6 * 0xc + iVar28) * 4);
                    lVar30 = lVar30 + 4;
                  } while (uVar21 - (long)local_d0 != lVar30);
                }
                if (local_d0 != (undefined1 *)0x0) {
                  uVar29 = uVar6 * 4 * (int)lVar30;
                  uVar25 = (int)lVar22 + (int)lVar30;
                  lVar30 = -(long)local_d0;
                  do {
                    uVar32 = (ulong)uVar25;
                    uVar25 = uVar25 + 1;
                    fVar57 = fVar57 + (float)puVar44[uVar32] *
                                      *(float *)((long)__s_00 + uVar41 * 4 + (ulong)uVar29 * 4);
                    uVar29 = uVar29 + uVar5;
                    lVar30 = lVar30 + 1;
                  } while (lVar30 != 0);
                }
                *(float *)((long)__s + uVar41 * 4) = fVar57;
                uVar41 = uVar41 + 1;
              } while (uVar41 != uVar37);
              uVar42 = uVar42 + 1;
            }
            if (uVar18 <= uVar42) break;
            uVar17 = uVar17 + 1;
            lVar22 = lVar22 + uVar21;
          } while (uVar17 < local_bc);
        }
        else {
          local_b8 = uVar41 << 2;
          local_108 = -(long)local_d0;
          local_100 = CONCAT44(local_100._4_4_,uVar6 << 2);
          do {
            if ((uVar10 & 1 << (ulong)(uVar17 & 0x1f)) == 0) {
                    /* WARNING: Subroutine does not return */
              memset(__s_01,0,local_b8);
            }
          } while ((uVar18 != 0) && (uVar17 = uVar17 + 1, uVar17 < local_bc));
        }
      }
    }
LAB_004ae5ac:
    uVar41 = uStack_d8;
    uVar32 = local_e0;
  }
  else {
    param_6 = param_6 & 0xff;
    uVar43 = (ulong)param_6;
    if (uVar18 != 0) {
      param_6 = 0x20;
    }
    uVar21 = (ulong)param_6;
    uVar19 = (ulong)(param_5 & 0xff);
    if ((param_5 & 0xff) < 5) {
LAB_004adb68:
      uVar17 = 4;
      puVar44 = (undefined4 *)&DAT_01d551ac;
    }
    else {
LAB_004adb84:
      uVar17 = (uint)uVar19;
      if ((uVar17 < 10) && (1 < uVar17 - 7)) {
        uVar17 = 9;
        puVar44 = &DAT_01d553d0;
      }
      else {
        if (0x10 < uVar17) {
          return;
        }
        uVar17 = 0x10;
        puVar44 = (undefined4 *)&DAT_01d55890;
      }
    }
    if (uVar18 == 0x100) {
      bVar40 = false;
      goto LAB_004add48;
    }
    uVar5 = (int)uVar43 + 3;
    local_f0 = param_7;
    local_e8 = puVar34;
    __s_01 = (void *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(int)uVar19 * (uVar5 >> 2) * 0x10)
    ;
    if (__s_01 != (void *)0x0) {
      local_e0 = uVar32;
      uStack_d8 = uVar41;
      if ((int)uVar19 != 0) {
        lVar22 = 0;
        uVar41 = 0;
        uVar32 = 0;
        if (2 < uVar37 - 1) goto LAB_004adc48;
        do {
          lVar30 = 0;
          while( true ) {
            if ((uVar42 & 3) != 0) {
              lVar39 = -(uVar37 & 3);
              do {
                *(undefined4 *)((long)__s_01 + lVar30 * 4 + uVar32 * 4) =
                     puVar44[(uint)((int)lVar22 + (int)lVar30)];
                lVar30 = lVar30 + 1;
                lVar39 = lVar39 + 1;
              } while (lVar39 != 0);
            }
            uVar41 = uVar41 + 1;
            if (uVar41 == uVar19) goto LAB_004ae5ac;
            lVar22 = lVar22 + uVar21;
            uVar32 = (ulong)((int)uVar32 + (uVar5 & 0x1fc));
            if (uVar37 - 1 < 3) break;
LAB_004adc48:
            lVar30 = 0;
            puVar38 = (undefined4 *)((long)__s_01 + uVar32 * 4 + 8);
            do {
              uVar43 = lVar22 + lVar30;
              lVar30 = lVar30 + 4;
              iVar20 = (int)uVar43;
              uVar7 = puVar44[iVar20 + 1];
              uVar8 = puVar44[iVar20 + 2];
              uVar9 = puVar44[iVar20 + 3];
              puVar38[-2] = puVar44[uVar43 & 0xffffffff];
              puVar38[-1] = uVar7;
              *puVar38 = uVar8;
              puVar38[1] = uVar9;
              puVar38 = puVar38 + 4;
            } while (uVar37 - (uVar37 & 3) != lVar30);
          }
        } while( true );
      }
      goto LAB_004ae5ac;
    }
  }
  param_5 = (uint)uVar32;
  param_6 = (uint)uVar41;
  if (__s_01 == (void *)0x0) {
    return;
  }
  puVar16 = (uint *)FUN_004ae640(local_e8,uVar32 & 0xffffffff | uVar41 << 0x20,
                                 (long)register0x00000008 + -0x80);
  if (puVar16 == (uint *)0x0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,__s_01);
    return;
  }
  param_7 = local_f0;
LAB_004ae5d0:
  iVar20 = ((param_6 & 0xff) + 3 & 0x1fc) * (param_5 & 0xff);
  if (iVar20 != 0) {
    memcpy(param_7,*(void **)puVar16,(ulong)(uint)(iVar20 * 4));
  }
  return;
}


