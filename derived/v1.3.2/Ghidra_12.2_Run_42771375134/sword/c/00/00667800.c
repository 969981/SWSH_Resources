/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00667800; name: FUN_00667800
 */


long * FUN_00667800(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x38))
                             (param_1,0xfb0,0x10,
                              "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp"
                              ,0x10b);
  FUN_00667880(plVar1,param_1);
  if (plVar1 != (long *)0x0) {
    FUN_00670db0(plVar1 + 0x1c7);
    plVar1[0x1d0] = (long)plVar1;
    uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1);
    FUN_005c80d0(plVar1 + 0x1d1,uVar2);
  }
  return plVar1;
}


