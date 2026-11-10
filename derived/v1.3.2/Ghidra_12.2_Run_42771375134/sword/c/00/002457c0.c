/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002457c0; name: FUN_002457c0
 */


undefined8
FUN_002457c0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
            undefined1 (*param_5) [16],float *param_6,uint param_7,uint param_8)

{
  undefined1 (*pauVar1) [12];
  undefined4 uVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  ulong uVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  undefined8 uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float fStack_5c;
  float local_58;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    return 0;
  }
  pauVar1 = (undefined1 (*) [12])(param_1 + 0x70);
  fVar19 = (float)*(undefined8 *)(param_1 + 0x78);
  fVar20 = (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
  auVar16 = *pauVar1;
  auVar15 = *pauVar1;
  fVar21 = (float)*(undefined8 *)*pauVar1;
  fVar22 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  uVar23 = *(undefined8 *)(param_1 + 0x88);
  uVar40 = *(undefined8 *)(param_1 + 0x80);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0xa0);
  if (*(char *)(param_1 + 0xf) == '\0') {
    uVar2 = *(undefined4 *)(param_1 + 0x20);
    *(undefined2 *)(param_2 + 0x14) = 0x404;
    *(undefined4 *)(param_2 + 0x30) = uVar2;
    uVar3 = *(ushort *)(param_1 + 0xc);
    if ((uVar3 >> 8 & 1) == 0) {
      fVar26 = -(float)uVar40;
      fVar27 = -(float)((ulong)uVar40 >> 0x20);
      fVar28 = -(float)uVar23;
      auVar14 = *(undefined1 (*) [12])param_5[1];
      auVar41 = *param_5;
      *(undefined2 *)(param_2 + 0x14) = 0x407;
      if ((((param_7 & 1) != 0) && ((param_8 & 1) == 0)) &&
         (fVar29 = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x4c),
         fVar32 = *(float *)(param_1 + 100) - *(float *)(param_1 + 0x4c),
         fVar36 = *(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x50),
         fVar39 = *(float *)(param_1 + 0x60) - *(float *)(param_1 + 0x54),
         fVar34 = *(float *)(param_1 + 0x68) - *(float *)(param_1 + 0x50),
         fVar25 = *(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0x54),
         0.0 < (fVar29 * fVar34 - fVar36 * fVar32) * param_6[2] +
               *param_6 * (fVar36 * fVar25 - fVar39 * fVar34) +
               param_6[1] * (fVar39 * fVar32 - fVar29 * fVar25))) {
        fVar26 = -fVar26;
        fVar27 = -fVar27;
        fVar28 = -fVar28;
      }
      fVar34 = auVar41._8_4_;
      fVar29 = auVar41._0_4_;
      fVar32 = auVar41._4_4_;
      fVar25 = auVar41._12_4_;
      fVar33 = fVar25 * fVar25 + -0.5;
      auVar38._12_4_ = 0;
      auVar38._0_12_ = auVar41._0_12_;
      auVar7._12_4_ = 0;
      auVar7._0_12_ = auVar41._0_12_;
      auVar30 = NEON_ext(auVar38,auVar7,8,1);
      auVar8._4_4_ = fVar27;
      auVar8._0_4_ = fVar26;
      auVar8._8_4_ = fVar28;
      auVar8._12_4_ = 0;
      auVar9._4_4_ = fVar27;
      auVar9._0_4_ = fVar26;
      auVar9._8_4_ = fVar28;
      auVar9._12_4_ = 0;
      auVar41 = NEON_ext(auVar8,auVar9,8,1);
      fVar36 = fVar29 * fVar26;
      fVar39 = fVar32 * fVar27;
      fVar44 = fVar29 * fVar27 - fVar32 * fVar26;
      uVar40 = NEON_ext(CONCAT44(fVar32 * fVar28 - fVar34 * fVar27,fVar44),
                        CONCAT44(auVar30._4_4_ * fVar27 - fVar32 * auVar41._4_4_,
                                 auVar30._0_4_ * fVar26 - fVar29 * auVar41._0_4_),4,1);
      auVar37._0_4_ = fVar26 * fVar33 + (float)uVar40 * fVar25;
      auVar37._4_4_ = fVar27 * fVar33 + (float)((ulong)uVar40 >> 0x20) * fVar25;
      auVar37._8_4_ = fVar28 * fVar33 + fVar44 * fVar25;
      auVar37._12_4_ = fVar25 * 0.0 + 0.0;
      fVar35 = fVar22 * fVar29 - fVar21 * fVar32;
      auVar42 = NEON_ext(auVar37,auVar37,8,1);
      auVar10._4_4_ = fVar39;
      auVar10._0_4_ = fVar36;
      auVar10._8_4_ = fVar34 * fVar28;
      auVar10._12_4_ = 0;
      auVar11._4_4_ = fVar39;
      auVar11._0_4_ = fVar36;
      auVar11._8_4_ = fVar34 * fVar28;
      auVar11._12_4_ = 0;
      auVar43 = NEON_ext(auVar10,auVar11,8,1);
      auVar41._12_4_ = fVar20;
      auVar41._0_12_ = auVar15;
      auVar31._12_4_ = fVar20;
      auVar31._0_12_ = auVar16;
      auVar41 = NEON_ext(auVar41,auVar31,8,1);
      fVar27 = fVar21 * fVar29;
      fVar28 = fVar22 * fVar32;
      fVar26 = fVar36 + fVar39 + auVar43._0_4_ + auVar43._4_4_;
      uVar40 = NEON_ext(CONCAT44(fVar19 * fVar32 - fVar22 * fVar34,fVar35),
                        CONCAT44(fVar22 * auVar30._4_4_ - auVar41._4_4_ * fVar32,
                                 fVar21 * auVar30._0_4_ - auVar41._0_4_ * fVar29),4,1);
      fVar36 = fVar29 * fVar26 + auVar37._0_4_;
      fVar39 = fVar32 * fVar26 + auVar37._4_4_;
      fVar44 = fVar34 * fVar26 + auVar42._0_4_;
      fVar26 = fVar26 * 0.0 + 0.0;
      auVar12._4_4_ = fVar39;
      auVar12._0_4_ = fVar36;
      auVar12._8_4_ = fVar44;
      auVar12._12_4_ = fVar26;
      auVar13._4_4_ = fVar39;
      auVar13._0_4_ = fVar36;
      auVar13._8_4_ = fVar44;
      auVar13._12_4_ = fVar26;
      auVar38 = NEON_ext(auVar12,auVar13,8,1);
      auVar24._0_4_ = fVar21 * fVar33 + (float)uVar40 * fVar25;
      auVar24._4_4_ = fVar22 * fVar33 + (float)((ulong)uVar40 >> 0x20) * fVar25;
      auVar24._8_4_ = fVar19 * fVar33 + fVar35 * fVar25;
      auVar24._12_4_ = fVar25 * 0.0 + 0.0;
      auVar41 = NEON_ext(auVar24,auVar24,8,1);
      auVar30._4_4_ = fVar28;
      auVar30._0_4_ = fVar27;
      auVar30._8_4_ = fVar19 * fVar34;
      auVar30._12_4_ = fVar20 * 0.0;
      auVar42._4_4_ = fVar28;
      auVar42._0_4_ = fVar27;
      auVar42._8_4_ = fVar19 * fVar34;
      auVar42._12_4_ = fVar20 * 0.0;
      auVar31 = NEON_ext(auVar30,auVar42,8,1);
      fVar21 = fVar27 + fVar28 + auVar31._0_4_ + auVar31._4_4_;
      fVar22 = auVar24._0_4_ + fVar29 * fVar21;
      fVar19 = auVar24._4_4_ + fVar32 * fVar21;
      fVar20 = auVar41._0_4_ + fVar34 * fVar21;
      fVar21 = fVar21 * 0.0 + 0.0;
      auVar43._4_4_ = fVar19;
      auVar43._0_4_ = fVar22;
      auVar43._8_4_ = fVar20;
      auVar43._12_4_ = fVar21;
      auVar4._4_4_ = fVar19;
      auVar4._0_4_ = fVar22;
      auVar4._8_4_ = fVar20;
      auVar4._12_4_ = fVar21;
      auVar41 = NEON_ext(auVar43,auVar4,8,1);
      fVar21 = auVar14._0_4_ + fVar22 + fVar22;
      fVar22 = auVar14._4_4_ + fVar19 + fVar19;
      fVar19 = auVar14._8_4_ + auVar41._0_4_ + auVar41._0_4_;
      auVar5._4_4_ = fVar22;
      auVar5._0_4_ = fVar21;
      auVar5._8_4_ = fVar19;
      auVar5._12_4_ = 0;
      auVar6._4_4_ = fVar22;
      auVar6._0_4_ = fVar21;
      auVar6._8_4_ = fVar19;
      auVar6._12_4_ = 0;
      auVar41 = NEON_ext(auVar5,auVar6,8,1);
      *(ulong *)(param_2 + 0x18) = CONCAT44(fVar22,fVar21);
      *(ulong *)(param_2 + 0x20) = CONCAT44(fVar36 + fVar36,auVar41._0_4_);
      *(ulong *)(param_2 + 0x28) = CONCAT44(auVar38._0_4_ + auVar38._0_4_,fVar39 + fVar39);
    }
    else if ((uVar3 & 3) != 0) {
      pfVar18 = *(float **)(param_1 + 0x30);
      FUN_0024a920(uVar2,&local_60,&local_70,pfVar18 + 0xc,param_6,param_1 + 0x4c);
      if ((uVar3 >> 1 & 1) != 0) {
        fVar21 = sqrtf(local_70 * local_70 + local_6c * local_6c + local_68 * local_68);
        if (0.0 < fVar21) {
          fVar21 = 1.0 / fVar21;
          local_70 = fVar21 * local_70;
          local_6c = fVar21 * local_6c;
          local_68 = fVar21 * local_68;
        }
        if (0.0 < local_70 * *param_6 + local_6c * param_6[1] + local_68 * param_6[2]) {
          local_70 = -local_70;
          local_6c = -local_6c;
          local_68 = -local_68;
        }
        if ((((param_7 & 1) != 0) && ((param_8 & 1) == 0)) &&
           (fVar22 = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x4c),
           fVar19 = *(float *)(param_1 + 100) - *(float *)(param_1 + 0x4c),
           fVar26 = *(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x50),
           fVar27 = *(float *)(param_1 + 0x60) - *(float *)(param_1 + 0x54),
           fVar20 = *(float *)(param_1 + 0x68) - *(float *)(param_1 + 0x50),
           fVar21 = *(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0x54),
           0.0 < param_6[2] * (fVar22 * fVar20 - fVar26 * fVar19) +
                 *param_6 * (fVar26 * fVar21 - fVar27 * fVar20) +
                 param_6[1] * (fVar27 * fVar19 - fVar22 * fVar21))) {
          local_70 = -local_70;
          local_6c = -local_6c;
          local_68 = -local_68;
        }
        fVar21 = *pfVar18;
        fVar22 = pfVar18[1];
        fVar19 = pfVar18[2];
        fVar26 = pfVar18[3];
        fVar27 = pfVar18[4];
        fVar28 = pfVar18[5];
        fVar20 = pfVar18[6];
        fVar29 = pfVar18[7];
        fVar25 = pfVar18[8];
        *(ushort *)(param_2 + 0x14) = *(ushort *)(param_2 + 0x14) | 2;
        *(float *)(param_2 + 0x24) = local_70 * fVar21 + local_6c * fVar26 + local_68 * fVar20;
        *(float *)(param_2 + 0x28) = local_70 * fVar22 + local_6c * fVar27 + local_68 * fVar29;
        *(float *)(param_2 + 0x2c) = local_70 * fVar19 + local_6c * fVar28 + local_68 * fVar25;
      }
      if ((uVar3 & 1) != 0) {
        fVar21 = *pfVar18;
        fVar22 = pfVar18[1];
        fVar20 = pfVar18[2];
        fVar27 = pfVar18[3];
        fVar28 = pfVar18[4];
        fVar29 = pfVar18[5];
        fVar34 = pfVar18[6];
        fVar36 = pfVar18[7];
        fVar25 = pfVar18[8];
        fVar32 = pfVar18[9];
        fVar19 = pfVar18[10];
        fVar26 = pfVar18[0xb];
        *(ushort *)(param_2 + 0x14) = *(ushort *)(param_2 + 0x14) | 1;
        *(float *)(param_2 + 0x18) =
             local_60 * fVar21 + fStack_5c * fVar27 + local_58 * fVar34 + fVar32;
        *(float *)(param_2 + 0x1c) =
             local_60 * fVar22 + fStack_5c * fVar28 + local_58 * fVar36 + fVar19;
        *(float *)(param_2 + 0x20) =
             local_60 * fVar20 + fStack_5c * fVar29 + local_58 * fVar25 + fVar26;
      }
    }
  }
  else {
    if ((*(byte *)(param_1 + 0xd) >> 1 & 1) == 0) {
      pfVar18 = *(float **)(param_1 + 0x40);
      *(undefined2 *)(param_2 + 0x14) = 0x406;
    }
    else {
      uVar17 = FUN_002b0f50(*(undefined4 *)(param_1 + 0x48),param_3,param_4,
                            *(undefined8 *)(param_1 + 0x30),param_5,*(undefined1 *)(param_1 + 0xb0),
                            param_2);
      pfVar18 = *(float **)(param_1 + 0x40);
      *(undefined2 *)(param_2 + 0x14) = 0x406;
      if ((uVar17 & 1) != 0) {
        if (*(float *)(param_2 + 0x30) == 0.0) {
          fVar21 = pfVar18[1];
          fVar22 = pfVar18[2];
          *(float *)(param_2 + 0x24) = -*pfVar18;
          *(float *)(param_2 + 0x28) = -fVar21;
          *(float *)(param_2 + 0x2c) = -fVar22;
        }
        *(undefined2 *)(param_2 + 0x14) = 0x407;
        return 1;
      }
    }
    *(undefined4 *)(param_2 + 0x30) = 0;
    fVar21 = pfVar18[1];
    fVar22 = pfVar18[2];
    *(float *)(param_2 + 0x24) = -*pfVar18;
    *(float *)(param_2 + 0x28) = -fVar21;
    *(float *)(param_2 + 0x2c) = -fVar22;
  }
  return 1;
}


