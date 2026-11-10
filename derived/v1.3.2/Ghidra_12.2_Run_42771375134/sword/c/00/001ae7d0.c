/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001ae7d0; name: FUN_001ae7d0
 */


void FUN_001ae7d0(undefined1 param_1 [16],float param_2,undefined1 param_3 [16],uint param_4,
                 long param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  uint *puVar1;
  long lVar2;
  undefined *puVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  ushort uVar13;
  ushort uVar14;
  short sVar15;
  uint uVar16;
  bool bVar17;
  undefined2 uVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  uint *puVar22;
  undefined4 *puVar23;
  int iVar24;
  ulong uVar25;
  short *psVar26;
  short *psVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  uint uVar32;
  undefined1 uVar33;
  undefined4 *puVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  long lVar39;
  ushort *puVar40;
  byte *pbVar41;
  long *plVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  undefined *local_290;
  undefined4 local_288;
  long local_280;
  uint *local_278;
  undefined4 local_270;
  long local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined1 local_218;
  float local_214;
  byte *local_210;
  undefined8 uStack_208;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  uint local_130;
  uint local_12c [9];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  short local_b8 [4];
  ushort local_b0;
  short local_ae;
  ushort local_ac;
  ushort local_aa;
  
  fVar43 = param_3._0_4_;
  if ((*(float *)(param_7 + 4) == 1.0) && (*(float *)(param_7 + 8) == 1.0)) {
    bVar17 = *(float *)(param_7 + 0xc) == 1.0;
  }
  else {
    bVar17 = false;
  }
  local_108 = 0x3f800000;
  local_100 = 0;
  local_f8 = 0x3f800000;
  local_f0 = 0;
  local_c0 = 0;
  local_e8 = 0x3f8000003f800000;
  local_e0 = 0;
  local_c8 = 0x3f80000000000000;
  local_d8 = 0x3f80000000000000;
  local_d0 = 0;
  if (bVar17 == false) {
    FUN_001b0f90(&local_108,(float *)(param_7 + 4),param_7 + 0x10);
  }
  lVar20 = *(long *)(param_7 + 0x30);
  bVar8 = *(byte *)(lVar20 + 0x5c);
  local_130 = 0;
  if (param_4 != 0) {
    lVar2 = param_6 + 0x10;
    fVar48 = fVar43 * 1.5;
    puVar3 = PTR_DAT_02711008 + 0x10;
    fVar47 = (1.0 / (param_2 * 4.0 + fVar43)) * DAT_01d4c054;
    uVar21 = 0;
    do {
      lVar39 = param_5 + uVar21 * 200;
      local_13c = *(float *)(lVar39 + 0x40);
      local_148 = local_13c - fVar43;
      local_138 = *(float *)(lVar39 + 0x44);
      local_144 = local_138 - fVar43;
      local_134 = *(float *)(lVar39 + 0x48);
      local_140 = local_134 - fVar43;
      fVar49 = *(float *)(lVar39 + 0x30);
      fVar50 = *(float *)(lVar39 + 0x34);
      local_13c = local_13c + fVar43;
      if (fVar49 <= local_148) {
        local_148 = fVar49;
      }
      fVar51 = *(float *)(lVar39 + 0x38);
      local_134 = local_134 + fVar43;
      if (fVar50 <= local_144) {
        local_144 = fVar50;
      }
      local_138 = local_138 + fVar43;
      if (fVar51 <= local_140) {
        local_140 = fVar51;
      }
      if (local_13c <= fVar49) {
        local_13c = fVar49;
      }
      if (local_138 <= fVar50) {
        local_138 = fVar50;
      }
      if (local_134 <= fVar51) {
        local_134 = fVar51;
      }
      pbVar41 = (byte *)(param_6 + uVar21 * 0x28);
      puVar40 = (ushort *)(lVar39 + 0x3e);
      uVar14 = *puVar40;
      if (((uVar14 >> 4 & 1) == 0) || (*(long *)(param_6 + uVar21 * 0x28 + 0x20) != param_7)) {
LAB_001aeca8:
        local_280 = param_5;
        local_268 = lVar20;
        local_214 = fVar43;
        uStack_208 = param_9;
        if ((~*puVar40 & 0x30) == 0) {
          local_288 = 2;
          local_278 = &local_130;
          local_270 = 1;
          local_260 = (undefined4)local_108;
          local_25c = local_108._4_4_;
          local_258 = local_100;
          local_250 = (undefined4)local_f8;
          local_24c = local_f8._4_4_;
          local_248 = (undefined4)local_f0;
          local_244 = local_f0._4_4_;
          local_240 = (undefined4)local_e8;
          local_23c = local_e8._4_4_;
          local_238 = (undefined4)local_e0;
          local_234 = local_e0._4_4_;
          local_230 = (undefined4)local_d8;
          local_22c = local_d8._4_4_;
          local_228 = (undefined4)local_d0;
          local_224 = local_d0._4_4_;
          local_220 = (undefined4)local_c8;
          local_21c = local_c8._4_4_;
          local_218 = local_c0;
          local_210 = (byte *)0x0;
          lVar39 = param_5 + (ulong)local_130 * 200;
          *(undefined8 *)(lVar39 + 0xa0) = 0;
          *(undefined4 *)(lVar39 + 0xa8) = 0;
          *(undefined8 *)(lVar39 + 0xb8) = 0;
          *(undefined8 *)(lVar39 + 0xc0) = 0;
                    /* try { // try from 001aed98 to 001aedb3 has its CatchHandler @ 001af75c */
          local_290 = puVar3;
          FUN_001ace90(lVar20,param_8,&local_108,bVar17,&local_148,&local_290);
        }
        else {
          fVar49 = *(float *)(lVar39 + 0x40);
          fVar50 = *(float *)(lVar39 + 0x30);
          fVar51 = *(float *)(lVar39 + 0x44);
          fVar44 = *(float *)(lVar39 + 0x34);
          fVar45 = *(float *)(lVar39 + 0x48);
          fVar46 = *(float *)(lVar39 + 0x38);
          local_29c = fVar49 + (fVar49 - fVar50) * 3.0;
          local_298 = fVar51 + (fVar51 - fVar44) * 3.0;
          local_2a8 = local_29c - fVar48;
          local_294 = fVar45 + (fVar45 - fVar46) * 3.0;
          local_2a4 = local_298 - fVar48;
          local_2a0 = local_294 - fVar48;
          local_298 = fVar48 + local_298;
          local_294 = fVar48 + local_294;
          if (fVar49 - fVar48 <= local_2a8) {
            local_2a8 = fVar49 - fVar48;
          }
          local_29c = fVar48 + local_29c;
          if (fVar51 - fVar48 <= local_2a4) {
            local_2a4 = fVar51 - fVar48;
          }
          if (fVar45 - fVar48 <= local_2a0) {
            local_2a0 = fVar45 - fVar48;
          }
          if (local_29c <= fVar48 + fVar49) {
            local_29c = fVar48 + fVar49;
          }
          if (local_298 <= fVar48 + fVar51) {
            local_298 = fVar48 + fVar51;
          }
          if (local_294 <= fVar48 + fVar45) {
            local_294 = fVar48 + fVar45;
          }
          if (fVar50 <= local_2a8) {
            local_2a8 = fVar50;
          }
          if (fVar44 <= local_2a4) {
            local_2a4 = fVar44;
          }
          if (fVar46 <= local_2a0) {
            local_2a0 = fVar46;
          }
          if (local_29c <= fVar50) {
            local_29c = fVar50;
          }
          if (local_298 <= fVar44) {
            local_298 = fVar44;
          }
          if (local_294 <= fVar46) {
            local_294 = fVar46;
          }
          *pbVar41 = 0;
          plVar42 = (long *)(param_6 + uVar21 * 0x28 + 0x20);
          *plVar42 = (long)local_12c;
          local_288 = 2;
          local_290 = PTR_DAT_02711008 + 0x10;
          local_278 = &local_130;
          local_21c = local_c8._4_4_;
          local_270 = 1;
          local_260 = (undefined4)local_108;
          local_25c = local_108._4_4_;
          local_258 = local_100;
          local_250 = (undefined4)local_f8;
          local_24c = local_f8._4_4_;
          local_248 = (undefined4)local_f0;
          local_244 = local_f0._4_4_;
          local_240 = (undefined4)local_e8;
          local_23c = local_e8._4_4_;
          local_238 = (undefined4)local_e0;
          local_234 = local_e0._4_4_;
          local_230 = (undefined4)local_d8;
          local_22c = local_d8._4_4_;
          local_228 = (undefined4)local_d0;
          local_218 = local_c0;
          local_224 = local_d0._4_4_;
          lVar39 = param_5 + (ulong)local_130 * 200;
          local_220 = (undefined4)local_c8;
          *(undefined8 *)(lVar39 + 0xa0) = 0;
          *(undefined4 *)(lVar39 + 0xa8) = 0;
          *(undefined8 *)(lVar39 + 0xb8) = 0;
          *(undefined8 *)(lVar39 + 0xc0) = 0;
                    /* try { // try from 001aef98 to 001aefb3 has its CatchHandler @ 001af758 */
          local_210 = pbVar41;
          FUN_001ace90(lVar20,param_8,&local_108,bVar17,&local_2a8,&local_290);
          puVar23 = (undefined4 *)*plVar42;
          if (((bVar8 >> 1 & 1) == 0) || (1 < *pbVar41)) {
            lVar39 = param_6 + uVar21 * 0x28;
            *(float *)(lVar39 + 8) = (local_2a4 + local_298) * 0.5;
            *(float *)(lVar39 + 4) = (local_2a8 + local_29c) * 0.5;
            *(float *)(lVar39 + 0xc) = (local_2a0 + local_294) * 0.5;
            if (local_2a8 <= local_29c) {
              *(undefined1 *)(lVar39 + 1) =
                   (char)(int)(fVar47 * (local_29c - local_2a8) * 0.5 + 1.0);
              *(undefined1 *)(lVar39 + 2) =
                   (char)(int)(fVar47 * (local_298 - local_2a4) * 0.5 + 1.0);
              uVar33 = (undefined1)(int)(fVar47 * (local_294 - local_2a0) * 0.5 + 1.0);
            }
            else {
              uVar33 = 0;
              *(undefined1 *)(lVar39 + 1) = 0;
              *(undefined1 *)(lVar39 + 2) = 0;
            }
            *(undefined1 *)(lVar39 + 3) = uVar33;
            bVar9 = *pbVar41;
            uVar28 = (ulong)bVar9;
            psVar27 = (short *)(lVar39 + 0x10);
            if ((bVar8 >> 1 & 1) == 0) {
              if (3 < bVar9) goto LAB_001af5c0;
              if (bVar9 != 0) {
                if (uVar28 - 1 < 7) {
                  lVar39 = 0;
                }
                else {
                  lVar39 = 0;
                  puVar34 = puVar23 + 4;
                  psVar26 = psVar27;
                  do {
                    *(undefined4 *)psVar26 = puVar34[-4];
                    *(undefined4 *)(psVar26 + 2) = puVar34[-3];
                    *(undefined4 *)(psVar26 + 4) = puVar34[-2];
                    *(undefined4 *)(psVar26 + 6) = puVar34[-1];
                    *(undefined4 *)(psVar26 + 8) = *puVar34;
                    *(undefined4 *)(psVar26 + 10) = puVar34[1];
                    *(undefined4 *)(psVar26 + 0xc) = puVar34[2];
                    psVar27 = psVar26 + 0x10;
                    lVar39 = lVar39 + -8;
                    *(undefined4 *)(psVar26 + 0xe) = puVar34[3];
                    puVar34 = puVar34 + 8;
                    psVar26 = psVar27;
                  } while ((uVar28 & 7) - uVar28 != lVar39);
                  lVar39 = -lVar39;
                }
                if ((bVar9 & 7) != 0) {
                  lVar30 = -(uVar28 & 7);
                  puVar23 = puVar23 + lVar39;
                  do {
                    lVar30 = lVar30 + 1;
                    *(undefined4 *)psVar27 = *puVar23;
                    puVar23 = puVar23 + 1;
                    psVar27 = psVar27 + 2;
                  } while (lVar30 != 0);
                }
              }
            }
            else {
              if (6 < bVar9) {
                if (bVar9 < 10) {
                  uVar31 = uVar28 & 3;
                  if (uVar28 - 1 < 3) {
                    uVar19 = 0xffffffff;
                    lVar39 = 0;
                    uVar36 = 0;
                    uVar38 = 0xffffffff;
                  }
                  else {
                    uVar19 = 0xffffffff;
                    lVar39 = 0;
                    uVar36 = 0;
                    uVar38 = 0xffffffff;
                    puVar22 = puVar23 + 2;
                    do {
                      uVar32 = puVar22[-2];
                      uVar7 = puVar22[-1];
                      uVar35 = (uint)lVar39;
                      uVar37 = uVar32;
                      uVar5 = uVar35;
                      if (uVar19 <= uVar32) {
                        uVar37 = uVar19;
                        uVar5 = uVar38;
                      }
                      if (uVar32 <= uVar36) {
                        uVar32 = uVar36;
                      }
                      if (uVar7 < uVar37) {
                        uVar5 = uVar35 + 1;
                        uVar37 = uVar7;
                      }
                      if (uVar7 <= uVar32) {
                        uVar7 = uVar32;
                      }
                      uVar6 = *puVar22;
                      uVar36 = puVar22[1];
                      uVar32 = uVar6;
                      uVar16 = uVar35 + 2;
                      if (uVar37 <= uVar6) {
                        uVar32 = uVar37;
                        uVar16 = uVar5;
                      }
                      if (uVar6 <= uVar7) {
                        uVar6 = uVar7;
                      }
                      uVar19 = uVar36;
                      uVar38 = uVar35 + 3;
                      if (uVar32 <= uVar36) {
                        uVar19 = uVar32;
                        uVar38 = uVar16;
                      }
                      lVar39 = lVar39 + 4;
                      if (uVar36 <= uVar6) {
                        uVar36 = uVar6;
                      }
                      puVar22 = puVar22 + 4;
                    } while (uVar28 - uVar31 != lVar39);
                  }
                  if ((bVar9 & 3) != 0) {
                    lVar30 = -uVar31;
                    uVar32 = uVar19;
                    uVar37 = uVar36;
                    do {
                      uVar36 = puVar23[lVar39];
                      uVar19 = uVar36;
                      uVar7 = (uint)lVar39;
                      if (uVar32 <= uVar36) {
                        uVar19 = uVar32;
                        uVar7 = uVar38;
                      }
                      uVar38 = uVar7;
                      if (uVar36 <= uVar37) {
                        uVar36 = uVar37;
                      }
                      lVar39 = lVar39 + 1;
                      lVar30 = lVar30 + 1;
                      uVar32 = uVar19;
                      uVar37 = uVar36;
                    } while (lVar30 != 0);
                  }
                  if (uVar36 - uVar19 < 0x400) {
                    sVar15 = (short)uVar19;
                    if (uVar28 - 1 < 3) {
                      lVar39 = 0;
                    }
                    else {
                      lVar39 = 0;
                      puVar34 = puVar23 + 2;
                      psVar26 = local_b8 + 2;
                      do {
                        psVar26[-2] = (short)puVar34[-2] - sVar15;
                        psVar26[-1] = (short)puVar34[-1] - sVar15;
                        *psVar26 = (short)*puVar34 - sVar15;
                        lVar39 = lVar39 + 4;
                        psVar26[1] = (short)puVar34[1] - sVar15;
                        puVar34 = puVar34 + 4;
                        psVar26 = psVar26 + 4;
                      } while (uVar28 - (uVar28 & 3) != lVar39);
                    }
                    if ((bVar9 & 3) != 0) {
                      lVar30 = -uVar31;
                      puVar23 = puVar23 + lVar39;
                      psVar26 = local_b8 + lVar39;
                      do {
                        *psVar26 = (short)*puVar23 - sVar15;
                        lVar30 = lVar30 + 1;
                        puVar23 = puVar23 + 1;
                        psVar26 = psVar26 + 1;
                      } while (lVar30 != 0);
                    }
                    local_b8[uVar38] = local_b8[bVar9 - 1];
                    *psVar27 = sVar15;
                    lVar39 = param_6 + uVar21 * 0x28;
                    *(ushort *)(lVar39 + 0x12) = (ushort)local_b8[1] >> 4 | local_b8[0] << 6;
                    *(ushort *)(lVar39 + 0x14) =
                         local_b8[2] << 2 | local_b8[1] << 0xc | (ushort)local_b8[3] >> 8;
                    *(ushort *)(lVar39 + 0x16) = local_b0 >> 2 | local_b8[3] << 8;
                    *(ushort *)(lVar39 + 0x18) = local_ae << 4 | local_b0 << 0xe | local_ac >> 6;
                    *(ushort *)(lVar39 + 0x1a) = local_aa | local_ac << 10;
                    goto LAB_001af6fc;
                  }
                }
LAB_001af5c0:
                *puVar40 = *puVar40 & 0xffcf;
                goto LAB_001af710;
              }
              if (bVar9 != 0) {
                if (uVar28 - 1 < 7) {
                  lVar39 = 0;
                }
                else {
                  lVar39 = 0;
                  puVar34 = puVar23 + 4;
                  psVar26 = psVar27;
                  do {
                    *psVar26 = (short)puVar34[-4];
                    psVar26[1] = (short)puVar34[-3];
                    psVar26[2] = (short)puVar34[-2];
                    psVar26[3] = (short)puVar34[-1];
                    psVar26[4] = (short)*puVar34;
                    psVar26[5] = (short)puVar34[1];
                    psVar26[6] = (short)puVar34[2];
                    psVar27 = psVar26 + 8;
                    lVar39 = lVar39 + -8;
                    psVar26[7] = (short)puVar34[3];
                    puVar34 = puVar34 + 8;
                    psVar26 = psVar27;
                  } while ((uVar28 & 7) - uVar28 != lVar39);
                  lVar39 = -lVar39;
                }
                if ((bVar9 & 7) != 0) {
                  lVar30 = -(uVar28 & 7);
                  puVar23 = puVar23 + lVar39;
                  do {
                    lVar30 = lVar30 + 1;
                    *psVar27 = (short)*puVar23;
                    puVar23 = puVar23 + 1;
                    psVar27 = psVar27 + 1;
                  } while (lVar30 != 0);
                }
              }
            }
          }
          else {
            if (*pbVar41 == 0) {
              uVar18 = 0;
            }
            else {
              uVar18 = (undefined2)*puVar23;
            }
            *(undefined2 *)(param_6 + uVar21 * 0x28 + 2) = uVar18;
            lVar39 = param_6 + uVar21 * 0x28;
            *(float *)(lVar39 + 4) = local_2a8;
            *(float *)(lVar39 + 8) = local_2a4;
            *(float *)(lVar39 + 0xc) = local_2a0;
            *(float *)(lVar39 + 0x10) = local_29c;
            *(float *)(lVar39 + 0x14) = local_298;
            *(float *)(lVar39 + 0x18) = local_294;
          }
LAB_001af6fc:
          *puVar40 = *puVar40 | 0x30;
          *plVar42 = param_7;
        }
      }
      else {
        bVar9 = *pbVar41;
        uVar28 = (ulong)bVar9;
        if (((bVar8 >> 1 & 1) == 0) || (1 < bVar9)) {
          lVar30 = param_6 + uVar21 * 0x28;
          bVar10 = *(byte *)(lVar30 + 1);
          bVar11 = *(byte *)(lVar30 + 2);
          bVar12 = *(byte *)(lVar30 + 3);
          fVar45 = local_144 - *(float *)(lVar30 + 8);
          fVar51 = local_140 - *(float *)(lVar30 + 0xc);
          fVar44 = local_134 - *(float *)(lVar30 + 0xc);
          fVar50 = local_13c - *(float *)(lVar30 + 4);
          fVar46 = local_138 - *(float *)(lVar30 + 8);
          fVar49 = fabsf(local_148 - *(float *)(lVar30 + 4));
          fVar50 = fabsf(fVar50);
          if (fVar49 <= fVar50) {
            fVar49 = fVar50;
          }
          fVar45 = fabsf(fVar45);
          fVar46 = fabsf(fVar46);
          fVar50 = fabsf(fVar51);
          fVar51 = fabsf(fVar44);
          if ((uint)(int)(fVar47 * fVar49) < (uint)bVar10) {
            if (fVar50 <= fVar51) {
              fVar50 = fVar51;
            }
            if (fVar45 <= fVar46) {
              fVar45 = fVar46;
            }
            if ((uint)(int)(fVar47 * fVar45) < (uint)bVar11 &&
                (uint)(int)(fVar47 * fVar50) < (uint)bVar12) {
              puVar22 = (uint *)(lVar30 + 0x10);
              if ((bVar8 >> 1 & 1) != 0) {
                if (bVar9 < 7) {
                  if (uVar28 != 0) {
                    uVar25 = uVar28 * 2 - 2;
                    uVar31 = (uVar25 >> 1) + 1;
                    uVar29 = uVar31 & 7;
                    if (uVar25 < 0xe) {
                      uVar25 = 0;
                    }
                    else {
                      lVar39 = 0;
                      uVar25 = 0;
                      do {
                        puVar4 = (ushort *)(lVar2 + uVar21 * 0x28 + uVar25 * 2);
                        iVar24 = (int)uVar25;
                        local_12c[uVar25 & 0xffffffff] = (uint)*puVar4;
                        local_12c[iVar24 + 1] = (uint)puVar4[1];
                        local_12c[iVar24 + 2] = (uint)puVar4[2];
                        lVar39 = lVar39 + -0x10;
                        local_12c[iVar24 + 3] = (uint)puVar4[3];
                        local_12c[iVar24 + 4] = (uint)puVar4[4];
                        local_12c[iVar24 + 5] = (uint)puVar4[5];
                        local_12c[iVar24 + 6] = (uint)puVar4[6];
                        uVar25 = uVar25 + 8;
                        local_12c[iVar24 + 7] = (uint)puVar4[7];
                      } while (uVar31 - uVar29 != uVar25);
                      puVar22 = (uint *)((lVar2 + uVar21 * 0x28) - lVar39);
                    }
                    if (uVar29 != 0) {
                      lVar39 = -uVar29;
                      do {
                        lVar39 = lVar39 + 1;
                        local_12c[uVar25 & 0xffffffff] = (uint)(ushort)*puVar22;
                        uVar25 = (ulong)((int)uVar25 + 1);
                        puVar22 = (uint *)((long)puVar22 + 2);
                      } while (lVar39 != 0);
                    }
                  }
                  goto LAB_001aebe4;
                }
                if (9 < bVar9) goto LAB_001aeca8;
                uVar14 = *(ushort *)puVar22;
                lVar39 = param_6 + uVar21 * 0x28;
                local_12c[0] = (uint)uVar14;
                local_12c[1] = (uint)uVar14 + (uint)(*(ushort *)(lVar39 + 0x12) >> 6);
                uVar13 = *(ushort *)(lVar39 + 0x14);
                uVar19 = (uint)uVar14;
                local_12c[2] = ((uint)(uVar13 >> 0xc) | (*(ushort *)(lVar39 + 0x12) & 0x3f) << 4) +
                               uVar19;
                local_12c[3] = (uVar13 >> 2 & 0x3ff) + uVar19;
                local_12c[4] = ((uint)(byte)(*(ushort *)(lVar39 + 0x16) >> 8) | (uVar13 & 3) << 8) +
                               uVar19;
                uVar13 = *(ushort *)(lVar39 + 0x18);
                local_12c[5] = ((uint)(uVar13 >> 0xe) | (*(ushort *)(lVar39 + 0x16) & 0xff) << 2) +
                               uVar19;
                uVar19 = (uint)uVar14;
                local_12c[6] = (uVar13 >> 4 & 0x3ff) + uVar19;
                local_12c[7] = ((uint)(*(ushort *)(lVar39 + 0x1a) >> 10) | (uVar13 & 0xf) << 6) +
                               uVar19;
                local_12c[8] = (*(ushort *)(lVar39 + 0x1a) & 0x3ff) + uVar19;
                *puVar40 = *puVar40 | 0x30;
                bVar9 = *(byte *)(lVar20 + 0x5c);
                lVar39 = *(long *)(lVar20 + 0x28);
                lVar30 = *(long *)(lVar20 + 0x30);
                goto joined_r0x001ae9d0;
              }
              if (bVar9 < 4) {
                if (uVar28 != 0) {
                  uVar25 = uVar28 * 4 - 4;
                  uVar31 = (uVar25 >> 2) + 1;
                  uVar29 = uVar31 & 7;
                  if (uVar25 < 0x1c) {
                    uVar25 = 0;
                  }
                  else {
                    lVar39 = 0;
                    uVar25 = 0;
                    do {
                      puVar22 = (uint *)(lVar2 + uVar21 * 0x28 + uVar25 * 4);
                      iVar24 = (int)uVar25;
                      local_12c[uVar25 & 0xffffffff] = *puVar22;
                      local_12c[iVar24 + 1] = puVar22[1];
                      local_12c[iVar24 + 2] = puVar22[2];
                      lVar39 = lVar39 + -0x20;
                      local_12c[iVar24 + 3] = puVar22[3];
                      local_12c[iVar24 + 4] = puVar22[4];
                      local_12c[iVar24 + 5] = puVar22[5];
                      uVar19 = puVar22[7];
                      local_12c[iVar24 + 6] = puVar22[6];
                      uVar25 = uVar25 + 8;
                      local_12c[iVar24 + 7] = uVar19;
                    } while (uVar31 - uVar29 != uVar25);
                    puVar22 = (uint *)((lVar2 + uVar21 * 0x28) - lVar39);
                  }
                  if (uVar29 != 0) {
                    lVar39 = -uVar29;
                    do {
                      lVar39 = lVar39 + 1;
                      local_12c[uVar25 & 0xffffffff] = *puVar22;
                      uVar25 = (ulong)((int)uVar25 + 1);
                      puVar22 = puVar22 + 1;
                    } while (lVar39 != 0);
                  }
                }
LAB_001aebe4:
                uVar14 = *puVar40;
                goto LAB_001af0d0;
              }
            }
          }
          goto LAB_001aeca8;
        }
        lVar30 = param_6 + uVar21 * 0x28;
        local_12c[0] = (uint)*(ushort *)(lVar30 + 2);
        fVar49 = (float)NEON_fminnm(local_148 - *(float *)(lVar30 + 4),0);
        fVar46 = (float)NEON_fminnm(local_144 - *(float *)(lVar30 + 8),0);
        fVar50 = (float)NEON_fminnm(local_140 - *(float *)(lVar30 + 0xc),0);
        fVar45 = (float)NEON_fminnm(*(float *)(lVar30 + 0x10) - local_13c,0);
        fVar44 = (float)NEON_fminnm(*(float *)(lVar30 + 0x14) - local_138,0);
        fVar51 = (float)NEON_fminnm(*(float *)(lVar30 + 0x18) - local_134,0);
        if (fVar49 + fVar46 + fVar50 + fVar45 + fVar44 + fVar51 != 0.0) goto LAB_001aeca8;
LAB_001af0d0:
        *puVar40 = uVar14 | 0x30;
        if (bVar9 != 0) {
          bVar9 = *(byte *)(lVar20 + 0x5c);
          lVar39 = *(long *)(lVar20 + 0x28);
          lVar30 = *(long *)(lVar20 + 0x30);
joined_r0x001ae9d0:
          if ((bVar9 >> 1 & 1) == 0) {
            puVar22 = local_12c;
            plVar42 = &local_280;
            do {
              puVar1 = (uint *)(lVar30 + (ulong)(*puVar22 * 3) * 4);
              puVar23 = (undefined4 *)(lVar39 + (ulong)*puVar1 * 0xc);
              *(undefined4 *)(plVar42 + -2) = *puVar23;
              *(undefined4 *)((long)plVar42 + -0xc) = puVar23[1];
              *(undefined4 *)(plVar42 + -1) = puVar23[2];
              puVar23 = (undefined4 *)(lVar39 + (ulong)puVar1[1] * 0xc);
              *(undefined4 *)((long)plVar42 + -4) = *puVar23;
              *(undefined4 *)plVar42 = puVar23[1];
              *(undefined4 *)((long)plVar42 + 4) = puVar23[2];
              puVar23 = (undefined4 *)(lVar39 + (ulong)puVar1[2] * 0xc);
              *(undefined4 *)(plVar42 + 1) = *puVar23;
              *(undefined4 *)((long)plVar42 + 0xc) = puVar23[1];
              *(undefined4 *)(plVar42 + 2) = puVar23[2];
              uVar28 = uVar28 - 1;
              plVar42 = (long *)((long)plVar42 + 0x24);
              puVar22 = puVar22 + 1;
            } while (uVar28 != 0);
          }
          else {
            puVar22 = local_12c;
            plVar42 = &local_280;
            do {
              puVar40 = (ushort *)(lVar30 + (ulong)(*puVar22 * 3) * 2);
              puVar23 = (undefined4 *)(lVar39 + (ulong)*puVar40 * 0xc);
              *(undefined4 *)(plVar42 + -2) = *puVar23;
              *(undefined4 *)((long)plVar42 + -0xc) = puVar23[1];
              *(undefined4 *)(plVar42 + -1) = puVar23[2];
              puVar23 = (undefined4 *)(lVar39 + (ulong)puVar40[1] * 0xc);
              *(undefined4 *)((long)plVar42 + -4) = *puVar23;
              *(undefined4 *)plVar42 = puVar23[1];
              *(undefined4 *)((long)plVar42 + 4) = puVar23[2];
              puVar23 = (undefined4 *)(lVar39 + (ulong)puVar40[2] * 0xc);
              *(undefined4 *)(plVar42 + 1) = *puVar23;
              *(undefined4 *)((long)plVar42 + 0xc) = puVar23[1];
              *(undefined4 *)(plVar42 + 2) = puVar23[2];
              uVar28 = uVar28 - 1;
              plVar42 = (long *)((long)plVar42 + 0x24);
              puVar22 = puVar22 + 1;
            } while (uVar28 != 0);
          }
          lVar39 = param_5 + (ulong)local_130 * 200;
          *(undefined8 *)(lVar39 + 0xb8) = 0;
          *(undefined8 *)(lVar39 + 0xc0) = 0;
          *(undefined8 *)(lVar39 + 0xa0) = 0;
          *(undefined4 *)(lVar39 + 0xa8) = 0;
          FUN_001ad130(param_3._0_8_);
        }
      }
LAB_001af710:
      local_130 = local_130 + 1;
      uVar21 = (ulong)local_130;
    } while (local_130 < param_4);
  }
  return;
}


