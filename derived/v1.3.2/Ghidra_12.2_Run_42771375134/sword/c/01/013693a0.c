/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013693a0; name: FUN_013693a0
 */


void FUN_013693a0(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  ulong uVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  uVar8 = FUN_012def10();
  if (((uVar8 & 1) != 0) && (uVar8 = FUN_012def20(param_1), (uVar8 & 1) != 0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x4a8);
    uVar4 = *(undefined8 *)(param_1 + 0x4a0);
    lVar9 = *(long *)(*(long *)(param_1 + 0x490) + 0x120);
    iVar1 = *(int *)(*(long *)(*(long *)(param_1 + 0x490) + 0x128) + 0x40);
    FUN_00723030(lVar9,iVar1);
    lVar10 = *(long *)(lVar9 + 0x1b8) + (long)iVar1 * 0x130;
    fVar16 = (float)*(undefined8 *)(lVar10 + 0xd8);
    uVar5 = *(undefined8 *)(lVar10 + 0xd0);
    fVar15 = (float)uVar5;
    fVar12 = (float)((ulong)uVar5 >> 0x20);
    fVar20 = (float)uVar4;
    fVar18 = fVar20 * fVar20;
    fVar21 = (float)((ulong)uVar4 >> 0x20);
    fVar19 = fVar21 * fVar21;
    fVar22 = (float)uVar6;
    fVar23 = (float)((ulong)uVar6 >> 0x20);
    auVar17._4_4_ = fVar19;
    auVar17._0_4_ = fVar18;
    auVar17._8_4_ = fVar22 * fVar22;
    auVar17._12_4_ = fVar23 * fVar23;
    auVar7._4_4_ = fVar19;
    auVar7._0_4_ = fVar18;
    auVar7._8_4_ = fVar22 * fVar22;
    auVar7._12_4_ = fVar23 * fVar23;
    auVar17 = NEON_ext(auVar17,auVar7,8,1);
    fVar11 = (float)*(undefined8 *)(lVar9 + 0x90) +
             *(float *)(lVar9 + 0x60) * fVar15 + *(float *)(lVar9 + 0x70) * fVar12 +
             *(float *)(lVar9 + 0x80) * fVar16;
    fVar13 = (float)((ulong)*(undefined8 *)(lVar9 + 0x90) >> 0x20) +
             *(float *)(lVar9 + 100) * fVar15 + *(float *)(lVar9 + 0x74) * fVar12 +
             *(float *)(lVar9 + 0x84) * fVar16;
    fVar14 = (float)*(undefined8 *)(lVar9 + 0x98) +
             *(float *)(lVar9 + 0x68) * fVar15 + *(float *)(lVar9 + 0x78) * fVar12 +
             *(float *)(lVar9 + 0x88) * fVar16;
    fVar15 = (float)((ulong)*(undefined8 *)(lVar9 + 0x98) >> 0x20) +
             *(float *)(lVar9 + 0x6c) * fVar15 + *(float *)(lVar9 + 0x7c) * fVar12 +
             *(float *)(lVar9 + 0x8c) * fVar16;
    *(ulong *)(param_1 + 0x4a8) = CONCAT44(fVar15,fVar14);
    *(ulong *)(param_1 + 0x4a0) = CONCAT44(fVar13,fVar11);
    if (auVar17._0_4_ + fVar18 + auVar17._4_4_ + fVar19 != 0.0) {
      lVar9 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
      fVar12 = (float)((double)*(long *)(lVar9 + 8) / DAT_01cd50a0);
      fVar11 = (fVar11 - fVar20) * fVar12;
      fVar13 = (fVar13 - fVar21) * fVar12;
      fVar14 = (fVar14 - fVar22) * fVar12;
      fVar12 = (fVar15 - fVar23) * fVar12;
      fVar15 = *(float *)(param_1 + 0x4b0) - fVar11;
      fVar16 = *(float *)(param_1 + 0x4b4) - fVar13;
      fVar18 = *(float *)(param_1 + 0x4b8) - fVar14;
      fVar19 = *(float *)(param_1 + 0x4bc) - fVar12;
      *(ulong *)(param_1 + 0x4b8) = CONCAT44(fVar12,fVar14);
      *(ulong *)(param_1 + 0x4b0) = CONCAT44(fVar13,fVar11);
      fVar15 = fVar15 * fVar15;
      fVar16 = fVar16 * fVar16;
      fVar18 = fVar18 * fVar18;
      fVar19 = fVar19 * fVar19;
      auVar2._4_4_ = fVar16;
      auVar2._0_4_ = fVar15;
      auVar2._8_4_ = fVar18;
      auVar2._12_4_ = fVar19;
      auVar3._4_4_ = fVar16;
      auVar3._0_4_ = fVar15;
      auVar3._8_4_ = fVar18;
      auVar3._12_4_ = fVar19;
      auVar17 = NEON_ext(auVar2,auVar3,8,1);
      if (DAT_01d4c260 < auVar17._0_4_ + fVar15 + auVar17._4_4_ + fVar16) {
        local_50 = 0xe80bd2461591fbed;
        local_48 = "Play_Camp_SwingBell";
        local_40 = 0x13;
        local_38 = 0;
        FUN_012d6d40(&local_50);
        if (local_38 != 0) {
          (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        }
      }
    }
  }
  return;
}


