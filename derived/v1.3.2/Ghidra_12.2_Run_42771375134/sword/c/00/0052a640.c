/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0052a640; name: FUN_0052a640
 */


undefined8
FUN_0052a640(long param_1,long param_2,long param_3,long param_4,byte *param_5,byte *param_6)

{
  bool bVar1;
  bool bVar2;
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
  
  fVar3 = *(float *)(param_1 + 0x6c4);
  fVar6 = fVar3 * *(float *)(param_1 + 0x6d0) * *(float *)(param_1 + 0x420);
  fVar8 = *(float *)(param_1 + 0x6d4) * fVar6;
  fVar9 = fVar6 + fVar8;
  fVar8 = fVar8 - fVar6;
  fVar10 = fVar3 * *(float *)(param_1 + 0x420) * *(float *)(param_1 + 0x6e8);
  fVar5 = fVar3 * *(float *)(param_1 + 0x6e8);
  fVar6 = fVar3 * *(float *)(param_1 + 0x6d0);
  fVar4 = fVar6 * *(float *)(param_1 + 0x6d8);
  fVar11 = *(float *)(param_1 + 0x6ec) * fVar10;
  fVar7 = fVar5 * *(float *)(param_1 + 0x6f0);
  fVar12 = fVar10 + fVar11;
  fVar11 = fVar11 - fVar10;
  bVar1 = false;
  if ((fVar4 - fVar6 == fVar7 - fVar5) && (bVar1 = false, !NAN(fVar8) && !NAN(fVar11))) {
    bVar1 = fVar8 == fVar11;
  }
  bVar2 = false;
  if ((bVar1) && (bVar2 = false, !NAN(fVar9) && !NAN(fVar12))) {
    bVar2 = fVar9 == fVar12;
  }
  if (bVar2) {
    bVar1 = (NAN(fVar3) || fVar6 + fVar4 != fVar5 + fVar7) || NAN(*(float *)(param_1 + 0x6c8));
  }
  else {
    bVar1 = true;
  }
  fVar3 = *(float *)(param_1 + 0x724) - *(float *)(param_1 + 0x7a4);
  fVar6 = *(float *)(param_1 + 0x728) - *(float *)(param_1 + 0x7a8);
  fVar4 = *(float *)(param_1 + 0x72c) - *(float *)(param_1 + 0x7ac);
  fVar3 = fVar3 * fVar3 + fVar6 * fVar6 + fVar4 * fVar4;
  bVar2 = true;
  if ((fVar3 != 0.0) && (bVar2 = false, !NAN(fVar3))) {
    bVar2 = fVar3 == 1.0;
  }
  if (bVar2) {
    fVar6 = fVar3;
  }
  else {
    fVar6 = SQRT(fVar3);
    if (NAN(fVar6)) {
      fVar6 = sqrtf(fVar3);
    }
  }
  if (((((*(float *)(param_1 + 0x6f4) == *(float *)(param_1 + 0x774)) &&
        (*(float *)(param_1 + 0x6f8) == *(float *)(param_1 + 0x778))) &&
       (*(float *)(param_1 + 0x6fc) == *(float *)(param_1 + 0x77c))) &&
      ((*(float *)(param_1 + 0x704) == *(float *)(param_1 + 0x784) &&
       (*(float *)(param_1 + 0x708) == *(float *)(param_1 + 0x788))))) &&
     ((*(float *)(param_1 + 0x70c) == *(float *)(param_1 + 0x78c) &&
      ((*(float *)(param_1 + 0x714) == *(float *)(param_1 + 0x794) &&
       (*(float *)(param_1 + 0x718) == *(float *)(param_1 + 0x798))))))) {
    bVar2 = *(float *)(param_1 + 0x71c) != *(float *)(param_1 + 0x79c);
  }
  else {
    bVar2 = true;
  }
  if (param_2 != 0) {
    *(bool *)param_2 = *(float *)(param_1 + 0xd08) < fVar6;
  }
  if (param_3 != 0) {
    *(bool *)param_3 = 0.0 < fVar6;
  }
  if (param_4 != 0) {
    *(bool *)param_4 = bVar1;
  }
  if (param_5 != (byte *)0x0) {
    *param_5 = bVar2;
  }
  if (param_6 != (byte *)0x0) {
    *param_6 = 0.0 < fVar6 | bVar1 | bVar2;
  }
  return 0;
}


