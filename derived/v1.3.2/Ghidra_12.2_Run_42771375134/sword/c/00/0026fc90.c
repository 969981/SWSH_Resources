/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0026fc90; name: FUN_0026fc90
 */


undefined8 FUN_0026fc90(long param_1,undefined8 *param_2,undefined4 param_3,uint param_4)

{
  uint *puVar1;
  long lVar2;
  void *pvVar3;
  void *__dest;
  long lVar4;
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
  undefined8 uVar17;
  uint uVar18;
  ulong uVar19;
  undefined4 uVar20;
  float *pfVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  long *plVar27;
  uint uVar28;
  int iVar29;
  uint *puVar30;
  uint uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  ulong uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined8 uVar44;
  float fVar46;
  undefined8 uVar45;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  undefined8 local_d0;
  ulong uStack_c8;
  float local_c0 [2];
  float afStack_b8 [2];
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  float local_68 [2];
  
  uStack_80 = *param_2;
  local_90 = *(undefined8 *)((long)param_2 + 0xc);
  fVar51 = *(float *)(param_2 + 1);
  uStack_78 = (ulong)(uint)fVar51;
  fVar57 = *(float *)((long)param_2 + 0x14);
  uStack_88 = (ulong)(uint)fVar57;
  fVar49 = (float)uStack_80;
  fVar55 = (float)local_90;
  fVar32 = fVar55 - fVar49;
  fVar50 = (float)((ulong)uStack_80 >> 0x20);
  fVar56 = (float)((ulong)local_90 >> 0x20);
  fVar33 = fVar56 - fVar50;
  fVar34 = fVar57 - fVar51;
  fVar52 = *(float *)(param_2 + 3);
  auVar41._4_4_ = fVar33;
  auVar41._0_4_ = fVar32;
  auVar41._8_4_ = fVar34;
  auVar41._12_4_ = 0;
  auVar47._4_4_ = fVar33;
  auVar47._0_4_ = fVar32;
  auVar47._8_4_ = fVar34;
  auVar47._12_4_ = 0;
  auVar41 = NEON_ext(auVar41,auVar47,8,1);
  fVar53 = *(float *)((long)param_2 + 0x1c);
  local_a0 = CONCAT44(fVar53,fVar52);
  fVar54 = *(float *)(param_2 + 4);
  uStack_98 = (ulong)(uint)fVar54;
  auVar35._0_4_ = fVar52 - fVar49;
  auVar35._4_4_ = fVar53 - fVar50;
  auVar35._8_4_ = fVar54 - fVar51;
  auVar35._12_4_ = 0;
  auVar47 = NEON_ext(auVar35,auVar35,8,1);
  fStack_e8 = fVar32 * auVar35._4_4_ - fVar33 * auVar35._0_4_;
  uVar44 = NEON_ext(CONCAT44(fVar33 * auVar35._8_4_ - fVar34 * auVar35._4_4_,fStack_e8),
                    CONCAT44(auVar41._4_4_ * auVar35._4_4_ - fVar33 * auVar47._4_4_,
                             auVar41._0_4_ * auVar35._0_4_ - fVar32 * auVar47._0_4_),4,1);
  local_f0 = (float)uVar44;
  fStack_ec = (float)((ulong)uVar44 >> 0x20);
  auVar36._0_4_ = local_f0 * local_f0;
  auVar36._4_4_ = fStack_ec * fStack_ec;
  auVar36._8_4_ = fStack_e8 * fStack_e8;
  auVar36._12_4_ = 0;
  auVar41 = NEON_ext(auVar36,auVar36,8,1);
  fVar33 = auVar41._0_4_ + auVar41._4_4_;
  fVar32 = auVar36._0_4_ + auVar36._4_4_ + fVar33;
  fVar33 = auVar36._0_4_ + auVar36._4_4_ + fVar33;
  uVar19 = CONCAT44(fVar33,fVar32);
  uVar44 = NEON_frsqrte(uVar19,4);
  fVar34 = (float)uVar44;
  fVar46 = (float)((ulong)uVar44 >> 0x20);
  uVar44 = NEON_frsqrts(CONCAT44(fVar46 * fVar46,fVar34 * fVar34),uVar19,4);
  fVar34 = fVar34 * (float)uVar44;
  fVar46 = fVar46 * (float)((ulong)uVar44 >> 0x20);
  uVar44 = NEON_frsqrts(CONCAT44(fVar46 * fVar46,fVar34 * fVar34),uVar19,4);
  fVar34 = fVar34 * (float)uVar44;
  fVar46 = fVar46 * (float)((ulong)uVar44 >> 0x20);
  uVar44 = NEON_frsqrts(CONCAT44(fVar46 * fVar46,fVar34 * fVar34),uVar19,4);
  fVar34 = fVar34 * (float)uVar44;
  fVar46 = fVar46 * (float)((ulong)uVar44 >> 0x20);
  uVar44 = NEON_frsqrts(CONCAT44(fVar46 * fVar46,fVar34 * fVar34),uVar19,4);
  uVar40 = CONCAT44(fVar33 * fVar46 * (float)((ulong)uVar44 >> 0x20),fVar32 * fVar34 * (float)uVar44
                   );
  uVar40 = uVar40 ^ (uVar40 ^ uVar19) & CONCAT44(-(uint)(fVar32 == 0.0),-(uint)(fVar32 == 0.0));
  uVar44 = NEON_frecpe(uVar40,4);
  uVar45 = NEON_frecps(uVar40,uVar44,4);
  fVar32 = (float)uVar44 * (float)uVar45;
  fVar33 = (float)((ulong)uVar44 >> 0x20) * (float)((ulong)uVar45 >> 0x20);
  uVar44 = NEON_frecps(uVar40,CONCAT44(fVar33,fVar32),4);
  fVar32 = fVar32 * (float)uVar44;
  fVar33 = fVar33 * (float)((ulong)uVar44 >> 0x20);
  uVar44 = NEON_frecps(uVar40,CONCAT44(fVar33,fVar32),4);
  fVar32 = fVar32 * (float)uVar44;
  fVar33 = fVar33 * (float)((ulong)uVar44 >> 0x20);
  uVar44 = NEON_frecps(uVar40,CONCAT44(fVar33,fVar32),4);
  fVar32 = fVar32 * (float)uVar44;
  uVar44 = NEON_frecps(uVar40,CONCAT44(fVar33 * (float)((ulong)uVar44 >> 0x20),fVar32),4);
  fVar32 = fVar32 * (float)uVar44;
  local_f0 = local_f0 * fVar32;
  fStack_ec = fStack_ec * fVar32;
  local_b0 = CONCAT44(fStack_ec,local_f0);
  fStack_e8 = fStack_e8 * fVar32;
  fVar32 = fVar49 * local_f0;
  fVar33 = fVar50 * fStack_ec;
  auVar5._4_4_ = fVar33;
  auVar5._0_4_ = fVar32;
  auVar5._8_4_ = fVar51 * fStack_e8;
  auVar5._12_4_ = 0;
  auVar6._4_4_ = fVar33;
  auVar6._0_4_ = fVar32;
  auVar6._8_4_ = fVar51 * fStack_e8;
  auVar6._12_4_ = 0;
  auVar41 = NEON_ext(auVar5,auVar6,8,1);
  uStack_a8 = (ulong)(uint)fStack_e8;
  pfVar21 = *(float **)(param_1 + 0xeb8);
  auVar37._0_4_ = local_f0 * *pfVar21;
  auVar37._4_4_ = fStack_ec * pfVar21[1];
  auVar37._8_4_ = fStack_e8 * pfVar21[2];
  auVar37._12_4_ = pfVar21[3] * 0.0;
  auVar47 = NEON_ext(auVar37,auVar37,8,1);
  if ((auVar37._0_4_ + auVar37._4_4_ + auVar47._0_4_ + auVar47._4_4_) -
      (fVar32 + fVar33 + auVar41._0_4_ + auVar41._4_4_) < 0.0) {
    return 0;
  }
  fVar32 = (float)FUN_0026f500(pfVar21 + 0xc,pfVar21 + 0x10,&uStack_80,&local_90,&local_a0,local_68,
                               afStack_b8,local_c0);
  if ((float)*(undefined8 *)(param_1 + 0xeb0) <= fVar32) {
    return 1;
  }
  lVar23 = param_1 + 0xeb0;
  if (1e-06 <= afStack_b8[0]) {
    auVar48._4_4_ = fStack_ec;
    auVar48._0_4_ = local_f0;
    auVar48._8_4_ = fStack_e8;
    auVar48._12_4_ = 0;
    if (afStack_b8[0] <= 0.999999) {
      if (1e-06 > local_c0[0]) {
        param_4 = param_4 >> 3 & 1;
        goto joined_r0x0027001c;
      }
      if (((param_4 >> 4 & 1) != 0) && (0.9999 <= afStack_b8[0] + local_c0[0])) goto LAB_0026feac;
    }
    else if ((param_4 & 0x18) != 0 || 1e-06 <= local_c0[0]) goto LAB_0026feac;
LAB_0027004c:
    uStack_c8 = auVar48._8_8_;
    local_d0 = auVar48._0_8_;
  }
  else {
    auVar48._4_4_ = fStack_ec;
    auVar48._0_4_ = local_f0;
    auVar48._8_4_ = fStack_e8;
    auVar48._12_4_ = 0;
    if (local_c0[0] < 1e-06) {
      param_4 = param_4 & 0x28;
    }
    else {
      if (0.999999 < local_c0[0]) {
        if ((param_4 & 0x30) != 0) goto LAB_0026feac;
        goto LAB_0027004c;
      }
      param_4 = (param_4 & 0xff) >> 5 & 1;
    }
joined_r0x0027001c:
    if (param_4 == 0) goto LAB_0027004c;
LAB_0026feac:
    if (fVar32 == 0.0) goto LAB_0027004c;
    lVar22 = *(long *)(param_1 + 0xeb8);
    fVar32 = (float)*(undefined8 *)(lVar22 + 0x38);
    fVar33 = (float)((ulong)*(undefined8 *)(lVar22 + 0x38) >> 0x20);
    local_f0 = (float)*(undefined8 *)(lVar22 + 0x30);
    fStack_ec = (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20);
    local_f0 = local_f0 + (*(float *)(lVar22 + 0x40) - local_f0) * local_68[0];
    fStack_ec = fStack_ec + (*(float *)(lVar22 + 0x44) - fStack_ec) * local_68[0];
    fVar32 = fVar32 + (*(float *)(lVar22 + 0x48) - fVar32) * local_68[0];
    fVar33 = fVar33 + (*(float *)(lVar22 + 0x4c) - fVar33) * local_68[0];
    auVar7._4_4_ = fStack_ec;
    auVar7._0_4_ = local_f0;
    auVar7._8_4_ = fVar32;
    auVar7._12_4_ = fVar33;
    auVar8._4_4_ = fStack_ec;
    auVar8._0_4_ = local_f0;
    auVar8._8_4_ = fVar32;
    auVar8._12_4_ = fVar33;
    auVar47 = NEON_ext(auVar7,auVar8,8,1);
    auVar42._0_4_ = fVar55 * afStack_b8[0] + fVar52 * local_c0[0];
    auVar42._4_4_ = fVar56 * afStack_b8[0] + fVar53 * local_c0[0];
    auVar42._8_4_ = fVar57 * afStack_b8[0] + fVar54 * local_c0[0];
    auVar42._12_4_ = afStack_b8[0] * 0.0 + 0.0;
    auVar41 = NEON_ext(auVar42,auVar42,8,1);
    uVar44 = NEON_fmov(0x3f800000,4);
    fVar32 = (float)uVar44 - (afStack_b8[0] + local_c0[0]);
    auVar38._0_4_ = fVar49 * fVar32 + auVar42._0_4_;
    auVar38._4_4_ = fVar50 * fVar32 + auVar42._4_4_;
    auVar38._8_4_ = fVar51 * fVar32 + auVar41._0_4_;
    auVar38._12_4_ = fVar32 * 0.0 + 0.0;
    auVar41 = NEON_ext(auVar38,auVar38,8,1);
    local_f0 = local_f0 - auVar38._0_4_;
    fStack_ec = fStack_ec - auVar38._4_4_;
    fStack_e8 = auVar47._0_4_ - auVar41._0_4_;
    auVar39._0_4_ = local_f0 * local_f0;
    auVar39._4_4_ = fStack_ec * fStack_ec;
    auVar39._8_4_ = fStack_e8 * fStack_e8;
    auVar39._12_4_ = 0;
    auVar41 = NEON_ext(auVar39,auVar39,8,1);
    fVar33 = auVar41._0_4_ + auVar41._4_4_;
    fVar32 = auVar39._0_4_ + auVar39._4_4_ + fVar33;
    fVar33 = auVar39._0_4_ + auVar39._4_4_ + fVar33;
    uVar19 = CONCAT44(fVar33,fVar32);
    uVar44 = NEON_frsqrte(uVar19,4);
    fVar34 = (float)uVar44;
    fVar46 = (float)((ulong)uVar44 >> 0x20);
    uVar44 = NEON_frsqrts(CONCAT44(fVar46 * fVar46,fVar34 * fVar34),uVar19,4);
    fVar34 = fVar34 * (float)uVar44;
    fVar46 = fVar46 * (float)((ulong)uVar44 >> 0x20);
    uVar44 = NEON_frsqrts(CONCAT44(fVar46 * fVar46,fVar34 * fVar34),uVar19,4);
    fVar34 = fVar34 * (float)uVar44;
    fVar46 = fVar46 * (float)((ulong)uVar44 >> 0x20);
    uVar44 = NEON_frsqrts(CONCAT44(fVar46 * fVar46,fVar34 * fVar34),uVar19,4);
    fVar34 = fVar34 * (float)uVar44;
    fVar46 = fVar46 * (float)((ulong)uVar44 >> 0x20);
    uVar44 = NEON_frsqrts(CONCAT44(fVar46 * fVar46,fVar34 * fVar34),uVar19,4);
    uVar40 = CONCAT44(fVar33 * fVar46 * (float)((ulong)uVar44 >> 0x20),
                      fVar32 * fVar34 * (float)uVar44);
    uVar40 = uVar40 ^ (uVar40 ^ uVar19) & CONCAT44(-(uint)(fVar32 == 0.0),-(uint)(fVar32 == 0.0));
    uVar44 = NEON_frecpe(uVar40,4);
    uVar45 = NEON_frecps(uVar40,uVar44,4);
    fVar32 = (float)uVar44 * (float)uVar45;
    fVar33 = (float)((ulong)uVar44 >> 0x20) * (float)((ulong)uVar45 >> 0x20);
    uVar44 = NEON_frecps(uVar40,CONCAT44(fVar33,fVar32),4);
    fVar32 = fVar32 * (float)uVar44;
    fVar33 = fVar33 * (float)((ulong)uVar44 >> 0x20);
    uVar44 = NEON_frecps(uVar40,CONCAT44(fVar33,fVar32),4);
    fVar32 = fVar32 * (float)uVar44;
    fVar33 = fVar33 * (float)((ulong)uVar44 >> 0x20);
    uVar44 = NEON_frecps(uVar40,CONCAT44(fVar33,fVar32),4);
    fVar32 = fVar32 * (float)uVar44;
    uVar44 = NEON_frecps(uVar40,CONCAT44(fVar33 * (float)((ulong)uVar44 >> 0x20),fVar32),4);
    fVar32 = fVar32 * (float)uVar44;
    local_f0 = local_f0 * fVar32;
    fStack_ec = fStack_ec * fVar32;
    fStack_e8 = fStack_e8 * fVar32;
    uStack_c8 = (ulong)(uint)fStack_e8;
    local_d0 = CONCAT44(fStack_ec,local_f0);
  }
  puVar1 = (uint *)(param_1 + 0x988);
  uVar18 = *(uint *)(param_1 + 0x988);
  uVar40 = (ulong)uVar18;
  uVar44 = FUN_0026f1a0(&uStack_80,&local_90,&local_a0,&local_b0,&local_d0,param_3,
                        *(long *)(param_1 + 0xeb8) + 0x30,*(long *)(param_1 + 0xeb8) + 0x40,
                        param_1 + 0xea8,*(undefined8 *)(param_1 + 0x980),puVar1);
  uVar45 = *(undefined8 *)(param_1 + 0x980);
  lVar22 = *(long *)(param_1 + 0xeb8) + 0x40;
  lVar2 = *(long *)(param_1 + 0xeb8) + 0x30;
  uVar44 = FUN_0026ef40(uVar44,lVar2,lVar22,lVar23,&local_d0,param_3,&uStack_80,&local_90,uVar45,
                        puVar1);
  uVar44 = FUN_0026ef40(uVar44,lVar2,lVar22,lVar23,&local_d0,param_3,&local_90,&local_a0,uVar45,
                        puVar1);
  FUN_0026ef40(uVar44,lVar2,lVar22,lVar23,&local_d0,param_3,&uStack_80,&local_a0,uVar45,puVar1);
  uVar31 = *(uint *)(param_1 + 0x988);
  uVar19 = (ulong)uVar31;
  if (uVar31 == uVar18) {
    return 1;
  }
  uVar44 = 0x7f7fffff7f7fffff;
  if (uVar18 < uVar31) {
    lVar23 = uVar40 << 6;
    uVar24 = uVar40;
    do {
      puVar25 = (undefined8 *)(*(long *)(param_1 + 0x980) + lVar23);
      lVar23 = lVar23 + 0x40;
      fVar53 = (float)puVar25[1];
      fVar51 = (float)*puVar25;
      fVar52 = (float)((ulong)*puVar25 >> 0x20);
      fVar32 = *(float *)(param_1 + 0x940);
      fVar33 = *(float *)(param_1 + 0x944);
      fVar34 = *(float *)(param_1 + 0x950);
      fVar46 = *(float *)(param_1 + 0x954);
      fVar49 = *(float *)(param_1 + 0x960);
      fVar50 = *(float *)(param_1 + 0x964);
      uVar45 = *(undefined8 *)(param_1 + 0x970);
      uVar44 = NEON_fmin(uVar44,CONCAT44(*(undefined4 *)((long)puVar25 + 0x2c),
                                         *(undefined4 *)((long)puVar25 + 0x2c)),4);
      uVar24 = uVar24 + 1;
      puVar25[1] = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x978) >> 0x20) + 0.0,
                            (float)*(undefined8 *)(param_1 + 0x978) +
                            *(float *)(param_1 + 0x948) * fVar51 +
                            *(float *)(param_1 + 0x958) * fVar52 +
                            *(float *)(param_1 + 0x968) * fVar53);
      *puVar25 = CONCAT44((float)((ulong)uVar45 >> 0x20) +
                          fVar33 * fVar51 + fVar46 * fVar52 + fVar50 * fVar53,
                          (float)uVar45 + fVar32 * fVar51 + fVar34 * fVar52 + fVar49 * fVar53);
      uVar19 = (ulong)*(uint *)(param_1 + 0x988);
    } while (uVar24 < uVar19);
  }
  if (uVar18 < (uint)uVar19) {
    do {
      uVar24 = uVar40 + 1;
      if (uVar24 < uVar19) {
        lVar23 = *(long *)(param_1 + 0x980);
        auVar41 = *(undefined1 (*) [16])(lVar23 + uVar40 * 0x40 + 0x10);
        uVar40 = uVar24 & 0xffffffff;
        while( true ) {
          iVar29 = (int)uVar40;
          pvVar3 = (void *)(lVar23 + uVar40 * 0x40);
          fVar32 = (float)*(undefined8 *)((long)pvVar3 + 0x10) - auVar41._0_4_;
          fVar33 = (float)((ulong)*(undefined8 *)((long)pvVar3 + 0x10) >> 0x20) - auVar41._4_4_;
          fVar34 = (float)*(undefined8 *)((long)pvVar3 + 0x18) - auVar41._8_4_;
          fVar46 = (float)((ulong)*(undefined8 *)((long)pvVar3 + 0x18) >> 0x20) - auVar41._12_4_;
          fVar32 = fVar32 * fVar32;
          fVar33 = fVar33 * fVar33;
          fVar34 = fVar34 * fVar34;
          fVar46 = fVar46 * fVar46;
          auVar9._4_4_ = fVar33;
          auVar9._0_4_ = fVar32;
          auVar9._8_4_ = fVar34;
          auVar9._12_4_ = fVar46;
          auVar10._4_4_ = fVar33;
          auVar10._0_4_ = fVar32;
          auVar10._8_4_ = fVar34;
          auVar10._12_4_ = fVar46;
          auVar47 = NEON_ext(auVar9,auVar10,8,1);
          if (fVar32 + fVar33 + auVar47._0_4_ + auVar47._4_4_ <
              (float)*(undefined8 *)(param_1 + 0x938)) {
            memcpy(pvVar3,(void *)(lVar23 + (ulong)((int)uVar19 - 1) * 0x40),0x34);
            uVar19 = (ulong)(*puVar1 - 1);
            iVar29 = iVar29 + -1;
            *puVar1 = *puVar1 - 1;
          }
          uVar40 = (ulong)(iVar29 + 1U);
          if ((uint)uVar19 <= iVar29 + 1U) break;
          lVar23 = *(long *)(param_1 + 0x980);
        }
      }
      uVar40 = uVar24;
    } while (uVar24 < uVar19);
  }
  uVar31 = *(uint *)(param_1 + 0x98c);
  if (uVar31 != 0) {
    puVar25 = (undefined8 *)(param_1 + (ulong)(uVar31 - 1) * 0x40);
    uVar17 = puVar25[1];
    uVar45 = *puVar25;
    fVar32 = (float)uVar45 * local_f0;
    fVar33 = (float)((ulong)uVar45 >> 0x20) * fStack_ec;
    fVar34 = (float)uVar17 * fStack_e8;
    fVar46 = (float)((ulong)uVar17 >> 0x20) * 0.0;
    auVar11._4_4_ = fVar33;
    auVar11._0_4_ = fVar32;
    auVar11._8_4_ = fVar34;
    auVar11._12_4_ = fVar46;
    auVar12._4_4_ = fVar33;
    auVar12._0_4_ = fVar32;
    auVar12._8_4_ = fVar34;
    auVar12._12_4_ = fVar46;
    auVar41 = NEON_ext(auVar11,auVar12,8,1);
    if ((float)*(undefined8 *)(param_1 + 0x930) < fVar32 + fVar33 + auVar41._0_4_ + auVar41._4_4_) {
      lVar23 = param_1 + (ulong)(uVar31 - 1) * 0x40;
      puVar30 = (uint *)(lVar23 + 0x34);
      uVar24 = (ulong)*puVar30;
      uVar40 = (ulong)*(uint *)(lVar23 + 0x30);
      if (*(uint *)(lVar23 + 0x30) < *puVar30) {
        do {
          uVar31 = uVar18;
          if (uVar18 < (uint)uVar19) {
            do {
              iVar29 = (int)uVar19;
              lVar22 = *(long *)(param_1 + 0x980);
              pvVar3 = (void *)(lVar22 + (ulong)uVar31 * 0x40);
              __dest = (void *)(lVar22 + uVar40 * 0x40);
              fVar32 = (float)*(undefined8 *)((long)pvVar3 + 0x10) - *(float *)((long)__dest + 0x10)
              ;
              fVar33 = (float)((ulong)*(undefined8 *)((long)pvVar3 + 0x10) >> 0x20) -
                       *(float *)((long)__dest + 0x14);
              fVar34 = (float)*(undefined8 *)((long)pvVar3 + 0x18) - *(float *)((long)__dest + 0x18)
              ;
              fVar46 = (float)((ulong)*(undefined8 *)((long)pvVar3 + 0x18) >> 0x20) -
                       *(float *)((long)__dest + 0x1c);
              fVar32 = fVar32 * fVar32;
              fVar33 = fVar33 * fVar33;
              fVar34 = fVar34 * fVar34;
              fVar46 = fVar46 * fVar46;
              auVar13._4_4_ = fVar33;
              auVar13._0_4_ = fVar32;
              auVar13._8_4_ = fVar34;
              auVar13._12_4_ = fVar46;
              auVar14._4_4_ = fVar33;
              auVar14._0_4_ = fVar32;
              auVar14._8_4_ = fVar34;
              auVar14._12_4_ = fVar46;
              auVar41 = NEON_ext(auVar13,auVar14,8,1);
              if (fVar32 + fVar33 + auVar41._0_4_ + auVar41._4_4_ <
                  (float)*(undefined8 *)(param_1 + 0x938)) {
                if ((float)((ulong)*(undefined8 *)((long)pvVar3 + 0x28) >> 0x20) <
                    (float)((ulong)*(undefined8 *)((long)__dest + 0x28) >> 0x20)) {
                  memcpy(__dest,pvVar3,0x34);
                  lVar22 = *(long *)(param_1 + 0x980);
                  iVar29 = *(int *)(param_1 + 0x988);
                }
                memcpy((void *)(lVar22 + (ulong)uVar31 * 0x40),
                       (void *)(lVar22 + (ulong)(iVar29 - 1) * 0x40),0x34);
                uVar19 = (ulong)(*puVar1 - 1);
                uVar31 = uVar31 - 1;
                *puVar1 = *puVar1 - 1;
              }
              uVar31 = uVar31 + 1;
            } while (uVar31 < (uint)uVar19);
            uVar24 = (ulong)*puVar30;
          }
          uVar40 = uVar40 + 1;
        } while (uVar40 < uVar24);
      }
      uVar18 = (uint)uVar19;
      *puVar30 = uVar18;
      uVar44 = NEON_fmin(*(undefined8 *)(lVar23 + 0x28),uVar44,4);
      *(undefined8 *)(lVar23 + 0x28) = uVar44;
      goto joined_r0x0027038c;
    }
  }
  puVar25 = (undefined8 *)(param_1 + (ulong)uVar31 * 0x40);
  *(uint *)(puVar25 + 6) = uVar18;
  *(int *)((long)puVar25 + 0x34) = (int)uVar19;
  puVar25[5] = uVar44;
  *(uint *)(param_1 + 0x98c) = uVar31 + 1;
  puVar25[1] = (ulong)(uint)fStack_e8;
  *puVar25 = CONCAT44(fStack_ec,local_f0);
  uVar18 = *(uint *)(param_1 + 0x988);
  uVar19 = (ulong)uVar18;
joined_r0x0027038c:
  if (0xf < uVar18) {
    uVar18 = *(uint *)(param_1 + 0x98c);
    uVar40 = (ulong)uVar18;
    if (1 < uVar18) {
      iVar29 = -1;
      uVar24 = 1;
      do {
        lVar23 = param_1 + uVar24 * 8;
        lVar22 = *(long *)(lVar23 + 0x7f8);
        if ((float)*(undefined8 *)(*(long *)(lVar23 + 0x800) + 0x28) <
            (float)*(undefined8 *)(lVar22 + 0x28)) {
          *(long *)(lVar23 + 0x7f8) = *(long *)(lVar23 + 0x800);
          *(long *)(lVar23 + 0x800) = lVar22;
          if (-1 < (int)uVar24 + -2) {
            uVar26 = (long)iVar29 + 1;
            plVar27 = (long *)(param_1 + 0x800 + (long)iVar29 * 8);
            do {
              lVar23 = param_1 + (uVar26 & 0xffffffff) * 8;
              lVar22 = *(long *)(lVar23 + 0x800);
              if ((float)*(undefined8 *)(*plVar27 + 0x28) <= (float)*(undefined8 *)(lVar22 + 0x28))
              break;
              uVar26 = uVar26 - 1;
              *(long *)(lVar23 + 0x800) = *plVar27;
              *plVar27 = lVar22;
              plVar27 = plVar27 + -1;
            } while (0 < (long)uVar26);
          }
        }
        uVar24 = uVar24 + 1;
        iVar29 = iVar29 + 1;
      } while (uVar24 != uVar40);
    }
    if (uVar18 == 0) {
      uVar20 = 0;
    }
    else {
      uVar19 = 0;
      uVar24 = 0xffffffff;
      do {
        puVar25 = *(undefined8 **)(param_1 + uVar19 * 8 + 0x800);
        puVar25[2] = 0;
        iVar29 = *(int *)((long)puVar25 + 0x34) - *(int *)(puVar25 + 6);
        puVar25[3] = puVar25;
        puVar25[4] = puVar25;
        *(int *)(puVar25 + 7) = iVar29;
        if (uVar19 != 0) {
          lVar23 = 0;
          do {
            lVar22 = *(long *)(param_1 + 0x800 + uVar24 * 8 + lVar23 * 8);
            pfVar21 = *(float **)(lVar22 + 0x20);
            auVar43._0_4_ = (float)*puVar25 * *pfVar21;
            auVar43._4_4_ = (float)((ulong)*puVar25 >> 0x20) * pfVar21[1];
            auVar43._8_4_ = (float)puVar25[1] * pfVar21[2];
            auVar43._12_4_ = (float)((ulong)puVar25[1] >> 0x20) * pfVar21[3];
            auVar41 = NEON_ext(auVar43,auVar43,8,1);
            if ((float)*(undefined8 *)(param_1 + 0x930) <=
                auVar43._0_4_ + auVar43._4_4_ + auVar41._0_4_ + auVar41._4_4_) {
              *(undefined8 **)(lVar22 + 0x10) = puVar25;
              *(undefined8 **)(pfVar21 + 6) = puVar25;
              puVar25[4] = pfVar21;
              *(int *)(*(long *)(lVar22 + 0x20) + 0x38) =
                   *(int *)(*(long *)(lVar22 + 0x20) + 0x38) + iVar29;
              break;
            }
            lVar23 = lVar23 + -1;
          } while ((int)uVar19 + (int)lVar23 != 0);
        }
        uVar24 = (ulong)((int)uVar24 + 1);
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar40);
      lVar23 = *(long *)(param_1 + 0x980);
      uVar19 = 0;
      do {
        lVar22 = *(long *)(param_1 + uVar19 * 8 + 0x800);
        if (lVar22 != 0 && *(long *)(lVar22 + 0x20) == lVar22) {
          for (lVar2 = *(long *)(lVar22 + 0x10); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x10)) {
            uVar24 = (ulong)*(uint *)(lVar22 + 0x30);
            uVar18 = *(uint *)(lVar22 + 0x34);
            if (*(uint *)(lVar22 + 0x30) < uVar18) {
              uVar31 = *(uint *)(lVar2 + 0x34);
              do {
                uVar28 = *(uint *)(lVar2 + 0x30);
                if (uVar28 < uVar31) {
                  lVar4 = lVar23 + uVar24 * 0x40;
                  do {
                    pvVar3 = (void *)(lVar23 + (ulong)uVar28 * 0x40);
                    fVar32 = (float)*(undefined8 *)((long)pvVar3 + 0x10) - *(float *)(lVar4 + 0x10);
                    fVar33 = (float)((ulong)*(undefined8 *)((long)pvVar3 + 0x10) >> 0x20) -
                             *(float *)(lVar4 + 0x14);
                    fVar34 = (float)*(undefined8 *)((long)pvVar3 + 0x18) - *(float *)(lVar4 + 0x18);
                    fVar46 = (float)((ulong)*(undefined8 *)((long)pvVar3 + 0x18) >> 0x20) -
                             *(float *)(lVar4 + 0x1c);
                    fVar32 = fVar32 * fVar32;
                    fVar33 = fVar33 * fVar33;
                    fVar34 = fVar34 * fVar34;
                    fVar46 = fVar46 * fVar46;
                    auVar15._4_4_ = fVar33;
                    auVar15._0_4_ = fVar32;
                    auVar15._8_4_ = fVar34;
                    auVar15._12_4_ = fVar46;
                    auVar16._4_4_ = fVar33;
                    auVar16._0_4_ = fVar32;
                    auVar16._8_4_ = fVar34;
                    auVar16._12_4_ = fVar46;
                    auVar41 = NEON_ext(auVar15,auVar16,8,1);
                    if (fVar32 + fVar33 + auVar41._0_4_ + auVar41._4_4_ <
                        (float)*(undefined8 *)(param_1 + 0x938)) {
                      memcpy(pvVar3,(void *)(lVar23 + (ulong)(uVar31 - 1) * 0x40),0x34);
                      uVar31 = *(int *)(lVar2 + 0x34) - 1;
                      uVar28 = uVar28 - 1;
                      *(uint *)(lVar2 + 0x34) = uVar31;
                    }
                    uVar28 = uVar28 + 1;
                  } while (uVar28 < uVar31);
                  uVar18 = *(uint *)(lVar22 + 0x34);
                }
                uVar24 = uVar24 + 1;
              } while (uVar24 < uVar18);
            }
            lVar22 = lVar2;
          }
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar40);
      uVar19 = (ulong)*(uint *)(param_1 + 0x988);
      uVar20 = *(undefined4 *)(param_1 + 0x98c);
    }
    FUN_00292960(*(undefined8 *)(param_1 + 0x920),*(undefined8 *)(param_1 + 0x980),uVar19,
                 param_1 + 0x800,uVar20,param_1 + 0x938,(undefined8 *)(param_1 + 0x930),3);
    *(long *)(param_1 + 0x808) = param_1 + 0x40;
    *(long *)(param_1 + 0x810) = param_1 + 0x80;
    *(long *)(param_1 + 0x818) = param_1 + 0xc0;
    *(long *)(param_1 + 0x820) = param_1 + 0x100;
    *(long *)(param_1 + 0x828) = param_1 + 0x140;
    *(long *)(param_1 + 0x830) = param_1 + 0x180;
    *(long *)(param_1 + 0x838) = param_1 + 0x1c0;
    *(long *)(param_1 + 0x840) = param_1 + 0x200;
    *(long *)(param_1 + 0x848) = param_1 + 0x240;
    *(long *)(param_1 + 0x850) = param_1 + 0x280;
    *(long *)(param_1 + 0x858) = param_1 + 0x2c0;
    *(long *)(param_1 + 0x860) = param_1 + 0x300;
    *(long *)(param_1 + 0x868) = param_1 + 0x340;
    *(long *)(param_1 + 0x870) = param_1 + 0x380;
    *(long *)(param_1 + 0x878) = param_1 + 0x3c0;
    *(long *)(param_1 + 0x880) = param_1 + 0x400;
    *(long *)(param_1 + 0x888) = param_1 + 0x440;
    *(long *)(param_1 + 0x890) = param_1 + 0x480;
    *(long *)(param_1 + 0x898) = param_1 + 0x4c0;
    *(long *)(param_1 + 0x8a0) = param_1 + 0x500;
    *(long *)(param_1 + 0x8a8) = param_1 + 0x540;
    *(long *)(param_1 + 0x8b0) = param_1 + 0x580;
    *(long *)(param_1 + 0x8b8) = param_1 + 0x5c0;
    *(long *)(param_1 + 0x8c0) = param_1 + 0x600;
    *(long *)(param_1 + 0x8c8) = param_1 + 0x640;
    *(long *)(param_1 + 0x8d0) = param_1 + 0x680;
    *(long *)(param_1 + 0x8d8) = param_1 + 0x6c0;
    *(long *)(param_1 + 0x8e0) = param_1 + 0x700;
    *(long *)(param_1 + 0x8e8) = param_1 + 0x740;
    *(long *)(param_1 + 0x8f0) = param_1 + 0x780;
    *(undefined8 *)(param_1 + 0x988) = 0;
    *(long *)(param_1 + 0x800) = param_1;
    *(long *)(param_1 + 0x8f8) = param_1 + 0x7c0;
  }
  return 1;
}


