/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005e1020; name: FUN_005e1020
 */


long * FUN_005e1020(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  plVar3 = (long *)(**(code **)(*param_1 + 0x38))
                             (param_1,0x170,0x10,
                              "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderGraph/SiGfx_ShaderGraph_IOSlot.cpp"
                              ,0x24);
  FUN_005dc7e0(plVar3,param_1);
  puVar2 = PTR_DAT_02714288;
  puVar1 = PTR_DAT_02714280;
  plVar3[0x17] = param_2;
  plVar3[0x18] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x1c] = 0;
  plVar3[0x21] = 0;
  plVar3[0x22] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[1] = (long)(puVar2 + 0xa0);
  plVar3[0x1f] = 0;
  plVar3[0x20] = 0;
  plVar3[2] = (long)(puVar2 + 0xd8);
  plVar3[3] = (long)(puVar2 + 0x108);
  plVar3[0x19] = (long)(puVar1 + 0x10);
  plVar3[0x1a] = 0;
  plVar3[0x1d] = 8;
  plVar3[0x1e] = 0;
  lVar4 = FUN_005bc6f0();
  puVar1 = PTR_DAT_02714290;
  plVar3[0x1a] = lVar4;
  plVar3[0x25] = 0;
  plVar3[0x26] = 0;
  plVar3[0x2b] = 0;
  plVar3[0x2c] = 0;
  plVar3[0x29] = 0;
  plVar3[0x2a] = 0;
  plVar3[0x27] = 8;
  plVar3[0x28] = 0;
  plVar3[0x23] = (long)(puVar1 + 0x10);
  plVar3[0x24] = (long)param_1;
  if (param_1 == (long *)0x0) {
    lVar4 = FUN_005bc6f0();
    plVar3[0x24] = lVar4;
  }
  plVar3[0x2d] = 0;
  lVar4 = *(long *)PTR_DAT_02714298;
  plVar3[4] = (long)plVar3;
  plVar3[5] = lVar4;
  if ((plVar3 != (long *)0x0) && (uVar5 = (**(code **)(*plVar3 + 0x38))(plVar3), (uVar5 & 1) == 0))
  {
    (**(code **)(*plVar3 + 0x18))(plVar3);
    plVar3 = (long *)0x0;
  }
  return plVar3;
}


