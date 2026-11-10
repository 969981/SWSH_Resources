/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006cca70; name: FUN_006cca70
 */


bool FUN_006cca70(long param_1,long param_2,float *param_3)

{
  ushort *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined8 uVar7;
  undefined1 auVar8 [12];
  float fVar9;
  long lVar10;
  float *pfVar11;
  undefined8 *puVar12;
  long *plVar14;
  long *plVar13;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  float fVar19;
  float extraout_s0;
  float fVar20;
  float fVar24;
  float fVar25;
  undefined1 auVar21 [16];
  float fVar27;
  undefined1 auVar22 [16];
  float extraout_var;
  float extraout_var_00;
  float fVar26;
  float extraout_var_01;
  float fVar28;
  undefined1 auVar23 [16];
  float fVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  int iVar33;
  int iVar38;
  int iVar39;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  int iVar40;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  
  fVar9 = DAT_01d4c708;
  lVar10 = *(long *)(param_2 + 0x150);
  if (lVar10 == 0) {
    return false;
  }
  uVar7 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 0xa0);
  auVar8 = *(undefined1 (*) [12])(param_1 + 0xa0);
  fVar44 = *(float *)(param_1 + 0xb0);
  fStack_e8 = (float)*(undefined8 *)(param_1 + 0xa8);
  fStack_e4 = (float)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20);
  local_f0 = (float)uVar7;
  fStack_ec = (float)((ulong)uVar7 >> 0x20);
  puVar12 = *(undefined8 **)(lVar10 + 0x60);
  puVar2 = *(undefined8 **)(lVar10 + 0x68);
  if (puVar12 == puVar2) {
    fVar20 = -1.0;
  }
  else {
    fVar20 = -1.0;
    do {
      pfVar11 = (float *)*puVar12;
      auVar34._0_4_ = local_f0 + *(float *)(param_1 + 0x70);
      auVar34._4_4_ = fStack_ec + *(float *)(param_1 + 0x74);
      auVar34._8_4_ = fStack_e8 + *(float *)(param_1 + 0x78);
      auVar34._12_4_ = fStack_e4 + *(float *)(param_1 + 0x7c);
      auVar21 = *(undefined1 (*) [16])(param_2 + 0x70);
      auVar30._0_4_ = auVar21._0_4_ + *pfVar11;
      auVar30._4_4_ = auVar21._4_4_ + pfVar11[1];
      auVar30._8_4_ = auVar21._8_4_ + pfVar11[2];
      auVar30._12_4_ = auVar21._12_4_ + 0.0;
      auVar29._0_4_ = auVar21._0_4_ + pfVar11[4];
      auVar29._4_4_ = auVar21._4_4_ + pfVar11[5];
      auVar29._8_4_ = auVar21._8_4_ + pfVar11[6];
      auVar29._12_4_ = auVar21._12_4_ + 0.0;
      auVar21 = NEON_fmax(auVar34,auVar30,4);
      auVar21 = NEON_fmin(auVar29,auVar21,4);
      fVar19 = auVar21._0_4_ - auVar34._0_4_;
      fVar24 = auVar21._4_4_ - auVar34._4_4_;
      fVar25 = auVar21._8_4_ - auVar34._8_4_;
      fVar27 = auVar21._12_4_ - auVar34._12_4_;
      auVar21._0_4_ = fVar19 * fVar19;
      auVar21._4_4_ = fVar24 * fVar24;
      auVar21._8_4_ = fVar25 * fVar25;
      auVar21._12_4_ = fVar27 * fVar27;
      auVar30 = NEON_ext(auVar21,auVar21,8,1);
      if (auVar30._0_4_ + auVar21._0_4_ + auVar30._4_4_ + auVar21._4_4_ <= fVar44 * fVar44) {
        puVar17 = *(undefined8 **)(*(long *)(pfVar11 + 8) + 0x30);
        puVar3 = *(undefined8 **)(*(long *)(pfVar11 + 8) + 0x38);
        if (puVar17 != puVar3) {
LAB_006ccb74:
          puVar18 = (undefined8 *)*puVar17;
          plVar13 = *(long **)(param_1 + 0x1b8);
          if (*(long **)(param_1 + 0x1b8) == *(long **)(param_1 + 0x1c0)) {
            plVar13 = *(long **)(param_1 + 0x1e8);
            do {
              if (plVar13 == *(long **)(param_1 + 0x1f0)) goto LAB_006ccbc4;
              lVar10 = *plVar13;
              plVar13 = plVar13 + 1;
            } while (lVar10 != *(long *)puVar18[7]);
          }
          else {
            do {
              plVar14 = plVar13 + 1;
              if (*plVar13 == *(long *)puVar18[7]) goto LAB_006ccbc4;
              plVar13 = plVar14;
            } while (*(long **)(param_1 + 0x1c0) != plVar14);
          }
          goto LAB_006ccb68;
        }
      }
LAB_006ccd1c:
      puVar12 = puVar12 + 4;
    } while (puVar12 != puVar2);
  }
  return 0.0 <= fVar20;
LAB_006ccbc4:
  lVar10 = puVar18[1];
  if (puVar18[2] != lVar10) {
    lVar15 = *(long *)*puVar18;
    uVar16 = 0;
    do {
      puVar1 = (ushort *)(lVar10 + uVar16 * 2);
      auVar4 = *(undefined1 (*) [12])(lVar15 + (ulong)*puVar1 * 0xc);
      auVar5 = *(undefined1 (*) [12])(lVar15 + (ulong)puVar1[1] * 0xc);
      auVar21 = *(undefined1 (*) [16])(param_2 + 0x70);
      fVar19 = auVar21._0_4_;
      fVar24 = auVar21._4_4_;
      fVar25 = auVar21._8_4_;
      fVar27 = auVar21._12_4_;
      auVar6 = *(undefined1 (*) [12])(lVar15 + (ulong)puVar1[2] * 0xc);
      _fStack_98 = CONCAT44(fVar27 + 0.0,auVar4._8_4_ + fVar25);
      _local_a0 = CONCAT44(auVar4._4_4_ + fVar24,auVar4._0_4_ + fVar19);
      _fStack_a8 = CONCAT44(fVar27 + 0.0,auVar5._8_4_ + fVar25);
      _local_b0 = CONCAT44(auVar5._4_4_ + fVar24,auVar5._0_4_ + fVar19);
      _fStack_b8 = CONCAT44(fVar27 + 0.0,auVar6._8_4_ + fVar25);
      _local_c0 = CONCAT44(auVar6._4_4_ + fVar24,auVar6._0_4_ + fVar19);
      fVar25 = auVar8._0_4_ + *(float *)(param_1 + 0x70);
      fVar27 = auVar8._4_4_ + *(float *)(param_1 + 0x74);
      auVar22._0_8_ = CONCAT44(fVar27,fVar25);
      auVar22._8_4_ = auVar8._8_4_ + *(float *)(param_1 + 0x78);
      auVar22._12_4_ = fStack_e4 + *(float *)(param_1 + 0x7c);
      uStack_c8 = auVar22._8_8_;
      uStack_d0 = auVar22._0_8_;
      FUN_006ccd80(&uStack_d0,&local_a0,&local_b0,&local_c0);
      fVar25 = extraout_s0 - fVar25;
      fVar27 = extraout_var - fVar27;
      fVar26 = extraout_var_00 - auVar22._8_4_;
      fVar28 = extraout_var_01 - auVar22._12_4_;
      auVar31._0_4_ = fVar25 * fVar25;
      auVar31._4_4_ = fVar27 * fVar27;
      auVar31._8_4_ = fVar26 * fVar26;
      auVar31._12_4_ = fVar28 * fVar28;
      auVar21 = NEON_ext(auVar31,auVar31,8,1);
      fVar24 = auVar21._0_4_ + auVar31._0_4_;
      fVar32 = auVar21._4_4_ + auVar31._4_4_;
      fVar19 = fVar24 + fVar32;
      fVar24 = fVar24 + fVar32;
      if (fVar19 <= fVar44 * fVar44) {
        auVar35._8_8_ = CONCAT44(fVar24,fVar19);
        auVar35._0_8_ = CONCAT44(fVar24,fVar19);
        fVar32 = SQRT(fVar19);
        if ((fVar9 < fVar32) && ((fVar20 < 0.0 || (fVar32 < fVar20)))) {
          auVar21 = NEON_frsqrte(auVar35,4);
          auVar42._0_4_ = fVar19 * auVar21._0_4_;
          auVar42._4_4_ = fVar24 * auVar21._4_4_;
          auVar42._8_4_ = fVar19 * auVar21._8_4_;
          auVar42._12_4_ = fVar24 * auVar21._12_4_;
          auVar30 = NEON_frsqrts(auVar21,auVar42,4);
          auVar41._0_4_ = auVar21._0_4_ * auVar30._0_4_;
          auVar41._4_4_ = auVar21._4_4_ * auVar30._4_4_;
          auVar41._8_4_ = auVar21._8_4_ * auVar30._8_4_;
          auVar41._12_4_ = auVar21._12_4_ * auVar30._12_4_;
          auVar43._0_4_ = fVar19 * auVar41._0_4_;
          auVar43._4_4_ = fVar24 * auVar41._4_4_;
          auVar43._8_4_ = fVar19 * auVar41._8_4_;
          auVar43._12_4_ = fVar24 * auVar41._12_4_;
          iVar33 = -(uint)(fVar19 == 0.0);
          iVar38 = -(uint)(fVar24 == 0.0);
          iVar39 = -(uint)(fVar19 == 0.0);
          iVar40 = -(uint)(fVar24 == 0.0);
          auVar36[0] = ~(byte)iVar33;
          auVar36[1] = ~(byte)((uint)iVar33 >> 8);
          auVar36[2] = ~(byte)((uint)iVar33 >> 0x10);
          auVar36[3] = ~(byte)((uint)iVar33 >> 0x18);
          auVar36[4] = ~(byte)iVar38;
          auVar36[5] = ~(byte)((uint)iVar38 >> 8);
          auVar36[6] = ~(byte)((uint)iVar38 >> 0x10);
          auVar36[7] = ~(byte)((uint)iVar38 >> 0x18);
          auVar36[8] = ~(byte)iVar39;
          auVar36[9] = ~(byte)((uint)iVar39 >> 8);
          auVar36[10] = ~(byte)((uint)iVar39 >> 0x10);
          auVar36[0xb] = ~(byte)((uint)iVar39 >> 0x18);
          auVar36[0xc] = ~(byte)iVar40;
          auVar36[0xd] = ~(byte)((uint)iVar40 >> 8);
          auVar36[0xe] = ~(byte)((uint)iVar40 >> 0x10);
          auVar36[0xf] = ~(byte)((uint)iVar40 >> 0x18);
          auVar21 = NEON_frsqrts(auVar41,auVar43,4);
          auVar37._8_4_ = 0x80000000;
          auVar37._0_8_ = 0x8000000080000000;
          auVar37._12_4_ = 0x80000000;
          auVar23._0_4_ = -(fVar25 * auVar41._0_4_ * auVar21._0_4_);
          auVar23._4_4_ = -(fVar27 * auVar41._4_4_ * auVar21._4_4_);
          auVar23._8_4_ = -(fVar26 * auVar41._8_4_ * auVar21._8_4_);
          auVar23._12_4_ = -(fVar28 * auVar41._12_4_ * auVar21._12_4_);
          auVar37 = auVar37 ^ (auVar37 ^ auVar23) & auVar36;
          fVar20 = (fVar44 - fVar32) + 0.5;
          param_3[2] = auVar37._8_4_ * fVar20;
          param_3[3] = auVar37._12_4_ * fVar20;
          *param_3 = auVar37._0_4_ * fVar20;
          param_3[1] = auVar37._4_4_ * fVar20;
          puVar18 = (undefined8 *)*puVar17;
          fVar20 = fVar32;
        }
      }
      uVar16 = uVar16 + 3;
    } while (uVar16 < (ulong)((long)(puVar18[2] - puVar18[1]) >> 1));
  }
LAB_006ccb68:
  puVar17 = puVar17 + 4;
  if (puVar17 == puVar3) goto LAB_006ccd1c;
  goto LAB_006ccb74;
}


