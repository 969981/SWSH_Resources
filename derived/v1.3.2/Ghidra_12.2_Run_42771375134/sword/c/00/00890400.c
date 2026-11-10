/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00890400; name: FUN_00890400
 */


uint * FUN_00890400(uint param_1,uint param_2,uint *param_3,size_t *param_4)

{
  size_t __size;
  uint uVar1;
  int iVar2;
  double dVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  float *pfVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  __size = (-(ulong)(param_1 - 1 >> 0x1f) & 0xfffffff800000000 | (ulong)(param_1 - 1) << 3) + 0x110;
  if (param_4 == (size_t *)0x0) {
    puVar4 = malloc(__size);
  }
  else {
    if (param_3 == (uint *)0x0) {
      *param_4 = __size;
      return (uint *)0x0;
    }
    puVar4 = (uint *)0x0;
    if (__size <= *param_4) {
      puVar4 = param_3;
    }
    *param_4 = __size;
  }
  if (puVar4 == (uint *)0x0) {
    return (uint *)0x0;
  }
  dVar13 = (double)(int)param_1;
  *puVar4 = param_1;
  puVar4[1] = param_2;
  dVar3 = DAT_01cd51a0;
  if (0 < (int)param_1) {
    dVar14 = 1.0 / dVar13;
    if (param_2 == 0) {
      uVar9 = 0;
      pfVar10 = (float *)(puVar4 + 0x43);
      do {
        dVar12 = (double)(int)uVar9 * dVar3 * dVar14;
        dVar11 = cos(dVar12);
        pfVar10[-1] = (float)dVar11;
        dVar11 = sin(dVar12);
        uVar9 = uVar9 + 1;
        *pfVar10 = (float)dVar11;
        pfVar10 = pfVar10 + 2;
      } while (param_1 != uVar9);
    }
    else {
      uVar9 = 0;
      pfVar10 = (float *)(puVar4 + 0x43);
      do {
        dVar12 = (double)(int)uVar9 * dVar3;
        dVar11 = cos(dVar12 * dVar14);
        pfVar10[-1] = (float)dVar11;
        dVar11 = sin(-(dVar12 * dVar14));
        uVar9 = uVar9 + 1;
        *pfVar10 = (float)dVar11;
        pfVar10 = pfVar10 + 2;
      } while (param_1 != uVar9);
    }
  }
  puVar5 = puVar4 + 2;
  uVar8 = 4;
  puVar6 = puVar5;
  if ((int)param_1 % 4 == 0) goto LAB_00890570;
  do {
    uVar7 = uVar8 + 2;
    if (uVar8 == 2) {
      uVar7 = 3;
    }
    uVar1 = 2;
    if (uVar8 != 4) {
      uVar1 = uVar7;
    }
    uVar8 = param_1;
    if ((double)(int)uVar1 <= (double)(long)SQRT(dVar13)) {
      uVar8 = uVar1;
    }
    while( true ) {
      iVar2 = 0;
      if (uVar8 != 0) {
        iVar2 = (int)param_1 / (int)uVar8;
      }
      puVar6 = puVar5;
      if (param_1 != iVar2 * uVar8) break;
LAB_00890570:
      uVar7 = 0;
      if (uVar8 != 0) {
        uVar7 = (int)param_1 / (int)uVar8;
      }
      puVar5 = puVar6 + 2;
      *puVar6 = uVar8;
      puVar6[1] = uVar7;
      param_1 = uVar7;
      if ((int)uVar7 < 2) {
        return puVar4;
      }
    }
  } while( true );
}


