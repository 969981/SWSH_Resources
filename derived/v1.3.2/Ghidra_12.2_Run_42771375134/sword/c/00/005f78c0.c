/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005f78c0; name: FUN_005f78c0
 */


void FUN_005f78c0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = (long)(PTR_DAT_02714388 + 0x10);
  plVar1 = param_1 + 5;
  if (((*(byte *)(param_1 + 9) & 1) == 0) && (*plVar1 != 0)) {
    plVar2 = (long *)param_1[1];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar1 = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[9] = 0;
  *plVar1 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}


