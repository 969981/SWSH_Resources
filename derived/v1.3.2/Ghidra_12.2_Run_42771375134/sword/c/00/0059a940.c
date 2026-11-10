/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059a940; name: FUN_0059a940
 */


uint * FUN_0059a940(uint *param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  int *piVar18;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    uVar17 = *param_2;
    puVar12 = (ulong *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,(ulong)uVar17 << 5 | 8,
                                    "C:/workspace/YEBIS_draft/src/GPU/GPURenderTexture.cpp",0x7b,0);
    puVar13 = puVar12;
    if (puVar12 != (ulong *)0x0) {
      puVar13 = puVar12 + 1;
      *puVar12 = (ulong)uVar17;
    }
    *(ulong **)(param_1 + 2) = puVar13;
    if (*param_2 != 0) {
      puVar12 = *(ulong **)(param_2 + 2);
      uVar14 = *puVar12;
      uVar7 = puVar12[1];
      uVar8 = puVar12[3];
      puVar13[2] = puVar12[2];
      puVar13[3] = uVar8;
      *puVar13 = uVar14;
      puVar13[1] = uVar7;
      if (1 < *param_2) {
        uVar14 = 1;
        lVar16 = 0x20;
        do {
          puVar4 = (undefined8 *)(*(long *)(param_1 + 2) + lVar16);
          puVar5 = (undefined8 *)(*(long *)(param_2 + 2) + lVar16);
          lVar16 = lVar16 + 0x20;
          uVar14 = uVar14 + 1;
          uVar6 = *puVar5;
          uVar9 = puVar5[1];
          uVar10 = puVar5[3];
          puVar4[2] = puVar5[2];
          puVar4[3] = uVar10;
          *puVar4 = uVar6;
          puVar4[1] = uVar9;
        } while (uVar14 < *param_2);
      }
    }
    uVar14 = (ulong)*param_1;
    param_1[4] = 0;
    param_1[5] = 0;
    if (*param_1 != 0) {
      uVar15 = 0;
      uVar17 = 0;
      piVar18 = (int *)(*(long *)(param_1 + 2) + 0x10);
      do {
        iVar11 = *piVar18;
        piVar2 = piVar18 + -4;
        piVar1 = piVar18 + 2;
        piVar3 = piVar18 + -2;
        piVar18 = piVar18 + 8;
        if (uVar17 <= (uint)(iVar11 - *piVar2)) {
          uVar17 = iVar11 - *piVar2;
        }
        if (uVar15 <= (uint)(*piVar1 - *piVar3)) {
          uVar15 = *piVar1 - *piVar3;
        }
        uVar14 = uVar14 - 1;
        param_1[4] = uVar17;
        param_1[5] = uVar15;
      } while (uVar14 != 0);
    }
  }
  return param_1;
}


