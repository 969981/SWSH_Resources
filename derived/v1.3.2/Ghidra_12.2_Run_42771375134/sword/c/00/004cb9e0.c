/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cb9e0; name: FUN_004cb9e0
 */


void FUN_004cb9e0(float param_1,float param_2,ushort *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  ushort uVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  
  if (*param_3 >> 2 != 0) {
    fVar10 = param_1 + param_2;
    fVar9 = param_2 * 4.0;
    fVar6 = param_1 + param_2 * 3.0;
    uVar1 = *(ushort *)(param_4 + 2);
    fVar15 = param_2 + param_2 + param_1;
    iVar5 = -(uint)(*param_3 >> 2);
    puVar4 = (undefined8 *)*param_4;
    do {
      pfVar2 = (float *)((long)puVar4 + (ulong)uVar1 * 4);
      iVar5 = iVar5 + 1;
      fVar11 = (float)*puVar4 * param_1;
      fVar12 = (float)((ulong)*puVar4 >> 0x20) * fVar10;
      fVar13 = (float)puVar4[1] * fVar15;
      fVar14 = (float)((ulong)puVar4[1] >> 0x20) * fVar6;
      auVar8._4_4_ = fVar12;
      auVar8._0_4_ = fVar11;
      auVar8._8_4_ = fVar13;
      auVar8._12_4_ = fVar14;
      auVar16._4_4_ = fVar12;
      auVar16._0_4_ = fVar11;
      auVar16._8_4_ = fVar13;
      auVar16._12_4_ = fVar14;
      auVar16 = NEON_ext(auVar8,auVar16,8,1);
      auVar7._0_4_ = *pfVar2 * param_1;
      auVar7._4_4_ = pfVar2[1] * fVar10;
      auVar7._8_4_ = pfVar2[2] * fVar15;
      auVar7._12_4_ = pfVar2[3] * fVar6;
      auVar8 = NEON_ext(auVar7,auVar7,8,1);
      uVar3 = CONCAT44(auVar7._4_4_,fVar12);
      param_1 = param_1 + fVar9;
      fVar10 = fVar10 + fVar9;
      fVar15 = fVar15 + fVar9;
      fVar6 = fVar6 + fVar9;
      param_5[1] = uVar3;
      uVar3 = CONCAT44(auVar7._0_4_,fVar11);
      *param_5 = uVar3;
      param_5[3] = CONCAT44(auVar8._4_4_,auVar16._4_4_);
      param_5[2] = CONCAT44(auVar8._0_4_,auVar16._0_4_);
      param_5 = param_5 + 4;
      puVar4 = puVar4 + 2;
    } while (iVar5 != 0);
  }
  return;
}


