/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005f8710; name: FUN_005f8710
 */


undefined8 FUN_005f8710(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 8);
  lVar1 = (**(code **)(*plVar4 + 0x38))
                    (plVar4,0x20b0,0x10,
                     "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Device_Impl.cpp"
                     ,0x3f7);
  FUN_0064da80(lVar1,plVar4,param_1);
  *(long *)(param_1 + 600) = lVar1;
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_0064dee0(lVar1);
  if ((uVar2 & 1) == 0) {
    if (*(long **)(param_1 + 600) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 600) + 0x18))();
      *(undefined8 *)(param_1 + 600) = 0;
      return 0;
    }
  }
  else {
    lVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x38))
                      (*(long **)(param_1 + 8),0x20b0,0x10,
                       "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Device_Impl.cpp"
                       ,0x406);
    FUN_0064da80(lVar1,*(undefined8 *)(param_1 + 8),param_1);
    *(long *)(param_1 + 0x260) = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
    uVar2 = FUN_0064dee0(lVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x38))
                        (*(long **)(param_1 + 8),0x1f0,0x10,
                         "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Device_Impl.cpp"
                         ,0x413);
      FUN_006399d0(uVar3,*(undefined8 *)(param_1 + 8),param_1,0);
      *(undefined8 *)(param_1 + 0x268) = uVar3;
      FUN_0063a0b0(uVar3,1);
      return 1;
    }
    if (*(long **)(param_1 + 0x260) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x260) + 0x18))();
      *(undefined8 *)(param_1 + 0x260) = 0;
      return 0;
    }
  }
  return 0;
}


