/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00709620; name: FUN_00709620
 */


void FUN_00709620(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  puVar1 = PTR_DAT_027159d0 + 0xb0;
  puVar2 = PTR_DAT_027159d0 + 0xf0;
  *param_1 = (long)(PTR_DAT_027159d0 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0x4c] != 0) {
    (**(code **)(*(long *)(param_1[0x4c] + 0x48) + 0x18))();
    param_1[0x4c] = 0;
  }
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x244));
  plVar4 = (long *)param_1[0x42];
  if (plVar4 != (long *)0x0) {
    if ((long *)param_1[0x43] == plVar4) {
      plVar3 = plVar4;
    }
    else {
      plVar3 = (long *)param_1[0x43];
      do {
        plVar5 = plVar3 + -1;
        if (*plVar5 != 0) {
          (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
          plVar3[-1] = 0;
        }
        plVar3 = plVar5;
      } while (plVar4 != plVar5);
      plVar3 = (long *)param_1[0x42];
    }
    param_1[0x43] = (long)plVar4;
    (**(code **)(*(long *)param_1[0x45] + 0x18))
              ((long *)param_1[0x45],plVar3,param_1[0x44] - (long)plVar3,8);
  }
  FUN_006ff0c0(param_1);
  return;
}


