/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005597e0; name: FUN_005597e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_005597e0(long param_1,long param_2,long param_3,long param_4,long param_5,long *param_6,
            int param_7,byte param_8)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  bool bVar20;
  ulong uVar21;
  long *plVar22;
  int iVar23;
  int iVar24;
  float *pfVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  int iVar29;
  float *pfVar30;
  long lVar31;
  undefined8 *puVar32;
  float *pfVar33;
  float *pfVar34;
  int iVar35;
  undefined8 uVar36;
  int iVar37;
  long *plVar38;
  ulong uVar39;
  int iVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined4 uVar56;
  float fVar57;
  undefined4 uVar58;
  float fVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float local_2a8;
  ulong local_270;
  uint local_248;
  undefined1 local_200 [8];
  undefined8 local_1f8 [7];
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_180 [4];
  float local_170;
  float fStack_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_14c;
  float local_f0 [4];
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_b0;
  float fStack_ac;
  
  if ((param_8 & 1) == 0) {
    lVar31 = *(long *)(param_1 + 0x170);
    FUN_00511040(local_f0,0);
    FUN_00511040(&local_170,0);
    if ((((((local_f0[0] == local_170) && (local_f0[1] == fStack_16c)) && (local_f0[2] == local_168)
          ) && ((local_f0[3] == local_164 && (local_e0 == local_160)))) && (local_dc == local_15c))
       && ((local_d8 == local_158 && (local_d4 == local_154)))) {
      fVar41 = *(float *)(lVar31 + 8) * DAT_01d4be14 + *(float *)(lVar31 + 0xc) * DAT_01d4be80 +
               *(float *)(lVar31 + 0x10) * DAT_01d4c3f8;
    }
    else {
      FUN_00511bb0(&local_170,local_f0,local_f0 + 2,&local_e0,&local_d8);
      fVar41 = fStack_16c * *(float *)(lVar31 + 8) + local_15c * *(float *)(lVar31 + 0xc) +
               local_14c * *(float *)(lVar31 + 0x10);
    }
    if (0.0 < fVar41) {
      FUN_00511040(&local_1c0,0);
      FUN_00511040(&local_170,0);
      if ((((local_1c0 != local_170) || (local_1bc != fStack_16c)) || (local_1b8 != local_168)) ||
         (((local_1b4 != local_164 || (local_1b0 != local_160)) ||
          ((local_1ac != local_15c || ((local_1a8 != local_158 || (local_1a4 != local_154)))))))) {
        FUN_00511bb0(&local_170,&local_1c0,&local_1b8,&local_1b0,&local_1a8);
      }
    }
    iVar37 = *(int *)(param_2 + 8);
    if (*(int *)(param_1 + 0xf0) <= *(int *)(param_2 + 8)) {
      iVar37 = *(int *)(param_1 + 0xf0);
    }
    fVar41 = (float)FUN_00558630(param_1);
  }
  else {
    FUN_00511040(local_f0,0);
    FUN_00511040(&local_170,0);
    if ((((local_f0[0] != local_170) || (local_f0[1] != fStack_16c)) || (local_f0[2] != local_168))
       || (((local_f0[3] != local_164 || (local_e0 != local_160)) ||
           ((local_dc != local_15c || ((local_d8 != local_158 || (local_d4 != local_154)))))))) {
      FUN_00511bb0(&local_170,local_f0,local_f0 + 2,&local_e0,&local_d8);
    }
    iVar37 = *(int *)(param_2 + 8);
    if (*(int *)(param_1 + 0xf0) <= *(int *)(param_2 + 8)) {
      iVar37 = *(int *)(param_1 + 0xf0);
    }
    if (*(char *)(param_1 + 0x410) == '\0') {
      fVar42 = 1.0;
    }
    else {
      fVar41 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xbc));
      fVar42 = 1.0 / (fVar41 * DAT_01d4c5dc);
    }
    fVar44 = *(float *)(param_1 + 0x1b8);
    if (*(float *)(param_1 + 0x1b8) <= *(float *)(param_1 + 0x1bc)) {
      fVar44 = *(float *)(param_1 + 0x1bc);
    }
    if (fVar44 <= *(float *)(param_1 + 0x1c0)) {
      fVar44 = *(float *)(param_1 + 0x1c0);
    }
    if (fVar44 <= *(float *)(param_1 + 0x1c4)) {
      fVar44 = *(float *)(param_1 + 0x1c4);
    }
    fVar44 = *(float *)(param_1 + 0x1b0) * fVar44;
    if (fVar44 <= DAT_01d4bc78 && *(char *)(param_1 + 0x1ac) != '\0') {
      fVar44 = DAT_01d4bc78;
    }
    fVar45 = *(float *)(&DAT_01cd5098 + (ulong)(*(char *)(param_1 + 0xfa) == '\0') * 4);
    fVar41 = (float)FUN_005584d0(param_1);
    fVar41 = fVar41 * fVar45 * fVar42 * fVar44;
  }
  fVar42 = powf(fVar41,DAT_01d4c554);
  puVar6 = PTR_DAT_027139b0;
  iVar35 = *(int *)PTR_DAT_027139b0;
  if (iVar35 < 1) {
    plVar38 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar38,0);
    *(long **)PTR_DAT_027139b8 = plVar38;
    *(undefined4 *)puVar6 = 1;
    if (plVar38 != (long *)0x0) goto LAB_00559bd8;
LAB_00559c60:
    iVar35 = 0;
  }
  else {
    plVar38 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar35 + 1;
    if (iVar35 + 1 < 2) {
      if (plVar38 == (long *)0x0) goto LAB_00559c60;
LAB_00559bd8:
      uVar36 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar38 + 0x20))(plVar38);
      FUN_005b9b10(uVar36,plVar38);
      iVar35 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
  }
  *(int *)puVar6 = iVar35;
  lVar31 = *param_6;
  local_b0 = (float)NEON_ucvtf(*(undefined4 *)(lVar31 + 0x58));
  fStack_ac = (float)NEON_ucvtf(*(undefined4 *)(lVar31 + 0x54));
  cVar4 = *(char *)(*(long *)(param_1 + 0x170) + 100);
  fVar44 = fStack_ac;
  if (fStack_ac <= local_b0) {
    fVar44 = local_b0;
  }
  if (((DAT_0275ea60 & 1) == 0) && (iVar35 = __cxa_guard_acquire(&DAT_0275ea60), iVar35 != 0)) {
    __cxa_guard_release(&DAT_0275ea60);
    if ((DAT_0275ea68 & 1) == 0) goto LAB_0055a844;
LAB_00559cbc:
    if ((param_8 & 1) != 0) goto LAB_00559cc4;
LAB_0055a87c:
    fVar47 = *(float *)(*(long *)(param_1 + 0x170) + 0x60);
    fVar45 = ABS(fVar47);
    puVar6 = PTR_DAT_02713c50;
    puVar7 = PTR_DAT_02713c40;
    if (0.0 <= fVar47) goto joined_r0x00559cd8;
  }
  else {
    if ((DAT_0275ea68 & 1) != 0) goto LAB_00559cbc;
LAB_0055a844:
    iVar35 = __cxa_guard_acquire(&DAT_0275ea68);
    if (iVar35 == 0) goto LAB_00559cbc;
    _DAT_0275ea78 = 0x3f8000003f800000;
    _DAT_0275ea80 = 0x3f8000003f800000;
    __cxa_guard_release(&DAT_0275ea68);
    if ((param_8 & 1) == 0) goto LAB_0055a87c;
LAB_00559cc4:
    fVar45 = 0.0;
    puVar6 = PTR_DAT_02713c40;
  }
  puVar7 = puVar6;
joined_r0x00559cd8:
  if (fVar44 <= 0.0) {
    logf(fVar44);
  }
  fVar19 = fStack_ac;
  fVar18 = local_b0;
  fVar43 = *(float *)(puVar7 + 0x20);
  fVar46 = *(float *)(puVar7 + 0x24);
  fVar45 = fVar45 * 1.5;
  fVar47 = DAT_0275ea78;
  fVar48 = DAT_0275ea7c;
  fVar70 = DAT_0275ea7c - fVar46;
  fVar55 = DAT_0275ea80;
  fVar52 = DAT_0275ea84;
  pfVar25 = (float *)&DAT_0275eb8c;
  fVar49 = *(float *)(puVar7 + 0x10);
  fVar62 = *(float *)(puVar7 + 0x14);
  fVar63 = DAT_0275ea78 - fVar49;
  fVar65 = *(float *)(puVar7 + 0x18);
  fVar66 = *(float *)(puVar7 + 0x1c);
  fVar64 = DAT_0275ea7c - fVar62;
  fVar71 = *(float *)(puVar7 + 0x28);
  fVar72 = *(float *)(puVar7 + 0x2c);
  fVar67 = DAT_0275ea80 - fVar65;
  fVar75 = *(float *)(puVar7 + 0x30);
  fVar76 = *(float *)(puVar7 + 0x34);
  fVar68 = DAT_0275ea84 - fVar66;
  fVar51 = *(float *)(puVar7 + 0x38);
  fVar53 = *(float *)(puVar7 + 0x3c);
  fVar69 = DAT_0275ea78 - fVar43;
  fVar73 = DAT_0275ea80 - fVar71;
  fVar74 = DAT_0275ea84 - fVar72;
  fVar77 = DAT_0275ea78 - fVar75;
  fVar50 = DAT_0275ea7c - fVar76;
  fVar54 = DAT_0275ea80 - fVar51;
  fVar57 = DAT_0275ea84 - fVar53;
  lVar26 = -8;
  do {
    iVar35 = (int)lVar26;
    lVar26 = lVar26 + 1;
    pfVar25[-0xf] = 1.0;
    pfVar25[-0xe] = 1.0;
    fVar59 = (float)(iVar35 + 9) * 0.125;
    pfVar25[-0xb] = fVar47 + fVar45 * ((fVar49 + fVar59 * fVar63) - fVar47);
    pfVar25[-10] = fVar48 + fVar45 * ((fVar62 + fVar59 * fVar64) - fVar48);
    pfVar25[-9] = fVar55 + fVar45 * ((fVar65 + fVar59 * fVar67) - fVar55);
    pfVar25[-8] = fVar52 + fVar45 * ((fVar66 + fVar59 * fVar68) - fVar52);
    pfVar25[-7] = fVar47 + fVar45 * ((fVar43 + fVar59 * fVar69) - fVar47);
    pfVar25[-6] = fVar48 + fVar45 * ((fVar46 + fVar59 * fVar70) - fVar48);
    pfVar25[-5] = fVar55 + fVar45 * ((fVar71 + fVar59 * fVar73) - fVar55);
    pfVar25[-4] = fVar52 + fVar45 * ((fVar72 + fVar59 * fVar74) - fVar52);
    pfVar25[-3] = fVar47 + fVar45 * ((fVar75 + fVar59 * fVar77) - fVar47);
    pfVar25[-2] = fVar48 + fVar45 * ((fVar76 + fVar59 * fVar50) - fVar48);
    pfVar25[-1] = fVar55 + fVar45 * ((fVar51 + fVar59 * fVar54) - fVar55);
    *pfVar25 = fVar52 + fVar45 * ((fVar53 + fVar59 * fVar57) - fVar52);
    pfVar25[-0xd] = 1.0;
    fVar17 = DAT_01d4c7a0;
    fVar16 = DAT_01d4c5dc;
    fVar15 = DAT_01d4c494;
    fVar14 = DAT_01d4c284;
    fVar13 = DAT_01d4c0dc;
    fVar12 = DAT_01d4bfe0;
    fVar11 = DAT_01d4bf58;
    fVar10 = DAT_01d4bef8;
    fVar9 = DAT_01d4bc7c;
    fVar8 = DAT_01d4bb68;
    fVar59 = DAT_01d4bb38;
    pfVar25[-0xc] = 1.0;
    pfVar25 = pfVar25 + 0x10;
  } while (lVar26 != 0);
  local_2a8 = DAT_01d4c05c;
  if ((param_8 & 1) == 0) {
    local_2a8 = *(float *)(*(long *)(param_1 + 0x170) + 0x5c);
  }
  if (DAT_01d4bdf4 <= ABS(local_2a8)) {
    local_2a8 = (DAT_01d4c5ac / (float)iVar37) * 0.5;
  }
  if (*(char *)(param_2 + 0x18) != '\0') {
    local_2a8 = local_2a8 - *(float *)(param_1 + 0x17c);
  }
  if (iVar37 < 1) {
    local_248 = 0;
  }
  else {
    local_270 = 0;
    local_248 = 0;
    fVar47 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xc0));
    bVar20 = cVar4 != '\0';
    fVar45 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xbc));
    fVar48 = fStack_ac / local_b0;
    bVar1 = bVar20 & (param_8 ^ 1);
    do {
      fVar55 = 1.0;
      if (*(long *)(param_2 + 0x20) == 0) {
        fVar52 = *(float *)(param_2 + 0x10);
        if (0.0 < *(float *)(param_2 + 0x14) && (local_270 & 1) != 0) {
          fVar52 = *(float *)(param_2 + 0x14);
        }
        fVar43 = (((fVar10 / (float)*(int *)(param_2 + 8)) * fVar59) / fVar14) *
                 (float)(int)local_270;
        pfVar25 = (float *)(param_2 + 0xc);
      }
      else {
        pfVar25 = (float *)(*(long *)(param_2 + 0x20) + local_270 * 0xc);
        fVar52 = pfVar25[1];
        fVar43 = pfVar25[2];
      }
      fVar46 = *pfVar25;
      if ((param_8 & 1) != 0) {
        fVar52 = *(float *)(param_1 + 0x1b4) * fVar52;
      }
      fVar49 = local_2a8 - fVar43;
      if (*(char *)(*(long *)(param_1 + 0x20) + 0x58) != '\0') {
        fVar49 = -(local_2a8 - fVar43);
      }
      fVar43 = sinf(fVar49);
      fVar51 = cosf(fVar49);
      fVar49 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xbc));
      fVar50 = 1.0 / (*(float *)(param_1 + 0x158) + *(float *)(param_1 + 0x158));
      fVar53 = *(float *)(param_1 + 0x1e8);
      if (fVar53 != 1.0) {
        fVar50 = logf(fVar50);
        fVar50 = expf(fVar53 * fVar50);
      }
      uVar3 = *(uint *)(lVar31 + 0x38);
      fVar53 = *(float *)(param_1 + 0x408);
      fVar52 = ((fVar46 / (fVar49 * fVar16 * fVar50)) / 6.0) / fVar52;
      fVar49 = fVar52 / 1.5;
      if (bVar1 == 0) {
        fVar49 = fVar52;
      }
      uVar21 = FUN_00538690(uVar3);
      if ((uVar21 & 1) == 0) {
LAB_0055a1e8:
      }
      else {
        if ((uVar3 < 0x3c) && ((1L << ((ulong)uVar3 & 0x3f) & 0xf80007800007800U) != 0)) {
          fVar50 = fVar9;
        }
        else {
          if ((uVar3 == 0) || ((uVar3 | 1) != 0x19)) {
            switch(uVar3) {
            case 0x1c:
            case 0x1d:
            case 0x1e:
            case 0x1f:
            case 0x20:
            case 0x31:
            case 0x32:
            case 0x33:
            case 0x34:
            case 0x3d:
            case 0x3e:
            case 0x3f:
            case 0x40:
            case 0x41:
            case 0x57:
            case 0x58:
            case 0x5b:
            case 0x5d:
              if (fVar53 <= fVar8) {
                fVar53 = fVar8;
              }
              break;
            case 0x21:
            case 0x22:
            case 0x23:
            case 0x24:
            case 0x25:
            case 0x26:
            case 0x27:
            case 0x28:
            case 0x29:
            case 0x2a:
            case 0x2b:
            case 0x2c:
            case 0x2d:
            case 0x2e:
            case 0x2f:
            case 0x30:
            case 0x35:
            case 0x36:
            case 0x37:
            case 0x38:
            case 0x39:
            case 0x3a:
            case 0x3b:
            case 0x3c:
            case 0x42:
            case 0x43:
            case 0x44:
            case 0x45:
            case 0x46:
            case 0x47:
            case 0x48:
            case 0x49:
            case 0x4a:
            case 0x4b:
            case 0x4c:
            case 0x4d:
            case 0x4e:
            case 0x4f:
            case 0x50:
            case 0x51:
            case 0x52:
            case 0x53:
            case 0x54:
            case 0x55:
            case 0x56:
            case 0x59:
            case 0x5a:
            case 0x5c:
              break;
            default:
              goto LAB_0055a1e8;
            }
            goto switchD_0055a1d0_caseD_21;
          }
          fVar50 = fVar11;
        }
        if (fVar53 <= fVar50) {
          fVar53 = fVar50;
        }
      }
switchD_0055a1d0_caseD_21:
      fVar50 = logf(fVar53);
      fVar54 = (fVar50 / fVar13) / fVar49;
      fVar53 = logf(fVar54);
      fVar50 = fVar53 / fVar15 + 1.0;
      if (bVar1 == 0) {
        fVar50 = (float)(int)(fVar53 / fVar15);
      }
      iVar35 = (int)fVar50;
      if (bVar1 == 0) {
        fVar50 = powf(4.0,(float)iVar35);
        iVar23 = (int)((fVar54 * 4.0) / fVar50);
        if (3 < iVar23 || iVar23 == 0) {
          iVar23 = 4;
        }
      }
      else {
        iVar23 = 4;
      }
      FUN_00540cf0(*(undefined8 *)(param_1 + 0x20),0);
      (**(code **)(**(long **)(param_1 + 0x20) + 0x160))(*(long **)(param_1 + 0x20),0);
      uVar21 = (ulong)(iVar35 - 1);
      if (0 < iVar35) {
        uVar39 = 0;
        iVar40 = 0;
        fVar51 = ((fVar45 / fVar47) / fVar48) * (fVar46 / fVar18) * fVar51;
        pfVar25 = (float *)&DAT_0275ed1c;
        fVar43 = (fVar46 / fVar19) * fVar43;
        fVar53 = (1.0 / fVar52) * 1.5;
        lVar26 = param_3;
        fVar50 = fVar43;
        fVar52 = fVar51;
        do {
          uVar5 = (ulong)(iVar35 - 2);
          if (bVar1 == 0) {
            uVar5 = uVar21;
          }
          if (uVar39 != 0) {
            fVar55 = (1.0 / fVar42) * fVar55;
          }
          fVar54 = 0.1875;
          if (uVar39 != 0) {
            fVar54 = fVar42;
          }
          if (bVar1 == 0) {
            local_180[0] = powf(0.5,fVar49 * 0.0);
            local_180[0] = fVar54 * local_180[0];
            local_180[1] = powf(0.5,fVar49);
            local_180[1] = fVar54 * local_180[1];
            local_180[2] = powf(0.5,fVar49 + fVar49);
            fVar57 = fVar49 * 3.0;
LAB_0055a3e8:
            local_180[2] = fVar54 * local_180[2];
            local_180[3] = powf(0.5,fVar57);
          }
          else {
            if (uVar39 != uVar21) {
              local_180[0] = powf(0.5,fVar49 * 0.0 * 4.0);
              local_180[0] = fVar54 * local_180[0];
              local_180[1] = powf(0.5,fVar49 * 4.0);
              local_180[1] = fVar54 * local_180[1];
              local_180[2] = powf(0.5,(fVar49 + fVar49) * 4.0);
              fVar57 = fVar49 * 3.0 * 4.0;
              goto LAB_0055a3e8;
            }
            local_180[1] = fVar54 * fVar17;
            local_180[2] = fVar54 * fVar12;
            local_180[3] = DAT_01d4c50c;
            local_180[0] = fVar54;
          }
          local_180[3] = fVar54 * local_180[3];
          fVar54 = powf(4.0,(float)(int)uVar39);
          iVar24 = (int)((fVar44 + fVar46 * fVar54 + -1.0) / (fVar46 * fVar54));
          iVar29 = iVar23;
          if (uVar39 != uVar5) {
            iVar29 = 4;
          }
          if (3 < iVar24) {
            iVar24 = 4;
          }
          iVar2 = 4;
          if (bVar1 == 0) {
            iVar2 = iVar24;
          }
          if (iVar29 <= iVar2) {
            iVar2 = iVar29;
          }
          if ((uVar39 == uVar21) || (iVar2 < 4)) {
            lVar31 = *(long *)(param_5 + local_270 * 8);
            local_f0[(int)local_248] = fVar55;
            *(long *)(local_180 + (long)(int)local_248 * 2 + 4) = lVar31;
            local_248 = local_248 + 1;
          }
          else {
            lVar31 = param_6[iVar40];
          }
          fVar65 = *(float *)(lVar26 + 0x90);
          fVar54 = *(float *)(lVar26 + 0x94);
          fVar63 = *(float *)(lVar26 + 0x88);
          fVar64 = *(float *)(lVar26 + 0x8c);
          uVar61 = *(undefined4 *)(lVar26 + 0x54);
          uVar60 = *(undefined4 *)(lVar26 + 0x58);
          uVar56 = *(undefined4 *)(lVar31 + 0x54);
          uVar58 = *(undefined4 *)(lVar31 + 0x58);
          FUN_0059d300(lVar31,0,0,1,0,0);
          fVar57 = (float)NEON_ucvtf(uVar61);
          fVar62 = (float)NEON_ucvtf(uVar60);
          fVar65 = fVar63 * fVar57 + fVar65;
          uVar56 = NEON_ucvtf(uVar56);
          uVar58 = NEON_ucvtf(uVar58);
          if ((bVar20 && (param_8 & 1) == 0) && uVar39 == uVar21) {
            fVar52 = fVar51;
            fVar50 = fVar43;
          }
          fVar54 = fVar64 * fVar62 + fVar54;
          lVar27 = lVar26;
          if (0 < iVar2) {
            lVar27 = 0;
            pfVar30 = &local_1b8;
            puVar32 = local_1f8;
            pfVar33 = (float *)(puVar7 + 8);
            pfVar34 = pfVar25;
            do {
              *puVar32 = 0;
              if ((bVar20 && (param_8 & 1) == 0) && uVar39 == uVar21) {
                fVar62 = local_180[lVar27];
                fVar67 = (float)(int)lVar27;
                fVar63 = pfVar33[-2] * fVar62;
                fVar64 = fVar62 * pfVar33[-1];
                fVar57 = fVar62 * *pfVar33;
                fVar62 = fVar62 * pfVar33[1];
                fVar66 = fVar53 * fVar65 * (fVar50 * fVar67 + 0.0);
                fVar67 = fVar53 * fVar54 * (fVar52 * fVar67 + 0.0);
              }
              else {
                fVar62 = local_180[lVar27];
                fVar67 = (float)(int)lVar27;
                fVar63 = pfVar34[-3] * fVar62;
                fVar64 = fVar62 * pfVar34[-2];
                fVar57 = fVar62 * pfVar34[-1];
                fVar62 = fVar62 * *pfVar34;
                fVar66 = fVar65 * (fVar50 * fVar67 + 0.0);
                fVar67 = fVar54 * (fVar52 * fVar67 + 0.0);
              }
              lVar27 = lVar27 + 1;
              pfVar30[-2] = fVar63;
              pfVar30[-1] = fVar64;
              *(float *)(puVar32 + -1) = fVar66;
              *(float *)((long)puVar32 + -4) = fVar67;
              pfVar34 = pfVar34 + 4;
              pfVar33 = pfVar33 + 4;
              puVar32 = puVar32 + 2;
              *pfVar30 = fVar57;
              pfVar30[1] = fVar62;
              pfVar30 = pfVar30 + 4;
            } while (lVar27 < iVar2);
            lVar27 = lVar26;
          }
          do {
            lVar28 = lVar27;
            lVar27 = *(long *)(lVar28 + 0x120);
          } while (lVar27 != 0);
          plVar22 = *(long **)(lVar28 + 0xa8);
          (**(code **)(*plVar22 + 0x78))(plVar22,0);
          do {
            lVar27 = lVar26;
            lVar26 = *(long *)(lVar27 + 0x120);
          } while (lVar26 != 0);
          FUN_00575a10(0,0,uVar56,uVar58,0,0,fVar65,fVar54,plVar38,iVar2,local_200,&local_1c0,
                       *(undefined8 *)(lVar27 + 0xa8),*(undefined4 *)(param_1 + 0x2e4),0);
          if (iVar2 < 4) break;
          fVar52 = fVar52 * 4.0;
          iVar29 = 0;
          if (param_7 != 0) {
            iVar29 = (iVar40 + 1) / param_7;
          }
          uVar39 = uVar39 + 1;
          pfVar25 = pfVar25 + -0x10;
          fVar49 = fVar49 * 4.0;
          fVar50 = fVar50 * 4.0;
          iVar40 = (iVar40 + 1) - iVar29 * param_7;
          lVar26 = lVar31;
        } while ((long)uVar39 < (long)iVar35);
      }
      local_270 = local_270 + 1;
    } while ((long)local_270 < (long)iVar37);
  }
  if ((param_4 != 0) && (*(bool *)(param_1 + 0x428) = 0 < (int)local_248, 0 < (int)local_248)) {
    uVar21 = 0;
    do {
      lVar31 = *(long *)(local_180 + uVar21 * 2 + 4);
      do {
        lVar26 = lVar31;
        lVar31 = *(long *)(lVar26 + 0x120);
      } while (lVar31 != 0);
      plVar22 = *(long **)(lVar26 + 0xa8);
      (**(code **)(*plVar22 + 0x88))(plVar22,1);
      uVar21 = uVar21 + 1;
    } while (uVar21 != local_248);
    fVar41 = fVar41 * DAT_01d4befc;
    FUN_0058d600(fVar41,fVar41,fVar41,fVar41,*(undefined4 *)(param_1 + 0x1f0),plVar38,param_4,
                 local_248,&local_170,local_f0,*(undefined4 *)(param_1 + 0x2e4),0);
    uVar39 = 0;
    do {
      lVar31 = *(long *)(local_180 + uVar39 * 2 + 4);
      do {
        lVar26 = lVar31;
        lVar31 = *(long *)(lVar26 + 0x120);
      } while (lVar31 != 0);
      plVar38 = *(long **)(lVar26 + 0xa8);
      (**(code **)(*plVar38 + 0x88))(plVar38,0);
      uVar39 = uVar39 + 1;
    } while (uVar39 != uVar21);
  }
  return 0;
}


