/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007dca70; name: FUN_007dca70
 */


undefined8 FUN_007dca70(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long local_48;
  
  puVar1 = DAT_029f5478;
  if ((int)param_1[0x22] == 2) {
    if (param_1[0x1f] == 0) {
      return 0;
    }
    if (*(long **)param_1[0x1e] == (long *)0x0) {
      return 0;
    }
    (**(code **)(**(long **)param_1[0x1e] + 0x40))();
    *(undefined4 *)(param_1 + 0x22) = 5;
  }
  else {
    if ((int)param_1[0x22] != 1) {
      return 0;
    }
    if (DAT_029f5478 != (undefined8 *)0x0) {
      plVar7 = (long *)*DAT_029f5478;
      plVar6 = (long *)DAT_029f5478[1];
      (**(code **)(*param_1 + 0x10))(&local_48,param_1);
      if ((plVar7 != plVar6) && (*plVar7 != local_48)) {
        do {
          plVar7 = plVar7 + 1;
          if (plVar6 == plVar7) {
            plVar3 = (long *)DAT_029f5478[1];
            if (plVar6 != plVar3) goto LAB_007dcb5c;
            goto LAB_007dcbe0;
          }
        } while (*plVar7 != local_48);
      }
      plVar3 = plVar7;
      if (plVar7 != plVar6) {
        while (plVar3 = plVar3 + 1, plVar3 != plVar6) {
          lVar2 = *plVar3;
          if (lVar2 != local_48) {
            if (*plVar7 != 0) {
              (**(code **)(*(long *)(*plVar7 + 0x48) + 0x18))();
              *plVar7 = 0;
              lVar2 = *plVar3;
            }
            *plVar3 = 0;
            *plVar7 = lVar2;
            plVar7 = plVar7 + 1;
          }
        }
      }
      plVar3 = (long *)DAT_029f5478[1];
      plVar6 = plVar7;
      if (plVar7 != plVar3) {
LAB_007dcb5c:
        plVar5 = (long *)puVar1[1];
        plVar7 = (long *)((long)plVar6 + ((long)plVar3 - (long)plVar6));
        if (plVar7 != plVar5) {
          lVar2 = (long)plVar3 - (long)plVar6 >> 3;
          plVar7 = plVar6;
          do {
            if (*plVar7 != 0) {
              (**(code **)(*(long *)(*plVar7 + 0x48) + 0x18))();
              *plVar7 = 0;
            }
            lVar4 = plVar7[lVar2];
            plVar7[lVar2] = 0;
            plVar6 = plVar7 + 1;
            *plVar7 = lVar4;
            plVar7 = plVar6;
          } while (plVar5 + -lVar2 != plVar6);
          plVar7 = (long *)puVar1[1];
        }
        if (plVar7 != plVar6) {
          do {
            plVar3 = plVar7 + -1;
            if (*plVar3 != 0) {
              (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
              plVar7[-1] = 0;
            }
            plVar7 = plVar3;
          } while (plVar6 != plVar3);
        }
        puVar1[1] = plVar6;
      }
LAB_007dcbe0:
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
    }
    (**(code **)(*param_1 + 0x48))(param_1);
  }
  return 1;
}


