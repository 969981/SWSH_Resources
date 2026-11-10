/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005efb20; name: FUN_005efb20
 */


long * FUN_005efb20(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  
  plVar4 = (long *)(**(code **)(*param_1 + 0x38))
                             (param_1,0x478,0x10,
                              "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/BinaryArchive/Texture/SiGfx_BinaryChunk_Texture.cpp"
                              ,0x23);
  FUN_0067a450(plVar4,param_1);
  *plVar4 = (long)(PTR_DAT_02714338 + 0x10);
  FUN_005efc30(plVar4 + 0x17,param_1);
  plVar4[0x8b] = 0;
  *(undefined4 *)(plVar4 + 0x8c) = 0;
  plVar4[0x8e] = 0;
  puVar3 = PTR_DAT_02713fb0;
  plVar4[0x8d] = 0;
  lVar1 = *(long *)puVar3;
  lVar2 = *(long *)(puVar3 + 8);
  plVar4[7] = 3;
  plVar4[8] = 0xb00000000;
  plVar4[5] = lVar1;
  plVar4[6] = lVar2;
  return plVar4;
}


