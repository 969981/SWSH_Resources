/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00284dc0; name: FUN_00284dc0
 */


undefined8
FUN_00284dc0(float param_1,float param_2,undefined8 param_3,long param_4,long param_5,
            undefined8 param_6,undefined8 param_7,int *param_8,undefined8 *param_9,
            undefined8 *param_10,float *param_11,byte param_12)

{
  float *pfVar1;
  float *pfVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  float *pfVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  float *pfVar18;
  undefined8 *puVar19;
  float *pfVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar46;
  undefined8 uVar44;
  float fVar47;
  undefined1 auVar45 [16];
  float fVar50;
  undefined8 uVar48;
  float fVar51;
  undefined1 auVar49 [16];
  undefined1 auVar52 [16];
  undefined8 uVar53;
  float fVar56;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar57 [16];
  float fVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  ulong uVar64;
  undefined1 auVar65 [16];
  float fVar67;
  undefined1 auVar66 [16];
  float fVar68;
  float fVar69;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  float local_470 [256];
  
  uStack_488 = param_10[1];
  local_490 = *param_10;
  iVar25 = *param_8;
  local_480 = local_490;
  uStack_478 = uStack_488;
  if ((param_12 & 1) == 0) {
    FUN_002854f0((int)*param_9,param_3,param_4,param_5,param_6,param_7,param_8,&local_480);
    if ((uint)(*param_8 - iVar25) < 2) {
      puVar19 = *(undefined8 **)(param_5 + 0x30);
      fVar32 = *param_11;
      fVar34 = param_11[1];
      fVar36 = param_11[2];
      pfVar18 = *(float **)(param_4 + 0x18);
      fVar27 = param_2 * DAT_01d4c4d4;
      if (param_2 * DAT_01d4c4d4 <= param_1) {
        fVar27 = param_1;
      }
      fVar51 = (float)puVar19[1];
      fVar30 = (float)((ulong)puVar19[1] >> 0x20);
      fVar29 = (float)*puVar19;
      fVar50 = (float)((ulong)*puVar19 >> 0x20);
      fVar37 = (float)puVar19[3];
      fVar38 = (float)((ulong)puVar19[3] >> 0x20);
      fVar33 = (float)puVar19[2];
      fVar35 = (float)((ulong)puVar19[2] >> 0x20);
      auVar49 = *(undefined1 (*) [16])(puVar19 + 4);
      fVar43 = auVar49._0_4_;
      fVar46 = auVar49._4_4_;
      fVar47 = auVar49._8_4_;
      fVar28 = param_2 * DAT_01d4c158;
      if (fVar27 <= param_2 * DAT_01d4c158) {
        fVar28 = fVar27;
      }
      fVar27 = fVar29 * fVar32 + fVar33 * fVar34 + fVar43 * fVar36;
      fVar56 = fVar50 * fVar32 + fVar35 * fVar34 + fVar46 * fVar36;
      fVar36 = fVar51 * fVar32 + fVar37 * fVar34 + fVar47 * fVar36;
      fVar34 = pfVar18[3] + pfVar18[2] * fVar36 + *pfVar18 * fVar27 + pfVar18[1] * fVar56;
      fVar32 = fVar34;
      if (fVar34 < -fVar28) {
        fVar32 = DAT_01d4c18c;
      }
      local_470[0] = fVar32;
      uVar17 = *(uint *)(param_4 + 0x10);
      if (uVar17 < 2) {
        uVar23 = 0;
        uVar16 = 0;
      }
      else {
        pfVar20 = pfVar18 + 8;
        uVar15 = 1;
        uVar24 = 0;
        uVar22 = 0;
        do {
          pfVar1 = pfVar20 + -3;
          pfVar6 = pfVar20 + -2;
          pfVar2 = pfVar20 + -1;
          fVar69 = *pfVar20;
          pfVar20 = pfVar20 + 5;
          fVar69 = fVar69 + fVar27 * *pfVar1 + fVar56 * *pfVar6 + fVar36 * *pfVar2;
          fVar58 = fVar69;
          if (fVar69 < -fVar28) {
            fVar58 = DAT_01d4c18c;
          }
          uVar16 = (uint)uVar15;
          fVar67 = fVar58;
          if (fVar32 <= fVar58) {
            uVar16 = uVar24;
            fVar67 = fVar32;
          }
          fVar32 = fVar67;
          fVar67 = fVar69;
          if (fVar69 <= fVar34) {
            fVar67 = fVar34;
          }
          local_470[uVar15] = fVar58;
          uVar23 = (uint)uVar15;
          if (fVar69 <= fVar34) {
            uVar23 = uVar22;
          }
          uVar15 = uVar15 + 1;
          uVar24 = uVar16;
          uVar22 = uVar23;
          fVar34 = fVar67;
        } while (uVar17 != uVar15);
      }
      if (fVar32 != DAT_01d4c18c) {
        if (uVar17 == 0) {
          uVar23 = uVar16;
        }
        else {
          local_490._4_4_ = (float)((ulong)local_490 >> 0x20);
          pfVar20 = pfVar18 + (ulong)uVar16 * 5;
          fVar34 = *pfVar20;
          fVar36 = pfVar20[1];
          fVar27 = pfVar20[2];
          uVar15 = 0;
          fVar58 = fVar29 * fVar34;
          fVar69 = fVar50 * fVar36;
          fVar56 = fVar30 * 0.0;
          auVar42._4_4_ = fVar69;
          auVar42._0_4_ = fVar58;
          auVar42._8_4_ = fVar51 * fVar27;
          auVar42._12_4_ = fVar56;
          auVar12._4_4_ = fVar69;
          auVar12._0_4_ = fVar58;
          auVar12._8_4_ = fVar51 * fVar27;
          auVar12._12_4_ = fVar56;
          auVar42 = NEON_ext(auVar42,auVar12,8,1);
          fVar56 = auVar42._0_4_ + auVar42._4_4_;
          auVar59._0_4_ = fVar33 * fVar34;
          auVar59._4_4_ = fVar35 * fVar36;
          auVar59._8_4_ = fVar37 * fVar27;
          auVar59._12_4_ = fVar38 * 0.0;
          auVar57._0_4_ = fVar43 * fVar34;
          auVar57._4_4_ = fVar46 * fVar36;
          auVar57._8_4_ = fVar47 * fVar27;
          auVar57._12_4_ = auVar49._12_4_ * 0.0;
          auVar42 = NEON_ext(auVar59,auVar59,8,1);
          fVar36 = auVar42._0_4_ + auVar42._4_4_;
          auVar42 = NEON_ext(auVar57,auVar57,8,1);
          fVar34 = auVar57._0_4_ + auVar57._4_4_ + auVar42._0_4_ + auVar42._4_4_;
          uVar48 = NEON_ext(CONCAT44(fVar58 + fVar69 + fVar56,fVar58 + fVar69 + fVar56),
                            CONCAT44(auVar59._0_4_ + auVar59._4_4_ + fVar36,
                                     auVar59._0_4_ + auVar59._4_4_ + fVar36),4,1);
          fVar56 = (float)uVar48;
          fVar58 = (float)((ulong)uVar48 >> 0x20);
          auVar60._0_4_ = fVar56 * fVar56;
          auVar60._4_4_ = fVar58 * fVar58;
          auVar60._8_4_ = fVar34 * fVar34;
          auVar60._12_4_ = 0;
          auVar42 = NEON_ext(auVar60,auVar60,8,1);
          fVar27 = auVar42._0_4_ + auVar42._4_4_;
          fVar36 = auVar60._0_4_ + auVar60._4_4_ + fVar27;
          fVar27 = auVar60._0_4_ + auVar60._4_4_ + fVar27;
          uVar26 = CONCAT44(fVar27,fVar36);
          uVar48 = NEON_frsqrte(uVar26,4);
          fVar69 = (float)uVar48;
          fVar67 = (float)((ulong)uVar48 >> 0x20);
          uVar48 = NEON_frsqrts(CONCAT44(fVar67 * fVar67,fVar69 * fVar69),uVar26,4);
          fVar69 = fVar69 * (float)uVar48;
          fVar67 = fVar67 * (float)((ulong)uVar48 >> 0x20);
          uVar48 = NEON_frsqrts(CONCAT44(fVar67 * fVar67,fVar69 * fVar69),uVar26,4);
          fVar69 = fVar69 * (float)uVar48;
          fVar67 = fVar67 * (float)((ulong)uVar48 >> 0x20);
          uVar48 = NEON_frsqrts(CONCAT44(fVar67 * fVar67,fVar69 * fVar69),uVar26,4);
          fVar69 = fVar69 * (float)uVar48;
          fVar67 = fVar67 * (float)((ulong)uVar48 >> 0x20);
          uVar48 = NEON_frsqrts(CONCAT44(fVar67 * fVar67,fVar69 * fVar69),uVar26,4);
          uVar64 = CONCAT44(fVar27 * fVar67 * (float)((ulong)uVar48 >> 0x20),
                            fVar36 * fVar69 * (float)uVar48);
          uVar64 = uVar64 ^ (uVar64 ^ uVar26) &
                            CONCAT44(-(uint)(fVar36 == 0.0),-(uint)(fVar36 == 0.0));
          uVar48 = NEON_frecpe(uVar64,4);
          uVar44 = NEON_frecps(uVar64,uVar48,4);
          fVar69 = (float)uVar48 * (float)uVar44;
          fVar36 = (float)((ulong)uVar48 >> 0x20) * (float)((ulong)uVar44 >> 0x20);
          uVar48 = NEON_frecps(uVar64,CONCAT44(fVar36,fVar69),4);
          fVar69 = fVar69 * (float)uVar48;
          fVar36 = fVar36 * (float)((ulong)uVar48 >> 0x20);
          uVar48 = NEON_frecps(uVar64,CONCAT44(fVar36,fVar69),4);
          fVar69 = fVar69 * (float)uVar48;
          fVar36 = fVar36 * (float)((ulong)uVar48 >> 0x20);
          uVar48 = NEON_frecps(uVar64,CONCAT44(fVar36,fVar69),4);
          fVar69 = fVar69 * (float)uVar48;
          uVar48 = NEON_frecps(uVar64,CONCAT44(fVar36 * (float)((ulong)uVar48 >> 0x20),fVar69),4);
          fVar69 = fVar69 * (float)uVar48;
          fVar36 = -(float)local_490 * fVar56 * fVar69;
          fVar27 = -local_490._4_4_ * fVar58 * fVar69;
          fVar34 = -(float)uStack_488 * fVar34 * fVar69;
          auVar13._4_4_ = fVar27;
          auVar13._0_4_ = fVar36;
          auVar13._8_4_ = fVar34;
          auVar13._12_4_ = 0;
          auVar14._4_4_ = fVar27;
          auVar14._0_4_ = fVar36;
          auVar14._8_4_ = fVar34;
          auVar14._12_4_ = 0;
          auVar42 = NEON_ext(auVar13,auVar14,8,1);
          fVar34 = fVar36 + fVar27 + auVar42._0_4_ + auVar42._4_4_;
          pfVar20 = pfVar18;
          uVar24 = uVar16;
          do {
            uVar23 = uVar24;
            if ((uVar16 != uVar15) && (local_470[uVar15] - fVar32 < fVar28)) {
              fVar36 = *pfVar20;
              fVar27 = pfVar20[1];
              fVar56 = pfVar20[2];
              auVar65._0_4_ = fVar29 * fVar36;
              auVar65._4_4_ = fVar50 * fVar27;
              auVar65._8_4_ = fVar51 * fVar56;
              auVar65._12_4_ = fVar30 * 0.0;
              auVar42 = NEON_ext(auVar65,auVar65,8,1);
              fVar58 = auVar42._0_4_ + auVar42._4_4_;
              auVar66._0_4_ = fVar33 * fVar36;
              auVar66._4_4_ = fVar35 * fVar27;
              auVar66._8_4_ = fVar37 * fVar56;
              auVar66._12_4_ = fVar38 * 0.0;
              auVar61._0_4_ = fVar43 * fVar36;
              auVar61._4_4_ = fVar46 * fVar27;
              auVar61._8_4_ = fVar47 * fVar56;
              auVar61._12_4_ = auVar49._12_4_ * 0.0;
              auVar42 = NEON_ext(auVar66,auVar66,8,1);
              fVar27 = auVar42._0_4_ + auVar42._4_4_;
              auVar42 = NEON_ext(auVar61,auVar61,8,1);
              fVar36 = auVar61._0_4_ + auVar61._4_4_ + auVar42._0_4_ + auVar42._4_4_;
              uVar48 = NEON_ext(CONCAT44(auVar65._0_4_ + auVar65._4_4_ + fVar58,
                                         auVar65._0_4_ + auVar65._4_4_ + fVar58),
                                CONCAT44(auVar66._0_4_ + auVar66._4_4_ + fVar27,
                                         auVar66._0_4_ + auVar66._4_4_ + fVar27),4,1);
              fVar58 = (float)uVar48;
              auVar62._0_4_ = fVar58 * fVar58;
              fVar69 = (float)((ulong)uVar48 >> 0x20);
              auVar62._4_4_ = fVar69 * fVar69;
              auVar62._8_4_ = fVar36 * fVar36;
              auVar62._12_4_ = 0;
              auVar42 = NEON_ext(auVar62,auVar62,8,1);
              fVar56 = auVar42._0_4_ + auVar42._4_4_;
              fVar27 = auVar62._0_4_ + auVar62._4_4_ + fVar56;
              fVar56 = auVar62._0_4_ + auVar62._4_4_ + fVar56;
              uVar26 = CONCAT44(fVar56,fVar27);
              uVar48 = NEON_frsqrte(uVar26,4);
              fVar67 = (float)uVar48;
              fVar68 = (float)((ulong)uVar48 >> 0x20);
              uVar48 = NEON_frsqrts(CONCAT44(fVar68 * fVar68,fVar67 * fVar67),uVar26,4);
              fVar67 = fVar67 * (float)uVar48;
              fVar68 = fVar68 * (float)((ulong)uVar48 >> 0x20);
              uVar48 = NEON_frsqrts(CONCAT44(fVar68 * fVar68,fVar67 * fVar67),uVar26,4);
              fVar67 = fVar67 * (float)uVar48;
              fVar68 = fVar68 * (float)((ulong)uVar48 >> 0x20);
              uVar48 = NEON_frsqrts(CONCAT44(fVar68 * fVar68,fVar67 * fVar67),uVar26,4);
              fVar67 = fVar67 * (float)uVar48;
              fVar68 = fVar68 * (float)((ulong)uVar48 >> 0x20);
              uVar48 = NEON_frsqrts(CONCAT44(fVar68 * fVar68,fVar67 * fVar67),uVar26,4);
              uVar64 = CONCAT44(fVar56 * fVar68 * (float)((ulong)uVar48 >> 0x20),
                                fVar27 * fVar67 * (float)uVar48);
              uVar64 = uVar64 ^ (uVar64 ^ uVar26) &
                                CONCAT44(-(uint)(fVar27 == 0.0),-(uint)(fVar27 == 0.0));
              uVar48 = NEON_frecpe(uVar64,4);
              uVar44 = NEON_frecps(uVar64,uVar48,4);
              fVar27 = (float)uVar48 * (float)uVar44;
              fVar56 = (float)((ulong)uVar48 >> 0x20) * (float)((ulong)uVar44 >> 0x20);
              uVar48 = NEON_frecps(uVar64,CONCAT44(fVar56,fVar27),4);
              fVar27 = fVar27 * (float)uVar48;
              fVar56 = fVar56 * (float)((ulong)uVar48 >> 0x20);
              uVar48 = NEON_frecps(uVar64,CONCAT44(fVar56,fVar27),4);
              fVar27 = fVar27 * (float)uVar48;
              fVar56 = fVar56 * (float)((ulong)uVar48 >> 0x20);
              uVar48 = NEON_frecps(uVar64,CONCAT44(fVar56,fVar27),4);
              fVar27 = fVar27 * (float)uVar48;
              uVar48 = NEON_frecps(uVar64,CONCAT44(fVar56 * (float)((ulong)uVar48 >> 0x20),fVar27),4
                                  );
              fVar27 = fVar27 * (float)uVar48;
              auVar63._0_4_ = -(float)local_490 * fVar58 * fVar27;
              auVar63._4_4_ = -local_490._4_4_ * fVar69 * fVar27;
              auVar63._8_4_ = -(float)uStack_488 * fVar36 * fVar27;
              auVar63._12_4_ = 0;
              auVar42 = NEON_ext(auVar63,auVar63,8,1);
              fVar36 = auVar63._0_4_ + auVar63._4_4_ + auVar42._0_4_ + auVar42._4_4_;
              bVar5 = fVar36 < fVar34;
              fVar34 = (float)((uint)fVar34 ^ ((uint)fVar34 ^ (uint)fVar36) & -(uint)bVar5);
              uVar23 = (uint)uVar15;
              if (!bVar5) {
                uVar23 = uVar24;
              }
            }
            uVar15 = uVar15 + 1;
            pfVar20 = pfVar20 + 5;
            uVar24 = uVar23;
          } while (uVar17 != uVar15);
        }
      }
      pfVar18 = pfVar18 + (ulong)uVar23 * 5;
      goto LAB_00285498;
    }
  }
  else {
    uVar15 = FUN_002848a0(param_3,param_4,param_5,param_9,local_470,&local_480);
    if ((uVar15 & 1) == 0) {
      return 0;
    }
    FUN_002854f0((int)*param_9,param_3,param_4,param_5,param_6,param_7,param_8,&local_480);
    fVar32 = (float)local_480;
    fVar34 = (float)((ulong)local_480 >> 0x20);
    fVar36 = (float)uStack_478;
    if (1 < (uint)(*param_8 - iVar25)) {
      uVar31 = (undefined4)((ulong)uStack_478 >> 0x20);
      goto LAB_002854c4;
    }
    fVar32 = -fVar32;
    fVar34 = -fVar34;
    fVar36 = -fVar36;
    pfVar18 = *(float **)(param_5 + 0x28);
    auVar39._0_4_ = fVar32 * *pfVar18;
    auVar39._4_4_ = fVar34 * pfVar18[1];
    auVar39._8_4_ = fVar36 * pfVar18[2];
    auVar39._12_4_ = pfVar18[3] * 0.0;
    auVar49 = NEON_ext(auVar39,auVar39,8,1);
    auVar45._0_4_ = fVar32 * pfVar18[4];
    auVar45._4_4_ = fVar34 * pfVar18[5];
    auVar45._8_4_ = fVar36 * pfVar18[6];
    auVar45._12_4_ = pfVar18[7] * 0.0;
    fVar27 = auVar49._0_4_ + auVar49._4_4_;
    auVar49 = NEON_ext(auVar45,auVar45,8,1);
    fVar28 = auVar49._0_4_ + auVar49._4_4_;
    fVar32 = fVar32 * pfVar18[8];
    fVar34 = fVar34 * pfVar18[9];
    auVar49._4_4_ = fVar34;
    auVar49._0_4_ = fVar32;
    auVar49._8_4_ = fVar36 * pfVar18[10];
    auVar49._12_4_ = pfVar18[0xb] * 0.0;
    auVar9._4_4_ = fVar34;
    auVar9._0_4_ = fVar32;
    auVar9._8_4_ = fVar36 * pfVar18[10];
    auVar9._12_4_ = pfVar18[0xb] * 0.0;
    auVar49 = NEON_ext(auVar49,auVar9,8,1);
    fVar34 = fVar32 + fVar34 + auVar49._0_4_ + auVar49._4_4_;
    pfVar18 = *(float **)(param_4 + 0x18);
    uVar48 = NEON_ext(CONCAT44(auVar39._0_4_ + auVar39._4_4_ + fVar27,
                               auVar39._0_4_ + auVar39._4_4_ + fVar27),
                      CONCAT44(auVar45._0_4_ + auVar45._4_4_ + fVar28,
                               auVar45._0_4_ + auVar45._4_4_ + fVar28),4,1);
    fVar36 = (float)uVar48;
    fVar27 = (float)((ulong)uVar48 >> 0x20);
    auVar40._0_4_ = *pfVar18 * fVar36;
    auVar40._4_4_ = pfVar18[1] * fVar27;
    auVar40._8_4_ = pfVar18[2] * fVar34;
    auVar40._12_4_ = 0;
    auVar49 = NEON_ext(auVar40,auVar40,8,1);
    fVar32 = auVar40._0_4_ + auVar40._4_4_ + auVar49._0_4_ + auVar49._4_4_;
    if (*(uint *)(param_4 + 0x10) < 2) {
      uVar17 = 0;
      uVar16 = *(uint *)(param_4 + 0x14);
    }
    else {
      uVar15 = 1;
      uVar16 = 0;
      pfVar20 = pfVar18;
      do {
        auVar41._0_4_ = pfVar20[5] * fVar36;
        auVar41._4_4_ = pfVar20[6] * fVar27;
        auVar41._8_4_ = pfVar20[7] * fVar34;
        auVar41._12_4_ = 0;
        auVar49 = NEON_ext(auVar41,auVar41,8,1);
        fVar28 = auVar41._0_4_ + auVar41._4_4_ + auVar49._0_4_ + auVar49._4_4_;
        bVar5 = fVar28 < fVar32;
        fVar32 = (float)((uint)fVar32 ^ ((uint)fVar32 ^ (uint)fVar28) & -(uint)bVar5);
        uVar17 = (uint)uVar15;
        if (!bVar5) {
          uVar17 = uVar16;
        }
        uVar15 = uVar15 + 1;
        uVar16 = uVar17;
        pfVar20 = pfVar20 + 5;
      } while (*(uint *)(param_4 + 0x10) != uVar15);
      uVar16 = *(uint *)(param_4 + 0x14);
    }
    if (uVar16 != 0) {
      fVar36 = -fVar36;
      fVar27 = -fVar27;
      fVar34 = -fVar34;
      fVar32 = fVar32 * fVar32;
      lVar21 = *(long *)(param_4 + 0x30);
      uVar15 = 0;
      uVar26 = 0xffffffff;
      uVar23 = 1;
      do {
        while( true ) {
          iVar25 = (int)uVar26;
          pfVar20 = pfVar18 + (ulong)*(byte *)(lVar21 + (ulong)(uVar23 - 1)) * 5;
          pfVar1 = pfVar18 + (ulong)*(byte *)(lVar21 + (ulong)uVar23) * 5;
          fVar28 = *pfVar20 + *pfVar1;
          fVar50 = pfVar20[1] + pfVar1[1];
          fVar51 = pfVar20[2] + pfVar1[2];
          auVar52._0_4_ = fVar28 * fVar28;
          auVar52._4_4_ = fVar50 * fVar50;
          auVar52._8_4_ = fVar51 * fVar51;
          auVar52._12_4_ = 0;
          auVar49 = NEON_ext(auVar52,auVar52,8,1);
          fVar29 = auVar49._0_4_ + auVar49._4_4_;
          auVar54._0_4_ = fVar36 * fVar28;
          auVar54._4_4_ = fVar27 * fVar50;
          auVar54._8_4_ = fVar34 * fVar51;
          auVar54._12_4_ = 0;
          fVar28 = auVar52._0_4_ + auVar52._4_4_ + fVar29;
          uVar48 = CONCAT44(auVar52._0_4_ + auVar52._4_4_ + fVar29,fVar28);
          auVar49 = NEON_ext(auVar54,auVar54,8,1);
          fVar29 = auVar54._0_4_ + auVar54._4_4_ + auVar49._0_4_ + auVar49._4_4_;
          bVar5 = 0.0 <= fVar29 && fVar32 * fVar28 < fVar29 * fVar29;
          auVar55._0_4_ = -(uint)bVar5;
          auVar55._4_4_ = -(uint)bVar5;
          auVar55._8_4_ = -(uint)bVar5;
          auVar55._12_4_ = -(uint)bVar5;
          NEON_ext(auVar55,auVar55,8,1);
          if (CONCAT13((char)auVar55._12_4_,
                       CONCAT12((char)auVar55._8_4_,
                                CONCAT11((char)auVar55._4_4_,(char)auVar55._0_4_))) == -1) break;
          uVar15 = uVar15 + 1;
          uVar23 = uVar23 + 2;
          if (uVar16 == uVar15) goto LAB_00285418;
        }
        uVar44 = NEON_frecpe(uVar48,4);
        uVar53 = NEON_frecps(uVar48,uVar44,4);
        fVar32 = (float)uVar44 * (float)uVar53;
        fVar28 = (float)((ulong)uVar44 >> 0x20) * (float)((ulong)uVar53 >> 0x20);
        uVar44 = NEON_frecps(uVar48,CONCAT44(fVar28,fVar32),4);
        fVar32 = fVar32 * (float)uVar44;
        fVar28 = fVar28 * (float)((ulong)uVar44 >> 0x20);
        uVar44 = NEON_frecps(uVar48,CONCAT44(fVar28,fVar32),4);
        fVar32 = fVar32 * (float)uVar44;
        fVar28 = fVar28 * (float)((ulong)uVar44 >> 0x20);
        uVar44 = NEON_frecps(uVar48,CONCAT44(fVar28,fVar32),4);
        fVar32 = fVar32 * (float)uVar44;
        uVar48 = NEON_frecps(uVar48,CONCAT44(fVar28 * (float)((ulong)uVar44 >> 0x20),fVar32),4);
        fVar32 = fVar29 * fVar29 * fVar32 * (float)uVar48;
        uVar26 = uVar15 & 0xffffffff;
        iVar25 = (int)uVar15;
        uVar15 = uVar15 + 1;
        uVar23 = uVar23 + 2;
      } while (uVar16 != uVar15);
LAB_00285418:
      if (iVar25 != -1) {
        bVar3 = *(byte *)(lVar21 + (ulong)(uint)(iVar25 << 1));
        bVar4 = *(byte *)(lVar21 + (ulong)(iVar25 << 1 | 1));
        pfVar20 = pfVar18 + (ulong)bVar3 * 5;
        auVar49 = *(undefined1 (*) [16])(pfVar18 + (ulong)bVar4 * 5);
        fVar32 = fVar36 * *pfVar20;
        fVar28 = fVar27 * pfVar20[1];
        auVar7._4_4_ = fVar28;
        auVar7._0_4_ = fVar32;
        auVar7._8_4_ = fVar34 * pfVar20[2];
        auVar7._12_4_ = 0;
        auVar8._4_4_ = fVar28;
        auVar8._0_4_ = fVar32;
        auVar8._8_4_ = fVar34 * pfVar20[2];
        auVar8._12_4_ = 0;
        auVar42 = NEON_ext(auVar7,auVar8,8,1);
        fVar36 = fVar36 * auVar49._0_4_;
        fVar27 = fVar27 * auVar49._4_4_;
        fVar34 = fVar34 * auVar49._8_4_;
        auVar10._4_4_ = fVar27;
        auVar10._0_4_ = fVar36;
        auVar10._8_4_ = fVar34;
        auVar10._12_4_ = 0;
        auVar11._4_4_ = fVar27;
        auVar11._0_4_ = fVar36;
        auVar11._8_4_ = fVar34;
        auVar11._12_4_ = 0;
        auVar49 = NEON_ext(auVar10,auVar11,8,1);
        if (fVar32 + fVar28 + auVar42._0_4_ + auVar42._4_4_ <=
            fVar36 + fVar27 + auVar49._0_4_ + auVar49._4_4_) {
          bVar3 = bVar4;
        }
        uVar17 = (uint)bVar3;
      }
    }
    uStack_488 = uStack_478;
    local_490 = local_480;
    pfVar18 = pfVar18 + (long)(int)uVar17 * 5;
LAB_00285498:
    FUN_00283e90(param_3,param_4,pfVar18,param_5,param_6,param_7,param_8,param_9,&local_480);
  }
  fVar36 = (float)uStack_488;
  uVar31 = (undefined4)((ulong)uStack_488 >> 0x20);
  fVar32 = (float)local_490;
  fVar34 = (float)((ulong)local_490 >> 0x20);
LAB_002854c4:
  param_10[1] = CONCAT44(uVar31,fVar36);
  *param_10 = CONCAT44(fVar34,fVar32);
  return 1;
}


