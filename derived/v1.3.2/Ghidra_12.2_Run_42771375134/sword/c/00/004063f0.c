/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004063f0; name: FUN_004063f0
 */


void FUN_004063f0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(PTR_DAT_02712ab8 + 8);
  if (plVar2 != (long *)0x0) {
    if (param_3 == 0) {
      if (param_5 == 0) {
        do {
          while (lVar1 = (**(code **)(*plVar2 + 0xb0))(plVar2), lVar1 == param_2) {
            FUN_00409440(plVar2,param_4);
            plVar2 = (long *)plVar2[0xe];
            if (plVar2 == (long *)0x0) {
              return;
            }
          }
          plVar2 = (long *)plVar2[0xe];
        } while (plVar2 != (long *)0x0);
      }
      else {
        do {
          lVar1 = (**(code **)(*plVar2 + 0xb0))(plVar2);
          if ((lVar1 == param_2) && (*(int *)(plVar2[0xc] + 0x2c) == param_5)) {
            FUN_00409440(plVar2,param_4);
          }
          plVar2 = (long *)plVar2[0xe];
        } while (plVar2 != (long *)0x0);
      }
    }
    else if (param_5 == 0) {
      do {
        while ((lVar1 = (**(code **)(*plVar2 + 0xb0))(plVar2), lVar1 == param_2 &&
               (*(long *)(plVar2[0xc] + 0x30) == param_3))) {
          FUN_00409440(plVar2,param_4);
          plVar2 = (long *)plVar2[0xe];
          if (plVar2 == (long *)0x0) {
            return;
          }
        }
        plVar2 = (long *)plVar2[0xe];
      } while (plVar2 != (long *)0x0);
    }
    else {
      do {
        lVar1 = (**(code **)(*plVar2 + 0xb0))(plVar2);
        if (((lVar1 == param_2) && (*(long *)(plVar2[0xc] + 0x30) == param_3)) &&
           (*(int *)(plVar2[0xc] + 0x2c) == param_5)) {
          FUN_00409440(plVar2,param_4);
        }
        plVar2 = (long *)plVar2[0xe];
      } while (plVar2 != (long *)0x0);
    }
  }
  return;
}


