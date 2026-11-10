/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0017e5f0; name: FUN_0017e5f0
 */


undefined1  [16] FUN_0017e5f0(long *param_1,float *param_2,float *param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float *pfVar5;
  float fVar6;
  float fVar8;
  float fVar9;
  undefined1 auVar7 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  
  if ((ulong)*(ushort *)(param_1 + 2) == 0xffff) {
    pfVar5 = (float *)param_1[1];
    return ZEXT416((uint)(*pfVar5 * *param_2 + pfVar5[1] * param_2[1] + pfVar5[2] * param_2[2] +
                         pfVar5[4] * *param_3 + pfVar5[5] * param_3[1] + pfVar5[6] * param_3[2]));
  }
  lVar1 = *param_1 + (ulong)*(ushort *)(param_1 + 2) * 0x20;
  fVar10 = *param_2 * *(float *)(lVar1 + 0x80);
  fVar11 = param_2[1] * *(float *)(lVar1 + 0x84);
  fVar12 = param_2[2] * *(float *)(lVar1 + 0x88);
  fVar13 = *(float *)(lVar1 + 0x8c) * 0.0;
  auVar3._4_4_ = fVar11;
  auVar3._0_4_ = fVar10;
  auVar3._8_4_ = fVar12;
  auVar3._12_4_ = fVar13;
  auVar4._4_4_ = fVar11;
  auVar4._0_4_ = fVar10;
  auVar4._8_4_ = fVar12;
  auVar4._12_4_ = fVar13;
  auVar14 = NEON_ext(auVar3,auVar4,8,1);
  fVar12 = auVar14._0_4_ + auVar14._4_4_;
  fVar6 = *param_3 * (float)*(undefined8 *)(lVar1 + 0x90);
  fVar8 = param_3[1] * (float)((ulong)*(undefined8 *)(lVar1 + 0x90) >> 0x20);
  fVar13 = param_3[2] * (float)*(undefined8 *)(lVar1 + 0x98);
  fVar9 = (float)((ulong)*(undefined8 *)(lVar1 + 0x98) >> 0x20) * 0.0;
  auVar14._4_4_ = fVar8;
  auVar14._0_4_ = fVar6;
  auVar14._8_4_ = fVar13;
  auVar14._12_4_ = fVar9;
  auVar2._4_4_ = fVar8;
  auVar2._0_4_ = fVar6;
  auVar2._8_4_ = fVar13;
  auVar2._12_4_ = fVar9;
  auVar14 = NEON_ext(auVar14,auVar2,8,1);
  fVar13 = auVar14._0_4_ + auVar14._4_4_;
  auVar7._0_4_ = fVar10 + fVar11 + fVar12 + fVar6 + fVar8 + fVar13;
  auVar7._4_4_ = fVar10 + fVar11 + fVar12 + fVar6 + fVar8 + fVar13;
  auVar7._8_8_ = 0;
  return auVar7;
}


