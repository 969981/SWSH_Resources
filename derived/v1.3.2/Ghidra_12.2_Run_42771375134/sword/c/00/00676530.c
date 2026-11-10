/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00676530; name: FUN_00676530
 */


void FUN_00676530(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = (long)(PTR_DAT_02714d98 + 0x10);
  FUN_00676660();
  param_1[0x23] = (long)(PTR_DAT_02714da8 + 0x10);
  plVar2 = param_1 + 0x28;
  if (((*(byte *)(param_1 + 0x2c) & 1) == 0) && (*plVar2 != 0)) {
    plVar1 = (long *)param_1[0x24];
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x48))
                (plVar1,*plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar2 = 0;
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x2c] = 0;
  *plVar2 = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x18] = (long)(PTR_DAT_02714da0 + 0x10);
  plVar2 = param_1 + 0x1d;
  if (((*(byte *)(param_1 + 0x21) & 1) == 0) && (*plVar2 != 0)) {
    plVar1 = (long *)param_1[0x19];
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x48))
                (plVar1,*plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar2 = 0;
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x21] = 0;
  *plVar2 = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FUN_00696510(param_1 + 0xc);
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
  FUN_005bf750(param_1 + 1);
  return;
}


