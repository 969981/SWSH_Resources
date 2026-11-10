/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0070ec90; name: FUN_0070ec90
 */


void FUN_0070ec90(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  lVar1 = DAT_02715428 + 0x58;
  lVar2 = DAT_02715428 + 0x98;
  *param_1 = DAT_02715428 + 0x10;
  param_1[9] = lVar1;
  param_1[10] = lVar2;
  if (param_1[0x2f] != 0) {
    (**(code **)(*(long *)(param_1[0x2f] + 0x48) + 0x18))();
    param_1[0x2f] = 0;
  }
  if (param_1[0x2e] != 0) {
    (**(code **)(*(long *)(param_1[0x2e] + 0x48) + 0x18))();
    param_1[0x2e] = 0;
  }
  plVar6 = (long *)param_1[0x28];
  if (plVar6 != (long *)0x0) {
    if ((long *)param_1[0x29] == plVar6) {
      plVar5 = plVar6;
    }
    else {
      plVar5 = (long *)param_1[0x29];
      do {
        plVar7 = plVar5 + -1;
        if ((long *)*plVar7 != (long *)0x0) {
          (**(code **)(*(long *)*plVar7 + 0x18))();
          plVar5[-1] = 0;
        }
        plVar5 = plVar7;
      } while (plVar6 != plVar7);
      plVar5 = (long *)param_1[0x28];
    }
    param_1[0x29] = (long)plVar6;
    (**(code **)(*(long *)param_1[0x2b] + 0x18))
              ((long *)param_1[0x2b],plVar5,param_1[0x2a] - (long)plVar5,8);
  }
  plVar6 = (long *)param_1[0x22];
  if (plVar6 != (long *)0x0) {
    if ((long *)param_1[0x23] == plVar6) {
      plVar5 = plVar6;
    }
    else {
      plVar5 = (long *)param_1[0x23];
      do {
        plVar7 = plVar5 + -1;
        if ((long *)*plVar7 != (long *)0x0) {
          (**(code **)(*(long *)*plVar7 + 0x18))();
          plVar5[-1] = 0;
        }
        plVar5 = plVar7;
      } while (plVar6 != plVar7);
      plVar5 = (long *)param_1[0x22];
    }
    param_1[0x23] = (long)plVar6;
    (**(code **)(*(long *)param_1[0x25] + 0x18))
              ((long *)param_1[0x25],plVar5,param_1[0x24] - (long)plVar5,8);
  }
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0xfc));
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0xe4));
  puVar3 = PTR_DAT_027152a8 + 0x50;
  puVar4 = PTR_DAT_027152a8 + 0x90;
  *param_1 = (long)(PTR_DAT_027152a8 + 0x10);
  param_1[9] = (long)puVar3;
  param_1[10] = (long)puVar4;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


