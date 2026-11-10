/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00292800; name: FUN_00292800
 */


undefined1  [16] FUN_00292800(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  int iVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar21;
  float fVar22;
  undefined1 auVar20 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
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
  undefined1 uVar38;
  undefined1 auVar39 [16];
  undefined8 uVar40;
  undefined8 uVar41;
  
  iVar16 = *(int *)(param_1 + 0x180);
  if (iVar16 == 0) {
    uVar40 = 0;
    uVar41 = 0;
  }
  else {
    uVar18 = *param_3;
    uVar40 = 0;
    uVar41 = 0;
    puVar17 = (undefined8 *)(param_1 + (ulong)(iVar16 - 1) * 0x40 + 0x20);
    do {
      while( true ) {
        fVar14 = (float)puVar17[-4];
        fVar15 = (float)((ulong)puVar17[-4] >> 0x20);
        fVar25 = (float)puVar17[-3];
        fVar10 = (float)param_2[6] +
                 (float)*param_2 * fVar14 + (float)param_2[2] * fVar15 +
                 *(float *)(param_2 + 4) * fVar25;
        fVar12 = (float)((ulong)param_2[6] >> 0x20) +
                 (float)((ulong)*param_2 >> 0x20) * fVar14 +
                 (float)((ulong)param_2[2] >> 0x20) * fVar15 +
                 *(float *)((long)param_2 + 0x24) * fVar25;
        fVar14 = (float)param_2[7] +
                 (float)param_2[1] * fVar14 + (float)param_2[3] * fVar15 +
                 *(float *)(param_2 + 5) * fVar25;
        fVar15 = (float)((ulong)param_2[7] >> 0x20) + 0.0;
        uVar19 = *puVar17;
        fVar22 = (float)puVar17[1];
        fVar23 = (float)uVar19 * (fVar10 - *(float *)(puVar17 + -2));
        fVar21 = (float)((ulong)uVar19 >> 0x20);
        fVar24 = fVar21 * (fVar12 - *(float *)((long)puVar17 + -0xc));
        fVar25 = fVar22 * (fVar14 - *(float *)(puVar17 + -1));
        fVar26 = (fVar15 - *(float *)((long)puVar17 + -4)) * 0.0;
        auVar39._4_4_ = fVar24;
        auVar39._0_4_ = fVar23;
        auVar39._8_4_ = fVar25;
        auVar39._12_4_ = fVar26;
        auVar3._4_4_ = fVar24;
        auVar3._0_4_ = fVar23;
        auVar3._8_4_ = fVar25;
        auVar3._12_4_ = fVar26;
        auVar39 = NEON_ext(auVar39,auVar3,8,1);
        fVar26 = auVar39._0_4_ + auVar39._4_4_;
        fVar25 = fVar23 + fVar24 + fVar26;
        fVar26 = fVar23 + fVar24 + fVar26;
        fVar10 = fVar10 - (float)uVar19 * fVar25;
        fVar12 = fVar12 - fVar21 * fVar25;
        uVar27 = (undefined1)((uint)fVar12 >> 8);
        uVar28 = (undefined1)((uint)fVar12 >> 0x10);
        uVar29 = (undefined1)((uint)fVar12 >> 0x18);
        fVar14 = fVar14 - fVar22 * fVar25;
        uVar30 = (undefined1)((uint)fVar14 >> 8);
        uVar31 = (undefined1)((uint)fVar14 >> 0x10);
        uVar33 = (undefined1)((uint)fVar14 >> 0x18);
        fVar15 = fVar15 - fVar25 * 0.0;
        uVar32 = (undefined1)((uint)fVar15 >> 8);
        uVar34 = (undefined1)((uint)fVar15 >> 0x10);
        uVar37 = (undefined1)((uint)fVar15 >> 0x18);
        auVar4[4] = SUB41(fVar12,0);
        auVar4._0_4_ = fVar10;
        auVar4[5] = uVar27;
        auVar4[6] = uVar28;
        auVar4[7] = uVar29;
        auVar4[8] = SUB41(fVar14,0);
        auVar4[9] = uVar30;
        auVar4[10] = uVar31;
        auVar4[0xb] = uVar33;
        auVar4[0xc] = SUB41(fVar15,0);
        auVar4[0xd] = uVar32;
        auVar4[0xe] = uVar34;
        auVar4[0xf] = uVar37;
        auVar5[4] = SUB41(fVar12,0);
        auVar5._0_4_ = fVar10;
        auVar5[5] = uVar27;
        auVar5[6] = uVar28;
        auVar5[7] = uVar29;
        auVar5[8] = SUB41(fVar14,0);
        auVar5[9] = uVar30;
        auVar5[10] = uVar31;
        auVar5[0xb] = uVar33;
        auVar5[0xc] = SUB41(fVar15,0);
        auVar5[0xd] = uVar32;
        auVar5[0xe] = uVar34;
        auVar5[0xf] = uVar37;
        auVar39 = NEON_ext(auVar4,auVar5,8,1);
        fVar10 = *(float *)(puVar17 + -2) - fVar10;
        fVar12 = *(float *)((long)puVar17 + -0xc) - fVar12;
        fVar14 = *(float *)(puVar17 + -1) - auVar39._0_4_;
        fVar15 = *(float *)((long)puVar17 + -4) - 0.0;
        fVar10 = fVar10 * fVar10;
        fVar12 = fVar12 * fVar12;
        uVar27 = (undefined1)((uint)fVar12 >> 8);
        uVar28 = (undefined1)((uint)fVar12 >> 0x10);
        uVar29 = (undefined1)((uint)fVar12 >> 0x18);
        fVar14 = fVar14 * fVar14;
        uVar30 = (undefined1)((uint)fVar14 >> 8);
        uVar31 = (undefined1)((uint)fVar14 >> 0x10);
        uVar33 = (undefined1)((uint)fVar14 >> 0x18);
        fVar15 = fVar15 * fVar15;
        uVar32 = (undefined1)((uint)fVar15 >> 8);
        uVar34 = (undefined1)((uint)fVar15 >> 0x10);
        uVar37 = (undefined1)((uint)fVar15 >> 0x18);
        auVar6[4] = SUB41(fVar12,0);
        auVar6._0_4_ = fVar10;
        auVar6[5] = uVar27;
        auVar6[6] = uVar28;
        auVar6[7] = uVar29;
        auVar6[8] = SUB41(fVar14,0);
        auVar6[9] = uVar30;
        auVar6[10] = uVar31;
        auVar6[0xb] = uVar33;
        auVar6[0xc] = SUB41(fVar15,0);
        auVar6[0xd] = uVar32;
        auVar6[0xe] = uVar34;
        auVar6[0xf] = uVar37;
        auVar7[4] = SUB41(fVar12,0);
        auVar7._0_4_ = fVar10;
        auVar7[5] = uVar27;
        auVar7[6] = uVar28;
        auVar7[7] = uVar29;
        auVar7[8] = SUB41(fVar14,0);
        auVar7[9] = uVar30;
        auVar7[10] = uVar31;
        auVar7[0xb] = uVar33;
        auVar7[0xc] = SUB41(fVar15,0);
        auVar7[0xd] = uVar32;
        auVar7[0xe] = uVar34;
        auVar7[0xf] = uVar37;
        auVar39 = NEON_ext(auVar6,auVar7,8,1);
        bVar2 = (float)uVar18 * (float)uVar18 < fVar10 + fVar12 + auVar39._0_4_ + auVar39._4_4_;
        iVar11 = -(uint)bVar2;
        iVar13 = -(uint)bVar2;
        uVar27 = (undefined1)iVar13;
        uVar28 = (undefined1)((uint)iVar13 >> 8);
        uVar29 = (undefined1)((uint)iVar13 >> 0x10);
        uVar30 = (undefined1)((uint)iVar13 >> 0x18);
        iVar13 = -(uint)bVar2;
        uVar31 = (undefined1)iVar13;
        uVar33 = (undefined1)((uint)iVar13 >> 8);
        uVar32 = (undefined1)((uint)iVar13 >> 0x10);
        uVar34 = (undefined1)((uint)iVar13 >> 0x18);
        iVar13 = -(uint)bVar2;
        uVar37 = (undefined1)iVar13;
        uVar35 = (undefined1)((uint)iVar13 >> 8);
        uVar36 = (undefined1)((uint)iVar13 >> 0x10);
        uVar38 = (undefined1)((uint)iVar13 >> 0x18);
        auVar8[4] = uVar27;
        auVar8._0_4_ = iVar11;
        auVar8[5] = uVar28;
        auVar8[6] = uVar29;
        auVar8[7] = uVar30;
        auVar8[8] = uVar31;
        auVar8[9] = uVar33;
        auVar8[10] = uVar32;
        auVar8[0xb] = uVar34;
        auVar8[0xc] = uVar37;
        auVar8[0xd] = uVar35;
        auVar8[0xe] = uVar36;
        auVar8[0xf] = uVar38;
        auVar9[4] = uVar27;
        auVar9._0_4_ = iVar11;
        auVar9[5] = uVar28;
        auVar9[6] = uVar29;
        auVar9[7] = uVar30;
        auVar9[8] = uVar31;
        auVar9[9] = uVar33;
        auVar9[10] = uVar32;
        auVar9[0xb] = uVar34;
        auVar9[0xc] = uVar37;
        auVar9[0xd] = uVar35;
        auVar9[0xe] = uVar36;
        auVar9[0xf] = uVar38;
        NEON_ext(auVar8,auVar9,8,1);
        if (CONCAT13(uVar37,CONCAT12(uVar31,CONCAT11(uVar27,(char)iVar11))) == -1) break;
        uVar40 = NEON_fmin(uVar40,CONCAT44(fVar26,fVar25),4);
        puVar17[1] = CONCAT44(fVar26,fVar22);
        *puVar17 = uVar19;
        iVar16 = iVar16 + -1;
        puVar17 = puVar17 + -8;
        if (iVar16 == 0) goto LAB_0029293c;
      }
      uVar1 = *(int *)(param_1 + 0x180) - 1;
      *(uint *)(param_1 + 0x180) = uVar1;
      memcpy(puVar17 + -4,(void *)(param_1 + (ulong)uVar1 * 0x40),0x34);
      iVar16 = iVar16 + -1;
      puVar17 = puVar17 + -8;
    } while (iVar16 != 0);
  }
LAB_0029293c:
  auVar20._8_8_ = uVar41;
  auVar20._0_8_ = uVar40;
  return auVar20;
}


