/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00406230; name: FUN_00406230
 */


void FUN_00406230(undefined8 param_1,long param_2,long param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = *(long **)(PTR_DAT_02712ab8 + 8);
  if (plVar2 != (long *)0x0) {
    if (param_3 == 0) {
      if (param_5 == 0) {
        do {
          while( true ) {
            plVar3 = (long *)plVar2[0xe];
            lVar1 = (**(code **)(*plVar2 + 0xb0))(plVar2);
            if (lVar1 == param_2) break;
            plVar2 = plVar3;
            if (plVar3 == (long *)0x0) {
              return;
            }
          }
          FUN_00409300(plVar2,param_4,0xffffffff);
          plVar2 = plVar3;
        } while (plVar3 != (long *)0x0);
      }
      else {
        do {
          plVar3 = (long *)plVar2[0xe];
          lVar1 = (**(code **)(*plVar2 + 0xb0))(plVar2);
          if ((lVar1 == param_2) && (*(int *)(plVar2[0xc] + 0x2c) == param_5)) {
            FUN_00409300(plVar2,param_4,0xffffffff);
          }
          plVar2 = plVar3;
        } while (plVar3 != (long *)0x0);
      }
    }
    else if (param_5 == 0) {
      do {
        while( true ) {
          plVar3 = (long *)plVar2[0xe];
          lVar1 = (**(code **)(*plVar2 + 0xb0))(plVar2);
          if ((lVar1 == param_2) && (*(long *)(plVar2[0xc] + 0x30) == param_3)) break;
          plVar2 = plVar3;
          if (plVar3 == (long *)0x0) {
            return;
          }
        }
        FUN_00409300(plVar2,param_4,0xffffffff);
        plVar2 = plVar3;
      } while (plVar3 != (long *)0x0);
    }
    else {
      do {
        plVar3 = (long *)plVar2[0xe];
        lVar1 = (**(code **)(*plVar2 + 0xb0))(plVar2);
        if (((lVar1 == param_2) && (*(long *)(plVar2[0xc] + 0x30) == param_3)) &&
           (*(int *)(plVar2[0xc] + 0x2c) == param_5)) {
          FUN_00409300(plVar2,param_4,0xffffffff);
        }
        plVar2 = plVar3;
      } while (plVar3 != (long *)0x0);
    }
  }
  return;
}


