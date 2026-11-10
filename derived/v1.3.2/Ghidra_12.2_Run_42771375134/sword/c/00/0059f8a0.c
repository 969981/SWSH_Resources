/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059f8a0; name: FUN_0059f8a0
 */


uint FUN_0059f8a0(long param_1,uint param_2,long param_3,int param_4,int param_5,int param_6,
                 byte param_7,uint param_8,uint param_9)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  undefined1 auStack_98 [8];
  undefined8 local_90;
  uint local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined4 uStack_78;
  undefined5 uStack_74;
  undefined3 local_6f;
  undefined5 uStack_6c;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar14 = (ulong)param_2;
  plVar5 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,
                                (-(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | uVar14 << 3) + 8,
                                "C:/workspace/YEBIS_draft/src/GPU/GPURenderTexturePool.cpp",0x77,0);
  plVar8 = plVar5;
  if (plVar5 != (long *)0x0) {
    plVar8 = plVar5 + 1;
    *plVar5 = (long)(int)param_2;
  }
  if (0 < (int)param_2) {
                    /* WARNING: Subroutine does not return */
    memset(plVar8,0,uVar14 << 3);
  }
  if ((param_7 & 1) == 0) {
LAB_0059f9f4:
    iVar13 = 0;
    uVar2 = param_2;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x38);
    if (param_1 + 0x30 == lVar9) goto LAB_0059f9f4;
    iVar13 = 0;
    do {
      lVar12 = *(long *)(*(long *)(lVar9 + 0x10) + 8);
      if ((((*(char *)(lVar12 + 0xc) != '\0') && (*(int *)(lVar12 + 0x54) == param_4)) &&
          (*(int *)(lVar12 + 0x58) == param_5)) &&
         ((*(int *)(lVar12 + 0x38) == param_6 &&
          (((*(uint *)(lVar12 + 0x2c) ^ param_8) & param_9) == 0)))) {
        plVar8[iVar13] = lVar12;
        iVar13 = iVar13 + 1;
        if ((int)param_2 <= iVar13) break;
      }
      lVar9 = *(long *)(lVar9 + 8);
    } while (param_1 + 0x30 != lVar9);
    uVar2 = param_2 - iVar13;
  }
  if (param_3 == 0) {
    if (plVar8 == (long *)0x0) {
      return uVar2;
    }
    plVar5 = plVar8 + plVar8[-1];
    do {
      plVar5 = plVar5 + -1;
    } while (plVar8 <= plVar5);
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
    return uVar2;
  }
  if ((int)param_2 < 1) {
    if (plVar8 == (long *)0x0) goto LAB_0059fc40;
  }
  else {
    uVar10 = (ulong)param_2;
    if (uVar10 - 1 < 3) {
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      plVar5 = plVar8 + 2;
      plVar11 = (long *)(param_3 + 0x10);
      do {
        plVar11[-2] = plVar5[-2];
        plVar11[-1] = plVar5[-1];
        *plVar11 = *plVar5;
        plVar1 = plVar5 + 1;
        lVar9 = lVar9 + 4;
        plVar5 = plVar5 + 4;
        plVar11[1] = *plVar1;
        plVar11 = plVar11 + 4;
      } while (uVar10 - (uVar10 & 3) != lVar9);
    }
    if ((param_2 & 3) != 0) {
      lVar12 = -(uVar10 & 3);
      plVar5 = (long *)(param_3 + lVar9 * 8);
      plVar11 = plVar8 + lVar9;
      do {
        lVar12 = lVar12 + 1;
        *plVar5 = *plVar11;
        plVar5 = plVar5 + 1;
        plVar11 = plVar11 + 1;
      } while (lVar12 != 0);
    }
  }
  plVar5 = plVar8 + plVar8[-1];
  do {
    plVar5 = plVar5 + -1;
  } while (plVar8 <= plVar5);
  FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
  puVar3 = PTR_PTR_02713988;
  if (0 < (int)param_2) {
    uVar10 = 0;
    do {
      while (lVar9 = *(long *)(param_3 + uVar10 * 8), lVar9 != 0) {
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
        uVar10 = uVar10 + 1;
        if (uVar14 == uVar10) goto LAB_0059fc40;
      }
      FUN_00552650(auStack_98,uVar10 & 0xffffffff);
      uVar4 = local_90;
      puVar6 = (undefined8 *)
               FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x128,
                            "C:/workspace/YEBIS_draft/src/GPU/GPURenderTexturePool.cpp",0xbe,0);
      FUN_0059aa70(puVar6,uVar4);
      *(undefined8 **)(param_3 + uVar10 * 8) = puVar6;
      *(byte *)((long)puVar6 + 0xc) = param_7 & 1;
      uStack_78 = 1;
      uStack_6c = 0;
      uStack_74 = 0;
      local_6f = 0;
      local_88 = param_8;
      local_84 = param_4;
      local_80 = param_5;
      local_7c = param_6;
      FUN_0059abd0(puVar6,&local_88);
      if (*(long *)(param_1 + 0x20) != 0) {
        (**(code **)*puVar6)(puVar6);
      }
      puVar7 = (undefined1 *)
               FUN_005b9a50(*(undefined8 *)puVar3,0x10,
                            "C:/workspace/YEBIS_draft/src/GPU/GPURenderTexturePool.cpp",0xcc,0);
      *puVar7 = 1;
      *(undefined8 **)(puVar7 + 8) = puVar6;
      plVar8 = (long *)FUN_005b9a50(*(undefined8 *)puVar3,0x18,"../src/GPU/GPUMemoryAllocator.h",
                                    0x1b8,0);
      *plVar8 = 0;
      plVar8[1] = param_1 + 0x30;
      plVar8[2] = (long)puVar7;
      lVar9 = *(long *)(param_1 + 0x30);
      *plVar8 = lVar9;
      *(long **)(lVar9 + 8) = plVar8;
      *(long **)(param_1 + 0x30) = plVar8;
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
      FUN_00551380(auStack_98);
      uVar10 = uVar10 + 1;
    } while (uVar14 != uVar10);
  }
LAB_0059fc40:
  if (!(*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713978 == 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPURenderTexturePool.cpp(%d) : PPFX: ",0xd3);
    FUN_00517ae0("CRenderTexturePool::AllocateTextures(): Shared: %d, Generated: %d, %s\n",iVar13,
                 uVar2,*(undefined8 *)(param_1 + 0x18));
  }
  return uVar2;
}


