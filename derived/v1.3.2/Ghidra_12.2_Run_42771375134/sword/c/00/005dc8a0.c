/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005dc8a0; name: FUN_005dc8a0
 */


void FUN_005dc8a0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  
  puVar1 = PTR_DAT_027141e8 + 0x10;
  puVar2 = PTR_DAT_027141e8 + 0xa0;
  puVar3 = PTR_DAT_027141e8 + 0x108;
  param_1[2] = (long)(PTR_DAT_027141e8 + 0xd8);
  param_1[3] = (long)puVar3;
  plVar4 = param_1 + 0xb;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar2;
  if (((*(byte *)(param_1 + 0xf) & 1) == 0) && (*plVar4 != 0)) {
    plVar5 = (long *)param_1[10];
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x48))
                (plVar5,*plVar4,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
    }
    *plVar4 = 0;
  }
  *plVar4 = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (((*(byte *)(param_1 + 0x16) & 1) == 0) && (param_1[0x12] != 0)) {
    plVar5 = (long *)param_1[0x11];
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x48))
                (plVar5,param_1[0x12],"../../../../Include\\SiCore/SiCore_String.inl",0x158);
    }
    param_1[0x12] = 0;
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  if ((*(byte *)(param_1 + 0xf) & 1) == 0) {
    if (*plVar4 != 0) {
      plVar5 = (long *)param_1[10];
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x48))
                  (plVar5,*plVar4,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      *plVar4 = 0;
    }
    *plVar4 = 0;
  }
  FUN_005bf750(param_1 + 6);
  return;
}


