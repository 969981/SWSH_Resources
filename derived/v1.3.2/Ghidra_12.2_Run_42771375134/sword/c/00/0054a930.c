/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0054a930; name: FUN_0054a930
 */


long * FUN_0054a930(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x30,
                                "C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceQuery.cpp",0x4b9,0);
  FUN_00545e70();
  plVar1[4] = -1;
  plVar1[2] = param_1;
  *(undefined4 *)(plVar1 + 5) = 0xffffffff;
  *plVar1 = (long)(PTR_DAT_02713bd8 + 0x10);
  *(undefined4 *)(plVar1 + 3) = 1;
  FUN_0054a1e0(plVar1);
  (**(code **)(*plVar1 + 0x28))(plVar1);
  return plVar1;
}


