/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011ba420; name: FUN_011ba420
 */


undefined8 FUN_011ba420(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  size_t sVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  if (param_2 == (long *)0x0) {
    return 0;
  }
  plVar8 = *(long **)(param_1 + 0x430);
  if (plVar8 == (long *)0x0) {
LAB_011ba49c:
    plVar8 = *(long **)(param_1 + 0x450);
    if (plVar8 != (long *)0x0) {
      plVar6 = (long *)*plVar8;
      plVar2 = (long *)plVar8[1];
      if (plVar6 != plVar2) {
        plVar1 = (long *)*param_2;
        plVar3 = (long *)param_2[1];
        if (plVar1 == plVar3) {
LAB_011ba5b4:
          sVar4 = (long)plVar2 - (long)(plVar6 + 2);
          if (sVar4 != 0) {
            memmove(plVar6,plVar6 + 2,sVar4);
          }
          plVar6 = plVar6 + ((long)sVar4 >> 4) * 2;
          goto LAB_011ba61c;
        }
        do {
          plVar7 = plVar1;
          if (*plVar1 != *plVar6) {
            do {
              plVar7 = plVar7 + 1;
              if (plVar3 == plVar7) goto LAB_011ba5b4;
            } while (*plVar7 != *plVar6);
          }
          if (plVar7 == plVar3) goto LAB_011ba5b4;
          plVar6 = plVar6 + 2;
        } while (plVar6 != plVar2);
      }
    }
    plVar8 = *(long **)(param_1 + 0x470);
    if (plVar8 == (long *)0x0) {
      return 0;
    }
    plVar6 = (long *)*plVar8;
    plVar2 = (long *)plVar8[1];
    if (plVar6 == plVar2) {
      return 0;
    }
    plVar1 = (long *)*param_2;
    plVar3 = (long *)param_2[1];
    if (plVar1 != plVar3) {
      while( true ) {
        plVar7 = plVar1;
        if (*plVar1 != *plVar6) {
          do {
            plVar7 = plVar7 + 1;
            if (plVar3 == plVar7) goto LAB_011ba5e8;
          } while (*plVar7 != *plVar6);
        }
        if (plVar7 == plVar3) break;
        plVar6 = plVar6 + 0x2c;
        if (plVar6 == plVar2) {
          return 0;
        }
      }
    }
LAB_011ba5e8:
    sVar4 = (long)plVar2 - (long)(plVar6 + 0x2c);
    lVar9 = ((long)sVar4 >> 5) * 0x2e8ba2e8ba2e8ba3;
    if (sVar4 != 0) {
      memmove(plVar6,plVar6 + 0x2c,sVar4);
    }
    lVar5 = 0x160;
  }
  else {
    plVar6 = (long *)*plVar8;
    plVar2 = (long *)plVar8[1];
    if (plVar6 == plVar2) goto LAB_011ba49c;
    plVar1 = (long *)*param_2;
    plVar3 = (long *)param_2[1];
    if (plVar1 != plVar3) {
      do {
        plVar7 = plVar1;
        if (*plVar1 != *plVar6) {
          do {
            plVar7 = plVar7 + 1;
            if (plVar3 == plVar7) goto LAB_011ba588;
          } while (*plVar7 != *plVar6);
        }
        if (plVar7 == plVar3) goto LAB_011ba588;
        plVar6 = plVar6 + 5;
      } while (plVar6 != plVar2);
      goto LAB_011ba49c;
    }
LAB_011ba588:
    sVar4 = (long)plVar2 - (long)(plVar6 + 5);
    lVar9 = ((long)sVar4 >> 3) * -0x3333333333333333;
    if (sVar4 != 0) {
      memmove(plVar6,plVar6 + 5,sVar4);
    }
    lVar5 = 0x28;
  }
  plVar6 = (long *)((long)plVar6 + lVar9 * lVar5);
LAB_011ba61c:
  plVar8[1] = (long)plVar6;
  return 1;
}


