/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00702bf0; name: FUN_00702bf0
 */


void FUN_00702bf0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  puVar1 = PTR_DAT_02715920 + 0xa0;
  puVar2 = PTR_DAT_02715920 + 0xe0;
  *param_1 = (long)(PTR_DAT_02715920 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0x27] != 0) {
    (**(code **)(*(long *)(param_1[0x27] + 0x48) + 0x18))();
    param_1[0x27] = 0;
  }
  if (param_1[0x26] != 0) {
    (**(code **)(*(long *)(param_1[0x26] + 0x48) + 0x18))();
    param_1[0x26] = 0;
  }
  if (param_1[0x25] != 0) {
    (**(code **)(*(long *)(param_1[0x25] + 0x48) + 0x18))();
    param_1[0x25] = 0;
  }
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x114));
  plVar4 = (long *)param_1[0x1c];
  if (plVar4 != (long *)0x0) {
    if ((long *)param_1[0x1d] == plVar4) {
      plVar3 = plVar4;
    }
    else {
      plVar3 = (long *)param_1[0x1d];
      do {
        plVar5 = plVar3 + -1;
        if (*plVar5 != 0) {
          (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
          plVar3[-1] = 0;
        }
        plVar3 = plVar5;
      } while (plVar4 != plVar5);
      plVar3 = (long *)param_1[0x1c];
    }
    param_1[0x1d] = (long)plVar4;
    (**(code **)(*(long *)param_1[0x1f] + 0x18))
              ((long *)param_1[0x1f],plVar3,param_1[0x1e] - (long)plVar3,8);
  }
  plVar4 = (long *)param_1[0x16];
  if (plVar4 != (long *)0x0) {
    if ((long *)param_1[0x17] == plVar4) {
      plVar3 = plVar4;
    }
    else {
      plVar3 = (long *)param_1[0x17];
      do {
        plVar5 = plVar3 + -1;
        if (*plVar5 != 0) {
          (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
          plVar3[-1] = 0;
        }
        plVar3 = plVar5;
      } while (plVar4 != plVar5);
      plVar3 = (long *)param_1[0x16];
    }
    param_1[0x17] = (long)plVar4;
    (**(code **)(*(long *)param_1[0x19] + 0x18))
              ((long *)param_1[0x19],plVar3,param_1[0x18] - (long)plVar3,8);
  }
  FUN_00700320(param_1);
  return;
}


