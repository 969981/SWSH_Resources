/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00545420; name: FUN_00545420
 */


long * FUN_00545420(undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4,
                   uint param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined4 *puVar13;
  long *plVar14;
  
  plVar7 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,200,
                                "C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceSurface.cpp",0x14ec,0)
  ;
  FUN_00545fc0(plVar7,param_1);
  plVar7[0x12] = (long)(plVar7 + 0x12);
  plVar7[0x13] = (long)(plVar7 + 0x12);
  plVar7[0x14] = 0;
  plVar7[0x15] = plVar7[7];
  puVar5 = PTR_DAT_02713b70;
  plVar7[0xe] = 0;
  *(undefined1 *)(plVar7 + 0x16) = 0;
  plVar7[0x17] = 0;
  *(undefined1 *)(plVar7 + 0x18) = 0;
  *plVar7 = (long)(puVar5 + 0x10);
  *(undefined4 *)((long)plVar7 + 0xc) = 6;
  plVar7[0x10] = 0;
  *(uint *)((long)plVar7 + 0x24) = param_5;
  *(undefined4 *)(plVar7 + 0x11) = 0xffffffff;
  if ((param_5 >> 0xb & 1) == 0) {
    uVar12 = *(uint *)(param_2 + 0x28);
  }
  else {
    *(uint *)(plVar7 + 5) = *(uint *)(plVar7 + 5) & 0xfffffcff;
    uVar12 = *(uint *)(param_2 + 0x28) & 0xfffffcff;
  }
  *(uint *)(plVar7 + 5) = uVar12;
  *(undefined4 *)(plVar7 + 2) = 4;
  plVar7[0xd] = param_2;
  plVar14 = (long *)**(undefined8 **)(param_2 + 0x70);
  piVar8 = (int *)(**(code **)(*plVar14 + 0x98))(plVar14);
  if (*piVar8 == 4) {
    plVar14 = (long *)(**(code **)(*plVar14 + 0xd0))(plVar14,param_4,param_3);
  }
  else if (*piVar8 == 2) {
    plVar14 = (long *)(**(code **)(*plVar14 + 200))(plVar14,param_3);
  }
  else {
    plVar14 = (long *)0x0;
  }
  lVar9 = (**(code **)(*plVar14 + 0x88))(plVar14);
  lVar10 = (**(code **)(*plVar14 + 0x40))(plVar14);
  if ((*(uint *)(lVar10 + 8) >> 5 & 1) == 0) {
    if ((*(uint *)(lVar10 + 8) >> 0xe & 1) == 0) {
      puVar13 = (undefined4 *)(lVar9 + 4);
    }
    else {
      puVar13 = (undefined4 *)(lVar9 + 0xc);
    }
  }
  else {
    puVar13 = (undefined4 *)(lVar9 + 0x10);
  }
  uVar3 = *puVar13;
  uVar1 = *(undefined4 *)(lVar9 + 0x1c);
  uVar2 = *(undefined4 *)(lVar9 + 0x20);
  *(undefined8 *)((long)plVar7 + 0x4c) = *(undefined8 *)(lVar9 + 0x14);
  *(undefined4 *)((long)plVar7 + 0x44) = uVar3;
  *(undefined4 *)(plVar7 + 9) = *(undefined4 *)((long)plVar7 + 0xc);
  *(undefined4 *)((long)plVar7 + 0x54) = uVar1;
  *(undefined4 *)(plVar7 + 0xb) = uVar2;
  FUN_00546030(plVar7);
  *(undefined4 *)(plVar7 + 0xf) = param_3;
  *(undefined4 *)((long)plVar7 + 0x7c) = param_4;
  if ((param_5 & 7) == 0) {
    return plVar7;
  }
  if ((*(uint *)((long)plVar7 + 0x24) & 7) == 0) {
    iVar6 = -6;
  }
  else {
    if ((*(uint *)((long)plVar7 + 0x24) & 1) == 0) {
      return plVar7;
    }
    FUN_005439d0(plVar7);
    iVar6 = (**(code **)(*plVar7 + 0x60))(plVar7,0,plVar7);
    if (-1 < iVar6) {
      return plVar7;
    }
    if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceSurface.cpp(%d) : PPFX ERROR: ",
                   0x2b9);
      uVar11 = FUN_00546ea0(iVar6);
      FUN_00517ae0("IGPUSurface::CreateOwnSiGfxRenderTarget(): AttachFramebuffer() failed (0x%x: %s).\n"
                   ,iVar6,uVar11);
      iVar4 = *(int *)PTR_DAT_02713970;
      goto joined_r0x00545674;
    }
  }
  iVar4 = *(int *)PTR_DAT_02713970;
joined_r0x00545674:
  if ((iVar4 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceSurface.cpp(%d) : PPFX ERROR: ",
                 0x153b);
    uVar11 = FUN_00546ea0(iVar6);
    FUN_00517ae0("IGPUSurface::CreateSurface_SIGFX_TEXTURE_ATTACHED_SURFACE(): IGPUSurface::CreateOwnSiGfxRenderTarget() failed (0x%x: %s).\n"
                 ,iVar6,uVar11);
  }
  return plVar7;
}


