/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ad480; name: FUN_005ad480
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_005ad480(float param_1,undefined8 param_2,undefined8 param_3,float param_4,long param_5,
                uint param_6,uint param_7,void *param_8,undefined8 *param_9,long *param_10,
                undefined8 *param_11,float *param_12,float *param_13)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  ulong *puVar22;
  ulong *puVar23;
  undefined8 uVar24;
  char *pcVar25;
  ulong *puVar26;
  int iVar27;
  ulong uVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  undefined8 *puVar36;
  int iVar37;
  int iVar38;
  ulong uVar39;
  undefined4 *puVar40;
  float fVar41;
  float fVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  float fVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  float fVar52;
  float fVar53;
  double dVar54;
  double dVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  double __x;
  double dVar67;
  double dVar68;
  double dVar69;
  double dVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float local_23c;
  ulong local_1a8;
  double local_198;
  double local_190;
  double local_188;
  ulong *local_160;
  float local_154 [3];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  long *local_b8;
  long *local_b0 [2];
  
  local_fc = 0;
  local_104 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_d4 = 0;
  local_dc = 0;
  local_cc = 0x3f800000;
  local_e0 = 0x3f800000;
  local_f4 = 0x3f800000;
  local_108 = 0x3f800000;
  if (((float)param_2 != 0.0) || (puVar40 = (undefined4 *)0x0, (float)param_3 != 1.0)) {
    if ((float)param_2 != 0.0) {
      FUN_0050fbe0(param_2,&local_148,1);
      FUN_00515cb0(&local_108,&local_108,&local_148);
    }
    if ((float)param_3 != 1.0) {
      FUN_005101e0(param_3,param_3,param_3,&local_148,0);
      FUN_00515cb0(&local_108,&local_108,&local_148);
    }
    puVar40 = &local_108;
  }
  uVar4 = param_6;
  if (param_7 <= param_6) {
    uVar4 = param_7;
  }
  fVar41 = logf((float)uVar4);
  iVar14 = (int)(fVar41 / DAT_01d4c4dc) + -1;
  uVar21 = 0;
  if (iVar14 != 1) {
    uVar21 = 4;
  }
  iVar14 = (**(code **)(**(long **)(param_5 + 0x20) + 0x1e0))
                     (*(long **)(param_5 + 0x20),param_6,param_7,iVar14,0,0x1c,0,0,local_b0,uVar21);
  if (iVar14 < 0) {
    if (*(int *)PTR_DAT_02713970 == 0) {
      return iVar14;
    }
    if (*(int *)PTR_DAT_02713980 == 0) {
      return iVar14;
    }
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp(%d) : PPFX ERROR: ",0x1bc5);
    uVar24 = FUN_00546ea0(iVar14);
    pcVar25 = 
    "CDepthOfField::CreateScatterBokehOpticsTexture(): m_pGPUDevice->CreateTexture(&pGPUScatterBokehOpticsTexture) failed (0x%x: %s).\n"
    ;
LAB_005adf74:
    FUN_00517ae0(pcVar25,iVar14,uVar24);
    return iVar14;
  }
  dVar43 = ldexp(1.0,3);
  uVar4 = (int)dVar43;
  if (param_7 <= (uint)(int)dVar43) {
    uVar4 = param_7;
  }
  iVar14 = (**(code **)(**(long **)(param_5 + 0x20) + 0x1e0))
                     (*(long **)(param_5 + 0x20),param_6,uVar4,1,0,0x1c,0,0,&local_b8,uVar21);
  if (iVar14 < 0) {
    if (*(int *)PTR_DAT_02713970 == 0) {
      return iVar14;
    }
    if (*(int *)PTR_DAT_02713980 == 0) {
      return iVar14;
    }
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp(%d) : PPFX ERROR: ",0x1be3);
    uVar24 = FUN_00546ea0(iVar14);
    pcVar25 = 
    "CDepthOfField::CreateScatterBokehOpticsTexture(): m_pGPUDevice->CreateTexture(&pGPUScatterBokehOpticsMinTexture) failed (0x%x: %s).\n"
    ;
    goto LAB_005adf74;
  }
  iVar15 = FUN_00546b90(0x1c);
  iVar14 = iVar15 * param_6;
  uVar32 = (ulong)(iVar14 * param_7);
  puVar22 = (ulong *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,uVar32 + 8,
                                  "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0x1c11,0);
  puVar23 = puVar22;
  if (puVar22 != (ulong *)0x0) {
    puVar23 = puVar22 + 1;
    *puVar22 = uVar32;
  }
  memcpy(puVar23,param_8,uVar32);
  dVar44 = (double)param_7;
  dVar45 = 1.0 / dVar44;
  dVar64 = 0.0;
  dVar43 = 0.0;
  dVar63 = 0.0;
  local_198 = 0.0;
  local_190 = 0.0;
  local_188 = 0.0;
  if (param_6 != 0) {
    dVar49 = (double)param_1;
    dVar64 = 0.0;
    dVar63 = 0.0;
    dVar43 = 0.0;
    local_190 = 0.0;
    local_188 = 0.0;
    local_198 = 0.0;
    dVar46 = 1.0 / dVar49;
    uVar32 = 0;
    do {
      if (param_7 != 0) {
        uVar17 = iVar15 * (int)uVar32;
        uVar16 = 0;
        uVar28 = 0;
        uVar31 = (ulong)param_7;
        do {
          dVar67 = DAT_01cd5410;
          uVar18 = *(uint *)((long)puVar23 + uVar28 + uVar17);
          dVar66 = (double)(uVar18 >> 0x10 & 0xff) * DAT_01cd5410;
          dVar68 = (double)(uVar18 >> 8 & 0xff) * DAT_01cd5410;
          dVar65 = (double)(uVar18 & 0xff);
          if (0.0 < dVar66) {
            dVar69 = pow(dVar66,dVar49);
            if (0.0 < dVar68) goto LAB_005ad850;
LAB_005ad794:
            dVar70 = dVar68;
            if (dVar65 * dVar67 <= 0.0) goto LAB_005ad7a0;
LAB_005ad870:
            __x = pow(dVar65 * dVar67,dVar49);
            if (puVar40 == (undefined4 *)0x0) goto LAB_005ad888;
LAB_005ad7a4:
            local_148 = CONCAT44((float)dVar70,(float)dVar69);
            local_140 = CONCAT44(local_140._4_4_,(float)__x);
            FUN_00510120(&local_148,&local_148,puVar40);
            fVar41 = (float)local_148;
            if (1.0 < (float)local_148) {
              fVar41 = 1.0;
            }
            fVar42 = 0.0;
            if (0.0 <= (float)local_148) {
              fVar42 = fVar41;
            }
            dVar69 = (double)fVar42;
            fVar41 = local_148._4_4_;
            if (1.0 < local_148._4_4_) {
              fVar41 = 1.0;
            }
            fVar42 = 0.0;
            if (0.0 <= local_148._4_4_) {
              fVar42 = fVar41;
            }
            dVar70 = (double)fVar42;
            fVar41 = (float)local_140;
            if (1.0 < (float)local_140) {
              fVar41 = 1.0;
            }
            fVar42 = 0.0;
            if (0.0 <= (float)local_140) {
              fVar42 = fVar41;
            }
            __x = (double)fVar42;
            bVar13 = true;
          }
          else {
            dVar69 = dVar66;
            if (dVar68 <= 0.0) goto LAB_005ad794;
LAB_005ad850:
            dVar70 = pow(dVar68,dVar49);
            if (0.0 < dVar65 * dVar67) goto LAB_005ad870;
LAB_005ad7a0:
            __x = dVar65 * dVar67;
            if (puVar40 != (undefined4 *)0x0) goto LAB_005ad7a4;
LAB_005ad888:
            bVar13 = false;
          }
          if (param_4 != 1.0) {
            dVar54 = dVar69 * DAT_01cd5178 + dVar70 * DAT_01cd4f88 + __x * DAT_01cd5378;
            if (0.0 < dVar54) {
              dVar47 = 1.0 / dVar54;
              dVar54 = pow(dVar54,(double)param_4);
              dVar69 = dVar69 * dVar47 * dVar54;
              dVar70 = dVar70 * dVar47 * dVar54;
              __x = __x * dVar47 * dVar54;
            }
            bVar13 = true;
          }
          dVar65 = dVar65 * dVar67;
          dVar47 = 1.0 - (double)uVar16 / (double)(param_7 - 1);
          dVar47 = dVar47 * dVar47;
          dVar50 = dVar47 * DAT_01cd5000 + DAT_01cd5220;
          dVar54 = dVar50;
          if (1.0 < dVar50) {
            dVar54 = 1.0;
          }
          dVar51 = 0.0;
          if (0.0 <= dVar50) {
            dVar51 = dVar54;
          }
          dVar54 = dVar69;
          if (dVar69 == dVar70 || dVar70 > dVar69) {
            dVar54 = dVar70;
          }
          dVar50 = dVar69;
          if (dVar70 <= dVar69) {
            dVar50 = dVar70;
          }
          if (dVar54 <= __x) {
            dVar54 = __x;
          }
          dVar55 = 0.0;
          if (0.0 < dVar54) {
            if (__x <= dVar50) {
              dVar50 = __x;
            }
            dVar55 = 1.0 - dVar50 / dVar54;
          }
          dVar54 = dVar69 * DAT_01cd5178 + dVar70 * DAT_01cd4f88 + __x * DAT_01cd5378;
          if (dVar54 <= 0.0) {
            if (bVar13) goto joined_r0x005ad9e0;
          }
          else {
            dVar50 = dVar54 + (0.5 - dVar54) * dVar51 * dVar47 * dVar55 * 0.25;
            dVar47 = dVar54;
            if (dVar54 <= dVar50) {
              dVar47 = dVar50;
            }
            dVar47 = dVar47 / dVar54;
            dVar69 = dVar69 * dVar47;
            dVar70 = dVar70 * dVar47;
            __x = __x * dVar47;
joined_r0x005ad9e0:
            if (dVar69 <= 0.0) {
              if (dVar70 <= 0.0) goto LAB_005ad9ec;
LAB_005ada4c:
              dVar68 = pow(dVar70,dVar46);
              if (0.0 < __x) goto LAB_005ada6c;
LAB_005ad9f8:
              fVar41 = (float)(uVar18 >> 0x18);
              if (dVar66 < 1.0) goto LAB_005ada04;
LAB_005ada8c:
              uVar18 = 0xff0000;
joined_r0x005adad4:
              dVar66 = (double)fVar41;
              if (1.0 <= dVar68) goto LAB_005adad8;
LAB_005ada9c:
              if (dVar68 <= 0.0) {
                uVar19 = 0;
                goto joined_r0x005adae4;
              }
              uVar19 = (int)(dVar68 * DAT_01cd53b0) << 8;
              dVar66 = dVar66 * dVar67;
              if (1.0 <= dVar65) goto LAB_005adb1c;
LAB_005adae8:
              if (dVar65 <= 0.0) {
                uVar20 = 0;
                goto joined_r0x005adb50;
              }
              uVar20 = (uint)(dVar65 * DAT_01cd53b0);
              if (dVar66 < 1.0) goto LAB_005adb28;
LAB_005adb54:
              uVar29 = 0xff000000;
            }
            else {
              dVar66 = pow(dVar69,dVar46);
              if (0.0 < dVar70) goto LAB_005ada4c;
LAB_005ad9ec:
              if (__x <= 0.0) goto LAB_005ad9f8;
LAB_005ada6c:
              dVar65 = pow(__x,dVar46);
              fVar41 = (float)(uVar18 >> 0x18);
              if (1.0 <= dVar66) goto LAB_005ada8c;
LAB_005ada04:
              if (dVar66 <= 0.0) {
                uVar18 = 0;
                goto joined_r0x005adad4;
              }
              uVar18 = (int)(dVar66 * DAT_01cd53b0) << 0x10;
              dVar66 = (double)fVar41;
              if (dVar68 < 1.0) goto LAB_005ada9c;
LAB_005adad8:
              uVar19 = 0xff00;
joined_r0x005adae4:
              dVar66 = dVar66 * dVar67;
              if (dVar65 < 1.0) goto LAB_005adae8;
LAB_005adb1c:
              uVar20 = 0xff;
joined_r0x005adb50:
              if (1.0 <= dVar66) goto LAB_005adb54;
LAB_005adb28:
              if (dVar66 <= 0.0) {
                uVar29 = 0;
              }
              else {
                uVar29 = (int)(dVar66 * DAT_01cd53b0) << 0x18;
              }
            }
            *(uint *)((long)puVar23 + uVar28 + uVar17) = uVar19 | uVar18 | uVar20 | uVar29;
          }
          if (dVar64 <= dVar69) {
            dVar64 = dVar69;
          }
          if (dVar43 <= dVar70) {
            dVar43 = dVar70;
          }
          if (dVar63 <= __x) {
            dVar63 = __x;
          }
          if (uVar32 == param_6 >> 1) {
            dVar65 = ((double)(uVar31 & 0xffffffff) + -0.5) / dVar44;
            dVar65 = (dVar65 + dVar65) * DAT_01cd51f0;
            local_198 = local_198 + dVar45 * dVar65 * dVar69;
            local_190 = local_190 + dVar45 * dVar65 * dVar70;
            local_188 = local_188 + dVar45 * dVar65 * __x;
          }
          uVar28 = (ulong)(uint)((int)uVar28 + iVar14);
          uVar31 = uVar31 - 1;
          uVar16 = uVar16 + 1;
        } while (uVar31 != 0);
      }
      uVar32 = uVar32 + 1;
    } while (uVar32 != param_6);
  }
  dVar49 = DAT_01cd5410;
  dVar46 = DAT_01cd51f0;
  local_198 = local_198 * DAT_01cd5180;
  local_190 = local_190 * DAT_01cd5180;
  local_188 = local_188 * DAT_01cd5180;
  dVar65 = local_198;
  if (local_190 <= local_198) {
    dVar65 = local_190;
  }
  if (local_188 <= dVar65) {
    dVar65 = local_188;
  }
  fVar41 = (float)dVar65;
  local_154[1] = (fVar41 / (float)local_190) * (float)dVar43;
  local_154[2] = (fVar41 / (float)local_198) * (float)dVar64;
  local_154[0] = (fVar41 / (float)local_188) * (float)dVar63;
  pfVar7 = local_154 + 2;
  if (local_154[2] <= local_154[1]) {
    pfVar7 = local_154 + 1;
  }
  if (*pfVar7 <= local_154[0]) {
    pfVar7 = local_154;
  }
  fVar56 = 1.0 / *pfVar7;
  local_c8 = 0;
  local_c0 = 0;
  fVar42 = (fVar41 / (float)local_188) * fVar56;
  dVar43 = 0.0;
  fVar48 = (fVar41 / (float)local_198) * fVar56;
  fVar56 = (fVar41 / (float)local_190) * fVar56;
  dVar64 = 0.0;
  dVar63 = 0.0;
  dVar65 = 0.0;
  if (param_7 != 0) {
    dVar68 = (double)param_1;
    dVar65 = 0.0;
    dVar63 = 0.0;
    dVar64 = 0.0;
    dVar43 = 0.0;
    uVar31 = 0;
    uVar32 = (ulong)param_7;
    do {
      uVar16 = *(uint *)((long)puVar23 + uVar31 + iVar15 * (param_6 >> 1));
      dVar66 = (double)(uVar16 >> 0x10 & 0xff) * dVar49;
      dVar67 = (double)(uVar16 >> 8 & 0xff) * dVar49;
      if (0.0 < dVar66) {
        dVar66 = pow(dVar66,dVar68);
      }
      if (0.0 < dVar67) {
        dVar67 = pow(dVar67,dVar68);
      }
      dVar69 = (double)(uVar16 & 0xff) * dVar49;
      if (0.0 < dVar69) {
        dVar69 = pow((double)(uVar16 & 0xff) * dVar49,dVar68);
      }
      dVar70 = (((double)(uVar32 & 0xffffffff) + -0.5) / dVar44) * dVar46;
      dVar43 = dVar43 + dVar45 * dVar70 * dVar66 * (double)fVar48;
      dVar64 = dVar64 + dVar45 * dVar70 * dVar67 * (double)fVar56;
      dVar63 = dVar63 + dVar45 * dVar70 * dVar69 * (double)fVar42;
      dVar65 = dVar65 + dVar45 * dVar70 * (double)(uVar16 >> 0x18) * dVar49;
      uVar31 = (ulong)(uint)((int)uVar31 + iVar14);
      uVar32 = uVar32 - 1;
    } while (uVar32 != 0);
  }
  puVar36 = (undefined8 *)PTR_PTR_02713988;
  local_23c = (float)dVar43 * DAT_01d4c024;
  fVar52 = (float)dVar64 * DAT_01d4c024;
  fVar57 = (float)dVar63 * DAT_01d4c024;
  fVar41 = local_23c;
  if (local_23c <= fVar52) {
    fVar41 = fVar52;
  }
  if (fVar41 <= fVar57) {
    fVar41 = fVar57;
  }
  if (fVar41 <= 0.0) {
    local_23c = 0.0;
  }
  else {
    local_c8 = CONCAT44(fVar52,local_23c);
    local_c0 = CONCAT44((float)dVar65 * DAT_01d4c024,fVar57);
  }
  uVar16 = (**(code **)(*local_b0[0] + 0x60))();
  uVar32 = (ulong)uVar16;
  puVar22 = (ulong *)FUN_005b9a50(*puVar36,uVar32 * 8 + 8,
                                  "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0x1cfa,0);
  if (puVar22 == (ulong *)0x0) {
    local_160 = (ulong *)0x0;
  }
  else {
    local_160 = puVar22 + 1;
    *puVar22 = uVar32;
  }
  fVar52 = DAT_01d4bf54;
  fVar41 = DAT_01d4bb68;
  local_148 = 0x4000000000000000;
  local_140 = 0x402000003f000000;
  local_138 = 0x3f80000040400000;
  local_130 = 0x3fc0000040600000;
  local_128 = 0x403000003f400000;
  local_120 = 0x401000003e800000;
  local_118 = 0x3fe0000040700000;
  local_110 = 0x3fa0000040500000;
  if (uVar16 != 0) {
    uVar31 = 0;
    do {
      iVar38 = 0;
      if (uVar31 != 0) {
        iVar38 = (int)uVar31 + -1;
      }
      uVar17 = FUN_00546b40(param_6,uVar31 & 0xffffffff);
      uVar18 = FUN_00546b40(param_7,uVar31 & 0xffffffff);
      uVar19 = FUN_00546b40(param_6,iVar38);
      uVar20 = FUN_00546b40(param_7,iVar38);
      uVar28 = (ulong)(uVar17 * iVar15 * uVar18);
      puVar26 = (ulong *)FUN_005b9a50(*puVar36,uVar28 + 8,
                                      "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0x1d1c,
                                      0);
      puVar22 = puVar26;
      if (puVar26 != (ulong *)0x0) {
        puVar22 = puVar26 + 1;
        *puVar26 = uVar28;
      }
      local_160[uVar31] = (ulong)puVar22;
      if (uVar31 == 0) {
        if (param_7 != 0 && param_6 != 0) {
          uVar28 = 0;
          do {
            uVar34 = (ulong)(uint)(iVar14 * (int)uVar28);
            uVar33 = 0;
            uVar35 = (ulong)param_6;
            do {
              uVar17 = *(uint *)((long)puVar23 + uVar33 + uVar34);
              fVar57 = (float)(uVar17 >> 0x10 & 0xff) * fVar41;
              fVar53 = (float)(uVar17 >> 8 & 0xff) * fVar41;
              uVar39 = *local_160;
              if (0.0 < fVar57) {
                fVar57 = powf(fVar57,param_1);
              }
              if (0.0 < fVar53) {
                fVar53 = powf(fVar53,param_1);
              }
              fVar58 = (float)(uVar17 & 0xff) * fVar41;
              if (0.0 < fVar58) {
                fVar58 = powf((float)(uVar17 & 0xff) * fVar41,param_1);
              }
              fVar57 = fVar48 * fVar57;
              fVar53 = fVar56 * fVar53;
              fVar59 = fVar53;
              if (fVar57 <= 0.0) {
LAB_005ae6f8:
                if (fVar53 <= 0.0) goto joined_r0x005ae624;
LAB_005ae614:
                fVar59 = SQRT(fVar53);
                if (!NAN(SQRT(fVar53))) goto joined_r0x005ae624;
                fVar59 = sqrtf(fVar53);
                if (0.0 < fVar42 * fVar58) goto LAB_005ae628;
LAB_005ae718:
                fVar53 = fVar42 * fVar58;
joined_r0x005ae640:
                if (1.0 <= fVar57) goto LAB_005ae72c;
LAB_005ae644:
                if (fVar57 <= 0.0) {
                  uVar18 = 0;
                  goto joined_r0x005ae738;
                }
                uVar18 = (uint)(fVar57 * fVar52);
                fVar57 = (float)(uVar17 >> 0x18);
                if (fVar59 < 1.0) goto LAB_005ae73c;
LAB_005ae6ac:
                uVar17 = 0xff00;
joined_r0x005ae6bc:
                fVar57 = fVar57 * fVar41;
                if (fVar53 < 1.0) goto LAB_005ae6c0;
LAB_005ae760:
                uVar19 = 0xff0000;
joined_r0x005ae6e8:
                if (1.0 <= fVar57) goto LAB_005ae6ec;
LAB_005ae76c:
                if (fVar57 <= 0.0) {
                  uVar20 = 0;
                }
                else {
                  uVar20 = (int)(fVar57 * fVar52) << 0x18;
                }
              }
              else {
                fVar60 = SQRT(fVar57);
                if (NAN(fVar60)) {
                  fVar57 = sqrtf(fVar57);
                  goto LAB_005ae6f8;
                }
                fVar57 = fVar60;
                if (0.0 < fVar53) goto LAB_005ae614;
joined_r0x005ae624:
                if (fVar42 * fVar58 <= 0.0) goto LAB_005ae718;
LAB_005ae628:
                fVar53 = SQRT(fVar42 * fVar58);
                if (!NAN(fVar53)) goto joined_r0x005ae640;
                fVar53 = sqrtf(fVar42 * fVar58);
                if (fVar57 < 1.0) goto LAB_005ae644;
LAB_005ae72c:
                uVar18 = 0xff;
joined_r0x005ae738:
                fVar57 = (float)(uVar17 >> 0x18);
                if (1.0 <= fVar59) goto LAB_005ae6ac;
LAB_005ae73c:
                if (0.0 < fVar59) {
                  uVar17 = (int)(fVar59 * fVar52) << 8;
                  goto joined_r0x005ae6bc;
                }
                uVar17 = 0;
                fVar57 = fVar57 * fVar41;
                if (1.0 <= fVar53) goto LAB_005ae760;
LAB_005ae6c0:
                if (fVar53 <= 0.0) {
                  uVar19 = 0;
                  goto joined_r0x005ae6e8;
                }
                uVar19 = (int)(fVar53 * fVar52) << 0x10;
                if (fVar57 < 1.0) goto LAB_005ae76c;
LAB_005ae6ec:
                uVar20 = 0xff000000;
              }
              *(uint *)(uVar39 + uVar34 + uVar33) = uVar17 | uVar18 | uVar19 | uVar20;
              uVar33 = (ulong)(uint)((int)uVar33 + iVar15);
              uVar35 = uVar35 - 1;
            } while (uVar35 != 0);
            uVar28 = uVar28 + 1;
          } while (uVar28 != param_7);
        }
      }
      else {
        uVar29 = uVar17;
        if (uVar17 <= uVar18) {
          uVar29 = uVar18;
        }
        if (uVar18 != 0) {
          local_1a8 = 0;
          do {
            if (uVar17 != 0) {
              uVar30 = (uint)local_1a8;
              uVar5 = uVar30 << 1 | 1;
              uVar12 = uVar30 << 1;
              if (uVar20 <= uVar18) {
                uVar5 = uVar30;
                uVar12 = uVar30;
              }
              iVar27 = 0;
              uVar35 = 0;
              uVar28 = 0;
              do {
                uVar33 = local_160[uVar31];
                iVar37 = (int)uVar28;
                iVar6 = iVar27;
                if (uVar19 <= uVar17) {
                  iVar6 = iVar37;
                }
                if (uVar17 < uVar19) {
                  iVar37 = iVar27 + 1;
                }
                lVar1 = local_160[iVar38] + (ulong)(uVar12 * uVar19 * iVar15);
                lVar2 = local_160[iVar38] + (ulong)(uVar5 * uVar19 * iVar15);
                uVar8 = *(uint *)(lVar1 + (ulong)(uint)(iVar6 * iVar15));
                uVar9 = *(uint *)(lVar1 + (ulong)(uint)(iVar37 * iVar15));
                uVar10 = *(uint *)(lVar2 + (ulong)(uint)(iVar6 * iVar15));
                fVar53 = (float)(uVar8 >> 0x10 & 0xff) * fVar41;
                fVar58 = (float)(uVar8 >> 8 & 0xff) * fVar41;
                fVar59 = (float)(uVar8 & 0xff) * fVar41;
                fVar60 = (float)(uVar9 >> 0x10 & 0xff) * fVar41;
                fVar62 = (float)(uVar9 >> 8 & 0xff) * fVar41;
                fVar57 = fVar53 * fVar53;
                if (fVar53 <= 0.0) {
                  fVar57 = fVar53;
                }
                fVar53 = fVar58 * fVar58;
                if (fVar58 <= 0.0) {
                  fVar53 = fVar58;
                }
                uVar11 = *(uint *)(lVar2 + (ulong)(uint)(iVar37 * iVar15));
                fVar61 = (float)(uVar9 & 0xff) * fVar41;
                fVar58 = fVar59 * fVar59;
                if (fVar59 <= 0.0) {
                  fVar58 = fVar59;
                }
                fVar59 = fVar60 * fVar60;
                if (fVar60 <= 0.0) {
                  fVar59 = fVar60;
                }
                fVar60 = fVar62 * fVar62;
                if (fVar62 <= 0.0) {
                  fVar60 = fVar62;
                }
                fVar62 = fVar61 * fVar61;
                if (fVar61 <= 0.0) {
                  fVar62 = fVar61;
                }
                fVar71 = (float)(uVar10 >> 0x10 & 0xff) * fVar41;
                fVar72 = (float)(uVar10 >> 8 & 0xff) * fVar41;
                fVar73 = (float)(uVar10 & 0xff) * fVar41;
                fVar74 = (float)(uVar11 >> 0x10 & 0xff) * fVar41;
                fVar61 = fVar71 * fVar71;
                if (fVar71 <= 0.0) {
                  fVar61 = fVar71;
                }
                fVar75 = (float)(uVar11 >> 8 & 0xff) * fVar41;
                fVar71 = fVar72 * fVar72;
                if (fVar72 <= 0.0) {
                  fVar71 = fVar72;
                }
                fVar72 = fVar73 * fVar73;
                if (fVar73 <= 0.0) {
                  fVar72 = fVar73;
                }
                fVar76 = (float)(uVar11 & 0xff) * fVar41;
                fVar73 = fVar74 * fVar74;
                if (fVar74 <= 0.0) {
                  fVar73 = fVar74;
                }
                fVar74 = fVar75 * fVar75;
                if (fVar75 <= 0.0) {
                  fVar74 = fVar75;
                }
                fVar75 = fVar76 * fVar76;
                if (fVar76 <= 0.0) {
                  fVar75 = fVar76;
                }
                fVar59 = (fVar57 + fVar59 + fVar61 + fVar73) * 0.25;
                fVar53 = (fVar53 + fVar60 + fVar71 + fVar74) * 0.25;
                fVar57 = fVar59;
                if (0.0 < fVar59) {
                  fVar60 = SQRT(fVar59);
                  if (NAN(fVar60)) {
                    fVar60 = sqrtf(fVar59);
                  }
                  fVar57 = DAT_01d4bbe0;
                  if (fVar59 != DAT_01d4bbdc) {
                    fVar57 = ABS(fVar60);
                  }
                }
                fVar59 = (fVar58 + fVar62 + fVar72 + fVar75) * 0.25;
                fVar58 = fVar53;
                if (0.0 < fVar53) {
                  fVar60 = SQRT(fVar53);
                  if (NAN(fVar60)) {
                    fVar60 = sqrtf(fVar53);
                  }
                  fVar58 = DAT_01d4bbe0;
                  if (fVar53 != DAT_01d4bbdc) {
                    fVar58 = ABS(fVar60);
                  }
                }
                fVar53 = fVar59;
                if (0.0 < fVar59) {
                  fVar60 = SQRT(fVar59);
                  if (NAN(fVar60)) {
                    fVar60 = sqrtf(fVar59);
                  }
                  fVar53 = DAT_01d4bbe0;
                  if (fVar59 != DAT_01d4bbdc) {
                    fVar53 = ABS(fVar60);
                  }
                }
                fVar59 = 2.0;
                puVar3 = (undefined1 *)(uVar33 + uVar17 * iVar15 * uVar30 + uVar35);
                if (3 < uVar29) {
                  fVar59 = local_154[(uVar28 & 3) * 4 + (local_1a8 & 3) + 3];
                }
                fVar60 = ((float)(uVar8 >> 0x18) * fVar41 + (float)(uVar9 >> 0x18) * fVar41 +
                          (float)(uVar10 >> 0x18) * fVar41 + (float)(uVar11 >> 0x18) * fVar41) *
                         0.25 * fVar52;
                uVar28 = uVar28 + 1;
                uVar35 = (ulong)(uint)((int)uVar35 + iVar15);
                fVar59 = fVar59 * 0.25 + -0.25;
                fVar53 = fVar53 * fVar52 + fVar59;
                fVar58 = fVar59 + fVar58 * fVar52;
                fVar59 = fVar59 + fVar57 * fVar52;
                fVar57 = fVar53;
                if (DAT_01d4c154 < fVar53) {
                  fVar57 = DAT_01d4c154;
                }
                fVar62 = fVar58;
                if (DAT_01d4c154 < fVar58) {
                  fVar62 = DAT_01d4c154;
                }
                fVar61 = 0.0;
                if (0.0 <= fVar53) {
                  fVar61 = fVar57;
                }
                fVar57 = fVar59;
                if (DAT_01d4c154 < fVar59) {
                  fVar57 = DAT_01d4c154;
                }
                fVar53 = 0.0;
                if (0.0 <= fVar58) {
                  fVar53 = fVar62;
                }
                fVar58 = fVar60;
                if (DAT_01d4c154 < fVar60) {
                  fVar58 = DAT_01d4c154;
                }
                fVar62 = 0.0;
                if (0.0 <= fVar59) {
                  fVar62 = fVar57;
                }
                fVar57 = 0.0;
                if (0.0 <= fVar60) {
                  fVar57 = fVar58;
                }
                *puVar3 = (char)(int)fVar61;
                puVar3[1] = (char)(int)fVar53;
                iVar27 = iVar27 + 2;
                puVar3[2] = (char)(int)fVar62;
                puVar3[3] = (char)(int)fVar57;
              } while (uVar17 != uVar28);
            }
            local_1a8 = local_1a8 + 1;
          } while (local_1a8 != uVar18);
        }
      }
      uVar31 = uVar31 + 1;
      puVar36 = (undefined8 *)PTR_PTR_02713988;
    } while (uVar31 != uVar32);
  }
  if (puVar23 != (ulong *)0x0) {
    FUN_005b9b10(*puVar36,puVar23 + -1);
  }
  puVar22 = (ulong *)FUN_005b9a50(*puVar36,(ulong)(iVar14 * uVar4) + 8,
                                  "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0x1dd3,0);
  puVar23 = puVar22;
  if (puVar22 != (ulong *)0x0) {
    puVar23 = puVar22 + 1;
    *puVar22 = (ulong)(iVar14 * uVar4);
  }
  dVar63 = DAT_01cd5410;
  dVar43 = DAT_01cd53b0;
  if (param_6 != 0) {
    uVar17 = 0;
    if (uVar4 != 0) {
      uVar17 = param_7 / uVar4;
    }
    dVar64 = 1.0 / (double)uVar17;
    uVar31 = 0;
    do {
      if (uVar4 != 0) {
        uVar35 = (ulong)(uint)(iVar15 * (int)uVar31);
        uVar28 = 0;
        do {
          iVar38 = (int)uVar28;
          dVar44 = 0.0;
          dVar45 = 0.0;
          dVar49 = 0.0;
          dVar46 = 0.0;
          uVar33 = 0;
          do {
            iVar27 = (int)uVar33;
            uVar33 = uVar33 + 1;
            uVar18 = *(uint *)(*local_160 + uVar35 + (ulong)((uVar17 * iVar38 + iVar27) * iVar14));
            dVar65 = (double)(uVar18 >> 0x10 & 0xff) * dVar63;
            dVar68 = (double)(uVar18 >> 8 & 0xff) * dVar63;
            dVar67 = (double)(uVar18 & 0xff) * dVar63;
            dVar49 = dVar49 + dVar67 * dVar67;
            dVar44 = dVar44 + dVar65 * dVar65;
            dVar45 = dVar45 + dVar68 * dVar68;
            dVar46 = dVar46 + (double)(uVar18 >> 0x18) * dVar63;
          } while (uVar33 < uVar17);
          dVar44 = dVar64 * dVar44;
          dVar45 = dVar64 * dVar45;
          dVar65 = dVar45;
          if (dVar44 <= 0.0) {
LAB_005aea30:
            if (dVar45 <= 0.0) goto joined_r0x005ae998;
LAB_005ae988:
            dVar65 = SQRT(dVar45);
            if (!NAN(SQRT(dVar45))) goto joined_r0x005ae998;
            dVar65 = sqrt(dVar45);
            if (0.0 < dVar64 * dVar49) goto LAB_005ae99c;
LAB_005aea4c:
            dVar45 = dVar64 * dVar49;
joined_r0x005ae9ac:
            if (1.0 <= dVar44) goto LAB_005aea58;
LAB_005ae9b0:
            if (dVar44 <= 0.0) {
              uVar18 = 0;
              goto joined_r0x005aea60;
            }
            uVar18 = (int)(dVar44 * dVar43) << 0x10;
            if (dVar65 < 1.0) goto LAB_005aea64;
LAB_005ae9e0:
            uVar19 = 0xff00;
joined_r0x005ae9f0:
            uVar33 = (ulong)(uint)(iVar14 * iVar38);
            if (dVar45 < 1.0) goto LAB_005ae9f4;
LAB_005aea8c:
            uVar20 = 0xff;
joined_r0x005aea1c:
            if (1.0 <= dVar64 * dVar46) goto LAB_005aea20;
LAB_005aea98:
            if (dVar64 * dVar46 <= 0.0) {
              uVar29 = 0;
            }
            else {
              uVar29 = (int)(dVar64 * dVar46 * dVar43) << 0x18;
            }
          }
          else {
            dVar68 = SQRT(dVar44);
            if (NAN(dVar68)) {
              dVar44 = sqrt(dVar44);
              goto LAB_005aea30;
            }
            dVar44 = dVar68;
            if (0.0 < dVar45) goto LAB_005ae988;
joined_r0x005ae998:
            if (dVar64 * dVar49 <= 0.0) goto LAB_005aea4c;
LAB_005ae99c:
            dVar45 = SQRT(dVar64 * dVar49);
            if (!NAN(dVar45)) goto joined_r0x005ae9ac;
            dVar45 = sqrt(dVar64 * dVar49);
            if (dVar44 < 1.0) goto LAB_005ae9b0;
LAB_005aea58:
            uVar18 = 0xff0000;
joined_r0x005aea60:
            if (1.0 <= dVar65) goto LAB_005ae9e0;
LAB_005aea64:
            if (0.0 < dVar65) {
              uVar19 = (int)(dVar65 * dVar43) << 8;
              goto joined_r0x005ae9f0;
            }
            uVar19 = 0;
            uVar33 = (ulong)(uint)(iVar14 * iVar38);
            if (1.0 <= dVar45) goto LAB_005aea8c;
LAB_005ae9f4:
            if (dVar45 <= 0.0) {
              uVar20 = 0;
              goto joined_r0x005aea1c;
            }
            uVar20 = (uint)(dVar45 * dVar43);
            if (dVar64 * dVar46 < 1.0) goto LAB_005aea98;
LAB_005aea20:
            uVar29 = 0xff000000;
          }
          uVar28 = uVar28 + 1;
          *(uint *)((long)puVar23 + uVar33 + uVar35) = uVar19 | uVar18 | uVar20 | uVar29;
        } while (uVar28 < uVar4);
      }
      uVar31 = uVar31 + 1;
    } while (uVar31 != param_6);
  }
  FUN_005b0000();
  puVar36 = (undefined8 *)PTR_PTR_02713988;
  uVar17 = 0;
  if ((param_6 != 0) && (uVar4 != 0)) {
    fVar41 = 0.0;
    uVar31 = 0;
    uVar18 = 0;
    do {
      fVar42 = 0.0;
      fVar48 = 0.0;
      fVar56 = 0.0;
      uVar35 = 0;
      uVar28 = (ulong)uVar4;
      do {
        uVar17 = *(uint *)((long)puVar23 + uVar35 + (uVar31 & 0x3fffffff) * 4);
        uVar35 = (ulong)((int)uVar35 + param_6 * 4);
        fVar52 = (float)(uVar17 >> 0x10 & 0xff) * DAT_01d4bb68;
        fVar57 = (float)(uVar17 >> 8 & 0xff) * DAT_01d4bb68;
        fVar53 = (float)(uVar17 & 0xff) * DAT_01d4bb68;
        fVar56 = fVar56 + fVar52 * fVar52;
        fVar48 = fVar48 + fVar57 * fVar57;
        fVar42 = fVar42 + fVar53 * fVar53;
        uVar28 = uVar28 - 1;
      } while (uVar28 != 0);
      fVar42 = fVar42 * DAT_01d4c3f8 + fVar56 * DAT_01d4be14 + fVar48 * DAT_01d4be80;
      uVar17 = (uint)uVar31;
      if (fVar42 <= fVar41) {
        uVar17 = uVar18;
        fVar42 = fVar41;
      }
      fVar41 = fVar42;
      uVar31 = uVar31 + 1;
      uVar18 = uVar17;
    } while (uVar31 != param_6);
  }
  fVar41 = ((float)uVar17 + 1.0) / (float)param_6;
  bVar13 = true;
  if ((fVar41 <= DAT_01d4bee0) && (bVar13 = false, !NAN(fVar41) && !NAN(DAT_01d4bec4))) {
    bVar13 = fVar41 < DAT_01d4bec4;
  }
  fVar42 = 0.5;
  if (!bVar13) {
    fVar42 = fVar41;
  }
  if (uVar16 == 0) {
    (**(code **)(*local_b8 + 0x48))(local_b8,puVar23,0,0,1);
joined_r0x005aee94:
    if (local_160 == (ulong *)0x0) goto joined_r0x005aed58;
  }
  else {
    uVar31 = 0;
    do {
      uVar21 = FUN_00546b40(param_6,uVar31 & 0xffffffff);
      uVar28 = FUN_00546b40(param_7,uVar31 & 0xffffffff);
      FUN_005b0000(uVar28,local_160[uVar31],uVar21,uVar28 & 0xffffffff,&local_c8,1);
      uVar31 = uVar31 + 1;
    } while (uVar32 != uVar31);
    if (uVar16 == 0) {
      (**(code **)(*local_b8 + 0x48))(local_b8,puVar23,0,0,1);
      puVar36 = (undefined8 *)PTR_PTR_02713988;
      goto joined_r0x005aee94;
    }
    uVar31 = 0;
    do {
      (**(code **)(*local_b0[0] + 0x48))(local_b0[0],local_160[uVar31],uVar31 & 0xffffffff,0,1);
      uVar31 = uVar31 + 1;
    } while (uVar32 != uVar31);
    (**(code **)(*local_b8 + 0x48))(local_b8,puVar23,0,0,1);
    puVar36 = (undefined8 *)PTR_PTR_02713988;
    if (uVar16 == 0) goto joined_r0x005aee94;
    puVar22 = local_160;
    do {
      if (*puVar22 != 0) {
        FUN_005b9b10(*puVar36,*puVar22 - 8);
        *puVar22 = 0;
      }
      puVar22 = puVar22 + 1;
      uVar32 = uVar32 - 1;
    } while (uVar32 != 0);
  }
  puVar22 = local_160 + local_160[-1];
  do {
    puVar22 = puVar22 + -1;
  } while (local_160 <= puVar22);
  FUN_005b9b10(*puVar36);
joined_r0x005aed58:
  if (puVar23 != (ulong *)0x0) {
    FUN_005b9b10(*puVar36,puVar23 + -1);
  }
  (**(code **)(*local_b0[0] + 0x78))(local_b0[0],7);
  (**(code **)(*local_b8 + 0x78))(local_b8,7);
  if (param_9 == (undefined8 *)0x0) {
    if (local_b0[0] != (long *)0x0) {
      (**(code **)(*local_b0[0] + 8))();
      local_b0[0] = (long *)0x0;
    }
  }
  else {
    *param_9 = local_b0[0];
  }
  if (param_10 == (long *)0x0) {
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 8))();
    }
  }
  else {
    *param_10 = (long)local_b8;
  }
  if (param_11 != (undefined8 *)0x0) {
    *param_11 = local_c8;
    param_11[1] = local_c0;
  }
  if (param_12 != (float *)0x0) {
    *param_12 = local_23c;
  }
  if (param_13 != (float *)0x0) {
    *param_13 = fVar42;
  }
  return 0;
}


