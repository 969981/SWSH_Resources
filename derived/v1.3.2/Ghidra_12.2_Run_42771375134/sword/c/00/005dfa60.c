/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005dfa60; name: FUN_005dfa60
 */


long * FUN_005dfa60(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  plVar6 = (long *)(**(code **)(*param_1 + 0x38))
                             (param_1,400,0x10,
                              "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderGraph/SiGfx_ShaderGraph_NodeType_Operator.cpp"
                              ,0x22);
  FUN_005dbda0(plVar6,param_1);
  puVar5 = PTR_DAT_02714258;
  puVar1 = PTR_DAT_02714258 + 0x10;
  puVar2 = PTR_DAT_02714258 + 0xb0;
  puVar3 = PTR_DAT_02714258 + 0xe8;
  puVar4 = PTR_DAT_02714258 + 0x118;
  plVar6[0x30] = 0;
  plVar6[0x31] = 0;
  plVar6[0x2e] = 0;
  plVar6[0x2f] = 0;
  plVar6[0x2c] = (long)param_1;
  plVar6[0x2d] = 0;
  *plVar6 = (long)puVar1;
  plVar6[1] = (long)puVar2;
  plVar6[2] = (long)puVar3;
  plVar6[3] = (long)puVar4;
  if (param_1 == (long *)0x0) {
    lVar8 = FUN_005bc740();
    if (lVar8 == 0) {
      lVar8 = FUN_005bc6f0();
    }
    else {
      lVar8 = FUN_005bc740();
    }
    plVar6[0x2c] = lVar8;
    plVar6[4] = (long)plVar6;
    plVar6[5] = *(long *)PTR_DAT_02714260;
    uVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
  }
  else {
    lVar8 = *(long *)PTR_DAT_02714260;
    plVar6[4] = (long)plVar6;
    plVar6[5] = lVar8;
    if (plVar6 == (long *)0x0) {
      return (long *)0x0;
    }
    uVar7 = (**(code **)(puVar5 + 0x48))(plVar6);
  }
  if ((uVar7 & 1) == 0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
    plVar6 = (long *)0x0;
  }
  return plVar6;
}


