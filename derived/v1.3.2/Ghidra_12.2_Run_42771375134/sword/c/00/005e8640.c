/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005e8640; name: FUN_005e8640
 */


void FUN_005e8640(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  *param_1 = (long)(PTR_DAT_02714308 + 0x10);
  FUN_005e8800();
  FUN_00696510(param_1 + 0x3c);
  param_1[0x21] = (long)(PTR_DAT_02714328 + 0x10);
  plVar3 = param_1 + 0x26;
  if (((*(byte *)(param_1 + 0x2a) & 1) == 0) && (*plVar3 != 0)) {
    plVar1 = (long *)param_1[0x22];
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x48))
                (plVar1,*plVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar3 = 0;
  }
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x2a] = 0;
  *plVar3 = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x17] = (long)(PTR_DAT_02714320 + 0x10);
  plVar3 = param_1 + 0x1c;
  if (((*(byte *)(param_1 + 0x20) & 1) == 0) && (*plVar3 != 0)) {
    plVar1 = (long *)param_1[0x18];
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x48))
                (plVar1,*plVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar3 = 0;
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x20] = 0;
  plVar1 = param_1 + 0x12;
  *plVar3 = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0xd] = (long)(PTR_DAT_02714318 + 0x10);
  if (((*(byte *)(param_1 + 0x16) & 1) == 0) && (lVar2 = *plVar1, lVar2 != 0)) {
    plVar3 = (long *)param_1[0xe];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x50))(plVar3,lVar2);
      (**(code **)(*plVar3 + 0x48))(plVar3,lVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar1 = 0;
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x16] = 0;
  plVar3 = param_1 + 8;
  *plVar1 = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[3] = (long)(PTR_DAT_02714310 + 0x10);
  if (((*(byte *)(param_1 + 0xc) & 1) == 0) && (*plVar3 != 0)) {
    plVar1 = (long *)param_1[4];
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x48))
                (plVar1,*plVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar3 = 0;
  }
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xc] = 0;
  *plVar3 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_005bf750(param_1 + 1);
  return;
}


