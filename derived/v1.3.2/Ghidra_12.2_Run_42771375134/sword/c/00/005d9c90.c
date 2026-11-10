/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005d9c90; name: FUN_005d9c90
 */


void FUN_005d9c90(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  
  *param_1 = (long)(PTR_DAT_027141a8 + 0x10);
  FUN_005d9f30();
  param_1[0x3f] = (long)(PTR_DAT_027141d0 + 0x10);
  plVar4 = param_1 + 0x44;
  if (((*(byte *)(param_1 + 0x48) & 1) == 0) && (*plVar4 != 0)) {
    plVar3 = (long *)param_1[0x40];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x48))
                (plVar3,*plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar4 = 0;
  }
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x48] = 0;
  *plVar4 = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x35] = (long)(PTR_DAT_027141c8 + 0x10);
  plVar4 = param_1 + 0x3a;
  if (((*(byte *)(param_1 + 0x3e) & 1) == 0) && (*plVar4 != 0)) {
    plVar3 = (long *)param_1[0x36];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x48))
                (plVar3,*plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar4 = 0;
  }
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3e] = 0;
  *plVar4 = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x2b] = (long)(PTR_DAT_027141c0 + 0x10);
  plVar4 = param_1 + 0x30;
  if (((*(byte *)(param_1 + 0x34) & 1) == 0) && (*plVar4 != 0)) {
    plVar3 = (long *)param_1[0x2c];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x48))
                (plVar3,*plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar4 = 0;
  }
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  plVar3 = param_1 + 0x26;
  param_1[0x34] = 0;
  *plVar4 = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  puVar2 = PTR_DAT_027141b8;
  puVar1 = PTR_DAT_027141b8 + 0x10;
  param_1[0x21] = (long)puVar1;
  if (((*(byte *)(param_1 + 0x2a) & 1) == 0) && (*plVar3 != 0)) {
    plVar4 = (long *)param_1[0x22];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x48))
                (plVar4,*plVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar3 = 0;
  }
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x2a] = 0;
  *plVar3 = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  plVar4 = param_1 + 0x1c;
  param_1[0x17] = (long)puVar1;
  if (((*(byte *)(param_1 + 0x20) & 1) == 0) && (*plVar4 != 0)) {
    plVar3 = (long *)param_1[0x18];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x48))
                (plVar3,*plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar4 = 0;
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x20] = 0;
  plVar3 = param_1 + 0x12;
  *plVar4 = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0xd] = (long)(puVar2 + 0x10);
  if (((*(byte *)(param_1 + 0x16) & 1) == 0) && (*plVar3 != 0)) {
    plVar4 = (long *)param_1[0xe];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x48))
                (plVar4,*plVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar3 = 0;
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x16] = 0;
  *plVar3 = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[3] = (long)(PTR_DAT_027141b0 + 0x10);
  plVar4 = param_1 + 8;
  if (((*(byte *)(param_1 + 0xc) & 1) == 0) && (*plVar4 != 0)) {
    plVar3 = (long *)param_1[4];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x48))
                (plVar3,*plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar4 = 0;
  }
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xc] = 0;
  *plVar4 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_005bf750(param_1 + 1);
  return;
}


