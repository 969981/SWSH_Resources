/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0025ac20; name: FUN_0025ac20
 */


uint * FUN_0025ac20(uint *param_1,uint param_2,uint param_3,uint param_4,undefined8 *param_5)

{
  uint *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  float fVar12;
  int iVar13;
  undefined8 uVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar42;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  int iVar43;
  undefined1 auVar44 [16];
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  ulong uVar48;
  undefined8 uVar49;
  undefined1 auVar50 [16];
  
  if (param_1[0x747] == 0) {
    uVar16 = param_1[0x706];
    param_1[0x706] = uVar16 + 1;
  }
  else {
    uVar16 = param_1[0x747] - 1;
    param_1[0x747] = uVar16;
    uVar16 = param_1[(ulong)uVar16 + 0x707];
  }
  Hint_Prefetch(param_1 + (ulong)uVar16 * 0x10 + 0x2a4,0,0,0);
  *(undefined1 *)((long)param_1 + (ulong)uVar16 * 0x40 + 0xa42) = 0xff;
  *(char *)(param_1 + (ulong)uVar16 * 0x10 + 0x292) = (char)uVar16;
  *(undefined2 *)((long)param_1 + (ulong)uVar16 * 0x40 + 0xa46) = 0;
  *(char *)((long)param_1 + (ulong)uVar16 * 0x40 + 0xa43) = (char)param_2;
  *(char *)(param_1 + (ulong)uVar16 * 0x10 + 0x291) = (char)param_3;
  *(char *)((long)param_1 + (ulong)uVar16 * 0x40 + 0xa45) = (char)param_4;
  (param_1 + (ulong)uVar16 * 0x10 + 0x28e)[0] = 0;
  (param_1 + (ulong)uVar16 * 0x10 + 0x28e)[1] = 0;
  (param_1 + (ulong)uVar16 * 0x10 + 0x28c)[0] = 0;
  (param_1 + (ulong)uVar16 * 0x10 + 0x28c)[1] = 0;
  (param_1 + (ulong)uVar16 * 0x10 + 0x28a)[0] = 0;
  (param_1 + (ulong)uVar16 * 0x10 + 0x28a)[1] = 0;
  *(undefined2 *)(param_1 + (ulong)uVar16 * 0x10 + 0x290) = 0xffff;
  uVar6 = *(undefined8 *)(param_1 + (ulong)param_2 * 4 + 0x84 + 2);
  uVar39 = *(undefined8 *)(param_1 + (ulong)param_2 * 4 + 0x84);
  uVar14 = *(undefined8 *)(param_1 + (ulong)param_3 * 4 + 0x84 + 2);
  uVar11 = *(undefined8 *)(param_1 + (ulong)param_3 * 4 + 0x84);
  pfVar4 = (float *)(param_1 + (ulong)param_4 * 4 + 0x84);
  pfVar5 = (float *)(param_1 + (ulong)param_2 * 4 + 0x184);
  puVar1 = param_1 + (ulong)uVar16 * 0x10 + 0x284;
  uVar46 = *(undefined8 *)(param_1 + (ulong)param_3 * 4 + 0x184 + 2);
  uVar45 = *(undefined8 *)(param_1 + (ulong)param_3 * 4 + 0x184);
  uVar49 = *(undefined8 *)(param_1 + (ulong)param_4 * 4 + 0x184 + 2);
  uVar47 = *(undefined8 *)(param_1 + (ulong)param_4 * 4 + 0x184);
  puVar2 = (undefined1 *)((long)param_1 + (ulong)uVar16 * 0x40 + 0xa47);
  fVar22 = (float)uVar39 - *pfVar5;
  fVar23 = (float)((ulong)uVar39 >> 0x20) - pfVar5[1];
  fVar24 = (float)uVar6 - pfVar5[2];
  fVar25 = (float)((ulong)uVar6 >> 0x20) - pfVar5[3];
  fVar20 = ((float)uVar11 - (float)uVar45) - fVar22;
  fVar12 = ((float)((ulong)uVar11 >> 0x20) - (float)((ulong)uVar45 >> 0x20)) - fVar23;
  uVar26 = (undefined1)((uint)fVar12 >> 8);
  uVar27 = (undefined1)((uint)fVar12 >> 0x10);
  uVar28 = (undefined1)((uint)fVar12 >> 0x18);
  fVar21 = ((float)uVar14 - (float)uVar46) - fVar24;
  uVar29 = (undefined1)((uint)fVar21 >> 8);
  uVar30 = (undefined1)((uint)fVar21 >> 0x10);
  uVar32 = (undefined1)((uint)fVar21 >> 0x18);
  fVar19 = ((float)((ulong)uVar14 >> 0x20) - (float)((ulong)uVar46 >> 0x20)) - fVar25;
  uVar31 = (undefined1)((uint)fVar19 >> 8);
  uVar33 = (undefined1)((uint)fVar19 >> 0x10);
  uVar36 = (undefined1)((uint)fVar19 >> 0x18);
  auVar40._0_4_ = (*pfVar4 - (float)uVar47) - fVar22;
  auVar40._4_4_ = (pfVar4[1] - (float)((ulong)uVar47 >> 0x20)) - fVar23;
  auVar40._8_4_ = (pfVar4[2] - (float)uVar49) - fVar24;
  auVar40._12_4_ = (pfVar4[3] - (float)((ulong)uVar49 >> 0x20)) - fVar25;
  auVar7[4] = SUB41(fVar12,0);
  auVar7._0_4_ = fVar20;
  auVar7[5] = uVar26;
  auVar7[6] = uVar27;
  auVar7[7] = uVar28;
  auVar7[8] = SUB41(fVar21,0);
  auVar7[9] = uVar29;
  auVar7[10] = uVar30;
  auVar7[0xb] = uVar32;
  auVar7[0xc] = SUB41(fVar19,0);
  auVar7[0xd] = uVar31;
  auVar7[0xe] = uVar33;
  auVar7[0xf] = uVar36;
  auVar8[4] = SUB41(fVar12,0);
  auVar8._0_4_ = fVar20;
  auVar8[5] = uVar26;
  auVar8[6] = uVar27;
  auVar8[7] = uVar28;
  auVar8[8] = SUB41(fVar21,0);
  auVar8[9] = uVar29;
  auVar8[10] = uVar30;
  auVar8[0xb] = uVar32;
  auVar8[0xc] = SUB41(fVar19,0);
  auVar8[0xd] = uVar31;
  auVar8[0xe] = uVar33;
  auVar8[0xf] = uVar36;
  auVar44 = NEON_ext(auVar7,auVar8,8,1);
  auVar50 = NEON_ext(auVar40,auVar40,8,1);
  uVar48 = NEON_fmov(0x3f800000,4);
  fVar19 = auVar44._4_4_ * auVar40._4_4_ - fVar12 * auVar50._4_4_;
  fVar38 = fVar20 * auVar40._4_4_ - fVar12 * auVar40._0_4_;
  uVar39 = NEON_ext(CONCAT44(fVar12 * auVar40._8_4_ - fVar21 * auVar40._4_4_,fVar38),
                    CONCAT17((char)((uint)fVar19 >> 0x18),
                             CONCAT16((char)((uint)fVar19 >> 0x10),
                                      CONCAT15((char)((uint)fVar19 >> 8),
                                               CONCAT14(SUB41(fVar19,0),
                                                        auVar44._0_4_ * auVar40._0_4_ -
                                                        fVar20 * auVar50._0_4_)))),4,1);
  fVar20 = (float)uVar39;
  auVar41._0_4_ = fVar20 * fVar20;
  fVar12 = (float)((ulong)uVar39 >> 0x20);
  auVar41._4_4_ = fVar12 * fVar12;
  auVar41._8_4_ = fVar38 * fVar38;
  auVar41._12_4_ = 0;
  auVar44 = NEON_ext(auVar41,auVar41,8,1);
  fVar21 = auVar44._0_4_ + auVar44._4_4_;
  fVar19 = auVar41._0_4_ + auVar41._4_4_ + fVar21;
  iVar43 = -(uint)(1.1920929e-07 < fVar19);
  uVar48 = uVar48 ^ (uVar48 ^ CONCAT44(auVar41._0_4_ + auVar41._4_4_ + fVar21,fVar19)) &
                    CONCAT44(iVar43,iVar43);
  uVar39 = NEON_frsqrte(uVar48,4);
  fVar21 = (float)uVar39;
  fVar42 = (float)((ulong)uVar39 >> 0x20);
  uVar39 = NEON_frsqrts(CONCAT44(fVar42 * fVar42,fVar21 * fVar21),uVar48,4);
  fVar21 = fVar21 * (float)uVar39;
  fVar42 = fVar42 * (float)((ulong)uVar39 >> 0x20);
  uVar39 = NEON_frsqrts(CONCAT44(fVar42 * fVar42,fVar21 * fVar21),uVar48,4);
  fVar21 = fVar21 * (float)uVar39;
  fVar42 = fVar42 * (float)((ulong)uVar39 >> 0x20);
  uVar39 = NEON_frsqrts(CONCAT44(fVar42 * fVar42,fVar21 * fVar21),uVar48,4);
  fVar21 = fVar21 * (float)uVar39;
  fVar42 = fVar42 * (float)((ulong)uVar39 >> 0x20);
  uVar39 = NEON_frsqrts(CONCAT44(fVar42 * fVar42,fVar21 * fVar21),uVar48,4);
  fVar21 = fVar21 * (float)uVar39;
  fVar12 = fVar12 * fVar21;
  fVar22 = fVar22 * fVar20 * fVar21;
  fVar23 = fVar23 * fVar12;
  fVar24 = fVar24 * fVar38 * fVar21;
  auVar44._4_4_ = fVar23;
  auVar44._0_4_ = fVar22;
  auVar44._8_4_ = fVar24;
  auVar44._12_4_ = fVar25 * 0.0;
  auVar50._4_4_ = fVar23;
  auVar50._0_4_ = fVar22;
  auVar50._8_4_ = fVar24;
  auVar50._12_4_ = fVar25 * 0.0;
  auVar44 = NEON_ext(auVar44,auVar50,8,1);
  *(ulong *)(param_1 + (ulong)uVar16 * 0x10 + 0x286) = (ulong)(uint)(fVar38 * fVar21);
  *(ulong *)(param_1 + (ulong)uVar16 * 0x10 + 0x284) =
       CONCAT17((char)((uint)fVar12 >> 0x18),
                CONCAT16((char)((uint)fVar12 >> 0x10),
                         CONCAT15((char)((uint)fVar12 >> 8),
                                  CONCAT14(SUB41(fVar12,0),fVar20 * fVar21))));
  fVar20 = fVar22 + fVar23 + auVar44._0_4_ + auVar44._4_4_;
  param_1[(ulong)uVar16 * 0x10 + 0x288] = (uint)fVar20;
  bVar15 = fVar20 <= (float)*param_5 && 1.1920929e-07 < fVar19;
  iVar43 = -(uint)bVar15;
  iVar13 = -(uint)bVar15;
  uVar26 = (undefined1)iVar13;
  uVar27 = (undefined1)((uint)iVar13 >> 8);
  uVar28 = (undefined1)((uint)iVar13 >> 0x10);
  uVar29 = (undefined1)((uint)iVar13 >> 0x18);
  iVar13 = -(uint)bVar15;
  uVar30 = (undefined1)iVar13;
  uVar32 = (undefined1)((uint)iVar13 >> 8);
  uVar31 = (undefined1)((uint)iVar13 >> 0x10);
  uVar33 = (undefined1)((uint)iVar13 >> 0x18);
  iVar13 = -(uint)bVar15;
  uVar36 = (undefined1)iVar13;
  uVar34 = (undefined1)((uint)iVar13 >> 8);
  uVar35 = (undefined1)((uint)iVar13 >> 0x10);
  uVar37 = (undefined1)((uint)iVar13 >> 0x18);
  auVar9[4] = uVar26;
  auVar9._0_4_ = iVar43;
  auVar9[5] = uVar27;
  auVar9[6] = uVar28;
  auVar9[7] = uVar29;
  auVar9[8] = uVar30;
  auVar9[9] = uVar32;
  auVar9[10] = uVar31;
  auVar9[0xb] = uVar33;
  auVar9[0xc] = uVar36;
  auVar9[0xd] = uVar34;
  auVar9[0xe] = uVar35;
  auVar9[0xf] = uVar37;
  auVar10[4] = uVar26;
  auVar10._0_4_ = iVar43;
  auVar10[5] = uVar27;
  auVar10[6] = uVar28;
  auVar10[7] = uVar29;
  auVar10[8] = uVar30;
  auVar10[9] = uVar32;
  auVar10[10] = uVar31;
  auVar10[0xb] = uVar33;
  auVar10[0xc] = uVar36;
  auVar10[0xd] = uVar34;
  auVar10[0xe] = uVar35;
  auVar10[0xf] = uVar37;
  NEON_ext(auVar9,auVar10,8,1);
  if (CONCAT13(uVar36,CONCAT12(uVar30,CONCAT11(uVar26,(char)iVar43))) != -1) {
    *puVar2 = 0;
    return puVar1;
  }
  uVar16 = *param_1;
  if (uVar16 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = uVar16;
    do {
      uVar3 = uVar17 - 1 >> 1;
      lVar18 = *(long *)(*(long *)(param_1 + 2) + (ulong)uVar3 * 8);
      if (*(float *)(lVar18 + 0x10) <= fVar20) break;
      *(long *)(*(long *)(param_1 + 2) + (ulong)uVar17 * 8) = lVar18;
      uVar17 = uVar3;
    } while (uVar3 != 0);
  }
  *(uint **)(*(long *)(param_1 + 2) + (ulong)uVar17 * 8) = puVar1;
  *param_1 = uVar16 + 1;
  *puVar2 = 1;
  return puVar1;
}


