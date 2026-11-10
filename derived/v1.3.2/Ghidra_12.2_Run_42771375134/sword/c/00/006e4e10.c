/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e4e10; name: FUN_006e4e10
 */


long FUN_006e4e10(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  plVar3 = (long *)FUN_006e4f30();
  if (plVar3 == (long *)0x0) {
    lVar5 = 0;
  }
  else {
    plVar6 = (long *)*plVar3;
    FUN_006e5180(param_1,plVar3);
    puVar2 = PTR_DAT_02710920;
    if (plVar6 == (long *)0x0) {
      lVar5 = 1;
    }
    else {
      lVar5 = 1;
      do {
        if ((int)plVar6[7] != (int)param_2[5]) {
          return lVar5;
        }
        plVar3 = plVar6 + 2;
        if (plVar6[5] != 0) {
          plVar3 = plVar6 + 3;
        }
        plVar1 = param_2;
        if (param_2[3] != 0) {
          plVar1 = param_2 + 1;
        }
        if (((param_2[3] == 0) || (plVar6[5] == 0)) || (*plVar3 != *plVar1)) {
          if (*plVar3 != *plVar1) {
            return lVar5;
          }
        }
        else {
          lVar4 = plVar6[2];
          plVar3 = (long *)puVar2;
          if (lVar4 != 0) {
            plVar3 = (long *)(lVar4 + 0x58);
          }
          plVar1 = (long *)puVar2;
          if (*param_2 != 0) {
            plVar1 = (long *)(*param_2 + 0x58);
          }
          if (*plVar3 != *plVar1) {
            return lVar5;
          }
        }
        plVar3 = (long *)*plVar6;
        FUN_006e5180(param_1,plVar6);
        lVar5 = lVar5 + 1;
        plVar6 = plVar3;
      } while (plVar3 != (long *)0x0);
    }
  }
  return lVar5;
}


