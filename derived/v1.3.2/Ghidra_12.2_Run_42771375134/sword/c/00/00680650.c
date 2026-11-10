/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00680650; name: FUN_00680650
 */


void FUN_00680650(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)(PTR_DAT_02714e38 + 0x10);
  if (param_1[6] != 0) {
    if (*(char *)((long)param_1 + 0x3c) == '\0') {
      plVar1 = (long *)param_1[1];
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x48))
                  (plVar1,param_1[6],
                   "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_MemoryStream_Impl.cpp",
                   0xdd);
      }
      param_1[6] = 0;
    }
    param_1[6] = 0;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  FUN_005bf750(param_1 + 1);
  return;
}


