/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005a0c60; name: FUN_005a0c60
 */


undefined8 * FUN_005a0c60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  
  if (param_2 != param_1) {
    uVar8 = param_1[4];
    if (uVar8 != 0) {
      uVar10 = uVar8 + *(long *)(uVar8 - 8) * 0xc;
      do {
        uVar10 = uVar10 - 0xc;
      } while (uVar8 <= uVar10);
      FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
      param_1[4] = 0;
    }
    param_1[3] = 0;
    param_1[4] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar12 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar4;
    *param_1 = uVar12;
    param_1[1] = uVar3;
    if (param_2[4] != 0) {
      iVar5 = *(int *)(param_1 + 1);
      plVar6 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,(long)iVar5 * 0xc + 8,
                                    "C:/workspace/YEBIS_draft/src/GPU/GPUGlareDef.cpp",0xf5,0);
      plVar7 = plVar6;
      if (plVar6 != (long *)0x0) {
        plVar7 = plVar6 + 1;
        *plVar6 = (long)iVar5;
      }
      param_1[4] = plVar7;
      if (0 < *(int *)(param_1 + 1)) {
        lVar11 = *(long *)param_2[4];
        *(int *)(plVar7 + 1) = (int)((long *)param_2[4])[1];
        *plVar7 = lVar11;
        if (1 < *(int *)(param_1 + 1)) {
          lVar9 = 1;
          lVar11 = 0xc;
          do {
            puVar1 = (undefined8 *)(param_1[4] + lVar11);
            puVar2 = (undefined8 *)(param_2[4] + lVar11);
            lVar11 = lVar11 + 0xc;
            uVar12 = *puVar2;
            *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar2 + 1);
            *puVar1 = uVar12;
            lVar9 = lVar9 + 1;
          } while (lVar9 < *(int *)(param_1 + 1));
        }
      }
    }
  }
  return param_1;
}


