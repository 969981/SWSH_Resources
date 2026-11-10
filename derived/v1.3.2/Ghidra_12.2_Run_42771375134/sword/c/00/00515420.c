/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00515420; name: FUN_00515420
 */


int FUN_00515420(float param_1,int param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (param_3 != (float *)0x0) {
    *param_3 = param_1 * 0.0;
    param_3[1] = param_1 * 0.0;
    fVar1 = DAT_01d4bdf4;
    if (0 < param_2) {
      iVar2 = 0;
      iVar3 = 1;
      do {
        pfVar5 = param_3 + (long)iVar2 * 2 + 3;
        fVar9 = fVar1 / (float)(iVar3 * 6);
        uVar4 = 0;
        fVar8 = ((float)iVar3 * param_1) / (float)param_2;
        do {
          fVar7 = fVar9 * 0.5 + fVar9 * (float)(int)uVar4;
          fVar6 = cosf(fVar7);
          fVar7 = sinf(fVar7);
          uVar4 = uVar4 + 1;
          pfVar5[-1] = fVar8 * fVar6;
          *pfVar5 = fVar8 * fVar7;
          pfVar5 = pfVar5 + 2;
        } while (uVar4 < (uint)(iVar3 * 6));
        iVar3 = iVar3 + 1;
        iVar2 = uVar4 + iVar2;
      } while (iVar3 != param_2 + 1);
    }
  }
  return param_2 * (param_2 + 1) * 3 + 1;
}


