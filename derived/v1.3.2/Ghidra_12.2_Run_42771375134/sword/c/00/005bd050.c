/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005bd050; name: FUN_005bd050
 */


void FUN_005bd050(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  (**(code **)(*param_1 + 0x18))();
  if (param_2 == (long *)0x0) {
    lVar3 = FUN_005bc6f0();
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[3] = lVar3;
    param_1[4] = 0;
    plVar2 = (long *)FUN_005bc6f0();
  }
  else {
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[3] = (long)param_2;
    param_1[4] = 0;
    plVar2 = param_2;
  }
  param_1[8] = (long)plVar2;
  param_1[9] = 0;
  plVar2 = (long *)param_1[0xd];
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (plVar2 != param_2) {
    plVar1 = param_1 + 0x11;
    if (((*(byte *)(param_1 + 0x15) & 1) == 0) && (*plVar1 != 0)) {
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      *plVar1 = 0;
    }
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x15] = 0;
    *plVar1 = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0xd] = (long)param_2;
  }
  plVar2 = (long *)param_1[0x19];
  param_1[0x16] = (long)param_2;
  if (plVar2 != param_2) {
    plVar1 = param_1 + 0x1d;
    if (((*(byte *)(param_1 + 0x21) & 1) == 0) && (lVar3 = *plVar1, lVar3 != 0)) {
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x50))(plVar2,lVar3);
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,lVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      *plVar1 = 0;
    }
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x21] = 0;
    *plVar1 = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x19] = (long)param_2;
  }
  param_1[1] = (long)param_2;
  *(undefined1 *)(param_1 + 0x24) = 0;
  return;
}


