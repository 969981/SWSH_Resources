/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00666c60; name: FUN_00666c60
 */


void FUN_00666c60(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  param_1[2] = 0;
  *param_1 = (long)param_2;
  param_1[1] = (long)param_2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (param_2 == (long *)0x0) {
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      lVar2 = FUN_005bc6f0();
    }
    else {
      lVar2 = FUN_005bc740();
    }
    param_1[1] = lVar2;
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[9] = -0x100000000;
  param_1[7] = 0;
  param_1[8] = -0x100000000;
  puVar1 = PTR_DAT_02714cf0 + 0x10;
  param_1[0x11] = 0;
  param_1[0xd] = (long)param_2;
  param_1[0xe] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (long)puVar1;
  param_1[0xf] = 0;
  param_1[0x10] = 8;
  if (param_2 == (long *)0x0) {
    lVar2 = FUN_005bc6f0();
    param_1[0xd] = lVar2;
  }
  param_1[0x16] = 0;
  plVar3 = (long *)(**(code **)(*param_2 + 0x38))
                             (param_2,0x70,0x10,
                              "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp"
                              ,0xae);
  *plVar3 = (long)(PTR_DAT_02714cf8 + 0x10);
  FUN_005bf710(plVar3 + 1,param_2);
  FUN_006964c0(plVar3 + 3,0);
  puVar1 = PTR_DAT_02714d00 + 0x10;
  plVar3[0xb] = 0;
  plVar3[0xc] = 0;
  plVar3[9] = (long)puVar1;
  plVar3[10] = (long)param_2;
  if (param_2 == (long *)0x0) {
    lVar2 = FUN_005bc6f0();
    plVar3[10] = lVar2;
  }
  param_1[0x16] = (long)plVar3;
  return;
}


