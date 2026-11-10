/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f5140; name: FUN_006f5140
 */


void FUN_006f5140(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  *(undefined4 *)(param_2 + 3) = 0;
  plVar1 = (long *)*param_2;
  plVar4 = (long *)*param_1;
  if (plVar1 == plVar4) {
    *(undefined4 *)(*plVar1 + 0x18) = 1;
    return;
  }
  do {
    plVar2 = (long *)*plVar1;
    plVar5 = plVar4;
    if (plVar2 == plVar4 || (int)plVar1[3] == 1) break;
    plVar5 = (long *)plVar2[1];
    *(undefined4 *)(plVar2 + 3) = 0;
    plVar4 = plVar5;
    if (plVar1 == plVar5) {
      plVar4 = (long *)plVar2[2];
    }
    if ((plVar4 == (long *)0x0) || ((int)plVar4[3] != 0)) {
      if (plVar1 == plVar5) {
        if ((long *)plVar1[1] != param_2) {
          puVar3 = (undefined8 *)param_2[1];
          plVar1[2] = (long)puVar3;
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = plVar1;
          }
          param_2[1] = (long)plVar1;
          *plVar1 = (long)param_2;
          plVar1 = param_2;
        }
        puVar3 = (undefined8 *)*plVar2;
        plVar4 = (long *)puVar3[1];
        puVar6 = (undefined8 *)plVar1[2];
        plVar2[1] = (long)puVar6;
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = plVar2;
        }
        plVar1[2] = (long)plVar2;
        *plVar2 = (long)plVar1;
        *plVar1 = (long)puVar3;
        if (puVar3 == (undefined8 *)*param_1) {
          *puVar3 = plVar1;
        }
        else if (plVar4 == plVar2) {
          puVar3[1] = plVar1;
        }
        else {
          puVar3[2] = plVar1;
        }
      }
      else {
        if ((long *)plVar1[1] == param_2) {
          puVar3 = (undefined8 *)param_2[2];
          plVar1[1] = (long)puVar3;
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = plVar1;
          }
          param_2[2] = (long)plVar1;
          *plVar1 = (long)param_2;
          plVar1 = param_2;
        }
        puVar3 = (undefined8 *)*plVar2;
        plVar4 = (long *)puVar3[1];
        puVar6 = (undefined8 *)plVar1[1];
        plVar2[2] = (long)puVar6;
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = plVar2;
        }
        plVar1[1] = (long)plVar2;
        *plVar2 = (long)plVar1;
        *plVar1 = (long)puVar3;
        if (puVar3 == (undefined8 *)*param_1) {
          *puVar3 = plVar1;
        }
        else if (plVar4 == plVar2) {
          puVar3[1] = plVar1;
        }
        else {
          puVar3[2] = plVar1;
        }
      }
      *(undefined4 *)(plVar1 + 3) = 1;
      *(undefined4 *)(*(long *)*param_1 + 0x18) = 1;
      return;
    }
    *(undefined4 *)(plVar4 + 3) = 1;
    *(undefined4 *)(plVar1 + 3) = 1;
    plVar1 = (long *)*plVar2;
    plVar4 = (long *)*param_1;
    param_2 = plVar2;
    plVar5 = plVar1;
  } while (plVar1 != plVar4);
  *(undefined4 *)(*plVar5 + 0x18) = 1;
  return;
}


