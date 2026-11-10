/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0054a1e0; name: FUN_0054a1e0
 */


undefined8 FUN_0054a1e0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 0x38);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x210))(plVar1,0,0,0);
  if (plVar1 != (long *)0x0) {
    local_28 = *(undefined4 *)(param_1 + 0x18);
    uStack_24 = 0;
    uVar2 = (**(code **)(*plVar1 + 0x90))(plVar1,&local_28);
    if ((uVar2 & 1) != 0) {
      *(long **)(param_1 + 0x20) = plVar1;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return 0;
    }
    if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceQuery.cpp(%d) : PPFX ERROR: ",0xeb)
      ;
      FUN_00517ae0("IGPUBaseQuery::CreateDeviceQuery(): ISiGfxQuery::Create() failed.\n");
    }
    (**(code **)(*plVar1 + 0x18))(plVar1);
    return 0xffffffff;
  }
  if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713980 == 0) {
    return 0xffffffff;
  }
  FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceQuery.cpp(%d) : PPFX ERROR: ",0xde);
  FUN_00517ae0("IGPUBaseQuery::CreateDeviceQuery(): ISiGfxDevice::CreateQuery() failed.\n");
  return 0xffffffff;
}


