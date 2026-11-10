/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00656f70; name: FUN_00656f70
 */


void FUN_00656f70(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  *param_1 = (long)(PTR_DAT_02714b60 + 0x10);
  plVar1 = param_1 + 5;
  if (((*(byte *)(param_1 + 9) & 1) == 0) && (lVar3 = *plVar1, lVar3 != 0)) {
    plVar4 = (long *)param_1[1];
    if (plVar4 != (long *)0x0) {
      lVar2 = (**(code **)(*plVar4 + 0x50))(plVar4,lVar3);
      if (lVar2 != 0) {
        plVar5 = (long *)(lVar3 + 0x50);
        do {
          if ((long *)*plVar5 != (long *)0x0) {
            (**(code **)(*(long *)*plVar5 + 0x18))();
            *plVar5 = 0;
          }
          lVar2 = lVar2 + -1;
          plVar5 = plVar5 + 0xb;
        } while (lVar2 != 0);
      }
      (**(code **)(*plVar4 + 0x48))(plVar4,lVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
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


