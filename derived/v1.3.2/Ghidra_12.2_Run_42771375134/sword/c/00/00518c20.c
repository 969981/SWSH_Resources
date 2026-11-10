/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00518c20; name: thunk_FUN_0053b9d0
 */


undefined8 thunk_FUN_0053b9d0(long param_1,int param_2)

{
  if ((param_1 == 0) || (-1 < param_2)) {
    *(long *)PTR_DAT_02713a08 = param_1;
    *(int *)PTR_DAT_02713a10 = param_2;
    return 0;
  }
  if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713980 == 0) {
    return 1;
  }
  FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0xa59a);
  FUN_00517ae0(
              "CPostEffect::SetResourceMemoryAllocate_Nvn() : (iMemoryPoolStorageBufferSizeInBytes < 0)&&(pMemoryPoolStorageBuffer!=NULL)\n"
              );
  return 1;
}


