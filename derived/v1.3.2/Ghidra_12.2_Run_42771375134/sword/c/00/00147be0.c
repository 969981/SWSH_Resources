/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00147be0; name: FUN_00147be0
 */


void FUN_00147be0(long param_1,long param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 (*pauVar14) [12];
  ulong uVar15;
  ulong uVar16;
  undefined1 (*pauVar17) [12];
  long lVar18;
  undefined1 (*pauVar19) [16];
  uint uVar20;
  uint *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  uint uVar25;
  undefined8 *puVar26;
  float fVar27;
  float fVar32;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  FUN_00147e10();
  FUN_00148470(param_1,param_2);
  puVar21 = *(uint **)(param_1 + 0x1c0);
  uVar20 = *puVar21;
  if (uVar20 == 0) {
    auVar28._8_4_ = 0x7f7fffff;
    auVar28._0_8_ = 0x7f7fffff7f7fffff;
    auVar28._12_4_ = 0x7f7fffff;
    auVar33._8_4_ = 0xff7fffff;
    auVar33._0_8_ = 0xff7fffffff7fffff;
    auVar33._12_4_ = 0xff7fffff;
  }
  else {
    fVar27 = (float)DAT_02736980;
    uVar16 = (ulong)DAT_02736980 >> 0x20;
    fVar32 = (float)DAT_02736988;
    uVar15 = (ulong)DAT_02736988 >> 0x20;
    auVar33._8_4_ = 0xff7fffff;
    auVar33._0_8_ = 0xff7fffffff7fffff;
    auVar33._12_4_ = 0xff7fffff;
    auVar28._8_4_ = 0x7f7fffff;
    auVar28._0_8_ = 0x7f7fffff7f7fffff;
    auVar28._12_4_ = 0x7f7fffff;
    pauVar2 = *(undefined1 (**) [12])(puVar21 + 2);
    pauVar17 = pauVar2;
    puVar21 = *(uint **)(puVar21 + 4);
    do {
      fVar35 = (float)((ulong)*(undefined8 *)(*pauVar17 + 8) >> 0x20);
      uVar22 = *(undefined8 *)*pauVar17;
      uVar25 = *(uint *)*pauVar17;
      uVar8 = *(uint *)(*pauVar17 + 4);
      uVar12 = *(uint *)*pauVar17;
      uVar13 = *(uint *)(*pauVar17 + 4);
      uVar9 = *puVar21;
      uVar10 = puVar21[1];
      uVar11 = puVar21[3];
      auVar4._12_4_ = fVar35;
      auVar4._0_12_ = *pauVar17;
      auVar28 = NEON_fmin(auVar28,auVar4,4);
      auVar5._12_4_ = fVar35;
      auVar5._0_12_ = *pauVar17;
      auVar33 = NEON_fmax(auVar33,auVar5,4);
      pauVar14 = pauVar17 + 1;
      *(uint *)(*pauVar17 + 8) =
           *(uint *)(*pauVar17 + 8) ^
           (*(uint *)(*pauVar17 + 8) ^ puVar21[2]) &
           -(uint)(-fVar32 < (float)*(undefined8 *)(*pauVar17 + 8));
      *(uint *)pauVar17[1] =
           (uint)fVar35 ^ ((uint)fVar35 ^ uVar11) & -(uint)(-(float)uVar15 < fVar35);
      *(uint *)*pauVar17 = uVar25 ^ (uVar12 ^ uVar9) & -(uint)(-fVar27 < (float)uVar22);
      *(uint *)(*pauVar17 + 4) =
           uVar8 ^ (uVar13 ^ uVar10) & -(uint)(-(float)uVar16 < (float)((ulong)uVar22 >> 0x20));
      pauVar17 = (undefined1 (*) [12])(*pauVar14 + 4);
      puVar21 = puVar21 + 4;
    } while ((undefined1 (*) [12])(*pauVar14 + 4) <
             (undefined1 (*) [12])((long)pauVar2 + (ulong)uVar20 * 0x10));
    puVar21 = *(uint **)(param_1 + 0x1c0);
  }
  uVar23 = *(undefined8 *)(puVar21 + 8);
  uVar22 = *(undefined8 *)(puVar21 + 6);
  uVar7 = *(undefined8 *)(puVar21 + 0xb);
  uVar6 = *(undefined8 *)(puVar21 + 9);
  *(long *)(puVar21 + 8) = auVar28._8_8_;
  *(long *)(puVar21 + 6) = auVar28._0_8_;
  *(long *)(puVar21 + 0xb) = auVar33._8_8_;
  *(long *)(puVar21 + 9) = auVar33._0_8_;
  lVar18 = *(long *)(param_1 + 0x1c0);
  *(undefined8 *)(lVar18 + 0x38) = uVar23;
  *(undefined8 *)(lVar18 + 0x30) = uVar22;
  *(undefined8 *)(lVar18 + 0x44) = uVar7;
  *(undefined8 *)(lVar18 + 0x3c) = uVar6;
  lVar18 = *(long *)(param_1 + 0x1c0);
  uVar20 = *(uint *)(lVar18 + 0x110);
  if (uVar20 != 0) {
    pauVar19 = *(undefined1 (**) [16])(lVar18 + 0x108);
    if (*(uint *)(param_2 + 0xd0) == 1) {
      puVar24 = *(undefined8 **)(param_1 + 0x1b0);
      uVar25 = uVar20;
      if ((uVar20 & 1) != 0) {
        auVar29._8_8_ = DAT_02736988;
        auVar29._0_8_ = DAT_02736980;
        auVar28 = NEON_fmax(auVar29,*pauVar19,4);
        puVar24[1] = auVar28._8_8_;
        *puVar24 = auVar28._0_8_;
        pauVar19 = pauVar19 + 1;
        uVar25 = uVar20 - 1;
        puVar24 = puVar24 + 2;
      }
      if (uVar20 != 1) {
        do {
          auVar30._8_8_ = DAT_02736988;
          auVar30._0_8_ = DAT_02736980;
          uVar25 = uVar25 - 2;
          auVar28 = NEON_fmax(auVar30,*pauVar19,4);
          puVar24[1] = auVar28._8_8_;
          *puVar24 = auVar28._0_8_;
          auVar31._8_8_ = DAT_02736988;
          auVar31._0_8_ = DAT_02736980;
          pauVar1 = pauVar19 + 1;
          pauVar19 = pauVar19 + 2;
          auVar28 = NEON_fmax(auVar31,*pauVar1,4);
          puVar24[3] = auVar28._8_8_;
          puVar24[2] = auVar28._0_8_;
          puVar24 = puVar24 + 4;
        } while (uVar25 != 0);
      }
    }
    else {
      fVar27 = *(float *)(param_2 + 0xd4) +
               (1.0 - *(float *)(param_2 + 0xd4) * (float)*(uint *)(param_2 + 0xd0));
      puVar24 = *(undefined8 **)(lVar18 + 0x100);
      puVar26 = *(undefined8 **)(param_1 + 0x1b0);
      do {
        auVar34._8_8_ = DAT_02736988;
        auVar34._0_8_ = DAT_02736980;
        fVar36 = (float)puVar24[1];
        fVar37 = (float)((ulong)puVar24[1] >> 0x20);
        fVar32 = (float)*puVar24;
        fVar35 = (float)((ulong)*puVar24 >> 0x20);
        uVar20 = uVar20 - 1;
        auVar3._4_4_ = fVar35 + fVar27 * ((float)((ulong)*(undefined8 *)*pauVar19 >> 0x20) - fVar35)
        ;
        auVar3._0_4_ = fVar32 + fVar27 * ((float)*(undefined8 *)*pauVar19 - fVar32);
        auVar3._8_4_ = fVar36 + fVar27 * ((float)*(undefined8 *)(*pauVar19 + 8) - fVar36);
        auVar3._12_4_ =
             fVar37 + fVar27 * ((float)((ulong)*(undefined8 *)(*pauVar19 + 8) >> 0x20) - fVar37);
        auVar28 = NEON_fmax(auVar34,auVar3,4);
        puVar26[1] = auVar28._8_8_;
        *puVar26 = auVar28._0_8_;
        pauVar19 = pauVar19 + 1;
        puVar24 = puVar24 + 2;
        puVar26 = puVar26 + 2;
      } while (uVar20 != 0);
    }
    FUN_00147950(*(undefined8 *)(param_1 + 0x1b8),*(undefined8 *)(param_1 + 0x1b0),
                 *(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x118),
                 *(undefined4 *)(*(long *)(param_1 + 0x1c0) + 0x120));
    uVar16 = FUN_00148b20(param_1);
    if ((uVar16 & 1) != 0) {
      if (*(char *)(*(long *)(param_1 + 0x1c0) + 0x184) != '\0') {
        FUN_00149120(param_1);
      }
      FUN_001495b0(param_1);
      FUN_001495b0(param_1 + 0xc0);
      if (*(char *)(*(long *)(param_1 + 0x1c0) + 0x184) == '\0') {
        FUN_001496d0(param_1);
      }
      FUN_00149d40(param_1);
    }
    if (*(long *)(param_1 + 0x1a0) != 0) {
      uVar22 = *(undefined8 *)(param_1 + 0x1b8);
      uVar23 = *(undefined8 *)(param_1 + 0x1b0);
      *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x1a8);
      *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_1 + 0x1a0);
      *(undefined8 *)(param_1 + 0x1a8) = uVar22;
      *(undefined8 *)(param_1 + 0x1a0) = uVar23;
    }
  }
  return;
}


