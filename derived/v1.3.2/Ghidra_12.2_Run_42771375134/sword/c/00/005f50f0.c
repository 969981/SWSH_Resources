/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005f50f0; name: FUN_005f50f0
 */


long * FUN_005f50f0(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x38))
                             (param_1,0x18,0x10,
                              "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/Image/DDS/SiGfx_ImageLoader_DDS.cpp"
                              ,0x25);
  *plVar1 = (long)(PTR_DAT_02714368 + 0x10);
  FUN_005bf710(plVar1 + 1,param_1);
  return plVar1;
}


