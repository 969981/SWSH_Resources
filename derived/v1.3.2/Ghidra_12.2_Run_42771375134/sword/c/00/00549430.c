/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00549430; name: FUN_00549430
 */


void FUN_00549430(long param_1)

{
  long *plVar1;
  
  if (*(char *)(param_1 + 0x5c) != '\0') {
    plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x30);
    (**(code **)(*plVar1 + 0x230))
              (plVar1,*(undefined8 *)
                       (*(long *)(param_1 + 0x50) + (ulong)*(uint *)(param_1 + 0x58) * 8),
               param_1 + 0x60);
    *(undefined1 *)(param_1 + 0x5c) = 0;
    return;
  }
  if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713980 == 0) {
    return;
  }
  FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceBuffer.cpp(%d) : PPFX ERROR: ",0x4db);
  FUN_00517ae0("IGPUBuffer::Unmap(): Buffer is not mapped.\n");
  return;
}


