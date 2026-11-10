/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0028b5e0; name: FUN_0028b5e0
 */


undefined8 FUN_0028b5e0(long param_1,float *param_2,float *param_3,float *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
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
  float fVar26;
  
  if (((*(float *)(param_1 + 4) == 1.0) && (*(float *)(param_1 + 8) == 1.0)) &&
     (*(float *)(param_1 + 0xc) == 1.0)) {
    uVar10 = 1;
  }
  else {
    FUN_001b0f90(param_2,(float *)(param_1 + 4),param_1 + 0x10);
    uVar10 = 0;
  }
  pfVar7 = *(float **)(param_1 + 0x30);
  fVar11 = param_2[1];
  fVar12 = param_2[2];
  fVar14 = param_2[3];
  fVar15 = param_2[4];
  fVar16 = param_2[5];
  fVar17 = *pfVar7;
  fVar19 = pfVar7[1];
  fVar22 = param_2[6];
  fVar23 = param_2[7];
  fVar24 = pfVar7[2];
  fVar25 = pfVar7[3];
  fVar21 = fVar17 * *param_2 + fVar19 * fVar14 + fVar24 * fVar22;
  fVar26 = param_2[8];
  fVar18 = fVar17 * fVar12 + fVar19 * fVar16 + fVar24 * fVar26;
  fVar20 = fVar17 * fVar11 + fVar19 * fVar15 + fVar24 * fVar23;
  fVar24 = pfVar7[4];
  fVar13 = pfVar7[5];
  fVar17 = fabsf(*param_2 * fVar25);
  fVar14 = fabsf(fVar14 * fVar24);
  fVar19 = fabsf(fVar22 * fVar13);
  fVar19 = fVar17 + fVar14 + fVar19;
  fVar17 = fabsf(fVar11 * fVar25);
  fVar14 = fabsf(fVar15 * fVar24);
  fVar11 = fabsf(fVar23 * fVar13);
  fVar11 = fVar17 + fVar14 + fVar11;
  fVar17 = fabsf(fVar12 * fVar25);
  fVar14 = fabsf(fVar16 * fVar24);
  fVar24 = fabsf(fVar26 * fVar13);
  fVar24 = fVar17 + fVar14 + fVar24;
  *param_3 = fVar21 - fVar19;
  param_3[1] = fVar20 - fVar11;
  param_3[2] = fVar18 - fVar24;
  param_3[3] = fVar21 + fVar19;
  param_3[4] = fVar20 + fVar11;
  param_3[5] = fVar18 + fVar24;
  lVar8 = *(long *)(param_1 + 0x30);
  fVar17 = param_2[1];
  fVar14 = *(float *)(lVar8 + 0x18);
  fVar19 = *(float *)(lVar8 + 0x1c);
  fVar24 = param_2[2];
  fVar12 = param_2[4];
  fVar15 = param_2[5];
  fVar16 = param_2[8];
  fVar11 = *(float *)(lVar8 + 0x20);
  fVar13 = param_2[7];
  *param_4 = fVar14 * *param_2 + fVar19 * param_2[3] + fVar11 * param_2[6];
  param_4[1] = fVar14 * fVar17 + fVar19 * fVar12 + fVar11 * fVar13;
  param_4[2] = fVar14 * fVar24 + fVar19 * fVar15 + fVar11 * fVar16;
  bVar4 = *(byte *)(lVar8 + 0x26);
  param_4[3] = (float)(uint)bVar4;
  bVar5 = *(byte *)(lVar8 + 0x27);
  param_4[4] = (float)(uint)bVar5;
  uVar6 = *(ushort *)(lVar8 + 0x24);
  param_4[5] = (float)((ulong)uVar6 & 0x7fff);
  lVar9 = *(long *)(lVar8 + 0x28) + (ulong)bVar5 * 0x14;
  *(long *)(param_4 + 6) = *(long *)(lVar8 + 0x28);
  *(long *)(param_4 + 8) = lVar9;
  lVar9 = lVar9 + (ulong)bVar4 * 0xc;
  lVar1 = lVar9 + ((ulong)uVar6 & 0x7fff) * 2 + (ulong)bVar4 * 3;
  lVar2 = lVar1;
  if ((short)uVar6 < 0) {
    lVar2 = lVar1 + ((ulong)uVar6 & 0x7fff) * 4;
  }
  lVar3 = 0;
  if ((short)uVar6 < 0) {
    lVar3 = lVar1;
  }
  *(long *)(param_4 + 10) = lVar2;
  *(long *)(param_4 + 0xc) = lVar9;
  *(long *)(param_4 + 0xe) = lVar3;
  *(undefined8 *)(param_4 + 0x14) = *(undefined8 *)(lVar8 + 0x30);
  *(undefined8 *)(param_4 + 0x12) = *(undefined8 *)(lVar8 + 0x40);
  *(undefined8 *)(param_4 + 0x10) = *(undefined8 *)(lVar8 + 0x38);
  return uVar10;
}


