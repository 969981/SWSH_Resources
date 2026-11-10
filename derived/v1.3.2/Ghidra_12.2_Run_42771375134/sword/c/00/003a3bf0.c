/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a3bf0; name: FUN_003a3bf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_003a3bf0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar17;
  undefined1 auVar16 [16];
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 local_70;
  ulong uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulong uStack_28;
  undefined1 auStack_18 [8];
  
  uVar4 = 1;
  if (*(ushort *)((long)param_2 + 0x62) < 5) {
    switch(*(ushort *)((long)param_2 + 0x62)) {
    case 0:
      local_b0 = *(undefined8 *)((long)param_2 + 100);
      uStack_a8 = (ulong)*(uint *)((long)param_2 + 0x6c);
      fVar13 = *(float *)(param_2 + 0xe) * *(float *)(param_2 + 0xe);
      local_a0 = CONCAT44(fVar13,fVar13);
      uVar4 = FUN_003a4b50(auStack_18,param_1,&local_b0,param_3);
      break;
    case 1:
      break;
    case 3:
      if (*(short *)(param_2 + 0xc) == 0) {
        local_b0 = param_2[9];
        uStack_a8 = param_2[10];
        local_a0 = param_2[0xb];
        uVar4 = FUN_003a46b0(auStack_18,param_1,&local_b0,param_3,param_2 + 9);
        return uVar4 & 1;
      }
    default:
      local_a0 = param_2[6];
      uStack_98 = (ulong)*(uint *)(param_2 + 7);
      local_b0 = *param_2;
      fVar10 = *(float *)(param_2 + 1);
      uStack_a8 = (ulong)(uint)fVar10;
      uStack_80 = CONCAT44(*(float *)((long)param_2 + 0x1c),*(float *)(param_2 + 2));
      uStack_88 = (ulong)(uint)*(float *)((long)param_2 + 0x24);
      local_90 = CONCAT44(*(float *)(param_2 + 3),*(float *)((long)param_2 + 0xc));
      uStack_78 = (ulong)(uint)*(float *)(param_2 + 5);
      fVar5 = (float)_DAT_01d4a810;
      fVar11 = ABS(*(float *)((long)param_2 + 0xc)) + fVar5;
      fVar7 = (float)((ulong)_DAT_01d4a810 >> 0x20);
      fVar12 = ABS(*(float *)(param_2 + 3)) + fVar7;
      fVar9 = (float)_UNK_01d4a818;
      fVar13 = ABS(*(float *)((long)param_2 + 0x24)) + fVar9;
      fVar17 = (float)((ulong)_UNK_01d4a818 >> 0x20);
      fStack_50 = ABS(*(float *)(param_2 + 2)) + fVar5;
      fStack_4c = ABS(*(float *)((long)param_2 + 0x1c)) + fVar7;
      fStack_48 = ABS(*(float *)(param_2 + 5)) + fVar9;
      fStack_44 = fVar17 + 0.0;
      uStack_68 = (ulong)(uint)*(float *)((long)param_2 + 0x2c);
      local_70 = CONCAT44(*(float *)(param_2 + 4),*(float *)((long)param_2 + 0x14));
      fVar5 = ABS(*(float *)((long)param_2 + 0x14)) + fVar5;
      fVar7 = ABS(*(float *)(param_2 + 4)) + fVar7;
      fVar9 = ABS(*(float *)((long)param_2 + 0x2c)) + fVar9;
      uStack_58 = CONCAT44(fVar17 + 0.0,fVar13);
      local_60 = CONCAT44(fVar12,fVar11);
      fVar6 = (float)local_b0;
      fVar11 = fVar6 * fVar11;
      fVar8 = (float)((ulong)local_b0 >> 0x20);
      fVar12 = fVar8 * fVar12;
      fVar13 = fVar10 * fVar13;
      fVar14 = (fVar17 + 0.0) * 0.0;
      auVar2._4_4_ = fVar12;
      auVar2._0_4_ = fVar11;
      auVar2._8_4_ = fVar13;
      auVar2._12_4_ = fVar14;
      auVar3._4_4_ = fVar12;
      auVar3._0_4_ = fVar11;
      auVar3._8_4_ = fVar13;
      auVar3._12_4_ = fVar14;
      auVar16 = NEON_ext(auVar2,auVar3,8,1);
      auVar15._0_4_ = fVar6 * fStack_50;
      auVar15._4_4_ = fVar8 * fStack_4c;
      auVar15._8_4_ = fVar10 * fStack_48;
      auVar15._12_4_ = fStack_44 * 0.0;
      fVar13 = auVar16._0_4_ + auVar16._4_4_;
      auVar16 = NEON_ext(auVar15,auVar15,8,1);
      fVar14 = auVar16._0_4_ + auVar16._4_4_;
      uStack_38 = CONCAT44(fVar17 + 0.0,fVar9);
      local_40 = CONCAT44(fVar7,fVar5);
      fVar6 = fVar6 * fVar5;
      fVar8 = fVar8 * fVar7;
      fVar10 = fVar10 * fVar9;
      fVar5 = (fVar17 + 0.0) * 0.0;
      auVar16._4_4_ = fVar8;
      auVar16._0_4_ = fVar6;
      auVar16._8_4_ = fVar10;
      auVar16._12_4_ = fVar5;
      auVar1._4_4_ = fVar8;
      auVar1._0_4_ = fVar6;
      auVar1._8_4_ = fVar10;
      auVar1._12_4_ = fVar5;
      auVar16 = NEON_ext(auVar16,auVar1,8,1);
      local_30 = NEON_ext(CONCAT44(fVar11 + fVar12 + fVar13,fVar11 + fVar12 + fVar13),
                          CONCAT44(auVar15._0_4_ + auVar15._4_4_ + fVar14,
                                   auVar15._0_4_ + auVar15._4_4_ + fVar14),4,1);
      uStack_28 = (ulong)(uint)(fVar6 + fVar8 + auVar16._0_4_ + auVar16._4_4_);
      uVar4 = FUN_003a3e10(auStack_18,param_1,&local_b0,param_3);
      return uVar4 & 1;
    }
  }
  return uVar4 & 1;
}


