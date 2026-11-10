/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0056e320; name: FUN_0056e320
 */


int FUN_0056e320(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)**(undefined8 **)(param_1 + 0x29a58))
                    (*(undefined8 **)(param_1 + 0x29a58),*(undefined8 *)(param_1 + 0x20));
  if (iVar1 < 0) {
    if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_02713980 != 0) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX ERROR: ",0x16cd);
      uVar2 = FUN_00546ea0(iVar1);
      FUN_00517ae0("CTextureUtil::InitializeDeviceSharedTexturePoolWithCheck(): m_pTexturePool->InitializeDevice() failed (0x%x: %s).\n"
                   ,iVar1,uVar2);
    }
  }
  else if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_02713978 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX: ",0x16d1);
    FUN_00517ae0(
                "CTextureUtil::InitializeDeviceSharedTexturePoolWithCheck(): m_pTexturePool->InitializeDevice() succeeded.\n"
                );
    return iVar1;
  }
  return iVar1;
}


