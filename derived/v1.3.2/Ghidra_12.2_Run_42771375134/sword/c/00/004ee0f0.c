/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ee0f0; name: FUN_004ee0f0
 */


bool FUN_004ee0f0(float *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  bool bVar3;
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
  
  if (((*PTR_DAT_02713770 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_02713770), puVar1 = PTR_DAT_02713778, iVar2 != 0)) {
    *(undefined8 *)PTR_DAT_02713778 = 0x3a83126f3a83126f;
    *(undefined4 *)(puVar1 + 8) = 0x3a83126f;
    __cxa_guard_release(PTR_DAT_02713770);
  }
  fVar9 = *(float *)(param_2 + 0x30);
  fVar8 = *(float *)(param_2 + 0x34);
  fVar6 = param_1[2];
  fVar7 = *(float *)(param_2 + 0x38);
  fVar12 = *(float *)(param_2 + 0x3c) - fVar9;
  fVar11 = *(float *)(param_2 + 0x44) - fVar7;
  fVar4 = *param_1;
  fVar5 = param_1[1];
  fVar13 = *(float *)(param_2 + 0x40) - fVar8;
  fVar14 = *(float *)(param_2 + 0x4c) - fVar8;
  fVar15 = *(float *)(param_2 + 0x48) - fVar9;
  fVar16 = *(float *)(param_2 + 0x50) - fVar7;
  fVar10 = fVar16 * fVar13 - fVar14 * fVar11;
  fVar13 = fVar14 * fVar12 - fVar15 * fVar13;
  fVar11 = fVar15 * fVar11 - fVar16 * fVar12;
  fVar12 = SQRT(fVar13 * fVar13 + fVar10 * fVar10 + fVar11 * fVar11);
  if (fVar12 == 0.0) {
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar13 = 0.0;
  }
  else {
    fVar12 = 1.0 / fVar12;
    fVar10 = fVar10 * fVar12;
    fVar11 = fVar11 * fVar12;
    fVar13 = fVar13 * fVar12;
  }
  bVar3 = false;
  if (((ABS(fVar10 * fVar5 - fVar11 * fVar4) <= *(float *)(PTR_DAT_02713778 + 8)) &&
      (ABS(fVar13 * fVar4 - fVar10 * fVar6) <= *(float *)(PTR_DAT_02713778 + 4))) &&
     (ABS(fVar11 * fVar6 - fVar13 * fVar5) <= *(float *)PTR_DAT_02713778)) {
    bVar3 = ABS((fVar9 * fVar4 + fVar5 * fVar8 + fVar6 * fVar7) - param_1[3]) <= DAT_01d4c6ac;
  }
  return bVar3;
}


