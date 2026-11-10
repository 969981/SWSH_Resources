/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0065b580; name: FUN_0065b580
 */


void FUN_0065b580(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0xa8) != 0) {
    plVar1 = *(long **)(param_1 + 0x10);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x48))
                (plVar1,*(long *)(param_1 + 0xa8),
                 "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Shader_Impl.cpp",
                 0x1a5);
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_006530c0(*(long *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xb0));
    *(undefined8 *)(param_1 + 0xb0) = 0;
    if (*(long **)(param_1 + 0xa0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xa0) + 0x18))();
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  return;
}


