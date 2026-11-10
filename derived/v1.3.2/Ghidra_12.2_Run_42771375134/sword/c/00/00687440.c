/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00687440; name: FUN_00687440
 */


void FUN_00687440(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  
  *param_1 = (long)(PTR_DAT_02714e60 + 0x10);
  FUN_006875d0();
  puVar1 = PTR_DAT_02714e58 + 0x10;
  plVar3 = param_1 + 0x28;
  param_1[0x23] = (long)puVar1;
  if (((*(byte *)(param_1 + 0x2c) & 1) == 0) && (*plVar3 != 0)) {
    plVar2 = (long *)param_1[0x24];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar3 = 0;
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x2c] = 0;
  *plVar3 = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  plVar3 = param_1 + 0x1e;
  param_1[0x19] = (long)puVar1;
  if (((*(byte *)(param_1 + 0x22) & 1) == 0) && (*plVar3 != 0)) {
    plVar2 = (long *)param_1[0x1a];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar3 = 0;
  }
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x22] = 0;
  *plVar3 = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    if (param_1[0xc] != 0) {
      plVar3 = (long *)param_1[0xb];
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x48))
                  (plVar3,param_1[0xc],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0xc] = 0;
    }
    param_1[0xc] = 0;
  }
  if ((*(byte *)(param_1 + 10) & 1) == 0) {
    if (param_1[6] != 0) {
      plVar3 = (long *)param_1[5];
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x48))
                  (plVar3,param_1[6],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[6] = 0;
    }
    param_1[6] = 0;
  }
  FUN_005bf750(param_1 + 1);
  return;
}


