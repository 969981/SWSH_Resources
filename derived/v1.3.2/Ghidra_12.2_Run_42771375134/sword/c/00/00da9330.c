/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00da9330; name: FUN_00da9330
 */


/* WARNING: Removing unreachable block (ram,0x00da9390) */

void FUN_00da9330(undefined8 param_1,long param_2,float *param_3)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  puVar1 = PTR_PTR_02718e90;
  if (*(int *)(param_2 + 0x28) == 0) {
    fVar4 = (float)*(undefined8 *)(param_2 + 0x40);
    fVar12 = param_3[1];
    fVar8 = *param_3 * (float)param_1;
    fVar9 = DAT_01d4bc8c * (float)*(undefined8 *)(param_2 + 0x48) +
            DAT_01d4c02c * fVar4 +
            DAT_01d4bb80 * (float)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20);
    fVar2 = (float)(**(code **)PTR_PTR_02718e90)(fVar8);
    fVar13 = *(float *)(param_2 + 0x44);
    fVar4 = fVar4 + fVar2 * (fVar9 - fVar4);
    fVar2 = (float)(**(code **)puVar1)(fVar8);
    fVar15 = *(float *)(param_2 + 0x48);
    fVar13 = fVar13 + (fVar9 - fVar13) * fVar2;
    fVar2 = (float)(**(code **)puVar1)(fVar8);
    fVar15 = fVar15 + (fVar9 - fVar15) * fVar2;
    fVar2 = (float)(**(code **)puVar1)(param_1);
    fVar8 = (float)(**(code **)puVar1)(param_1);
    fVar9 = (float)(**(code **)puVar1)(param_1);
    fVar14 = param_3[4];
    fVar15 = fVar15 + (fVar12 * fVar15 - fVar15) * fVar9;
    fVar9 = (float)(**(code **)puVar1)(param_1);
    fVar16 = param_3[5];
    fVar3 = (float)(**(code **)puVar1)(param_1);
    fVar10 = param_3[6];
    fVar11 = (float)(**(code **)puVar1)(param_1);
    fVar11 = (fVar10 + -1.0) * fVar11;
    fVar2 = (fVar4 + (fVar12 * fVar4 - fVar4) * fVar2) * ((fVar14 + -1.0) * fVar9 + 1.0);
    fVar8 = (fVar13 + (fVar12 * fVar13 - fVar13) * fVar8) * ((fVar16 + -1.0) * fVar3 + 1.0);
  }
  else {
    if (*(int *)(param_2 + 0x28) != 1) {
      uVar7 = *(ulong *)(param_2 + 0x48);
      uVar5 = *(undefined8 *)(param_2 + 0x40);
      goto LAB_00da96a8;
    }
    uVar6 = *(undefined8 *)(param_3 + 6);
    uVar5 = *(undefined8 *)(param_3 + 4);
    fVar9 = *param_3;
    fVar2 = param_3[1];
    fVar8 = fVar2;
    if (fVar2 <= 0.5 / fVar2) {
      fVar8 = 0.5 / fVar2;
    }
    fVar11 = *(float *)(param_2 + 0x2c);
    fVar3 = (float)(**(code **)PTR_PTR_02718e90)(param_1);
    *(float *)(param_2 + 0x2c) = fVar11 + fVar3 * ((fVar11 + (1.0 - fVar2) * 0.5) - fVar11);
    fVar12 = (float)*(undefined8 *)(param_2 + 0x40);
    fVar9 = fVar9 * (float)param_1;
    fVar3 = DAT_01d4bc8c * (float)*(undefined8 *)(param_2 + 0x48) +
            DAT_01d4c02c * fVar12 +
            DAT_01d4bb80 * (float)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20);
    fVar2 = (float)(**(code **)puVar1)(fVar9);
    fVar14 = *(float *)(param_2 + 0x44);
    fVar12 = fVar12 + fVar2 * (fVar3 - fVar12);
    fVar2 = (float)(**(code **)puVar1)(fVar9);
    fVar15 = *(float *)(param_2 + 0x48);
    fVar14 = fVar14 + (fVar3 - fVar14) * fVar2;
    fVar2 = (float)(**(code **)puVar1)(fVar9);
    fVar15 = fVar15 + (fVar3 - fVar15) * fVar2;
    fVar2 = (float)(**(code **)puVar1)(param_1);
    fVar9 = (float)(**(code **)puVar1)(param_1);
    fVar3 = (float)(**(code **)puVar1)(param_1);
    fVar15 = fVar15 + (fVar8 * fVar15 - fVar15) * fVar3;
    fVar3 = (float)(**(code **)puVar1)(param_1);
    fVar4 = (float)(**(code **)puVar1)(param_1);
    fVar11 = (float)(**(code **)puVar1)(param_1);
    fVar11 = ((float)uVar6 + -1.0) * fVar11;
    fVar2 = (fVar12 + (fVar8 * fVar12 - fVar12) * fVar2) * (((float)uVar5 + -1.0) * fVar3 + 1.0);
    fVar8 = (fVar14 + (fVar8 * fVar14 - fVar14) * fVar9) *
            (((float)((ulong)uVar5 >> 0x20) + -1.0) * fVar4 + 1.0);
  }
  uVar5 = CONCAT44(fVar8,fVar2);
  uVar7 = (ulong)(uint)(fVar15 * (fVar11 + 1.0));
  *(ulong *)(param_2 + 0x48) = uVar7;
  *(undefined8 *)(param_2 + 0x40) = uVar5;
LAB_00da96a8:
  fVar9 = (float)((ulong)uVar5 >> 0x20);
  fVar8 = (float)uVar5;
  fVar3 = (float)uVar7;
  fVar2 = fVar9;
  if (fVar9 <= fVar8) {
    fVar2 = fVar8;
  }
  fVar11 = fVar3;
  if (fVar3 <= fVar2) {
    fVar11 = fVar2;
  }
  if (1.0 < fVar11) {
    fVar2 = 1.0 / fVar11;
    *(ulong *)(param_2 + 0x48) = CONCAT44((float)(uVar7 >> 0x20) * fVar2,fVar3 * fVar2);
    *(ulong *)(param_2 + 0x40) = CONCAT44(fVar9 * fVar2,fVar8 * fVar2);
    *(float *)(param_2 + 0x2c) = fVar11 * *(float *)(param_2 + 0x2c);
  }
  return;
}


