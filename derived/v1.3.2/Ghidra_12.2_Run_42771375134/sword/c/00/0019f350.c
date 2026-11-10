/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0019f350; name: FUN_0019f350
 */


void FUN_0019f350(float *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  undefined4 *puVar11;
  float fVar12;
  
  lVar9 = *(long *)(param_1 + 0x14);
  uVar4 = (ulong)*(uint *)(lVar9 + 0x48);
  if (*(uint *)(lVar9 + 0x48) == 0) {
    lVar9 = *(long *)(param_1 + 0x18);
  }
  else {
    lVar7 = *(long *)(*(long *)(lVar9 + 0x10) + 0x38);
    lVar8 = *(long *)(lVar9 + 0x78);
    lVar5 = 0;
    lVar6 = 0;
    puVar10 = *(uint **)(lVar9 + 0x40);
    do {
      puVar1 = (undefined4 *)(*(long *)(param_1 + 0x16) + lVar5);
      puVar2 = (undefined4 *)(lVar7 + (ulong)*puVar10 * 0x20);
      puVar11 = (undefined4 *)(lVar8 + (ulong)*puVar10 * 0xc);
      fVar12 = param_1[0xf] * ((float)puVar1[3] - *param_1);
      puVar1[3] = fVar12;
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = fVar12;
      puVar2[4] = puVar1[4];
      puVar2[5] = puVar1[5];
      puVar2[6] = puVar1[6];
      puVar2[7] = puVar1[7];
      lVar9 = *(long *)(param_1 + 0x18);
      puVar1 = (undefined4 *)(lVar9 + lVar6);
      lVar6 = lVar6 + 0xc;
      *puVar11 = *puVar1;
      puVar11[1] = puVar1[1];
      uVar4 = uVar4 - 1;
      lVar5 = lVar5 + 0x20;
      puVar11[2] = puVar1[2];
      puVar10 = puVar10 + 1;
    } while (uVar4 != 0);
  }
  if (lVar9 != 0) {
    lVar6 = *(long *)(lVar9 + -8);
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar9 - lVar6);
  }
  param_1[0x18] = 0.0;
  param_1[0x19] = 0.0;
  return;
}


