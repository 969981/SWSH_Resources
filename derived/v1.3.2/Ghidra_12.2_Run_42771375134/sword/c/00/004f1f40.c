/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f1f40; name: FUN_004f1f40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f1f40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,float *param_4,
                 undefined8 param_5,uint param_6)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  float *pfVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar32;
  float fVar33;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar34;
  undefined1 auVar31 [16];
  undefined8 uVar36;
  undefined1 auVar35 [16];
  undefined8 uVar38;
  undefined1 auVar37 [16];
  undefined8 uVar41;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  ulong uVar48;
  float fVar49;
  float fVar50;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  if (*(uint *)(param_1 + 1) != 0) {
    plVar18 = (long *)*param_1;
    plVar2 = plVar18 + *(uint *)(param_1 + 1);
    if (plVar18 < plVar2 + -4) {
      fVar47 = *param_4;
      fVar49 = param_4[1];
      fVar50 = param_4[2];
      auVar29 = NEON_fmov(0x3f800000,4);
      do {
        plVar19 = plVar18;
        pauVar4 = (undefined1 (*) [16])*plVar19;
        pauVar6 = (undefined1 (*) [16])plVar19[1];
        pauVar5 = (undefined1 (*) [16])plVar19[2];
        pauVar7 = (undefined1 (*) [16])plVar19[3];
        auVar30 = *pauVar4;
        auVar35 = *pauVar6;
        auVar37 = *pauVar5;
        auVar39 = *pauVar7;
        fVar43 = auVar30._0_4_;
        fVar22 = auVar35._0_4_;
        fVar44 = auVar37._0_4_;
        fVar23 = auVar39._0_4_;
        fVar20 = auVar30._4_4_;
        fVar26 = auVar35._4_4_;
        fVar21 = auVar37._4_4_;
        fVar27 = auVar39._4_4_;
        auVar30 = NEON_ext(auVar30,auVar30,8,1);
        auVar35 = NEON_ext(auVar35,auVar35,8,1);
        auVar37 = NEON_ext(auVar37,auVar37,8,1);
        auVar39 = NEON_ext(auVar39,auVar39,8,1);
        fVar45 = auVar30._0_4_;
        fVar24 = auVar35._0_4_;
        fVar28 = auVar30._4_4_;
        fVar33 = auVar35._4_4_;
        fVar46 = auVar37._0_4_;
        fVar25 = auVar39._0_4_;
        fVar32 = auVar37._4_4_;
        fVar34 = auVar39._4_4_;
        auVar30._0_8_ = CONCAT44(-fVar50 + fVar33 * fVar24,-fVar50 + fVar28 * fVar45);
        auVar30._8_4_ = -fVar50 + fVar32 * fVar46;
        auVar30._12_4_ = -fVar50 + fVar34 * fVar25;
        auVar37._0_8_ = CONCAT44(-fVar47 + fVar33 * fVar22,-fVar47 + fVar28 * fVar43);
        auVar37._8_4_ = -fVar47 + fVar32 * fVar44;
        auVar37._12_4_ = -fVar47 + fVar34 * fVar23;
        auVar35._0_8_ = CONCAT44(-fVar49 + fVar33 * fVar26,-fVar49 + fVar28 * fVar20);
        auVar35._8_4_ = -fVar49 + fVar32 * fVar21;
        auVar35._12_4_ = -fVar49 + fVar34 * fVar27;
        if ((DAT_0275b290 & 1) == 0) {
          uVar36 = auVar37._8_8_;
          uVar41 = auVar30._8_8_;
          uVar38 = auVar35._8_8_;
          iVar12 = __cxa_guard_acquire();
          auVar30._8_8_ = uVar41;
          auVar35._8_8_ = uVar38;
          auVar37._8_8_ = uVar36;
          if (iVar12 != 0) {
            auVar39._8_4_ = 0x40000000;
            auVar39._0_8_ = 0x4000000040000000;
            auVar39._12_4_ = 0x40000000;
            uRam000000000275b2c8 = auVar39._8_8_;
            _DAT_0275b2c0 = 0x4000000040000000;
            __cxa_guard_release(&DAT_0275b290);
          }
        }
        fVar28 = (float)_DAT_0275b2c0 *
                 (auVar37._0_4_ * fVar43 + auVar35._0_4_ * fVar20 + auVar30._0_4_ * fVar45);
        fVar32 = (float)((ulong)_DAT_0275b2c0 >> 0x20) *
                 (auVar37._4_4_ * fVar22 + auVar35._4_4_ * fVar26 + auVar30._4_4_ * fVar24);
        fVar33 = (float)uRam000000000275b2c8 *
                 (auVar37._8_4_ * fVar44 + auVar35._8_4_ * fVar21 + auVar30._8_4_ * fVar46);
        fVar34 = (float)((ulong)uRam000000000275b2c8 >> 0x20) *
                 (auVar37._12_4_ * fVar23 + auVar35._12_4_ * fVar27 + auVar30._12_4_ * fVar25);
        auVar40._0_8_ = CONCAT44(fVar47 + fVar32 * fVar22,fVar47 + fVar28 * fVar43);
        auVar40._8_4_ = fVar47 + fVar33 * fVar44;
        auVar40._12_4_ = fVar47 + fVar34 * fVar23;
        auVar42._0_8_ = CONCAT44(fVar49 + fVar32 * fVar26,fVar49 + fVar28 * fVar20);
        auVar42._8_4_ = fVar49 + fVar33 * fVar21;
        auVar42._12_4_ = fVar49 + fVar34 * fVar27;
        fVar43 = fVar50 + fVar28 * fVar45;
        fVar44 = fVar50 + fVar32 * fVar24;
        fVar45 = fVar50 + fVar33 * fVar46;
        fVar46 = fVar50 + fVar34 * fVar25;
        if ((DAT_0275b298 & 1) == 0) {
          uVar36 = auVar40._8_8_;
          uVar38 = auVar42._8_8_;
          iVar12 = __cxa_guard_acquire();
          auVar42._8_8_ = uVar38;
          auVar40._8_8_ = uVar36;
          if (iVar12 != 0) {
            _DAT_0275b2d0 = auVar29._0_8_;
            uRam000000000275b2d8 = auVar29._8_8_;
            __cxa_guard_release(&DAT_0275b298);
          }
        }
        auVar31._8_8_ = uRam000000000275b2d8;
        auVar31._0_8_ = _DAT_0275b2d0;
        local_90 = CONCAT44(auVar42._0_4_,auVar40._0_4_);
        local_a0 = CONCAT44(auVar42._4_4_,auVar40._4_4_);
        auVar30 = NEON_ext(auVar40,auVar40,8,1);
        auVar35 = NEON_ext(auVar42,auVar42,8,1);
        uStack_88 = CONCAT44((int)_DAT_0275b2d0,fVar43);
        uStack_b0 = CONCAT44(auVar35._0_4_,auVar30._0_4_);
        local_c0 = CONCAT44(auVar35._4_4_,auVar30._4_4_);
        auVar9._4_4_ = fVar44;
        auVar9._0_4_ = fVar43;
        auVar9._8_4_ = fVar45;
        auVar9._12_4_ = fVar46;
        auVar10._4_4_ = fVar44;
        auVar10._0_4_ = fVar43;
        auVar10._8_4_ = fVar45;
        auVar10._12_4_ = fVar46;
        auVar35 = NEON_ext(auVar9,auVar10,8,1);
        auVar30 = NEON_ext(auVar31,auVar31,8,1);
        uStack_98 = CONCAT44((int)((ulong)_DAT_0275b2d0 >> 0x20),fVar44);
        uStack_b8 = CONCAT44(auVar30._4_4_,auVar35._4_4_);
        uStack_a8 = CONCAT44(auVar30._0_4_,auVar35._0_4_);
        FUN_004f12b0(param_1,param_2,param_3,&local_90,pauVar4,param_6);
        FUN_004f12b0(param_1,param_2,param_3,&local_a0,pauVar6,param_6);
        FUN_004f12b0(param_1,param_2,param_3,&uStack_b0,pauVar5,param_6);
        FUN_004f12b0(param_1,param_2,param_3,&local_c0,pauVar7,param_6);
        pauVar4[2][8] = 0;
        pauVar6[2][8] = 0;
        pauVar5[2][8] = 0;
        pauVar7[2][8] = 0;
        plVar18 = plVar19 + 4;
      } while (plVar19 + 4 < plVar2 + -4);
      plVar18 = plVar19 + 4;
    }
    if (plVar18 < plVar2) {
      fVar47 = *param_4;
      fVar49 = param_4[1];
      fVar50 = param_4[2];
      do {
        plVar19 = plVar18 + 1;
        pfVar16 = (float *)*plVar18;
        fVar43 = *pfVar16;
        fVar44 = pfVar16[1];
        fVar45 = pfVar16[2];
        fVar46 = pfVar16[3];
        fVar46 = (fVar46 * fVar43 - fVar47) * fVar43 + fVar44 * (fVar46 * fVar44 - fVar49) +
                 fVar45 * (fVar46 * fVar45 - fVar50);
        fVar46 = fVar46 + fVar46;
        auVar29._0_8_ = CONCAT44(fVar49 + fVar44 * fVar46,fVar47 + fVar43 * fVar46);
        auVar29._8_4_ = fVar50 + fVar45 * fVar46;
        auVar29._12_4_ = 0x3f800000;
        uStack_88 = auVar29._8_8_;
        local_90 = auVar29._0_8_;
        FUN_004f12b0(param_1,param_2,param_3,&local_90,pfVar16,param_6);
        *(undefined1 *)(pfVar16 + 10) = 0;
        plVar18 = plVar19;
      } while (plVar19 < plVar2);
    }
    if (param_6 < *(int *)(param_1 + 0x11) - 1U) {
      puVar14 = (uint *)(param_1 + 4);
      uVar13 = (ulong)*puVar14;
      puVar14[uVar13 + 0x12] = 0;
      if (puVar14[uVar13 * 4 + 4] != 0) {
        uVar48 = 0;
        uVar15 = 0;
        do {
          puVar3 = (undefined8 *)(param_1[uVar13 * 2 + 5] + uVar15 * 0x20);
          local_90 = *puVar3;
          uStack_88 = puVar3[1];
          lVar17 = puVar3[2];
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar48;
          uVar1 = (int)uVar13 + 1;
          *(uint *)(param_1 + 4) = uVar1;
          *(undefined4 *)((long)param_1 + (ulong)uVar1 * 4 + 0x68) = 0;
          FUN_004f1ad0(auVar11 << 0x40,param_1,&local_90,lVar17);
          FUN_004f1f40(param_1,param_2,param_3,&local_90);
          *(undefined1 *)(lVar17 + 0x28) = 0;
          uVar8 = *(uint *)(param_1 + 4);
          *(undefined4 *)(param_1 + (ulong)uVar8 * 2 + 6) = 0;
          *(undefined4 *)((long)param_1 + (ulong)uVar8 * 4 + 0x68) = 0xffffffff;
          uVar8 = uVar8 - 1;
          uVar13 = (ulong)uVar8;
          *(uint *)(param_1 + 4) = uVar8;
          uVar1 = *(int *)((long)param_1 + uVar13 * 4 + 0x68) + 1;
          uVar15 = (ulong)uVar1;
          *(uint *)((long)param_1 + uVar13 * 4 + 0x68) = uVar1;
        } while (uVar1 != *(uint *)(param_1 + (ulong)uVar8 * 2 + 6));
      }
    }
  }
  return;
}


