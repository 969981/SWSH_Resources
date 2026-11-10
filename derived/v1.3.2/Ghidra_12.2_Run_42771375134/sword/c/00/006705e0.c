/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006705e0; name: FUN_006705e0
 */


undefined8 FUN_006705e0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  void *__s;
  size_t __n;
  
  if (0 < param_3) {
    lVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x38))
                      (*(long **)(param_1 + 8),((long)param_3 + (long)param_3 * 2) * 0x20,0x10,
                       "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectDefinition_Impl.cpp"
                       ,0x1cb);
    *(long *)(param_1 + 0xb0) = lVar1;
    if (lVar1 != 0) {
      __n = (long)param_3 << 3;
      __s = (void *)(**(code **)(**(long **)(param_1 + 8) + 0x38))
                              (*(long **)(param_1 + 8),__n,0x10,
                               "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectDefinition_Impl.cpp"
                               ,0x1cf);
      *(void **)(param_1 + 0xb8) = __s;
      if (__s != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        memset(__s,0,__n);
      }
    }
  }
  return 0;
}


