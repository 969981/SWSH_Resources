/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002b0330; name: FUN_002b0330
 */


/* WARNING: Removing unreachable block (ram,0x002b05c4) */

undefined8
FUN_002b0330(undefined8 *param_1,undefined8 param_2,ulong param_3,long param_4,uint param_5,
            int param_6,long param_7,uint *param_8,undefined4 *param_9,undefined8 *param_10,
            undefined8 *param_11,int *param_12,undefined8 *param_13)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  float *pfVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar25;
  undefined1 auVar24 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  ulong uVar32;
  undefined1 auVar33 [16];
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined8 uVar36;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  
  uVar36 = *param_13;
  if (param_5 == 0) {
    uVar18 = 0;
  }
  else {
    uVar19 = 0;
    uVar18 = 0;
    do {
      while( true ) {
        *param_8 = 0;
        local_b0 = 5;
        local_d0 = 0;
        uStack_c8 = 0;
        local_c0 = 0x7f7fffff3ca3d70a;
        local_b8 = 0x7f7fffff7f7fffff;
        pfVar15 = (float *)(param_4 + uVar19 * 0x28);
        local_ac = 0;
        fVar20 = *pfVar15;
        fVar21 = pfVar15[1];
        local_a0 = *(undefined8 *)pfVar15;
        fVar22 = pfVar15[2];
        auVar10 = *(undefined1 (*) [12])(pfVar15 + 3);
        uStack_98 = (ulong)(uint)fVar22;
        uStack_88 = (ulong)(uint)auVar10._8_4_;
        uStack_90 = auVar10._0_8_;
        local_80 = *(undefined8 *)(pfVar15 + 6);
        uStack_78 = (ulong)(uint)pfVar15[8];
        if ((param_3 & 1) != 0) break;
        auVar24._0_4_ = auVar10._0_4_ - fVar20;
        auVar24._4_4_ = auVar10._4_4_ - fVar21;
        auVar24._8_4_ = auVar10._8_4_ - fVar22;
        auVar24._12_4_ = 0;
        fVar26 = pfVar15[6] - fVar20;
        fVar29 = pfVar15[7] - fVar21;
        fVar31 = pfVar15[8] - fVar22;
        auVar33 = NEON_ext(auVar24,auVar24,8,1);
        auVar6._4_4_ = fVar29;
        auVar6._0_4_ = fVar26;
        auVar6._8_4_ = fVar31;
        auVar6._12_4_ = 0;
        auVar7._4_4_ = fVar29;
        auVar7._0_4_ = fVar26;
        auVar7._8_4_ = fVar31;
        auVar7._12_4_ = 0;
        auVar35 = NEON_ext(auVar6,auVar7,8,1);
        fVar27 = auVar24._0_4_ * fVar29 - auVar24._4_4_ * fVar26;
        uVar23 = NEON_ext(CONCAT44(auVar24._4_4_ * fVar31 - auVar24._8_4_ * fVar29,fVar27),
                          CONCAT44(auVar33._4_4_ * fVar29 - auVar24._4_4_ * auVar35._4_4_,
                                   auVar33._0_4_ * fVar26 - auVar24._0_4_ * auVar35._0_4_),4,1);
        fVar31 = (float)uVar23;
        fVar28 = fVar31 * fVar31;
        fVar25 = (float)((ulong)uVar23 >> 0x20);
        fVar30 = fVar25 * fVar25;
        auVar8._4_4_ = fVar30;
        auVar8._0_4_ = fVar28;
        auVar8._8_4_ = fVar27 * fVar27;
        auVar8._12_4_ = 0;
        auVar9._4_4_ = fVar30;
        auVar9._0_4_ = fVar28;
        auVar9._8_4_ = fVar27 * fVar27;
        auVar9._12_4_ = 0;
        auVar33 = NEON_ext(auVar8,auVar9,8,1);
        fVar29 = auVar33._0_4_ + auVar33._4_4_;
        fVar26 = fVar28 + fVar30 + fVar29;
        fVar29 = fVar28 + fVar30 + fVar29;
        uVar23 = NEON_frsqrte(CONCAT44(fVar29,fVar26),4);
        fVar28 = (float)uVar23;
        fVar30 = (float)((ulong)uVar23 >> 0x20);
        uVar23 = NEON_frsqrts(CONCAT44(fVar30 * fVar30,fVar28 * fVar28),CONCAT44(fVar29,fVar26),4);
        fVar28 = fVar28 * (float)uVar23;
        fVar30 = fVar30 * (float)((ulong)uVar23 >> 0x20);
        uVar23 = NEON_frsqrts(CONCAT44(fVar30 * fVar30,fVar28 * fVar28),CONCAT44(fVar29,fVar26),4);
        fVar28 = fVar28 * (float)uVar23;
        fVar30 = fVar30 * (float)((ulong)uVar23 >> 0x20);
        uVar23 = NEON_frsqrts(CONCAT44(fVar30 * fVar30,fVar28 * fVar28),CONCAT44(fVar29,fVar26),4);
        fVar28 = fVar28 * (float)uVar23;
        fVar30 = fVar30 * (float)((ulong)uVar23 >> 0x20);
        uVar23 = NEON_frsqrts(CONCAT44(fVar30 * fVar30,fVar28 * fVar28),CONCAT44(fVar29,fVar26),4);
        uVar32 = CONCAT44(fVar29 * fVar30 * (float)((ulong)uVar23 >> 0x20),
                          fVar26 * fVar28 * (float)uVar23);
        uVar32 = uVar32 ^ (uVar32 ^ CONCAT44(fVar29,fVar26)) &
                          CONCAT44(-(uint)(fVar26 == 0.0),-(uint)(fVar26 == 0.0));
        uVar23 = NEON_frecpe(uVar32,4);
        uVar34 = NEON_frecps(uVar32,uVar23,4);
        fVar26 = (float)uVar23 * (float)uVar34;
        fVar29 = (float)((ulong)uVar23 >> 0x20) * (float)((ulong)uVar34 >> 0x20);
        uVar23 = NEON_frecps(uVar32,CONCAT44(fVar29,fVar26),4);
        fVar26 = fVar26 * (float)uVar23;
        fVar29 = fVar29 * (float)((ulong)uVar23 >> 0x20);
        uVar23 = NEON_frecps(uVar32,CONCAT44(fVar29,fVar26),4);
        fVar26 = fVar26 * (float)uVar23;
        fVar29 = fVar29 * (float)((ulong)uVar23 >> 0x20);
        uVar23 = NEON_frecps(uVar32,CONCAT44(fVar29,fVar26),4);
        fVar26 = fVar26 * (float)uVar23;
        uVar23 = NEON_frecps(uVar32,CONCAT44(fVar29 * (float)((ulong)uVar23 >> 0x20),fVar26),4);
        fVar26 = fVar26 * (float)uVar23;
        fVar20 = ((float)*param_1 - fVar20) * fVar31 * fVar26;
        fVar21 = ((float)((ulong)*param_1 >> 0x20) - fVar21) * fVar25 * fVar26;
        fVar22 = ((float)param_1[1] - fVar22) * fVar27 * fVar26;
        fVar26 = ((float)((ulong)param_1[1] >> 0x20) - 0.0) * 0.0;
        auVar33._4_4_ = fVar21;
        auVar33._0_4_ = fVar20;
        auVar33._8_4_ = fVar22;
        auVar33._12_4_ = fVar26;
        auVar35._4_4_ = fVar21;
        auVar35._0_4_ = fVar20;
        auVar35._8_4_ = fVar22;
        auVar35._12_4_ = fVar26;
        auVar33 = NEON_ext(auVar33,auVar35,8,1);
        if (0.0 <= fVar20 + fVar21 + auVar33._0_4_ + auVar33._4_4_) break;
LAB_002b0598:
        uVar19 = uVar19 + 1;
        if (param_5 <= uVar19) goto LAB_002b06c4;
      }
      iVar1 = (int)uVar19 + param_6;
                    /* try { // try from 002b0550 to 002b056b has its CatchHandler @ 002b06f4 */
      FUN_00270740(&local_d0,iVar1,param_1,param_2,*(undefined1 *)(pfVar15 + 9),param_7,param_8);
      uVar4 = *param_8;
      if (uVar4 == 0) goto LAB_002b0598;
      fVar20 = (float)((ulong)*(undefined8 *)(param_7 + 0x28) >> 0x20);
      fVar21 = fVar20;
      if (uVar4 == 1) {
        uVar32 = 0;
      }
      else {
        if (uVar4 == 2) {
          uVar14 = 0;
          lVar16 = 1;
LAB_002b0634:
          fVar22 = (float)((ulong)*(undefined8 *)(param_7 + lVar16 * 0x40 + 0x28) >> 0x20);
          bVar5 = fVar22 < fVar20;
          iVar3 = -(uint)bVar5;
          uVar32 = CONCAT44(fVar21,fVar20) ^
                   (CONCAT44(fVar21,fVar20) ^ CONCAT44(fVar22,fVar22)) & CONCAT44(iVar3,iVar3);
          fVar20 = (float)uVar32;
          fVar21 = (float)(uVar32 >> 0x20);
          uVar4 = (uint)lVar16;
          if (!bVar5) {
            uVar4 = uVar14;
          }
          uVar14 = uVar4;
        }
        else {
          lVar16 = 1;
          lVar17 = param_7 + 0xa0;
          uVar13 = 0;
          do {
            fVar22 = (float)((ulong)*(undefined8 *)(lVar17 + -0x38) >> 0x20);
            iVar3 = -(uint)(fVar22 < fVar20);
            uVar32 = CONCAT44(fVar21,fVar20) ^
                     (CONCAT44(fVar21,fVar20) ^ CONCAT44(fVar22,fVar22)) & CONCAT44(iVar3,iVar3);
            fVar21 = (float)((ulong)*(undefined8 *)(lVar17 + 8) >> 0x20);
            lVar17 = lVar17 + 0x80;
            bVar5 = fVar21 < (float)uVar32;
            uVar14 = (uint)lVar16;
            if (fVar22 >= fVar20) {
              uVar14 = uVar13;
            }
            iVar3 = -(uint)bVar5;
            if (bVar5) {
              uVar14 = (uint)lVar16 + 1;
            }
            uVar32 = uVar32 ^ (uVar32 ^ CONCAT44(fVar21,fVar21)) & CONCAT44(iVar3,iVar3);
            fVar20 = (float)uVar32;
            fVar21 = (float)(uVar32 >> 0x20);
            lVar16 = lVar16 + 2;
            uVar13 = uVar14;
          } while ((ulong)uVar4 - (ulong)(~uVar4 & 1) != lVar16);
          if ((~uVar4 & 1) != 0) goto LAB_002b0634;
        }
        uVar32 = (ulong)uVar14;
      }
      if ((float)uVar36 <= fVar20) {
        uVar18 = 1;
        goto LAB_002b0598;
      }
      puVar2 = (undefined8 *)(param_7 + uVar32 * 0x40);
      uVar36 = CONCAT44(fVar21,fVar20);
      uVar18 = 1;
      *param_12 = iVar1;
      uVar11 = *(undefined4 *)(puVar2 + 4);
      uVar12 = *(undefined4 *)((long)puVar2 + 0x24);
      *(ulong *)(param_9 + 2) = (ulong)*(uint *)(puVar2 + 5);
      *param_9 = uVar11;
      param_9[1] = uVar12;
      uVar23 = puVar2[2];
      param_10[1] = puVar2[3];
      *param_10 = uVar23;
      uVar23 = *puVar2;
      param_11[1] = puVar2[1];
      *param_11 = uVar23;
      uVar19 = uVar19 + 1;
    } while (uVar19 < param_5);
  }
LAB_002b06c4:
  *param_13 = uVar36;
  return uVar18;
}


