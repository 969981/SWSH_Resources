/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df3910; name: FUN_00df3910
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00df3910(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined1 (*pauVar4) [12];
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong uVar8;
  long lVar9;
  int iVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float extraout_var;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  float fVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar34;
  undefined1 auVar33 [16];
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  long local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  long local_88;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  
  (**(code **)(**(long **)(param_1 + 0x70) + 0x10))(&local_48);
  local_a0 = local_48;
  local_48 = 0;
  uVar8 = FUN_00e7cb20(&local_a0);
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if ((uVar8 & 1) == 0) {
    (**(code **)(**(long **)(param_1 + 0x70) + 0x10))(&local_a0);
    FUN_00c58c00(&local_48,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
    local_50 = local_48;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    local_58 = local_a0;
    if (local_a0 != 0) {
      (**(code **)(*(long *)(local_a0 + 0x48) + 0x10))();
    }
    FUN_00ca1a80(&local_50,&local_58,param_1 + 0xb8);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    local_60 = local_48;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    local_68 = local_a0;
    if (local_a0 != 0) {
      (**(code **)(*(long *)(local_a0 + 0x48) + 0x10))();
    }
    FUN_00ca13c0(*(undefined4 *)(param_1 + 0xd8),&local_60,&local_68,PTR_DAT_0271e880);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (local_a0 != 0) {
      (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    }
  }
  else {
    FUN_00c58c00(&local_48,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
    lVar12 = local_48;
    (**(code **)(**(long **)(param_1 + 0x70) + 0x10))(&local_a0);
    local_78 = local_a0;
    local_a0 = 0;
    FUN_00c7a400(&local_70,lVar12,&local_78);
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      local_78 = 0;
    }
    if (local_a0 != 0) {
      (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
      local_a0 = 0;
    }
    lVar12 = local_70;
    if ((local_70 != 0) && (*(int *)(local_70 + 0x54) != 0)) {
      if ((local_70 != 0) && (*(int *)(local_70 + 0x54) != 0)) {
        piVar11 = (int *)(local_70 + 0x54);
        iVar10 = *(int *)(local_70 + 0x54);
        do {
          while( true ) {
            plVar13 = *(long **)(lVar12 + 0x58);
            lVar9 = FUN_00c781c0();
            while( true ) {
              if (plVar13 == (long *)0x0) goto LAB_00df3c04;
              if (plVar13 == (long *)lVar9) break;
              plVar13 = (long *)*plVar13;
            }
            iVar1 = *piVar11;
            if (iVar1 != iVar10) break;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar3) {
              *piVar11 = iVar10 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar12 = *(long *)(lVar12 + 0x60);
              if (lVar12 != 0) {
                FUN_0069c580(lVar12 + -0x50,0);
                (**(code **)(*(long *)(lVar12 + -8) + 0x18))((long *)(lVar12 + -8));
                uVar8 = FUN_0131ad60(*(undefined8 *)(param_1 + 0xe8));
                goto joined_r0x00df3bfc;
              }
              goto LAB_00df3c04;
            }
            iVar10 = iVar1;
            if (iVar1 == 0) goto LAB_00df3c04;
          }
          ClearExclusiveLocal();
          iVar10 = iVar1;
        } while (iVar1 != 0);
      }
LAB_00df3c04:
      FUN_0069c580(0,0);
    }
    uVar8 = FUN_0131ad60(*(undefined8 *)(param_1 + 0xe8));
joined_r0x00df3bfc:
    if (((uVar8 & 1) == 0) && (*(char *)(param_1 + 0x108) == '\0')) {
      fVar14 = *(float *)(param_1 + 0x80);
      fVar19 = *(float *)(param_1 + 0x84);
      fVar26 = *(float *)(param_1 + 0x88);
      fVar34 = *(float *)(param_1 + 0x8c);
      pauVar4 = (undefined1 (*) [12])(param_1 + 0x90);
      uVar29 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
      fVar27 = (float)*(undefined8 *)*pauVar4;
      fVar28 = (float)((ulong)*(undefined8 *)*pauVar4 >> 0x20);
      fVar15 = fVar14 * (float)_DAT_01d4ae80;
      fVar16 = fVar19 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
      fVar17 = fVar26 * (float)_UNK_01d4ae88;
      fVar18 = fVar34 * (float)((ulong)_UNK_01d4ae88 >> 0x20);
      auVar21._0_4_ = fVar14 * fVar14;
      auVar21._4_4_ = fVar19 * fVar19;
      auVar21._8_4_ = fVar26 * fVar26;
      auVar21._12_4_ = fVar34 * fVar34;
      auVar31 = NEON_ext(auVar21,auVar21,8,1);
      fVar19 = auVar31._0_4_ + auVar21._0_4_;
      fVar26 = auVar31._4_4_ + auVar21._4_4_;
      fVar14 = fVar19 + fVar26;
      fVar19 = fVar19 + fVar26;
      auVar22._8_8_ = CONCAT44(fVar19,fVar14);
      auVar22._0_8_ = CONCAT44(fVar19,fVar14);
      auVar31 = NEON_frecpe(auVar22,4);
      auVar36 = NEON_frecps(auVar31,auVar22,4);
      auVar32._0_4_ = auVar31._0_4_ * auVar36._0_4_;
      auVar32._4_4_ = auVar31._4_4_ * auVar36._4_4_;
      auVar32._8_4_ = auVar31._8_4_ * auVar36._8_4_;
      auVar32._12_4_ = auVar31._12_4_ * auVar36._12_4_;
      auVar31 = NEON_frecps(auVar32,auVar22,4);
      auVar23._0_4_ = -(uint)(fVar14 == 0.0);
      auVar23._4_4_ = -(uint)(fVar19 == 0.0);
      auVar23._8_4_ = -(uint)(fVar14 == 0.0);
      auVar23._12_4_ = -(uint)(fVar19 == 0.0);
      auVar24._0_4_ = fVar15 * auVar32._0_4_ * auVar31._0_4_;
      auVar24._4_4_ = fVar16 * auVar32._4_4_ * auVar31._4_4_;
      auVar24._8_4_ = fVar17 * auVar32._8_4_ * auVar31._8_4_;
      auVar24._12_4_ = fVar18 * auVar32._12_4_ * auVar31._12_4_;
      auVar31._4_4_ = fVar16;
      auVar31._0_4_ = fVar15;
      auVar31._8_4_ = fVar17;
      auVar31._12_4_ = fVar18;
      auVar24 = auVar24 ^ (auVar24 ^ auVar31) & auVar23;
      auVar36._12_4_ = uVar29;
      auVar36._0_12_ = *pauVar4;
      uVar30 = a64_TBL(ZEXT816(0),auVar36,DAT_01cd4f90);
      uVar5 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd4f90);
      auVar6._12_4_ = uVar29;
      auVar6._0_12_ = *pauVar4;
      uVar37 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd50f8);
      uVar35 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd50f8);
      auVar7._12_4_ = uVar29;
      auVar7._0_12_ = *pauVar4;
      uVar39 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd5418);
      uVar38 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd5418);
      uVar40 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd5120);
      fVar19 = (float)((ulong)uVar37 >> 0x20);
      fVar34 = (float)((ulong)uVar30 >> 0x20);
      uVar41 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd5270);
      auVar25._0_8_ = auVar24._0_8_;
      auVar25._8_8_ = auVar25._0_8_;
      uVar20 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd50b0);
      fVar26 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
      fVar14 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
      fVar15 = (float)((ulong)uVar39 >> 0x20);
      auVar33._0_8_ =
           CONCAT44((auVar24._4_4_ * fVar34 + fVar14 * fVar28 * (float)((ulong)uVar5 >> 0x20) +
                    fVar14 * fVar15 * (float)((ulong)uVar35 >> 0x20)) -
                    fVar19 * (float)((ulong)uVar38 >> 0x20),
                    (auVar24._0_4_ * (float)uVar30 + (float)_DAT_01d4ae90 * fVar27 * (float)uVar5 +
                    (float)_DAT_01d4ae90 * (float)uVar39 * (float)uVar35) -
                    (float)uVar37 * (float)uVar38);
      auVar33._8_4_ =
           (auVar24._8_4_ * (float)uVar30 + (float)_UNK_01d4ae98 * (float)uVar37 * (float)uVar40 +
           (float)_UNK_01d4ae98 * fVar27 * (float)uVar20) - (float)uVar39 * (float)uVar41;
      auVar33._12_4_ =
           (auVar24._12_4_ * fVar34 + fVar26 * fVar19 * (float)((ulong)uVar40 >> 0x20) +
           fVar26 * fVar28 * (float)((ulong)uVar20 >> 0x20)) -
           fVar15 * (float)((ulong)uVar41 >> 0x20);
      puStack_98 = auVar33._8_8_;
      local_a0 = auVar33._0_8_;
      FUN_00ac7ad0(&local_a0);
      lVar12 = *(long *)(param_1 + 0xe8);
      FUN_0131acf0(lVar12);
      piVar11 = *(int **)(lVar12 + 0x130);
      fVar14 = 0.0;
      if ((0xc < *(ushort *)((long)piVar11 - (long)*piVar11)) &&
         (uVar8 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[6], uVar8 != 0)) {
        fVar14 = *(float *)((long)piVar11 + uVar8);
      }
      iVar10 = (int)((ABS(extraout_var) / (fVar14 * *(float *)(param_1 + 0xe4))) * 30.0);
      if (iVar10 < 2) {
        iVar10 = 1;
      }
      *(int *)(param_1 + 0xb0) = iVar10;
      *(float *)(param_1 + 0xa4) = 1.0 / (float)iVar10;
    }
    local_a0 = 0x4c11a2e6098d711a;
    puStack_98 = &DAT_01d290aa;
    local_90 = 4;
    local_88 = 0;
    (**(code **)(**(long **)(param_1 + 0x70) + 0x1a8))(*(long **)(param_1 + 0x70),&local_a0,1);
    if (local_88 != 0) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
      local_88 = 0;
    }
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
  }
  return;
}


