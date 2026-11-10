/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00727010; name: FUN_00727010
 */


undefined1  [16]
FUN_00727010(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],long param_4,
            int param_5)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  
  uVar7 = param_3._8_8_;
  uVar6 = param_3._0_8_;
  uVar5 = param_2._8_8_;
  uVar4 = param_2._0_8_;
  lVar1 = *(long *)(param_4 + 0x350);
  FUN_00723030(lVar1);
  lVar1 = *(long *)(lVar1 + 0x1b8);
  auVar2 = FUN_00727a90(param_4);
  lVar1 = lVar1 + (long)param_5 * 0x130;
  uVar9 = *(undefined8 *)(lVar1 + 0xa0);
  fVar8 = (float)uVar9;
  fVar10 = (float)((ulong)uVar9 >> 0x20);
  fVar11 = (float)*(undefined8 *)(lVar1 + 0xa8);
  auVar3._12_4_ =
       auVar2._12_4_ * fVar8 + (float)((ulong)uVar5 >> 0x20) * fVar10 +
       (float)((ulong)uVar7 >> 0x20) * fVar11;
  auVar3._8_4_ = auVar2._8_4_ * fVar8 + (float)uVar5 * fVar10 + (float)uVar7 * fVar11;
  auVar3._4_4_ = auVar2._4_4_ * fVar8 + (float)((ulong)uVar4 >> 0x20) * fVar10 +
                 (float)((ulong)uVar6 >> 0x20) * fVar11;
  auVar3._0_4_ = auVar2._0_4_ * fVar8 + (float)uVar4 * fVar10 + (float)uVar6 * fVar11;
  return auVar3;
}


