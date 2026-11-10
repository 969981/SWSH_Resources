/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0028b890; name: FUN_0028b890
 */


byte FUN_0028b890(long param_1,long param_2,undefined4 param_3,undefined4 *param_4,uint param_5,
                 long param_6,undefined8 param_7,long *param_8,undefined8 param_9,
                 undefined8 param_10,undefined8 *param_11,undefined8 *param_12)

{
  undefined8 *puVar1;
  byte bVar2;
  bool bVar3;
  float *pfVar4;
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
  byte bVar18;
  float *pfVar19;
  uint uVar20;
  uint uVar21;
  float *pfVar22;
  long lVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int iVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  int iVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  ulong uVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  float fVar65;
  undefined8 uVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined8 uVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  int local_84;
  undefined8 local_80;
  ulong uStack_78;
  float local_58 [2];
  
  local_84 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0x7f7fffff7f7fffff;
  fVar32 = (float)*(undefined8 *)(param_2 + 0x38);
  fVar30 = (float)((ulong)*(undefined8 *)(param_2 + 0x38) >> 0x20);
  fVar28 = (float)*(undefined8 *)(param_2 + 0x30);
  fVar29 = (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20);
  auVar35._0_4_ = *(float *)(param_2 + 0x40) - fVar28;
  auVar35._4_4_ = *(float *)(param_2 + 0x44) - fVar29;
  auVar35._8_4_ = *(float *)(param_2 + 0x48) - fVar32;
  auVar35._12_4_ = *(float *)(param_2 + 0x4c) - fVar30;
  auVar48._0_4_ = *(float *)(param_2 + 0x50) - fVar28;
  auVar48._4_4_ = *(float *)(param_2 + 0x54) - fVar29;
  auVar48._8_4_ = *(float *)(param_2 + 0x58) - fVar32;
  auVar48._12_4_ = *(float *)(param_2 + 0x5c) - fVar30;
  auVar57 = NEON_ext(auVar35,auVar35,8,1);
  auVar69 = NEON_ext(auVar48,auVar48,8,1);
  fVar46 = auVar35._0_4_ * auVar48._4_4_ - auVar35._4_4_ * auVar48._0_4_;
  uVar34 = NEON_ext(CONCAT44(auVar35._4_4_ * auVar48._8_4_ - auVar35._8_4_ * auVar48._4_4_,fVar46),
                    CONCAT44(auVar57._4_4_ * auVar48._4_4_ - auVar35._4_4_ * auVar69._4_4_,
                             auVar57._0_4_ * auVar48._0_4_ - auVar35._0_4_ * auVar69._0_4_),4,1);
  fVar31 = (float)uVar34;
  auVar49._0_4_ = fVar31 * fVar31;
  fVar26 = (float)((ulong)uVar34 >> 0x20);
  auVar49._4_4_ = fVar26 * fVar26;
  auVar49._8_4_ = fVar46 * fVar46;
  auVar49._12_4_ = 0;
  auVar57 = NEON_ext(auVar49,auVar49,8,1);
  fVar27 = auVar57._0_4_ + auVar57._4_4_;
  fVar25 = auVar49._0_4_ + auVar49._4_4_ + fVar27;
  fVar27 = auVar49._0_4_ + auVar49._4_4_ + fVar27;
  uVar17 = CONCAT44(fVar27,fVar25);
  uVar34 = NEON_frsqrte(uVar17,4);
  fVar60 = (float)uVar34;
  fVar65 = (float)((ulong)uVar34 >> 0x20);
  uVar34 = NEON_frsqrts(CONCAT44(fVar65 * fVar65,fVar60 * fVar60),uVar17,4);
  fVar60 = fVar60 * (float)uVar34;
  fVar65 = fVar65 * (float)((ulong)uVar34 >> 0x20);
  uVar34 = NEON_frsqrts(CONCAT44(fVar65 * fVar65,fVar60 * fVar60),uVar17,4);
  fVar60 = fVar60 * (float)uVar34;
  fVar65 = fVar65 * (float)((ulong)uVar34 >> 0x20);
  uVar34 = NEON_frsqrts(CONCAT44(fVar65 * fVar65,fVar60 * fVar60),uVar17,4);
  fVar60 = fVar60 * (float)uVar34;
  fVar65 = fVar65 * (float)((ulong)uVar34 >> 0x20);
  uVar34 = NEON_frsqrts(CONCAT44(fVar65 * fVar65,fVar60 * fVar60),uVar17,4);
  uVar56 = CONCAT44(fVar27 * fVar65 * (float)((ulong)uVar34 >> 0x20),fVar25 * fVar60 * (float)uVar34
                   );
  uVar56 = uVar56 ^ (uVar56 ^ uVar17) & CONCAT44(-(uint)(fVar25 == 0.0),-(uint)(fVar25 == 0.0));
  uVar34 = NEON_frecpe(uVar56,4);
  uVar61 = NEON_frecps(uVar56,uVar34,4);
  fVar25 = (float)uVar34 * (float)uVar61;
  fVar27 = (float)((ulong)uVar34 >> 0x20) * (float)((ulong)uVar61 >> 0x20);
  uVar34 = NEON_frecps(uVar56,CONCAT44(fVar27,fVar25),4);
  fVar25 = fVar25 * (float)uVar34;
  fVar27 = fVar27 * (float)((ulong)uVar34 >> 0x20);
  uVar34 = NEON_frecps(uVar56,CONCAT44(fVar27,fVar25),4);
  fVar25 = fVar25 * (float)uVar34;
  fVar27 = fVar27 * (float)((ulong)uVar34 >> 0x20);
  uVar34 = NEON_frecps(uVar56,CONCAT44(fVar27,fVar25),4);
  fVar25 = fVar25 * (float)uVar34;
  uVar34 = NEON_frecps(uVar56,CONCAT44(fVar27 * (float)((ulong)uVar34 >> 0x20),fVar25),4);
  fVar25 = fVar25 * (float)uVar34;
  local_80 = CONCAT44(fVar26 * fVar25,fVar31 * fVar25);
  fVar28 = fVar28 * fVar31 * fVar25;
  fVar29 = fVar29 * fVar26 * fVar25;
  fVar32 = fVar32 * fVar46 * fVar25;
  uStack_78 = (ulong)(uint)(fVar46 * fVar25);
  auVar57._4_4_ = fVar29;
  auVar57._0_4_ = fVar28;
  auVar57._8_4_ = fVar32;
  auVar57._12_4_ = fVar30 * 0.0;
  auVar69._4_4_ = fVar29;
  auVar69._0_4_ = fVar28;
  auVar69._8_4_ = fVar32;
  auVar69._12_4_ = fVar30 * 0.0;
  auVar57 = NEON_ext(auVar57,auVar69,8,1);
  fVar27 = auVar57._0_4_ + auVar57._4_4_;
  fVar25 = fVar28 + fVar29 + fVar27;
  (**(code **)(*param_8 + 0x18))(param_8,&local_80,&local_b0,local_58);
  iVar47 = -(uint)(fVar25 + (float)*param_11 < (float)local_b0);
  iVar33 = -(uint)((float)*param_11 + local_58[0] < fVar25);
  iVar33 = CONCAT13((byte)((uint)iVar33 >> 0x18) | (byte)((uint)iVar47 >> 0x18),
                    CONCAT12((byte)((uint)iVar33 >> 0x10) | (byte)((uint)iVar47 >> 0x10),
                             CONCAT11((byte)((uint)iVar33 >> 8) | (byte)((uint)iVar47 >> 8),
                                      (byte)iVar33 | (byte)iVar47)));
  auVar36._0_4_ = -(uint)(iVar33 == -1);
  auVar36._4_4_ = -(uint)(iVar33 == -1);
  auVar36._8_4_ = -(uint)(iVar33 == -1);
  auVar36._12_4_ = -(uint)(iVar33 == -1);
  NEON_ext(auVar36,auVar36,8,1);
  if (CONCAT13((char)auVar36._12_4_,
               CONCAT12((char)auVar36._8_4_,CONCAT11((char)auVar36._4_4_,(char)auVar36._0_4_))) !=
      -1) {
    local_84 = 0;
    local_90 = CONCAT44(((fVar28 + fVar29 + fVar27) - (float)((ulong)local_b0 >> 0x20)) +
                        SUB164(ZEXT816(0xb4000000b4000000),4),
                        (fVar25 - (float)local_b0) + SUB164(ZEXT816(0xb4000000b4000000),0));
    uStack_98 = uStack_78;
    local_a0 = local_80;
    uVar17 = FUN_0028c2e0(param_6,param_7,param_8,param_11,&local_90,local_58,&local_a0,&local_84);
    if (((uVar17 & 1) != 0) &&
       (uVar17 = FUN_0028c650((int)*(undefined8 *)(param_2 + 0x30),
                              *(undefined1 (*) [16])(param_2 + 0x40),
                              *(undefined1 (*) [16])(param_2 + 0x50),param_5,param_6,param_7,param_8
                              ,param_11,&local_90,&local_a0,&local_84), (uVar17 & 1) != 0)) {
      fVar29 = (float)*(undefined8 *)(param_2 + 0x38);
      fVar28 = (float)((ulong)*(undefined8 *)(param_2 + 0x38) >> 0x20);
      fVar25 = (float)*(undefined8 *)(param_2 + 0x30);
      fVar27 = (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20);
      auVar37._0_4_ = *(float *)(param_2 + 0x40) - fVar25;
      auVar37._4_4_ = *(float *)(param_2 + 0x44) - fVar27;
      auVar37._8_4_ = *(float *)(param_2 + 0x48) - fVar29;
      auVar37._12_4_ = *(float *)(param_2 + 0x4c) - fVar28;
      fVar25 = *(float *)(param_2 + 0x50) - fVar25;
      fVar27 = *(float *)(param_2 + 0x54) - fVar27;
      fVar29 = *(float *)(param_2 + 0x58) - fVar29;
      fVar28 = *(float *)(param_2 + 0x5c) - fVar28;
      auVar57 = NEON_ext(auVar37,auVar37,8,1);
      auVar5._4_4_ = fVar27;
      auVar5._0_4_ = fVar25;
      auVar5._8_4_ = fVar29;
      auVar5._12_4_ = fVar28;
      auVar6._4_4_ = fVar27;
      auVar6._0_4_ = fVar25;
      auVar6._8_4_ = fVar29;
      auVar6._12_4_ = fVar28;
      auVar69 = NEON_ext(auVar5,auVar6,8,1);
      fVar28 = auVar37._0_4_ * fVar27 - auVar37._4_4_ * fVar25;
      uVar34 = NEON_ext(CONCAT44(auVar37._4_4_ * fVar29 - auVar37._8_4_ * fVar27,fVar28),
                        CONCAT44(auVar57._4_4_ * fVar27 - auVar37._4_4_ * auVar69._4_4_,
                                 auVar57._0_4_ * fVar25 - auVar37._0_4_ * auVar69._0_4_),4,1);
      fVar32 = (float)uVar34;
      fVar29 = fVar32 * fVar32;
      fVar31 = (float)((ulong)uVar34 >> 0x20);
      fVar30 = fVar31 * fVar31;
      auVar7._4_4_ = fVar30;
      auVar7._0_4_ = fVar29;
      auVar7._8_4_ = fVar28 * fVar28;
      auVar7._12_4_ = 0;
      auVar8._4_4_ = fVar30;
      auVar8._0_4_ = fVar29;
      auVar8._8_4_ = fVar28 * fVar28;
      auVar8._12_4_ = 0;
      auVar57 = NEON_ext(auVar7,auVar8,8,1);
      fVar27 = auVar57._0_4_ + auVar57._4_4_;
      fVar25 = fVar29 + fVar30 + fVar27;
      fVar27 = fVar29 + fVar30 + fVar27;
      uVar34 = NEON_frsqrte(CONCAT44(fVar27,fVar25),4);
      fVar29 = (float)uVar34;
      fVar30 = (float)((ulong)uVar34 >> 0x20);
      uVar34 = NEON_frsqrts(CONCAT44(fVar30 * fVar30,fVar29 * fVar29),CONCAT44(fVar27,fVar25),4);
      fVar29 = fVar29 * (float)uVar34;
      fVar30 = fVar30 * (float)((ulong)uVar34 >> 0x20);
      uVar34 = NEON_frsqrts(CONCAT44(fVar30 * fVar30,fVar29 * fVar29),CONCAT44(fVar27,fVar25),4);
      fVar29 = fVar29 * (float)uVar34;
      fVar30 = fVar30 * (float)((ulong)uVar34 >> 0x20);
      uVar34 = NEON_frsqrts(CONCAT44(fVar30 * fVar30,fVar29 * fVar29),CONCAT44(fVar27,fVar25),4);
      fVar29 = fVar29 * (float)uVar34;
      fVar30 = fVar30 * (float)((ulong)uVar34 >> 0x20);
      uVar34 = NEON_frsqrts(CONCAT44(fVar30 * fVar30,fVar29 * fVar29),CONCAT44(fVar27,fVar25),4);
      uVar17 = CONCAT44(fVar27 * fVar30 * (float)((ulong)uVar34 >> 0x20),
                        fVar25 * fVar29 * (float)uVar34);
      uVar17 = uVar17 ^ (uVar17 ^ CONCAT44(fVar27,fVar25)) &
                        CONCAT44(-(uint)(fVar25 == 0.0),-(uint)(fVar25 == 0.0));
      uVar34 = NEON_frecpe(uVar17,4);
      uVar61 = NEON_frecps(uVar17,uVar34,4);
      fVar25 = (float)uVar34 * (float)uVar61;
      fVar27 = (float)((ulong)uVar34 >> 0x20) * (float)((ulong)uVar61 >> 0x20);
      uVar34 = NEON_frecps(uVar17,CONCAT44(fVar27,fVar25),4);
      fVar25 = fVar25 * (float)uVar34;
      fVar27 = fVar27 * (float)((ulong)uVar34 >> 0x20);
      uVar34 = NEON_frecps(uVar17,CONCAT44(fVar27,fVar25),4);
      fVar25 = fVar25 * (float)uVar34;
      fVar27 = fVar27 * (float)((ulong)uVar34 >> 0x20);
      uVar34 = NEON_frecps(uVar17,CONCAT44(fVar27,fVar25),4);
      fVar25 = fVar25 * (float)uVar34;
      uVar34 = NEON_frecps(uVar17,CONCAT44(fVar27 * (float)((ulong)uVar34 >> 0x20),fVar25),4);
      fVar25 = fVar25 * (float)uVar34;
      fVar32 = fVar32 * fVar25;
      fVar31 = fVar31 * fVar25;
      fVar28 = fVar28 * fVar25;
      uStack_78 = (ulong)(uint)fVar28;
      local_80 = CONCAT44(fVar31,fVar32);
      if (local_84 == 1) {
        auVar39._0_4_ = fVar32 * -(float)local_a0;
        auVar39._4_4_ = fVar31 * -local_a0._4_4_;
        auVar39._8_4_ = fVar28 * -(float)uStack_98;
        auVar39._12_4_ = 0;
        auVar57 = NEON_ext(auVar39,auVar39,8,1);
        if (auVar39._0_4_ + auVar39._4_4_ + auVar57._0_4_ + auVar57._4_4_ <= 0.70710677) {
          if (((param_5 & 7) == 0) || (*(char *)(param_1 + 0x11d9) != '\0')) {
            lVar23 = *(long *)(param_1 + 0xe98);
            uVar20 = *(uint *)(lVar23 + 0x1110);
            uVar21 = uVar20 + 0xf;
            if ((*(uint *)(lVar23 + 0x1114) & 0x7fffffff) < uVar21) {
              FUN_0022bf00(lVar23,uVar21);
              lVar23 = *(long *)(param_1 + 0xe98);
              uVar20 = *(uint *)(lVar23 + 0x1110);
            }
            puVar1 = (undefined8 *)(*(long *)(lVar23 + 0x1108) + (ulong)uVar20 * 4);
            *(uint *)(lVar23 + 0x1110) = uVar21;
            *(undefined4 *)(puVar1 + 6) = param_3;
            *(float *)((long)puVar1 + 0x34) = local_58[0];
            *(char *)(puVar1 + 7) = (char)param_5;
            *(undefined4 *)((long)puVar1 + 0x24) = *param_4;
            *(undefined4 *)(puVar1 + 5) = param_4[1];
            *(undefined4 *)((long)puVar1 + 0x2c) = param_4[2];
            uVar34 = *(undefined8 *)(param_2 + 0x38);
            *puVar1 = *(undefined8 *)(param_2 + 0x30);
            *(int *)(puVar1 + 1) = (int)uVar34;
            uVar34 = *(undefined8 *)(param_2 + 0x48);
            *(undefined8 *)((long)puVar1 + 0xc) = *(undefined8 *)(param_2 + 0x40);
            *(int *)((long)puVar1 + 0x14) = (int)uVar34;
            uVar34 = *(undefined8 *)(param_2 + 0x58);
            puVar1[3] = *(undefined8 *)(param_2 + 0x50);
            *(int *)(puVar1 + 4) = (int)uVar34;
          }
          bVar3 = true;
          bVar18 = 1;
          goto LAB_0028bc84;
        }
        lVar23 = *(long *)(param_6 + 0x18);
        param_12[1] = (ulong)(uint)fVar28;
        *param_12 = CONCAT44(fVar31,fVar32);
        pfVar19 = (float *)(lVar23 + (ulong)(uint)local_58[0] * 0x14);
LAB_0028bf4c:
        FUN_0028cba0(param_2,param_3,param_6,pfVar19,param_8,param_9,param_10,param_11,&local_80,
                     *(undefined8 *)(param_1 + 0xea0));
      }
      else {
        if (local_84 == 0) {
          pfVar22 = (float *)param_8[5];
          pfVar19 = *(float **)(param_6 + 0x18);
          auVar58._0_4_ = (float)local_a0 * pfVar22[4];
          auVar58._4_4_ = local_a0._4_4_ * pfVar22[5];
          auVar58._8_4_ = (float)uStack_98 * pfVar22[6];
          auVar58._12_4_ = uStack_98._4_4_ * pfVar22[7];
          auVar50._0_4_ = (float)local_a0 * *pfVar22;
          auVar50._4_4_ = local_a0._4_4_ * pfVar22[1];
          auVar50._8_4_ = (float)uStack_98 * pfVar22[2];
          auVar50._12_4_ = uStack_98._4_4_ * pfVar22[3];
          auVar57 = NEON_ext(auVar50,auVar50,8,1);
          fVar25 = auVar57._0_4_ + auVar57._4_4_;
          auVar57 = NEON_ext(auVar58,auVar58,8,1);
          fVar29 = auVar57._0_4_ + auVar57._4_4_;
          auVar38._0_4_ = (float)local_a0 * pfVar22[8];
          auVar38._4_4_ = local_a0._4_4_ * pfVar22[9];
          auVar38._8_4_ = (float)uStack_98 * pfVar22[10];
          auVar38._12_4_ = uStack_98._4_4_ * pfVar22[0xb];
          auVar57 = NEON_ext(auVar38,auVar38,8,1);
          fVar27 = auVar38._0_4_ + auVar38._4_4_ + auVar57._0_4_ + auVar57._4_4_;
          uVar34 = NEON_ext(CONCAT44(auVar50._0_4_ + auVar50._4_4_ + fVar25,
                                     auVar50._0_4_ + auVar50._4_4_ + fVar25),
                            CONCAT44(auVar58._0_4_ + auVar58._4_4_ + fVar29,
                                     auVar58._0_4_ + auVar58._4_4_ + fVar29),4,1);
          fVar29 = (float)uVar34;
          auVar51._0_4_ = *pfVar19 * fVar29;
          fVar30 = (float)((ulong)uVar34 >> 0x20);
          auVar51._4_4_ = pfVar19[1] * fVar30;
          auVar51._8_4_ = pfVar19[2] * fVar27;
          auVar51._12_4_ = 0;
          auVar57 = NEON_ext(auVar51,auVar51,8,1);
          fVar25 = auVar51._0_4_ + auVar51._4_4_ + auVar57._0_4_ + auVar57._4_4_;
          if (*(uint *)(param_6 + 0x10) < 2) {
            uVar21 = 0;
          }
          else {
            uVar17 = 1;
            uVar20 = 0;
            pfVar22 = pfVar19;
            do {
              auVar52._0_4_ = pfVar22[5] * fVar29;
              auVar52._4_4_ = pfVar22[6] * fVar30;
              auVar52._8_4_ = pfVar22[7] * fVar27;
              auVar52._12_4_ = 0;
              auVar57 = NEON_ext(auVar52,auVar52,8,1);
              fVar26 = auVar52._0_4_ + auVar52._4_4_ + auVar57._0_4_ + auVar57._4_4_;
              bVar3 = fVar26 < fVar25;
              fVar25 = (float)((uint)fVar25 ^ ((uint)fVar25 ^ (uint)fVar26) & -(uint)bVar3);
              uVar21 = (uint)uVar17;
              if (!bVar3) {
                uVar21 = uVar20;
              }
              uVar17 = uVar17 + 1;
              uVar20 = uVar21;
              pfVar22 = pfVar22 + 5;
            } while (*(uint *)(param_6 + 0x10) != uVar17);
          }
          uVar20 = *(uint *)(param_6 + 0x14);
          if (uVar20 != 0) {
            fVar29 = -fVar29;
            fVar30 = -fVar30;
            fVar27 = -fVar27;
            fVar25 = fVar25 * fVar25;
            lVar23 = *(long *)(param_6 + 0x30);
            uVar17 = 0;
            uVar56 = 0xffffffff;
            uVar24 = 1;
            do {
              while( true ) {
                iVar33 = (int)uVar56;
                pfVar22 = pfVar19 + (ulong)*(byte *)(lVar23 + (ulong)(uVar24 - 1)) * 5;
                pfVar4 = pfVar19 + (ulong)*(byte *)(lVar23 + (ulong)uVar24) * 5;
                fVar26 = *pfVar22 + *pfVar4;
                fVar60 = pfVar22[1] + pfVar4[1];
                fVar65 = pfVar22[2] + pfVar4[2];
                auVar62._0_4_ = fVar26 * fVar26;
                auVar62._4_4_ = fVar60 * fVar60;
                auVar62._8_4_ = fVar65 * fVar65;
                auVar62._12_4_ = 0;
                auVar57 = NEON_ext(auVar62,auVar62,8,1);
                fVar46 = auVar57._0_4_ + auVar57._4_4_;
                auVar67._0_4_ = fVar29 * fVar26;
                auVar67._4_4_ = fVar30 * fVar60;
                auVar67._8_4_ = fVar27 * fVar65;
                auVar67._12_4_ = 0;
                fVar26 = auVar62._0_4_ + auVar62._4_4_ + fVar46;
                uVar34 = CONCAT44(auVar62._0_4_ + auVar62._4_4_ + fVar46,fVar26);
                auVar57 = NEON_ext(auVar67,auVar67,8,1);
                fVar46 = auVar67._0_4_ + auVar67._4_4_ + auVar57._0_4_ + auVar57._4_4_;
                bVar3 = 0.0 <= fVar46 && fVar25 * fVar26 < fVar46 * fVar46;
                auVar68._0_4_ = -(uint)bVar3;
                auVar68._4_4_ = -(uint)bVar3;
                auVar68._8_4_ = -(uint)bVar3;
                auVar68._12_4_ = -(uint)bVar3;
                NEON_ext(auVar68,auVar68,8,1);
                if (CONCAT13((char)auVar68._12_4_,
                             CONCAT12((char)auVar68._8_4_,
                                      CONCAT11((char)auVar68._4_4_,(char)auVar68._0_4_))) == -1)
                break;
                uVar17 = uVar17 + 1;
                uVar24 = uVar24 + 2;
                if (uVar20 == uVar17) goto LAB_0028bed8;
              }
              uVar61 = NEON_frecpe(uVar34,4);
              uVar66 = NEON_frecps(uVar34,uVar61,4);
              fVar25 = (float)uVar61 * (float)uVar66;
              fVar26 = (float)((ulong)uVar61 >> 0x20) * (float)((ulong)uVar66 >> 0x20);
              uVar61 = NEON_frecps(uVar34,CONCAT44(fVar26,fVar25),4);
              fVar25 = fVar25 * (float)uVar61;
              fVar26 = fVar26 * (float)((ulong)uVar61 >> 0x20);
              uVar61 = NEON_frecps(uVar34,CONCAT44(fVar26,fVar25),4);
              fVar25 = fVar25 * (float)uVar61;
              fVar26 = fVar26 * (float)((ulong)uVar61 >> 0x20);
              uVar61 = NEON_frecps(uVar34,CONCAT44(fVar26,fVar25),4);
              fVar25 = fVar25 * (float)uVar61;
              uVar34 = NEON_frecps(uVar34,CONCAT44(fVar26 * (float)((ulong)uVar61 >> 0x20),fVar25),4
                                  );
              fVar25 = fVar46 * fVar46 * fVar25 * (float)uVar34;
              uVar56 = uVar17 & 0xffffffff;
              iVar33 = (int)uVar17;
              uVar17 = uVar17 + 1;
              uVar24 = uVar24 + 2;
            } while (uVar20 != uVar17);
LAB_0028bed8:
            if (iVar33 != -1) {
              bVar2 = *(byte *)(lVar23 + (ulong)(uint)(iVar33 << 1));
              bVar18 = *(byte *)(lVar23 + (ulong)(iVar33 << 1 | 1));
              pfVar22 = pfVar19 + (ulong)bVar2 * 5;
              pfVar4 = pfVar19 + (ulong)bVar18 * 5;
              auVar54._0_4_ = fVar29 * *pfVar22;
              auVar54._4_4_ = fVar30 * pfVar22[1];
              auVar54._8_4_ = fVar27 * pfVar22[2];
              auVar54._12_4_ = 0;
              auVar69 = NEON_ext(auVar54,auVar54,8,1);
              auVar43._0_4_ = fVar29 * *pfVar4;
              auVar43._4_4_ = fVar30 * pfVar4[1];
              auVar43._8_4_ = fVar27 * pfVar4[2];
              auVar43._12_4_ = 0;
              auVar57 = NEON_ext(auVar43,auVar43,8,1);
              if (auVar54._0_4_ + auVar54._4_4_ + auVar69._0_4_ + auVar69._4_4_ <=
                  auVar43._0_4_ + auVar43._4_4_ + auVar57._0_4_ + auVar57._4_4_) {
                bVar2 = bVar18;
              }
              uVar21 = (uint)bVar2;
            }
          }
          param_12[1] = (ulong)(uint)fVar28;
          *param_12 = CONCAT44(fVar31,fVar32);
          pfVar19 = pfVar19 + (long)(int)uVar21 * 5;
          goto LAB_0028bf4c;
        }
        pfVar22 = (float *)param_8[5];
        auVar53._0_4_ = (float)local_a0 * pfVar22[4];
        auVar53._4_4_ = local_a0._4_4_ * pfVar22[5];
        auVar53._8_4_ = (float)uStack_98 * pfVar22[6];
        auVar53._12_4_ = uStack_98._4_4_ * pfVar22[7];
        auVar40._0_4_ = (float)local_a0 * *pfVar22;
        auVar40._4_4_ = local_a0._4_4_ * pfVar22[1];
        auVar40._8_4_ = (float)uStack_98 * pfVar22[2];
        auVar40._12_4_ = uStack_98._4_4_ * pfVar22[3];
        auVar57 = NEON_ext(auVar40,auVar40,8,1);
        fVar25 = auVar57._0_4_ + auVar57._4_4_;
        auVar57 = NEON_ext(auVar53,auVar53,8,1);
        fVar28 = auVar57._0_4_ + auVar57._4_4_;
        pfVar19 = *(float **)(param_6 + 0x18);
        fVar27 = (float)local_a0 * pfVar22[8];
        fVar29 = local_a0._4_4_ * pfVar22[9];
        auVar9._4_4_ = fVar29;
        auVar9._0_4_ = fVar27;
        auVar9._8_4_ = (float)uStack_98 * pfVar22[10];
        auVar9._12_4_ = uStack_98._4_4_ * pfVar22[0xb];
        auVar10._4_4_ = fVar29;
        auVar10._0_4_ = fVar27;
        auVar10._8_4_ = (float)uStack_98 * pfVar22[10];
        auVar10._12_4_ = uStack_98._4_4_ * pfVar22[0xb];
        auVar57 = NEON_ext(auVar9,auVar10,8,1);
        fVar27 = fVar27 + fVar29 + auVar57._0_4_ + auVar57._4_4_;
        uVar34 = NEON_ext(CONCAT44(auVar40._0_4_ + auVar40._4_4_ + fVar25,
                                   auVar40._0_4_ + auVar40._4_4_ + fVar25),
                          CONCAT44(auVar53._0_4_ + auVar53._4_4_ + fVar28,
                                   auVar53._0_4_ + auVar53._4_4_ + fVar28),4,1);
        fVar28 = (float)uVar34;
        fVar29 = (float)((ulong)uVar34 >> 0x20);
        auVar41._0_4_ = *pfVar19 * fVar28;
        auVar41._4_4_ = pfVar19[1] * fVar29;
        auVar41._8_4_ = pfVar19[2] * fVar27;
        auVar41._12_4_ = 0;
        auVar57 = NEON_ext(auVar41,auVar41,8,1);
        fVar25 = auVar41._0_4_ + auVar41._4_4_ + auVar57._0_4_ + auVar57._4_4_;
        if (*(uint *)(param_6 + 0x10) < 2) {
          local_58[0] = 0.0;
        }
        else {
          uVar17 = 1;
          fVar32 = 0.0;
          pfVar22 = pfVar19;
          do {
            auVar42._0_4_ = pfVar22[5] * fVar28;
            auVar42._4_4_ = pfVar22[6] * fVar29;
            auVar42._8_4_ = pfVar22[7] * fVar27;
            auVar42._12_4_ = 0;
            auVar57 = NEON_ext(auVar42,auVar42,8,1);
            fVar30 = auVar42._0_4_ + auVar42._4_4_ + auVar57._0_4_ + auVar57._4_4_;
            bVar3 = fVar30 < fVar25;
            fVar25 = (float)((uint)fVar25 ^ ((uint)fVar25 ^ (uint)fVar30) & -(uint)bVar3);
            local_58[0] = (float)uVar17;
            if (!bVar3) {
              local_58[0] = fVar32;
            }
            uVar17 = uVar17 + 1;
            fVar32 = local_58[0];
            pfVar22 = pfVar22 + 5;
          } while (*(uint *)(param_6 + 0x10) != uVar17);
        }
        uVar21 = *(uint *)(param_6 + 0x14);
        if (uVar21 != 0) {
          fVar28 = -fVar28;
          fVar29 = -fVar29;
          fVar27 = -fVar27;
          fVar25 = fVar25 * fVar25;
          lVar23 = *(long *)(param_6 + 0x30);
          uVar17 = 0;
          uVar56 = 0xffffffff;
          uVar20 = 1;
          do {
            while( true ) {
              iVar33 = (int)uVar56;
              pfVar22 = pfVar19 + (ulong)*(byte *)(lVar23 + (ulong)(uVar20 - 1)) * 5;
              pfVar4 = pfVar19 + (ulong)*(byte *)(lVar23 + (ulong)uVar20) * 5;
              fVar32 = *pfVar22 + *pfVar4;
              fVar31 = pfVar22[1] + pfVar4[1];
              fVar26 = pfVar22[2] + pfVar4[2];
              auVar59._0_4_ = fVar32 * fVar32;
              auVar59._4_4_ = fVar31 * fVar31;
              auVar59._8_4_ = fVar26 * fVar26;
              auVar59._12_4_ = 0;
              auVar57 = NEON_ext(auVar59,auVar59,8,1);
              fVar30 = auVar57._0_4_ + auVar57._4_4_;
              auVar63._0_4_ = fVar28 * fVar32;
              auVar63._4_4_ = fVar29 * fVar31;
              auVar63._8_4_ = fVar27 * fVar26;
              auVar63._12_4_ = 0;
              fVar32 = auVar59._0_4_ + auVar59._4_4_ + fVar30;
              uVar34 = CONCAT44(auVar59._0_4_ + auVar59._4_4_ + fVar30,fVar32);
              auVar57 = NEON_ext(auVar63,auVar63,8,1);
              fVar30 = auVar63._0_4_ + auVar63._4_4_ + auVar57._0_4_ + auVar57._4_4_;
              bVar3 = 0.0 <= fVar30 && fVar25 * fVar32 < fVar30 * fVar30;
              auVar64._0_4_ = -(uint)bVar3;
              auVar64._4_4_ = -(uint)bVar3;
              auVar64._8_4_ = -(uint)bVar3;
              auVar64._12_4_ = -(uint)bVar3;
              NEON_ext(auVar64,auVar64,8,1);
              if (CONCAT13((char)auVar64._12_4_,
                           CONCAT12((char)auVar64._8_4_,
                                    CONCAT11((char)auVar64._4_4_,(char)auVar64._0_4_))) == -1)
              break;
              uVar17 = uVar17 + 1;
              uVar20 = uVar20 + 2;
              if (uVar21 == uVar17) goto LAB_0028c12c;
            }
            uVar61 = NEON_frecpe(uVar34,4);
            uVar66 = NEON_frecps(uVar34,uVar61,4);
            fVar25 = (float)uVar61 * (float)uVar66;
            fVar32 = (float)((ulong)uVar61 >> 0x20) * (float)((ulong)uVar66 >> 0x20);
            uVar61 = NEON_frecps(uVar34,CONCAT44(fVar32,fVar25),4);
            fVar25 = fVar25 * (float)uVar61;
            fVar32 = fVar32 * (float)((ulong)uVar61 >> 0x20);
            uVar61 = NEON_frecps(uVar34,CONCAT44(fVar32,fVar25),4);
            fVar25 = fVar25 * (float)uVar61;
            fVar32 = fVar32 * (float)((ulong)uVar61 >> 0x20);
            uVar61 = NEON_frecps(uVar34,CONCAT44(fVar32,fVar25),4);
            fVar25 = fVar25 * (float)uVar61;
            uVar34 = NEON_frecps(uVar34,CONCAT44(fVar32 * (float)((ulong)uVar61 >> 0x20),fVar25),4);
            fVar25 = fVar30 * fVar30 * fVar25 * (float)uVar34;
            uVar56 = uVar17 & 0xffffffff;
            iVar33 = (int)uVar17;
            uVar17 = uVar17 + 1;
            uVar20 = uVar20 + 2;
          } while (uVar21 != uVar17);
LAB_0028c12c:
          if (iVar33 != -1) {
            bVar2 = *(byte *)(lVar23 + (ulong)(uint)(iVar33 << 1));
            bVar18 = *(byte *)(lVar23 + (ulong)(iVar33 << 1 | 1));
            pfVar22 = pfVar19 + (ulong)bVar2 * 5;
            pfVar4 = pfVar19 + (ulong)bVar18 * 5;
            auVar44._0_4_ = fVar28 * *pfVar22;
            auVar44._4_4_ = fVar29 * pfVar22[1];
            auVar44._8_4_ = fVar27 * pfVar22[2];
            auVar44._12_4_ = 0;
            auVar69 = NEON_ext(auVar44,auVar44,8,1);
            fVar28 = fVar28 * *pfVar4;
            fVar29 = fVar29 * pfVar4[1];
            auVar11._4_4_ = fVar29;
            auVar11._0_4_ = fVar28;
            auVar11._8_4_ = fVar27 * pfVar4[2];
            auVar11._12_4_ = 0;
            auVar12._4_4_ = fVar29;
            auVar12._0_4_ = fVar28;
            auVar12._8_4_ = fVar27 * pfVar4[2];
            auVar12._12_4_ = 0;
            auVar57 = NEON_ext(auVar11,auVar12,8,1);
            if (auVar44._0_4_ + auVar44._4_4_ + auVar69._0_4_ + auVar69._4_4_ <=
                fVar28 + fVar29 + auVar57._0_4_ + auVar57._4_4_) {
              bVar2 = bVar18;
            }
            local_58[0] = (float)(uint)bVar2;
          }
        }
        pfVar19 = pfVar19 + (ulong)(uint)local_58[0] * 5;
        pfVar22 = (float *)param_8[6];
        fVar28 = *pfVar19;
        fVar29 = pfVar19[1];
        fVar32 = pfVar19[2];
        auVar45._0_4_ = *pfVar22 * fVar28;
        auVar45._4_4_ = pfVar22[1] * fVar29;
        auVar45._8_4_ = pfVar22[2] * fVar32;
        auVar45._12_4_ = pfVar22[3] * 0.0;
        auVar57 = NEON_ext(auVar45,auVar45,8,1);
        auVar55._0_4_ = fVar28 * pfVar22[4];
        auVar55._4_4_ = fVar29 * pfVar22[5];
        auVar55._8_4_ = fVar32 * pfVar22[6];
        auVar55._12_4_ = pfVar22[7] * 0.0;
        fVar25 = auVar57._0_4_ + auVar57._4_4_;
        auVar57 = NEON_ext(auVar55,auVar55,8,1);
        fVar27 = auVar57._0_4_ + auVar57._4_4_;
        fVar28 = fVar28 * pfVar22[8];
        fVar29 = fVar29 * pfVar22[9];
        auVar13._4_4_ = fVar29;
        auVar13._0_4_ = fVar28;
        auVar13._8_4_ = fVar32 * pfVar22[10];
        auVar13._12_4_ = pfVar22[0xb] * 0.0;
        auVar14._4_4_ = fVar29;
        auVar14._0_4_ = fVar28;
        auVar14._8_4_ = fVar32 * pfVar22[10];
        auVar14._12_4_ = pfVar22[0xb] * 0.0;
        auVar57 = NEON_ext(auVar13,auVar14,8,1);
        uVar34 = NEON_ext(CONCAT44(auVar45._0_4_ + auVar45._4_4_ + fVar25,
                                   auVar45._0_4_ + auVar45._4_4_ + fVar25),
                          CONCAT44(auVar55._0_4_ + auVar55._4_4_ + fVar27,
                                   auVar55._0_4_ + auVar55._4_4_ + fVar27),4,1);
        fVar25 = fVar28 + fVar29 + auVar57._0_4_ + auVar57._4_4_;
        fVar30 = (float)uVar34;
        fVar29 = fVar30 * fVar30;
        fVar31 = (float)((ulong)uVar34 >> 0x20);
        fVar32 = fVar31 * fVar31;
        auVar15._4_4_ = fVar32;
        auVar15._0_4_ = fVar29;
        auVar15._8_4_ = fVar25 * fVar25;
        auVar15._12_4_ = 0;
        auVar16._4_4_ = fVar32;
        auVar16._0_4_ = fVar29;
        auVar16._8_4_ = fVar25 * fVar25;
        auVar16._12_4_ = 0;
        auVar57 = NEON_ext(auVar15,auVar16,8,1);
        fVar28 = auVar57._0_4_ + auVar57._4_4_;
        fVar27 = fVar29 + fVar32 + fVar28;
        fVar28 = fVar29 + fVar32 + fVar28;
        uVar34 = NEON_frsqrte(CONCAT44(fVar28,fVar27),4);
        fVar29 = (float)uVar34;
        fVar32 = (float)((ulong)uVar34 >> 0x20);
        uVar34 = NEON_frsqrts(CONCAT44(fVar32 * fVar32,fVar29 * fVar29),CONCAT44(fVar28,fVar27),4);
        fVar29 = fVar29 * (float)uVar34;
        fVar32 = fVar32 * (float)((ulong)uVar34 >> 0x20);
        uVar34 = NEON_frsqrts(CONCAT44(fVar32 * fVar32,fVar29 * fVar29),CONCAT44(fVar28,fVar27),4);
        fVar29 = fVar29 * (float)uVar34;
        fVar32 = fVar32 * (float)((ulong)uVar34 >> 0x20);
        uVar34 = NEON_frsqrts(CONCAT44(fVar32 * fVar32,fVar29 * fVar29),CONCAT44(fVar28,fVar27),4);
        fVar29 = fVar29 * (float)uVar34;
        fVar32 = fVar32 * (float)((ulong)uVar34 >> 0x20);
        uVar34 = NEON_frsqrts(CONCAT44(fVar32 * fVar32,fVar29 * fVar29),CONCAT44(fVar28,fVar27),4);
        uVar17 = CONCAT44(fVar28 * fVar32 * (float)((ulong)uVar34 >> 0x20),
                          fVar27 * fVar29 * (float)uVar34);
        uVar17 = uVar17 ^ (uVar17 ^ CONCAT44(fVar28,fVar27)) &
                          CONCAT44(-(uint)(fVar27 == 0.0),-(uint)(fVar27 == 0.0));
        uVar34 = NEON_frecpe(uVar17,4);
        uVar61 = NEON_frecps(uVar17,uVar34,4);
        fVar27 = (float)uVar34 * (float)uVar61;
        fVar28 = (float)((ulong)uVar34 >> 0x20) * (float)((ulong)uVar61 >> 0x20);
        uVar34 = NEON_frecps(uVar17,CONCAT44(fVar28,fVar27),4);
        fVar27 = fVar27 * (float)uVar34;
        fVar28 = fVar28 * (float)((ulong)uVar34 >> 0x20);
        uVar34 = NEON_frecps(uVar17,CONCAT44(fVar28,fVar27),4);
        fVar27 = fVar27 * (float)uVar34;
        fVar28 = fVar28 * (float)((ulong)uVar34 >> 0x20);
        uVar34 = NEON_frecps(uVar17,CONCAT44(fVar28,fVar27),4);
        fVar27 = fVar27 * (float)uVar34;
        uVar34 = NEON_frecps(uVar17,CONCAT44(fVar28 * (float)((ulong)uVar34 >> 0x20),fVar27),4);
        fVar27 = fVar27 * (float)uVar34;
        uStack_a8 = (ulong)(uint)(fVar25 * fVar27);
        local_b0 = CONCAT44(fVar31 * fVar27,fVar30 * fVar27);
        param_12[1] = (ulong)(uint)-(fVar25 * fVar27);
        *param_12 = CONCAT44(-(fVar31 * fVar27),-(fVar30 * fVar27));
        FUN_0028db00(param_6,pfVar19,param_2,param_3,param_5,param_8,param_9,param_10,param_11,
                     &local_b0,*(undefined8 *)(param_1 + 0xea0));
      }
      bVar3 = false;
      bVar18 = 1;
      goto LAB_0028bc84;
    }
  }
  bVar18 = 0;
  bVar3 = true;
LAB_0028bc84:
  return !bVar3 | bVar18;
}


