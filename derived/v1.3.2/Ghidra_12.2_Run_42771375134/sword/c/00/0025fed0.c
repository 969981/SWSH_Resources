/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0025fed0; name: FUN_0025fed0
 */


/* WARNING: Removing unreachable block (ram,0x0026009c) */
/* WARNING: Removing unreachable block (ram,0x002600e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0025fed0(undefined1 param_1 [16],undefined8 param_2,long param_3,long param_4,undefined8 param_5
            ,undefined1 (*param_6) [16],undefined8 param_7,undefined8 param_8,long param_9,
            undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
            byte param_14,byte param_15,undefined8 param_16)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulong uVar13;
  long lVar14;
  long lVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ulong uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar42;
  undefined8 uVar40;
  undefined1 auVar41 [16];
  undefined8 uVar43;
  undefined1 auVar44 [16];
  float fVar45;
  undefined1 auVar46 [16];
  undefined8 local_300;
  ulong uStack_2f8;
  undefined *local_2f0 [4];
  undefined1 (*local_2d0) [16];
  long lStack_2c8;
  long local_2c0;
  byte local_2b8;
  long local_2b0;
  undefined *local_2a0 [4];
  undefined8 local_280;
  undefined8 *local_278;
  undefined8 *puStack_270;
  undefined1 local_268;
  long local_260;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [104];
  undefined1 auStack_1b8 [224];
  undefined1 auStack_d8 [40];
  undefined *local_b0;
  int local_64;
  
  uVar43 = param_1._8_8_;
  FUN_0028b370(auStack_1b8,param_2);
  FUN_0028b4e0(auStack_1b8,auStack_d8);
  local_b0 = PTR_DAT_02711ea8;
  FUN_0028b510(param_4,param_14 & 1,auStack_220);
  uStack_248 = _UNK_01d4ae58;
  local_250 = _DAT_01d4ae50;
  local_278 = &local_250;
  uStack_238 = _UNK_01d4b588;
  local_240 = _DAT_01d4b580;
  local_268 = 1;
  local_2a0[0] = PTR_DAT_02711eb0 + 0x10;
  lStack_2c8 = param_4 + 0x30;
  local_2c0 = param_4 + 0x60;
  local_64 = 0;
  uStack_228 = _UNK_01d49dc8;
  local_230 = _DAT_01d49dc0;
  local_2f0[0] = PTR_DAT_02711ec0;
  if ((param_14 & 1) == 0) {
    local_2f0[0] = PTR_DAT_02711eb8;
  }
  local_2f0[0] = local_2f0[0] + 0x10;
                    /* try { // try from 0026000c to 00260063 has its CatchHandler @ 0026047c */
  auVar41._8_8_ = uVar43;
  auVar41._0_8_ = param_1._0_8_;
  local_2d0 = param_6;
  local_2b8 = param_14 & 1;
  local_2b0 = param_4;
  local_280 = param_5;
  puStack_270 = local_278;
  local_260 = param_3;
  uVar13 = FUN_00281180(*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_4 + 0x10),auVar41,
                        auStack_d8,auStack_220,local_2a0,local_2f0,param_7,&local_64,param_13,
                        param_10,param_11,param_12,param_15 & 1,param_16);
  if ((uVar13 & 1) == 0) {
    return 0;
  }
  if (local_64 == 0) {
    if ((param_15 & 1) != 0) {
      return 1;
    }
    lVar14 = *(long *)(param_9 + 0x30);
    pauVar1 = (undefined1 (*) [16])(lVar14 + 0x20);
    auVar44 = *pauVar1;
    auVar23 = SUB1612(*pauVar1,0);
    bVar3 = *(byte *)(param_9 + 0x20);
    if (1 < (ulong)bVar3) {
      uVar2 = ~(uint)bVar3 & 1;
      if (bVar3 == 2) {
        lVar15 = 1;
        auVar22 = SUB1612(*pauVar1,0);
      }
      else {
        lVar15 = 1;
        pfVar16 = (float *)(lVar14 + 0x80);
        do {
          lVar15 = lVar15 + 2;
          auVar23._0_4_ = auVar44._0_4_ + (float)*(undefined8 *)(pfVar16 + -0xc) + *pfVar16;
          auVar23._4_4_ =
               auVar44._4_4_ + (float)((ulong)*(undefined8 *)(pfVar16 + -0xc) >> 0x20) + pfVar16[1];
          auVar23._8_4_ = auVar44._8_4_ + (float)*(undefined8 *)(pfVar16 + -10) + pfVar16[2];
          auVar44._12_4_ =
               auVar44._12_4_ + (float)((ulong)*(undefined8 *)(pfVar16 + -10) >> 0x20) + pfVar16[3];
          auVar44._0_12_ = auVar23;
          pfVar16 = pfVar16 + 0x18;
        } while ((ulong)bVar3 - (ulong)uVar2 != lVar15);
        auVar22 = auVar23;
        if (uVar2 == 0) goto LAB_002602dc;
      }
      lVar14 = lVar14 + lVar15 * 0x30;
      uVar43 = *(undefined8 *)(lVar14 + 0x20);
      auVar23._0_4_ = auVar22._0_4_ + (float)uVar43;
      auVar23._4_4_ = auVar22._4_4_ + (float)((ulong)uVar43 >> 0x20);
      auVar23._8_4_ = auVar22._8_4_ + (float)*(undefined8 *)(lVar14 + 0x28);
    }
LAB_002602dc:
    auVar34._0_4_ = auVar23._0_4_ * auVar23._0_4_;
    auVar34._4_4_ = auVar23._4_4_ * auVar23._4_4_;
    auVar34._8_4_ = auVar23._8_4_ * auVar23._8_4_;
    auVar34._12_4_ = 0;
    auVar41 = NEON_ext(auVar34,auVar34,8,1);
    auVar35._0_4_ =
         -(uint)(1.1920929e-07 < auVar34._0_4_ + auVar34._4_4_ + auVar41._0_4_ + auVar41._4_4_);
    auVar35._4_4_ = auVar35._0_4_;
    auVar35._8_4_ = auVar35._0_4_;
    auVar35._12_4_ = auVar35._0_4_;
    auVar46._12_4_ = 0;
    auVar46._0_12_ = *(undefined1 (*) [12])*pauVar1 ^ auVar23;
    auVar36._12_4_ = 0;
    auVar36._0_12_ = *(undefined1 (*) [12])*pauVar1;
    auVar36 = auVar36 ^ auVar46 & auVar35;
    fVar21 = (float)((ulong)*(undefined8 *)(*param_6 + 8) >> 0x20);
    auVar41 = *param_6;
    fVar18 = auVar36._4_4_;
    fVar42 = auVar36._8_4_;
    auVar27._0_12_ = auVar41._0_12_;
    auVar27._12_4_ = 0;
    fVar38 = fVar21 * fVar21 + -0.5;
    auVar44 = NEON_ext(auVar27,auVar27,8,1);
    auVar46 = NEON_ext(auVar36,auVar36,8,1);
    fVar20 = auVar41._0_4_;
    fVar39 = auVar41._4_4_;
    fVar19 = auVar36._0_4_;
    fVar45 = fVar20 * fVar18 - (float)((ulong)*(undefined8 *)*param_6 >> 0x20) * fVar19;
    auVar37._0_4_ = fVar20 * fVar19;
    auVar37._4_4_ = fVar39 * fVar18;
    auVar37._8_4_ = auVar41._8_4_ * fVar42;
    auVar37._12_4_ = auVar36._12_4_ * 0.0;
    uVar43 = NEON_ext(CONCAT44(fVar39 * fVar42 - (float)*(undefined8 *)(*param_6 + 8) * fVar18,
                               fVar45),
                      CONCAT44(auVar44._4_4_ * fVar18 - fVar39 * auVar46._4_4_,
                               auVar44._0_4_ * fVar19 - fVar20 * auVar46._0_4_),4,1);
    fVar17 = fVar19 * fVar38 + (float)uVar43 * fVar21;
    fVar18 = fVar18 * fVar38 + (float)((ulong)uVar43 >> 0x20) * fVar21;
    fVar19 = fVar42 * fVar38 + fVar45 * fVar21;
    fVar21 = fVar21 * 0.0 + 0.0;
    auVar9._4_4_ = fVar18;
    auVar9._0_4_ = fVar17;
    auVar9._8_4_ = fVar19;
    auVar9._12_4_ = fVar21;
    auVar10._4_4_ = fVar18;
    auVar10._0_4_ = fVar17;
    auVar10._8_4_ = fVar19;
    auVar10._12_4_ = fVar21;
    auVar44 = NEON_ext(auVar9,auVar10,8,1);
    auVar46 = NEON_ext(auVar37,auVar37,8,1);
    fVar19 = auVar37._0_4_ + auVar37._4_4_ + auVar46._0_4_ + auVar46._4_4_;
    fVar17 = fVar20 * fVar19 + fVar17;
    fVar18 = fVar39 * fVar19 + fVar18;
    fVar21 = auVar41._8_4_ * fVar19 + auVar44._0_4_;
    fVar19 = fVar19 * 0.0 + 0.0;
    auVar11._4_4_ = fVar18;
    auVar11._0_4_ = fVar17;
    auVar11._8_4_ = fVar21;
    auVar11._12_4_ = fVar19;
    auVar12._4_4_ = fVar18;
    auVar12._0_4_ = fVar17;
    auVar12._8_4_ = fVar21;
    auVar12._12_4_ = fVar19;
    auVar41 = NEON_ext(auVar11,auVar12,8,1);
    fVar17 = fVar17 + fVar17;
    fVar18 = fVar18 + fVar18;
    fVar20 = auVar41._0_4_ + auVar41._0_4_;
    auVar28._0_4_ = fVar17 * fVar17;
    auVar28._4_4_ = fVar18 * fVar18;
    auVar28._8_4_ = fVar20 * fVar20;
    auVar28._12_4_ = 0;
    auVar41 = NEON_ext(auVar28,auVar28,8,1);
    fVar21 = auVar41._0_4_ + auVar41._4_4_;
    fVar19 = auVar28._0_4_ + auVar28._4_4_ + fVar21;
    fVar21 = auVar28._0_4_ + auVar28._4_4_ + fVar21;
    uVar13 = CONCAT44(fVar21,fVar19);
    uVar43 = NEON_frsqrte(uVar13,4);
    fVar39 = (float)uVar43;
    fVar42 = (float)((ulong)uVar43 >> 0x20);
    uVar43 = NEON_frsqrts(CONCAT44(fVar42 * fVar42,fVar39 * fVar39),uVar13,4);
    fVar39 = fVar39 * (float)uVar43;
    fVar42 = fVar42 * (float)((ulong)uVar43 >> 0x20);
    uVar43 = NEON_frsqrts(CONCAT44(fVar42 * fVar42,fVar39 * fVar39),uVar13,4);
    fVar39 = fVar39 * (float)uVar43;
    fVar42 = fVar42 * (float)((ulong)uVar43 >> 0x20);
    uVar43 = NEON_frsqrts(CONCAT44(fVar42 * fVar42,fVar39 * fVar39),uVar13,4);
    fVar39 = fVar39 * (float)uVar43;
    fVar42 = fVar42 * (float)((ulong)uVar43 >> 0x20);
    uVar43 = NEON_frsqrts(CONCAT44(fVar42 * fVar42,fVar39 * fVar39),uVar13,4);
    uVar29 = CONCAT44(fVar21 * fVar42 * (float)((ulong)uVar43 >> 0x20),
                      fVar19 * fVar39 * (float)uVar43);
    uVar29 = uVar29 ^ (uVar29 ^ uVar13) & CONCAT44(-(uint)(fVar19 == 0.0),-(uint)(fVar19 == 0.0));
    uVar43 = NEON_frecpe(uVar29,4);
    uVar40 = NEON_frecps(uVar29,uVar43,4);
    fVar19 = (float)uVar43 * (float)uVar40;
    fVar21 = (float)((ulong)uVar43 >> 0x20) * (float)((ulong)uVar40 >> 0x20);
    uVar43 = NEON_frecps(uVar29,CONCAT44(fVar21,fVar19),4);
    fVar19 = fVar19 * (float)uVar43;
    fVar21 = fVar21 * (float)((ulong)uVar43 >> 0x20);
    uVar43 = NEON_frecps(uVar29,CONCAT44(fVar21,fVar19),4);
    fVar19 = fVar19 * (float)uVar43;
    fVar21 = fVar21 * (float)((ulong)uVar43 >> 0x20);
    uVar43 = NEON_frecps(uVar29,CONCAT44(fVar21,fVar19),4);
    fVar19 = fVar19 * (float)uVar43;
    uVar43 = NEON_frecps(uVar29,CONCAT44(fVar21 * (float)((ulong)uVar43 >> 0x20),fVar19),4);
    fVar19 = fVar19 * (float)uVar43;
    uStack_2f8 = (ulong)(uint)(fVar20 * fVar19);
    local_300 = CONCAT44(fVar18 * fVar19,fVar17 * fVar19);
                    /* try { // try from 00260438 to 0026044b has its CatchHandler @ 00260474 */
    FUN_00290110(param_9,param_8,&local_300,param_6,param_13);
    return 1;
  }
  FUN_00290460(param_1._0_8_,param_9,param_7);
  lVar14 = *(long *)(param_9 + 0x30);
  pauVar1 = (undefined1 (*) [16])(lVar14 + 0x20);
  auVar24 = *pauVar1;
  auVar22 = SUB1612(*pauVar1,0);
  bVar3 = *(byte *)(param_9 + 0x20);
  if (1 < (ulong)bVar3) {
    uVar2 = ~(uint)bVar3 & 1;
    if (bVar3 == 2) {
      lVar15 = 1;
      auVar23 = SUB1612(*pauVar1,0);
    }
    else {
      lVar15 = 1;
      pfVar16 = (float *)(lVar14 + 0x80);
      do {
        lVar15 = lVar15 + 2;
        auVar22._0_4_ = auVar24._0_4_ + (float)*(undefined8 *)(pfVar16 + -0xc) + *pfVar16;
        auVar22._4_4_ =
             auVar24._4_4_ + (float)((ulong)*(undefined8 *)(pfVar16 + -0xc) >> 0x20) + pfVar16[1];
        auVar22._8_4_ = auVar24._8_4_ + (float)*(undefined8 *)(pfVar16 + -10) + pfVar16[2];
        auVar24._12_4_ =
             auVar24._12_4_ + (float)((ulong)*(undefined8 *)(pfVar16 + -10) >> 0x20) + pfVar16[3];
        auVar24._0_12_ = auVar22;
        pfVar16 = pfVar16 + 0x18;
      } while ((ulong)bVar3 - (ulong)uVar2 != lVar15);
      auVar23 = auVar22;
      if (uVar2 == 0) goto LAB_00260128;
    }
    lVar14 = lVar14 + lVar15 * 0x30;
    uVar43 = *(undefined8 *)(lVar14 + 0x20);
    auVar22._0_4_ = auVar23._0_4_ + (float)uVar43;
    auVar22._4_4_ = auVar23._4_4_ + (float)((ulong)uVar43 >> 0x20);
    auVar22._8_4_ = auVar23._8_4_ + (float)*(undefined8 *)(lVar14 + 0x28);
  }
LAB_00260128:
  auVar30._0_4_ = auVar22._0_4_ * auVar22._0_4_;
  auVar30._4_4_ = auVar22._4_4_ * auVar22._4_4_;
  auVar30._8_4_ = auVar22._8_4_ * auVar22._8_4_;
  auVar30._12_4_ = 0;
  auVar41 = NEON_ext(auVar30,auVar30,8,1);
  auVar31._0_4_ =
       -(uint)(1.1920929e-07 < auVar30._0_4_ + auVar30._4_4_ + auVar41._0_4_ + auVar41._4_4_);
  auVar31._4_4_ = auVar31._0_4_;
  auVar31._8_4_ = auVar31._0_4_;
  auVar31._12_4_ = auVar31._0_4_;
  auVar4._12_4_ = 0;
  auVar4._0_12_ = *(undefined1 (*) [12])*pauVar1 ^ auVar22;
  auVar32._12_4_ = 0;
  auVar32._0_12_ = *(undefined1 (*) [12])*pauVar1;
  auVar32 = auVar32 ^ auVar4 & auVar31;
  fVar21 = (float)((ulong)*(undefined8 *)(*param_6 + 8) >> 0x20);
  auVar41 = *param_6;
  fVar18 = auVar32._4_4_;
  fVar42 = auVar32._8_4_;
  auVar25._0_12_ = auVar41._0_12_;
  auVar25._12_4_ = 0;
  fVar38 = fVar21 * fVar21 + -0.5;
  auVar44 = NEON_ext(auVar25,auVar25,8,1);
  auVar46 = NEON_ext(auVar32,auVar32,8,1);
  fVar20 = auVar41._0_4_;
  fVar39 = auVar41._4_4_;
  fVar19 = auVar32._0_4_;
  fVar45 = fVar20 * fVar18 - (float)((ulong)*(undefined8 *)*param_6 >> 0x20) * fVar19;
  auVar33._0_4_ = fVar20 * fVar19;
  auVar33._4_4_ = fVar39 * fVar18;
  auVar33._8_4_ = auVar41._8_4_ * fVar42;
  auVar33._12_4_ = auVar32._12_4_ * 0.0;
  uVar43 = NEON_ext(CONCAT44(fVar39 * fVar42 - (float)*(undefined8 *)(*param_6 + 8) * fVar18,fVar45)
                    ,CONCAT44(auVar44._4_4_ * fVar18 - fVar39 * auVar46._4_4_,
                              auVar44._0_4_ * fVar19 - fVar20 * auVar46._0_4_),4,1);
  fVar17 = fVar19 * fVar38 + (float)uVar43 * fVar21;
  fVar18 = fVar18 * fVar38 + (float)((ulong)uVar43 >> 0x20) * fVar21;
  fVar19 = fVar42 * fVar38 + fVar45 * fVar21;
  fVar21 = fVar21 * 0.0 + 0.0;
  auVar5._4_4_ = fVar18;
  auVar5._0_4_ = fVar17;
  auVar5._8_4_ = fVar19;
  auVar5._12_4_ = fVar21;
  auVar6._4_4_ = fVar18;
  auVar6._0_4_ = fVar17;
  auVar6._8_4_ = fVar19;
  auVar6._12_4_ = fVar21;
  auVar44 = NEON_ext(auVar5,auVar6,8,1);
  auVar46 = NEON_ext(auVar33,auVar33,8,1);
  fVar19 = auVar33._0_4_ + auVar33._4_4_ + auVar46._0_4_ + auVar46._4_4_;
  fVar17 = fVar20 * fVar19 + fVar17;
  fVar18 = fVar39 * fVar19 + fVar18;
  fVar21 = auVar41._8_4_ * fVar19 + auVar44._0_4_;
  fVar19 = fVar19 * 0.0 + 0.0;
  auVar7._4_4_ = fVar18;
  auVar7._0_4_ = fVar17;
  auVar7._8_4_ = fVar21;
  auVar7._12_4_ = fVar19;
  auVar8._4_4_ = fVar18;
  auVar8._0_4_ = fVar17;
  auVar8._8_4_ = fVar21;
  auVar8._12_4_ = fVar19;
  auVar41 = NEON_ext(auVar7,auVar8,8,1);
  fVar17 = fVar17 + fVar17;
  fVar18 = fVar18 + fVar18;
  fVar20 = auVar41._0_4_ + auVar41._0_4_;
  auVar26._0_4_ = fVar17 * fVar17;
  auVar26._4_4_ = fVar18 * fVar18;
  auVar26._8_4_ = fVar20 * fVar20;
  auVar26._12_4_ = 0;
  auVar41 = NEON_ext(auVar26,auVar26,8,1);
  fVar21 = auVar41._0_4_ + auVar41._4_4_;
  fVar19 = auVar26._0_4_ + auVar26._4_4_ + fVar21;
  fVar21 = auVar26._0_4_ + auVar26._4_4_ + fVar21;
  uVar13 = CONCAT44(fVar21,fVar19);
  uVar43 = NEON_frsqrte(uVar13,4);
  fVar39 = (float)uVar43;
  fVar42 = (float)((ulong)uVar43 >> 0x20);
  uVar43 = NEON_frsqrts(CONCAT44(fVar42 * fVar42,fVar39 * fVar39),uVar13,4);
  fVar39 = fVar39 * (float)uVar43;
  fVar42 = fVar42 * (float)((ulong)uVar43 >> 0x20);
  uVar43 = NEON_frsqrts(CONCAT44(fVar42 * fVar42,fVar39 * fVar39),uVar13,4);
  fVar39 = fVar39 * (float)uVar43;
  fVar42 = fVar42 * (float)((ulong)uVar43 >> 0x20);
  uVar43 = NEON_frsqrts(CONCAT44(fVar42 * fVar42,fVar39 * fVar39),uVar13,4);
  fVar39 = fVar39 * (float)uVar43;
  fVar42 = fVar42 * (float)((ulong)uVar43 >> 0x20);
  uVar43 = NEON_frsqrts(CONCAT44(fVar42 * fVar42,fVar39 * fVar39),uVar13,4);
  uVar29 = CONCAT44(fVar21 * fVar42 * (float)((ulong)uVar43 >> 0x20),fVar19 * fVar39 * (float)uVar43
                   );
  uVar29 = uVar29 ^ (uVar29 ^ uVar13) & CONCAT44(-(uint)(fVar19 == 0.0),-(uint)(fVar19 == 0.0));
  uVar43 = NEON_frecpe(uVar29,4);
  uVar40 = NEON_frecps(uVar29,uVar43,4);
  fVar19 = (float)uVar43 * (float)uVar40;
  fVar21 = (float)((ulong)uVar43 >> 0x20) * (float)((ulong)uVar40 >> 0x20);
  uVar43 = NEON_frecps(uVar29,CONCAT44(fVar21,fVar19),4);
  fVar19 = fVar19 * (float)uVar43;
  fVar21 = fVar21 * (float)((ulong)uVar43 >> 0x20);
  uVar43 = NEON_frecps(uVar29,CONCAT44(fVar21,fVar19),4);
  fVar19 = fVar19 * (float)uVar43;
  fVar21 = fVar21 * (float)((ulong)uVar43 >> 0x20);
  uVar43 = NEON_frecps(uVar29,CONCAT44(fVar21,fVar19),4);
  fVar19 = fVar19 * (float)uVar43;
  uVar43 = NEON_frecps(uVar29,CONCAT44(fVar21 * (float)((ulong)uVar43 >> 0x20),fVar19),4);
  fVar19 = fVar19 * (float)uVar43;
  uStack_2f8 = (ulong)(uint)(fVar20 * fVar19);
  local_300 = CONCAT44(fVar18 * fVar19,fVar17 * fVar19);
                    /* try { // try from 00260284 to 00260297 has its CatchHandler @ 00260478 */
  FUN_00290110(param_9,param_8,&local_300,param_6,param_13);
  return 1;
}


