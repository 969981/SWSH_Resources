/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ea38c0; name: FUN_00ea38c0
 */


undefined8 FUN_00ea38c0(int *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  
  lVar4 = *(long *)(*(long *)(param_1 + 2) + 0x1b8) + (long)*param_1 * 0x130;
  puVar5 = (undefined8 *)*param_2;
  lVar1 = *(long *)(lVar4 + 0x120);
  iVar2 = *(int *)(*(long *)(lVar4 + 0x128) + 0x40);
  FUN_00723030(lVar1,iVar2);
  puVar3 = PTR_DAT_0271f9e0;
  lVar4 = *(long *)(lVar1 + 0x1b8) + (long)iVar2 * 0x130;
  uVar7 = *(undefined8 *)(lVar4 + 0xd0);
  fVar12 = (float)uVar7;
  fVar8 = (float)((ulong)uVar7 >> 0x20);
  fVar10 = (float)*(undefined8 *)(lVar4 + 0xd8);
  fVar6 = (float)*(undefined8 *)(lVar1 + 0x90) +
          (float)*(undefined8 *)(lVar1 + 0x60) * fVar12 +
          (float)*(undefined8 *)(lVar1 + 0x70) * fVar8 +
          (float)*(undefined8 *)(lVar1 + 0x80) * fVar10;
  fVar9 = (float)((ulong)*(undefined8 *)(lVar1 + 0x90) >> 0x20) +
          (float)((ulong)*(undefined8 *)(lVar1 + 0x60) >> 0x20) * fVar12 +
          (float)((ulong)*(undefined8 *)(lVar1 + 0x70) >> 0x20) * fVar8 +
          (float)((ulong)*(undefined8 *)(lVar1 + 0x80) >> 0x20) * fVar10;
  fVar11 = (float)*(undefined8 *)(lVar1 + 0x98) +
           (float)*(undefined8 *)(lVar1 + 0x68) * fVar12 +
           (float)*(undefined8 *)(lVar1 + 0x78) * fVar8 +
           (float)*(undefined8 *)(lVar1 + 0x88) * fVar10;
  fVar12 = (float)((ulong)*(undefined8 *)(lVar1 + 0x98) >> 0x20) +
           (float)((ulong)*(undefined8 *)(lVar1 + 0x68) >> 0x20) * fVar12 +
           (float)((ulong)*(undefined8 *)(lVar1 + 0x78) >> 0x20) * fVar8 +
           (float)((ulong)*(undefined8 *)(lVar1 + 0x88) >> 0x20) * fVar10;
  uVar7 = *(undefined8 *)PTR_DAT_0271f9d8;
  puVar5[1] = CONCAT44(fVar12 + (float)((ulong)*(undefined8 *)(PTR_DAT_0271f9d8 + 8) >> 0x20),
                       fVar11 + (float)*(undefined8 *)(PTR_DAT_0271f9d8 + 8));
  *puVar5 = CONCAT44(fVar9 + (float)((ulong)uVar7 >> 0x20),fVar6 + (float)uVar7);
  uVar13 = *(undefined8 *)(puVar3 + 8);
  uVar7 = *(undefined8 *)puVar3;
  puVar5[3] = CONCAT44(fVar12 + (float)((ulong)uVar13 >> 0x20),fVar11 + (float)uVar13);
  puVar5[2] = CONCAT44(fVar9 + (float)((ulong)uVar7 >> 0x20),fVar6 + (float)uVar7);
  return 1;
}


