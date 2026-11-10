/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0068ba30; name: FUN_0068ba30
 */


void FUN_0068ba30(long *param_1)

{
  byte bVar1;
  long *plVar2;
  
  *param_1 = (long)(PTR_DAT_02714e88 + 0x10);
  if (param_1[0x11] != 0) {
    plVar2 = (long *)param_1[1];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,param_1[0x11],
                 "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/NX/SiIO_NX_MemoryMappedFile_Impl.cpp"
                 ,0xb3);
    }
    param_1[0x11] = 0;
    param_1[4] = 0;
  }
  if ((FILE *)param_1[3] != (FILE *)0x0) {
    fclose((FILE *)param_1[3]);
    param_1[3] = 0;
  }
  param_1[4] = 0;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    if (param_1[0xc] != 0) {
      plVar2 = (long *)param_1[0xb];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,param_1[0xc],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0xc] = 0;
    }
    param_1[0xc] = 0;
    bVar1 = *(byte *)(param_1 + 10);
  }
  else {
    bVar1 = *(byte *)(param_1 + 10);
  }
  if ((bVar1 & 1) != 0) {
    FUN_005bf750(param_1 + 1);
    return;
  }
  if (param_1[6] != 0) {
    plVar2 = (long *)param_1[5];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,param_1[6],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
    }
    param_1[6] = 0;
  }
  param_1[6] = 0;
  FUN_005bf750(param_1 + 1);
  return;
}


