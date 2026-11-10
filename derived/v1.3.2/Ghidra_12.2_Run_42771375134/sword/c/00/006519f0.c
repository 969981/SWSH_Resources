/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006519f0; name: FUN_006519f0
 */


void FUN_006519f0(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  
  if ((char)param_1[0xe] != '\0') {
    plVar1 = (long *)FUN_005cbff0();
    plVar1 = (long *)(**(code **)(*plVar1 + 0x30))();
    uVar2 = FUN_006965d0(param_1 + 4);
    while ((uVar2 & 1) == 0) {
      nn::os::YieldThread();
      uVar2 = FUN_006965d0(param_1 + 4);
    }
    if (*param_1 != 0) {
      (**(code **)(*plVar1 + 0x48))
                (plVar1,*param_1,
                 "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_DescriptorHeap.cpp"
                 ,0xc2);
      *param_1 = 0;
    }
    if (param_1[1] != 0) {
      FUN_006530c0(param_1[1],param_1[0xc]);
      if ((long *)param_1[1] != (long *)0x0) {
        (**(code **)(*(long *)param_1[1] + 0x18))();
        param_1[1] = 0;
      }
      param_1[0xc] = 0;
      param_1[0xd] = 0;
    }
    (**(code **)PTR_DAT_02714ab8)(param_1[10]);
    if (param_1[10] != 0) {
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x48))
                  (plVar1,param_1[10],
                   "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_DescriptorHeap.cpp"
                   ,0xd0);
      }
      param_1[10] = 0;
    }
    param_1[0xb] = 0;
    *(undefined4 *)((long)param_1 + 0x74) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return;
}


