/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006887f0; name: FUN_006887f0
 */


ulong FUN_006887f0(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  size_t sVar4;
  
  uVar2 = (**(code **)(*param_1 + 0x60))();
  if ((((uVar2 & 1) != 0) && (sVar4 = param_1[0x2021], 0 < (long)sVar4)) &&
     (sVar4 = fwrite((void *)param_1[0x2022],sVar4,1,(FILE *)param_1[3]), (int)sVar4 == 1)) {
    param_1[0x2023] = 0;
    param_1[0x2021] = 0;
  }
  plVar3 = (long *)param_1[1];
  if (plVar3 != (long *)0x0) {
    if (param_1[0x2024] != 0) {
      (**(code **)(*plVar3 + 0x48))
                (plVar3,param_1[0x2024],
                 "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/NX/SiIO_NX_FileStream_Impl.cpp"
                 ,0x942);
      param_1[0x2024] = 0;
    }
    param_1[0x2024] = 0;
  }
  if (param_1[0x2022] != 0) {
    param_1[0x2022] = 0;
  }
  param_1[0x2023] = 0;
  param_1[0x2021] = 0;
  param_1[0x2020] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  if ((char)param_1[0x17] != '\0') {
    *(undefined1 *)(param_1 + 0x17) = 0;
    param_1[3] = 0;
  }
  uVar2 = 0;
  if ((long *)param_1[0x13] != (long *)0x0) {
    uVar2 = (**(code **)(*(long *)param_1[0x13] + 0x18))();
    param_1[0x13] = 0;
  }
  if (param_1[0x12] == 0) {
    if ((FILE *)param_1[3] == (FILE *)0x0) {
      return 0;
    }
    uVar1 = fclose((FILE *)param_1[3]);
    uVar2 = (ulong)uVar1;
  }
  else {
    param_1[0x12] = 0;
  }
  param_1[3] = 0;
  return uVar2;
}


