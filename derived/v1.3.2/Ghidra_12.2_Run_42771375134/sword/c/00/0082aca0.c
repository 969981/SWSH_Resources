/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0082aca0; name: FUN_0082aca0
 */


void FUN_0082aca0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *local_60;
  long local_58 [3];
  
  if (param_1[3] == param_2[3]) {
    uVar3 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar3;
    plVar2 = param_1 + 1;
    lVar4 = *plVar2;
    plVar6 = param_2 + 1;
    *plVar2 = *plVar6;
    *plVar6 = lVar4;
    uVar3 = param_1[2];
    param_1[2] = param_2[2];
    param_2[2] = uVar3;
    if (param_1[2] != 0) {
      param_1 = (undefined8 *)(*plVar2 + 0x10);
    }
    *param_1 = plVar2;
    if (param_2[2] == 0) {
      *param_2 = plVar6;
    }
    else {
      *(long **)(*plVar6 + 0x10) = plVar6;
    }
  }
  else {
    local_58[2] = 0;
    local_58[0] = 0;
    local_58[1] = 0;
    plVar2 = param_2 + 1;
    plVar6 = (long *)*param_2;
    local_60 = local_58;
    if (plVar6 != plVar2) {
      do {
        while( true ) {
          FUN_00829da0(&local_60,(int)plVar6[4],plVar6 + 5);
          plVar1 = (long *)plVar6[1];
          if ((long *)plVar6[1] == (long *)0x0) break;
          do {
            plVar6 = plVar1;
            plVar1 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
LAB_0082ad48:
          if (plVar6 == plVar2) goto LAB_0082ad60;
        }
        plVar1 = plVar6 + 2;
        plVar5 = (long *)*plVar1;
        if ((long *)*plVar5 != plVar6) {
          do {
            lVar4 = *plVar1;
            plVar1 = (long *)(lVar4 + 0x10);
            plVar6 = (long *)*plVar1;
          } while (*plVar6 != lVar4);
          goto LAB_0082ad48;
        }
        plVar6 = plVar5;
      } while (plVar5 != plVar2);
LAB_0082ad60:
      plVar6 = (long *)*param_2;
    }
    while (plVar6 != plVar2) {
      FUN_00825830(plVar6 + 5);
      plVar1 = (long *)plVar6[1];
      if ((long *)plVar6[1] == (long *)0x0) {
        plVar1 = plVar6 + 2;
        if (*(long **)*plVar1 == plVar6) {
          plVar6 = (long *)*plVar1;
        }
        else {
          do {
            lVar4 = *plVar1;
            plVar1 = (long *)(lVar4 + 0x10);
            plVar6 = (long *)*plVar1;
          } while (*plVar6 != lVar4);
        }
      }
      else {
        do {
          plVar6 = plVar1;
          plVar1 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
    }
    plVar2 = param_1 + 1;
    plVar6 = (long *)*param_1;
    if (plVar6 != plVar2) {
      do {
        while( true ) {
          FUN_00829da0(param_2,(int)plVar6[4],plVar6 + 5);
          plVar1 = (long *)plVar6[1];
          if ((long *)plVar6[1] == (long *)0x0) break;
          do {
            plVar6 = plVar1;
            plVar1 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
LAB_0082ae28:
          if (plVar6 == plVar2) goto LAB_0082ae40;
        }
        plVar1 = plVar6 + 2;
        plVar5 = (long *)*plVar1;
        if ((long *)*plVar5 != plVar6) {
          do {
            lVar4 = *plVar1;
            plVar1 = (long *)(lVar4 + 0x10);
            plVar6 = (long *)*plVar1;
          } while (*plVar6 != lVar4);
          goto LAB_0082ae28;
        }
        plVar6 = plVar5;
      } while (plVar5 != plVar2);
LAB_0082ae40:
      plVar6 = (long *)*param_1;
    }
    while (plVar6 != plVar2) {
      FUN_00825830(plVar6 + 5);
      plVar1 = (long *)plVar6[1];
      if ((long *)plVar6[1] == (long *)0x0) {
        plVar1 = plVar6 + 2;
        if (*(long **)*plVar1 == plVar6) {
          plVar6 = (long *)*plVar1;
        }
        else {
          do {
            lVar4 = *plVar1;
            plVar1 = (long *)(lVar4 + 0x10);
            plVar6 = (long *)*plVar1;
          } while (*plVar6 != lVar4);
        }
      }
      else {
        do {
          plVar6 = plVar1;
          plVar1 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
    }
    plVar6 = local_60;
    while (plVar6 != local_58) {
      FUN_00829da0(param_1,(int)plVar6[4],plVar6 + 5);
      plVar2 = (long *)plVar6[1];
      if ((long *)plVar6[1] == (long *)0x0) {
        plVar2 = plVar6 + 2;
        if (*(long **)*plVar2 == plVar6) {
          plVar6 = (long *)*plVar2;
        }
        else {
          do {
            lVar4 = *plVar2;
            plVar2 = (long *)(lVar4 + 0x10);
            plVar6 = (long *)*plVar2;
          } while (*plVar6 != lVar4);
        }
      }
      else {
        do {
          plVar6 = plVar2;
          plVar2 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
    }
    if (local_58[2] == 0) {
      plVar6 = local_60;
      while (plVar6 != local_58) {
        FUN_00825500(plVar6 + 5);
        plVar2 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) {
          plVar2 = plVar6 + 2;
          if (*(long **)*plVar2 == plVar6) {
            plVar6 = (long *)*plVar2;
          }
          else {
            do {
              lVar4 = *plVar2;
              plVar2 = (long *)(lVar4 + 0x10);
              plVar6 = (long *)*plVar2;
            } while (*plVar6 != lVar4);
          }
        }
        else {
          do {
            plVar6 = plVar2;
            plVar2 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
        }
      }
    }
    FUN_0082f090(&local_60,local_58[0]);
  }
  return;
}


