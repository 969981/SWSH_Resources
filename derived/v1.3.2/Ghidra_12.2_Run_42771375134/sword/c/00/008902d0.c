/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008902d0; name: FUN_008902d0
 */


void FUN_008902d0(undefined8 *param_1,float *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (((int *)*param_1)[1] == 0) {
    fwrite("kiss fft usage error: improper alloc\n",0x25,1,*(FILE **)PTR_stderr_02716ee0);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  iVar2 = *(int *)*param_1;
  uVar4 = (ulong)iVar2;
  lVar3 = uVar4 * 8;
  *(float *)param_1[1] = param_2[uVar4 * 2] + *param_2;
  *(float *)(param_1[1] + 4) = *param_2 - param_2[uVar4 * 2];
  if (1 < iVar2) {
    lVar5 = (ulong)(((uint)(uVar4 >> 1) & 0x7fffffff) + 1) - 1;
    lVar6 = 8;
    do {
      lVar5 = lVar5 + -1;
      fVar7 = *(float *)((long)param_2 + lVar6);
      fVar8 = ((float *)((long)param_2 + lVar6))[1];
      fVar9 = *(float *)((long)param_2 + lVar3 + -8);
      fVar10 = *(float *)((long)param_2 + lVar3 + -4);
      fVar14 = fVar10 + fVar8;
      fVar11 = *(float *)(param_1[2] + lVar6 + -8);
      fVar12 = *(float *)(param_1[2] + lVar6 + -4);
      fVar13 = fVar7 - fVar9;
      fVar9 = fVar9 + fVar7;
      fVar8 = fVar8 - fVar10;
      fVar10 = fVar11 * fVar13 - fVar12 * fVar14;
      fVar7 = fVar11 * fVar14 + fVar13 * fVar12;
      *(float *)(param_1[1] + lVar6) = fVar10 + fVar9;
      lVar1 = param_1[1] + lVar6;
      lVar6 = lVar6 + 8;
      *(float *)(lVar1 + 4) = fVar7 + fVar8;
      *(float *)(param_1[1] + lVar3 + -8) = fVar9 - fVar10;
      *(float *)(param_1[1] + lVar3 + -4) = fVar8 - fVar7;
      lVar1 = param_1[1] + lVar3;
      lVar3 = lVar3 + -8;
      *(float *)(lVar1 + -4) = -*(float *)(lVar1 + -4);
    } while (lVar5 != 0);
  }
  FUN_00890e00(*param_1,param_1[1]);
  return;
}


