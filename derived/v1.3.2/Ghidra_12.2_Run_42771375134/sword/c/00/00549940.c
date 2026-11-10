/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00549940; name: FUN_00549940
 */


undefined8 FUN_00549940(long param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  undefined4 uVar9;
  ulong *puVar10;
  ulong *puVar11;
  long *plVar12;
  char *pcVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  undefined8 uVar19;
  
  uVar14 = *(ulong *)(param_1 + 0x20);
  if (uVar14 != 0) {
    uVar16 = uVar14 + *(long *)(uVar14 - 8) * 0x18;
    do {
      uVar16 = uVar16 - 0x18;
    } while (uVar14 <= uVar16);
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,*(long *)(param_1 + 0x28) + -8);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,*(long *)(param_1 + 0x30) + -8);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(long **)(param_1 + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x78) + 0x18))();
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  *(uint *)(param_1 + 0x18) = param_3;
  puVar8 = PTR_PTR_02713988;
  puVar10 = (ulong *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,(ulong)param_3 * 0x18 + 8,
                                  "C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceBuffer.cpp",0x651,0)
  ;
  puVar11 = puVar10;
  if (puVar10 != (ulong *)0x0) {
    puVar11 = puVar10 + 1;
    *puVar10 = (ulong)param_3;
  }
  uVar6 = *(uint *)(param_1 + 0x18);
  *(ulong **)(param_1 + 0x20) = puVar11;
  puVar10 = (ulong *)FUN_005b9a50(*(undefined8 *)puVar8,(ulong)uVar6 * 4 + 8,
                                  "C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceBuffer.cpp",0x652,0)
  ;
  puVar11 = puVar10;
  if (puVar10 != (ulong *)0x0) {
    puVar11 = puVar10 + 1;
    *puVar10 = (ulong)uVar6;
  }
  uVar6 = *(uint *)(param_1 + 0x18);
  *(ulong **)(param_1 + 0x28) = puVar11;
  puVar10 = (ulong *)FUN_005b9a50(*(undefined8 *)puVar8,(ulong)uVar6 * 4 + 8,
                                  "C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceBuffer.cpp",0x653,0)
  ;
  puVar11 = puVar10;
  if (puVar10 != (ulong *)0x0) {
    puVar11 = puVar10 + 1;
    *puVar10 = (ulong)uVar6;
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(ulong **)(param_1 + 0x30) = puVar11;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar18 = *(long *)(param_1 + 0x20);
    lVar15 = 0;
    uVar14 = 0;
    iVar17 = 0;
    do {
      puVar1 = (undefined8 *)(param_2 + lVar15);
      uVar5 = puVar1[1];
      uVar19 = puVar1[2];
      puVar2 = (undefined8 *)(lVar18 + lVar15);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar19;
      uVar9 = 0;
      switch(*(undefined4 *)(*(long *)(param_1 + 0x20) + lVar15 + 8)) {
      case 2:
        uVar9 = 0x10;
        break;
      case 6:
        uVar9 = 0xc;
        break;
      case 0xe:
      case 0x10:
        uVar9 = 8;
        break;
      case 0x1e:
      case 0x26:
      case 0x29:
        uVar9 = 4;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x28) + uVar14 * 4) = uVar9;
      uVar9 = 0;
      switch(*(undefined4 *)(*(long *)(param_1 + 0x20) + lVar15 + 8)) {
      case 2:
      case 0xe:
      case 0x1e:
        uVar9 = 4;
        break;
      case 6:
        uVar9 = 3;
        break;
      case 0x10:
      case 0x26:
        uVar9 = 2;
        break;
      case 0x29:
        uVar9 = 1;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x30) + uVar14 * 4) = uVar9;
      lVar18 = *(long *)(param_1 + 0x20);
      iVar7 = *(int *)(lVar18 + lVar15 + 0xc);
      if (iVar7 == 0) {
        *(int *)(lVar18 + lVar15 + 0xc) = iVar17;
        lVar18 = *(long *)(param_1 + 0x20);
      }
      else {
        iVar17 = iVar7;
      }
      lVar3 = lVar18 + lVar15;
      lVar15 = lVar15 + 0x18;
      iVar7 = *(int *)(*(long *)(param_1 + 0x28) + uVar14 * 4);
      uVar14 = uVar14 + 1;
      lVar3 = param_1 + (ulong)*(uint *)(lVar3 + 0x10) * 4;
      iVar17 = iVar7 + iVar17;
      *(int *)(lVar3 + 0x38) = *(int *)(lVar3 + 0x38) + iVar7;
    } while (uVar14 < *(uint *)(param_1 + 0x18));
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0x10) + 0x38);
  plVar12 = (long *)(**(code **)(*plVar12 + 0x130))(plVar12,0,0,0);
  if (plVar12 == (long *)0x0) {
    if (*(int *)PTR_DAT_02713970 == 0) {
      return 0xffffffff;
    }
    if (*(int *)PTR_DAT_02713980 == 0) {
      return 0xffffffff;
    }
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceBuffer.cpp(%d) : PPFX ERROR: ",0x6b9)
    ;
    FUN_00517ae0(
                "IGPUInputAttribute::BuildInputAttribute(): pSiGfxDevice->CreateVertexFormat() failed.\n"
                );
    return 0xffffffff;
  }
  uVar14 = (**(code **)(*plVar12 + 0x90))();
  if ((uVar14 & 1) == 0) {
    if ((*(int *)PTR_DAT_02713970 == 0) || (*(int *)PTR_DAT_02713980 == 0)) goto LAB_00549d44;
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceBuffer.cpp(%d) : PPFX ERROR: ",0x6c2)
    ;
    pcVar13 = 
    "IGPUInputAttribute::BuildInputAttribute(): pSiGfxVertexFormat->BeginCreate() failed.\n";
  }
  else {
    if (*(int *)(param_1 + 0x18) != 0) {
      lVar15 = 0;
      uVar14 = 0;
      do {
        puVar4 = (undefined4 *)(*(long *)(param_1 + 0x20) + lVar15);
        uVar9 = FUN_005470e0(*puVar4);
        (**(code **)(*plVar12 + 0x98))
                  (plVar12,uVar9,puVar4[1],puVar4[2],puVar4[4],puVar4[3],puVar4[5] != 0);
        uVar14 = uVar14 + 1;
        lVar15 = lVar15 + 0x18;
      } while (uVar14 < *(uint *)(param_1 + 0x18));
    }
    uVar14 = (**(code **)(*plVar12 + 0xa0))(plVar12);
    if ((uVar14 & 1) != 0) {
      *(long **)(param_1 + 0x78) = plVar12;
      return 0;
    }
    if ((*(int *)PTR_DAT_02713970 == 0) || (*(int *)PTR_DAT_02713980 == 0)) goto LAB_00549d44;
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceBuffer.cpp(%d) : PPFX ERROR: ",0x6e4)
    ;
    pcVar13 = "IGPUInputAttribute::BuildInputAttribute(): pSiGfxVertexFormat->EndCreate() failed.\n"
    ;
  }
  FUN_00517ae0(pcVar13);
LAB_00549d44:
  (**(code **)(*plVar12 + 0x18))(plVar12);
  return 0xffffffff;
}


