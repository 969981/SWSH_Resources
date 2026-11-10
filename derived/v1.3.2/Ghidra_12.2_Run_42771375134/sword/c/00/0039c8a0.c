/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039c8a0; name: FUN_0039c8a0
 */


undefined8
FUN_0039c8a0(undefined8 param_1,long param_2,long param_3,long *param_4,undefined1 (*param_5) [16],
            undefined8 *param_6)

{
  bool bVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  float *pfVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar35;
  undefined1 auVar28 [12];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar36;
  float fVar37;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar38 [12];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auStack_864 [4];
  long local_860 [256];
  
  lVar12 = param_4[2];
  uVar11 = 1;
  local_860[0] = lVar12;
  do {
    uVar11 = uVar11 - 1;
    pfVar8 = (float *)local_860[uVar11];
    fVar27 = (float)*(undefined8 *)pfVar8;
    fVar35 = (float)((ulong)*(undefined8 *)pfVar8 >> 0x20);
    auVar34 = *param_5;
    auVar28._0_4_ = (pfVar8[3] - fVar27) * 0.5;
    auVar28._4_4_ = (pfVar8[4] - fVar35) * 0.5;
    auVar28._8_4_ = (pfVar8[5] - (float)*(undefined8 *)(pfVar8 + 2)) * 0.5;
    auVar38._0_4_ = (fVar27 + pfVar8[3]) * 0.5;
    auVar38._4_4_ = (fVar35 + pfVar8[4]) * 0.5;
    auVar38._8_4_ = ((float)*(undefined8 *)(pfVar8 + 2) + pfVar8[5]) * 0.5;
    uVar4 = *(undefined8 *)param_5[1];
    uVar13 = (undefined1)uVar4;
    uVar14 = (undefined1)((ulong)uVar4 >> 8);
    uVar15 = (undefined1)((ulong)uVar4 >> 0x10);
    uVar16 = (undefined1)((ulong)uVar4 >> 0x18);
    while( true ) {
      auVar29._12_4_ = 0;
      auVar29._0_12_ = auVar28;
      auVar39._0_4_ = auVar34._0_4_ - auVar38._0_4_;
      auVar39._4_4_ = auVar34._4_4_ - auVar38._4_4_;
      auVar39._8_4_ = auVar34._8_4_ - auVar38._8_4_;
      auVar39._12_4_ = auVar34._12_4_ - 0.0;
      auVar29 = NEON_fmin(auVar39,auVar29,4);
      auVar30._4_4_ = -auVar28._4_4_;
      auVar30._0_4_ = -auVar28._0_4_;
      auVar30._8_4_ = -auVar28._8_4_;
      auVar30._12_4_ = 0;
      auVar30 = NEON_fmax(auVar29,auVar30,4);
      fVar27 = auVar39._0_4_ - auVar30._0_4_;
      fVar35 = auVar39._4_4_ - auVar30._4_4_;
      fVar36 = auVar39._8_4_ - auVar30._8_4_;
      fVar37 = auVar39._12_4_ - auVar30._12_4_;
      auVar31._0_4_ = fVar27 * fVar27;
      auVar31._4_4_ = fVar35 * fVar35;
      auVar31._8_4_ = fVar36 * fVar36;
      auVar31._12_4_ = fVar37 * fVar37;
      auVar30 = NEON_ext(auVar31,auVar31,8,1);
      bVar1 = auVar31._0_4_ + auVar31._4_4_ + auVar30._0_4_ + auVar30._4_4_ <= (float)uVar4;
      auVar32._0_4_ = -(uint)bVar1;
      auVar32._4_4_ = -(uint)bVar1;
      auVar32._8_4_ = -(uint)bVar1;
      auVar32._12_4_ = -(uint)bVar1;
      NEON_ext(auVar32,auVar32,8,1);
      if (CONCAT13((char)auVar32._12_4_,
                   CONCAT12((char)auVar32._8_4_,CONCAT11((char)auVar32._4_4_,(char)auVar32._0_4_)))
          != -1) break;
      fVar27 = pfVar8[6];
      if (((uint)fVar27 & 1) != 0) {
        uVar6 = (uint)fVar27 >> 1 & 0xf;
        if (uVar6 != 0) {
          puVar9 = (uint *)(*param_4 + (ulong)((uint)fVar27 >> 5) * 4);
          if (uVar6 == 1) {
            uVar7 = (**(code **)*param_6)(param_6,auStack_864,param_2 + (ulong)*puVar9 * 0x10);
            if ((uVar7 & 1) == 0) {
              return 0;
            }
          }
          else {
            iVar10 = -uVar6;
            while( true ) {
              iVar10 = iVar10 + 1;
              pfVar8 = (float *)(param_3 + (ulong)*puVar9 * 0x18);
              auVar33._0_4_ = (pfVar8[3] - *pfVar8) * 0.5;
              auVar33._4_4_ = (pfVar8[4] - pfVar8[1]) * 0.5;
              auVar33._8_4_ = (pfVar8[5] - pfVar8[2]) * 0.5;
              auVar33._12_4_ = 0;
              auVar25._0_4_ = auVar34._0_4_ - (*pfVar8 + pfVar8[3]) * 0.5;
              auVar25._4_4_ = auVar34._4_4_ - (pfVar8[1] + pfVar8[4]) * 0.5;
              auVar25._8_4_ = auVar34._8_4_ - (pfVar8[2] + pfVar8[5]) * 0.5;
              auVar25._12_4_ = auVar34._12_4_ - 0.0;
              auVar40._0_4_ = -auVar33._0_4_;
              auVar40._4_4_ = -auVar33._4_4_;
              auVar40._8_4_ = -auVar33._8_4_;
              auVar40._12_4_ = 0;
              auVar34 = NEON_fmin(auVar25,auVar33,4);
              auVar34 = NEON_fmax(auVar34,auVar40,4);
              fVar27 = auVar25._0_4_ - auVar34._0_4_;
              fVar35 = auVar25._4_4_ - auVar34._4_4_;
              fVar36 = auVar25._8_4_ - auVar34._8_4_;
              fVar37 = auVar25._12_4_ - auVar34._12_4_;
              auVar26._0_4_ = fVar27 * fVar27;
              auVar26._4_4_ = fVar35 * fVar35;
              auVar26._8_4_ = fVar36 * fVar36;
              auVar26._12_4_ = fVar37 * fVar37;
              auVar34 = NEON_ext(auVar26,auVar26,8,1);
              bVar1 = auVar26._0_4_ + auVar26._4_4_ + auVar34._0_4_ + auVar34._4_4_ <=
                      (float)CONCAT13(uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13)));
              iVar3 = -(uint)bVar1;
              iVar5 = -(uint)bVar1;
              uVar13 = (undefined1)iVar5;
              uVar14 = (undefined1)((uint)iVar5 >> 8);
              uVar15 = (undefined1)((uint)iVar5 >> 0x10);
              uVar16 = (undefined1)((uint)iVar5 >> 0x18);
              iVar5 = -(uint)bVar1;
              uVar17 = (undefined1)iVar5;
              uVar18 = (undefined1)((uint)iVar5 >> 8);
              uVar19 = (undefined1)((uint)iVar5 >> 0x10);
              uVar20 = (undefined1)((uint)iVar5 >> 0x18);
              iVar5 = -(uint)bVar1;
              uVar21 = (undefined1)iVar5;
              uVar22 = (undefined1)((uint)iVar5 >> 8);
              uVar23 = (undefined1)((uint)iVar5 >> 0x10);
              uVar24 = (undefined1)((uint)iVar5 >> 0x18);
              auVar34[4] = uVar13;
              auVar34._0_4_ = iVar3;
              auVar34[5] = uVar14;
              auVar34[6] = uVar15;
              auVar34[7] = uVar16;
              auVar34[8] = uVar17;
              auVar34[9] = uVar18;
              auVar34[10] = uVar19;
              auVar34[0xb] = uVar20;
              auVar34[0xc] = uVar21;
              auVar34[0xd] = uVar22;
              auVar34[0xe] = uVar23;
              auVar34[0xf] = uVar24;
              auVar2[4] = uVar13;
              auVar2._0_4_ = iVar3;
              auVar2[5] = uVar14;
              auVar2[6] = uVar15;
              auVar2[7] = uVar16;
              auVar2[8] = uVar17;
              auVar2[9] = uVar18;
              auVar2[10] = uVar19;
              auVar2[0xb] = uVar20;
              auVar2[0xc] = uVar21;
              auVar2[0xd] = uVar22;
              auVar2[0xe] = uVar23;
              auVar2[0xf] = uVar24;
              NEON_ext(auVar34,auVar2,8,1);
              if (CONCAT13(uVar21,CONCAT12(uVar17,CONCAT11(uVar13,(char)iVar3))) == -1) {
                uVar6 = (**(code **)*param_6)(param_6,auStack_864,param_2 + (ulong)*puVar9 * 0x10);
                if (((~uVar6 & 1) != 6) && ((~uVar6 & 1) != 0)) {
                  return 0;
                }
              }
              if (iVar10 == 0) break;
              auVar34 = *param_5;
              uVar4 = *(undefined8 *)param_5[1];
              uVar13 = (undefined1)uVar4;
              uVar14 = (undefined1)((ulong)uVar4 >> 8);
              uVar15 = (undefined1)((ulong)uVar4 >> 0x10);
              uVar16 = (undefined1)((ulong)uVar4 >> 0x18);
              puVar9 = puVar9 + 1;
            }
          }
        }
        break;
      }
      pfVar8 = (float *)(lVar12 + (ulong)((uint)fVar27 >> 1) * 0x1c);
      local_860[uVar11] = (long)(pfVar8 + 7);
      fVar27 = (float)*(undefined8 *)(pfVar8 + 3);
      fVar35 = (float)((ulong)*(undefined8 *)(pfVar8 + 3) >> 0x20);
      uVar11 = uVar11 + 1;
      auVar28._0_4_ = (fVar27 - *pfVar8) * 0.5;
      auVar28._4_4_ = (fVar35 - pfVar8[1]) * 0.5;
      auVar28._8_4_ = ((float)*(undefined8 *)(pfVar8 + 5) - pfVar8[2]) * 0.5;
      auVar38._0_4_ = (*pfVar8 + fVar27) * 0.5;
      auVar38._4_4_ = (pfVar8[1] + fVar35) * 0.5;
      auVar38._8_4_ = (pfVar8[2] + (float)*(undefined8 *)(pfVar8 + 5)) * 0.5;
    }
    if (uVar11 == 0) {
      return 1;
    }
  } while( true );
}


