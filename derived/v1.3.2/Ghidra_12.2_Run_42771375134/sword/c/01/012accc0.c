/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012accc0; name: FUN_012accc0
 */


long * FUN_012accc0(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar4 = param_1 + 1;
  if (plVar4 == param_2) {
LAB_012acd0c:
    plVar6 = param_2;
    if ((long *)*param_1 != param_2) {
      plVar3 = (long *)*param_2;
      if ((long *)*param_2 == (long *)0x0) {
        plVar3 = param_2;
        do {
          plVar6 = (long *)plVar3[2];
          bVar1 = (long *)*plVar6 == plVar3;
          plVar3 = plVar6;
        } while (bVar1);
      }
      else {
        do {
          plVar6 = plVar3;
          plVar3 = (long *)plVar6[1];
        } while ((long *)plVar6[1] != (long *)0x0);
      }
      uVar2 = FUN_017d0a60(plVar6 + 4,param_5);
      if ((uVar2 & 1) == 0) {
        if ((long *)*plVar4 != (long *)0x0) {
          param_1 = param_1 + 1;
          plVar6 = (long *)*plVar4;
          do {
            uVar2 = FUN_017d0a60(param_5,plVar6 + 4);
            if ((uVar2 & 1) == 0) {
              uVar2 = FUN_017d0a60(plVar6 + 4,param_5);
              if ((uVar2 & 1) == 0) goto LAB_012aceb8;
              param_1 = plVar6 + 1;
              plVar4 = (long *)*param_1;
              if (plVar4 == (long *)0x0) goto LAB_012aceb8;
            }
            else {
              plVar4 = (long *)*plVar6;
              if (plVar4 == (long *)0x0) goto LAB_012ace58;
              param_1 = plVar6;
            }
            plVar6 = plVar4;
          } while( true );
        }
        goto LAB_012acec0;
      }
    }
    if (*param_2 == 0) {
      *param_3 = (long)param_2;
      plVar4 = param_2;
    }
    else {
      *param_3 = (long)plVar6;
      plVar4 = plVar6 + 1;
    }
  }
  else {
    uVar2 = FUN_017d0a60(param_5,param_2 + 4);
    if ((uVar2 & 1) != 0) goto LAB_012acd0c;
    uVar2 = FUN_017d0a60(param_2 + 4,param_5);
    if ((uVar2 & 1) == 0) {
      *param_3 = (long)param_2;
      *param_4 = (long)param_2;
      return param_4;
    }
    plVar3 = (long *)param_2[1];
    if (plVar3 == (long *)0x0) {
      plVar3 = param_2 + 2;
      plVar6 = (long *)*plVar3;
      if ((long *)*plVar6 != param_2) {
        do {
          lVar5 = *plVar3;
          plVar3 = (long *)(lVar5 + 0x10);
          plVar6 = (long *)*plVar3;
        } while (*plVar6 != lVar5);
      }
    }
    else {
      do {
        plVar6 = plVar3;
        plVar3 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
    if ((plVar6 == plVar4) || (uVar2 = FUN_017d0a60(param_5,plVar6 + 4), (uVar2 & 1) != 0)) {
      if (param_2[1] == 0) {
        *param_3 = (long)param_2;
        return param_2 + 1;
      }
LAB_012ace58:
      *param_3 = (long)plVar6;
      return plVar6;
    }
    if ((long *)*plVar4 != (long *)0x0) {
      param_1 = param_1 + 1;
      plVar6 = (long *)*plVar4;
      do {
        uVar2 = FUN_017d0a60(param_5,plVar6 + 4);
        if ((uVar2 & 1) == 0) {
          uVar2 = FUN_017d0a60(plVar6 + 4,param_5);
          if ((uVar2 & 1) == 0) {
LAB_012aceb8:
            *param_3 = (long)plVar6;
            return param_1;
          }
          param_1 = plVar6 + 1;
          plVar4 = (long *)*param_1;
          if (plVar4 == (long *)0x0) goto LAB_012aceb8;
        }
        else {
          plVar4 = (long *)*plVar6;
          if (plVar4 == (long *)0x0) goto LAB_012ace58;
          param_1 = plVar6;
        }
        plVar6 = plVar4;
      } while( true );
    }
LAB_012acec0:
    *param_3 = (long)plVar4;
  }
  return plVar4;
}


