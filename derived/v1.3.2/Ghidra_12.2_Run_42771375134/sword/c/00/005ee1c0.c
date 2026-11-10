/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ee1c0; name: FUN_005ee1c0
 */


undefined8 FUN_005ee1c0(undefined8 param_1,void *param_2,undefined8 param_3,int param_4,int param_5)

{
  uint uVar1;
  long *plVar2;
  void *__dest;
  size_t __n;
  void *__src;
  long lVar3;
  long lVar4;
  
  uVar1 = (int)param_1 - 0x46;
  if ((uVar1 < 0x23) && ((1L << ((ulong)uVar1 & 0x3f) & 0x7ff007fffU) != 0)) {
    if ((uVar1 < 0xf) || ((int)param_1 - 0x5eU < 6)) {
      FUN_005ee340(param_1,param_2,param_3,param_4);
    }
  }
  else {
    plVar2 = (long *)FUN_005cbff0();
    plVar2 = (long *)(**(code **)(*plVar2 + 0x30))();
    __n = (size_t)param_5;
    if (plVar2 == (long *)0x0) {
      __dest = (void *)0x0;
    }
    else {
      __dest = (void *)(**(code **)(*plVar2 + 0x40))
                                 (plVar2,1,__n,0xffffffff,
                                  "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_Utility.cpp"
                                  ,0x1c0b);
    }
    if (0 < param_4) {
      lVar4 = (long)param_4;
      __src = (void *)((long)param_2 + (lVar4 + -1) * __n);
      lVar3 = 0;
      do {
        param_4 = param_4 + -1;
        if (param_4 <= lVar3) break;
        memcpy(__dest,param_2,__n);
        memcpy(param_2,__src,__n);
        memcpy(__src,__dest,__n);
        lVar3 = lVar3 + 1;
        __src = (void *)((long)__src - __n);
        param_2 = (void *)((long)param_2 + __n);
      } while (lVar3 < lVar4);
    }
    if (__dest != (void *)0x0) {
      plVar2 = (long *)FUN_005cbff0();
      plVar2 = (long *)(**(code **)(*plVar2 + 0x30))();
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,__dest,
                   "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/SiGfx_Utility.cpp",0x1c23);
      }
    }
  }
  return 1;
}


