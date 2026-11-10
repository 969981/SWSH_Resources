/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005df270; name: FUN_005df270
 */


long * FUN_005df270(long *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  plVar2 = (long *)(**(code **)(*param_1 + 0x38))
                             (param_1,0x110,0x10,
                              "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderGraph/SiGfx_ShaderGraph_DataType_Vector.cpp"
                              ,0x26);
  FUN_005dd560(plVar2,param_1);
  puVar1 = PTR_DAT_02714250;
  *(undefined4 *)(plVar2 + 0x21) = param_2;
  *(undefined4 *)((long)plVar2 + 0x10c) = param_3;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = (long)(puVar1 + 0xb0);
  plVar2[2] = (long)(puVar1 + 0xe8);
  plVar2[3] = (long)(puVar1 + 0x118);
  lVar4 = *(long *)PTR_DAT_02714090;
  plVar2[4] = (long)plVar2;
  plVar2[5] = lVar4;
  if ((plVar2 != (long *)0x0) && (uVar3 = FUN_005df5e0(plVar2), (uVar3 & 1) == 0)) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
    plVar2 = (long *)0x0;
  }
  return plVar2;
}


