/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0067e130; name: FUN_0067e130
 */


undefined8 FUN_0067e130(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x38))
                    (param_1,0x160,0x10,
                     "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_CSVDocument_Impl.cpp",
                     0x22);
  FUN_0067e180(uVar1,param_1);
  return uVar1;
}


