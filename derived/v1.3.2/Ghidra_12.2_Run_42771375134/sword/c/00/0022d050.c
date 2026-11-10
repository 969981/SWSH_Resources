/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0022d050; name: FUN_0022d050
 */


undefined8
FUN_0022d050(undefined8 param_1,long param_2,float *param_3,float *param_4,float *param_5,
            undefined8 param_6,long param_7)

{
  float *pfVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  float *pfVar8;
  int iVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
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
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_88;
  
  lVar7 = *(long *)(param_2 + 0x30);
  fVar13 = *param_3;
  fVar14 = param_3[1];
  fVar39 = param_4[6];
  fVar15 = param_3[2];
  fVar16 = param_3[3];
  fVar12 = param_3[6];
  fVar27 = param_4[4];
  fVar33 = param_4[5];
  lVar10 = *(long *)(lVar7 + 0x28);
  fVar20 = param_3[4];
  fVar37 = param_3[5];
  bVar3 = *(byte *)(lVar7 + 0x27);
  fVar18 = param_4[2];
  fVar43 = param_4[3];
  bVar4 = *(byte *)(lVar7 + 0x26);
  fVar44 = *param_4;
  fVar22 = param_4[1];
  if ((*(float *)(param_2 + 4) == 1.0) && (*(float *)(param_2 + 8) == 1.0)) {
    bVar5 = *(float *)(param_2 + 0xc) == 1.0;
  }
  else {
    bVar5 = false;
  }
  local_d0 = 0x3f800000;
  local_c8 = 0;
  local_c0 = 0x3f800000;
  local_b8 = 0;
  local_88 = 0;
  local_b0 = 0x3f8000003f800000;
  uStack_a8 = 0;
  local_90 = 0x3f80000000000000;
  local_a0 = 0x3f80000000000000;
  uStack_98 = 0;
  if (bVar5) {
    local_b8._4_4_ = 0.0;
    local_b0._0_4_ = 1.0;
    local_c0._0_4_ = 1.0;
    local_c0._4_4_ = 0.0;
    local_b8._0_4_ = 0.0;
    local_c8._4_4_ = 0.0;
    local_c8._0_4_ = 0.0;
    local_d0._4_4_ = 0.0;
    local_d0._0_4_ = 1.0;
  }
  else {
    FUN_001b0f90(&local_d0,(float *)(param_2 + 4),param_2 + 0x10);
  }
  uVar6 = 0;
  if (bVar4 != 0) {
    uVar6 = 0;
    pfVar8 = (float *)(lVar10 + (ulong)bVar3 * 0x14);
    iVar9 = -(uint)bVar4;
    fVar28 = (fVar27 - fVar20) + (fVar27 - fVar20);
    fVar34 = (fVar33 - fVar37) + (fVar33 - fVar37);
    fVar38 = fVar16 * fVar16 + -0.5;
    fVar40 = (fVar39 - fVar12) + (fVar39 - fVar12);
    fVar12 = ((fVar16 * fVar44 - fVar43 * fVar13) - fVar18 * fVar14) + fVar22 * fVar15;
    fVar41 = fVar12 + fVar12;
    fVar20 = ((fVar16 * fVar22 - fVar43 * fVar14) - fVar44 * fVar15) + fVar18 * fVar13;
    fVar37 = fVar16 * fVar43 + fVar44 * fVar13 + fVar22 * fVar14 + fVar18 * fVar15;
    fVar24 = ((fVar16 * fVar18 - fVar43 * fVar15) - fVar22 * fVar13) + fVar44 * fVar14;
    fVar43 = (fVar28 * -fVar13 - fVar34 * fVar14) - fVar40 * fVar15;
    fVar45 = fVar20 + fVar20;
    fVar18 = fVar24 * (fVar24 + fVar24);
    fVar39 = fVar37 * (fVar24 + fVar24);
    fVar47 = 1.0 - fVar12 * fVar41;
    fVar22 = fVar41 * fVar20 + fVar39;
    fVar39 = fVar41 * fVar20 - fVar39;
    fVar33 = fVar41 * fVar37 + fVar24 * fVar45;
    fVar44 = (1.0 - fVar20 * fVar45) - fVar18;
    fVar18 = fVar47 - fVar18;
    fVar27 = fVar41 * fVar24 - fVar37 * fVar45;
    fVar25 = fVar24 * fVar45 - fVar41 * fVar37;
    fVar46 = fVar41 * fVar24 + fVar37 * fVar45;
    fVar47 = fVar47 - fVar20 * fVar45;
    fVar12 = *param_3;
    fVar24 = param_3[1];
    fVar45 = param_3[2];
    fVar29 = param_3[3];
    fVar35 = fVar24 + fVar24;
    fVar31 = fVar12 + fVar12;
    fVar42 = fVar45 * (fVar45 + fVar45);
    fVar30 = (fVar45 + fVar45) * fVar29;
    fVar26 = fVar31 * fVar45 - fVar35 * fVar29;
    fVar20 = 1.0 - fVar12 * fVar31;
    fVar37 = (1.0 - fVar24 * fVar35) - fVar42;
    fVar41 = fVar31 * fVar24 + fVar30;
    fVar32 = param_3[4];
    fVar36 = param_3[5];
    fVar12 = *param_5;
    fVar48 = param_3[6];
    do {
      fVar19 = *pfVar8;
      fVar23 = pfVar8[1];
      fVar21 = pfVar8[2];
      fVar17 = ((fVar38 * fVar28 + fVar16 * (fVar34 * fVar15 - fVar40 * fVar14)) - fVar43 * fVar13)
               + (fVar44 * (float)local_d0 + fVar39 * local_d0._4_4_ + fVar46 * (float)local_c8) *
                 fVar19 + (fVar44 * local_c8._4_4_ + fVar39 * (float)local_c0 +
                          fVar46 * local_c0._4_4_) * fVar23 +
                 (fVar44 * (float)local_b8 + fVar39 * local_b8._4_4_ + fVar46 * (float)local_b0) *
                 fVar21;
      if (fVar17 <= fVar12) {
        uVar2 = *(uint *)(param_7 + 0x1000);
        if (uVar2 < 0x40) {
          pfVar1 = (float *)(param_7 + (ulong)uVar2 * 0x40);
          *(uint *)(param_7 + 0x1000) = uVar2 + 1;
          *pfVar1 = -fVar37;
          pfVar1[1] = -fVar41;
          fVar11 = ((fVar38 * fVar34 + fVar16 * (fVar40 * fVar13 - fVar28 * fVar15)) -
                   fVar43 * fVar14) +
                   (fVar22 * (float)local_d0 + fVar18 * local_d0._4_4_ + fVar25 * (float)local_c8) *
                   fVar19 + (fVar22 * local_c8._4_4_ + fVar18 * (float)local_c0 +
                            fVar25 * local_c0._4_4_) * fVar23 +
                   (fVar22 * (float)local_b8 + fVar18 * local_b8._4_4_ + fVar25 * (float)local_b0) *
                   fVar21;
          fVar19 = ((fVar38 * fVar40 + fVar16 * (fVar28 * fVar14 - fVar34 * fVar13)) -
                   fVar43 * fVar15) +
                   (fVar27 * (float)local_d0 + fVar33 * local_d0._4_4_ + fVar47 * (float)local_c8) *
                   fVar19 + (fVar27 * local_c8._4_4_ + fVar33 * (float)local_c0 +
                            fVar47 * local_c0._4_4_) * fVar23 +
                   (fVar27 * (float)local_b8 + fVar33 * local_b8._4_4_ + fVar47 * (float)local_b0) *
                   fVar21;
          pfVar1[4] = fVar32 + (fVar31 * fVar45 + fVar35 * fVar29) * fVar19 +
                               fVar37 * fVar17 + (fVar31 * fVar24 - fVar30) * fVar11;
          pfVar1[5] = fVar36 + (fVar35 * fVar45 - fVar31 * fVar29) * fVar19 +
                               fVar41 * fVar17 + (fVar20 - fVar42) * fVar11;
          pfVar1[6] = fVar48 + (fVar20 - fVar24 * fVar35) * fVar19 +
                               fVar26 * fVar17 + (fVar35 * fVar45 + fVar31 * fVar29) * fVar11;
          pfVar1[2] = -fVar26;
          pfVar1[3] = fVar17;
          pfVar1[0xd] = -NAN;
        }
        uVar6 = 1;
      }
      iVar9 = iVar9 + 1;
      pfVar8 = pfVar8 + 3;
    } while (iVar9 != 0);
  }
  return uVar6;
}


