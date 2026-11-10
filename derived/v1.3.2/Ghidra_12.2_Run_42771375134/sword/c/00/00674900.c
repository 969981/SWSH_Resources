/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00674900; name: FUN_00674900
 */


void FUN_00674900(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  *param_1 = (long)(PTR_DAT_02714d80 + 0x10);
  FUN_00674ad0();
  if ((*(byte *)(param_1 + 0x29) & 1) == 0) {
    if (param_1[0x25] != 0) {
      plVar2 = (long *)param_1[0x24];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,param_1[0x25],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x25] = 0;
    }
    param_1[0x25] = 0;
  }
  puVar1 = PTR_DAT_02714d88;
  param_1[0x1a] = (long)(PTR_DAT_02714d88 + 0x10);
  plVar2 = param_1 + 0x1f;
  if (((*(byte *)(param_1 + 0x23) & 1) == 0) && (lVar3 = *plVar2, lVar3 != 0)) {
    plVar4 = (long *)param_1[0x1b];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x50))(plVar4,lVar3);
      (**(code **)(*plVar4 + 0x48))(plVar4,lVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar2 = 0;
  }
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x23] = 0;
  *plVar2 = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    if (param_1[0x14] != 0) {
      plVar2 = (long *)param_1[0x13];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,param_1[0x14],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x14] = 0;
    }
    param_1[0x14] = 0;
  }
  plVar2 = param_1 + 0xe;
  param_1[9] = (long)(puVar1 + 0x10);
  if (((*(byte *)(param_1 + 0x12) & 1) == 0) && (lVar3 = *plVar2, lVar3 != 0)) {
    plVar4 = (long *)param_1[10];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x50))(plVar4,lVar3);
      (**(code **)(*plVar4 + 0x48))(plVar4,lVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar2 = 0;
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x12] = 0;
  *plVar2 = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (param_1[4] != 0) {
      plVar2 = (long *)param_1[3];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,param_1[4],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[4] = 0;
    }
    param_1[4] = 0;
  }
  FUN_005bf750(param_1 + 1);
  return;
}


