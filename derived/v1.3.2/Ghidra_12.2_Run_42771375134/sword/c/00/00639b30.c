/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00639b30; name: FUN_00639b30
 */


void FUN_00639b30(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  *param_1 = (long)(PTR_DAT_027146d0 + 0x10);
  FUN_00639cf0();
  param_1[0x34] = (long)(PTR_DAT_027146e0 + 0x10);
  plVar1 = param_1 + 0x39;
  if (((*(byte *)(param_1 + 0x3d) & 1) == 0) && (lVar2 = *plVar1, lVar2 != 0)) {
    plVar3 = (long *)param_1[0x35];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x50))(plVar3,lVar2);
      (**(code **)(*plVar3 + 0x48))(plVar3,lVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar1 = 0;
  }
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x3d] = 0;
  *plVar1 = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x2a] = (long)(PTR_DAT_027146d8 + 0x10);
  plVar1 = param_1 + 0x2f;
  if (((*(byte *)(param_1 + 0x33) & 1) == 0) && (lVar2 = *plVar1, lVar2 != 0)) {
    plVar3 = (long *)param_1[0x2b];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x50))(plVar3,lVar2);
      (**(code **)(*plVar3 + 0x48))(plVar3,lVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar1 = 0;
  }
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x33] = 0;
  plVar3 = param_1 + 0x18;
  *plVar1 = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x13] = (long)(PTR_DAT_02714388 + 0x10);
  if (((*(byte *)(param_1 + 0x1c) & 1) == 0) && (*plVar3 != 0)) {
    plVar1 = (long *)param_1[0x14];
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x48))
                (plVar1,*plVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar3 = 0;
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x1c] = 0;
  *plVar3 = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN_00696620(param_1 + 0xb);
  if ((*(byte *)(param_1 + 9) & 1) == 0) {
    if (param_1[5] != 0) {
      plVar1 = (long *)param_1[4];
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x48))
                  (plVar1,param_1[5],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[5] = 0;
    }
    param_1[5] = 0;
  }
  FUN_005bf750(param_1 + 1);
  return;
}


