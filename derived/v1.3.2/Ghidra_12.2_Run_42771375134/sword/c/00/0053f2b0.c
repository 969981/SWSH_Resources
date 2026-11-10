/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053f2b0; name: FUN_0053f2b0
 */


uint FUN_0053f2b0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  int iVar12;
  long *plVar13;
  uint uVar14;
  undefined1 auStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  
  plVar1 = param_1 + 0x29fe;
  *plVar1 = 0;
  plVar2 = param_1 + 0x29ff;
  *plVar2 = 0;
  (**(code **)(*param_1 + 0x88))(param_1,auStack_78);
  puVar6 = PTR_DAT_02713a88;
  if (*(int *)PTR_DAT_02713a88 == 0) {
    *(undefined4 *)PTR_DAT_02713a88 = local_70;
    iVar12 = *(int *)(puVar6 + 4);
  }
  else {
    iVar12 = *(int *)(PTR_DAT_02713a88 + 4);
  }
  if (iVar12 == 0) {
    *(undefined4 *)(puVar6 + 4) = local_6c;
    plVar13 = *(long **)(puVar6 + 0x28);
  }
  else {
    plVar13 = *(long **)(puVar6 + 0x28);
  }
  if (plVar13 == (long *)0x0) {
    lVar9 = (**(code **)(*(long *)param_1[6] + 0x108))();
    plVar13 = *(long **)(lVar9 + 0x18);
    if (plVar13 == (long *)0x0) {
      if (*(int *)PTR_DAT_02713970 == 0) {
        return 0xffffffff;
      }
      if (*(int *)PTR_DAT_02713980 == 0) {
        return 0xffffffff;
      }
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX ERROR: ",
                   0x69c);
      uVar11 = FUN_00546ea0(0);
      FUN_00517ae0("IGPUDevice::InitializeDeviceBuffers(): GetSiGfxDeviceBackBuffer() failed (0x%x: %s).\nEffective backbuffer must be set as the render target.\n"
                   ,0,uVar11);
      return 0xffffffff;
    }
  }
  (**(code **)(*plVar13 + 0x10))(plVar13);
  lVar9 = FUN_005450e0(param_1,2,plVar13);
  *plVar1 = lVar9;
  if (((lVar9 == 0) && (*(int *)PTR_DAT_02713970 != 0)) && (*(int *)PTR_DAT_02713980 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX ERROR: ",0x6ac)
    ;
    FUN_00517ae0(
                "IGPUDevice::InitializeDeviceBuffers(): m_pGPUSurface_BackBuffer = IGPUSurface::CreateSurface_SiGfxDefaultRenderTarget() failed.\n"
                );
  }
  lVar9 = FUN_005450e0(param_1,3,plVar13);
  *plVar2 = lVar9;
  (**(code **)(*plVar13 + 0x18))(plVar13);
  lVar9 = *plVar1;
  uVar7 = *(undefined4 *)(lVar9 + 0x4c);
  uVar4 = *(undefined4 *)(lVar9 + 0x50);
  *(undefined8 *)((long)param_1 + 0x14fd4) = 0;
  *(undefined4 *)((long)param_1 + 0x14fdc) = uVar7;
  *(undefined4 *)(param_1 + 0x29fc) = uVar4;
  *(undefined8 *)((long)param_1 + 0x14fe4) = 0x3f80000000000000;
  (**(code **)(*param_1 + 0x1b0))(param_1,0,0);
  (**(code **)(*param_1 + 0x1b8))(0,0,param_1);
  puVar6 = PTR_DAT_02713990;
  if (*(int *)PTR_DAT_02713990 != 0) {
    puVar10 = (undefined1 *)FUN_00546bd0(*(undefined4 *)(lVar9 + 0x44),0);
    uVar7 = FUN_00546ef0(*(undefined4 *)(lVar9 + 0x54));
    uVar11 = FUN_00546cf0(*(undefined4 *)(*plVar1 + 0x24),1,0);
    puVar5 = PTR_DAT_02713970;
    iVar12 = *(int *)puVar6;
    if ((*(int *)PTR_DAT_02713970 != 0) && (iVar12 != 0)) {
      puVar3 = &DAT_01d38550;
      if (puVar10 != (undefined1 *)0x0) {
        puVar3 = puVar10;
      }
      FUN_00517ae0("PPFX: ");
      FUN_00517ae0("%s %s:\t%4d x %4d,\t%s (0x%04x),\tMSAA(%2dx, %2d),\tUsage 0x%08x,\tFlags 0x%08x\n"
                   ,"DevBS",uVar11,*(undefined4 *)(lVar9 + 0x4c),*(undefined4 *)(lVar9 + 0x50),
                   puVar3,*(undefined4 *)(lVar9 + 0x44),uVar7,*(undefined4 *)(lVar9 + 0x58),
                   *(undefined4 *)(*plVar1 + 0x24),*(undefined4 *)(*plVar1 + 0x28));
      iVar12 = *(int *)puVar6;
    }
    lVar9 = *plVar2;
    if ((lVar9 != 0) && (iVar12 != 0)) {
      puVar10 = (undefined1 *)FUN_00546bd0(*(undefined4 *)(lVar9 + 0x44),0);
      uVar7 = FUN_00546ef0(*(undefined4 *)(lVar9 + 0x54));
      uVar11 = FUN_00546cf0(*(undefined4 *)(*plVar2 + 0x24),1,0);
      if ((*(int *)puVar5 != 0) && (*(int *)puVar6 != 0)) {
        puVar3 = &DAT_01d38550;
        if (puVar10 != (undefined1 *)0x0) {
          puVar3 = puVar10;
        }
        FUN_00517ae0("PPFX: ");
        FUN_00517ae0("%s %s:\t%4d x %4d,\t%s (0x%04x),\tMSAA(%2dx, %2d),\tUsage 0x%08x,\tFlags 0x%08x\n"
                     ,"DevDS",uVar11,*(undefined4 *)(lVar9 + 0x4c),*(undefined4 *)(lVar9 + 0x50),
                     puVar3,*(undefined4 *)(lVar9 + 0x44),uVar7,*(undefined4 *)(lVar9 + 0x58),
                     *(undefined4 *)(*plVar2 + 0x24),*(undefined4 *)(*plVar2 + 0x28));
      }
    }
  }
  uVar8 = (**(code **)(*param_1 + 0x38))(param_1,0,*plVar1,0);
  uVar14 = 0;
  if ((((int)uVar8 < 0) && (uVar14 = uVar8, *(int *)PTR_DAT_02713970 != 0)) &&
     (*(int *)PTR_DAT_02713980 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX ERROR: ",0x708)
    ;
    uVar11 = FUN_00546ea0(uVar8);
    FUN_00517ae0("IGPUDevice::InitializeDeviceBuffers(): SetRenderTarget() failed (0x%x: %s).\n",
                 uVar8,uVar11);
  }
  uVar8 = (**(code **)(*param_1 + 0x40))(param_1,*plVar2);
  if ((int)uVar8 < 0) {
    if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX ERROR: ",
                   0x70f);
      uVar11 = FUN_00546ea0(uVar8);
      FUN_00517ae0("IGPUDevice::InitializeDeviceBuffers(): SetDepthStencilSurface() failed (0x%x: %s).\n"
                   ,uVar8,uVar11);
    }
    uVar14 = uVar8;
  }
  return uVar14 & (int)uVar14 >> 0x1f;
}


