/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059c990; name: FUN_0059c990
 */


uint * FUN_0059c990(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined *puVar8;
  uint uVar9;
  uint *puVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  uint local_4c;
  uint uStack_48;
  undefined4 local_44;
  
  local_44 = param_3;
  uVar9 = FUN_00546ed0(&uStack_48,&local_4c,param_1,param_2,1,&local_44,param_5,param_4,0);
  puVar8 = PTR_PTR_02713988;
  if ((int)uVar9 < 2) {
    puVar10 = (uint *)0x0;
  }
  else {
    puVar10 = (uint *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x18,
                                   "C:/workspace/YEBIS_draft/src/GPU/GPURenderTexture.cpp",0x716,0);
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = uVar9;
    plVar11 = (long *)FUN_005b9a50(*(undefined8 *)puVar8,(long)(int)uVar9 << 5 | 8,
                                   "C:/workspace/YEBIS_draft/src/GPU/GPURenderTexture.cpp",0x718,0);
    plVar12 = plVar11;
    if (plVar11 != (long *)0x0) {
      plVar12 = plVar11 + 1;
      *plVar11 = (long)(int)uVar9;
    }
    *(long **)(puVar10 + 2) = plVar12;
    uVar6 = (ulong)local_4c;
    uVar15 = (ulong)param_2;
    uVar13 = uVar6;
    if (uVar15 <= uVar6) {
      uVar13 = uVar15;
    }
    *plVar12 = 0;
    plVar12[1] = 0;
    plVar12[2] = (ulong)uStack_48;
    plVar12[3] = uVar13;
    if (uVar9 != 1) {
      lVar16 = 0;
      lVar18 = (ulong)uVar9 - 1;
      uVar13 = uVar6;
      do {
        uVar5 = uVar13 + uVar6;
        if (uVar15 <= uVar13 + uVar6) {
          uVar5 = uVar15;
        }
        lVar18 = lVar18 + -1;
        lVar4 = *(long *)(puVar10 + 2) + lVar16;
        lVar16 = lVar16 + 0x20;
        *(undefined8 *)(lVar4 + 0x20) = 0;
        *(ulong *)(lVar4 + 0x28) = uVar13;
        *(ulong *)(lVar4 + 0x30) = (ulong)uStack_48;
        *(ulong *)(lVar4 + 0x38) = uVar5;
        uVar13 = (ulong)((int)uVar13 + local_4c);
      } while (lVar18 != 0);
    }
    uVar13 = (ulong)*puVar10;
    puVar10[4] = 0;
    puVar10[5] = 0;
    if (*puVar10 != 0) {
      uVar14 = 0;
      uVar9 = 0;
      piVar17 = (int *)(*(long *)(puVar10 + 2) + 0x10);
      do {
        iVar7 = *piVar17;
        piVar2 = piVar17 + -4;
        piVar1 = piVar17 + 2;
        piVar3 = piVar17 + -2;
        piVar17 = piVar17 + 8;
        if (uVar9 <= (uint)(iVar7 - *piVar2)) {
          uVar9 = iVar7 - *piVar2;
        }
        if (uVar14 <= (uint)(*piVar1 - *piVar3)) {
          uVar14 = *piVar1 - *piVar3;
        }
        uVar13 = uVar13 - 1;
        puVar10[4] = uVar9;
        puVar10[5] = uVar14;
      } while (uVar13 != 0);
    }
  }
  return puVar10;
}


