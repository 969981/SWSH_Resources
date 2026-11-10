/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00670b50; name: FUN_00670b50
 */


undefined8 FUN_00670b50(long param_1,long *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_00682fc0(param_2,0x10);
  (**(code **)(*param_2 + 0x118))(param_2,param_1 + 0x18,1);
  FUN_00682fc0(param_2,0x10);
  uVar1 = (**(code **)(*param_2 + 0xf8))(param_2,1);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  iVar2 = (**(code **)(*param_2 + 0xd8))(param_2,1);
  *(int *)(param_1 + 0x50) = iVar2;
  if (0 < iVar2) {
    uVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x38))
                      (*(long **)(param_1 + 8),(long)iVar2,0,
                       "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectTechnique_Impl.cpp"
                       ,0xa1);
    *(undefined8 *)(param_1 + 0x58) = uVar3;
    (**(code **)(*param_2 + 0xa8))(param_2,uVar3,(long)*(int *)(param_1 + 0x50),1);
  }
  return 1;
}


