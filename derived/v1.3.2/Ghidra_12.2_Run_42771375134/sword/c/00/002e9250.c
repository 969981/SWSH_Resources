/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002e9250; name: FUN_002e9250
 */


undefined8
FUN_002e9250(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
            undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,undefined8 *param_9,
            byte param_10)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar8;
  ulong uVar7;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar18;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 *puVar19;
  undefined *local_140;
  long lStack_138;
  undefined *local_130;
  long local_128;
  void *pvStack_120;
  undefined4 local_110;
  uint uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  uint local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e4;
  undefined1 local_c4 [4];
  undefined1 auStack_c0 [4];
  undefined1 auStack_bc [4];
  undefined8 local_b8;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar4 = FUN_002e94f0();
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    *param_7 = local_88;
    if (((float)local_88 == 0.0) && ((param_10 & 1) != 0)) {
      local_128 = *(long *)(param_1 + 8);
      pvStack_120 = *(void **)(param_1 + 0x10);
      lVar6 = *(long *)(param_2 + 8);
      fVar9 = *(float *)(local_128 + 0x10) + *(float *)(lVar6 + 0x10);
      local_90 = CONCAT44(fVar9 * 100.0,fVar9 * 100.0);
      local_c4[0] = 0;
      local_130 = PTR_DAT_02711fd8 + 0x10;
      memcpy(&local_110,pvStack_120,0x40);
      auVar13._4_4_ = local_f0;
      auVar13._0_4_ = local_110;
      auVar13._8_4_ = uStack_10c;
      auVar13._12_4_ = uStack_ec;
      auVar17._4_4_ = local_f0;
      auVar17._0_4_ = local_110;
      auVar17._8_4_ = uStack_10c;
      auVar17._12_4_ = uStack_ec;
      auVar13 = NEON_ext(auVar13,auVar17,8,1);
      auVar1._4_4_ = 0;
      auVar1._0_4_ = local_100;
      auVar1._8_4_ = uStack_fc;
      auVar1._12_4_ = 0;
      auVar2._4_4_ = 0;
      auVar2._0_4_ = local_100;
      auVar2._8_4_ = uStack_fc;
      auVar2._12_4_ = 0;
      auVar17 = NEON_ext(auVar1,auVar2,8,1);
      uStack_10c = local_100;
      uStack_104 = 0;
      local_100 = auVar13._0_4_;
      uStack_fc = auVar17._0_4_;
      uStack_f4 = auVar17._4_4_;
      local_f0 = uStack_108;
      uStack_ec = uStack_f8;
      uStack_e4 = 0;
      local_140 = PTR_DAT_02712000 + 0x10;
                    /* try { // try from 002e935c to 002e942f has its CatchHandler @ 002e94e4 */
      puVar19 = auStack_c0;
      lStack_138 = lVar6;
      uStack_f8 = auVar13._4_4_;
      iVar3 = FUN_002ea360(&local_130,&local_140,param_3,&local_90,&local_a0,auStack_b0,&local_80,
                           &local_b8,auStack_bc,puVar19,local_c4,0);
      if ((iVar3 == 5) &&
         (iVar3 = FUN_00258810(param_1,param_2,auStack_bc,auStack_c0,local_c4[0],&local_a0,
                               auStack_b0,&local_80,&local_b8,(ulong)puVar19 & 0xffffffffffffff00),
         1 < iVar3 - 5U)) {
        fVar10 = -(float)*param_6;
        fVar11 = -(float)((ulong)*param_6 >> 0x20);
        fVar12 = -(float)param_6[1];
        local_b8 = 0;
        auVar14._0_4_ = fVar10 * fVar10;
        auVar14._4_4_ = fVar11 * fVar11;
        auVar14._8_4_ = fVar12 * fVar12;
        auVar14._12_4_ = 0;
        auVar13 = NEON_ext(auVar14,auVar14,8,1);
        fVar8 = auVar13._0_4_ + auVar13._4_4_;
        fVar9 = auVar14._0_4_ + auVar14._4_4_ + fVar8;
        fVar8 = auVar14._0_4_ + auVar14._4_4_ + fVar8;
        uVar7 = CONCAT44(fVar8,fVar9);
        uVar5 = NEON_frsqrte(uVar7,4);
        fVar15 = (float)uVar5;
        fVar18 = (float)((ulong)uVar5 >> 0x20);
        uVar5 = NEON_frsqrts(CONCAT44(fVar18 * fVar18,fVar15 * fVar15),uVar7,4);
        fVar15 = fVar15 * (float)uVar5;
        fVar18 = fVar18 * (float)((ulong)uVar5 >> 0x20);
        uVar5 = NEON_frsqrts(CONCAT44(fVar18 * fVar18,fVar15 * fVar15),uVar7,4);
        fVar15 = fVar15 * (float)uVar5;
        fVar18 = fVar18 * (float)((ulong)uVar5 >> 0x20);
        uVar5 = NEON_frsqrts(CONCAT44(fVar18 * fVar18,fVar15 * fVar15),uVar7,4);
        fVar15 = fVar15 * (float)uVar5;
        fVar18 = fVar18 * (float)((ulong)uVar5 >> 0x20);
        uVar5 = NEON_frsqrts(CONCAT44(fVar18 * fVar18,fVar15 * fVar15),uVar7,4);
        uVar4 = CONCAT44(fVar8 * fVar18 * (float)((ulong)uVar5 >> 0x20),
                         fVar9 * fVar15 * (float)uVar5);
        uVar4 = uVar4 ^ (uVar4 ^ uVar7) & CONCAT44(-(uint)(fVar9 == 0.0),-(uint)(fVar9 == 0.0));
        uVar5 = NEON_frecpe(uVar4,4);
        uVar16 = NEON_frecps(uVar4,uVar5,4);
        fVar9 = (float)uVar5 * (float)uVar16;
        fVar8 = (float)((ulong)uVar5 >> 0x20) * (float)((ulong)uVar16 >> 0x20);
        uVar5 = NEON_frecps(uVar4,CONCAT44(fVar8,fVar9),4);
        fVar9 = fVar9 * (float)uVar5;
        fVar8 = fVar8 * (float)((ulong)uVar5 >> 0x20);
        uVar5 = NEON_frecps(uVar4,CONCAT44(fVar8,fVar9),4);
        fVar9 = fVar9 * (float)uVar5;
        fVar8 = fVar8 * (float)((ulong)uVar5 >> 0x20);
        uVar5 = NEON_frecps(uVar4,CONCAT44(fVar8,fVar9),4);
        fVar9 = fVar9 * (float)uVar5;
        uVar5 = NEON_frecps(uVar4,CONCAT44(fVar8 * (float)((ulong)uVar5 >> 0x20),fVar9),4);
        fVar9 = fVar9 * (float)uVar5;
        local_a0 = 0;
        uStack_98 = 0;
        uStack_78 = (ulong)(uint)(fVar12 * fVar9);
        local_80 = CONCAT44(fVar11 * fVar9,fVar10 * fVar9);
      }
      uVar5 = NEON_fmin(0,local_b8,4);
      *param_7 = uVar5;
    }
    else {
      local_a0 = local_70;
      uStack_98 = uStack_68;
    }
    uVar5 = 1;
    param_9[1] = uStack_98;
    *param_9 = local_a0;
    param_8[1] = uStack_78;
    *param_8 = local_80;
  }
  return uVar5;
}


