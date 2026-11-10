/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00290260; name: FUN_00290260
 */


void FUN_00290260(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar2 = (ulong)*(byte *)(param_1 + 0x20);
  if (*(byte *)(param_1 + 0x20) != 0) {
    lVar3 = 0;
    uVar2 = 0;
    puVar4 = param_2;
    do {
      lVar1 = *(long *)(param_1 + 0x30) + lVar3;
      uVar6 = param_4[1];
      uVar5 = *param_4;
      uVar9 = param_4[3];
      uVar7 = param_4[2];
      uVar16 = param_4[5];
      uVar15 = param_4[4];
      uVar18 = param_4[7];
      uVar17 = param_4[6];
      fVar11 = (float)*(undefined8 *)(lVar1 + 0x10);
      uVar2 = uVar2 + 1;
      fVar13 = (float)((ulong)*(undefined8 *)(lVar1 + 0x10) >> 0x20);
      fVar14 = (float)*(undefined8 *)(lVar1 + 0x18);
      uVar10 = param_3[1];
      uVar8 = *param_3;
      uVar12 = *(undefined4 *)(lVar1 + 0x2c);
      *(undefined4 *)((long)puVar4 + 0x34) = 0xffffffff;
      puVar4[1] = uVar10;
      *puVar4 = uVar8;
      puVar4[3] = CONCAT44((float)((ulong)uVar18 >> 0x20) + 0.0,
                           (float)uVar18 +
                           (float)uVar6 * fVar11 + (float)uVar9 * fVar13 + (float)uVar16 * fVar14);
      puVar4[2] = CONCAT44((float)((ulong)uVar17 >> 0x20) +
                           (float)((ulong)uVar5 >> 0x20) * fVar11 +
                           (float)((ulong)uVar7 >> 0x20) * fVar13 +
                           (float)((ulong)uVar15 >> 0x20) * fVar14,
                           (float)uVar17 +
                           (float)uVar5 * fVar11 + (float)uVar7 * fVar13 + (float)uVar15 * fVar14);
      *(undefined4 *)((long)puVar4 + 0xc) = uVar12;
      if (0x3f < uVar2) break;
      lVar3 = lVar3 + 0x30;
      puVar4 = puVar4 + 8;
    } while (uVar2 < *(byte *)(param_1 + 0x20));
  }
  *(int *)(param_2 + 0x200) = (int)uVar2;
  return;
}


