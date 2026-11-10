/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f0300; name: FUN_004f0300
 */


void FUN_004f0300(long param_1,int param_2,int param_3,long param_4)

{
  float *pfVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar4 = param_4 + (long)param_2 * 0x28;
  *(int *)(param_4 + (long)param_2 * 4) = param_3;
  lVar3 = (long)param_3;
  piVar2 = (int *)(param_4 + (long)param_3 * 4 + 0x2c);
  lVar5 = param_4 + (long)param_3 * 0x18;
  pfVar1 = (float *)(lVar5 + 0x34);
  if (*piVar2 == 0) {
    *(undefined8 *)(lVar5 + 0x44) = *(undefined8 *)(lVar4 + 0x80);
    *(undefined8 *)(lVar5 + 0x3c) = *(undefined8 *)(lVar4 + 0x78);
    *(undefined8 *)pfVar1 = *(undefined8 *)(lVar4 + 0x70);
    lVar4 = param_4 + lVar3 * 0x18;
    fVar9 = *(float *)(lVar4 + 0x3c);
    fVar8 = *(float *)(lVar4 + 0x40);
    fVar7 = *(float *)(lVar4 + 0x34);
    fVar11 = *(float *)(lVar4 + 0x38);
    fVar10 = *(float *)(lVar4 + 0x44);
    fVar12 = *(float *)(lVar4 + 0x48);
  }
  else {
    lVar5 = param_4 + (long)param_2 * 0x28;
    lVar6 = param_4 + lVar3 * 0x18;
    fVar7 = (float)NEON_fminnm(*(undefined4 *)(lVar4 + 0x70),*pfVar1);
    fVar10 = *(float *)(lVar5 + 0x80);
    if (*(float *)(lVar5 + 0x80) <= *(float *)(lVar6 + 0x44)) {
      fVar10 = *(float *)(lVar6 + 0x44);
    }
    fVar8 = *(float *)(lVar5 + 0x7c);
    if (*(float *)(lVar5 + 0x7c) <= *(float *)(lVar6 + 0x40)) {
      fVar8 = *(float *)(lVar6 + 0x40);
    }
    fVar11 = (float)NEON_fminnm(*(undefined4 *)(lVar5 + 0x74),*(undefined4 *)(lVar6 + 0x38));
    fVar9 = (float)NEON_fminnm(*(undefined4 *)(lVar5 + 0x78),*(undefined4 *)(lVar6 + 0x3c));
    fVar12 = *(float *)(lVar5 + 0x84);
    if (*(float *)(lVar5 + 0x84) <= *(float *)(lVar6 + 0x48)) {
      fVar12 = *(float *)(lVar6 + 0x48);
    }
    *pfVar1 = fVar7;
    *(float *)(lVar6 + 0x38) = fVar11;
    *(float *)(lVar6 + 0x3c) = fVar9;
    *(float *)(lVar6 + 0x40) = fVar8;
    *(float *)(lVar6 + 0x44) = fVar10;
    *(float *)(lVar6 + 0x48) = fVar12;
  }
  fVar8 = (fVar8 - fVar7) * 0.5;
  fVar7 = (fVar10 - fVar11) * 0.5;
  fVar10 = (fVar12 - fVar9) * 0.5;
  fVar10 = fVar8 * fVar8 + fVar7 * fVar7 + fVar10 * fVar10;
  *(float *)(param_4 + lVar3 * 4 + 100) = fVar10 * *(float *)(param_1 + 0x10) * SQRT(fVar10);
  *piVar2 = *piVar2 + 1;
  return;
}


