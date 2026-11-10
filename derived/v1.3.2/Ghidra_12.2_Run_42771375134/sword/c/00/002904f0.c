/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002904f0; name: FUN_002904f0
 */


void FUN_002904f0(float param_1,long param_2,long param_3,uint param_4)

{
  undefined8 *puVar1;
  byte *pbVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar35;
  ulong uVar33;
  ulong uVar34;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar47 [16];
  float fVar49;
  undefined1 auVar48 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [12];
  undefined1 auVar53 [16];
  int iVar54;
  ulong uVar55;
  float fVar56;
  float fVar59;
  undefined8 uVar57;
  undefined1 auVar58 [16];
  byte local_90 [64];
  
  fVar32 = *(float *)(param_3 + 0x2c);
  local_90[0] = 0;
  uVar33 = (ulong)(uint)fVar32;
  if (param_4 < 2) {
    uVar31 = 0xff7fffffff7fffff;
    uVar9 = 0;
    uVar8 = 0;
  }
  else {
    uVar31 = 0xff7fffffff7fffff;
    uVar9 = 0;
    lVar10 = param_3 + 0x50;
    uVar13 = 1;
    uVar7 = 0;
    do {
      local_90[uVar13] = (byte)uVar13;
      puVar1 = (undefined8 *)(lVar10 + 8);
      lVar10 = lVar10 + 0x30;
      fVar35 = (float)((ulong)*puVar1 >> 0x20);
      bVar3 = fVar35 < (float)uVar33;
      uVar33 = uVar33 ^ (uVar33 ^ CONCAT44(fVar35,fVar35)) & (ulong)-(uint)bVar3;
      fVar32 = (float)uVar33;
      uVar31 = NEON_fmax(uVar31,CONCAT44(fVar35,fVar35),4);
      uVar8 = (uint)uVar13;
      uVar14 = (uint)uVar13;
      if (!bVar3) {
        uVar8 = uVar7;
        uVar14 = uVar9;
      }
      uVar9 = uVar14;
      uVar13 = uVar13 + 1;
      uVar7 = uVar8;
    } while (param_4 != uVar13);
  }
  uVar7 = param_4 - 1;
  local_90[uVar9] = local_90[uVar7];
  lVar10 = param_3 + (ulong)(uVar8 & 0xff) * 0x30;
  uVar57 = *(undefined8 *)(lVar10 + 0x18);
  uVar40 = *(undefined8 *)(lVar10 + 0x10);
  uVar33 = (ulong)local_90[0];
  fVar35 = (float)uVar40;
  fVar36 = (float)((ulong)uVar40 >> 0x20);
  fVar37 = (float)uVar57;
  fVar38 = (float)((ulong)uVar57 >> 0x20);
  if (uVar7 < 2) {
    uVar9 = 0;
  }
  else {
    lVar10 = param_3 + uVar33 * 0x30;
    fVar39 = *(float *)(lVar10 + 0x10) - fVar35;
    fVar44 = *(float *)(lVar10 + 0x14) - fVar36;
    fVar45 = *(float *)(lVar10 + 0x18) - fVar37;
    fVar46 = *(float *)(lVar10 + 0x1c) - fVar38;
    uVar13 = 1;
    auVar50._0_4_ = fVar39 * fVar39;
    auVar50._4_4_ = fVar44 * fVar44;
    auVar50._8_4_ = fVar45 * fVar45;
    auVar50._12_4_ = fVar46 * fVar46;
    auVar47 = NEON_ext(auVar50,auVar50,8,1);
    fVar39 = auVar50._0_4_ + auVar50._4_4_ + auVar47._0_4_ + auVar47._4_4_;
    uVar14 = 0;
    do {
      pbVar2 = local_90 + uVar13;
      lVar10 = param_3 + (ulong)*pbVar2 * 0x30;
      fVar44 = *(float *)(lVar10 + 0x10) - fVar35;
      fVar45 = *(float *)(lVar10 + 0x14) - fVar36;
      fVar46 = *(float *)(lVar10 + 0x18) - fVar37;
      fVar49 = *(float *)(lVar10 + 0x1c) - fVar38;
      auVar47._0_4_ = fVar44 * fVar44;
      auVar47._4_4_ = fVar45 * fVar45;
      auVar47._8_4_ = fVar46 * fVar46;
      auVar47._12_4_ = fVar49 * fVar49;
      auVar50 = NEON_ext(auVar47,auVar47,8,1);
      fVar44 = auVar47._0_4_ + auVar47._4_4_ + auVar50._0_4_ + auVar50._4_4_;
      bVar3 = fVar39 < fVar44;
      fVar39 = (float)((uint)fVar39 ^ ((uint)fVar39 ^ (uint)fVar44) & -(uint)bVar3);
      uVar9 = (uint)uVar13;
      if (!bVar3) {
        uVar9 = uVar14;
      }
      uVar13 = uVar13 + 1;
      uVar14 = (uint)*pbVar2;
      if (!bVar3) {
        uVar14 = (uint)uVar33;
      }
      uVar33 = (ulong)uVar14;
      uVar14 = uVar9;
    } while (uVar7 != uVar13);
  }
  uVar7 = param_4 - 2;
  local_90[uVar9] = local_90[uVar7];
  lVar10 = param_3 + uVar33 * 0x30;
  auVar50 = *(undefined1 (*) [16])(param_3 + (ulong)(uVar8 & 0xff) * 0x30 + 0x20);
  fVar39 = auVar50._4_4_;
  auVar41._0_4_ = *(float *)(lVar10 + 0x10) - fVar35;
  auVar41._4_4_ = *(float *)(lVar10 + 0x14) - fVar36;
  auVar41._8_4_ = *(float *)(lVar10 + 0x18) - fVar37;
  auVar41._12_4_ = *(float *)(lVar10 + 0x1c) - fVar38;
  auVar47 = NEON_ext(auVar41,auVar41,8,1);
  auVar43._0_12_ = auVar50._0_12_;
  auVar43._12_4_ = 0;
  auVar58 = NEON_ext(auVar43,auVar43,8,1);
  fVar49 = auVar41._0_4_ * fVar39 - auVar41._4_4_ * auVar50._0_4_;
  uVar40 = NEON_ext(CONCAT44(auVar41._4_4_ * auVar50._8_4_ - auVar41._8_4_ * fVar39,fVar49),
                    CONCAT44(auVar47._4_4_ * fVar39 - auVar41._4_4_ * auVar58._4_4_,
                             auVar47._0_4_ * auVar50._0_4_ - auVar41._0_4_ * auVar58._0_4_),4,1);
  fVar45 = (float)uVar40;
  auVar53._0_4_ = fVar45 * fVar45;
  fVar46 = (float)((ulong)uVar40 >> 0x20);
  auVar53._4_4_ = fVar46 * fVar46;
  auVar53._8_4_ = fVar49 * fVar49;
  auVar53._12_4_ = 0;
  auVar50 = NEON_ext(auVar53,auVar53,8,1);
  fVar44 = auVar50._0_4_ + auVar50._4_4_;
  fVar39 = auVar53._0_4_ + auVar53._4_4_ + fVar44;
  fVar44 = auVar53._0_4_ + auVar53._4_4_ + fVar44;
  uVar13 = CONCAT44(fVar44,fVar39);
  uVar40 = NEON_frsqrte(uVar13,4);
  fVar56 = (float)uVar40;
  fVar59 = (float)((ulong)uVar40 >> 0x20);
  uVar40 = NEON_frsqrts(CONCAT44(fVar59 * fVar59,fVar56 * fVar56),uVar13,4);
  fVar56 = fVar56 * (float)uVar40;
  fVar59 = fVar59 * (float)((ulong)uVar40 >> 0x20);
  uVar40 = NEON_frsqrts(CONCAT44(fVar59 * fVar59,fVar56 * fVar56),uVar13,4);
  fVar56 = fVar56 * (float)uVar40;
  fVar59 = fVar59 * (float)((ulong)uVar40 >> 0x20);
  uVar40 = NEON_frsqrts(CONCAT44(fVar59 * fVar59,fVar56 * fVar56),uVar13,4);
  fVar56 = fVar56 * (float)uVar40;
  fVar59 = fVar59 * (float)((ulong)uVar40 >> 0x20);
  uVar40 = NEON_frsqrts(CONCAT44(fVar59 * fVar59,fVar56 * fVar56),uVar13,4);
  uVar55 = CONCAT44(fVar44 * fVar59 * (float)((ulong)uVar40 >> 0x20),fVar39 * fVar56 * (float)uVar40
                   );
  uVar55 = uVar55 ^ (uVar55 ^ uVar13) & CONCAT44(-(uint)(fVar39 == 0.0),-(uint)(fVar39 == 0.0));
  iVar54 = -(uint)(0.0 < fVar39);
  uVar40 = NEON_frecpe(uVar55,4);
  uVar57 = NEON_frecps(uVar55,uVar40,4);
  fVar39 = (float)uVar40 * (float)uVar57;
  fVar44 = (float)((ulong)uVar40 >> 0x20) * (float)((ulong)uVar57 >> 0x20);
  uVar40 = NEON_frecps(uVar55,CONCAT44(fVar44,fVar39),4);
  fVar39 = fVar39 * (float)uVar40;
  fVar44 = fVar44 * (float)((ulong)uVar40 >> 0x20);
  uVar40 = NEON_frecps(uVar55,CONCAT44(fVar44,fVar39),4);
  fVar39 = fVar39 * (float)uVar40;
  fVar44 = fVar44 * (float)((ulong)uVar40 >> 0x20);
  uVar40 = NEON_frecps(uVar55,CONCAT44(fVar44,fVar39),4);
  fVar39 = fVar39 * (float)uVar40;
  uVar40 = NEON_frecps(uVar55,CONCAT44(fVar44 * (float)((ulong)uVar40 >> 0x20),fVar39),4);
  fVar39 = fVar39 * (float)uVar40;
  auVar52._0_4_ = fVar45 * fVar39;
  auVar52._4_4_ = fVar46 * fVar39;
  auVar52._8_4_ = fVar49 * fVar39;
  auVar42._4_4_ = iVar54;
  auVar42._0_4_ = iVar54;
  auVar42._8_4_ = iVar54;
  auVar42._12_4_ = iVar54;
  auVar58._12_4_ = 0;
  auVar58._0_12_ = auVar43._0_12_ ^ auVar52;
  auVar43 = auVar43 ^ auVar58 & auVar42;
  if (uVar7 == 0) {
    fVar44 = 3.4028235e+38;
    fVar39 = -3.4028235e+38;
    bVar16 = 0xff;
    uVar9 = 0xffffffff;
    uVar14 = 0xffffffff;
    bVar18 = 0xff;
  }
  else {
    fVar44 = 3.4028235e+38;
    fVar39 = -3.4028235e+38;
    uVar13 = 0;
    uVar14 = 0xffffffff;
    uVar11 = 0xffffffff;
    bVar15 = 0xff;
    bVar17 = 0xff;
    do {
      bVar16 = local_90[uVar13];
      lVar10 = param_3 + (ulong)bVar16 * 0x30;
      auVar48._0_4_ = (*(float *)(lVar10 + 0x10) - fVar35) * auVar43._0_4_;
      auVar48._4_4_ = (*(float *)(lVar10 + 0x14) - fVar36) * auVar43._4_4_;
      auVar48._8_4_ = (*(float *)(lVar10 + 0x18) - fVar37) * auVar43._8_4_;
      auVar48._12_4_ = (*(float *)(lVar10 + 0x1c) - fVar38) * auVar43._12_4_;
      auVar50 = NEON_ext(auVar48,auVar48,8,1);
      fVar45 = auVar48._0_4_ + auVar48._4_4_ + auVar50._0_4_ + auVar50._4_4_;
      bVar3 = fVar45 < fVar44;
      bVar18 = bVar16;
      uVar9 = (uint)uVar13;
      if (fVar39 >= fVar45) {
        bVar18 = bVar17;
        uVar9 = uVar14;
      }
      uVar14 = uVar9;
      uVar9 = (uint)uVar13;
      if (!bVar3) {
        uVar9 = uVar11;
      }
      fVar44 = (float)((uint)fVar44 ^ ((uint)fVar44 ^ (uint)fVar45) & -(uint)bVar3);
      fVar39 = (float)((uint)fVar39 ^ ((uint)fVar39 ^ (uint)fVar45) & -(uint)(fVar39 < fVar45));
      uVar13 = uVar13 + 1;
      if (!bVar3) {
        bVar16 = bVar15;
      }
      uVar11 = uVar9;
      bVar15 = bVar16;
      bVar17 = bVar18;
    } while (uVar7 != uVar13);
  }
  uVar7 = param_4 - 3;
  local_90[uVar14] = local_90[uVar7];
  if (uVar7 != uVar9) {
    uVar14 = uVar9;
  }
  if ((0.0 < fVar39 * fVar44) && (uVar7 != 0)) {
    fVar39 = -3.4028235e+38;
    uVar13 = 0;
    do {
      lVar10 = param_3 + (ulong)local_90[uVar13] * 0x30;
      auVar51._0_4_ = (*(float *)(lVar10 + 0x10) - fVar35) * auVar43._0_4_;
      auVar51._4_4_ = (*(float *)(lVar10 + 0x14) - fVar36) * auVar43._4_4_;
      auVar51._8_4_ = (*(float *)(lVar10 + 0x18) - fVar37) * auVar43._8_4_;
      auVar51._12_4_ = (*(float *)(lVar10 + 0x1c) - fVar38) * auVar43._12_4_;
      auVar50 = NEON_ext(auVar51,auVar51,8,1);
      fVar44 = auVar51._0_4_ + auVar51._4_4_ + auVar50._0_4_ + auVar50._4_4_;
      bVar3 = fVar39 < fVar44;
      fVar39 = (float)((uint)fVar39 ^ ((uint)fVar39 ^ (uint)fVar44) & -(uint)bVar3);
      bVar15 = local_90[uVar13];
      uVar9 = (uint)uVar13;
      if (!bVar3) {
        bVar15 = bVar16;
        uVar9 = uVar14;
      }
      uVar14 = uVar9;
      bVar16 = bVar15;
      uVar13 = uVar13 + 1;
    } while (uVar7 != uVar13);
  }
  param_4 = param_4 - 4;
  uVar13 = (ulong)param_4;
  local_90[uVar14] = local_90[uVar13];
  param_1 = param_1 * DAT_01d4c15c;
  bVar3 = fVar32 < param_1 && param_1 < (float)uVar31;
  iVar54 = -(uint)bVar3;
  iVar6 = -(uint)bVar3;
  uVar19 = (undefined1)iVar6;
  uVar20 = (undefined1)((uint)iVar6 >> 8);
  uVar21 = (undefined1)((uint)iVar6 >> 0x10);
  uVar22 = (undefined1)((uint)iVar6 >> 0x18);
  iVar6 = -(uint)bVar3;
  uVar23 = (undefined1)iVar6;
  uVar24 = (undefined1)((uint)iVar6 >> 8);
  uVar25 = (undefined1)((uint)iVar6 >> 0x10);
  uVar26 = (undefined1)((uint)iVar6 >> 0x18);
  iVar6 = -(uint)bVar3;
  uVar27 = (undefined1)iVar6;
  uVar28 = (undefined1)((uint)iVar6 >> 8);
  uVar29 = (undefined1)((uint)iVar6 >> 0x10);
  uVar30 = (undefined1)((uint)iVar6 >> 0x18);
  auVar4[4] = uVar19;
  auVar4._0_4_ = iVar54;
  auVar4[5] = uVar20;
  auVar4[6] = uVar21;
  auVar4[7] = uVar22;
  auVar4[8] = uVar23;
  auVar4[9] = uVar24;
  auVar4[10] = uVar25;
  auVar4[0xb] = uVar26;
  auVar4[0xc] = uVar27;
  auVar4[0xd] = uVar28;
  auVar4[0xe] = uVar29;
  auVar4[0xf] = uVar30;
  auVar5[4] = uVar19;
  auVar5._0_4_ = iVar54;
  auVar5[5] = uVar20;
  auVar5[6] = uVar21;
  auVar5[7] = uVar22;
  auVar5[8] = uVar23;
  auVar5[9] = uVar24;
  auVar5[10] = uVar25;
  auVar5[0xb] = uVar26;
  auVar5[0xc] = uVar27;
  auVar5[0xd] = uVar28;
  auVar5[0xe] = uVar29;
  auVar5[0xf] = uVar30;
  NEON_ext(auVar4,auVar5,8,1);
  if (CONCAT13(uVar27,CONCAT12(uVar23,CONCAT11(uVar19,(char)iVar54))) == -1) {
    uVar55 = (ulong)(uVar8 & 0xff);
    if (param_4 != 0) {
      uVar31 = *(undefined8 *)(param_3 + uVar55 * 0x30 + 0x28);
      uVar19 = (undefined1)((ulong)uVar31 >> 0x20);
      uVar20 = (undefined1)((ulong)uVar31 >> 0x28);
      uVar21 = (undefined1)((ulong)uVar31 >> 0x30);
      uVar22 = (undefined1)((ulong)uVar31 >> 0x38);
      if (param_1 < (float)((ulong)uVar31 >> 0x20)) {
        uVar12 = 0;
        uVar9 = 0xffffffff;
        do {
          fVar32 = (float)((ulong)*(undefined8 *)(param_3 + (ulong)local_90[uVar12] * 0x30 + 0x28)
                          >> 0x20);
          uVar7 = uVar9;
          if (fVar32 < (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19)))) {
            uVar34 = (ulong)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19))) ^
                     ((ulong)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19))) ^
                     CONCAT44(fVar32,fVar32)) & (ulong)-(uint)(fVar32 < param_1);
            uVar19 = (undefined1)uVar34;
            uVar20 = (undefined1)(uVar34 >> 8);
            uVar21 = (undefined1)(uVar34 >> 0x10);
            uVar22 = (undefined1)(uVar34 >> 0x18);
            uVar7 = (uint)uVar12;
            if (fVar32 >= param_1) {
              uVar7 = uVar9;
            }
          }
          uVar12 = uVar12 + 1;
          uVar9 = uVar7;
        } while (uVar13 != uVar12);
        if (uVar7 < param_4) {
          uVar55 = (ulong)local_90[uVar7];
          local_90[uVar7] = (byte)uVar8;
        }
      }
      memcpy(*(void **)(param_2 + 0x30),(void *)(param_3 + uVar55 * 0x30),0x30);
      uVar31 = *(undefined8 *)(param_3 + uVar33 * 0x30 + 0x28);
      uVar19 = (undefined1)((ulong)uVar31 >> 0x20);
      uVar20 = (undefined1)((ulong)uVar31 >> 0x28);
      uVar21 = (undefined1)((ulong)uVar31 >> 0x30);
      uVar22 = (undefined1)((ulong)uVar31 >> 0x38);
      uVar55 = uVar33;
      if (param_1 < (float)((ulong)uVar31 >> 0x20)) {
        uVar12 = 0;
        uVar8 = 0xffffffff;
        do {
          fVar32 = (float)((ulong)*(undefined8 *)(param_3 + (ulong)local_90[uVar12] * 0x30 + 0x28)
                          >> 0x20);
          uVar9 = uVar8;
          if (fVar32 < (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19)))) {
            uVar34 = (ulong)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19))) ^
                     ((ulong)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19))) ^
                     CONCAT44(fVar32,fVar32)) & (ulong)-(uint)(fVar32 < param_1);
            uVar19 = (undefined1)uVar34;
            uVar20 = (undefined1)(uVar34 >> 8);
            uVar21 = (undefined1)(uVar34 >> 0x10);
            uVar22 = (undefined1)(uVar34 >> 0x18);
            uVar9 = (uint)uVar12;
            if (fVar32 >= param_1) {
              uVar9 = uVar8;
            }
          }
          uVar12 = uVar12 + 1;
          uVar8 = uVar9;
        } while (uVar13 != uVar12);
        if (uVar9 < param_4) {
          uVar55 = (ulong)local_90[uVar9];
          local_90[uVar9] = (byte)uVar33;
        }
      }
      memcpy((void *)(*(long *)(param_2 + 0x30) + 0x30),(void *)(param_3 + uVar55 * 0x30),0x30);
      uVar33 = (ulong)bVar18;
      uVar31 = *(undefined8 *)(param_3 + uVar33 * 0x30 + 0x28);
      uVar19 = (undefined1)((ulong)uVar31 >> 0x20);
      uVar20 = (undefined1)((ulong)uVar31 >> 0x28);
      uVar21 = (undefined1)((ulong)uVar31 >> 0x30);
      uVar22 = (undefined1)((ulong)uVar31 >> 0x38);
      if (param_1 < (float)((ulong)uVar31 >> 0x20)) {
        uVar55 = 0;
        uVar8 = 0xffffffff;
        do {
          fVar32 = (float)((ulong)*(undefined8 *)(param_3 + (ulong)local_90[uVar55] * 0x30 + 0x28)
                          >> 0x20);
          uVar9 = uVar8;
          if (fVar32 < (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19)))) {
            uVar12 = (ulong)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19))) ^
                     ((ulong)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19))) ^
                     CONCAT44(fVar32,fVar32)) & (ulong)-(uint)(fVar32 < param_1);
            uVar19 = (undefined1)uVar12;
            uVar20 = (undefined1)(uVar12 >> 8);
            uVar21 = (undefined1)(uVar12 >> 0x10);
            uVar22 = (undefined1)(uVar12 >> 0x18);
            uVar9 = (uint)uVar55;
            if (fVar32 >= param_1) {
              uVar9 = uVar8;
            }
          }
          uVar55 = uVar55 + 1;
          uVar8 = uVar9;
        } while (uVar13 != uVar55);
        if (uVar9 < param_4) {
          uVar33 = (ulong)local_90[uVar9];
          local_90[uVar9] = bVar18;
        }
      }
      memcpy((void *)(*(long *)(param_2 + 0x30) + 0x60),(void *)(param_3 + uVar33 * 0x30),0x30);
      uVar33 = (ulong)bVar16;
      uVar31 = *(undefined8 *)(param_3 + uVar33 * 0x30 + 0x28);
      uVar19 = (undefined1)((ulong)uVar31 >> 0x20);
      uVar20 = (undefined1)((ulong)uVar31 >> 0x28);
      uVar21 = (undefined1)((ulong)uVar31 >> 0x30);
      uVar22 = (undefined1)((ulong)uVar31 >> 0x38);
      if (param_1 < (float)((ulong)uVar31 >> 0x20)) {
        uVar55 = 0;
        uVar8 = 0xffffffff;
        do {
          fVar32 = (float)((ulong)*(undefined8 *)(param_3 + (ulong)local_90[uVar55] * 0x30 + 0x28)
                          >> 0x20);
          uVar9 = uVar8;
          if (fVar32 < (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19)))) {
            uVar12 = (ulong)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19))) ^
                     ((ulong)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19))) ^
                     CONCAT44(fVar32,fVar32)) & (ulong)-(uint)(fVar32 < param_1);
            uVar19 = (undefined1)uVar12;
            uVar20 = (undefined1)(uVar12 >> 8);
            uVar21 = (undefined1)(uVar12 >> 0x10);
            uVar22 = (undefined1)(uVar12 >> 0x18);
            uVar9 = (uint)uVar55;
            if (fVar32 >= param_1) {
              uVar9 = uVar8;
            }
          }
          uVar55 = uVar55 + 1;
          uVar8 = uVar9;
        } while (uVar13 != uVar55);
        if (uVar9 < param_4) {
          uVar33 = (ulong)local_90[uVar9];
          local_90[uVar9] = bVar16;
        }
      }
      goto LAB_00290bb0;
    }
  }
  else {
    uVar55 = (ulong)(uVar8 & 0xff);
  }
  memcpy(*(void **)(param_2 + 0x30),(void *)(param_3 + uVar55 * 0x30),0x30);
  memcpy((void *)(*(long *)(param_2 + 0x30) + 0x30),(void *)(param_3 + uVar33 * 0x30),0x30);
  memcpy((void *)(*(long *)(param_2 + 0x30) + 0x60),(void *)(param_3 + (ulong)bVar18 * 0x30),0x30);
  uVar33 = (ulong)bVar16;
LAB_00290bb0:
  memcpy((void *)(*(long *)(param_2 + 0x30) + 0x90),(void *)(param_3 + uVar33 * 0x30),0x30);
  return;
}


