/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005bfb30; name: FUN_005bfb30
 */


void FUN_005bfb30(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = (long)(PTR_DAT_02713e48 + 0x10);
  DAT_02764f28 = 0;
  if ((*(byte *)(param_1 + 0x208) & 1) == 0) {
    if (param_1[0x204] != 0) {
      plVar1 = (long *)param_1[0x203];
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x48))
                  (plVar1,param_1[0x204],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x204] = 0;
    }
    param_1[0x204] = 0;
  }
  if ((*(byte *)(param_1 + 0x202) & 1) == 0) {
    if (param_1[0x1fe] != 0) {
      plVar1 = (long *)param_1[0x1fd];
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x48))
                  (plVar1,param_1[0x1fe],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x1fe] = 0;
    }
    param_1[0x1fe] = 0;
  }
  param_1[499] = (long)(PTR_DAT_02713e70 + 0x10);
  plVar1 = param_1 + 0x1f8;
  if (((*(byte *)(param_1 + 0x1fc) & 1) == 0) && (*plVar1 != 0)) {
    plVar2 = (long *)param_1[500];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar1 = 0;
  }
  param_1[0x1f6] = 0;
  param_1[0x1f5] = 0;
  param_1[0x1fc] = 0;
  *plVar1 = 0;
  param_1[0x1f9] = 0;
  param_1[0x1fa] = 0;
  param_1[0x1ee] = (long)(PTR_DAT_02713e68 + 0x10);
  if ((param_1[0x1ef] != 0) && (param_1[0x1f1] != 0)) {
    FUN_005c2650(param_1[0x1ef],param_1[0x1f1],"../../../../Include\\SiCore/SiCore_Map.h",0x3b7);
    param_1[0x1f1] = 0;
  }
  param_1[0x1f1] = 0;
  param_1[0x1f0] = 0;
  param_1[0x1e4] = (long)(PTR_DAT_02713e60 + 0x10);
  plVar1 = param_1 + 0x1e9;
  if (((*(byte *)(param_1 + 0x1ed) & 1) == 0) && (*plVar1 != 0)) {
    plVar2 = (long *)param_1[0x1e5];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar1 = 0;
  }
  param_1[0x1e7] = 0;
  param_1[0x1e6] = 0;
  param_1[0x1ed] = 0;
  *plVar1 = 0;
  param_1[0x1ea] = 0;
  param_1[0x1eb] = 0;
  param_1[0x1da] = (long)(PTR_DAT_02713e58 + 0x10);
  plVar1 = param_1 + 0x1df;
  if (((*(byte *)(param_1 + 0x1e3) & 1) == 0) && (*plVar1 != 0)) {
    plVar2 = (long *)param_1[0x1db];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar1 = 0;
  }
  param_1[0x1dd] = 0;
  param_1[0x1dc] = 0;
  param_1[0x1e3] = 0;
  *plVar1 = 0;
  param_1[0x1e0] = 0;
  param_1[0x1e1] = 0;
  param_1[0xcf] = (long)(PTR_DAT_02713e50 + 0x10);
  plVar1 = param_1 + 0xd4;
  if (((*(byte *)(param_1 + 0xd8) & 1) == 0) && (*plVar1 != 0)) {
    plVar2 = (long *)param_1[0xd0];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar1 = 0;
  }
  param_1[0xd2] = 0;
  param_1[0xd1] = 0;
  param_1[0xd8] = 0;
  *plVar1 = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  FUN_005c8a90(param_1 + 0x92);
  if ((*(byte *)(param_1 + 0x8f) & 1) == 0) {
    if (param_1[0x8b] != 0) {
      plVar1 = (long *)param_1[0x8a];
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x48))
                  (plVar1,param_1[0x8b],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x8b] = 0;
    }
    param_1[0x8b] = 0;
  }
  FUN_005c8790(param_1 + 4);
  FUN_005bf750(param_1 + 1);
  return;
}


