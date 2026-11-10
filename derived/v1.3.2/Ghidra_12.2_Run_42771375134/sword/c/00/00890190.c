/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00890190; name: FUN_00890190
 */


void FUN_00890190(undefined8 *param_1,undefined8 param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  piVar4 = (int *)*param_1;
  if (piVar4[1] != 0) {
    fwrite("kiss fft usage error: improper alloc\n",0x25,1,*(FILE **)PTR_stderr_02716ee0);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  iVar3 = *piVar4;
  uVar8 = (ulong)iVar3;
  FUN_00890e00(piVar4,param_2,param_1[1]);
  fVar9 = *(float *)param_1[1];
  fVar10 = ((float *)param_1[1])[1];
  *param_3 = fVar10 + fVar9;
  param_3[uVar8 * 2] = fVar9 - fVar10;
  param_3[1] = 0.0;
  (param_3 + uVar8 * 2)[1] = 0.0;
  if (1 < iVar3) {
    lVar5 = (ulong)(((uint)(uVar8 >> 1) & 0x7fffffff) + 1) - 1;
    lVar6 = uVar8 * 8 + -4;
    lVar7 = 0xc;
    do {
      pfVar1 = (float *)(param_1[1] + lVar7);
      pfVar2 = (float *)(param_1[1] + lVar6);
      fVar9 = pfVar1[-1];
      fVar10 = *pfVar1;
      fVar12 = pfVar2[-1];
      fVar11 = *pfVar2;
      fVar13 = *(float *)(param_1[2] + lVar7 + -0xc);
      fVar14 = *(float *)(param_1[2] + lVar7 + -8);
      pfVar1 = (float *)((long)param_3 + lVar7);
      lVar7 = lVar7 + 8;
      fVar15 = fVar12 + fVar9;
      fVar9 = fVar9 - fVar12;
      fVar12 = fVar11 + fVar10;
      fVar10 = fVar10 - fVar11;
      fVar11 = fVar13 * fVar9 - fVar14 * fVar12;
      fVar9 = fVar13 * fVar12 + fVar9 * fVar14;
      pfVar2 = (float *)((long)param_3 + lVar6);
      lVar5 = lVar5 + -1;
      lVar6 = lVar6 + -8;
      pfVar1[-1] = (fVar11 + fVar15) * 0.5;
      *pfVar1 = (fVar9 + fVar10) * 0.5;
      pfVar2[-1] = (fVar15 - fVar11) * 0.5;
      *pfVar2 = (fVar9 - fVar10) * 0.5;
    } while (lVar5 != 0);
  }
  return;
}


