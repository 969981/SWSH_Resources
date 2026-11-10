/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005439d0; name: FUN_005439d0
 */


undefined8 FUN_005439d0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  FUN_00543b10();
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x38);
  lVar2 = (**(code **)(*plVar1 + 0x240))(plVar1,0,0,0);
  if (lVar2 != 0) {
    *(undefined1 *)(param_1 + 0xb0) = 1;
    FUN_00543c30(param_1,lVar2);
    puVar3 = (undefined8 *)
             FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x58,
                          "C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceSurface.cpp",0x1a4,0);
    puVar4 = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = puVar3 + 1;
      *puVar3 = 10;
    }
    *(undefined8 **)(param_1 + 0x80) = puVar4;
    *puVar4 = 0;
    *(undefined8 *)(*(long *)(param_1 + 0x80) + 8) = 0;
    *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x10) = 0;
    *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x18) = 0;
    *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x20) = 0;
    *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x28) = 0;
    *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x30) = 0;
    *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x38) = 0;
    *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x40) = 0;
    *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x48) = 0;
    return 0;
  }
  if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713980 == 0) {
    return 0xffffffff;
  }
  FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceSurface.cpp(%d) : PPFX ERROR: ",0x262);
  FUN_00517ae0(
              "IGPUSurface::CreateSiGfxRenderTarget(): ISiGfxDevice::CreateRenderTarget() failed.\n"
              );
  return 0xffffffff;
}


