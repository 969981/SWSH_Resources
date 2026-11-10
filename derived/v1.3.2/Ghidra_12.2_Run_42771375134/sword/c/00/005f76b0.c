/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005f76b0; name: FUN_005f76b0
 */


void FUN_005f76b0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  
  *param_1 = (long)(PTR_DAT_02714380 + 0x10);
  FUN_005f7810();
  if (param_1[3] != 0) {
    FUN_005f6e30(param_1[3],param_1);
    param_1[3] = 0;
  }
  puVar2 = PTR_DAT_02714388;
  puVar1 = PTR_DAT_02714388 + 0x10;
  plVar4 = param_1 + 0xe3;
  param_1[0xde] = (long)puVar1;
  if (((*(byte *)(param_1 + 0xe7) & 1) == 0) && (*plVar4 != 0)) {
    plVar3 = (long *)param_1[0xdf];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x48))
                (plVar3,*plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar4 = 0;
  }
  param_1[0xe1] = 0;
  param_1[0xe0] = 0;
  param_1[0xe7] = 0;
  *plVar4 = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  plVar4 = param_1 + 0xd9;
  param_1[0xd4] = (long)puVar1;
  if (((*(byte *)(param_1 + 0xdd) & 1) == 0) && (*plVar4 != 0)) {
    plVar3 = (long *)param_1[0xd5];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x48))
                (plVar3,*plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar4 = 0;
  }
  param_1[0xd7] = 0;
  param_1[0xd6] = 0;
  param_1[0xdd] = 0;
  plVar3 = param_1 + 0xcf;
  *plVar4 = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xca] = (long)(puVar2 + 0x10);
  if (((*(byte *)(param_1 + 0xd3) & 1) == 0) && (*plVar3 != 0)) {
    plVar4 = (long *)param_1[0xcb];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x48))
                (plVar4,*plVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar3 = 0;
  }
  param_1[0xcd] = 0;
  param_1[0xcc] = 0;
  param_1[0xd3] = 0;
  *plVar3 = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xc9] = 0;
  FUN_00696510(param_1 + 4);
  FUN_005bf750(param_1 + 1);
  return;
}


