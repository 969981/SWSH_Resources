/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00231c50; name: FUN_00231c50
 */


int FUN_00231c50(long param_1,float *param_2,float *param_3,long param_4)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
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
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if (((*(float *)(param_1 + 4) == 1.0) && (*(float *)(param_1 + 8) == 1.0)) &&
     (*(float *)(param_1 + 0xc) == 1.0)) {
    iVar2 = 1;
  }
  else {
    FUN_001b0f90(param_2,(float *)(param_1 + 4),param_1 + 0x10);
    iVar2 = 0;
  }
  pfVar1 = *(float **)(param_1 + 0x30);
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  fVar6 = param_2[3];
  fVar7 = param_2[4];
  fVar8 = param_2[5];
  fVar9 = *pfVar1;
  fVar11 = pfVar1[1];
  fVar14 = param_2[6];
  fVar15 = param_2[7];
  fVar16 = pfVar1[2];
  fVar17 = pfVar1[3];
  fVar13 = fVar9 * *param_2 + fVar11 * fVar6 + fVar16 * fVar14;
  fVar18 = param_2[8];
  fVar10 = fVar9 * fVar4 + fVar11 * fVar8 + fVar16 * fVar18;
  fVar12 = fVar9 * fVar3 + fVar11 * fVar7 + fVar16 * fVar15;
  fVar16 = pfVar1[4];
  fVar5 = pfVar1[5];
  fVar9 = fabsf(*param_2 * fVar17);
  fVar6 = fabsf(fVar6 * fVar16);
  fVar11 = fabsf(fVar14 * fVar5);
  fVar11 = fVar9 + fVar6 + fVar11;
  fVar9 = fabsf(fVar3 * fVar17);
  fVar6 = fabsf(fVar7 * fVar16);
  fVar3 = fabsf(fVar15 * fVar5);
  fVar3 = fVar9 + fVar6 + fVar3;
  fVar9 = fabsf(fVar4 * fVar17);
  fVar6 = fabsf(fVar8 * fVar16);
  fVar16 = fabsf(fVar18 * fVar5);
  fVar16 = fVar9 + fVar6 + fVar16;
  param_3[1] = fVar12 - fVar3;
  *param_3 = fVar13 - fVar11;
  param_3[2] = fVar10 - fVar16;
  param_3[3] = fVar13 + fVar11;
  param_3[4] = fVar12 + fVar3;
  param_3[5] = fVar10 + fVar16;
  FUN_00232cd0(param_4,*(undefined8 *)(param_1 + 0x30),param_2);
  if (iVar2 == 0) {
    *(undefined8 *)(param_4 + 0x40) = 0;
    *(undefined8 *)(param_4 + 0x48) = 0;
  }
  return iVar2;
}


