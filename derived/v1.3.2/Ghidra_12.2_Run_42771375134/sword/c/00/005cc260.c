/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005cc260; name: FUN_005cc260
 */


void FUN_005cc260(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  *param_1 = (long)(PTR_DAT_02713f88 + 0x10);
  FUN_005cc500();
  DAT_029e8ff0 = 0;
  param_1[0x4b] = (long)(PTR_DAT_02713fa8 + 0x10);
  plVar2 = param_1 + 0x50;
  if (((*(byte *)(param_1 + 0x54) & 1) == 0) && (lVar3 = *plVar2, lVar3 != 0)) {
    plVar4 = (long *)param_1[0x4c];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x50))(plVar4,lVar3);
      (**(code **)(*plVar4 + 0x48))(plVar4,lVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar2 = 0;
  }
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x54] = 0;
  *plVar2 = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  FUN_00696510(param_1 + 0x45);
  param_1[0x3b] = (long)(PTR_DAT_02713fa0 + 0x10);
  plVar2 = param_1 + 0x40;
  if (((*(byte *)(param_1 + 0x44) & 1) == 0) && (*plVar2 != 0)) {
    plVar4 = (long *)param_1[0x3c];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x48))
                (plVar4,*plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar2 = 0;
  }
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x44] = 0;
  *plVar2 = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  FUN_005ecd30(param_1 + 0x2d);
  param_1[0x23] = (long)(PTR_DAT_02713f98 + 0x10);
  plVar2 = param_1 + 0x28;
  if (((*(byte *)(param_1 + 0x2c) & 1) == 0) && (plVar4 = (long *)*plVar2, plVar4 != (long *)0x0)) {
    plVar5 = (long *)param_1[0x24];
    if (plVar5 != (long *)0x0) {
      lVar3 = (**(code **)(*plVar5 + 0x50))(plVar5,plVar4);
      if (lVar3 != 0) {
        plVar6 = plVar4;
        do {
          if ((*(byte *)(plVar6 + 5) & 1) == 0) {
            if (plVar6[1] != 0) {
              plVar1 = (long *)*plVar6;
              if (plVar1 != (long *)0x0) {
                (**(code **)(*plVar1 + 0x48))
                          (plVar1,plVar6[1],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
              }
              plVar6[1] = 0;
            }
            plVar6[1] = 0;
          }
          plVar6 = plVar6 + 6;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      (**(code **)(*plVar5 + 0x48))
                (plVar5,plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar2 = 0;
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x2c] = 0;
  *plVar2 = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  if ((*(byte *)(param_1 + 0x22) & 1) == 0) {
    if (param_1[0x1e] != 0) {
      plVar2 = (long *)param_1[0x1d];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,param_1[0x1e],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x1e] = 0;
    }
    param_1[0x1e] = 0;
  }
  param_1[0x13] = (long)(PTR_DAT_02713f90 + 0x10);
  plVar2 = param_1 + 0x18;
  if (((*(byte *)(param_1 + 0x1c) & 1) == 0) && (*plVar2 != 0)) {
    plVar4 = (long *)param_1[0x14];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x48))
                (plVar4,*plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar2 = 0;
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x1c] = 0;
  *plVar2 = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN_00696510(param_1 + 0xd);
  FUN_005bf750(param_1 + 1);
  return;
}


