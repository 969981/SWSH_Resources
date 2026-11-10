/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0017cb60; name: FUN_0017cb60
 */


float FUN_0017cb60(float param_1,long *param_2,long param_3,undefined8 *param_4,undefined8 *param_5,
                  uint param_6,long param_7,long param_8,float *param_9,byte param_10,byte param_11)

{
  uint uVar1;
  ulong uVar2;
  ushort uVar3;
  uint uVar4;
  float *pfVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [12];
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  byte *pbVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long *plVar24;
  uint uVar25;
  long lVar26;
  undefined8 *puVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined8 uVar52;
  undefined1 auVar53 [12];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined8 uVar56;
  undefined8 uVar57;
  float fVar58;
  undefined8 uVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar66;
  undefined1 auVar65 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  float local_360 [2];
  undefined8 uStack_358;
  float local_300 [2];
  undefined8 uStack_2f8;
  float local_2a0 [2];
  undefined8 uStack_298;
  float local_240 [2];
  undefined8 uStack_238;
  float local_1e0 [2];
  undefined8 uStack_1d8;
  float local_180 [2];
  undefined8 uStack_178;
  float local_120 [2];
  undefined8 uStack_118;
  ulong local_c0 [12];
  
  if (param_6 != 0) {
    uVar20 = 0;
    uVar18 = (ulong)param_6;
    do {
      lVar26 = uVar20 * 0x50;
      if (uVar20 != 0) {
        uVar3 = *(ushort *)(param_3 + uVar20 * 0x50 + 0x4e);
        uVar23 = uVar20;
        do {
          if (*(ushort *)(param_2[(int)uVar23 - 1] + 0x4e) <= uVar3) goto LAB_0017cbd0;
          param_2[uVar23] = param_2[(int)uVar23 - 1];
          uVar23 = uVar23 - 1;
        } while ((int)uVar23 != 0);
      }
      uVar23 = 0;
LAB_0017cbd0:
      uVar20 = uVar20 + 1;
      param_2[uVar23 & 0xffffffff] = param_3 + lVar26;
    } while (uVar20 != uVar18);
    if (param_6 != 0) {
      param_1 = 0.0;
      pbVar21 = (byte *)(param_3 + 0x4c);
      do {
        uVar30 = 0;
        if ((*pbVar21 >> 3 & 1) != 0) {
          uVar30 = *(undefined4 *)(pbVar21 + -0x40);
        }
        *(undefined4 *)(pbVar21 + -4) = uVar30;
        pbVar21 = pbVar21 + 0x50;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
  }
  if (param_6 != 0) {
    param_1 = 0.0;
    fVar32 = *(float *)(param_7 + 0x2c);
    fVar28 = *(float *)(param_7 + 0x38);
    uVar13 = *(undefined8 *)(param_7 + 0x20);
    fVar34 = *(float *)(param_7 + 0x30);
    fVar29 = *(float *)(param_7 + 0x3c);
    fVar33 = *(float *)(param_7 + 0x40);
    fVar35 = *(float *)(param_7 + 0x34);
    uVar14 = *(undefined8 *)(param_8 + 0x2c);
    fVar60 = *(float *)(param_8 + 0x38);
    fVar61 = *(float *)(param_8 + 0x3c);
    fVar31 = *(float *)(param_7 + 0x28);
    auVar53 = *(undefined1 (*) [12])(param_8 + 0x20);
    fVar58 = *(float *)(param_8 + 0x34);
    fVar62 = *(float *)(param_8 + 0x40);
    uVar20 = (ulong)param_6;
    puVar27 = param_5;
    puVar22 = param_4;
    plVar24 = param_2;
    do {
      lVar26 = *plVar24;
      uVar20 = uVar20 - 1;
      auVar15 = *(undefined1 (*) [12])(lVar26 + 0x10);
      fVar71 = *(float *)(lVar26 + 0x38);
      fVar66 = auVar15._0_4_;
      fVar63 = auVar15._4_4_;
      fVar64 = auVar15._8_4_;
      fVar67 = (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20);
      fVar68 = (float)*(undefined8 *)(lVar26 + 0x30);
      puVar22[1] = (ulong)(uint)(fVar33 * fVar64 + fVar31 * fVar66 + fVar35 * fVar63);
      *puVar22 = CONCAT44(fVar29 * fVar64 +
                          (float)((ulong)uVar13 >> 0x20) * fVar66 + fVar34 * fVar63,
                          fVar28 * fVar64 + (float)uVar13 * fVar66 + fVar32 * fVar63);
      puVar27[1] = (ulong)(uint)(fVar62 * fVar71 + auVar53._8_4_ * fVar68 + fVar58 * fVar67);
      *puVar27 = CONCAT44(fVar61 * fVar71 +
                          auVar53._4_4_ * fVar68 + (float)((ulong)uVar14 >> 0x20) * fVar67,
                          fVar60 * fVar71 + auVar53._0_4_ * fVar68 + (float)uVar14 * fVar67);
      puVar27 = puVar27 + 2;
      puVar22 = puVar22 + 2;
      plVar24 = plVar24 + 1;
    } while (uVar20 != 0);
  }
  uVar14 = DAT_01d4ab58;
  uVar13 = DAT_01d4ab50;
  if ((param_10 & 1) == 0) {
    fVar28 = *(float *)(param_7 + 0xc) * *param_9;
    local_380 = CONCAT44(fVar28,fVar28);
    fVar28 = *(float *)(param_8 + 0xc) * param_9[2];
    local_378 = CONCAT44(fVar28,fVar28);
    local_370 = CONCAT44(param_9[1],param_9[1]);
    param_1 = param_9[3];
    local_368 = CONCAT44(param_1,param_1);
    if (param_6 != 0) {
      uVar20 = 0;
LAB_0017cdec:
      do {
        plVar24 = param_2 + uVar20;
        puVar27 = (undefined8 *)*plVar24;
        uVar17 = (uint)uVar20;
        uVar1 = uVar17 + 1;
        uVar3 = *(ushort *)((long)puVar27 + 0x4e) >> 8;
        uVar18 = uVar20;
        uVar25 = uVar1;
        uVar19 = uVar17;
        if (uVar1 < param_6) {
          do {
            uVar25 = (uint)uVar18;
            uVar19 = uVar25 + 1;
            uVar18 = (ulong)uVar19;
            if (*(byte *)(param_2[uVar18] + 0x4f) != uVar3) goto joined_r0x0017d0c4;
          } while (uVar25 + 2 < param_6);
          uVar25 = uVar25 + 2;
        }
        uVar18 = (ulong)uVar25;
        uVar25 = uVar19;
joined_r0x0017d0c4:
        uVar19 = (uint)uVar18;
        if (uVar3 != 1) {
          if (uVar3 == 4) {
            uVar4 = uVar19 - uVar17;
            uVar25 = uVar17;
            if ((uVar17 <= uVar19 && uVar4 != 0) &&
               ((*(ushort *)((long)puVar27 + 0x4e) & 0xff) == 0)) {
              do {
                uVar25 = uVar1;
                if (uVar19 <= uVar25) break;
                uVar1 = uVar25 + 1;
              } while (*(char *)(param_2[uVar25] + 0x4e) == '\0');
            }
            if (uVar4 != 0) {
              uVar25 = uVar25 - uVar17;
              uVar23 = 0;
              while( true ) {
                fVar29 = (float)puVar27[5];
                param_1 = (float)puVar27[4];
                fVar28 = (float)((ulong)puVar27[4] >> 0x20);
                fVar32 = (float)puVar27[7];
                fVar33 = (float)puVar27[6];
                fVar31 = (float)((ulong)puVar27[6] >> 0x20);
                uVar52 = puVar27[1];
                uVar44 = (undefined1)uVar52;
                uVar45 = (undefined1)((ulong)uVar52 >> 8);
                uVar46 = (undefined1)((ulong)uVar52 >> 0x10);
                uVar47 = (undefined1)((ulong)uVar52 >> 0x18);
                uVar48 = (undefined1)((ulong)uVar52 >> 0x20);
                uVar49 = (undefined1)((ulong)uVar52 >> 0x28);
                uVar50 = (undefined1)((ulong)uVar52 >> 0x30);
                uVar51 = (undefined1)((ulong)uVar52 >> 0x38);
                uVar52 = *puVar27;
                uVar36 = (undefined1)uVar52;
                uVar37 = (undefined1)((ulong)uVar52 >> 8);
                uVar38 = (undefined1)((ulong)uVar52 >> 0x10);
                uVar39 = (undefined1)((ulong)uVar52 >> 0x18);
                uVar40 = (undefined1)((ulong)uVar52 >> 0x20);
                uVar41 = (undefined1)((ulong)uVar52 >> 0x28);
                uVar42 = (undefined1)((ulong)uVar52 >> 0x30);
                uVar43 = (undefined1)((ulong)uVar52 >> 0x38);
                uVar57 = puVar27[3];
                uVar52 = puVar27[2];
                auVar54 = *(undefined1 (*) [16])(param_4 + uVar20 * 2 + uVar23 * 2);
                uVar1 = (uint)uVar23;
                if (uVar25 <= uVar23) {
                  uVar1 = uVar25;
                }
                uVar59 = (param_5 + uVar20 * 2 + uVar23 * 2)[1];
                uVar56 = param_5[uVar20 * 2 + uVar23 * 2];
                if (uVar1 != 0) {
                  uVar16 = 0;
                  do {
                    uVar2 = uVar16 + 1;
                    fVar62 = (float)((ulong)uVar56 >> 0x20);
                    fVar66 = (float)((ulong)uVar59 >> 0x20);
                    fVar58 = auVar54._4_4_;
                    fVar60 = auVar54._8_4_;
                    fVar61 = auVar54._12_4_;
                    fVar34 = param_1 * (float)local_c0[uVar16 * 2] +
                             (float)CONCAT13(uVar39,CONCAT12(uVar38,CONCAT11(uVar37,uVar36))) *
                             local_240[uVar16 * 4] +
                             (float)uVar56 * local_120[uVar16 * 4] +
                             auVar54._0_4_ * local_2a0[uVar16 * 4];
                    fVar35 = fVar28 * (float)(local_c0[uVar16 * 2] >> 0x20) +
                             (float)CONCAT13(uVar43,CONCAT12(uVar42,CONCAT11(uVar41,uVar40))) *
                             local_240[uVar16 * 4 + 1] +
                             fVar62 * local_120[uVar16 * 4 + 1] + fVar58 * local_2a0[uVar16 * 4 + 1]
                    ;
                    fVar63 = fVar29 * (float)local_c0[uVar16 * 2 + 1] +
                             (float)CONCAT13(uVar47,CONCAT12(uVar46,CONCAT11(uVar45,uVar44))) *
                             local_240[uVar16 * 4 + 2] +
                             (float)uVar59 * local_120[uVar16 * 4 + 2] +
                             fVar60 * local_2a0[uVar16 * 4 + 2];
                    fVar64 = (float)(local_c0[uVar16 * 2 + 1] >> 0x20) * 0.0 +
                             (float)CONCAT13(uVar51,CONCAT12(uVar50,CONCAT11(uVar49,uVar48))) *
                             local_240[uVar16 * 4 + 3] +
                             fVar66 * local_120[uVar16 * 4 + 3] + fVar61 * local_2a0[uVar16 * 4 + 3]
                    ;
                    auVar11._4_4_ = fVar35;
                    auVar11._0_4_ = fVar34;
                    auVar11._8_4_ = fVar63;
                    auVar11._12_4_ = fVar64;
                    auVar12._4_4_ = fVar35;
                    auVar12._0_4_ = fVar34;
                    auVar12._8_4_ = fVar63;
                    auVar12._12_4_ = fVar64;
                    auVar65 = NEON_ext(auVar11,auVar12,8,1);
                    fVar34 = fVar34 + fVar35 + auVar65._0_4_ + auVar65._4_4_;
                    param_1 = param_1 - local_180[uVar16 * 4] * fVar34;
                    fVar28 = fVar28 - local_180[uVar16 * 4 + 1] * fVar34;
                    fVar29 = fVar29 - local_180[uVar16 * 4 + 2] * fVar34;
                    fVar35 = 0.0 - local_180[uVar16 * 4 + 3] * fVar34;
                    auVar65._4_4_ = fVar28;
                    auVar65._0_4_ = param_1;
                    auVar65._8_4_ = fVar29;
                    auVar65._12_4_ = fVar35;
                    auVar6._4_4_ = fVar28;
                    auVar6._0_4_ = param_1;
                    auVar6._8_4_ = fVar29;
                    auVar6._12_4_ = fVar35;
                    auVar65 = NEON_ext(auVar65,auVar6,8,1);
                    fVar29 = (float)CONCAT13(uVar39,CONCAT12(uVar38,CONCAT11(uVar37,uVar36))) -
                             local_300[uVar16 * 4] * fVar34;
                    uVar36 = SUB41(fVar29,0);
                    uVar37 = (undefined1)((uint)fVar29 >> 8);
                    uVar38 = (undefined1)((uint)fVar29 >> 0x10);
                    uVar39 = (undefined1)((uint)fVar29 >> 0x18);
                    fVar29 = (float)CONCAT13(uVar43,CONCAT12(uVar42,CONCAT11(uVar41,uVar40))) -
                             local_300[uVar16 * 4 + 1] * fVar34;
                    uVar40 = SUB41(fVar29,0);
                    uVar41 = (undefined1)((uint)fVar29 >> 8);
                    uVar42 = (undefined1)((uint)fVar29 >> 0x10);
                    uVar43 = (undefined1)((uint)fVar29 >> 0x18);
                    fVar29 = (float)CONCAT13(uVar47,CONCAT12(uVar46,CONCAT11(uVar45,uVar44))) -
                             local_300[uVar16 * 4 + 2] * fVar34;
                    uVar44 = SUB41(fVar29,0);
                    uVar45 = (undefined1)((uint)fVar29 >> 8);
                    uVar46 = (undefined1)((uint)fVar29 >> 0x10);
                    uVar47 = (undefined1)((uint)fVar29 >> 0x18);
                    fVar29 = (float)CONCAT13(uVar51,CONCAT12(uVar50,CONCAT11(uVar49,uVar48))) -
                             local_300[uVar16 * 4 + 3] * fVar34;
                    uVar48 = SUB41(fVar29,0);
                    uVar49 = (undefined1)((uint)fVar29 >> 8);
                    uVar50 = (undefined1)((uint)fVar29 >> 0x10);
                    uVar51 = (undefined1)((uint)fVar29 >> 0x18);
                    fVar29 = auVar65._0_4_;
                    fVar33 = fVar33 - local_1e0[uVar16 * 4] * fVar34;
                    fVar31 = fVar31 - local_1e0[uVar16 * 4 + 1] * fVar34;
                    fVar32 = fVar32 - local_1e0[uVar16 * 4 + 2] * fVar34;
                    fVar35 = 0.0 - local_1e0[uVar16 * 4 + 3] * fVar34;
                    pfVar5 = (float *)(param_4 + uVar20 * 2 + uVar16 * 2);
                    uVar52 = CONCAT44((float)((ulong)uVar52 >> 0x20) -
                                      local_360[uVar16 * 4 + 1] * fVar34,
                                      (float)uVar52 - local_360[uVar16 * 4] * fVar34);
                    uVar57 = CONCAT44((float)((ulong)uVar57 >> 0x20) -
                                      local_360[uVar16 * 4 + 3] * fVar34,
                                      (float)uVar57 - local_360[uVar16 * 4 + 2] * fVar34);
                    auVar7._4_4_ = fVar31;
                    auVar7._0_4_ = fVar33;
                    auVar7._8_4_ = fVar32;
                    auVar7._12_4_ = fVar35;
                    auVar8._4_4_ = fVar31;
                    auVar8._0_4_ = fVar33;
                    auVar8._8_4_ = fVar32;
                    auVar8._12_4_ = fVar35;
                    auVar65 = NEON_ext(auVar7,auVar8,8,1);
                    fVar32 = auVar65._0_4_;
                    auVar54._0_4_ = auVar54._0_4_ - *pfVar5 * fVar34;
                    auVar54._4_4_ = fVar58 - pfVar5[1] * fVar34;
                    auVar54._8_4_ = fVar60 - pfVar5[2] * fVar34;
                    auVar54._12_4_ = fVar61 - pfVar5[3] * fVar34;
                    pfVar5 = (float *)(param_5 + uVar20 * 2 + uVar16 * 2);
                    uVar56 = CONCAT44(fVar62 - pfVar5[1] * fVar34,(float)uVar56 - *pfVar5 * fVar34);
                    uVar59 = CONCAT44(fVar66 - pfVar5[3] * fVar34,(float)uVar59 - pfVar5[2] * fVar34
                                     );
                    uVar16 = uVar2;
                  } while (uVar1 != uVar2);
                }
                puVar27[1] = CONCAT17(uVar51,CONCAT16(uVar50,CONCAT15(uVar49,CONCAT14(uVar48,
                                                  CONCAT13(uVar47,CONCAT12(uVar46,CONCAT11(uVar45,
                                                  uVar44)))))));
                *puVar27 = CONCAT17(uVar43,CONCAT16(uVar42,CONCAT15(uVar41,CONCAT14(uVar40,CONCAT13(
                                                  uVar39,CONCAT12(uVar38,CONCAT11(uVar37,uVar36)))))
                                                  ));
                lVar26 = plVar24[uVar23];
                *(undefined8 *)(lVar26 + 0x18) = uVar57;
                *(undefined8 *)(lVar26 + 0x10) = uVar52;
                lVar26 = plVar24[uVar23];
                *(ulong *)(lVar26 + 0x20) = CONCAT44(fVar28,param_1);
                *(float *)(lVar26 + 0x28) = fVar29;
                *(ulong *)(lVar26 + 0x30) = CONCAT44(fVar31,fVar33);
                *(float *)(lVar26 + 0x38) = fVar32;
                (param_4 + uVar20 * 2 + uVar23 * 2)[1] = auVar54._8_8_;
                param_4[uVar20 * 2 + uVar23 * 2] = auVar54._0_8_;
                (param_5 + uVar20 * 2 + uVar23 * 2)[1] = uVar59;
                param_5[uVar20 * 2 + uVar23 * 2] = uVar56;
                if (uVar23 < uVar25) {
                  *(ulong *)(local_300 + uVar23 * 4 + 2) =
                       CONCAT17(uVar51,CONCAT16(uVar50,CONCAT15(uVar49,CONCAT14(uVar48,CONCAT13(
                                                  uVar47,CONCAT12(uVar46,CONCAT11(uVar45,uVar44)))))
                                               ));
                  *(ulong *)(local_300 + uVar23 * 4) =
                       CONCAT17(uVar43,CONCAT16(uVar42,CONCAT15(uVar41,CONCAT14(uVar40,CONCAT13(
                                                  uVar39,CONCAT12(uVar38,CONCAT11(uVar37,uVar36)))))
                                               ));
                  fVar58 = (float)local_378;
                  fVar61 = (float)local_370;
                  fVar62 = auVar54._0_4_ * fVar61;
                  fVar66 = auVar54._4_4_ * fVar61;
                  fVar63 = auVar54._8_4_ * fVar61;
                  fVar61 = auVar54._12_4_ * fVar61;
                  fVar69 = (float)local_368;
                  fVar71 = (float)uVar56 * fVar69;
                  fVar34 = (float)((ulong)uVar56 >> 0x20);
                  fVar70 = fVar34 * fVar69;
                  fVar72 = (float)uVar59 * fVar69;
                  fVar35 = (float)((ulong)uVar59 >> 0x20);
                  fVar60 = param_1 * fVar58;
                  fVar68 = (float)local_380;
                  fVar64 = (float)CONCAT13(uVar39,CONCAT12(uVar38,CONCAT11(uVar37,uVar36))) * fVar68
                  ;
                  fVar67 = (float)CONCAT13(uVar43,CONCAT12(uVar42,CONCAT11(uVar41,uVar40))) * fVar68
                  ;
                  fVar68 = (float)CONCAT13(uVar47,CONCAT12(uVar46,CONCAT11(uVar45,uVar44))) * fVar68
                  ;
                  *(undefined8 *)(local_360 + uVar23 * 4 + 2) = uVar57;
                  *(undefined8 *)(local_360 + uVar23 * 4) = uVar52;
                  *(ulong *)(local_180 + uVar23 * 4 + 2) = (ulong)(uint)fVar29;
                  *(ulong *)(local_180 + uVar23 * 4) = CONCAT44(fVar28,param_1);
                  *(ulong *)(local_1e0 + uVar23 * 4 + 2) = (ulong)(uint)fVar32;
                  *(ulong *)(local_1e0 + uVar23 * 4) = CONCAT44(fVar31,fVar33);
                  fVar33 = (float)CONCAT13(uVar39,CONCAT12(uVar38,CONCAT11(uVar37,uVar36))) * fVar64
                           + param_1 * fVar60 + auVar54._0_4_ * fVar62 + (float)uVar56 * fVar71;
                  fVar31 = (float)CONCAT13(uVar43,CONCAT12(uVar42,CONCAT11(uVar41,uVar40))) * fVar67
                           + fVar28 * fVar28 * fVar58 + auVar54._4_4_ * fVar66 + fVar34 * fVar70;
                  uVar36 = (undefined1)((uint)fVar31 >> 8);
                  uVar37 = (undefined1)((uint)fVar31 >> 0x10);
                  uVar38 = (undefined1)((uint)fVar31 >> 0x18);
                  fVar32 = (float)CONCAT13(uVar47,CONCAT12(uVar46,CONCAT11(uVar45,uVar44))) * fVar68
                           + fVar29 * fVar29 * fVar58 +
                           auVar54._8_4_ * fVar63 + (float)uVar59 * fVar72;
                  uVar39 = (undefined1)((uint)fVar32 >> 8);
                  uVar40 = (undefined1)((uint)fVar32 >> 0x10);
                  uVar41 = (undefined1)((uint)fVar32 >> 0x18);
                  fVar34 = auVar54._12_4_ * fVar61 + fVar35 * fVar35 * fVar69 + 0.0;
                  uVar42 = (undefined1)((uint)fVar34 >> 8);
                  uVar43 = (undefined1)((uint)fVar34 >> 0x10);
                  uVar44 = (undefined1)((uint)fVar34 >> 0x18);
                  auVar9[4] = SUB41(fVar31,0);
                  auVar9._0_4_ = fVar33;
                  auVar9[5] = uVar36;
                  auVar9[6] = uVar37;
                  auVar9[7] = uVar38;
                  auVar9[8] = SUB41(fVar32,0);
                  auVar9[9] = uVar39;
                  auVar9[10] = uVar40;
                  auVar9[0xb] = uVar41;
                  auVar9[0xc] = SUB41(fVar34,0);
                  auVar9[0xd] = uVar42;
                  auVar9[0xe] = uVar43;
                  auVar9[0xf] = uVar44;
                  auVar10[4] = SUB41(fVar31,0);
                  auVar10._0_4_ = fVar33;
                  auVar10[5] = uVar36;
                  auVar10[6] = uVar37;
                  auVar10[7] = uVar38;
                  auVar10[8] = SUB41(fVar32,0);
                  auVar10[9] = uVar39;
                  auVar10[10] = uVar40;
                  auVar10[0xb] = uVar41;
                  auVar10[0xc] = SUB41(fVar34,0);
                  auVar10[0xd] = uVar42;
                  auVar10[0xe] = uVar43;
                  auVar10[0xf] = uVar44;
                  auVar54 = NEON_ext(auVar9,auVar10,8,1);
                  fVar34 = auVar54._0_4_ + auVar54._4_4_;
                  fVar32 = fVar33 + fVar31 + fVar34;
                  fVar34 = fVar33 + fVar31 + fVar34;
                  uVar36 = SUB41(fVar34,0);
                  uVar37 = (undefined1)((uint)fVar34 >> 8);
                  uVar38 = (undefined1)((uint)fVar34 >> 0x10);
                  uVar39 = (undefined1)((uint)fVar34 >> 0x18);
                  uVar52 = NEON_frecpe(CONCAT17(uVar39,CONCAT16(uVar38,CONCAT15(uVar37,CONCAT14(
                                                  uVar36,fVar32)))),4);
                  uVar57 = NEON_frecps(CONCAT17(uVar39,CONCAT16(uVar38,CONCAT15(uVar37,CONCAT14(
                                                  uVar36,fVar32)))),uVar52,4);
                  fVar33 = (float)uVar52 * (float)uVar57;
                  fVar31 = (float)((ulong)uVar52 >> 0x20) * (float)((ulong)uVar57 >> 0x20);
                  uVar52 = NEON_frecps(CONCAT17(uVar39,CONCAT16(uVar38,CONCAT15(uVar37,CONCAT14(
                                                  uVar36,fVar32)))),CONCAT44(fVar31,fVar33),4);
                  fVar33 = fVar33 * (float)uVar52;
                  fVar31 = fVar31 * (float)((ulong)uVar52 >> 0x20);
                  uVar52 = NEON_frecps(CONCAT17(uVar39,CONCAT16(uVar38,CONCAT15(uVar37,CONCAT14(
                                                  uVar36,fVar32)))),CONCAT44(fVar31,fVar33),4);
                  fVar33 = fVar33 * (float)uVar52;
                  fVar31 = fVar31 * (float)((ulong)uVar52 >> 0x20);
                  uVar52 = NEON_frecps(CONCAT17(uVar39,CONCAT16(uVar38,CONCAT15(uVar37,CONCAT14(
                                                  uVar36,fVar32)))),CONCAT44(fVar31,fVar33),4);
                  fVar33 = fVar33 * (float)uVar52;
                  uVar52 = NEON_frecps(CONCAT17(uVar39,CONCAT16(uVar38,CONCAT15(uVar37,CONCAT14(
                                                  uVar36,fVar32)))),
                                       CONCAT44(fVar31 * (float)((ulong)uVar52 >> 0x20),fVar33),4);
                  bVar73 = (byte)((ulong)uVar13 >> 8);
                  bVar74 = (byte)((ulong)uVar13 >> 0x10);
                  bVar75 = (byte)((ulong)uVar13 >> 0x18);
                  param_1 = (float)CONCAT13((byte)((uint)fVar62 >> 0x18) & bVar75,
                                            CONCAT12((byte)((uint)fVar62 >> 0x10) & bVar74,
                                                     CONCAT11((byte)((uint)fVar62 >> 8) & bVar73,
                                                              SUB41(fVar62,0) & (byte)uVar13)));
                  bVar76 = (byte)((ulong)uVar13 >> 0x20);
                  bVar77 = (byte)((ulong)uVar13 >> 0x28);
                  bVar78 = (byte)((ulong)uVar13 >> 0x30);
                  bVar79 = (byte)((ulong)uVar13 >> 0x38);
                  auVar53._0_8_ =
                       CONCAT17((byte)((uint)fVar66 >> 0x18) & bVar79,
                                CONCAT16((byte)((uint)fVar66 >> 0x10) & bVar78,
                                         CONCAT15((byte)((uint)fVar66 >> 8) & bVar77,
                                                  CONCAT14(SUB41(fVar66,0) & bVar76,param_1))));
                  auVar53[8] = SUB41(fVar63,0) & (byte)uVar14;
                  bVar80 = (byte)((ulong)uVar14 >> 8);
                  auVar53[9] = (byte)((uint)fVar63 >> 8) & bVar80;
                  bVar81 = (byte)((ulong)uVar14 >> 0x10);
                  auVar53[10] = (byte)((uint)fVar63 >> 0x10) & bVar81;
                  bVar82 = (byte)((ulong)uVar14 >> 0x18);
                  auVar53[0xb] = (byte)((uint)fVar63 >> 0x18) & bVar82;
                  auVar55[0xc] = SUB41(fVar61,0) & (byte)((ulong)uVar14 >> 0x20);
                  auVar55._0_12_ = auVar53;
                  auVar55[0xd] = (byte)((uint)fVar61 >> 8) & (byte)((ulong)uVar14 >> 0x28);
                  auVar55[0xe] = (byte)((uint)fVar61 >> 0x10) & (byte)((ulong)uVar14 >> 0x30);
                  auVar55[0xf] = (byte)((uint)fVar61 >> 0x18) & (byte)((ulong)uVar14 >> 0x38);
                  fVar32 = (float)((uint)(fVar33 * (float)uVar52) & -(uint)(0.0 < fVar32));
                  fVar33 = (float)CONCAT13((byte)((uint)fVar67 >> 0x18) & bVar79,
                                           CONCAT12((byte)((uint)fVar67 >> 0x10) & bVar78,
                                                    CONCAT11((byte)((uint)fVar67 >> 8) & bVar77,
                                                             SUB41(fVar67,0) & bVar76))) * fVar32;
                  fVar31 = fVar32 * 0.0;
                  param_1 = param_1 * fVar32;
                  *(ulong *)(local_240 + uVar23 * 4 + 2) =
                       CONCAT17((char)((uint)fVar31 >> 0x18),
                                CONCAT16((char)((uint)fVar31 >> 0x10),
                                         CONCAT15((char)((uint)fVar31 >> 8),
                                                  CONCAT14(SUB41(fVar31,0),
                                                           (float)CONCAT13((byte)((uint)fVar68 >>
                                                                                 0x18) & bVar82,
                                                                           CONCAT12((byte)((uint)
                                                  fVar68 >> 0x10) & bVar81,
                                                  CONCAT11((byte)((uint)fVar68 >> 8) & bVar80,
                                                           SUB41(fVar68,0) & (byte)uVar14))) *
                                                  fVar32))));
                  *(ulong *)(local_240 + uVar23 * 4) =
                       CONCAT17((char)((uint)fVar33 >> 0x18),
                                CONCAT16((char)((uint)fVar33 >> 0x10),
                                         CONCAT15((char)((uint)fVar33 >> 8),
                                                  CONCAT14(SUB41(fVar33,0),
                                                           (float)CONCAT13((byte)((uint)fVar64 >>
                                                                                 0x18) & bVar75,
                                                                           CONCAT12((byte)((uint)
                                                  fVar64 >> 0x10) & bVar74,
                                                  CONCAT11((byte)((uint)fVar64 >> 8) & bVar73,
                                                           SUB41(fVar64,0) & (byte)uVar13))) *
                                                  fVar32))));
                  *(ulong *)(local_2a0 + uVar23 * 4 + 2) =
                       CONCAT44(auVar55._12_4_ * fVar32,auVar53._8_4_ * fVar32);
                  *(ulong *)(local_2a0 + uVar23 * 4) =
                       CONCAT44((float)((ulong)auVar53._0_8_ >> 0x20) * fVar32,param_1);
                  local_c0[uVar23 * 2 + 1] = (ulong)(uint)(fVar29 * fVar58 * fVar32);
                  local_c0[uVar23 * 2] = CONCAT44(fVar28 * fVar58 * fVar32,fVar60 * fVar32);
                  *(ulong *)(local_120 + uVar23 * 4 + 2) = (ulong)(uint)(fVar72 * fVar32);
                  *(ulong *)(local_120 + uVar23 * 4) = CONCAT44(fVar70 * fVar32,fVar71 * fVar32);
                }
                uVar23 = uVar23 + 1;
                if (uVar23 == uVar4) break;
                puVar27 = (undefined8 *)plVar24[uVar23];
              }
            }
          }
LAB_0017d0ac:
          uVar20 = uVar18;
          if (param_6 <= uVar19) {
            return param_1;
          }
          goto LAB_0017cdec;
        }
        if ((param_11 & 1) == 0) goto LAB_0017d0ac;
        uVar23 = uVar20;
        if (uVar17 < uVar19) {
          do {
            if (*(char *)(param_2[uVar23] + 0x4e) == '\x02') break;
            uVar23 = uVar23 + 1;
          } while ((uint)uVar23 < uVar19);
        }
        if ((int)uVar23 + 2U == uVar25) {
          FUN_0017d190(param_2 + (uVar23 & 0xffffffff),param_4 + (uVar23 & 0xffffffff) * 2,
                       param_5 + (uVar23 & 0xffffffff) * 2,&local_380);
        }
        param_1 = (float)FUN_0017d190(plVar24,param_4 + uVar20 * 2,param_5 + uVar20 * 2,&local_380);
        uVar20 = uVar18;
        if (param_6 <= uVar19) {
          return param_1;
        }
      } while( true );
    }
  }
  return param_1;
}


