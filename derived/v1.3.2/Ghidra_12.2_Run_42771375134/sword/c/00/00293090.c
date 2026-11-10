/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00293090; name: FUN_00293090
 */


bool FUN_00293090(long param_1,long param_2,undefined1 (*param_3) [16])

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  char cVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  undefined8 uVar27;
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
  float fVar43;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  ulong uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  float fVar50;
  undefined8 uVar49;
  undefined8 uVar51;
  undefined1 auVar52 [16];
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  
  uVar21 = (ulong)*(byte *)(param_1 + 0x3e);
  *(undefined1 *)(param_1 + 0x3f) = 0;
  if (*(byte *)(param_1 + 0x3e) == 0) {
    *(undefined4 *)(param_2 + 0x1000) = 0;
    return false;
  }
  cVar23 = '\0';
  uVar18 = 0;
  uVar20 = 0;
  while( true ) {
    uVar22 = (ulong)*(byte *)(param_1 + uVar18 + 0x38);
    lVar25 = param_1 + uVar22 * 400;
    uVar5 = *(uint *)(lVar25 + 0x1c0);
    uVar19 = (ulong)uVar5;
    *(char *)(param_1 + 0x3f) = (char)uVar5 + cVar23;
    uVar27 = *(undefined8 *)(lVar25 + 0x68);
    fVar36 = (float)uVar27;
    fVar32 = (float)((ulong)uVar27 >> 0x20);
    fVar35 = (float)*(undefined8 *)(lVar25 + 0x60);
    fVar37 = (float)((ulong)*(undefined8 *)(lVar25 + 0x60) >> 0x20);
    if (1 < uVar5) {
      uVar4 = uVar5 + 3 & 3;
      if (uVar19 - 2 < 3) {
        lVar25 = 1;
      }
      else {
        puVar17 = (undefined8 *)(param_1 + 0xe0 + uVar22 * 400);
        lVar25 = 1;
        do {
          puVar3 = puVar17 + -8;
          puVar6 = puVar17 + -7;
          puVar7 = puVar17 + 1;
          uVar51 = *puVar17;
          puVar1 = puVar17 + 8;
          puVar8 = puVar17 + 9;
          puVar2 = puVar17 + 0x10;
          puVar9 = puVar17 + 0x11;
          puVar17 = puVar17 + 0x20;
          lVar25 = lVar25 + 4;
          fVar35 = fVar35 + (float)*puVar3 + (float)uVar51 + (float)*puVar1 + (float)*puVar2;
          fVar37 = fVar37 + (float)((ulong)*puVar3 >> 0x20) + (float)((ulong)uVar51 >> 0x20) +
                   (float)((ulong)*puVar1 >> 0x20) + (float)((ulong)*puVar2 >> 0x20);
          fVar36 = fVar36 + (float)*puVar6 + (float)*puVar7 + (float)*puVar8 + (float)*puVar9;
          fVar32 = fVar32 + (float)((ulong)*puVar6 >> 0x20) + (float)((ulong)*puVar7 >> 0x20) +
                   (float)((ulong)*puVar8 >> 0x20) + (float)((ulong)*puVar9 >> 0x20);
        } while (uVar19 - uVar4 != lVar25);
      }
      if (uVar4 != 0) {
        lVar24 = -(ulong)uVar4;
        puVar17 = (undefined8 *)(param_1 + 0x60 + (uVar22 * 0x19 + lVar25 * 4) * 0x10);
        do {
          lVar24 = lVar24 + 1;
          fVar35 = fVar35 + (float)*puVar17;
          fVar37 = fVar37 + (float)((ulong)*puVar17 >> 0x20);
          fVar36 = fVar36 + (float)puVar17[1];
          fVar32 = fVar32 + (float)((ulong)puVar17[1] >> 0x20);
          puVar17 = puVar17 + 8;
        } while (lVar24 != 0);
      }
    }
    if ((uVar5 != 0) && (uVar20 < 0x40)) {
      fVar28 = (float)*(undefined8 *)(*param_3 + 8);
      fVar30 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
      auVar55 = *param_3;
      fVar29 = (float)*(undefined8 *)*param_3;
      fVar31 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
      auVar38._12_4_ = fVar32;
      auVar38._8_4_ = fVar36;
      auVar38._4_4_ = fVar37;
      auVar38._0_4_ = fVar35;
      auVar39._0_12_ = auVar38._0_12_;
      auVar39._12_4_ = 0;
      auVar54 = NEON_ext(auVar39,auVar39,8,1);
      auVar45._0_12_ = auVar55._0_12_;
      auVar45._12_4_ = 0;
      auVar52 = NEON_ext(auVar45,auVar45,8,1);
      fVar48 = fVar30 * fVar30 + -0.5;
      fVar50 = auVar55._0_4_;
      fVar43 = auVar55._4_4_;
      auVar40._0_4_ = fVar35 * fVar50;
      auVar40._4_4_ = fVar37 * fVar43;
      auVar40._8_4_ = fVar36 * auVar55._8_4_;
      auVar40._12_4_ = 0;
      fVar32 = fVar37 * fVar50 - fVar35 * fVar31;
      uVar26 = 1;
      uVar51 = NEON_ext(CONCAT44(fVar36 * fVar43 - fVar37 * fVar28,fVar32),
                        CONCAT44(fVar37 * auVar52._4_4_ - auVar54._4_4_ * fVar43,
                                 fVar35 * auVar52._0_4_ - auVar54._0_4_ * fVar50),4,1);
      lVar25 = 0;
      fVar33 = fVar35 * fVar48 + (float)uVar51 * fVar30;
      fVar34 = fVar37 * fVar48 + (float)((ulong)uVar51 >> 0x20) * fVar30;
      fVar35 = fVar36 * fVar48 + fVar32 * fVar30;
      fVar37 = fVar30 * 0.0 + 0.0;
      auVar52._4_4_ = fVar34;
      auVar52._0_4_ = fVar33;
      auVar52._8_4_ = fVar35;
      auVar52._12_4_ = fVar37;
      auVar54._4_4_ = fVar34;
      auVar54._0_4_ = fVar33;
      auVar54._8_4_ = fVar35;
      auVar54._12_4_ = fVar37;
      auVar52 = NEON_ext(auVar52,auVar54,8,1);
      auVar54 = NEON_ext(auVar40,auVar40,8,1);
      fVar35 = auVar40._0_4_ + auVar40._4_4_ + auVar54._0_4_ + auVar54._4_4_;
      fVar33 = fVar50 * fVar35 + fVar33;
      fVar34 = fVar43 * fVar35 + fVar34;
      fVar37 = auVar55._8_4_ * fVar35 + auVar52._0_4_;
      fVar35 = fVar35 * 0.0 + 0.0;
      auVar55._4_4_ = fVar34;
      auVar55._0_4_ = fVar33;
      auVar55._8_4_ = fVar37;
      auVar55._12_4_ = fVar35;
      auVar16._4_4_ = fVar34;
      auVar16._0_4_ = fVar33;
      auVar16._8_4_ = fVar37;
      auVar16._12_4_ = fVar35;
      auVar52 = NEON_ext(auVar55,auVar16,8,1);
      fVar33 = fVar33 + fVar33;
      fVar34 = fVar34 + fVar34;
      fVar36 = auVar52._0_4_ + auVar52._0_4_;
      auVar41._0_4_ = fVar33 * fVar33;
      auVar41._4_4_ = fVar34 * fVar34;
      auVar41._8_4_ = fVar36 * fVar36;
      auVar41._12_4_ = 0;
      auVar52 = NEON_ext(auVar41,auVar41,8,1);
      fVar37 = auVar52._0_4_ + auVar52._4_4_;
      fVar35 = auVar41._0_4_ + auVar41._4_4_ + fVar37;
      fVar37 = auVar41._0_4_ + auVar41._4_4_ + fVar37;
      uVar21 = CONCAT44(fVar37,fVar35);
      uVar51 = NEON_frsqrte(uVar21,4);
      fVar32 = (float)uVar51;
      fVar50 = (float)((ulong)uVar51 >> 0x20);
      uVar51 = NEON_frsqrts(CONCAT44(fVar50 * fVar50,fVar32 * fVar32),uVar21,4);
      fVar32 = fVar32 * (float)uVar51;
      fVar50 = fVar50 * (float)((ulong)uVar51 >> 0x20);
      uVar51 = NEON_frsqrts(CONCAT44(fVar50 * fVar50,fVar32 * fVar32),uVar21,4);
      fVar32 = fVar32 * (float)uVar51;
      fVar50 = fVar50 * (float)((ulong)uVar51 >> 0x20);
      uVar51 = NEON_frsqrts(CONCAT44(fVar50 * fVar50,fVar32 * fVar32),uVar21,4);
      fVar32 = fVar32 * (float)uVar51;
      fVar50 = fVar50 * (float)((ulong)uVar51 >> 0x20);
      uVar51 = NEON_frsqrts(CONCAT44(fVar50 * fVar50,fVar32 * fVar32),uVar21,4);
      uVar44 = CONCAT44(fVar37 * fVar50 * (float)((ulong)uVar51 >> 0x20),
                        fVar35 * fVar32 * (float)uVar51);
      uVar44 = uVar44 ^ (uVar44 ^ uVar21) & CONCAT44(-(uint)(fVar35 == 0.0),-(uint)(fVar35 == 0.0));
      uVar51 = NEON_frecpe(uVar44,4);
      uVar49 = NEON_frecps(uVar44,uVar51,4);
      fVar35 = (float)uVar51 * (float)uVar49;
      fVar37 = (float)((ulong)uVar51 >> 0x20) * (float)((ulong)uVar49 >> 0x20);
      uVar51 = NEON_frecps(uVar44,CONCAT44(fVar37,fVar35),4);
      fVar35 = fVar35 * (float)uVar51;
      fVar37 = fVar37 * (float)((ulong)uVar51 >> 0x20);
      uVar51 = NEON_frecps(uVar44,CONCAT44(fVar37,fVar35),4);
      fVar35 = fVar35 * (float)uVar51;
      fVar37 = fVar37 * (float)((ulong)uVar51 >> 0x20);
      uVar51 = NEON_frecps(uVar44,CONCAT44(fVar37,fVar35),4);
      fVar35 = fVar35 * (float)uVar51;
      uVar51 = NEON_frecps(uVar44,CONCAT44(fVar37 * (float)((ulong)uVar51 >> 0x20),fVar35),4);
      fVar35 = fVar35 * (float)uVar51;
      while( true ) {
        auVar46._12_4_ = fVar30;
        auVar46._8_4_ = fVar28;
        auVar46._4_4_ = fVar31;
        auVar46._0_4_ = fVar29;
        lVar24 = param_1 + uVar22 * 400 + lVar25;
        auVar52 = *(undefined1 (*) [16])(lVar24 + 0x50);
        auVar47._0_12_ = auVar46._0_12_;
        auVar47._12_4_ = 0;
        fVar50 = auVar52._4_4_;
        fVar43 = auVar52._8_4_;
        auVar54 = NEON_ext(auVar47,auVar47,8,1);
        auVar55 = NEON_ext(auVar52,auVar52,8,1);
        fVar37 = auVar52._0_4_;
        fVar48 = fVar30 * fVar30 + -0.5;
        puVar17 = (undefined8 *)(param_2 + (ulong)uVar20 * 0x40 + lVar25);
        fVar53 = fVar29 * fVar50 - fVar31 * fVar37;
        auVar42._0_4_ = fVar29 * fVar37;
        auVar42._4_4_ = fVar31 * fVar50;
        auVar42._8_4_ = fVar28 * fVar43;
        auVar42._12_4_ = auVar52._12_4_ * 0.0;
        uVar51 = NEON_ext(CONCAT44(fVar31 * fVar43 - fVar28 * fVar50,fVar53),
                          CONCAT44(auVar54._4_4_ * fVar50 - fVar31 * auVar55._4_4_,
                                   auVar54._0_4_ * fVar37 - fVar29 * auVar55._0_4_),4,1);
        fVar32 = fVar37 * fVar48 + (float)uVar51 * fVar30;
        fVar50 = fVar50 * fVar48 + (float)((ulong)uVar51 >> 0x20) * fVar30;
        fVar37 = fVar43 * fVar48 + fVar53 * fVar30;
        fVar30 = fVar30 * 0.0 + 0.0;
        auVar10._4_4_ = fVar50;
        auVar10._0_4_ = fVar32;
        auVar10._8_4_ = fVar37;
        auVar10._12_4_ = fVar30;
        auVar11._4_4_ = fVar50;
        auVar11._0_4_ = fVar32;
        auVar11._8_4_ = fVar37;
        auVar11._12_4_ = fVar30;
        auVar52 = NEON_ext(auVar10,auVar11,8,1);
        auVar54 = NEON_ext(auVar42,auVar42,8,1);
        fVar37 = auVar42._0_4_ + auVar42._4_4_ + auVar54._0_4_ + auVar54._4_4_;
        fVar32 = fVar29 * fVar37 + fVar32;
        fVar50 = fVar31 * fVar37 + fVar50;
        fVar29 = fVar28 * fVar37 + auVar52._0_4_;
        fVar37 = fVar37 * 0.0 + 0.0;
        auVar12._4_4_ = fVar50;
        auVar12._0_4_ = fVar32;
        auVar12._8_4_ = fVar29;
        auVar12._12_4_ = fVar37;
        auVar13._4_4_ = fVar50;
        auVar13._0_4_ = fVar32;
        auVar13._8_4_ = fVar29;
        auVar13._12_4_ = fVar37;
        auVar52 = NEON_ext(auVar12,auVar13,8,1);
        fVar37 = *(float *)param_3[1] + fVar32 + fVar32;
        fVar32 = *(float *)(param_3[1] + 4) + fVar50 + fVar50;
        fVar29 = *(float *)(param_3[1] + 8) + auVar52._0_4_ + auVar52._0_4_;
        fVar31 = *(float *)(param_3[1] + 0xc) + 0.0;
        auVar14._4_4_ = fVar32;
        auVar14._0_4_ = fVar37;
        auVar14._8_4_ = fVar29;
        auVar14._12_4_ = fVar31;
        auVar15._4_4_ = fVar32;
        auVar15._0_4_ = fVar37;
        auVar15._8_4_ = fVar29;
        auVar15._12_4_ = fVar31;
        auVar52 = NEON_ext(auVar14,auVar15,8,1);
        puVar17[1] = (ulong)(uint)(fVar36 * fVar35);
        *puVar17 = CONCAT44(fVar34 * fVar35,fVar33 * fVar35);
        puVar17[3] = (ulong)auVar52._0_4_;
        puVar17[2] = CONCAT44(fVar32,fVar37);
        *(int *)((long)puVar17 + 0xc) = (int)((ulong)uVar27 >> 0x20);
        *(undefined4 *)((long)puVar17 + 0x34) = *(undefined4 *)(lVar24 + 0x70);
        if ((uVar19 <= uVar26) || (0x3f < uVar20 + uVar26)) break;
        fVar28 = (float)*(undefined8 *)(*param_3 + 8);
        fVar30 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
        fVar29 = (float)*(undefined8 *)*param_3;
        fVar31 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
        uVar27 = *(undefined8 *)(lVar24 + 0xa8);
        uVar26 = uVar26 + 1;
        lVar25 = lVar25 + 0x40;
      }
      uVar21 = (ulong)*(byte *)(param_1 + 0x3e);
      uVar20 = uVar20 + (int)uVar26;
    }
    uVar18 = uVar18 + 1;
    if (uVar21 <= uVar18) break;
    cVar23 = *(char *)(param_1 + 0x3f);
  }
  *(uint *)(param_2 + 0x1000) = uVar20;
  return uVar20 != 0;
}


