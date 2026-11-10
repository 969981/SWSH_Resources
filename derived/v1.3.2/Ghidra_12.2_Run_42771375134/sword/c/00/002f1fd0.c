/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002f1fd0; name: FUN_002f1fd0
 */


void FUN_002f1fd0(float *param_1,long param_2,long param_3,uint param_4,float *param_5,int param_6)

{
  uint *puVar1;
  ushort *puVar2;
  ulong uVar3;
  float *pfVar4;
  float *pfVar5;
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
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  
  if ((param_4 >> 1 & 1) == 0) {
    puVar1 = (uint *)(param_3 + (ulong)(uint)(param_6 * 3) * 4);
    pfVar5 = (float *)(param_2 + (ulong)*puVar1 * 0xc);
    pfVar4 = (float *)(param_2 + (ulong)puVar1[1] * 0xc);
    fVar8 = *pfVar5;
    fVar7 = pfVar5[1];
    fVar6 = pfVar5[2];
    local_40 = *pfVar4;
    local_3c = pfVar4[1];
    local_38 = pfVar4[2];
    uVar3 = (ulong)puVar1[2];
  }
  else {
    puVar2 = (ushort *)(param_3 + (ulong)(uint)(param_6 * 3) * 2);
    pfVar4 = (float *)(param_2 + (ulong)*puVar2 * 0xc);
    fVar8 = *pfVar4;
    fVar7 = pfVar4[1];
    fVar6 = pfVar4[2];
    pfVar4 = (float *)(param_2 + (ulong)puVar2[1] * 0xc);
    local_40 = *pfVar4;
    local_3c = pfVar4[1];
    local_38 = pfVar4[2];
    uVar3 = (ulong)puVar2[2];
  }
  pfVar4 = (float *)(param_2 + uVar3 * 0xc);
  local_50 = *pfVar4;
  local_4c = pfVar4[1];
  local_48 = pfVar4[2];
  fVar10 = *param_5;
  fVar11 = param_5[1];
  fVar14 = param_5[2];
  fVar16 = param_5[3];
  fVar19 = param_5[4];
  fVar20 = param_5[5];
  fVar9 = param_5[6];
  fVar18 = param_5[7];
  fVar24 = param_5[8];
  pfVar4 = &local_40;
  pfVar5 = &local_50;
  if (*(char *)(param_5 + 0x12) == '\0') {
    pfVar4 = &local_50;
    pfVar5 = &local_40;
  }
  fVar13 = fVar8 * fVar11 + fVar7 * fVar19 + fVar6 * fVar18;
  fVar12 = fVar8 * fVar10 + fVar7 * fVar16 + fVar6 * fVar9;
  fVar6 = fVar8 * fVar14 + fVar7 * fVar20 + fVar6 * fVar24;
  fVar7 = *pfVar5;
  fVar21 = pfVar5[1];
  fVar22 = pfVar5[2];
  fVar23 = *pfVar4;
  fVar25 = pfVar4[1];
  fVar17 = pfVar4[2];
  fVar8 = fVar6 - (fVar14 * fVar7 + fVar20 * fVar21 + fVar24 * fVar22);
  fVar15 = fVar12 - (fVar10 * fVar7 + fVar16 * fVar21 + fVar9 * fVar22);
  fVar7 = fVar13 - (fVar11 * fVar7 + fVar19 * fVar21 + fVar18 * fVar22);
  fVar12 = fVar12 - (fVar10 * fVar23 + fVar16 * fVar25 + fVar9 * fVar17);
  fVar13 = fVar13 - (fVar11 * fVar23 + fVar19 * fVar25 + fVar18 * fVar17);
  fVar6 = fVar6 - (fVar14 * fVar23 + fVar20 * fVar25 + fVar24 * fVar17);
  fVar9 = fVar7 * fVar6 - fVar8 * fVar13;
  fVar6 = fVar8 * fVar12 - fVar15 * fVar6;
  fVar7 = fVar15 * fVar13 - fVar7 * fVar12;
  fVar8 = fVar7 * fVar7 + fVar9 * fVar9 + fVar6 * fVar6;
  if (fVar8 <= 0.0) {
    fVar9 = 0.0;
    fVar6 = 0.0;
    fVar7 = 0.0;
  }
  else {
    fVar8 = sqrtf(fVar8);
    fVar8 = 1.0 / fVar8;
    fVar9 = fVar9 * fVar8;
    fVar6 = fVar6 * fVar8;
    fVar7 = fVar7 * fVar8;
  }
  *param_1 = fVar9;
  param_1[1] = fVar6;
  param_1[2] = fVar7;
  return;
}


