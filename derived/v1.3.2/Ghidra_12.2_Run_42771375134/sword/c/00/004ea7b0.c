/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ea7b0; name: FUN_004ea7b0
 */


void FUN_004ea7b0(float *param_1,float *param_2)

{
  size_t sVar1;
  void *__dest;
  char *__s;
  ulong __n;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  param_1[0x12] = param_2[6];
  param_1[0x13] = param_2[7];
  param_1[0x14] = param_2[8];
  fVar2 = *param_2;
  *param_1 = fVar2;
  fVar3 = param_2[1];
  param_1[1] = fVar3;
  fVar4 = param_2[2];
  fVar5 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4);
  param_1[2] = fVar4;
  if (fVar5 == 0.0) {
    fVar2 = 0.0;
    fVar3 = 0.0;
    fVar4 = 0.0;
    param_1[0] = 0.0;
    param_1[1] = 0.0;
  }
  else {
    fVar5 = 1.0 / fVar5;
    fVar2 = fVar2 * fVar5;
    fVar3 = fVar3 * fVar5;
    *param_1 = fVar2;
    param_1[1] = fVar3;
    fVar4 = fVar4 * fVar5;
  }
  param_1[2] = fVar4;
  fVar5 = param_2[3];
  param_1[3] = fVar5;
  fVar6 = param_2[4];
  param_1[4] = fVar6;
  fVar7 = param_2[5];
  fVar8 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7);
  param_1[5] = fVar7;
  if (fVar8 == 0.0) {
    fVar5 = 0.0;
    fVar6 = 0.0;
    fVar7 = 0.0;
    param_1[3] = 0.0;
    param_1[4] = 0.0;
  }
  else {
    fVar8 = 1.0 / fVar8;
    fVar5 = fVar5 * fVar8;
    fVar6 = fVar6 * fVar8;
    param_1[3] = fVar5;
    param_1[4] = fVar6;
    fVar7 = fVar7 * fVar8;
  }
  param_1[5] = fVar7;
  param_1[0x18] = fVar6 * fVar4 - fVar3 * fVar7;
  param_1[0x19] = fVar2 * fVar7 - fVar5 * fVar4;
  param_1[0x1a] = fVar5 * fVar3 - fVar2 * fVar6;
  param_1[0x15] = ABS(param_2[9]);
  param_1[0x16] = ABS(param_2[10]);
  param_1[0x17] = ABS(param_2[0xb]);
  __s = *(char **)(param_2 + 0xe);
  if ((*(long *)(param_1 + 6) != 0) && (*(char *)(param_1 + 8) != '\0')) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02713640);
    *(undefined1 *)(param_1 + 8) = 0;
  }
  *(char **)(param_1 + 6) = __s;
  if ((__s != (char *)0x0) && (*(char *)(param_1 + 8) == '\0')) {
    sVar1 = strlen(__s);
    if ((int)sVar1 == 0) {
      param_1[6] = 0.0;
      param_1[7] = 0.0;
    }
    else {
      __n = (ulong)((int)sVar1 + 1);
      __dest = (void *)FUN_00404690(*(undefined4 *)PTR_DAT_02713640,__n);
      *(void **)(param_1 + 6) = __dest;
      if (__dest != (void *)0x0) {
        memcpy(__dest,__s,__n);
        *(undefined1 *)(param_1 + 8) = 1;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0xc);
  return;
}


