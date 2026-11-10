/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006530c0; name: FUN_006530c0
 */


void FUN_006530c0(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x458) == 0) {
    return;
  }
  FUN_005bdf10(param_1 + 0x188,*(long *)(param_1 + 0x458) + param_2,
               "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_MemoryHeap_Impl.cpp"
               ,0x194);
  return;
}


