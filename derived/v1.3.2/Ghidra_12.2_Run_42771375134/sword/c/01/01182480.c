/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01182480; name: FUN_01182480
 */


undefined8 FUN_01182480(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  size_t sVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  if (param_2 == (long *)0x0) {
    return 0;
  }
  plVar8 = *(long **)(param_1 + 0x6a8);
  if (plVar8 == (long *)0x0) {
LAB_011824fc:
    plVar8 = *(long **)(param_1 + 0x6c8);
    if (plVar8 == (long *)0x0) {
LAB_01182564:
      plVar8 = *(long **)(param_1 + 0x6e8);
      if (plVar8 != (long *)0x0) {
        plVar6 = (long *)*plVar8;
        plVar4 = (long *)plVar8[1];
        if (plVar6 != plVar4) {
          plVar1 = (long *)*param_2;
          plVar2 = (long *)param_2[1];
          if (plVar1 == plVar2) {
LAB_0118269c:
            sVar3 = (long)plVar4 - (long)(plVar6 + 0x2d);
            lVar9 = ((long)sVar3 >> 3) * 0x4fa4fa4fa4fa4fa5;
            if (sVar3 != 0) {
              memmove(plVar6,plVar6 + 0x2d,sVar3);
            }
            lVar5 = 0x168;
            goto LAB_011826cc;
          }
          do {
            plVar7 = plVar1;
            if (*plVar1 != *plVar6) {
              do {
                plVar7 = plVar7 + 1;
                if (plVar2 == plVar7) goto LAB_0118269c;
              } while (*plVar7 != *plVar6);
            }
            if (plVar7 == plVar2) goto LAB_0118269c;
            plVar6 = plVar6 + 0x2d;
          } while (plVar6 != plVar4);
        }
      }
      plVar8 = *(long **)(param_1 + 0x708);
      if (plVar8 == (long *)0x0) {
        return 0;
      }
      plVar6 = (long *)*plVar8;
      plVar4 = (long *)plVar8[1];
      if (plVar6 == plVar4) {
        return 0;
      }
      plVar1 = (long *)*param_2;
      plVar2 = (long *)param_2[1];
      if (plVar1 != plVar2) {
        while( true ) {
          plVar7 = plVar1;
          if (*plVar1 != *plVar6) {
            do {
              plVar7 = plVar7 + 1;
              if (plVar2 == plVar7) goto LAB_0118267c;
            } while (*plVar7 != *plVar6);
          }
          if (plVar7 == plVar2) break;
          plVar6 = plVar6 + 2;
          if (plVar6 == plVar4) {
            return 0;
          }
        }
      }
    }
    else {
      plVar6 = (long *)*plVar8;
      plVar4 = (long *)plVar8[1];
      if (plVar6 == plVar4) goto LAB_01182564;
      plVar1 = (long *)*param_2;
      plVar2 = (long *)param_2[1];
      if (plVar1 != plVar2) {
        do {
          plVar7 = plVar1;
          if (*plVar1 != *plVar6) {
            do {
              plVar7 = plVar7 + 1;
              if (plVar2 == plVar7) goto LAB_0118267c;
            } while (*plVar7 != *plVar6);
          }
          if (plVar7 == plVar2) goto LAB_0118267c;
          plVar6 = plVar6 + 2;
        } while (plVar6 != plVar4);
        goto LAB_01182564;
      }
    }
LAB_0118267c:
    sVar3 = (long)plVar4 - (long)(plVar6 + 2);
    if (sVar3 != 0) {
      memmove(plVar6,plVar6 + 2,sVar3);
    }
    plVar6 = plVar6 + ((long)sVar3 >> 4) * 2;
  }
  else {
    plVar6 = (long *)*plVar8;
    plVar4 = (long *)plVar8[1];
    if (plVar6 == plVar4) goto LAB_011824fc;
    plVar1 = (long *)*param_2;
    plVar2 = (long *)param_2[1];
    if (plVar1 != plVar2) {
      do {
        plVar7 = plVar1;
        if (*plVar1 != *plVar6) {
          do {
            plVar7 = plVar7 + 1;
            if (plVar2 == plVar7) goto LAB_01182650;
          } while (*plVar7 != *plVar6);
        }
        if (plVar7 == plVar2) goto LAB_01182650;
        plVar6 = plVar6 + 6;
      } while (plVar6 != plVar4);
      goto LAB_011824fc;
    }
LAB_01182650:
    sVar3 = (long)plVar4 - (long)(plVar6 + 6);
    lVar9 = ((long)sVar3 >> 4) * -0x5555555555555555;
    if (sVar3 != 0) {
      memmove(plVar6,plVar6 + 6,sVar3);
    }
    lVar5 = 0x30;
LAB_011826cc:
    plVar6 = (long *)((long)plVar6 + lVar9 * lVar5);
  }
  plVar8[1] = (long)plVar6;
  return 1;
}


