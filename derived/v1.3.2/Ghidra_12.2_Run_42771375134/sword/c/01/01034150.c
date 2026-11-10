/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01034150; name: FUN_01034150
 */


void FUN_01034150(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *local_50;
  long *local_48;
  long local_40;
  long local_38;
  
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_2[1];
  (**(code **)*param_2)(&local_50,param_2);
  param_1[3] = local_40;
  param_1[4] = local_38;
  param_1[1] = (long)local_50;
  param_1[2] = (long)local_48;
  (**(code **)(*param_2 + 8))(&local_50,param_2);
  plVar1 = local_50;
  local_50 = (long *)0x0;
  plVar5 = (long *)param_1[5];
  param_1[5] = (long)plVar1;
  if (plVar5 == (long *)0x0) {
    param_1[7] = local_40;
    param_1[8] = local_38;
    param_1[6] = (long)local_48;
    local_50 = (long *)0x0;
  }
  else {
    lVar2 = *plVar5;
    if (lVar2 != 0) {
      lVar4 = lVar2;
      lVar3 = plVar5[1];
      if (plVar5[1] != lVar2) {
        do {
          lVar4 = lVar3 + -0x98;
          if (*(char *)(lVar3 + -0x48) != '\0') {
            *(undefined1 *)(lVar3 + -0x48) = 0;
          }
          lVar3 = lVar4;
        } while (lVar2 != lVar4);
        lVar4 = *plVar5;
      }
      plVar5[1] = lVar2;
      (**(code **)(*(long *)plVar5[3] + 0x18))((long *)plVar5[3],lVar4,plVar5[2] - lVar4,8);
    }
    (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],plVar5,param_1[7],param_1[8]);
    plVar1 = local_50;
    param_1[6] = (long)local_48;
    param_1[7] = local_40;
    param_1[8] = local_38;
    local_50 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      lVar2 = *plVar1;
      if (lVar2 != 0) {
        lVar4 = lVar2;
        lVar3 = plVar1[1];
        if (plVar1[1] != lVar2) {
          do {
            lVar4 = lVar3 + -0x98;
            if (*(char *)(lVar3 + -0x48) != '\0') {
              *(undefined1 *)(lVar3 + -0x48) = 0;
            }
            lVar3 = lVar4;
          } while (lVar2 != lVar4);
          lVar4 = *plVar1;
        }
        plVar1[1] = lVar2;
        (**(code **)(*(long *)plVar1[3] + 0x18))((long *)plVar1[3],lVar4,plVar1[2] - lVar4,8);
      }
      (**(code **)(*local_48 + 0x18))(local_48,plVar1,local_40,local_38);
    }
  }
  (**(code **)(*param_2 + 0x10))(&local_50,param_2);
  plVar1 = local_50;
  local_50 = (long *)0x0;
  plVar5 = (long *)param_1[9];
  param_1[9] = (long)plVar1;
  if (plVar5 == (long *)0x0) {
    param_1[0xb] = local_40;
    param_1[0xc] = local_38;
    param_1[10] = (long)local_48;
  }
  else {
    lVar2 = *plVar5;
    if (lVar2 != 0) {
      lVar4 = lVar2;
      lVar3 = plVar5[1];
      if (plVar5[1] != lVar2) {
        do {
          lVar4 = lVar3 + -0x98;
          if (*(char *)(lVar3 + -0x48) != '\0') {
            *(undefined1 *)(lVar3 + -0x48) = 0;
          }
          lVar3 = lVar4;
        } while (lVar2 != lVar4);
        lVar4 = *plVar5;
      }
      plVar5[1] = lVar2;
      (**(code **)(*(long *)plVar5[3] + 0x18))((long *)plVar5[3],lVar4,plVar5[2] - lVar4,8);
    }
    (**(code **)(*(long *)param_1[10] + 0x18))((long *)param_1[10],plVar5,param_1[0xb],param_1[0xc])
    ;
    plVar1 = local_50;
    param_1[10] = (long)local_48;
    param_1[0xb] = local_40;
    param_1[0xc] = local_38;
    local_50 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      lVar2 = *plVar1;
      if (lVar2 != 0) {
        lVar4 = lVar2;
        lVar3 = plVar1[1];
        if (plVar1[1] != lVar2) {
          do {
            lVar4 = lVar3 + -0x98;
            if (*(char *)(lVar3 + -0x48) != '\0') {
              *(undefined1 *)(lVar3 + -0x48) = 0;
            }
            lVar3 = lVar4;
          } while (lVar2 != lVar4);
          lVar4 = *plVar1;
        }
        plVar1[1] = lVar2;
        (**(code **)(*(long *)plVar1[3] + 0x18))((long *)plVar1[3],lVar4,plVar1[2] - lVar4,8);
      }
      (**(code **)(*local_48 + 0x18))(local_48,plVar1,local_40,local_38);
    }
  }
  return;
}


