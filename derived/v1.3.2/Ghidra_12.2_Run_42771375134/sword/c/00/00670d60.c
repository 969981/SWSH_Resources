/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00670d60; name: FUN_00670d60
 */


undefined8 FUN_00670d60(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x38))
                    (param_1,0x178,0x10,
                     "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectVariationList_Impl.cpp"
                     ,0x24);
  FUN_00670dc0(uVar1,param_1);
  return uVar1;
}


