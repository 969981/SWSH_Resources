/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00232cd0; name: FUN_00232cd0
 */


void FUN_00232cd0(float *param_1,long param_2,float *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  long lVar9;
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
  
  fVar10 = *param_3;
  fVar11 = param_3[1];
  bVar6 = *(byte *)(param_2 + 0x26);
  fVar12 = *(float *)(param_2 + 0x18);
  fVar13 = *(float *)(param_2 + 0x1c);
  fVar14 = param_3[2];
  fVar15 = param_3[3];
  fVar16 = param_3[4];
  fVar18 = param_3[5];
  bVar7 = *(byte *)(param_2 + 0x27);
  lVar2 = *(long *)(param_2 + 0x28);
  lVar4 = *(long *)(param_2 + 0x30);
  fVar17 = param_3[6];
  fVar19 = param_3[7];
  fVar21 = param_3[8];
  param_1[3] = (float)(uint)bVar6;
  param_1[4] = (float)(uint)bVar7;
  lVar9 = lVar2 + (ulong)bVar7 * 0x14;
  uVar8 = *(ushort *)(param_2 + 0x24);
  *(long *)(param_1 + 6) = lVar2;
  *(long *)(param_1 + 8) = lVar9;
  lVar9 = lVar9 + (ulong)bVar6 * 0xc;
  fVar20 = *(float *)(param_2 + 0x20);
  param_1[5] = (float)((ulong)uVar8 & 0x7fff);
  lVar2 = lVar9 + ((ulong)uVar8 & 0x7fff) * 2 + (ulong)bVar6 * 3;
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  *param_1 = fVar12 * fVar10 + fVar13 * fVar15 + fVar20 * fVar17;
  param_1[1] = fVar12 * fVar11 + fVar13 * fVar16 + fVar20 * fVar19;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(undefined8 *)(param_1 + 0x12) = uVar5;
  if ((short)uVar8 < 0) {
    lVar2 = lVar2 + ((ulong)uVar8 & 0x7fff) * 4;
  }
  param_1[2] = fVar12 * fVar14 + fVar13 * fVar18 + fVar20 * fVar21;
  *(long *)(param_1 + 10) = lVar2;
  *(long *)(param_1 + 0xc) = lVar9;
  puVar1 = &LAB_00232dc0;
  if (lVar4 != 0) {
    puVar1 = &LAB_00232f00;
  }
  *(long *)(param_1 + 0x14) = lVar4;
  *(undefined1 **)(param_1 + 0x16) = puVar1;
  *(undefined1 **)(param_1 + 0x18) = &LAB_002331e0;
  return;
}


