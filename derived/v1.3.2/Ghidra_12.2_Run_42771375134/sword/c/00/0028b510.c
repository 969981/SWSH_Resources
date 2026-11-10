/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0028b510; name: FUN_0028b510
 */


void FUN_0028b510(long param_1,uint param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  
  lVar7 = *(long *)(param_1 + 0x90);
  fVar14 = *(float *)(lVar7 + 0x20);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  fVar11 = *(float *)(lVar7 + 0x18);
  fVar12 = *(float *)(lVar7 + 0x1c);
  uVar13 = *(undefined8 *)(param_1 + 0x58);
  *param_3 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20) * fVar14 +
                      (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20) * fVar11 +
                      (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) * fVar12,
                      (float)*(undefined8 *)(param_1 + 0x50) * fVar14 +
                      (float)*(undefined8 *)(param_1 + 0x30) * fVar11 +
                      (float)*(undefined8 *)(param_1 + 0x40) * fVar12);
  *(float *)(param_3 + 1) = (float)uVar13 * fVar14 + (float)uVar9 * fVar11 + (float)uVar10 * fVar12;
  bVar4 = *(byte *)(lVar7 + 0x26);
  *(uint *)((long)param_3 + 0xc) = (uint)bVar4;
  bVar5 = *(byte *)(lVar7 + 0x27);
  *(uint *)(param_3 + 2) = (uint)bVar5;
  uVar6 = *(ushort *)(lVar7 + 0x24);
  *(int *)((long)param_3 + 0x14) = (int)((ulong)uVar6 & 0x7fff);
  lVar8 = *(long *)(lVar7 + 0x28) + (ulong)bVar5 * 0x14;
  param_3[3] = *(long *)(lVar7 + 0x28);
  param_3[4] = lVar8;
  lVar8 = lVar8 + (ulong)bVar4 * 0xc;
  lVar1 = lVar8 + ((ulong)uVar6 & 0x7fff) * 2 + (ulong)bVar4 * 3;
  lVar2 = lVar1;
  if ((short)uVar6 < 0) {
    lVar2 = lVar1 + ((ulong)uVar6 & 0x7fff) * 4;
  }
  lVar3 = 0;
  if ((short)uVar6 < 0) {
    lVar3 = lVar1;
  }
  param_3[5] = lVar2;
  param_3[6] = lVar8;
  param_3[7] = lVar3;
  param_3[10] = *(undefined8 *)(lVar7 + 0x30);
  param_3[9] = *(undefined8 *)(lVar7 + 0x40);
  param_3[8] = *(undefined8 *)(lVar7 + 0x38);
  if ((param_2 & 1) == 0) {
    param_3[8] = 0;
    param_3[9] = 0;
  }
  return;
}


