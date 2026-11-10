/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ddd2f0; name: FUN_00ddd2f0
 */


void FUN_00ddd2f0(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  
  FUN_00dbd9b0();
  if ((*(char *)(param_1 + 0x621) == '\0') &&
     (lVar5 = FUN_00794780(*(undefined8 *)(param_1 + 0x5e0)), lVar5 != 0)) {
    lVar5 = FUN_019d6820(lVar5,0);
    if ((lVar5 == 0) || (lVar5 = *(long *)(*(long *)(lVar5 + 0x238) + 0x310), lVar5 == 0)) {
      *(undefined1 *)(param_1 + 0x621) = 1;
      return;
    }
    fVar6 = *(float *)(lVar5 + 0x1c);
    fVar12 = *(float *)(lVar5 + 0x24);
    fVar8 = *(float *)(lVar5 + 0x20);
    uVar4 = *(undefined8 *)(lVar5 + 0x1c);
    *(ulong *)(param_1 + 0x608) = (ulong)(uint)fVar12;
    *(undefined8 *)(param_1 + 0x600) = uVar4;
    fVar6 = fVar6 * fVar6;
    fVar8 = fVar8 * fVar8;
    fVar7 = *(float *)(lVar5 + 0x2c);
    fVar10 = *(float *)(lVar5 + 0x34);
    fVar9 = *(float *)(lVar5 + 0x30);
    uVar4 = *(undefined8 *)(lVar5 + 0x2c);
    *(undefined1 *)(param_1 + 0x621) = 1;
    auVar11._4_4_ = fVar8;
    auVar11._0_4_ = fVar6;
    auVar11._8_4_ = fVar12 * fVar12;
    auVar11._12_4_ = 0;
    auVar3._4_4_ = fVar8;
    auVar3._0_4_ = fVar6;
    auVar3._8_4_ = fVar12 * fVar12;
    auVar3._12_4_ = 0;
    auVar11 = NEON_ext(auVar11,auVar3,8,1);
    *(ulong *)(param_1 + 0x618) = (ulong)(uint)fVar10;
    *(undefined8 *)(param_1 + 0x610) = uVar4;
    if (0.0 < auVar11._0_4_ + fVar6 + auVar11._4_4_ + fVar8) {
      fVar7 = fVar7 * fVar7;
      fVar9 = fVar9 * fVar9;
      auVar1._4_4_ = fVar9;
      auVar1._0_4_ = fVar7;
      auVar1._8_4_ = fVar10 * fVar10;
      auVar1._12_4_ = 0;
      auVar2._4_4_ = fVar9;
      auVar2._0_4_ = fVar7;
      auVar2._8_4_ = fVar10 * fVar10;
      auVar2._12_4_ = 0;
      auVar11 = NEON_ext(auVar1,auVar2,8,1);
      if (0.0 < auVar11._0_4_ + fVar7 + auVar11._4_4_ + fVar9) {
        *(undefined1 *)(param_1 + 0x620) = 1;
        return;
      }
    }
  }
  return;
}


