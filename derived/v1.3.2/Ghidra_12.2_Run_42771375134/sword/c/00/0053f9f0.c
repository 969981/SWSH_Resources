/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053f9f0; name: FUN_0053f9f0
 */


undefined8 FUN_0053f9f0(long param_1,uint param_2)

{
  long lVar1;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  
  if (0xf < param_2) {
    return 0xfffffffa;
  }
  uStack_50 = 0;
  local_40 = 8;
  local_34 = 0;
  local_3c = 0;
  lVar1 = ((ulong)(param_2 ^ 2) & 3) * 4;
  _local_48 = CONCAT44(1,*(undefined4 *)(&DAT_01d4a490 + lVar1));
  local_24 = 0;
  local_2c = 0;
  _local_58 = CONCAT44(3,*(undefined4 *)(&DAT_01d4ad20 + (ulong)(param_2 >> 2 & 3 ^ 2) * 4));
  _local_60 = CONCAT44(*(undefined4 *)(&DAT_01d4ad20 + (ulong)(param_2 >> 2 & 3 ^ 2) * 4),
                       *(undefined4 *)(&DAT_01d4d340 + lVar1));
  lVar1 = (**(code **)(**(long **)(param_1 + 0x38) + 0x1a0))
                    (*(long **)(param_1 + 0x38),&local_60,0,0,0);
  if (lVar1 != 0) {
    *(long *)(param_1 + (long)(int)param_2 * 8 + 0x14c88) = lVar1;
    return 0;
  }
  if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp(%d) : PPFX ERROR: ",0xee3)
    ;
    FUN_00517ae0(
                "IGPUDevice::InitializeDevice_CreateDeviceStates_SamplerStateMode(): pSiGfxDevice->CreateSampler() failed.\n"
                );
  }
  return 0xffffffff;
}


