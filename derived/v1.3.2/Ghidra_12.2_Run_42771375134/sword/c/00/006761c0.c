/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006761c0; name: FUN_006761c0
 */


long FUN_006761c0(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x38))
                    (param_1,0x178,0x10,
                     "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffect_Impl.cpp"
                     ,0x44);
  FUN_006762a0(lVar1,param_1,param_2);
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_005cbff0();
    plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
    plVar2 = (long *)(**(code **)(*plVar2 + 0x88))();
    if (plVar2 != (long *)0x0) {
      plVar3 = (long *)(**(code **)(**(long **)(lVar1 + 8) + 0x38))
                                 (*(long **)(lVar1 + 8),0x20,0x10,
                                  "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffect_Impl.cpp"
                                  ,0x20b);
      *plVar3 = (long)(PTR_DAT_02714d90 + 0x10);
      FUN_005bf710(plVar3 + 1,*(undefined8 *)(lVar1 + 8));
      plVar3[3] = lVar1;
      *(long **)(lVar1 + 0x170) = plVar3;
      (**(code **)(*plVar2 + 0x68))(plVar2,plVar3);
    }
  }
  return lVar1;
}


