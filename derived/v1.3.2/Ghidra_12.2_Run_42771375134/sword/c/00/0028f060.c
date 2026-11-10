/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0028f060; name: FUN_0028f060
 */


undefined8
FUN_0028f060(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 *param_9)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float *pfVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined8 local_20;
  ulong uStack_18;
  
  pfVar6 = (float *)(*(long *)(*(long *)(param_1 + 0x11c0) + 0x18) + (param_3 & 0xffffffff) * 0x14);
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x11c8) + 0x30);
  fVar8 = *pfVar6;
  fVar9 = pfVar6[1];
  fVar10 = pfVar6[2];
  fVar12 = (float)*puVar7 * fVar8;
  fVar13 = (float)((ulong)*puVar7 >> 0x20) * fVar9;
  fVar14 = (float)puVar7[1] * fVar10;
  fVar15 = (float)((ulong)puVar7[1] >> 0x20) * 0.0;
  auVar4._4_4_ = fVar13;
  auVar4._0_4_ = fVar12;
  auVar4._8_4_ = fVar14;
  auVar4._12_4_ = fVar15;
  auVar5._4_4_ = fVar13;
  auVar5._0_4_ = fVar12;
  auVar5._8_4_ = fVar14;
  auVar5._12_4_ = fVar15;
  auVar20 = NEON_ext(auVar4,auVar5,8,1);
  auVar17._0_4_ = fVar8 * *(float *)(puVar7 + 2);
  auVar17._4_4_ = fVar9 * *(float *)((long)puVar7 + 0x14);
  auVar17._8_4_ = fVar10 * *(float *)(puVar7 + 3);
  auVar17._12_4_ = *(float *)((long)puVar7 + 0x1c) * 0.0;
  fVar14 = auVar20._0_4_ + auVar20._4_4_;
  auVar20 = NEON_ext(auVar17,auVar17,8,1);
  fVar15 = auVar20._0_4_ + auVar20._4_4_;
  fVar8 = fVar8 * *(float *)(puVar7 + 4);
  fVar9 = fVar9 * *(float *)((long)puVar7 + 0x24);
  fVar11 = *(float *)((long)puVar7 + 0x2c) * 0.0;
  auVar20._4_4_ = fVar9;
  auVar20._0_4_ = fVar8;
  auVar20._8_4_ = fVar10 * *(float *)(puVar7 + 5);
  auVar20._12_4_ = fVar11;
  auVar1._4_4_ = fVar9;
  auVar1._0_4_ = fVar8;
  auVar1._8_4_ = fVar10 * *(float *)(puVar7 + 5);
  auVar1._12_4_ = fVar11;
  auVar20 = NEON_ext(auVar20,auVar1,8,1);
  fVar8 = fVar8 + fVar9 + auVar20._0_4_ + auVar20._4_4_;
  uVar18 = NEON_ext(CONCAT44(fVar12 + fVar13 + fVar14,fVar12 + fVar13 + fVar14),
                    CONCAT44(auVar17._0_4_ + auVar17._4_4_ + fVar15,
                             auVar17._0_4_ + auVar17._4_4_ + fVar15),4,1);
  fVar11 = (float)uVar18;
  fVar12 = (float)((ulong)uVar18 >> 0x20);
  fVar9 = fVar11 * fVar11;
  fVar10 = fVar12 * fVar12;
  auVar2._4_4_ = fVar10;
  auVar2._0_4_ = fVar9;
  auVar2._8_4_ = fVar8 * fVar8;
  auVar2._12_4_ = 0;
  auVar3._4_4_ = fVar10;
  auVar3._0_4_ = fVar9;
  auVar3._8_4_ = fVar8 * fVar8;
  auVar3._12_4_ = 0;
  auVar20 = NEON_ext(auVar2,auVar3,8,1);
  fVar15 = auVar20._0_4_ + auVar20._4_4_;
  fVar14 = fVar9 + fVar10 + fVar15;
  fVar15 = fVar9 + fVar10 + fVar15;
  uVar18 = NEON_frsqrte(CONCAT44(fVar15,fVar14),4);
  fVar9 = (float)uVar18;
  fVar10 = (float)((ulong)uVar18 >> 0x20);
  uVar18 = NEON_frsqrts(CONCAT44(fVar10 * fVar10,fVar9 * fVar9),CONCAT44(fVar15,fVar14),4);
  fVar9 = fVar9 * (float)uVar18;
  fVar10 = fVar10 * (float)((ulong)uVar18 >> 0x20);
  uVar18 = NEON_frsqrts(CONCAT44(fVar10 * fVar10,fVar9 * fVar9),CONCAT44(fVar15,fVar14),4);
  fVar9 = fVar9 * (float)uVar18;
  fVar10 = fVar10 * (float)((ulong)uVar18 >> 0x20);
  uVar18 = NEON_frsqrts(CONCAT44(fVar10 * fVar10,fVar9 * fVar9),CONCAT44(fVar15,fVar14),4);
  fVar9 = fVar9 * (float)uVar18;
  fVar10 = fVar10 * (float)((ulong)uVar18 >> 0x20);
  uVar18 = NEON_frsqrts(CONCAT44(fVar10 * fVar10,fVar9 * fVar9),CONCAT44(fVar15,fVar14),4);
  uVar16 = CONCAT44(fVar15 * fVar10 * (float)((ulong)uVar18 >> 0x20),fVar14 * fVar9 * (float)uVar18)
  ;
  uVar16 = uVar16 ^ (uVar16 ^ CONCAT44(fVar15,fVar14)) &
                    CONCAT44(-(uint)(fVar14 == 0.0),-(uint)(fVar14 == 0.0));
  uVar18 = NEON_frecpe(uVar16,4);
  uVar19 = NEON_frecps(uVar16,uVar18,4);
  fVar14 = (float)uVar18 * (float)uVar19;
  fVar15 = (float)((ulong)uVar18 >> 0x20) * (float)((ulong)uVar19 >> 0x20);
  uVar18 = NEON_frecps(uVar16,CONCAT44(fVar15,fVar14),4);
  fVar14 = fVar14 * (float)uVar18;
  fVar15 = fVar15 * (float)((ulong)uVar18 >> 0x20);
  uVar18 = NEON_frecps(uVar16,CONCAT44(fVar15,fVar14),4);
  fVar14 = fVar14 * (float)uVar18;
  fVar15 = fVar15 * (float)((ulong)uVar18 >> 0x20);
  uVar18 = NEON_frecps(uVar16,CONCAT44(fVar15,fVar14),4);
  fVar14 = fVar14 * (float)uVar18;
  uVar18 = NEON_frecps(uVar16,CONCAT44(fVar15 * (float)((ulong)uVar18 >> 0x20),fVar14),4);
  fVar14 = fVar14 * (float)uVar18;
  uStack_18 = (ulong)(uint)(fVar8 * fVar14);
  local_20 = CONCAT44(fVar12 * fVar14,fVar11 * fVar14);
  param_9[1] = (ulong)(uint)-(fVar8 * fVar14);
  *param_9 = CONCAT44(-(fVar12 * fVar14),-(fVar11 * fVar14));
  FUN_0028db00(*(undefined8 *)(param_1 + 0x11c0),pfVar6,param_2,param_4,param_5,
               *(undefined8 *)(param_1 + 0x11c8),param_6,param_7,param_8,&local_20,
               *(undefined8 *)(param_1 + 0xea0));
  return 1;
}


