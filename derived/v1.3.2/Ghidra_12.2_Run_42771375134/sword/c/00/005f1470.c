/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005f1470; name: FUN_005f1470
 */


void FUN_005f1470(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_02714348 + 0xf8;
  *param_1 = (long)(PTR_DAT_02714348 + 0x10);
  param_1[1] = (long)puVar1;
  FUN_005f33e0();
  param_1[0x26] = (long)(PTR_DAT_02714360 + 0x10);
  plVar2 = param_1 + 0x2b;
  if (((*(byte *)(param_1 + 0x2f) & 1) == 0) && (lVar3 = *plVar2, lVar3 != 0)) {
    plVar4 = (long *)param_1[0x27];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x50))(plVar4,lVar3);
      (**(code **)(*plVar4 + 0x48))(plVar4,lVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar2 = 0;
  }
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2f] = 0;
  *plVar2 = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x1c] = (long)(PTR_DAT_02714358 + 0x10);
  plVar2 = param_1 + 0x21;
  if (((*(byte *)(param_1 + 0x25) & 1) == 0) && (lVar3 = *plVar2, lVar3 != 0)) {
    plVar4 = (long *)param_1[0x1d];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x50))(plVar4,lVar3);
      (**(code **)(*plVar4 + 0x48))(plVar4,lVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar2 = 0;
  }
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x25] = 0;
  *plVar2 = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x12] = (long)(PTR_DAT_02714350 + 0x10);
  plVar2 = param_1 + 0x17;
  if (((*(byte *)(param_1 + 0x1b) & 1) == 0) && (lVar3 = *plVar2, lVar3 != 0)) {
    plVar4 = (long *)param_1[0x13];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x50))(plVar4,lVar3);
      (**(code **)(*plVar4 + 0x48))(plVar4,lVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar2 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x1b] = 0;
  *plVar2 = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  if ((*(byte *)(param_1 + 9) & 1) == 0) {
    if (param_1[5] != 0) {
      plVar2 = (long *)param_1[4];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,param_1[5],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[5] = 0;
    }
    param_1[5] = 0;
  }
  FUN_005bf750(param_1 + 2);
  return;
}


