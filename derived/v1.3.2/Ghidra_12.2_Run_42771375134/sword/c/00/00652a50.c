/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00652a50; name: FUN_00652a50
 */


void FUN_00652a50(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = PTR_DAT_02714ae0 + 0xc0;
  *param_1 = (long)(PTR_DAT_02714ae0 + 0x10);
  param_1[1] = (long)puVar1;
  FUN_005bd600(param_1 + 0x31);
  if ((char)param_1[0xf] != '\0') {
    (**(code **)PTR_DAT_02714ae8)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  if (param_1[0x89] != 0) {
    (**(code **)(*(long *)param_1[0x30] + 0x48))
              ((long *)param_1[0x30],param_1[0x89],
               "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_MemoryHeap_Impl.cpp"
               ,0x13b);
    param_1[0x89] = 0;
  }
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x30] = 0;
  FUN_005bccf0(param_1 + 0x31);
  if ((*(byte *)(param_1 + 10) & 1) == 0) {
    if (param_1[6] != 0) {
      plVar2 = (long *)param_1[5];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,param_1[6],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[6] = 0;
    }
    param_1[6] = 0;
  }
  FUN_005bf750(param_1 + 2);
  return;
}


