/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00544c70; name: FUN_00544c70
 */


int FUN_00544c70(long *param_1,long *param_2,uint param_3,undefined4 param_4,uint param_5)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  
  if ((long *)param_1[0x15] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x15] + 0x18))();
    param_1[0x15] = 0;
  }
  if ((long *)param_1[0x17] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x17] + 0x18))();
    param_1[0x17] = 0;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[7] = (long)param_2;
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x98))(param_2);
  }
  *(uint *)((long)param_1 + 0x24) = param_5;
  if ((param_5 >> 0xb & 1) != 0) {
    *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffcff;
  }
  lVar7 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar8 = (**(code **)(*param_2 + 0x40))(param_2);
  piVar1 = (int *)(lVar7 + 4);
  if ((*(uint *)(lVar8 + 8) & 0x4000) != 0) {
    piVar1 = (int *)(lVar7 + 0xc);
  }
  if ((*(uint *)(lVar8 + 8) & 0x20) != 0) {
    piVar1 = (int *)(lVar7 + 0x10);
  }
  uVar3 = *(uint *)(lVar7 + 0x18);
  uVar2 = *(undefined4 *)(lVar7 + 0x30);
  uVar4 = *(undefined4 *)(lVar7 + 0x34);
  uVar5 = *(uint *)(lVar7 + 0x14) >> (ulong)(param_3 & 0x1f);
  iVar6 = *(int *)(lVar7 + 4);
  if (*piVar1 != 0) {
    iVar6 = *piVar1;
  }
  if (uVar5 == 0) {
    uVar5 = 1;
  }
  *(int *)((long)param_1 + 0x44) = iVar6;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)((long)param_1 + 0xc);
  uVar3 = uVar3 >> (ulong)(param_3 & 0x1f);
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  *(undefined4 *)((long)param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0xb) = uVar4;
  *(uint *)((long)param_1 + 0x4c) = uVar5;
  *(uint *)(param_1 + 10) = uVar3;
  FUN_00546030(param_1);
  if ((param_5 & 1) == 0) {
    return 0;
  }
  plVar15 = *(long **)(param_1[3] + 0x38);
  plVar9 = (long *)(**(code **)(*plVar15 + 0x240))(plVar15,0,0,0);
  if ((plVar9 == (long *)0x0) || (uVar10 = (**(code **)(*plVar9 + 0x90))(plVar9), (uVar10 & 1) == 0)
     ) {
    if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceSurface.cpp(%d) : PPFX ERROR: ",
                   0x137c);
      FUN_00517ae0("IGPUSurface::RegisterSiGfxTexture(): ISiGfxRenderTarget creation failed.\n");
    }
    if (plVar9 == (long *)0x0) {
      return -1;
    }
  }
  else {
    (**(code **)(*plVar9 + 0xa8))(plVar9,0,param_2,0,param_3,param_4,0);
    (**(code **)(*plVar9 + 200))(plVar9);
    plVar15 = (long *)(**(code **)(*plVar15 + 0xe8))(plVar15,1,0,0);
    if ((plVar15 != (long *)0x0) &&
       (uVar10 = (**(code **)(*plVar15 + 0x40))(plVar15), (uVar10 & 1) != 0)) {
      plVar11 = (long *)(**(code **)(*plVar15 + 0x50))(plVar15);
      *plVar11 = (long)plVar9;
      (**(code **)(*plVar15 + 0x48))(plVar15);
      param_1[0x15] = (long)plVar9;
      param_1[0x17] = (long)plVar15;
      puVar12 = (undefined8 *)
                FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x58,
                             "C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceSurface.cpp",0x1a4,0);
      puVar13 = puVar12;
      if (puVar12 != (undefined8 *)0x0) {
        puVar13 = puVar12 + 1;
        *puVar12 = 10;
      }
      param_1[0x10] = (long)puVar13;
      *puVar13 = 0;
      *(undefined8 *)(param_1[0x10] + 8) = 0;
      *(undefined8 *)(param_1[0x10] + 0x10) = 0;
      *(undefined8 *)(param_1[0x10] + 0x18) = 0;
      *(undefined8 *)(param_1[0x10] + 0x20) = 0;
      *(undefined8 *)(param_1[0x10] + 0x28) = 0;
      *(undefined8 *)(param_1[0x10] + 0x30) = 0;
      *(undefined8 *)(param_1[0x10] + 0x38) = 0;
      *(undefined8 *)(param_1[0x10] + 0x40) = 0;
      *(undefined8 *)(param_1[0x10] + 0x48) = 0;
      iVar6 = (**(code **)(*param_1 + 0x60))(param_1,0,param_1);
      if (-1 < iVar6) {
        return 0;
      }
      if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceSurface.cpp(%d) : PPFX ERROR: ",
                     0x13a6);
        uVar14 = FUN_00546ea0(iVar6);
        FUN_00517ae0("IGPUSurface::RegisterSiGfxTexture(): AttachFramebuffer() failed (0x%x: %s).\n"
                     ,iVar6,uVar14);
      }
      (**(code **)(*param_1 + 8))(param_1);
      return iVar6;
    }
    if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceSurface.cpp(%d) : PPFX ERROR: ",
                   0x1394);
      FUN_00517ae0("IGPUSurface::RegisterSiGfxTexture(): ISiGfxRenderPass creation failed.\n");
    }
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  (**(code **)(*plVar9 + 0x18))(plVar9);
  return -1;
}


