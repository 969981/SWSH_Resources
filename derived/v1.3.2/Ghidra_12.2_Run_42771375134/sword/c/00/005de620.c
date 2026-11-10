/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005de620; name: FUN_005de620
 */


long * FUN_005de620(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  plVar2 = (long *)(**(code **)(*param_1 + 0x38))
                             (param_1,0x120,0x10,
                              "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderGraph/SiGfx_ShaderGraph_DataValue_Vector.cpp"
                              ,0x24);
  FUN_005ddda0(plVar2,param_1,param_2);
  puVar1 = PTR_DAT_02714228;
  plVar2[0x23] = param_2;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = (long)(puVar1 + 0xa0);
  plVar2[2] = (long)(puVar1 + 0xd8);
  plVar2[3] = (long)(puVar1 + 0x108);
  lVar4 = *(long *)PTR_DAT_02714230;
  plVar2[4] = (long)plVar2;
  plVar2[5] = lVar4;
  if ((plVar2 != (long *)0x0) && (uVar3 = FUN_005de0e0(plVar2), (uVar3 & 1) == 0)) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
    plVar2 = (long *)0x0;
  }
  return plVar2;
}


