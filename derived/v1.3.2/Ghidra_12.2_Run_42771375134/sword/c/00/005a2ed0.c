/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005a2ed0; name: FUN_005a2ed0
 */


/* WARNING: Removing unreachable block (ram,0x005a31a0) */

void FUN_005a2ed0(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
                 uint *param_5,uint *param_6)

{
  ulong uVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  float *pfVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uint local_f8;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined1 local_8c;
  undefined4 local_88;
  
  fVar25 = DAT_01d4c18c;
  local_f8 = 0xffffffff;
  local_f4 = 0x7f7fffff7f7fffff;
  local_ec = 0x7f7fffff7f7fffff;
  local_e4 = 0x7f7fffff7f7fffff;
  local_dc = 0x7f7fffff7f7fffff;
  local_d4 = 0x7f7fffff7f7fffff;
  local_cc = 0x7f7fffff7f7fffff;
  local_c4 = 0x7f7fffff7f7fffff;
  local_bc = 0x7f7fffff7f7fffff;
  local_b4 = 0x7f7fffff7f7fffff;
  local_ac = 0x7f7fffff7f7fffff;
  local_a4 = 0x7f7fffff7f7fffff;
  local_9c = 0x7f7fffff7f7fffff;
  local_94 = 0x7f7fffff7f7fffff;
  puVar2 = &local_f8;
  if (param_6 != (uint *)0x0) {
    puVar2 = param_6;
  }
  local_8c = 1;
  local_88 = 0x7f7fffff;
  if ((int)*puVar2 < 0) {
    *puVar2 = param_5[5];
  }
  fVar18 = (float)puVar2[1];
  if (fVar18 == DAT_01d4c18c) {
    uVar17 = *param_5;
    *param_5 = param_5[1];
    uVar12 = param_5[3];
    uVar17 = uVar17 ^ uVar17 << 0xb;
    uVar17 = uVar17 ^ (int)uVar17 >> 8 ^ uVar12 ^ uVar12 >> 0x13;
    param_5[3] = uVar17;
    param_5[1] = param_5[2];
    param_5[2] = uVar12;
    fVar19 = powf(20.0,(float)(uVar17 & 0x7fffffff) * DAT_01d4bf0c);
    uVar17 = *param_5;
    *param_5 = param_5[1];
    uVar12 = param_5[3];
    uVar17 = uVar17 ^ uVar17 << 0xb;
    uVar17 = uVar17 ^ (int)uVar17 >> 8 ^ uVar12 ^ uVar12 >> 0x13;
    param_3 = 1.0;
    fVar18 = 1.0;
    if ((uVar17 & 1) != 0) {
      fVar18 = -1.0;
    }
    param_5[3] = uVar17;
    param_5[1] = param_5[2];
    param_5[2] = uVar12;
    fVar18 = fVar19 * 2.5 * fVar18;
    puVar2[1] = (uint)fVar18;
    if ((DAT_01d4bf50 <= fVar18) && (fVar18 < DAT_01d4bdd0)) {
      fVar18 = fVar18 * 1.5 + 0.25;
      puVar2[1] = (uint)fVar18;
    }
    bVar8 = false;
    fVar19 = (float)puVar2[2];
    if (fVar19 != fVar25) goto LAB_005a3524;
LAB_005a304c:
    uVar17 = *param_5;
    *param_5 = param_5[1];
    uVar12 = param_5[3];
    uVar17 = uVar17 ^ uVar17 << 0xb;
    uVar17 = uVar17 ^ (int)uVar17 >> 8 ^ uVar12 ^ uVar12 >> 0x13;
    param_5[3] = uVar17;
    param_5[1] = param_5[2];
    param_5[2] = uVar12;
    fVar19 = powf(10.0,(float)(uVar17 & 0x7fffffff) * DAT_01d4bf0c);
    fVar18 = (float)puVar2[1];
    if (fVar18 <= 0.0) {
      fVar18 = -fVar18;
    }
    fVar18 = fVar19 * fVar18;
    puVar2[2] = (uint)(fVar18 * DAT_01d4c554 + DAT_01d4c6ac);
    cVar7 = (char)puVar2[0x1b];
  }
  else {
    bVar8 = true;
    fVar19 = (float)puVar2[2];
    if (fVar19 == DAT_01d4c18c) goto LAB_005a304c;
LAB_005a3524:
    if (fVar19 <= 0.0) {
      fVar19 = -fVar19;
    }
    if (fVar18 <= 0.0) {
      fVar18 = -fVar18;
    }
    fVar19 = (fVar19 / DAT_01d4c554) / fVar18;
    param_3 = (fVar19 + DAT_01d4c6e4) / DAT_01d4bba4;
    if (0.0 < param_3) {
      param_4 = param_3 + 1.0;
      fVar19 = (param_3 / param_4) * DAT_01d4bba4 + DAT_01d4be10;
      param_3 = DAT_01d4be10;
    }
    fVar18 = fVar19 * fVar18;
    cVar7 = (char)puVar2[0x1b];
  }
  if (cVar7 != '\0') {
    uVar17 = *param_5;
    *param_5 = param_5[1];
    uVar12 = param_5[3];
    uVar17 = uVar17 ^ uVar17 << 0xb;
    uVar17 = uVar17 ^ (int)uVar17 >> 8 ^ uVar12 ^ uVar12 >> 0x13;
    param_5[1] = param_5[2];
    param_5[2] = uVar12;
    param_5[3] = uVar17;
    fVar20 = 1.0;
    if ((uVar17 & 1) != 0) {
      fVar20 = -1.0;
    }
    puVar2[2] = (uint)((float)puVar2[2] * fVar20);
  }
  fVar20 = DAT_01d4bec4;
  fVar26 = (float)puVar2[0x17];
  if (fVar26 == fVar25) {
    uVar17 = *param_5;
    *param_5 = param_5[1];
    uVar12 = param_5[3];
    uVar17 = uVar17 ^ uVar17 << 0xb;
    fVar20 = fVar19 * fVar19 + fVar20;
    uVar17 = uVar17 ^ (int)uVar17 >> 8 ^ uVar12 ^ uVar12 >> 0x13;
    param_5[3] = uVar17;
    param_3 = DAT_01d4bcb8 - fVar20;
    fVar26 = fVar20 + param_3 * (float)(uVar17 & 0x7fffffff) * DAT_01d4bda0;
    param_5[1] = param_5[2];
    param_5[2] = uVar12;
    puVar2[0x17] = (uint)fVar26;
  }
  if (!bVar8 && fVar26 < 0.25) {
    fVar20 = (float)puVar2[1];
    if (fVar20 <= 0.0) {
      fVar20 = -fVar20;
    }
    fVar21 = DAT_01d4bc1c;
    if (0.0 <= fVar20 + fVar20) {
      fVar21 = -(fVar20 + fVar20);
    }
    puVar2[1] = (uint)fVar21;
  }
  if ((float)puVar2[0x18] == fVar25) {
    uVar17 = *param_5;
    *param_5 = param_5[1];
    uVar12 = param_5[3];
    uVar17 = uVar17 ^ uVar17 << 0xb;
    uVar17 = uVar17 ^ (int)uVar17 >> 8 ^ uVar12 ^ uVar12 >> 0x13;
    param_5[3] = uVar17;
    param_3 = 0.75;
    fVar21 = (float)(uVar17 & 0x7fffffff) * DAT_01d4bda0;
    fVar20 = fVar21 * 0.25 + 0.75;
    if (0.25 <= fVar26) {
      fVar20 = fVar21 + 0.25;
    }
    param_5[1] = param_5[2];
    param_5[2] = uVar12;
    puVar2[0x18] = (uint)fVar20;
  }
  fVar20 = (float)puVar2[0x19];
  if (fVar20 == fVar25) {
    uVar17 = *param_5;
    *param_5 = param_5[1];
    uVar12 = param_5[3];
    uVar17 = uVar17 ^ uVar17 << 0xb;
    uVar17 = uVar17 ^ (int)uVar17 >> 8 ^ uVar12 ^ uVar12 >> 0x13;
    param_5[3] = uVar17;
    fVar21 = (float)(uVar17 & 0x7fffffff) * DAT_01d4bda0;
    param_4 = fVar21 * 0.5;
    param_5[1] = param_5[2];
    param_5[2] = uVar12;
    fVar20 = param_4 + 0.5;
    if (0.25 <= fVar26) {
      fVar20 = fVar21 + 1.0;
    }
    fVar21 = (float)puVar2[1];
    param_3 = -fVar21;
    if (fVar21 <= 0.0) {
      fVar21 = param_3;
    }
    fVar20 = fVar20 * fVar21;
    puVar2[0x19] = (uint)fVar20;
  }
  if ((float)puVar2[0x1a] == fVar25) {
    uVar17 = *param_5;
    *param_5 = param_5[1];
    uVar12 = param_5[3];
    uVar17 = uVar17 ^ uVar17 << 0xb;
    uVar17 = uVar17 ^ (int)uVar17 >> 8 ^ uVar12 ^ uVar12 >> 0x13;
    param_5[1] = param_5[2];
    param_5[2] = uVar12;
    param_5[3] = uVar17;
    param_3 = 0.5;
    puVar2[0x1a] = (uint)(fVar20 * ((float)(uVar17 & 0x7fffffff) * DAT_01d4bda0 * 0.25 + 0.5));
  }
  if ((float)puVar2[0x10] == fVar25) {
    uVar17 = *param_5;
    *param_5 = param_5[1];
    uVar12 = param_5[3];
    uVar17 = uVar17 ^ uVar17 << 0xb;
    uVar17 = uVar17 ^ (int)uVar17 >> 8 ^ uVar12 ^ uVar12 >> 0x13;
    param_5[3] = uVar17;
    param_3 = DAT_01d4bec4;
    fVar21 = (float)(uVar17 & 0x7fffffff) * DAT_01d4bda0;
    fVar20 = fVar21 * 1.75 + 0.25;
    if (0.25 <= fVar26) {
      fVar20 = fVar21 * DAT_01d4bdd4 + DAT_01d4bec4;
    }
    param_5[1] = param_5[2];
    param_5[2] = uVar12;
    puVar2[0x10] = (uint)fVar20;
  }
  if ((float)puVar2[0x11] == fVar25) {
    uVar17 = *param_5;
    *param_5 = param_5[1];
    uVar12 = param_5[3];
    uVar17 = uVar17 ^ uVar17 << 0xb;
    uVar17 = uVar17 ^ (int)uVar17 >> 8 ^ uVar12 ^ uVar12 >> 0x13;
    param_5[1] = param_5[2];
    param_5[2] = uVar12;
    param_5[3] = uVar17;
    param_4 = (float)(uVar17 & 0x7fffffff) * DAT_01d4bda0 * DAT_01d4be10;
    fVar20 = powf(param_4 + 0.0,5.0);
    puVar2[0x11] = (uint)(1.0 - fVar20);
  }
  if ((float)puVar2[0x12] == fVar25) {
    fVar20 = powf(10.0,fVar19 * -0.25);
    uVar17 = *param_5;
    *param_5 = param_5[1];
    uVar12 = param_5[3];
    uVar17 = uVar17 ^ uVar17 << 0xb;
    uVar17 = uVar17 ^ (int)uVar17 >> 8 ^ uVar12 ^ uVar12 >> 0x13;
    param_5[1] = param_5[2];
    param_5[2] = uVar12;
    param_5[3] = uVar17;
    fVar21 = (float)(uVar17 & 0x7fffffff) * DAT_01d4bda0;
    param_3 = -1.0;
    puVar2[0x12] = (uint)(fVar20 * (fVar21 + fVar21 + -1.0));
  }
  if ((float)puVar2[0x13] == fVar25) {
    uVar17 = *param_5;
    *param_5 = param_5[1];
    uVar12 = param_5[3];
    uVar17 = uVar17 ^ uVar17 << 0xb;
    uVar17 = uVar17 ^ (int)uVar17 >> 8 ^ uVar12 ^ uVar12 >> 0x13;
    param_5[3] = uVar17;
    param_5[1] = param_5[2];
    param_5[2] = uVar12;
    param_4 = (float)(uVar17 & 0x7fffffff) * DAT_01d4bda0 * 0.5;
    fVar20 = (float)puVar2[1];
    fVar21 = param_4 + 0.5;
    if (fVar20 <= 0.0) {
      fVar20 = -fVar20;
    }
    fVar22 = SQRT(fVar20);
    if (NAN(fVar22)) {
      fVar22 = sqrtf(fVar20);
    }
    fVar24 = DAT_01d4bbe0;
    fVar27 = DAT_01d4bbdc;
    fVar23 = DAT_01d4bbe0;
    if (fVar20 != DAT_01d4bbdc) {
      fVar23 = ABS(fVar22);
    }
    fVar20 = SQRT(fVar19);
    if (NAN(fVar20)) {
      fVar20 = sqrtf(fVar19);
    }
    if (fVar19 != fVar27) {
      fVar24 = ABS(fVar20);
    }
    fVar24 = fVar24 * fVar21 * fVar23;
    puVar2[0x13] = (uint)fVar24;
    if (fVar26 < 0.25) {
      puVar2[0x13] = (uint)(fVar24 + fVar24);
    }
    bVar8 = true;
    fVar19 = (float)puVar2[0x14];
  }
  else {
    bVar8 = false;
    fVar19 = (float)puVar2[0x14];
  }
  if (fVar19 == fVar25) {
    uVar17 = *param_5;
    *param_5 = param_5[1];
    uVar12 = param_5[3];
    uVar17 = uVar17 ^ uVar17 << 0xb;
    uVar17 = uVar17 ^ (int)uVar17 >> 8 ^ uVar12 ^ uVar12 >> 0x13;
    param_5[3] = uVar17;
    param_5[1] = param_5[2];
    param_5[2] = uVar12;
    fVar20 = exp2f((float)(uVar17 & 0x7fffffff) * DAT_01d4bf0c);
    fVar19 = (float)puVar2[2];
    if (fVar19 <= 0.0) {
      fVar19 = -fVar19;
    }
    fVar21 = fVar19;
    if (1.0 < fVar19) {
      fVar21 = 1.0;
    }
    fVar22 = 0.0;
    if (0.0 <= fVar19) {
      fVar22 = fVar21;
    }
    fVar19 = powf(fVar22,0.75);
    puVar2[0x14] = (uint)(fVar19 * fVar20);
    uVar17 = *param_5;
    *param_5 = param_5[1];
    uVar12 = param_5[3];
    uVar17 = uVar17 ^ uVar17 << 0xb;
    uVar17 = uVar17 ^ (int)uVar17 >> 8 ^ uVar12 ^ uVar12 >> 0x13;
    param_5[1] = param_5[2];
    param_5[2] = uVar12;
    param_5[3] = uVar17;
    fVar19 = 1.0;
    if ((uVar17 & 1) != 0) {
      fVar19 = -1.0;
    }
    fVar19 = (float)puVar2[0x14] * fVar19;
    puVar2[0x14] = (uint)fVar19;
    if (((bVar8) && (fVar19 < 0.0)) && (0.0 < (float)puVar2[1])) {
      puVar2[0x13] = (uint)((float)puVar2[0x13] + (float)puVar2[0x13]);
    }
    if (fVar19 < 0.0) {
      fVar19 = -fVar19 / (float)puVar2[0x13];
      param_4 = (fVar19 + DAT_01d4c6e4) / DAT_01d4bba4;
      param_3 = DAT_01d4bba4;
      if (0.0 < param_4) {
        fVar19 = (param_4 / (param_4 + 1.0)) * DAT_01d4bba4 + DAT_01d4be10;
        param_3 = DAT_01d4be10;
      }
      fVar19 = -((float)puVar2[0x13] * fVar19);
      puVar2[0x14] = (uint)fVar19;
    }
    if (fVar26 < 0.25) {
      if (fVar19 <= 0.0) {
        fVar19 = -fVar19;
      }
      puVar2[0x14] = (uint)fVar19;
    }
  }
  if ((float)puVar2[0x15] == fVar25) {
    fVar19 = (float)puVar2[1];
    if (fVar19 <= 0.0) {
      fVar19 = -fVar19;
    }
    puVar2[0x15] = 0x3f800000;
    if (0.75 < fVar19) {
      uVar17 = *param_5;
      *param_5 = param_5[1];
      uVar12 = param_5[3];
      uVar17 = uVar17 ^ uVar17 << 0xb;
      uVar17 = uVar17 ^ (int)uVar17 >> 8 ^ uVar12 ^ uVar12 >> 0x13;
      param_5[1] = param_5[2];
      param_5[2] = uVar12;
      param_5[3] = uVar17;
      param_3 = (float)(uVar17 & 0x7fffffff) * DAT_01d4bda0;
      param_4 = (1.0 - (1.0 - fVar18)) * param_3;
      puVar2[0x15] = (uint)((1.0 - fVar18) + param_4);
    }
    bVar8 = true;
    fVar19 = (float)puVar2[0x16];
  }
  else {
    bVar8 = false;
    fVar19 = (float)puVar2[0x16];
  }
  if (fVar19 == fVar25) {
    uVar17 = *param_5;
    *param_5 = param_5[1];
    uVar12 = param_5[3];
    uVar17 = uVar17 ^ uVar17 << 0xb;
    uVar17 = uVar17 ^ (int)uVar17 >> 8 ^ uVar12 ^ uVar12 >> 0x13;
    param_5[3] = uVar17;
    param_5[1] = param_5[2];
    param_5[2] = uVar12;
    param_4 = (float)(uVar17 & 0x7fffffff) * DAT_01d4bda0 * 0.5;
    puVar2[0x16] = (uint)(param_4 + 0.25);
  }
  fVar19 = (float)puVar2[0xf];
  if (fVar19 == fVar25) {
    uVar17 = *param_5;
    *param_5 = param_5[1];
    uVar12 = param_5[3];
    uVar17 = uVar17 ^ uVar17 << 0xb;
    uVar17 = uVar17 ^ (int)uVar17 >> 8 ^ uVar12 ^ uVar12 >> 0x13;
    param_5[3] = uVar17;
    param_5[1] = param_5[2];
    param_5[2] = uVar12;
    param_4 = (float)(uVar17 & 0x7fffffff) * DAT_01d4bda0 * 0.25;
    fVar19 = param_4 + 0.0;
    puVar2[0xf] = (uint)fVar19;
  }
  fVar20 = (float)puVar2[0xb];
  if (fVar20 == fVar25) {
    uVar12 = param_5[1];
    uVar17 = *param_5 ^ *param_5 << 0xb;
    uVar15 = param_5[3];
    *param_5 = param_5[2];
    param_5[1] = uVar15;
    uVar12 = uVar12 ^ uVar12 << 0xb;
    uVar17 = uVar17 ^ (int)uVar17 >> 8 ^ uVar15;
    uVar15 = uVar17 ^ uVar15 >> 0x13;
    uVar17 = uVar12 ^ (int)uVar12 >> 8 ^ uVar15 ^ uVar17 >> 0x13;
    param_5[2] = uVar15;
    param_5[3] = uVar17;
    fVar26 = powf(4.0,(float)(uVar17 & 0x7fffffff) * DAT_01d4bda0 * (float)puVar2[0xf] * -4.0);
    uVar1 = (ulong)((uVar15 & 0x7fffffff) % 6);
    fVar26 = fVar26 + fVar26;
    fVar21 = *(float *)((long)&DAT_02762ec0 + uVar1 * 0x10 + 4);
    fVar20 = fVar26 * *(float *)(&DAT_02762eb8 + uVar1 * 2);
    param_3 = fVar26 * *(float *)((long)&DAT_02762eb8 + uVar1 * 0x10 + 4);
    param_4 = fVar26 * *(float *)(&DAT_02762ec0 + uVar1 * 2);
    puVar2[0xb] = (uint)fVar20;
    puVar2[0xc] = (uint)param_3;
    puVar2[0xd] = (uint)param_4;
    puVar2[0xe] = (uint)(fVar26 * fVar21);
  }
  fVar26 = (float)puVar2[7];
  if (fVar26 == fVar25) {
    fVar26 = 1.0 - (1.0 - fVar19) * (1.0 - fVar19);
    fVar19 = 1.0 - fVar26 * fVar20;
    param_3 = 1.0 - fVar26 * (float)puVar2[0xc];
    param_4 = 1.0 - fVar26 * (float)puVar2[0xd];
    fVar26 = 1.0 - fVar26 * (float)puVar2[0xe];
    if (fVar19 <= 0.0) {
      fVar19 = 0.0;
    }
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    if (param_4 <= 0.0) {
      param_4 = 0.0;
    }
    puVar2[7] = (uint)fVar19;
    fVar19 = fVar26;
    if (fVar26 <= 0.0) {
      fVar19 = 0.0;
    }
    puVar2[8] = (uint)param_3;
    puVar2[9] = (uint)param_4;
    puVar2[10] = (uint)fVar19;
  }
  if ((float)puVar2[3] == fVar25) {
    fVar19 = (float)FUN_005a3d70(param_5);
    fVar18 = 1.0 / fVar18;
    fVar21 = fVar18 * (fVar19 + fVar19);
    fVar20 = fVar18 * (fVar26 + fVar26);
    fVar19 = fVar18 * (param_3 + param_3);
    fVar18 = fVar18 * (param_4 + param_4);
    puVar2[3] = (uint)fVar21;
    puVar2[4] = (uint)fVar20;
    puVar2[5] = (uint)fVar19;
    puVar2[6] = (uint)fVar18;
    if (bVar8) {
      fVar26 = 1.0 / ((float)puVar2[0x15] * 0.5 + 0.5);
      puVar2[5] = (uint)(fVar26 * fVar19);
      puVar2[3] = (uint)(fVar21 * fVar26);
      puVar2[4] = (uint)(fVar26 * fVar20);
      puVar2[6] = (uint)(fVar26 * fVar18);
    }
  }
  fVar18 = DAT_01d4bda0;
  fVar19 = (float)puVar2[0x1c];
  if (fVar19 == fVar25) {
    puVar2[0x1c] = 0;
    uVar12 = param_5[1];
    uVar17 = *param_5 ^ *param_5 << 0xb;
    uVar4 = param_5[2];
    uVar5 = param_5[3];
    uVar17 = uVar17 ^ (int)uVar17 >> 8 ^ uVar5;
    uVar15 = uVar17 ^ uVar5 >> 0x13;
    fVar25 = (float)(uVar15 & 0x7fffffff) * DAT_01d4bda0;
    *param_5 = uVar12;
    param_5[1] = uVar4;
    param_5[2] = uVar5;
    param_5[3] = uVar15;
    if (fVar25 <= (float)param_5[0x10]) {
      fVar25 = (float)puVar2[1];
      *param_5 = uVar5;
      param_5[1] = uVar15;
      uVar12 = uVar12 ^ uVar12 << 0xb;
      uVar15 = uVar12 ^ (int)uVar12 >> 8 ^ uVar15;
      uVar17 = uVar15 ^ uVar17 >> 0x13;
      if (fVar25 <= 0.0) {
        fVar25 = -fVar25;
      }
      fVar25 = DAT_01d4bb3c / (fVar25 * 0.5 + 0.5);
      uVar4 = uVar4 ^ uVar4 << 0xb;
      uVar12 = uVar4 ^ (int)uVar4 >> 8 ^ uVar17 ^ uVar15 >> 0x13;
      param_5[2] = uVar17;
      param_5[3] = uVar12;
      fVar19 = 1.0;
      if ((uVar12 & 1) != 0) {
        fVar19 = -1.0;
      }
      puVar2[0x1c] = (uint)(fVar19 * ((float)(uVar17 & 0x7fffffff) * fVar18 * 0.5 + 0.5) * fVar25);
    }
    if ((!bVar8) || (DAT_01d4bec4 < (float)puVar2[0x15])) {
      fVar19 = (float)puVar2[0x1c];
      goto LAB_005a3aa0;
    }
    puVar2[0x1c] = 0x3d4ccccd;
LAB_005a3ae8:
    uVar17 = param_5[0xf];
    uVar12 = uVar17 - 1;
    uVar15 = uVar17;
    if (-1 < (int)uVar12) {
      uVar15 = uVar12;
    }
    if (-1 < (int)uVar17) {
      iVar10 = (int)uVar15 >> 1;
      if (1 < iVar10) {
        iVar10 = 2;
      }
      lVar13 = (long)iVar10;
      bVar3 = *PTR_DAT_02713d48;
      goto joined_r0x005a3ac0;
    }
    bVar3 = *PTR_DAT_02713d48;
  }
  else {
LAB_005a3aa0:
    if (fVar19 != 0.0) goto LAB_005a3ae8;
    uVar12 = 0;
    uVar17 = 1;
    bVar3 = *PTR_DAT_02713d48;
  }
  lVar13 = 0;
joined_r0x005a3ac0:
  fVar25 = DAT_01d4c558;
  if (((bVar3 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_02713d48), puVar9 = PTR_DAT_02713d50,
     fVar25 = DAT_01d4c558, iVar10 != 0)) {
    *(undefined8 *)(PTR_DAT_02713d50 + 0x5c) = 0;
    *(undefined8 *)puVar9 = 0x3f8000003f800000;
    *(undefined8 *)(puVar9 + 8) = 0x3f8000003f800000;
    *(undefined8 *)(puVar9 + 0xb0) = 0x3e8000003f000000;
    *(undefined8 *)(puVar9 + 0xb8) = 0;
    *(undefined8 *)(puVar9 + 0x68) = 0;
    *(undefined8 *)(puVar9 + 0x70) = 0;
    *(undefined4 *)(puVar9 + 0x50) = 0x3f800000;
    *(undefined4 *)(puVar9 + 100) = 0x3f800000;
    *(undefined8 *)(puVar9 + 0x78) = 0x3f800000;
    *(undefined8 *)(puVar9 + 0x54) = 0;
    *(undefined4 *)(puVar9 + 0xd8) = 0x3f000000;
    *(undefined4 *)(puVar9 + 0xdc) = 0;
    *(undefined8 *)(puVar9 + 0xe0) = 0;
    *(undefined4 *)(puVar9 + 0xe8) = 0x3f000000;
    *(undefined4 *)(puVar9 + 0xec) = 0;
    *(undefined8 *)(puVar9 + 0xc0) = 0x3f00000000000000;
    *(undefined8 *)(puVar9 + 200) = 0;
    *(undefined8 *)(puVar9 + 0xd0) = 0x3e80000000000000;
    *(undefined8 *)(puVar9 + 0xa0) = 0x3f000000;
    *(undefined8 *)(puVar9 + 0xa8) = 0;
    __cxa_guard_release(PTR_DAT_02713d48);
    fVar25 = DAT_01d4c558;
  }
  DAT_01d4c558 = fVar25;
  if (0 < (int)uVar17) {
    uVar15 = param_5[4];
    lVar11 = 0;
    pfVar14 = (float *)(PTR_DAT_02713d50 + lVar13 * 0x50 + 8);
    do {
      if (0x3f < (int)uVar15) break;
      fVar18 = 0.0;
      if (uVar17 != 1) {
        fVar18 = (float)puVar2[0x1c] * -0.5;
        fVar18 = fVar18 + ((float)(int)lVar11 / (float)(int)uVar12) *
                          ((float)puVar2[0x1c] * 0.5 - fVar18);
      }
      fVar19 = (float)puVar2[1];
      puVar16 = (uint *)(*(long *)(param_5 + 6) + (long)(int)uVar15 * 0x6c);
      puVar16[1] = (uint)(fVar18 + fVar19);
      fVar19 = (float)puVar2[1] / (fVar18 + fVar19);
      puVar16[3] = (uint)((float)puVar2[2] * fVar19);
      lVar11 = lVar11 + 1;
      fVar20 = (float)puVar2[3];
      fVar26 = pfVar14[-2];
      fVar24 = (float)puVar2[5];
      fVar27 = (float)puVar2[6];
      fVar21 = *pfVar14;
      fVar22 = pfVar14[1];
      puVar16[7] = (uint)((float)puVar2[4] * pfVar14[-1]);
      puVar16[6] = (uint)(fVar20 * fVar26);
      puVar16[9] = (uint)(fVar27 * fVar22);
      puVar16[8] = (uint)(fVar24 * fVar21);
      uVar6 = *(undefined8 *)(puVar2 + 9);
      *(undefined8 *)(puVar16 + 10) = *(undefined8 *)(puVar2 + 7);
      *(undefined8 *)(puVar16 + 0xc) = uVar6;
      uVar6 = *(undefined8 *)(puVar2 + 0xd);
      *(undefined8 *)(puVar16 + 0xe) = *(undefined8 *)(puVar2 + 0xb);
      *(undefined8 *)(puVar16 + 0x10) = uVar6;
      puVar16[0x12] = puVar2[0xf];
      puVar16[2] = puVar2[0x10];
      puVar16[5] = puVar2[0x11];
      puVar16[4] = (uint)((float)puVar2[0x12] + fVar18 * fVar25);
      puVar16[0x13] = (uint)(fVar19 * (float)puVar2[0x13]);
      puVar16[0x14] = (uint)((float)puVar2[0x14] / fVar19);
      puVar16[0x15] = puVar2[0x15];
      puVar16[0x16] = puVar2[0x16];
      *(undefined8 *)(puVar16 + 0x17) = *(undefined8 *)(puVar2 + 0x17);
      *(undefined8 *)(puVar16 + 0x19) = *(undefined8 *)(puVar2 + 0x19);
      *puVar16 = *puVar2;
      uVar15 = param_5[4] + 1;
      param_5[4] = uVar15;
      pfVar14 = pfVar14 + 4;
    } while (lVar11 < (int)uVar17);
  }
  param_5[5] = param_5[5] + 1;
  return;
}


