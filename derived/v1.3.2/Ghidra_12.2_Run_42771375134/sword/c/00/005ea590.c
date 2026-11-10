/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ea590; name: FUN_005ea590
 */


void FUN_005ea590(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = param_1 + 1;
  if (((*(byte *)(param_1 + 5) & 1) == 0) && (*plVar1 != 0)) {
    plVar3 = (long *)*param_1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x48))
                (plVar3,*plVar1,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
    }
    *plVar1 = 0;
  }
  *plVar1 = 0;
  param_1[2] = 0;
  plVar3 = param_1 + 0xb;
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*(byte *)(param_1 + 0xf) & 1) == 0) && (*plVar3 != 0)) {
    plVar4 = (long *)param_1[7];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x48))
                (plVar4,*plVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar3 = 0;
  }
  puVar2 = PTR_DAT_02714328;
  param_1[0xf] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = (long)(puVar2 + 0x10);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *plVar3 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    if (*plVar1 != 0) {
      param_1 = (long *)*param_1;
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x48))
                  (param_1,*plVar1,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      *plVar1 = 0;
    }
    *plVar1 = 0;
  }
  return;
}


