/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00543c30; name: FUN_00543c30
 */


void FUN_00543c30(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  *(long *)(param_1 + 0xa8) = param_2;
  if (*(int *)(param_1 + 0x24) == 1) {
    plVar1 = *(long **)(param_1 + 0xb8);
    if ((param_2 != 0) && (plVar1 == (long *)0x0)) {
      plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x38);
      plVar1 = (long *)(**(code **)(*plVar1 + 0xe8))(plVar1,1,0,0);
      *(long **)(param_1 + 0xb8) = plVar1;
      if ((plVar1 == (long *)0x0) &&
         ((*(int *)PTR_DAT_02713970 != 0 && (*(int *)PTR_DAT_02713980 != 0)))) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceSurface.cpp(%d) : PPFX ERROR: ",
                     0x1bfc);
        FUN_00517ae0(
                    "IGPUSurface::SetSiGfxRenderTarget(): ISiGfxDevice::CreateRenderPassState() failed.\n"
                    );
        plVar1 = *(long **)(param_1 + 0xb8);
      }
      *(undefined1 *)(param_1 + 0xc0) = 1;
    }
    if ((plVar1 != (long *)0x0) && (uVar2 = (**(code **)(*plVar1 + 0x40))(), (uVar2 & 1) != 0)) {
      puVar3 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0xb8) + 0x50))();
      *puVar3 = *(undefined8 *)(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00543d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0xb8) + 0x48))();
      return;
    }
  }
  return;
}


