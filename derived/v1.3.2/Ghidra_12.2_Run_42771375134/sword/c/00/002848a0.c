/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002848a0; name: FUN_002848a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_002848a0(long param_1,long param_2,long *param_3,undefined8 *param_4,ulong *param_5,
            undefined8 *param_6)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
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
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  float *pfVar21;
  float *pfVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  byte *pbVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  ulong uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  int iVar47;
  float fVar55;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  int iVar56;
  ulong uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined1 auVar60 [16];
  undefined8 uVar61;
  float fVar63;
  undefined8 uVar62;
  undefined8 local_90;
  ulong uStack_88;
  undefined1 local_80 [8];
  undefined1 auStack_78 [8];
  
  if (*(uint *)(param_2 + 0x10) == 0) {
    auVar48._8_8_ = _UNK_01d4b588;
    auVar48._0_8_ = _DAT_01d4b580;
    uVar31 = 0x7f7fffff7f7fffff;
  }
  else {
    pfVar21 = (float *)param_3[6];
    uVar31 = 0x7f7fffff7f7fffff;
    uVar18 = 0;
    auVar37 = *(undefined1 (*) [16])(pfVar21 + 8);
    pfVar22 = (float *)(*(long *)(param_2 + 0x18) + 0xc);
    uVar29 = _DAT_01d4b580;
    uVar35 = _UNK_01d4b588;
    do {
      fVar40 = pfVar22[-3];
      fVar41 = pfVar22[-2];
      fVar42 = pfVar22[-1];
      fVar44 = *pfVar21 * fVar40;
      fVar45 = pfVar21[1] * fVar41;
      auVar13._4_4_ = fVar45;
      auVar13._0_4_ = fVar44;
      auVar13._8_4_ = pfVar21[2] * fVar42;
      auVar13._12_4_ = pfVar21[3] * 0.0;
      auVar14._4_4_ = fVar45;
      auVar14._0_4_ = fVar44;
      auVar14._8_4_ = pfVar21[2] * fVar42;
      auVar14._12_4_ = pfVar21[3] * 0.0;
      auVar48 = NEON_ext(auVar13,auVar14,8,1);
      fVar27 = auVar48._0_4_ + auVar48._4_4_;
      auVar49._0_4_ = (float)*(undefined8 *)(pfVar21 + 4) * fVar40;
      auVar49._4_4_ = (float)((ulong)*(undefined8 *)(pfVar21 + 4) >> 0x20) * fVar41;
      auVar49._8_4_ = (float)*(undefined8 *)(pfVar21 + 6) * fVar42;
      auVar49._12_4_ = (float)((ulong)*(undefined8 *)(pfVar21 + 6) >> 0x20) * 0.0;
      auVar48 = NEON_ext(auVar49,auVar49,8,1);
      fVar28 = auVar48._0_4_ + auVar48._4_4_;
      auVar60._0_4_ = auVar37._0_4_ * fVar40;
      auVar60._4_4_ = auVar37._4_4_ * fVar41;
      auVar60._8_4_ = auVar37._8_4_ * fVar42;
      auVar60._12_4_ = auVar37._12_4_ * 0.0;
      auVar48 = NEON_ext(auVar60,auVar60,8,1);
      uVar61 = NEON_ext(CONCAT44(fVar44 + fVar45 + fVar27,fVar44 + fVar45 + fVar27),
                        CONCAT44(auVar49._0_4_ + auVar49._4_4_ + fVar28,
                                 auVar49._0_4_ + auVar49._4_4_ + fVar28),4,1);
      fVar45 = (float)uVar61;
      fVar46 = (float)((ulong)uVar61 >> 0x20);
      fVar27 = auVar60._0_4_ + auVar60._4_4_ + auVar48._0_4_ + auVar48._4_4_;
      auVar50._0_4_ = fVar45 * fVar45;
      auVar50._4_4_ = fVar46 * fVar46;
      auVar50._8_4_ = fVar27 * fVar27;
      auVar50._12_4_ = 0;
      auVar48 = NEON_ext(auVar50,auVar50,8,1);
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x20) + (ulong)*(byte *)((long)pfVar22 + 7) * 0xc)
      ;
      uVar61 = *puVar2;
      fVar44 = auVar48._0_4_ + auVar48._4_4_;
      fVar28 = auVar50._0_4_ + auVar50._4_4_ + fVar44;
      fVar44 = auVar50._0_4_ + auVar50._4_4_ + fVar44;
      uVar17 = CONCAT44(fVar44,fVar28);
      fVar40 = (float)uVar61 * fVar40;
      fVar41 = (float)((ulong)uVar61 >> 0x20) * fVar41;
      fVar42 = (float)puVar2[1] * fVar42;
      auVar51._4_4_ = fVar41;
      auVar51._0_4_ = fVar40;
      auVar51._8_4_ = fVar42;
      auVar51._12_4_ = 0;
      auVar36._4_4_ = fVar41;
      auVar36._0_4_ = fVar40;
      auVar36._8_4_ = fVar42;
      auVar36._12_4_ = 0;
      auVar48 = NEON_ext(auVar51,auVar36,8,1);
      uVar61 = NEON_frsqrte(uVar17,4);
      fVar42 = (float)uVar61;
      fVar63 = (float)((ulong)uVar61 >> 0x20);
      uVar61 = NEON_frsqrts(CONCAT44(fVar63 * fVar63,fVar42 * fVar42),uVar17,4);
      fVar42 = fVar42 * (float)uVar61;
      fVar63 = fVar63 * (float)((ulong)uVar61 >> 0x20);
      uVar61 = NEON_frsqrts(CONCAT44(fVar63 * fVar63,fVar42 * fVar42),uVar17,4);
      fVar42 = fVar42 * (float)uVar61;
      fVar63 = fVar63 * (float)((ulong)uVar61 >> 0x20);
      uVar61 = NEON_frsqrts(CONCAT44(fVar63 * fVar63,fVar42 * fVar42),uVar17,4);
      fVar42 = fVar42 * (float)uVar61;
      fVar63 = fVar63 * (float)((ulong)uVar61 >> 0x20);
      uVar61 = NEON_frsqrts(CONCAT44(fVar63 * fVar63,fVar42 * fVar42),uVar17,4);
      uVar57 = CONCAT44(fVar44 * fVar63 * (float)((ulong)uVar61 >> 0x20),
                        fVar28 * fVar42 * (float)uVar61);
      uVar57 = uVar57 ^ (uVar57 ^ uVar17) & CONCAT44(-(uint)(fVar28 == 0.0),-(uint)(fVar28 == 0.0));
      uVar61 = NEON_frecpe(uVar57,4);
      uVar62 = NEON_frecps(uVar57,uVar61,4);
      fVar63 = (float)uVar61 * (float)uVar62;
      fVar55 = (float)((ulong)uVar61 >> 0x20) * (float)((ulong)uVar62 >> 0x20);
      uVar61 = NEON_frecps(uVar57,CONCAT44(fVar55,fVar63),4);
      fVar63 = fVar63 * (float)uVar61;
      fVar55 = fVar55 * (float)((ulong)uVar61 >> 0x20);
      uVar61 = NEON_frecps(uVar57,CONCAT44(fVar55,fVar63),4);
      fVar63 = fVar63 * (float)uVar61;
      fVar55 = fVar55 * (float)((ulong)uVar61 >> 0x20);
      uVar61 = NEON_frecps(uVar57,CONCAT44(fVar55,fVar63),4);
      fVar63 = fVar63 * (float)uVar61;
      fVar55 = fVar55 * (float)((ulong)uVar61 >> 0x20);
      uVar58 = NEON_frecps(uVar57,CONCAT44(fVar55,fVar63),4);
      fVar63 = fVar63 * (float)uVar58;
      fVar45 = fVar45 * fVar63;
      fVar46 = fVar46 * fVar63;
      fVar27 = fVar27 * fVar63;
      auVar43._0_4_ = *(float *)(param_1 + 0x30) * fVar45;
      auVar43._4_4_ = *(float *)(param_1 + 0x34) * fVar46;
      auVar43._8_4_ = *(float *)(param_1 + 0x38) * fVar27;
      auVar43._12_4_ = *(float *)(param_1 + 0x3c) * 0.0;
      fVar28 = fVar63 * *pfVar22;
      auVar51 = NEON_ext(auVar43,auVar43,8,1);
      fVar42 = auVar51._0_4_ + auVar51._4_4_;
      uVar61 = CONCAT44(auVar43._0_4_ + auVar43._4_4_ + fVar42,
                        auVar43._0_4_ + auVar43._4_4_ + fVar42);
      auVar52._0_4_ = *(float *)(param_1 + 0x40) * fVar45;
      auVar52._4_4_ = *(float *)(param_1 + 0x44) * fVar46;
      auVar52._8_4_ = *(float *)(param_1 + 0x48) * fVar27;
      auVar52._12_4_ = *(float *)(param_1 + 0x4c) * 0.0;
      auVar51 = NEON_ext(auVar52,auVar52,8,1);
      fVar42 = auVar51._0_4_ + auVar51._4_4_;
      uVar62 = CONCAT44(auVar52._0_4_ + auVar52._4_4_ + fVar42,
                        auVar52._0_4_ + auVar52._4_4_ + fVar42);
      uVar59 = NEON_fmin(uVar61,uVar62,4);
      uVar61 = NEON_fmax(uVar61,uVar62,4);
      fVar42 = (float)*(undefined8 *)(param_1 + 0x50);
      fVar44 = (float)uVar59 - fVar42;
      iVar56 = -(uint)((float)*param_4 - fVar28 < fVar44);
      iVar47 = -(uint)((float)*param_4 + fVar42 + (float)uVar61 <
                      fVar63 * (fVar40 + fVar41 + auVar48._0_4_ + auVar48._4_4_));
      iVar47 = CONCAT13((byte)((uint)iVar47 >> 0x18) | (byte)((uint)iVar56 >> 0x18),
                        CONCAT12((byte)((uint)iVar47 >> 0x10) | (byte)((uint)iVar56 >> 0x10),
                                 CONCAT11((byte)((uint)iVar47 >> 8) | (byte)((uint)iVar56 >> 8),
                                          (byte)iVar47 | (byte)iVar56)));
      auVar53._0_4_ = -(uint)(iVar47 == -1);
      auVar53._4_4_ = -(uint)(iVar47 == -1);
      auVar53._8_4_ = -(uint)(iVar47 == -1);
      auVar53._12_4_ = -(uint)(iVar47 == -1);
      NEON_ext(auVar53,auVar53,8,1);
      if (CONCAT13((char)auVar53._12_4_,
                   CONCAT12((char)auVar53._8_4_,CONCAT11((char)auVar53._4_4_,(char)auVar53._0_4_)))
          == -1) {
        return 0;
      }
      fVar44 = -fVar28 - fVar44;
      iVar47 = -(uint)(fVar44 < (float)uVar31);
      auVar54._4_4_ = iVar47;
      auVar54._0_4_ = iVar47;
      auVar54._8_4_ = iVar47;
      auVar54._12_4_ = iVar47;
      uVar18 = uVar18 + 1;
      uVar31 = uVar31 ^ (uVar31 ^ CONCAT44(-(fVar55 * (float)((ulong)uVar58 >> 0x20) * *pfVar22) -
                                           ((float)((ulong)uVar59 >> 0x20) -
                                           (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20)),
                                           fVar44)) & CONCAT44(iVar47,iVar47);
      auVar11._8_8_ = uVar35;
      auVar11._0_8_ = uVar29;
      auVar15._4_4_ = fVar46;
      auVar15._0_4_ = fVar45;
      auVar15._8_4_ = fVar27;
      auVar15._12_4_ = 0;
      auVar12._8_8_ = uVar35;
      auVar12._0_8_ = uVar29;
      auVar48 = auVar12 ^ (auVar11 ^ auVar15) & auVar54;
      uVar35 = auVar48._8_8_;
      uVar29 = auVar48._0_8_;
      pfVar22 = pfVar22 + 5;
    } while (uVar18 < *(uint *)(param_2 + 0x10));
    if (*(int *)(param_2 + 0x10) != 0) {
      auVar37 = *(undefined1 (*) [16])(param_1 + 0x30);
      fVar40 = (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) - auVar37._4_4_;
      auVar39._0_8_ = CONCAT44(fVar40,(float)*(undefined8 *)(param_1 + 0x40) - auVar37._0_4_);
      auVar39._8_4_ = (float)*(undefined8 *)(param_1 + 0x48) - auVar37._8_4_;
      auVar39._12_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20) - auVar37._12_4_;
      auVar51 = NEON_ext(auVar39,auVar39,8,1);
      uVar18 = 0;
      auVar37 = auVar39;
      do {
        lVar25 = *(long *)(param_2 + 0x18) + uVar18 * 0x14;
        pbVar26 = (byte *)(lVar25 + 0x12);
        uVar17 = (ulong)*pbVar26;
        if (uVar17 != 0) {
          lVar25 = *(long *)(param_2 + 0x28) + (ulong)*(ushort *)(lVar25 + 0x10);
          uVar57 = 0;
          uVar23 = uVar17 + 0xffffffff;
          uVar24 = uVar31;
          do {
            uVar19 = uVar57;
            puVar2 = (undefined8 *)
                     (*(long *)(param_2 + 0x20) +
                     (ulong)*(byte *)(lVar25 + (uVar23 & 0xffffffff)) * 0xc);
            uVar29 = *puVar2;
            pfVar22 = (float *)(*(long *)(param_2 + 0x20) + (ulong)*(byte *)(lVar25 + uVar19) * 0xc)
            ;
            puVar20 = (undefined8 *)param_3[6];
            fVar41 = (float)uVar29 - *pfVar22;
            fVar28 = (float)((ulong)uVar29 >> 0x20) - pfVar22[1];
            fVar44 = (float)puVar2[1] - pfVar22[2];
            auVar32._0_4_ = fVar41 * *(float *)(puVar20 + 2);
            auVar32._4_4_ = fVar28 * *(float *)((long)puVar20 + 0x14);
            auVar32._8_4_ = fVar44 * *(float *)(puVar20 + 3);
            auVar32._12_4_ = *(float *)((long)puVar20 + 0x1c) * 0.0;
            fVar45 = (float)*puVar20 * fVar41;
            fVar46 = (float)((ulong)*puVar20 >> 0x20) * fVar28;
            fVar42 = (float)puVar20[1] * fVar44;
            fVar27 = (float)((ulong)puVar20[1] >> 0x20) * 0.0;
            auVar3._4_4_ = fVar46;
            auVar3._0_4_ = fVar45;
            auVar3._8_4_ = fVar42;
            auVar3._12_4_ = fVar27;
            auVar4._4_4_ = fVar46;
            auVar4._0_4_ = fVar45;
            auVar4._8_4_ = fVar42;
            auVar4._12_4_ = fVar27;
            auVar36 = NEON_ext(auVar3,auVar4,8,1);
            fVar42 = auVar36._0_4_ + auVar36._4_4_;
            auVar36 = NEON_ext(auVar32,auVar32,8,1);
            fVar27 = auVar36._0_4_ + auVar36._4_4_;
            auVar30._0_4_ = fVar41 * *(float *)(puVar20 + 4);
            auVar30._4_4_ = fVar28 * *(float *)((long)puVar20 + 0x24);
            auVar30._8_4_ = fVar44 * *(float *)(puVar20 + 5);
            auVar30._12_4_ = *(float *)((long)puVar20 + 0x2c) * 0.0;
            auVar36 = NEON_ext(auVar30,auVar30,8,1);
            fVar41 = auVar30._0_4_ + auVar30._4_4_ + auVar36._0_4_ + auVar36._4_4_;
            uVar29 = NEON_ext(CONCAT44(fVar45 + fVar46 + fVar42,fVar45 + fVar46 + fVar42),
                              CONCAT44(auVar32._0_4_ + auVar32._4_4_ + fVar27,
                                       auVar32._0_4_ + auVar32._4_4_ + fVar27),4,1);
            fVar42 = (float)((ulong)uVar29 >> 0x20);
            auVar5._8_4_ = fVar41;
            auVar5._0_8_ = uVar29;
            auVar5._12_4_ = 0;
            auVar6._8_4_ = fVar41;
            auVar6._0_8_ = uVar29;
            auVar6._12_4_ = 0;
            auVar36 = NEON_ext(auVar5,auVar6,8,1);
            fVar44 = auVar37._0_4_ * fVar42 - fVar40 * (float)uVar29;
            uVar29 = NEON_ext(CONCAT44(auVar37._4_4_ * fVar41 - auVar39._8_4_ * fVar42,fVar44),
                              CONCAT44(auVar51._4_4_ * fVar42 - auVar37._4_4_ * auVar36._4_4_,
                                       auVar51._0_4_ * (float)uVar29 - auVar37._0_4_ * auVar36._0_4_
                                      ),4,1);
            fVar27 = (float)uVar29;
            fVar45 = fVar27 * fVar27;
            fVar28 = (float)((ulong)uVar29 >> 0x20);
            fVar46 = fVar28 * fVar28;
            auVar7._4_4_ = fVar46;
            auVar7._0_4_ = fVar45;
            auVar7._8_4_ = fVar44 * fVar44;
            auVar7._12_4_ = 0;
            auVar8._4_4_ = fVar46;
            auVar8._0_4_ = fVar45;
            auVar8._8_4_ = fVar44 * fVar44;
            auVar8._12_4_ = 0;
            auVar36 = NEON_ext(auVar7,auVar8,8,1);
            fVar42 = auVar36._0_4_ + auVar36._4_4_;
            fVar41 = fVar45 + fVar46 + fVar42;
            fVar42 = fVar45 + fVar46 + fVar42;
            uVar31 = uVar24;
            if (1.1920929e-07 <= fVar41) {
              uVar29 = NEON_frsqrte(CONCAT44(fVar42,fVar41),4);
              fVar45 = (float)uVar29;
              fVar46 = (float)((ulong)uVar29 >> 0x20);
              uVar29 = NEON_frsqrts(CONCAT44(fVar46 * fVar46,fVar45 * fVar45),
                                    CONCAT44(fVar42,fVar41),4);
              fVar45 = fVar45 * (float)uVar29;
              fVar46 = fVar46 * (float)((ulong)uVar29 >> 0x20);
              uVar29 = NEON_frsqrts(CONCAT44(fVar46 * fVar46,fVar45 * fVar45),
                                    CONCAT44(fVar42,fVar41),4);
              fVar45 = fVar45 * (float)uVar29;
              fVar46 = fVar46 * (float)((ulong)uVar29 >> 0x20);
              uVar29 = NEON_frsqrts(CONCAT44(fVar46 * fVar46,fVar45 * fVar45),
                                    CONCAT44(fVar42,fVar41),4);
              fVar45 = fVar45 * (float)uVar29;
              fVar46 = fVar46 * (float)((ulong)uVar29 >> 0x20);
              uVar29 = NEON_frsqrts(CONCAT44(fVar46 * fVar46,fVar45 * fVar45),
                                    CONCAT44(fVar42,fVar41),4);
              uVar31 = CONCAT44(fVar42 * fVar46 * (float)((ulong)uVar29 >> 0x20),
                                fVar41 * fVar45 * (float)uVar29);
              uVar31 = uVar31 ^ (uVar31 ^ CONCAT44(fVar42,fVar41)) &
                                CONCAT44(-(uint)(fVar41 == 0.0),-(uint)(fVar41 == 0.0));
              uVar29 = NEON_frecpe(uVar31,4);
              uVar35 = NEON_frecps(uVar31,uVar29,4);
              fVar41 = (float)uVar29 * (float)uVar35;
              fVar42 = (float)((ulong)uVar29 >> 0x20) * (float)((ulong)uVar35 >> 0x20);
              uVar29 = NEON_frecps(uVar31,CONCAT44(fVar42,fVar41),4);
              fVar41 = fVar41 * (float)uVar29;
              fVar42 = fVar42 * (float)((ulong)uVar29 >> 0x20);
              uVar29 = NEON_frecps(uVar31,CONCAT44(fVar42,fVar41),4);
              fVar41 = fVar41 * (float)uVar29;
              fVar42 = fVar42 * (float)((ulong)uVar29 >> 0x20);
              uVar29 = NEON_frecps(uVar31,CONCAT44(fVar42,fVar41),4);
              fVar41 = fVar41 * (float)uVar29;
              uVar29 = NEON_frecps(uVar31,CONCAT44(fVar42 * (float)((ulong)uVar29 >> 0x20),fVar41),4
                                  );
              fVar41 = fVar41 * (float)uVar29;
              local_90 = CONCAT44(fVar28 * fVar41,fVar27 * fVar41);
              uStack_88 = (ulong)(uint)(fVar44 * fVar41);
              (**(code **)(*param_3 + 0x18))(param_3,&local_90,auStack_78,local_80);
              auVar16._8_8_ = uStack_88;
              auVar16._0_8_ = local_90;
              fVar28 = (float)*(undefined8 *)(param_1 + 0x30) * (float)local_90;
              fVar41 = (float)((ulong)local_90 >> 0x20);
              fVar44 = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20) * fVar41;
              fVar27 = (float)*(undefined8 *)(param_1 + 0x38) * (float)uStack_88;
              fVar42 = (float)(uStack_88 >> 0x20);
              fVar45 = (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20) * fVar42;
              auVar9._4_4_ = fVar44;
              auVar9._0_4_ = fVar28;
              auVar9._8_4_ = fVar27;
              auVar9._12_4_ = fVar45;
              auVar10._4_4_ = fVar44;
              auVar10._0_4_ = fVar28;
              auVar10._8_4_ = fVar27;
              auVar10._12_4_ = fVar45;
              auVar37 = NEON_ext(auVar9,auVar10,8,1);
              auVar33._0_4_ = (float)local_90 * *(float *)(param_1 + 0x40);
              auVar33._4_4_ = fVar41 * *(float *)(param_1 + 0x44);
              auVar33._8_4_ = (float)uStack_88 * *(float *)(param_1 + 0x48);
              auVar33._12_4_ = fVar42 * *(float *)(param_1 + 0x4c);
              fVar27 = auVar37._0_4_ + auVar37._4_4_;
              auVar37 = NEON_ext(auVar33,auVar33,8,1);
              fVar42 = auVar37._0_4_ + auVar37._4_4_;
              fVar41 = fVar28 + fVar44 + fVar27;
              fVar27 = fVar28 + fVar44 + fVar27;
              uVar29 = CONCAT44(auVar33._0_4_ + auVar33._4_4_ + fVar42,
                                auVar33._0_4_ + auVar33._4_4_ + fVar42);
              uVar35 = NEON_fmin(CONCAT44(fVar27,fVar41),uVar29,4);
              uVar29 = NEON_fmax(CONCAT44(fVar27,fVar41),uVar29,4);
              fVar42 = (float)*(undefined8 *)(param_1 + 0x50);
              fVar41 = (float)uVar35 - fVar42;
              iVar56 = -(uint)(local_80._0_4_ + (float)*param_4 < fVar41);
              iVar47 = -(uint)((float)uVar29 + fVar42 + (float)*param_4 < auStack_78._0_4_);
              iVar47 = CONCAT13((byte)((uint)iVar47 >> 0x18) | (byte)((uint)iVar56 >> 0x18),
                                CONCAT12((byte)((uint)iVar47 >> 0x10) | (byte)((uint)iVar56 >> 0x10)
                                         ,CONCAT11((byte)((uint)iVar47 >> 8) |
                                                   (byte)((uint)iVar56 >> 8),
                                                   (byte)iVar47 | (byte)iVar56)));
              auVar38._0_4_ = -(uint)(iVar47 == -1);
              auVar38._4_4_ = -(uint)(iVar47 == -1);
              auVar38._8_4_ = -(uint)(iVar47 == -1);
              auVar38._12_4_ = -(uint)(iVar47 == -1);
              NEON_ext(auVar38,auVar38,8,1);
              if (CONCAT13((char)auVar38._12_4_,
                           CONCAT12((char)auVar38._8_4_,
                                    CONCAT11((char)auVar38._4_4_,(char)auVar38._0_4_))) == -1) {
                return 0;
              }
              fVar41 = local_80._0_4_ - fVar41;
              bVar1 = fVar41 < (float)uVar24;
              iVar47 = -(uint)bVar1;
              auVar34._4_4_ = iVar47;
              auVar34._0_4_ = iVar47;
              auVar34._8_4_ = iVar47;
              auVar34._12_4_ = iVar47;
              auVar37._8_8_ = auVar39._8_8_;
              auVar37._0_8_ = auVar39._0_8_;
              uVar31 = CONCAT44(local_80._4_4_ -
                                ((float)((ulong)uVar35 >> 0x20) -
                                (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20)),fVar41);
              if (!bVar1) {
                uVar31 = uVar24;
              }
              uVar17 = (ulong)*pbVar26;
              auVar48 = auVar48 ^ (auVar48 ^ auVar16) & auVar34;
            }
            uVar57 = uVar19 + 1;
            uVar23 = uVar19;
            uVar24 = uVar31;
          } while (uVar19 + 1 < uVar17);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < *(uint *)(param_2 + 0x10));
    }
  }
  param_6[1] = auVar48._8_8_;
  *param_6 = auVar48._0_8_;
  *param_5 = uVar31;
  return 1;
}


