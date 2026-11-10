/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00775460; name: FUN_00775460
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00775460(undefined8 *param_1,ulong param_2,ulong param_3)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  int iVar9;
  int iVar10;
  undefined1 auVar8 [12];
  float fVar11;
  float fVar14;
  float fVar15;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int iVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_9c;
  undefined1 auStack_90 [12];
  undefined4 local_84;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar4 = (**(code **)(*(long *)param_1[8] + 0x10))();
  if ((uVar4 & 1) == 0) {
    local_120 = 0x14;
    iVar3 = (**(code **)(*(long *)param_1[8] + 0x20))((long *)param_1[8],&local_120);
    if (iVar3 != 1) {
      return 0;
    }
  }
  if (*(char *)((long)param_1 + 0x102) == '\0') {
    (**(code **)(*(long *)param_1[0x18] + 0x20))((long *)param_1[0x18],auStack_90);
    lVar5 = (**(code **)(*(long *)param_1[0x18] + 0x18))((long *)param_1[0x18],auStack_90);
    if (lVar5 == 0) {
      return 0;
    }
    (**(code **)(*(long *)param_1[0x18] + 0x28))((long *)param_1[0x18],&local_120);
    iVar3 = (**(code **)(*(long *)*param_1 + 0x20))((long *)*param_1,&local_120,0);
    if (iVar3 != 1) {
      return 0;
    }
    *(undefined1 *)((long)param_1 + 0x102) = 1;
  }
  uVar4 = (**(code **)(*(long *)param_1[0x10] + 0x18))();
  if ((uVar4 & 1) == 0) {
    local_60 = 0;
    uStack_58 = 0;
    (**(code **)(*(long *)param_1[0x10] + 0x28))((long *)param_1[0x10],auStack_90);
    (**(code **)(*(long *)param_1[0x10] + 0x30))((long *)param_1[0x10],&local_120);
    local_84 = (undefined4)param_2;
    if ((param_2 & 0xffffffff) >> 0x14 == 0) {
      local_84 = 0x1000000;
    }
    local_9c = (undefined4)param_3;
    if ((param_3 & 0xffffffff) >> 0x15 == 0) {
      local_9c = 0x800000;
    }
    iVar3 = (**(code **)(*(long *)param_1[0x10] + 0x20))
                      ((long *)param_1[0x10],auStack_90,&local_120);
    if (iVar3 != 1) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0x20) == '\0') {
    (**(code **)(*(long *)param_1[0xc] + 0x18))((long *)param_1[0xc],&local_120);
    iVar3 = (**(code **)(*(long *)param_1[0xc] + 0x10))((long *)param_1[0xc],&local_120);
    if (iVar3 != 1) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x20) = 1;
    cVar1 = *(char *)((long)param_1 + 0x101);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x101);
  }
  if (cVar1 == '\0') {
    local_120 = 0x400000ffffffff;
    local_118 = &DAT_b00000008;
    local_110 = 0x41f0000040000000;
    iVar3 = (**(code **)(*(long *)param_1[0x14] + 0x10))((long *)param_1[0x14],&local_120);
    if (iVar3 != 1) {
      return 0;
    }
    *(undefined1 *)((long)param_1 + 0x101) = 1;
  }
  iVar3 = (**(code **)(*(long *)param_1[0x10] + 0x50))
                    ((long *)param_1[0x10],*(undefined8 *)PTR_DAT_027161a8,"GFDefaultListener");
  puVar2 = PTR_DAT_027161a8;
  if (((iVar3 == 1) &&
      (iVar3 = (**(code **)(*(long *)param_1[0x10] + 0x70))
                         ((long *)param_1[0x10],PTR_DAT_027161a8,1), iVar3 == 1)) &&
     (iVar3 = (**(code **)(*(long *)param_1[0x14] + 0x28))
                        ((long *)param_1[0x14],*(undefined8 *)puVar2), iVar3 == 1)) {
    fVar7 = (float)((ulong)DAT_01cd5070 >> 0x20);
    fVar6 = (float)DAT_01cd5070 + fVar7;
    fVar7 = (float)DAT_01cd5070 + fVar7;
    auVar12._8_8_ = CONCAT44(fVar7,fVar6);
    auVar12._0_8_ = CONCAT44(fVar7,fVar6);
    auVar12 = NEON_frsqrte(auVar12,4);
    local_108 = 0;
    auVar16._0_4_ = auVar12._0_4_ * fVar6;
    auVar16._4_4_ = auVar12._4_4_ * fVar7;
    auVar16._8_4_ = auVar12._8_4_ * fVar6;
    auVar16._12_4_ = auVar12._12_4_ * fVar7;
    local_100 = 0;
    auVar17 = NEON_frsqrts(auVar12,auVar16,4);
    auVar23._0_4_ = auVar12._0_4_ * auVar17._0_4_;
    auVar23._4_4_ = auVar12._4_4_ * auVar17._4_4_;
    auVar23._8_4_ = auVar12._8_4_ * auVar17._8_4_;
    auVar23._12_4_ = auVar12._12_4_ * auVar17._12_4_;
    auVar18._0_4_ = fVar6 * auVar23._0_4_;
    auVar18._4_4_ = fVar7 * auVar23._4_4_;
    auVar18._8_4_ = fVar6 * auVar23._8_4_;
    auVar18._12_4_ = fVar7 * auVar23._12_4_;
    iVar3 = -(uint)(fVar6 == 0.0);
    iVar9 = -(uint)(fVar7 == 0.0);
    iVar10 = -(uint)(fVar6 == 0.0);
    auVar12 = NEON_frsqrts(auVar23,auVar18,4);
    fVar11 = auVar23._0_4_ * auVar12._0_4_ * (float)_DAT_01d49dc0;
    fVar14 = auVar23._4_4_ * auVar12._4_4_ * (float)((ulong)_DAT_01d49dc0 >> 0x20);
    fVar15 = auVar23._8_4_ * auVar12._8_4_ * (float)_UNK_01d49dc8;
    fVar7 = (float)((ulong)DAT_01cd52f0 >> 0x20);
    fVar6 = (float)DAT_01cd52f0 + fVar7;
    fVar7 = (float)DAT_01cd52f0 + fVar7;
    auVar19._8_8_ = CONCAT44(fVar7,fVar6);
    auVar19._0_8_ = CONCAT44(fVar7,fVar6);
    auVar17._0_4_ =
         CONCAT13((byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar3 >> 0x18),
                  CONCAT12((byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar3 >> 0x10),
                           CONCAT11((byte)((uint)fVar11 >> 8) & ~(byte)((uint)iVar3 >> 8),
                                    SUB41(fVar11,0) & ~(byte)iVar3)));
    auVar8._0_8_ = CONCAT17((byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                            CONCAT16((byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10),
                                     CONCAT15((byte)((uint)fVar14 >> 8) & ~(byte)((uint)iVar9 >> 8),
                                              CONCAT14(SUB41(fVar14,0) & ~(byte)iVar9,auVar17._0_4_)
                                             )));
    auVar8[8] = SUB41(fVar15,0) & ~(byte)iVar10;
    auVar8[9] = (byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar10 >> 8);
    auVar8[10] = (byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10);
    auVar8[0xb] = (byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18);
    auVar12 = NEON_frsqrte(auVar19,4);
    auVar22._0_4_ = auVar12._0_4_ * fVar6;
    auVar22._4_4_ = auVar12._4_4_ * fVar7;
    auVar22._8_4_ = auVar12._8_4_ * fVar6;
    auVar22._12_4_ = auVar12._12_4_ * fVar7;
    auVar17._4_4_ = auVar8._8_4_;
    auVar17._8_4_ = auVar17._0_4_;
    auVar17._12_4_ = auVar8._8_4_;
    auVar23 = NEON_frsqrts(auVar12,auVar22,4);
    auVar21._0_4_ = auVar12._0_4_ * auVar23._0_4_;
    auVar21._4_4_ = auVar12._4_4_ * auVar23._4_4_;
    auVar21._8_4_ = auVar12._8_4_ * auVar23._8_4_;
    auVar21._12_4_ = auVar12._12_4_ * auVar23._12_4_;
    auVar24._0_4_ = fVar6 * auVar21._0_4_;
    auVar24._4_4_ = fVar7 * auVar21._4_4_;
    auVar24._8_4_ = fVar6 * auVar21._8_4_;
    auVar24._12_4_ = fVar7 * auVar21._12_4_;
    iVar3 = -(uint)(fVar6 == 0.0);
    iVar9 = -(uint)(fVar7 == 0.0);
    iVar10 = -(uint)(fVar6 == 0.0);
    iVar20 = -(uint)(fVar7 == 0.0);
    auVar12 = NEON_frsqrts(auVar21,auVar24,4);
    fVar6 = auVar21._0_4_ * auVar12._0_4_ * (float)_DAT_01d4b580;
    fVar7 = auVar21._4_4_ * auVar12._4_4_ * (float)((ulong)_DAT_01d4b580 >> 0x20);
    fVar11 = auVar21._8_4_ * auVar12._8_4_ * (float)_UNK_01d4b588;
    fVar14 = auVar21._12_4_ * auVar12._12_4_ * (float)((ulong)_UNK_01d4b588 >> 0x20);
    auVar13._0_8_ =
         CONCAT17((byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                  CONCAT16((byte)((uint)fVar7 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10),
                           CONCAT15((byte)((uint)fVar7 >> 8) & ~(byte)((uint)iVar9 >> 8),
                                    CONCAT14(SUB41(fVar7,0) & ~(byte)iVar9,
                                             CONCAT13((byte)((uint)fVar6 >> 0x18) &
                                                      ~(byte)((uint)iVar3 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar6 >> 0x10) &
                                                               ~(byte)((uint)iVar3 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar6 >> 8) &
                                                                        ~(byte)((uint)iVar3 >> 8),
                                                                        SUB41(fVar6,0) &
                                                                        ~(byte)iVar3)))))));
    auVar13[8] = SUB41(fVar11,0) & ~(byte)iVar10;
    auVar13[9] = (byte)((uint)fVar11 >> 8) & ~(byte)((uint)iVar10 >> 8);
    auVar13[10] = (byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10);
    auVar13[0xb] = (byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18);
    auVar13[0xc] = SUB41(fVar14,0) & ~(byte)iVar20;
    auVar13[0xd] = (byte)((uint)fVar14 >> 8) & ~(byte)((uint)iVar20 >> 8);
    auVar13[0xe] = (byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10);
    auVar13[0xf] = (byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18);
    auVar12 = NEON_ext(auVar17,auVar13,0xc,1);
    local_118 = auVar12._0_8_;
    auVar12 = NEON_ext(auVar13,auVar13,8,1);
    local_110 = NEON_ext(auVar13._0_8_,auVar12._0_8_,4,1);
    local_120 = auVar8._0_8_;
    (**(code **)(*(long *)param_1[0x10] + 0x60))
              ((long *)param_1[0x10],*(undefined8 *)puVar2,&local_120);
    local_148 = local_120;
    local_128 = local_100;
    local_138 = local_110;
    uStack_130 = local_108;
    local_140 = local_118;
    FUN_007757e0(param_1[4],*(undefined8 *)puVar2,&local_148);
    return 1;
  }
  return 0;
}


